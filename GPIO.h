#ifndef GPIO__h
#define GPIO__h

#define HIGH 1
#define LOW 0
#define ON 1
#define OFF 0
typedef struct GPIO_PIN{
	int const map;
	char const folder[13];
	int is_active,direction,value;
} GPIO_PIN;
extern struct GPIO_PIN GPIO_PD1;// {1,"gpio1_pd1",0};
extern struct GPIO_PIN GPIO_PD2;// {2,"gpio2_pd2",0};
extern struct GPIO_PIN GPIO_PD3;// {3,"gpio3_pd3",0};
extern struct GPIO_PIN GPIO_PD4;// {4,"gpio4_pd4",0};
extern struct GPIO_PIN GPIO_PD5;// {5,"gpio5_pd5",0};
extern struct GPIO_PIN GPIO_PD6;// {6,"gpio6_pd6",0};
extern struct GPIO_PIN GPIO_PD7;// {7,"gpio7_pd7",0};
extern struct GPIO_PIN GPIO_PD8;// {8,"gpio8_pd8",0};
extern struct GPIO_PIN GPIO_PD9;// {9,"gpio9_pd9",0};
extern struct GPIO_PIN GPIO_PD10;// {10,"gpio10_pd10",0};
extern struct GPIO_PIN GPIO_PD11;// {11,"gpio11_pd11",0};
extern struct GPIO_PIN GPIO_PD12;// {12,"gpio12_pd12",0};
extern struct GPIO_PIN GPIO_PD13;// {13,"gpio13_pd13",0};
extern struct GPIO_PIN GPIO_PD14;// {14,"gpio14_pd14",0};
extern struct GPIO_PIN GPIO_PD15;// {15,"gpio15_pd15",0};
extern struct GPIO_PIN GPIO_PD16;// {16,"gpio16_pd16",0};
extern struct GPIO_PIN GPIO_PD17;// {17,"gpio17_pd17",0};
extern struct GPIO_PIN GPIO_PD18;// {18,"gpio18_pd18",0};
extern struct GPIO_PIN GPIO_PD19;// {19,"gpio19_pd19",0};
extern struct GPIO_PIN GPIO_PD20;// {20,"gpio20_pd20",0};
extern struct GPIO_PIN GPIO_PD21;// {21,"gpio21_pd21",0};
extern struct GPIO_PIN GPIO_PD22;// {22,"gpio22_pd22",0};
extern struct GPIO_PIN GPIO_PD23;// {23,"gpio23_pd23",0};
extern struct GPIO_PIN GPIO_PD24;// {24,"gpio24_pd24",0};
extern struct GPIO_PIN GPIO_PD25;// {25,"gpio25_pd25",0};
extern struct GPIO_PIN GPIO_PD26;// {26,"gpio26_pd26",0};
extern struct GPIO_PIN GPIO_PD27;// {27,"gpio27_pd27",0};
extern struct GPIO_PIN GPIO_PH7;// {28,"gpio28_ph7",0};
extern struct GPIO_PIN GPIO_PB10;// {29,"gpio29_pb10",0};
extern struct GPIO_PIN GPIO_PB11;// {30,"gpio30_pb11",0};
extern struct GPIO_PIN GPIO_PI10;// {31,"gpio31_pi10",0};
extern struct GPIO_PIN GPIO_PI11;// {32,"gpio32_pi11",0};
extern struct GPIO_PIN GPIO_PI12;// {33,"gpio33_pi12",0};
extern struct GPIO_PIN GPIO_PI13;// {34,"gpio34_pi13",0};

#endif