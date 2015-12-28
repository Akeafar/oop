using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Net;
using System.Net.NetworkInformation;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LabkaSeti
{
    public partial class Form1 : Form
    {

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear();
            NetworkInterface[] adapters = NetworkInterface.GetAllNetworkInterfaces();
           
         

            //Dns[] d = Dns.GetHostByName(host).AddressList[0];

            string host = Dns.GetHostName();

            listBox1.Items.Add("PC name...............................:"+host);
            
            IPAddress qwe = Dns.GetHostByName(host).AddressList[0];
            string ewq;
            ewq = qwe.ToString();
            listBox1.Items.Add("IPv4-address.................................:"+ewq);


            listBox1.Items.Add("IPv6 chanel local address: " + Dns.GetHostEntry(Dns.GetHostName()).AddressList[0].ToString());


            //UnicastIPAddressInformationCollection uniCast = properties.UnicastAddresses;
            //UnicastIPAddressInformation uni = uniCast[0];
          //  listBox1.Items.Add(uni.IPv4Mask);
           // IPInterfaceProperties adapterProperties = tempNetworkInterface.GetIPProperties();
            //UnicastIPAddressInformationCollection uniCast = adapterProperties.UnicastAddresses;
            //UnicastIPAddressInformation uni = uniCast[1];

            listBox1.Items.Add("-------------------------------- ");
            foreach (NetworkInterface adapter in adapters)
            {
                IPInterfaceProperties properties = adapter.GetIPProperties() ;
                IPAddressCollection dhcp_addresses = properties.DhcpServerAddresses;
                IPAddressCollection dns_addresses = properties.DnsAddresses;
                
               // Dns test= q
                listBox1.Items.Add(adapter.Description);
                //listBox1.Items.Add("  IP4 .............................. : " + ip4.ToString());



                listBox1.Items.Add("ID.........................................:"+adapter.Id);
                listBox1.Items.Add("Interface Type......................:"+adapter.NetworkInterfaceType);
                listBox1.Items.Add("Status...................................:"+adapter.OperationalStatus);
                listBox1.Items.Add("Speed..................................:"+adapter.Speed);
                listBox1.Items.Add("Supports Multicast...............:"+adapter.SupportsMulticast);
                listBox1.Items.Add("Packets Sent.......................:"+adapter.GetIPv4Statistics().UnicastPacketsSent.ToString());
                listBox1.Items.Add("Packets Recived.................:"+adapter.GetIPv4Statistics().UnicastPacketsReceived.ToString());


                UnicastIPAddressInformationCollection uniCast = properties.UnicastAddresses;
                GatewayIPAddressInformationCollection gateAwayCast = properties.GatewayAddresses;

                try
                {
                    UnicastIPAddressInformation uni = uniCast[1];
                    GatewayIPAddressInformation gtw = gateAwayCast[0];
                    listBox1.Items.Add("IP.........................................:" + uni.Address);
                    listBox1.Items.Add("Mask....................................:" + uni.IPv4Mask);
                    listBox1.Items.Add("Default gateway...................:" + gtw.Address);
                }
                catch { }



                if (dhcp_addresses.Count > 0)
                {   
                    foreach (IPAddress address in dhcp_addresses)
                    {
                        listBox1.Items.Add("DHCP Address .....................:" + address.ToString());
                    }
                }
                if (dns_addresses.Count> 0)
                {
                    foreach (IPAddress address in dns_addresses)
                    {
                        listBox1.Items.Add("DNS Address ......................:" + address.ToString());
                    }
                }
              
                listBox1.Items.Add("DNS suffix .............................. : "+ properties.DnsSuffix);
                listBox1.Items.Add("DNS enabled ............................. : "+ properties.IsDnsEnabled);
                listBox1.Items.Add("Dynamically configured DNS .............. : "+ properties.IsDynamicDnsEnabled);
                listBox1.Items.Add("Physical Address ........................ : " + adapter.GetPhysicalAddress().ToString());
                listBox1.Items.Add("-------------------------------- ");
            }
         }

        private void button2_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear();

            Ping ping = new Ping();
            PingOptions options = new PingOptions();
            options.DontFragment = true;
            string data = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
            byte[] buffer = Encoding.ASCII.GetBytes(data);
            int timeout = 120;

            try
            {
                if (textBox1.Text.ToString() != "")
                {
                    PingReply reply = ping.Send(textBox1.Text, timeout, buffer, options);
                    if (reply.Status == IPStatus.Success)
                    {
                        listBox1.Items.Add("Address: " + reply.Address.ToString());
                        listBox1.Items.Add("RoundTrip time: " + reply.RoundtripTime);
                        listBox1.Items.Add("Time to live: " + reply.Options.Ttl);
                        listBox1.Items.Add("Don't fragment: " + reply.Options.DontFragment);
                        listBox1.Items.Add("Buffer size: " + reply.Buffer.Length);
                    }
                    else
                    {
                        listBox1.Items.Add("Address's not availeble");
                    }
                }
                else
                {

                    listBox1.Items.Add("Enter address");

                }
            }
            catch { }

        }

        private void button3_Click(object sender, EventArgs e)
        {
            NetworkInterface[] adapters = NetworkInterface.GetAllNetworkInterfaces();

            foreach (NetworkInterface adapter in adapters)
            {
                listBox1.Items.Add("Physical Address ........................ : " + adapter.GetPhysicalAddress().ToString());
            }
        }

        private void Form1_Resize(object sender, EventArgs e)
        {
            if (WindowState == FormWindowState.Minimized)
            {
                Hide();
            }
        }

        private void notifyIcon1_DoubleClick(object sender, EventArgs e)
        {
            Show();
    WindowState = FormWindowState.Normal;

        }




        //public IEnumerable<NetworkInterface> networkInterfaces { get; set; }
    }
}
