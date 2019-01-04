using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace CharGen
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private int race, gender;
        public MainWindow()
        {
            InitializeComponent();
            Character ageless = new Character("Amalja");
            ageless.gender = "male";
        }

        private void ButtonNextRace_Click(object sender, RoutedEventArgs e)
        {

        }

        private void ButtonPrevRace_Click(object sender, RoutedEventArgs e)
        {

        }

    }

    class Character
    {
        public string race, gender, age, height, btype, hlen, hcolor, ecolor, residence, homeplanet, allegiance, profession, affinity, element, align;
        public int level;

        public Character(string selection)
        {
            race = selection;
        }
    }
}
