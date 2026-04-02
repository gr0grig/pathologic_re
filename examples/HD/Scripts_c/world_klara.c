// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:,7:object:,8:object:,9:object:,10:object:,11:object:,12:object:,13:object:,14:object:,15:object:,16:object:

maintask task_0
{
	void init(void)
	{
		@SetVariable("branch", 2);
		@SetSaveProperty(0, 2);
		func_52();
		func_7908();
		func_8948();
		func_11501();
		float var_4579_float;
		float var_4580_float;
		func_284(var_4580_float);
		var_4580_float = var_4579_float;
		func_12480();
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnGameTime(int iID, float fTime)
	{
		int var_3_int;
		iID = var_3_int;
		float var_4_float;
		fTime = var_4_float;
		func_8893(var_3_int, var_4_float);
		bool var_2_bool;
		if(var_2_bool != 0)
			return 0;
		bool var_4307_bool; int var_4308_int; float var_4309_float;
		iID = var_4308_int;
		fTime = var_4309_float;
		func_11440(var_4308_int, var_4309_float);
		if(var_4307_bool != 0)
			return 0;
		int var_4816_int; float var_4817_float;
		iID = var_4816_int;
		fTime = var_4817_float;
		func_11536(var_4816_int, var_4817_float);
	}

}


void OnTrigger(string name, string var_1_string)
{
	int var_4_int;
	if(name == "playsound") {
		@PlaySound(var_1_string);
	} else if(name == "enable_bonfire") {
			@_strtoi(var_4_int, var_1_string);
			func_7608(var_4_int - 1);
	}
Label_7496:
	for(;;) {

	}
	
	if(!(name == "disable_bonfire")) goto Label_7496;
	int var_5_int;
	@_strtoi(var_5_int, var_1_string);
	func_7685(var_5_int - 1);
}


void OnConsole(string var_0_string, string var_1_string)
{
	int var_12_int; int var_13_int; object var_14_object; int var_15_int; int var_16_int; object var_17_object; object var_18_object; object var_19_object; cvector var_20_cvector; object var_21_object;
	if(var_0_string == "horror") {
		@_strtoi(var_12_int, var_1_string);
		int var_24_int;
		var_12_int = var_24_int;
		func_442(var_24_int);
		var_39_object = GlobalVars[13];
		var_39_object->size(var_13_int);
		bool var_40_bool = false;
		if(var_12_int >= 0) {
			if(var_12_int < var_13_int)
				var_40_bool = true;
		}
		if(var_40_bool != 0) {
			var_44_object = GlobalVars[13];
			var_44_object->get(var_14_object, var_12_int);
			object var_45_object;
			var_14_object = var_45_object;
			func_305(var_45_object, 1);
			@Trace("Replaced");
			var_14_object = null;
		} else {
				@Trace("Invalid region index");
	}
			if(var_0_string == "nail") {
				@_strtoi(var_15_int, var_1_string);
				int var_76_int;
				var_15_int = var_76_int;
				func_472(var_76_int);
				var_88_object = GlobalVars[13];
				var_88_object->size(var_16_int);
				bool var_89_bool = false;
				if(var_15_int >= 0) {
					if(var_15_int < var_16_int)
						var_89_bool = true;
				}
				if(var_89_bool != 0) {
					var_93_object = GlobalVars[13];
					var_93_object->get(var_17_object, var_15_int);
					object var_94_object;
					var_17_object = var_94_object;
					func_305(var_94_object, 2);
					@Trace("Replaced");
					var_17_object = null;
				} else {
				@Trace("Invalid region index");
			}
			if(var_0_string == "fogme") {
				object var_100_object;
				func_74(var_100_object);
				var_100_object = var_18_object;
				var_18_object->GetScene(var_19_object);
				var_18_object->GetPosition(var_20_cvector);
				@AddActorByType(var_21_object, "fog", var_19_object, var_20_cvector, [0.0, 0.0, 1.0], "fog_stat.xml");
				var_21_object = null;
				var_19_object = null;
				var_18_object = null;
			} else if(var_0_string == "sepia") {
				func_289();
			} else if(var_0_string == "nosepia") {
				func_294();
			}
			}
	}
	goto Label_7607;
	
Label_7607:
	for(;;) {

	}
	
}


// @pe
void func_11264(bool var_4944_bool)
{
	int var_4947_int;
	func_132(var_4947_int, "k8AglajaVisit");
	if(var_4947_int != 0) {
		var_4944_bool = true;
		return 0;
	}
	var_4944_bool = false;
}


// @pe
void func_5124(int var_3679_int, int var_3680_int, object var_3681_object, object var_3682_object, object var_3683_object, object var_3684_object)
{
	if(var_3680_int == 0) {
		func_796(3, false);
		func_813(3, false, 1);
		int var_3693_int; object var_3694_object; object var_3695_object; object var_3696_object;
		var_3679_int = var_3693_int;
		var_3681_object = var_3694_object;
		var_3682_object = var_3695_object;
		var_3683_object = var_3696_object;
		func_720(3, var_3693_int, var_3694_object, var_3695_object, var_3696_object);
		object var_3697_object;
		var_3684_object = var_3697_object;
		func_305(var_3697_object, 2);
		func_870(3, false, 7);
		func_932(3, true, 7);
	}
	func_779(3, false);
	int var_3708_int; int var_3709_int;
	var_3679_int = var_3708_int;
	var_3680_int = var_3709_int;
	func_3847(3, var_3708_int, var_3709_int);
}


void func_8200(void)
{
	object var_4427_object;
	@GetMainOutdoorScene(var_4427_object);
	var_4428_object = GlobalVars[0];
	object var_4429_object; object var_4430_object;
	var_4427_object = var_4430_object;
	func_7762(var_4429_object, var_4430_object, 1);
	var_4429_object = var_4428_object;
	GlobalVars[0] = var_4428_object;
	var_4451_object = GlobalVars[1];
	object var_4452_object; object var_4453_object;
	var_4427_object = var_4453_object;
	func_7762(var_4452_object, var_4453_object, 2);
	var_4452_object = var_4451_object;
	GlobalVars[1] = var_4451_object;
	var_4455_object = GlobalVars[2];
	object var_4456_object; object var_4457_object;
	var_4427_object = var_4457_object;
	func_7762(var_4456_object, var_4457_object, 3);
	var_4456_object = var_4455_object;
	GlobalVars[2] = var_4455_object;
	var_4459_object = GlobalVars[3];
	object var_4460_object; object var_4461_object;
	var_4427_object = var_4461_object;
	func_7762(var_4460_object, var_4461_object, 4);
	var_4460_object = var_4459_object;
	GlobalVars[3] = var_4459_object;
	var_4463_object = GlobalVars[4];
	object var_4464_object; object var_4465_object;
	var_4427_object = var_4465_object;
	func_7762(var_4464_object, var_4465_object, 5);
	var_4464_object = var_4463_object;
	GlobalVars[4] = var_4463_object;
	var_4467_object = GlobalVars[5];
	object var_4468_object; object var_4469_object;
	var_4427_object = var_4469_object;
	func_7762(var_4468_object, var_4469_object, 6);
	var_4468_object = var_4467_object;
	GlobalVars[5] = var_4467_object;
	var_4471_object = GlobalVars[12];
	object var_4472_object;
	func_126(var_4472_object);
	var_4472_object = var_4471_object;
	GlobalVars[12] = var_4471_object;
	func_7773(false);
	func_8748();
	func_8823();
	@SendWorldWndMessage(100);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11276(bool var_4820_bool)
{
	int var_4823_int;
	func_132(var_4823_int, "k9AglajaVisit");
	if(var_4823_int != 0) {
		var_4820_bool = true;
		return 0;
	}
	var_4820_bool = false;
}


// @pe
void func_7182(int var_2999_int, int var_3000_int, object var_3001_object, object var_3002_object, object var_3003_object, object var_3004_object)
{
	if(var_3000_int == 0) {
		func_796(14, true);
		func_813(14, true, 1);
		int var_3013_int; object var_3014_object; object var_3015_object; object var_3016_object;
		var_2999_int = var_3013_int;
		var_3001_object = var_3014_object;
		var_3002_object = var_3015_object;
		var_3003_object = var_3016_object;
		func_641(14, var_3013_int, var_3014_object, var_3015_object, var_3016_object);
		object var_3017_object;
		var_3004_object = var_3017_object;
		func_305(var_3017_object, 1);
		func_870(14, true, 5);
		func_932(14, false, 5);
	}
	func_779(14, false);
	int var_3028_int; int var_3029_int;
	var_2999_int = var_3028_int;
	var_3000_int = var_3029_int;
	func_2584(14, var_3028_int, var_3029_int);
}


// @pe
void func_6161(int var_2834_int, int var_2835_int, object var_2836_object, object var_2837_object, object var_2838_object, object var_2839_object)
{
	if(var_2835_int == 0) {
		func_796(9, true);
		func_813(9, true, 1);
		int var_2848_int; object var_2849_object; object var_2850_object; object var_2851_object;
		var_2834_int = var_2848_int;
		var_2836_object = var_2849_object;
		var_2837_object = var_2850_object;
		var_2838_object = var_2851_object;
		func_641(9, var_2848_int, var_2849_object, var_2850_object, var_2851_object);
		object var_2852_object;
		var_2839_object = var_2852_object;
		func_305(var_2852_object, 1);
		func_870(9, true, 7);
		func_932(9, false, 7);
	}
	func_779(9, false);
	int var_2863_int; int var_2864_int;
	var_2834_int = var_2863_int;
	var_2835_int = var_2864_int;
	func_2764(9, var_2863_int, var_2864_int);
}


// @pe
void func_11288(bool var_4857_bool)
{
	int var_4860_int;
	func_132(var_4860_int, "k11AglajaVisit");
	if(var_4860_int != 0) {
		var_4857_bool = true;
		return 0;
	}
	var_4857_bool = false;
}


void func_10266(void)
{
	object var_5800_object;
	func_11417(var_5800_object);
	object var_5798_object;
	var_5800_object = var_5798_object;
	object var_5799_object;
	var_5798_object->FindMark(var_5799_object, "k2q03Arfist");
	if(var_5799_object != 0)
		var_5799_object->Remove();
	var_5798_object->FindMark(var_5799_object, "k2q01AlexandrGotoMladVlad");
	if(var_5799_object != 0)
		var_5799_object->Remove();
	var_5798_object->FindMark(var_5799_object, "k2q01BigVladGotoOspina");
	if(var_5799_object != 0)
		var_5799_object->Remove();
	var_5798_object->FindMark(var_5799_object, "k2q01MladVladGotoOspina");
	if(var_5799_object != 0)
		var_5799_object->Remove();
	var_5798_object->FindMark(var_5799_object, "k2q03Arfist");
	if(var_5799_object != 0)
		var_5799_object->Remove();
	var_5798_object->FindMark(var_5799_object, "k2q04AnnaGotoGatherer1");
	if(var_5799_object != 0)
		var_5799_object->Remove();
	var_5798_object->FindMark(var_5799_object, "k2q04AnnaGotoGatherer2");
	if(var_5799_object != 0)
		var_5799_object->Remove();
	var_5798_object->FindMark(var_5799_object, "k2q04AnnaGotoGatherer3");
	if(var_5799_object != 0)
		var_5799_object->Remove();
	var_5798_object->FindMark(var_5799_object, "k2q04MorlokGotoAndrei");
	if(var_5799_object != 0)
		var_5799_object->Remove();
	var_5798_object->FindMark(var_5799_object, "k2q03LaraLetter");
	if(var_5799_object != 0)
		var_5799_object->Remove();
	var_5798_object->FindMark(var_5799_object, "k2q04MladVladGotoAnna");
	if(var_5799_object != 0)
		var_5799_object->Remove();
	var_5798_object->FindMark(var_5799_object, "k2q02KaterinaGotoLara");
	if(var_5799_object != 0)
		var_5799_object->Remove();
	bool var_5825_bool;
	func_11392(var_5825_bool, 461);
	bool var_5827_bool;
	func_11392(var_5827_bool, 470);
	bool var_5829_bool;
	func_11392(var_5829_bool, 476);
	bool var_5831_bool;
	func_11392(var_5831_bool, 507);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1050(int var_724_int, int var_725_int)
{
	bool var_726_bool = true;
	bool var_727_bool = true;
	var_729_bool = var_725_int >= 22;
	if(var_729_bool != 1) {
		var_731_bool = var_725_int < 4;
		if(var_731_bool != 1)
			var_727_bool = false;
	}
	if(var_727_bool != 1) {
		bool var_732_bool = false;
		if(var_725_int >= 6) {
			if(var_725_int < 8)
				var_732_bool = true;
		}
		if(var_732_bool != 1)
			var_726_bool = false;
	}
	if(var_726_bool != 0) {
		int var_737_int;
		var_724_int = var_737_int;
		func_779(var_737_int, true);
	} else {
		int var_748_int;
		var_724_int = var_748_int;
		func_779(var_748_int, false);
	}
	
}


// @pe
void func_11300(bool var_4841_bool)
{
	int var_4844_int;
	func_132(var_4844_int, "k12BurahVisit");
	if(var_4844_int != 0) {
		var_4841_bool = true;
		return 0;
	}
	var_4841_bool = false;
}


// @pe
void func_11312(bool var_5193_bool, object var_5194_object)
{
	object var_5197_object;
	var_5194_object = var_5197_object;
	func_11322(var_5197_object);
	bool var_5196_bool;
	if(var_5196_bool != 0) {
		var_5193_bool = true;
		return 0;
	}
	var_5193_bool = false;
}


void func_52(void)
{
	object var_9_object;
	@FindActor(var_9_object, "player");
	object var_10_object;
	@GetMainOutdoorScene(var_10_object);
	if(!var_10_object) //@nz
		@Trace("Starting scene not found");
	bool var_11_bool;
	cvector var_12_cvector;
	cvector var_13_cvector;
	var_10_object->GetLocator("pt_birth_Klara", var_11_bool, var_12_cvector, var_13_cvector);
	if(var_11_bool != 0)
		@Teleport(var_9_object, var_10_object, var_12_cvector, var_13_cvector);
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


// @pe
void func_5176(object var_122_object)
{
	var_122_object->add("dt_house3_08_i2");
	var_122_object->add("dt_house3_09");
	var_122_object->add("dt_house3_09_i2");
	var_122_object->add("house1_se_03l");
	var_122_object->add("house1_se_03r");
	var_122_object->add("house1_se_01l");
	var_122_object->add("house1_se_01r");
	var_122_object->add("house1_se_04l");
	var_122_object->add("house1_se_04r");
	var_122_object->add("house5_11");
	var_122_object->add("house5_09");
	var_122_object->add("house5_13");
	var_122_object->add("house5_12");
	var_122_object->add("house5_14");
	var_122_object->add("house5_unoin03l");
	var_122_object->add("house5_unoin03r");
	var_122_object->add("house5_unoin02l");
	var_122_object->add("house5_unoin02r");
	var_122_object->add("house5_unoin01l");
	var_122_object->add("house5_unoin01r");
}


// @pe
void func_11322(bool var_5196_bool)
{
	var_5196_bool = false;
}


void func_11325(void)
{
	object var_4759_object;
	@CreateDiaryEntry(var_4759_object, 567, 0, 530581);
	bool var_4763_bool; object var_4764_object;
	var_4759_object = var_4764_object;
	func_11364(var_4763_bool, var_4764_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1087(int var_1795_int, int var_1796_int)
{
	bool var_1797_bool = true;
	var_1799_bool = var_1796_int >= 22;
	if(var_1799_bool != 1) {
		var_1801_bool = var_1796_int < 6;
		if(var_1801_bool != 1)
			var_1797_bool = false;
	}
	if(var_1797_bool != 0) {
		int var_1802_int;
		var_1795_int = var_1802_int;
		func_779(var_1802_int, true);
	} else {
		int var_1804_int;
		var_1795_int = var_1804_int;
		func_779(var_1804_int, false);
	}
	
}


void func_3137(int var_2118_int, int var_2119_int, int var_2120_int)
{
	int var_2123_int; int var_2124_int;
	bool var_2125_bool = false;
	if(var_2120_int > 8) {
		if(var_2120_int < 21)
			var_2125_bool = true;
	}
	if(var_2125_bool != 0) {
		int var_2130_int;
		var_2118_int = var_2130_int;
		func_503(var_2130_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2134_int;
		var_2118_int = var_2134_int;
		func_503(var_2134_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2138_int;
		var_2118_int = var_2138_int;
		func_503(var_2138_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2142_int;
		var_2118_int = var_2142_int;
		func_529(var_2142_int, "fog", "fog.xml", 6);
		if(var_2119_int >= 5) {
			int var_2152_int;
			var_2118_int = var_2152_int;
			func_529(var_2152_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2157_float; int var_2158_int;
		func_1255(var_2157_float, var_2158_int);
		if((1 * var_2157_float) != 0) {
			int var_2204_int; int var_2207_int;
			var_2118_int = var_2204_int;
			var_2123_int = var_2207_int;
			func_503(var_2204_int, "pers_bomber", "bomber.xml", var_2207_int);
		}
	} else {
		int var_2243_int;
		var_2118_int = var_2243_int;
		func_503(var_2243_int, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		int var_2247_int;
		var_2118_int = var_2247_int;
		func_503(var_2247_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		int var_2251_int;
		var_2118_int = var_2251_int;
		func_503(var_2251_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2255_int;
		var_2118_int = var_2255_int;
		func_529(var_2255_int, "fog", "fog.xml", 6);
		if(var_2158_int >= 5) {
			int var_2261_int;
			var_2118_int = var_2261_int;
			func_529(var_2261_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2266_float; int var_2267_int;
		var_2119_int = var_2267_int;
		func_1255(var_2266_float, var_2267_int);
		if((2 * var_2266_float) == 0) goto Label_3255;
		int var_2269_int; int var_2272_int;
		var_2118_int = var_2269_int;
		var_2124_int = var_2272_int;
		func_503(var_2269_int, "pers_bomber", "bomber.xml", var_2272_int);
	}
Label_3255:
	bool var_2208_bool; int var_2209_int;
	var_2119_int = var_2209_int;
	func_1372(var_2208_bool, var_2209_int);
	if(var_2208_bool != 0) {
		int var_2211_int;
		var_2118_int = var_2211_int;
		func_503(var_2211_int, "pers_sanitar", "sanitar.xml", 2);
	}
	int var_2215_int;
	var_2118_int = var_2215_int;
	func_516(var_2215_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2225_int;
	var_2118_int = var_2225_int;
	func_516(var_2225_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2231_int;
	var_2118_int = var_2231_int;
	func_516(var_2231_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2237_int;
	var_2118_int = var_2237_int;
	func_516(var_2237_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	
}


// @pe
void func_7234(int var_4129_int, int var_4130_int, object var_4131_object, object var_4132_object, object var_4133_object, object var_4134_object)
{
	if(var_4130_int == 0) {
		func_796(14, false);
		func_813(14, false, 1);
		int var_4143_int; object var_4144_object; object var_4145_object; object var_4146_object;
		var_4129_int = var_4143_int;
		var_4131_object = var_4144_object;
		var_4132_object = var_4145_object;
		var_4133_object = var_4146_object;
		func_720(14, var_4143_int, var_4144_object, var_4145_object, var_4146_object);
		object var_4147_object;
		var_4134_object = var_4147_object;
		func_305(var_4147_object, 2);
		func_870(14, false, 5);
		func_932(14, true, 5);
	}
	func_779(14, false);
	int var_4158_int; int var_4159_int;
	var_4129_int = var_4158_int;
	var_4130_int = var_4159_int;
	func_3471(14, var_4158_int, var_4159_int);
}


// @pe
void func_6213(int var_3964_int, int var_3965_int, object var_3966_object, object var_3967_object, object var_3968_object, object var_3969_object)
{
	if(var_3965_int == 0) {
		func_796(9, false);
		func_813(9, false, 1);
		int var_3978_int; object var_3979_object; object var_3980_object; object var_3981_object;
		var_3964_int = var_3978_int;
		var_3966_object = var_3979_object;
		var_3967_object = var_3980_object;
		var_3968_object = var_3981_object;
		func_720(9, var_3978_int, var_3979_object, var_3980_object, var_3981_object);
		object var_3982_object;
		var_3969_object = var_3982_object;
		func_305(var_3982_object, 2);
		func_870(9, false, 7);
		func_932(9, true, 7);
	}
	func_779(9, false);
	int var_3993_int; int var_3994_int;
	var_3964_int = var_3993_int;
	var_3965_int = var_3994_int;
	func_3659(9, var_3993_int, var_3994_int);
}


void func_74(object var_100_object)
{
	object var_102_object;
	@FindActor(var_102_object, "player");
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_11338(void)
{
	object var_5034_object;
	@CreateDiaryEntry(var_5034_object, 571, 0, 530585);
	bool var_5038_bool; object var_5039_object;
	var_5034_object = var_5039_object;
	func_11364(var_5038_bool, var_5039_object, -1);
}
EMIT "Stack[-1] = 0";


void func_8272(int var_4329_int, int var_4330_int)
{
	bool var_4335_bool; int var_4336_int; int var_4337_int;
	if(var_4330_int == 0) {
		var_4335_bool = false;
		if(var_4329_int == 2) {
			int var_4342_int;
			func_11434(var_4342_int);
			if(var_4342_int == 0) {
				@GetVariable("d1q01", var_4336_int);
				if(var_4336_int != 1000) {
					var_4335_bool = true;
					@UnlockAchievement("ACHIEVEMENT_UP");
					@GameOver("gameover_fail.xml");
				}
			} else {
						int var_4458_int;
						func_11434(var_4458_int);
						if(!(var_4458_int == 1)) goto Label_8319;
						@GetVariable("b1q01", var_4337_int);
						if(!(var_4337_int != 1000)) goto Label_8319;
						var_4335_bool = true;
						@UnlockAchievement("ACHIEVEMENT_UP");
						@GameOver("gameover_fail.xml");
			}
		}
	Label_8319:
		if(!var_4335_bool) { //@nz
			int var_4351_int;
			func_11434(var_4351_int);
			if(var_4351_int == 0) {
				if(var_4329_int == 2) {
					@UnlockAchievement("ACHIEVEMENT_BACH_1");
				} else {
						if(var_4329_int == 3)
							@UnlockAchievement("ACHIEVEMENT_BACH_2");

					for(;;) {
						} else {
					if(var_4329_int == 4) {
						@UnlockAchievement("ACHIEVEMENT_BACH_3");
					} else if(var_4329_int == 5) {
						@UnlockAchievement("ACHIEVEMENT_BACH_4");
					} else if(var_4329_int == 6) {
						@UnlockAchievement("ACHIEVEMENT_BACH_5");
					} else if(var_4329_int == 7) {
						@UnlockAchievement("ACHIEVEMENT_BACH_6");
					} else if(var_4329_int == 8) {
						@UnlockAchievement("ACHIEVEMENT_BACH_7");
					} else if(var_4329_int == 9) {
						@UnlockAchievement("ACHIEVEMENT_BACH_8");
					} else if(var_4329_int == 10) {
						@UnlockAchievement("ACHIEVEMENT_BACH_9");
					} else if(var_4329_int == 11) {
						@UnlockAchievement("ACHIEVEMENT_BACH_10");
					} else if(var_4329_int == 12) {
						@UnlockAchievement("ACHIEVEMENT_BACH_11");
					}
			}
				int var_4389_int;
				func_11434(var_4389_int);
				if(var_4389_int == 1) {
					if(var_4329_int == 2) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_1");
					} else if(var_4329_int == 3) {
							@UnlockAchievement("ACHIEVEMENT_BURAH_2");
					}

					for(;;) {
						goto Label_8563;

					}

					if(var_4329_int == 4) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_3");
					} else if(var_4329_int == 5) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_4");
					} else if(var_4329_int == 6) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_5");
					} else if(var_4329_int == 7) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_6");
					} else if(var_4329_int == 8) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_7");
					} else if(var_4329_int == 9) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_8");
					} else if(var_4329_int == 10) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_9");
					} else if(var_4329_int == 11) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_10");
					} else if(var_4329_int == 12) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_11");
					}
				}
				if(var_4329_int == 2) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_1");
				} else if(var_4329_int == 3) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_2");
				} else if(var_4329_int == 4) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_3");
				} else if(var_4329_int == 5) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_4");
				} else if(var_4329_int == 6) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_5");
				} else if(var_4329_int == 7) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_6");
				} else if(var_4329_int == 8) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_7");
				} else if(var_4329_int == 9) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_8");
				} else if(var_4329_int == 10) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_9");
				} else if(var_4329_int == 11) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_10");
				} else if(var_4329_int == 12) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_11");

					}
				}
		}
		Label_8563:
			@SendWorldWndMessage(101);
			@SetVariable("c_iWM_RealDayChange", var_4329_int);
	}
		return 6;

	}
	
}


void func_81(bool var_585_bool, object var_586_object, string var_587_string)
{
	var_592_bool = IsFuncExist(var_586_object, "HasProperty", 2);
	if(!var_592_bool) { //@nz
		var_585_bool = false;
		return 2;
	}
	bool var_589_bool;
	var_586_object->HasProperty(var_587_string, var_589_bool);
	var_589_bool = var_585_bool;
}


void func_1110(bool var_791_bool, int var_792_int, int var_793_int)
{
	int var_796_int;
	func_11434(var_796_int);
	int var_795_int;
	var_796_int = var_795_int;
	if(var_795_int == 1) {
		bool var_802_bool = false;
		if(var_792_int == 0) {
			if(var_793_int < 21)
				var_802_bool = true;
		}
		if(var_802_bool != 0) {
			var_791_bool = true;
			return 2;
		}
	} else {
		if(!(var_795_int == 2)) goto Label_1139;
		if(!(var_792_int == 5)) goto Label_1139;
		var_791_bool = true;
		return 2;
	}
Label_1139:
	var_791_bool = false;
	
}


void func_11351(object var_4772_object)
{
	object var_4774_object;
	@GetDiaryRoot(var_4774_object);
	if(!var_4774_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_4772_object = false;
	}
	var_4774_object = var_4772_object;
}
EMIT "Stack[-1] = 0";


void func_93(bool var_5874_bool, object var_5875_object, string var_5876_string, float var_5877_float, float var_5878_float, float var_5879_float)
{
	object var_5883_object;
	var_5875_object = var_5883_object;
	string var_5884_string;
	var_5876_string = var_5884_string;
	bool var_5882_bool;
	func_81(var_5882_bool, var_5883_object, var_5884_string);
	if(!var_5882_bool) //@nz
		var_5874_bool = false;
	float var_5881_float;
	var_5875_object->GetProperty(var_5876_string, var_5881_float);
	float var_5886_float; float var_5888_float; float var_5889_float;
	var_5878_float = var_5888_float;
	var_5879_float = var_5889_float;
	func_115(var_5886_float, (var_5881_float + var_5877_float), var_5888_float, var_5889_float);
	var_5875_object->SetProperty(var_5876_string, var_5886_float);
	var_5874_bool = true;
}


void func_11364(bool var_4763_bool, object var_4764_object, int var_4765_int)
{
	object var_4772_object;
	func_11351(var_4772_object);
	object var_4769_object;
	var_4772_object = var_4769_object;
	object var_4770_object;
	var_4769_object->Find(var_4765_int, var_4770_object);
	if(!var_4770_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_4765_int);
		var_4763_bool = false;
	}
	var_4770_object->AddChild(var_4764_object);
	@SendWorldWndMessage(7);
	int var_4771_int;
	var_4764_object->GetCategory(var_4771_int);
	@SetDiarySection(var_4771_int);
	var_4763_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_4210(int var_3428_int, int var_3429_int, int var_3430_int)
{
	int var_3435_int; int var_3436_int; int var_3437_int; int var_3438_int;
	bool var_3439_bool = false;
	if(var_3430_int > 8) {
		if(var_3430_int < 21)
			var_3439_bool = true;
	}
	if(var_3439_bool != 0) {
		int var_3444_int;
		var_3428_int = var_3444_int;
		func_503(var_3444_int, "pers_rat", "rat.xml", 4);
		int var_3448_int;
		var_3428_int = var_3448_int;
		func_503(var_3448_int, "pers_alkash", "alkash.xml", 2);
		int var_3452_int;
		var_3428_int = var_3452_int;
		func_503(var_3452_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3457_float; int var_3458_int;
		func_1165(var_3457_float, var_3458_int);
		if((2 * var_3457_float) != 0) {
			int var_3460_int; int var_3463_int;
			var_3428_int = var_3460_int;
			var_3435_int = var_3463_int;
			func_503(var_3460_int, "pers_grabitel", "grabitel.xml", var_3463_int);
		}
		if((var_3458_int + 1) >= 2) {
			int var_3468_int;
			var_3428_int = var_3468_int;
			func_503(var_3468_int, "pers_patrool", "patrol.xml", 2);
			bool var_3472_bool; int var_3473_int;
			var_3429_int = var_3473_int;
			func_1372(var_3472_bool, var_3473_int);
			if(var_3472_bool != 0) {
				int var_3474_int;
				var_3428_int = var_3474_int;
				func_503(var_3474_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3479_float; int var_3480_int;
		var_3429_int = var_3480_int;
		func_1255(var_3479_float, var_3480_int);
		if((1 * var_3479_float) != 0) {
			int var_3482_int; int var_3485_int;
			var_3428_int = var_3482_int;
			var_3436_int = var_3485_int;
			func_503(var_3482_int, "pers_bomber", "bomber.xml", var_3485_int);
		}
	} else {
		int var_3492_int;
		var_3428_int = var_3492_int;
		func_503(var_3492_int, "pers_rat", "rat.xml", 8);
		int var_3496_int;
		var_3428_int = var_3496_int;
		func_503(var_3496_int, "pers_alkash", "alkash.xml", 1);
		int var_3500_int;
		var_3428_int = var_3500_int;
		func_503(var_3500_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3505_float; int var_3506_int;
		func_1165(var_3505_float, var_3506_int);
		if((3 * var_3505_float) != 0) {
			int var_3508_int; int var_3511_int;
			var_3428_int = var_3508_int;
			var_3437_int = var_3511_int;
			func_503(var_3508_int, "pers_grabitel", "grabitel.xml", var_3511_int);
		}
		if((var_3506_int + 1) >= 2) {
			int var_3516_int;
			var_3428_int = var_3516_int;
			func_503(var_3516_int, "pers_patrool", "patrol.xml", 1);
			bool var_3520_bool; int var_3521_int;
			var_3429_int = var_3521_int;
			func_1372(var_3520_bool, var_3521_int);
			if(var_3520_bool != 0) {
				int var_3522_int;
				var_3428_int = var_3522_int;
				func_503(var_3522_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3527_float; int var_3528_int;
		var_3429_int = var_3528_int;
		func_1255(var_3527_float, var_3528_int);
		if((1 * var_3527_float) == 0) goto Label_4372;
		int var_3530_int; int var_3533_int;
		var_3428_int = var_3530_int;
		var_3438_int = var_3533_int;
		func_503(var_3530_int, "pers_bomber", "bomber.xml", var_3533_int);
	}
Label_4372:
	bool var_3486_bool; int var_3487_int;
	var_3429_int = var_3487_int;
	func_1372(var_3486_bool, var_3487_int);
	if(var_3486_bool != 0) {
		int var_3488_int;
		var_3428_int = var_3488_int;
		func_503(var_3488_int, "pers_sanitar", "sanitar.xml", 2);
	}
	
}


// @pe
void func_115(float var_5886_float, float var_5887_float, float var_5888_float, float var_5889_float)
{
	if(var_5887_float < var_5888_float) {
		var_5888_float = var_5886_float;
		return 0;
	}
	if(var_5887_float > var_5889_float) {
		var_5889_float = var_5886_float;
		return 0;
	}
	var_5887_float = var_5886_float;
}


// @pe
void func_1141(float var_768_float, int var_769_int)
{
	if((var_769_int + 1) == 7) {
		var_768_float = 2;
		return 0;
	}
	if((var_769_int + 1) == 8) {
		var_768_float = 0;
		return 0;
	}
	if((var_769_int + 1) == 1) {
		var_768_float = 0;
		return 0;
	}
	var_768_float = 1;
}


// @pe
void func_7286(object var_313_object)
{
	var_313_object->add("lc_house3_05_i2");
	var_313_object->add("lc_house3_05");
	var_313_object->add("lc_house3_06_i2");
	var_313_object->add("lc_house3_06");
	var_313_object->add("lc_House6_06");
	var_313_object->add("lc_house3_04_i2");
	var_313_object->add("lc_house3_04");
	var_313_object->add("house3_plus_03_i2");
}


// @pe
void func_5238(int var_1296_int, int var_1297_int, object var_1298_object, object var_1299_object, object var_1300_object, object var_1301_object)
{
	if(var_1297_int == 0) {
		func_796(4, false);
		func_813(4, false, 1);
		int var_1309_int; int var_1310_int; object var_1311_object; object var_1312_object; object var_1313_object;
		var_1309_int = 4;
		var_1296_int = var_1310_int;
		var_1298_object = var_1311_object;
		var_1299_object = var_1312_object;
		var_1300_object = var_1313_object;
		func_622(var_1310_int, var_1311_object, var_1312_object, var_1313_object);
		object var_1314_object;
		var_1301_object = var_1314_object;
		func_305(var_1314_object, 0);
		func_870(4, false, 4);
		func_932(4, false, 4);
	}
	int var_1323_int;
	var_1297_int = var_1323_int;
	func_1020(4, var_1323_int);
	int var_1337_int; int var_1338_int;
	var_1296_int = var_1337_int;
	var_1297_int = var_1338_int;
	func_1897(4, var_1337_int, var_1338_int);
}


// @pe
void func_6265(object var_226_object)
{
	var_226_object->add("r4_house_2_02");
	var_226_object->add("r4_house3_03_i2");
	var_226_object->add("r4_house3_03");
	var_226_object->add("r4_house4_02_i2");
	var_226_object->add("r4_house4_02");
	var_226_object->add("r4_house4_01_i2");
	var_226_object->add("r4_house4_01");
	var_226_object->add("r4_house3_02_i2");
	var_226_object->add("r4_house3_02");
	var_226_object->add("r4_house_2_01");
	var_226_object->add("r4_house3_01_i2");
	var_226_object->add("r4_house3_01");
	var_226_object->add("r4_house7_01");
	var_226_object->add("r4_House6_01");
	var_226_object->add("r4_house_2_03");
	var_226_object->add("r4_House6_03");
	var_226_object->add("r4_house_2_04");
}


void func_126(object var_40_object)
{
	object var_42_object;
	@CreateObjectVector(var_42_object);
	var_42_object = var_40_object;
}
EMIT "Stack[-1] = 0";


void func_11392(bool var_5056_bool, int var_5057_int)
{
	object var_5062_object;
	func_11351(var_5062_object);
	object var_5060_object;
	var_5062_object = var_5060_object;
	object var_5061_object;
	var_5060_object->Find(var_5057_int, var_5061_object);
	if(!var_5061_object) //@nz
		var_5056_bool = false;
	var_5061_object->Remove();
	var_5056_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_132(int var_4823_int, string var_4824_string)
{
	int var_4826_int;
	@GetVariable(var_4824_string, var_4826_int);
	var_4826_int = var_4823_int;
}


void func_10374(void)
{
	object var_5941_object;
	func_11417(var_5941_object);
	object var_5939_object;
	var_5941_object = var_5939_object;
	object var_5940_object;
	var_5939_object->FindMark(var_5940_object, "k3q01AlexandrGotoAnna");
	if(var_5940_object != 0)
		var_5940_object->Remove();
	var_5939_object->FindMark(var_5940_object, "k3q01AnnaGotoKapella");
	if(var_5940_object != 0)
		var_5940_object->Remove();
	var_5939_object->FindMark(var_5940_object, "k3q01AnnaGotoMladVlad");
	if(var_5940_object != 0)
		var_5940_object->Remove();
	var_5939_object->FindMark(var_5940_object, "k3q01KapellaGotoAnna");
	if(var_5940_object != 0)
		var_5940_object->Remove();
	var_5939_object->FindMark(var_5940_object, "k3q02JuliaGotoEva");
	if(var_5940_object != 0)
		var_5940_object->Remove();
	var_5939_object->FindMark(var_5940_object, "k3q02KaterinaGotoJulia");
	if(var_5940_object != 0)
		var_5940_object->Remove();
	var_5939_object->FindMark(var_5940_object, "k3q03AnnaGotoEva");
	if(var_5940_object != 0)
		var_5940_object->Remove();
	var_5939_object->FindMark(var_5940_object, "k3q04KapellaGotoDanko");
	if(var_5940_object != 0)
		var_5940_object->Remove();
	var_5939_object->FindMark(var_5940_object, "k3q03EvaGotoSklad");
	if(var_5940_object != 0)
		var_5940_object->Remove();
	bool var_5960_bool;
	func_11392(var_5960_bool, 337);
	bool var_5962_bool;
	func_11392(var_5962_bool, 344);
	bool var_5964_bool;
	func_11392(var_5964_bool, 350);
	bool var_5966_bool;
	func_11392(var_5966_bool, 354);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_137(object var_4781_object, string var_4782_string)
{
	object var_4785_object;
	@GetMainOutdoorScene(var_4785_object);
	object var_4786_object;
	@AddBlankActor(var_4786_object, var_4785_object, var_4782_string, (var_4782_string + ".bin"));
	var_4786_object = var_4781_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1165(float var_3277_float, int var_3278_int)
{
	if((var_3278_int + 1) == 1) {
		var_3277_float = 0;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	if((var_3278_int + 1) == 2) {
		var_3277_float = 0;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	if((var_3278_int + 1) == 3) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	if((var_3278_int + 1) == 4) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	if((var_3278_int + 1) == 5) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	if((var_3278_int + 1) == 6) {
		var_3277_float = 2;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	if((var_3278_int + 1) == 7) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	if((var_3278_int + 1) == 8) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	if((var_3278_int + 1) == 9) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	if((var_3278_int + 1) == 10) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4e5";
	}
	if((var_3278_int + 1) == 11) {
		var_3277_float = 1;
		return 0;
	}
	var_3277_float = 0;
}


// @pe
void func_7312(int var_1947_int, int var_1948_int, object var_1949_object, object var_1950_object, object var_1951_object, object var_1952_object)
{
	if(var_1948_int == 0) {
		func_796(15, false);
		func_813(15, false, 1);
		int var_1960_int; int var_1961_int; object var_1962_object; object var_1963_object; object var_1964_object;
		var_1960_int = 15;
		var_1947_int = var_1961_int;
		var_1949_object = var_1962_object;
		var_1950_object = var_1963_object;
		var_1951_object = var_1964_object;
		func_622(var_1961_int, var_1962_object, var_1963_object, var_1964_object);
		object var_1965_object;
		var_1952_object = var_1965_object;
		func_305(var_1965_object, 0);
		func_870(15, false, 5);
		func_932(15, false, 5);
	}
	int var_1974_int;
	var_1948_int = var_1974_int;
	func_1087(15, var_1974_int);
	int var_1976_int; int var_1977_int;
	var_1947_int = var_1976_int;
	var_1948_int = var_1977_int;
	func_1376(15, var_1976_int, var_1977_int);
}


void func_11409(int var_4832_int, int var_4833_int, int var_4834_int, float var_4835_float)
{
	int var_4837_int;
	@AddMessage(var_4833_int, var_4834_int, var_4835_float, var_4837_int);
	@SendWorldWndMessage(6);
	var_4837_int = var_4832_int;
}


void func_148(object var_5552_object, string var_5553_string)
{
	object var_5556_object;
	@GetMainOutdoorScene(var_5556_object);
	object var_5557_object;
	@AddBlankActorFromXml(var_5557_object, var_5556_object, var_5553_string, (var_5553_string + ".xml"));
	var_5557_object = var_5552_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_11417(object var_5171_object)
{
	object var_5174_object; object var_5175_object;
	@GetMainOutdoorScene(var_5174_object);
	if(var_5174_object == null) {
		@Trace("Can't find main outdoor scene");
		var_5175_object = null;
		var_5175_object = var_5171_object;
	}
	var_5174_object->GetMap(var_5175_object);
	var_5175_object = var_5171_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2206(int var_750_int, int var_751_int, int var_752_int)
{
	int var_754_int;
	if((var_751_int + 1) == 12)
		return 2;
	bool var_759_bool = false;
	bool var_760_bool = true;
	var_762_bool = var_752_int < 7;
	if(var_762_bool != 1) {
		var_764_bool = var_752_int > 21;
		if(var_764_bool != 1)
			var_760_bool = false;
	}
	if(var_760_bool != 0) {
		if(var_751_int != 0)
			var_759_bool = true;
	}
	if(var_759_bool != 0) {
		float var_768_float; int var_769_int;
		var_751_int = var_769_int;
		func_1141(var_768_float, var_769_int);
		if((1 * var_768_float) != 0) {
			int var_783_int; int var_786_int;
			var_750_int = var_783_int;
			var_754_int = var_786_int;
			func_503(var_783_int, "pers_grabitel", "grabitel.xml", var_786_int);
		}
	}
	bool var_791_bool; int var_792_int; int var_793_int;
	var_751_int = var_792_int;
	var_752_int = var_793_int;
	func_1110(var_791_bool, var_792_int, var_793_int);
	if(var_791_bool != 0) {
		int var_811_int;
		var_750_int = var_811_int;
		func_503(var_811_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_815_int;
		var_750_int = var_815_int;
		func_503(var_815_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_819_int;
		var_750_int = var_819_int;
		func_503(var_819_int, "pers_worker", "worker_attacker.xml", 1);
		int var_823_int;
		var_750_int = var_823_int;
		func_503(var_823_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_827_int;
		var_750_int = var_827_int;
		func_503(var_827_int, "pers_boy", "boy.xml", 1);
		int var_831_int;
		var_750_int = var_831_int;
		func_503(var_831_int, "pers_alkash", "alkash.xml", 1);
		int var_835_int;
		var_750_int = var_835_int;
		func_503(var_835_int, "pers_girl", "girl.xml", 1);
		int var_839_int;
		var_750_int = var_839_int;
		func_503(var_839_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_843_bool = false;
			if(var_752_int > 8) {
				if(var_752_int < 21)
					var_843_bool = true;
			}
			if(var_843_bool == 0) goto Label_2361;
			int var_848_int;
			var_750_int = var_848_int;
			func_503(var_848_int, "pers_boy", "boy.xml", 1);
			int var_852_int;
			var_750_int = var_852_int;
			func_503(var_852_int, "pers_alkash", "alkash.xml", 1);
			int var_856_int;
			var_750_int = var_856_int;
			func_503(var_856_int, "pers_girl", "girl.xml", 1);
			int var_860_int;
			var_750_int = var_860_int;
			func_503(var_860_int, "pers_girl", "girl2.xml", 1);
			int var_864_int;
			var_750_int = var_864_int;
			func_503(var_864_int, "pers_worker", "worker.xml", 2);
			int var_868_int;
			var_750_int = var_868_int;
			func_503(var_868_int, "pers_worker", "worker2.xml", 2);
	}
	for(;;) {
		return 2;

	}
	
Label_2361:
	int var_872_int;
	var_750_int = var_872_int;
	func_503(var_872_int, "pers_alkash", "alkash.xml", 1);
	int var_876_int;
	var_750_int = var_876_int;
	func_503(var_876_int, "pers_worker", "worker.xml", 1);
	int var_880_int;
	var_750_int = var_880_int;
	func_503(var_880_int, "pers_worker", "worker2.xml", 1);
}


void func_159(object var_329_object, object var_330_object, string var_331_string, string var_332_string, string var_333_string)
{
	bool var_339_bool; cvector var_340_cvector; cvector var_341_cvector;
	var_330_object->GetLocator(var_331_string, var_339_bool, var_340_cvector, var_341_cvector);
	if(!var_339_bool) //@nz
		@Trace(("Locator " + var_331_string) + " doesn't exist");
	else
		var_330_object->AddStationaryActor(Obj(), var_340_cvector, var_341_cvector, var_332_string, var_333_string);
	object var_342_object = var_329_object;
	
}
EMIT "Stack[-1] = 0";


void func_9376(int var_1988_int, int var_1989_int, int var_1990_int)
{
	var_1999_object = GlobalVars[8];
	object var_1995_object;
	var_1999_object->get(var_1995_object, var_1988_int);
	var_2000_object = GlobalVars[9];
	object var_1996_object;
	var_2000_object->get(var_1996_object, var_1988_int);
	var_2001_object = GlobalVars[10];
	object var_1997_object;
	var_2001_object->get(var_1997_object, var_1988_int);
	var_2002_object = GlobalVars[13];
	object var_1998_object;
	var_2002_object->get(var_1998_object, var_1988_int);
	if(var_1988_int == 0) {
		int var_2005_int; int var_2006_int; object var_2007_object; object var_2008_object; object var_2009_object; object var_2010_object;
		var_1989_int = var_2005_int;
		var_1990_int = var_2006_int;
		var_1995_object = var_2007_object;
		var_1996_object = var_2008_object;
		var_1997_object = var_2009_object;
		var_1998_object = var_2010_object;
		func_4439(var_2005_int, var_2006_int, var_2007_object, var_2008_object, var_2009_object, var_2010_object);
	} else if(var_1988_int == 1) {
			int var_2275_int; int var_2276_int; object var_2277_object; object var_2278_object; object var_2279_object; object var_2280_object;
			var_1989_int = var_2275_int;
			var_1990_int = var_2276_int;
			var_1995_object = var_2277_object;
			var_1996_object = var_2278_object;
			var_1997_object = var_2279_object;
			var_1998_object = var_2280_object;
			func_4636(var_2275_int, var_2276_int, var_2277_object, var_2278_object, var_2279_object, var_2280_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_1988_int == 2) {
		int var_2407_int; int var_2408_int; object var_2409_object; object var_2410_object; object var_2411_object; object var_2412_object;
		var_1989_int = var_2407_int;
		var_1990_int = var_2408_int;
		var_1995_object = var_2409_object;
		var_1996_object = var_2410_object;
		var_1997_object = var_2411_object;
		var_1998_object = var_2412_object;
		func_4842(var_2407_int, var_2408_int, var_2409_object, var_2410_object, var_2411_object, var_2412_object);
	} else if(var_1988_int == 3) {
		int var_2553_int; int var_2554_int; object var_2555_object; object var_2556_object; object var_2557_object; object var_2558_object;
		var_1989_int = var_2553_int;
		var_1990_int = var_2554_int;
		var_1995_object = var_2555_object;
		var_1996_object = var_2556_object;
		var_1997_object = var_2557_object;
		var_1998_object = var_2558_object;
		func_5072(var_2553_int, var_2554_int, var_2555_object, var_2556_object, var_2557_object, var_2558_object);
	} else if(var_1988_int == 4) {
		int var_2586_int; int var_2587_int; object var_2588_object; object var_2589_object; object var_2590_object; object var_2591_object;
		var_1989_int = var_2586_int;
		var_1990_int = var_2587_int;
		var_1995_object = var_2588_object;
		var_1996_object = var_2589_object;
		var_1997_object = var_2590_object;
		var_1998_object = var_2591_object;
		func_5290(var_2586_int, var_2587_int, var_2588_object, var_2589_object, var_2590_object, var_2591_object);
	} else if(var_1988_int == 5) {
		int var_2619_int; int var_2620_int; object var_2621_object; object var_2622_object; object var_2623_object; object var_2624_object;
		var_1989_int = var_2619_int;
		var_1990_int = var_2620_int;
		var_1995_object = var_2621_object;
		var_1996_object = var_2622_object;
		var_1997_object = var_2623_object;
		var_1998_object = var_2624_object;
		func_5535(var_2619_int, var_2620_int, var_2621_object, var_2622_object, var_2623_object, var_2624_object);
	} else if(var_1988_int == 6) {
		int var_2652_int; int var_2653_int; object var_2654_object; object var_2655_object; object var_2656_object; object var_2657_object;
		var_1989_int = var_2652_int;
		var_1990_int = var_2653_int;
		var_1995_object = var_2654_object;
		var_1996_object = var_2655_object;
		var_1997_object = var_2656_object;
		var_1998_object = var_2657_object;
		func_5648();
	} else if(var_1988_int == 7) {
		int var_2662_int; int var_2663_int; object var_2664_object; object var_2665_object; object var_2666_object; object var_2667_object;
		var_1989_int = var_2662_int;
		var_1990_int = var_2663_int;
		var_1995_object = var_2664_object;
		var_1996_object = var_2665_object;
		var_1997_object = var_2666_object;
		var_1998_object = var_2667_object;
		func_5758(var_2662_int, var_2663_int, var_2664_object, var_2665_object, var_2666_object, var_2667_object);
	} else if(var_1988_int == 8) {
		int var_2801_int; int var_2802_int; object var_2803_object; object var_2804_object; object var_2805_object; object var_2806_object;
		var_1989_int = var_2801_int;
		var_1990_int = var_2802_int;
		var_1995_object = var_2803_object;
		var_1996_object = var_2804_object;
		var_1997_object = var_2805_object;
		var_1998_object = var_2806_object;
		func_5958(var_2801_int, var_2802_int, var_2803_object, var_2804_object, var_2805_object, var_2806_object);
	} else if(var_1988_int == 9) {
		int var_2834_int; int var_2835_int; object var_2836_object; object var_2837_object; object var_2838_object; object var_2839_object;
		var_1989_int = var_2834_int;
		var_1990_int = var_2835_int;
		var_1995_object = var_2836_object;
		var_1996_object = var_2837_object;
		var_1997_object = var_2838_object;
		var_1998_object = var_2839_object;
		func_6161(var_2834_int, var_2835_int, var_2836_object, var_2837_object, var_2838_object, var_2839_object);
	} else if(var_1988_int == 10) {
		int var_2867_int; int var_2868_int; object var_2869_object; object var_2870_object; object var_2871_object; object var_2872_object;
		var_1989_int = var_2867_int;
		var_1990_int = var_2868_int;
		var_1995_object = var_2869_object;
		var_1996_object = var_2870_object;
		var_1997_object = var_2871_object;
		var_1998_object = var_2872_object;
		func_6370(var_2867_int, var_2868_int, var_2869_object, var_2870_object, var_2871_object, var_2872_object);
	} else if(var_1988_int == 11) {
		int var_2900_int; int var_2901_int; object var_2902_object; object var_2903_object; object var_2904_object; object var_2905_object;
		var_1989_int = var_2900_int;
		var_1990_int = var_2901_int;
		var_1995_object = var_2902_object;
		var_1996_object = var_2903_object;
		var_1997_object = var_2904_object;
		var_1998_object = var_2905_object;
		func_6582(var_2900_int, var_2901_int, var_2902_object, var_2903_object, var_2904_object, var_2905_object);
	} else if(var_1988_int == 12) {
		int var_2933_int; int var_2934_int; object var_2935_object; object var_2936_object; object var_2937_object; object var_2938_object;
		var_1989_int = var_2933_int;
		var_1990_int = var_2934_int;
		var_1995_object = var_2935_object;
		var_1996_object = var_2936_object;
		var_1997_object = var_2937_object;
		var_1998_object = var_2938_object;
		func_6779(var_2933_int, var_2934_int, var_2935_object, var_2936_object, var_2937_object, var_2938_object);
	} else if(var_1988_int == 13) {
		int var_2966_int; int var_2967_int; object var_2968_object; object var_2969_object; object var_2970_object; object var_2971_object;
		var_1989_int = var_2966_int;
		var_1990_int = var_2967_int;
		var_1995_object = var_2968_object;
		var_1996_object = var_2969_object;
		var_1997_object = var_2970_object;
		var_1998_object = var_2971_object;
		func_6982(var_2966_int, var_2967_int, var_2968_object, var_2969_object, var_2970_object, var_2971_object);
	} else if(var_1988_int == 14) {
		int var_2999_int; int var_3000_int; object var_3001_object; object var_3002_object; object var_3003_object; object var_3004_object;
		var_1989_int = var_2999_int;
		var_1990_int = var_3000_int;
		var_1995_object = var_3001_object;
		var_1996_object = var_3002_object;
		var_1997_object = var_3003_object;
		var_1998_object = var_3004_object;
		func_7182(var_2999_int, var_3000_int, var_3001_object, var_3002_object, var_3003_object, var_3004_object);
	} else if(var_1988_int == 15) {
		int var_3138_int; int var_3139_int; object var_3140_object; object var_3141_object; object var_3142_object; object var_3143_object;
		var_1989_int = var_3138_int;
		var_1990_int = var_3139_int;
		var_1995_object = var_3140_object;
		var_1996_object = var_3141_object;
		var_1997_object = var_3142_object;
		var_1998_object = var_3143_object;
		func_7364(var_3138_int, var_3139_int, var_3140_object, var_3141_object, var_3142_object, var_3143_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


void func_11434(int var_796_int)
{
	int var_798_int;
	@GetVariable("branch", var_798_int);
	var_798_int = var_796_int;
}


// @pe
void func_5290(int var_2586_int, int var_2587_int, object var_2588_object, object var_2589_object, object var_2590_object, object var_2591_object)
{
	if(var_2587_int == 0) {
		func_796(4, true);
		func_813(4, true, 1);
		int var_2600_int; object var_2601_object; object var_2602_object; object var_2603_object;
		var_2586_int = var_2600_int;
		var_2588_object = var_2601_object;
		var_2589_object = var_2602_object;
		var_2590_object = var_2603_object;
		func_641(4, var_2600_int, var_2601_object, var_2602_object, var_2603_object);
		object var_2604_object;
		var_2591_object = var_2604_object;
		func_305(var_2604_object, 1);
		func_870(4, true, 4);
		func_932(4, false, 4);
	}
	func_779(4, false);
	int var_2615_int; int var_2616_int;
	var_2586_int = var_2615_int;
	var_2587_int = var_2616_int;
	func_2944(4, var_2615_int, var_2616_int);
}


// @pe
void func_6318(int var_1637_int, int var_1638_int, object var_1639_object, object var_1640_object, object var_1641_object, object var_1642_object)
{
	if(var_1638_int == 0) {
		func_796(10, false);
		func_813(10, false, 1);
		int var_1650_int; int var_1651_int; object var_1652_object; object var_1653_object; object var_1654_object;
		var_1650_int = 10;
		var_1637_int = var_1651_int;
		var_1639_object = var_1652_object;
		var_1640_object = var_1653_object;
		var_1641_object = var_1654_object;
		func_622(var_1651_int, var_1652_object, var_1653_object, var_1654_object);
		object var_1655_object;
		var_1642_object = var_1655_object;
		func_305(var_1655_object, 0);
		func_870(10, false, 7);
		func_932(10, false, 7);
	}
	int var_1664_int;
	var_1638_int = var_1664_int;
	func_983(10, var_1664_int);
	int var_1666_int; int var_1667_int;
	var_1637_int = var_1666_int;
	var_1638_int = var_1667_int;
	func_1624(10, var_1666_int, var_1667_int);
}


void func_11440(bool var_4307_bool, int var_4308_int)
{
	int var_4315_int; int var_4316_int; int var_4317_int;
	bool var_4318_bool = false;
	if(var_4308_int > 42000) {
		if(var_4308_int < 42288)
			var_4318_bool = true;
	}
	if(var_4318_bool != 0) {
		var_4315_int = (var_4308_int - 42000) % 24;
		int var_4330_int;
		var_4315_int = var_4330_int;
		func_8272((((var_4308_int - 42000) / 24) + 1), var_4330_int);
		var_4307_bool = true;
		return 8;
	}
	bool var_4466_bool = false;
	if(var_4308_int > 40000) {
		if(var_4308_int < 40288)
			var_4466_bool = true;
	}
	if(var_4466_bool != 0) {
		var_4316_int = (var_4308_int - 40000) / 24;
		var_4317_int = (var_4308_int - 40000) % 24;
		int var_4478_int;
		var_4317_int = var_4478_int;
		func_8570((var_4316_int + 1), var_4478_int);
		int var_4800_int;
		var_4317_int = var_4800_int;
		func_13190((var_4316_int + 1), var_4800_int);
		var_4307_bool = true;
		return 8;
	}
	var_4307_bool = false;
}


void func_177(string var_4700_string, bool var_4701_bool)
{
	object var_4703_object;
	@FindActor(var_4703_object, var_4700_string);
	if(!var_4703_object) //@nz
		@Trace(("Door " + var_4700_string) + " not found");
	else
		var_4703_object->SetProperty("locked", var_4701_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_12480(void)
{
	var_4583_object = GlobalVars[16];
	GlobalVars[16] = Obj();
	@SetTimeEvent(45286, 203.22);
	@SetTimeEvent(45288, 271.25);
	@SetTimeEvent(45287, 249.0);
	@SetTimeEvent(45289, 272.0);
	@SetTimeEvent(45272, 144.0);
	@SetTimeEvent(45277, 264.0);
	@SetTimeEvent(45280, 192.0);
	@SetTimeEvent(45284, 156.0);
	@SetTimeEvent(45258, 64.26);
	@SetTimeEvent(45285, 181.0);
	@SetTimeEvent(45279, 144.0);
	@SetTimeEvent(45256, 132.17);
	@SetTimeEvent(45274, 192.0);
	@SetTimeEvent(45276, 240.0);
	@SetTimeEvent(45281, 81.5);
	@SetTimeEvent(45283, 264.0);
	@SetTimeEvent(45275, 216.0);
	@SetTimeEvent(45278, 24.0);
	@SetTimeEvent(45273, 168.0);
	@SetTimeEvent(45257, 64.0);
	@SetTimeEvent(45243, 42.25);
	@SetTimeEvent(45172, 247.02);
	@SetTimeEvent(45249, 96.0);
	@SetTimeEvent(45241, 23.08);
	@SetTimeEvent(45245, 71.0);
	@SetTimeEvent(45252, 106.5);
	@SetTimeEvent(45247, 119.0);
	@SetTimeEvent(45170, 199.02);
	@SetTimeEvent(45253, 130.43);
	@SetTimeEvent(45173, 271.02);
	@SetTimeEvent(45254, 95.5);
	@SetTimeEvent(45255, 113.5);
	@SetTimeEvent(45167, 127.02);
	@SetTimeEvent(45240, 16.25);
	@SetTimeEvent(45250, 58.25);
	@SetTimeEvent(45168, 151.02);
	@SetTimeEvent(45171, 223.02);
	@SetTimeEvent(45244, 47.0);
	@SetTimeEvent(45246, 95.0);
	@SetTimeEvent(45236, 90.0);
	@SetTimeEvent(45248, 111.0);
	@SetTimeEvent(45251, 83.25);
	@SetTimeEvent(45242, 34.08);
	@SetTimeEvent(45169, 175.02);
	@SetTimeEvent(45108, 240.0);
	@SetTimeEvent(45102, 120.0);
	@SetTimeEvent(45103, 144.0);
	@SetTimeEvent(45107, 224.26);
	@SetTimeEvent(45101, 96.0);
	@SetTimeEvent(45109, 264.0);
	@SetTimeEvent(45105, 192.0);
	@SetTimeEvent(45106, 216.0);
	@SetTimeEvent(45095, 24.0);
	@SetTimeEvent(45163, 31.02);
	@SetTimeEvent(45164, 55.02);
	@SetTimeEvent(45165, 79.02);
	object var_4696_object; object var_4697_object;
	var_4698_object = GlobalVars[16];
	var_4698_object = var_4696_object;
	var_4699_object = GlobalVars[16];
	var_4699_object = var_4697_object;
	func_10982();
	object var_4712_object; object var_4713_object;
	var_4714_object = GlobalVars[16];
	var_4714_object = var_4712_object;
	var_4715_object = GlobalVars[16];
	var_4715_object = var_4713_object;
	func_10155();
	object var_4718_object; object var_4719_object;
	var_4720_object = GlobalVars[16];
	var_4720_object = var_4718_object;
	var_4721_object = GlobalVars[16];
	var_4721_object = var_4719_object;
	func_11001();
	object var_4724_object; object var_4725_object;
	var_4726_object = GlobalVars[16];
	var_4726_object = var_4724_object;
	var_4727_object = GlobalVars[16];
	var_4727_object = var_4725_object;
	func_10141();
	object var_4730_object; object var_4731_object;
	var_4732_object = GlobalVars[16];
	var_4732_object = var_4730_object;
	var_4733_object = GlobalVars[16];
	var_4733_object = var_4731_object;
	func_10148();
	object var_4736_object; object var_4737_object;
	var_4738_object = GlobalVars[16];
	var_4738_object = var_4736_object;
	var_4739_object = GlobalVars[16];
	var_4739_object = var_4737_object;
	func_10813();
	object var_4742_object; object var_4743_object;
	var_4744_object = GlobalVars[16];
	var_4744_object = var_4742_object;
	var_4745_object = GlobalVars[16];
	var_4745_object = var_4743_object;
	func_11017();
	object var_4748_object; object var_4749_object;
	var_4750_object = GlobalVars[16];
	var_4750_object = var_4748_object;
	var_4751_object = GlobalVars[16];
	var_4751_object = var_4749_object;
	func_10820();
	object var_4754_object; object var_4755_object;
	var_4756_object = GlobalVars[16];
	var_4756_object = var_4754_object;
	var_4757_object = GlobalVars[16];
	var_4757_object = var_4755_object;
	func_10945();
	object var_4781_object;
	func_137(var_4781_object, "volonteers_klara");
	object var_4789_object;
	func_137(var_4789_object, "quest_k1_01");
	object var_4791_object;
	func_137(var_4791_object, "klara2_positioner");
	object var_4793_object;
	func_137(var_4793_object, "klara2_svita_positioner");
	object var_4795_object;
	func_137(var_4795_object, "klara2_npc_positioner");
	@SetTimeEvent(45110, 48.0);
	@SetTimeEvent(45166, 103.02);
	@SetTimeEvent(45096, 80.0);
	@SetTimeEvent(45104, 168.0);
	@SetTimeEvent(45100, 72.0);
}


// @pe
void func_194(bool var_5863_bool, object var_5864_object, float var_5865_float)
{
	if(!var_5864_object) { //@nz
		var_5863_bool = false;
		return 0;
	}
	if(var_5865_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_5865_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_5870_float;
		var_5865_float = var_5870_float;
		func_229(var_5870_float);
		bool var_5874_bool; object var_5875_object; float var_5877_float;
		var_5864_object = var_5875_object;
		var_5865_float = var_5877_float;
		func_93(var_5874_bool, var_5875_object, "reputation", var_5877_float, (float)0, (float)1);
		var_5863_bool = true;
		return 0;

	}
	
	var_5863_bool = false;
}


// @pe
void func_7364(int var_3138_int, int var_3139_int, object var_3140_object, object var_3141_object, object var_3142_object, object var_3143_object)
{
	if(var_3139_int == 0) {
		func_796(15, true);
		func_813(15, true, 1);
		int var_3152_int; object var_3153_object; object var_3154_object; object var_3155_object;
		var_3138_int = var_3152_int;
		var_3140_object = var_3153_object;
		var_3141_object = var_3154_object;
		var_3142_object = var_3155_object;
		func_641(15, var_3152_int, var_3153_object, var_3154_object, var_3155_object);
		object var_3156_object;
		var_3143_object = var_3156_object;
		func_305(var_3156_object, 1);
		func_870(15, true, 5);
		func_932(15, false, 5);
	}
	func_779(15, false);
	int var_3167_int; int var_3168_int;
	var_3138_int = var_3167_int;
	var_3139_int = var_3168_int;
	func_2584(15, var_3167_int, var_3168_int);
}


void func_10461(void)
{
	object var_5622_object;
	func_11417(var_5622_object);
	object var_5620_object;
	var_5622_object = var_5620_object;
	object var_5621_object;
	var_5620_object->FindMark(var_5621_object, "k4q03AlexandrGotoBurah");
	if(var_5621_object != 0)
		var_5621_object->Remove();
	var_5620_object->FindMark(var_5621_object, "k4q01GrifGotoBraga");
	if(var_5621_object != 0)
		var_5621_object->Remove();
	var_5620_object->FindMark(var_5621_object, "k4q01AlexandrGotoGrif");
	if(var_5621_object != 0)
		var_5621_object->Remove();
	var_5620_object->FindMark(var_5621_object, "k4q01GrifGotoNotkin");
	if(var_5621_object != 0)
		var_5621_object->Remove();
	var_5620_object->FindMark(var_5621_object, "k4q02KaterinaGotoTheater");
	if(var_5621_object != 0)
		var_5621_object->Remove();
	var_5620_object->FindMark(var_5621_object, "k4q02MarkGotoTheater");
	if(var_5621_object != 0)
		var_5621_object->Remove();
	var_5620_object->FindMark(var_5621_object, "k4q03LaraGotoAlexandr");
	if(var_5621_object != 0)
		var_5621_object->Remove();
	bool var_5637_bool;
	func_11392(var_5637_bool, 368);
	bool var_5639_bool;
	func_11392(var_5639_bool, 378);
	bool var_5641_bool;
	func_11392(var_5641_bool, 384);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5342(int var_3712_int, int var_3713_int, object var_3714_object, object var_3715_object, object var_3716_object, object var_3717_object)
{
	if(var_3713_int == 0) {
		func_796(4, false);
		func_813(4, false, 1);
		int var_3726_int; object var_3727_object; object var_3728_object; object var_3729_object;
		var_3712_int = var_3726_int;
		var_3714_object = var_3727_object;
		var_3715_object = var_3728_object;
		var_3716_object = var_3729_object;
		func_720(4, var_3726_int, var_3727_object, var_3728_object, var_3729_object);
		object var_3730_object;
		var_3717_object = var_3730_object;
		func_305(var_3730_object, 2);
		func_870(4, false, 4);
		func_932(4, true, 4);
	}
	func_779(4, false);
	int var_3741_int; int var_3742_int;
	var_3712_int = var_3741_int;
	var_3713_int = var_3742_int;
	func_3847(4, var_3741_int, var_3742_int);
}


// @pe
void func_6370(int var_2867_int, int var_2868_int, object var_2869_object, object var_2870_object, object var_2871_object, object var_2872_object)
{
	if(var_2868_int == 0) {
		func_796(10, true);
		func_813(10, true, 1);
		int var_2881_int; object var_2882_object; object var_2883_object; object var_2884_object;
		var_2867_int = var_2881_int;
		var_2869_object = var_2882_object;
		var_2870_object = var_2883_object;
		var_2871_object = var_2884_object;
		func_641(10, var_2881_int, var_2882_object, var_2883_object, var_2884_object);
		object var_2885_object;
		var_2872_object = var_2885_object;
		func_305(var_2885_object, 1);
		func_870(10, true, 7);
		func_932(10, false, 7);
	}
	func_779(10, false);
	int var_2896_int; int var_2897_int;
	var_2867_int = var_2896_int;
	var_2868_int = var_2897_int;
	func_2764(10, var_2896_int, var_2897_int);
}


void func_229(float var_5870_float)
{
	object var_5872_object;
	@CreateFloatVector(var_5872_object);
	var_5872_object->add(var_5870_float);
	@SendWorldWndMessage(16, var_5872_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1255(float var_2157_float, int var_2158_int)
{
	if((var_2158_int + 1) == 1) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x53f";
	}
	if((var_2158_int + 1) == 2) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x53f";
	}
	if((var_2158_int + 1) == 3) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x53f";
	}
	if((var_2158_int + 1) == 4) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x53f";
	}
	if((var_2158_int + 1) == 5) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x53f";
	}
	if((var_2158_int + 1) == 6) {
		var_2157_float = 2;
		return 0;
	EMIT "GOTO 0x53f";
	}
	if((var_2158_int + 1) == 7) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x53f";
	}
	if((var_2158_int + 1) == 8) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x53f";
	}
	if((var_2158_int + 1) == 9) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x53f";
	}
	if((var_2158_int + 1) == 10) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x53f";
	}
	if((var_2158_int + 1) == 11) {
		var_2157_float = 1;
		return 0;
	}
	var_2157_float = 0;
}


void func_3304(int var_2303_int, int var_2304_int, int var_2305_int)
{
	int var_2308_int; int var_2309_int;
	bool var_2310_bool = false;
	if(var_2305_int > 8) {
		if(var_2305_int < 21)
			var_2310_bool = true;
	}
	if(var_2310_bool != 0) {
		int var_2315_int;
		var_2303_int = var_2315_int;
		func_503(var_2315_int, "pers_vaxxabit", "vaxxabit_d.xml", 7);
		int var_2319_int;
		var_2303_int = var_2319_int;
		func_503(var_2319_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 7);
		int var_2323_int;
		var_2303_int = var_2323_int;
		func_503(var_2323_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2327_int;
		var_2303_int = var_2327_int;
		func_529(var_2327_int, "fog", "fog.xml", 7);
		if(var_2304_int >= 5) {
			int var_2333_int;
			var_2303_int = var_2333_int;
			func_529(var_2333_int, "fog", "fog_hunter.xml", 3);
		}
		float var_2338_float; int var_2339_int;
		func_1255(var_2338_float, var_2339_int);
		if((2 * var_2338_float) != 0) {
			int var_2341_int; int var_2344_int;
			var_2303_int = var_2341_int;
			var_2308_int = var_2344_int;
			func_503(var_2341_int, "pers_bomber", "bomber.xml", var_2344_int);
		}
	} else {
		int var_2375_int;
		var_2303_int = var_2375_int;
		func_503(var_2375_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2379_int;
		var_2303_int = var_2379_int;
		func_503(var_2379_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2383_int;
		var_2303_int = var_2383_int;
		func_503(var_2383_int, "pers_rat_big", "rat_big.xml", 4);
		int var_2387_int;
		var_2303_int = var_2387_int;
		func_529(var_2387_int, "fog", "fog.xml", 7);
		if(var_2339_int >= 5) {
			int var_2393_int;
			var_2303_int = var_2393_int;
			func_529(var_2393_int, "fog", "fog_hunter.xml", 3);
		}
		float var_2398_float; int var_2399_int;
		var_2304_int = var_2399_int;
		func_1255(var_2398_float, var_2399_int);
		if((2 * var_2398_float) == 0) goto Label_3422;
		int var_2401_int; int var_2404_int;
		var_2303_int = var_2401_int;
		var_2309_int = var_2404_int;
		func_503(var_2401_int, "pers_bomber", "bomber.xml", var_2404_int);
	}
Label_3422:
	bool var_2345_bool; int var_2346_int;
	var_2304_int = var_2346_int;
	func_1372(var_2345_bool, var_2346_int);
	if(var_2345_bool != 0) {
		int var_2347_int;
		var_2303_int = var_2347_int;
		func_503(var_2347_int, "pers_sanitar", "sanitar.xml", 2);
	}
	int var_2351_int;
	var_2303_int = var_2351_int;
	func_516(var_2351_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2357_int;
	var_2303_int = var_2357_int;
	func_516(var_2357_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2363_int;
	var_2303_int = var_2363_int;
	func_516(var_2363_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2369_int;
	var_2303_int = var_2369_int;
	func_516(var_2369_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	
}


void func_11501(void)
{
	float var_4412_float; float var_4414_float;
	@GetGameTime(var_4412_float);
	int var_4413_int = 1;
	
	for(;;) {
		if(var_4413_int < 288) {
			var_4414_float = 1.0 * var_4413_int;
			if(var_4414_float < var_4412_float) {
			} else {
			@SetTimeEvent((40000 + var_4413_int), var_4414_float);
			var_4414_float -= 0.0033333334;
			if(var_4414_float < var_4412_float) {
				goto Label_11526;
			}
			@SetTimeEvent((42000 + var_4413_int), var_4414_float);
		}
		func_8200();
		func_13099();
		}
	Label_11526:
		var_4413_int += 1;
	}
	
}


void func_239(bool var_672_bool, string var_673_string, string var_674_string)
{
	object var_676_object;
	@FindActor(var_676_object, var_673_string);
	if(var_676_object == null)
		var_672_bool = false;
	@Trigger(var_676_object, var_674_string);
	var_672_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_7416(int var_4272_int, int var_4273_int, object var_4274_object, object var_4275_object, object var_4276_object, object var_4277_object)
{
	if(var_4273_int == 0) {
		func_796(15, false);
		func_813(15, false, 1);
		int var_4286_int; object var_4287_object; object var_4288_object; object var_4289_object;
		var_4272_int = var_4286_int;
		var_4274_object = var_4287_object;
		var_4275_object = var_4288_object;
		var_4276_object = var_4289_object;
		func_720(15, var_4286_int, var_4287_object, var_4288_object, var_4289_object);
		object var_4290_object;
		var_4277_object = var_4290_object;
		func_305(var_4290_object, 2);
		func_870(15, false, 5);
		func_932(15, true, 5);
	}
	func_779(15, false);
	int var_4301_int; int var_4302_int;
	var_4272_int = var_4301_int;
	var_4273_int = var_4302_int;
	func_3471(15, var_4301_int, var_4302_int);
}


void func_251(bool var_4680_bool, string var_4681_string, string var_4682_string, string var_4683_string)
{
	object var_4685_object;
	@FindActor(var_4685_object, var_4681_string);
	if(var_4685_object == null)
		var_4680_bool = false;
	@Trigger(var_4685_object, var_4682_string, var_4683_string);
	var_4680_bool = true;
}
EMIT "Stack[-1] = 0";


void func_13574(int var_4305_int)
{
	object var_4313_object; object var_4314_object; object var_4315_object; object var_4316_object; object var_4317_object; string var_4318_string; string var_4319_string;
	if(var_4305_int == 1) {
		@Trace("Special diseased house: r4_house_2_02");
		@GetSceneByName(var_4313_object, "r4_house_2_02");
		@ReplaceScene(var_4313_object, "s_r4_house_2_02.isc");
		var_4313_object = null;
	}
	if(var_4305_int == 3) {
	} else if(var_4305_int == 4) {
			@GetSceneByName(var_4314_object, "theater");
			@ReplaceScene(var_4314_object, "dtheater_klara.isc");
			var_4314_object = null;
	}

	for(;;) {
		bool var_4327_bool = false;
		if((var_4305_int + 1) >= 8) {
			if((var_4305_int + 1) <= 11)
				var_4327_bool = true;
		}
		if(var_4327_bool != 0) {
			string var_4336_string;
			func_13047(var_4336_string, (var_4305_int + 1));
			var_4336_string = var_4318_string;
			@GetSceneByName(var_4317_object, var_4318_string);
			@ReplaceScene(var_4317_object, (("k2s_" + var_4318_string) + ".isc"));
			string var_4351_string;
			func_13073(var_4351_string, (var_4305_int + 1));
			var_4351_string = var_4319_string;
			@GetSceneByName(var_4317_object, var_4319_string);
			@ReplaceScene(var_4317_object, (("k2s_" + var_4319_string) + ".isc"));
			var_4317_object = null;
		}

	}
	
	if(var_4305_int == 8) {
		@Trace("Special replaced house: uprava_admin");
		@GetSceneByName(var_4315_object, "uprava_admin");
		@ReplaceScene(var_4315_object, "uprava_admin_army_klara.isc");
		var_4315_object = null;
	} else if(var_4305_int == 11) {
		@GetSceneByName(var_4316_object, "theater");
		@ReplaceScene(var_4316_object, "theater_klara.isc");
		var_4316_object = null;
	}
}


void func_263(object var_599_object)
{
	int var_603_int; int var_604_int; object var_605_object;
	if(var_599_object != 0) {
		var_599_object->size(var_603_int);
		var_604_int = 0;

		while(var_604_int < var_603_int) {
			var_599_object->get(var_605_object, var_604_int);
			if(var_605_object != 0)
				var_605_object->Remove();
			var_605_object = null;
			var_604_int += 1;
		}

		var_599_object->clear();
	}
}


// @pe
void func_11536(int var_4816_int, float var_4817_float)
{
	if(var_4816_int == 45286) {
		bool var_4820_bool; object var_4821_object;
		var_4822_object = GlobalVars[16];
		var_4822_object = var_4821_object;
		func_11276(var_4821_object);
		if(!var_4820_bool) { //@nz
			int var_4830_int; float var_4831_float;
			var_4817_float = var_4831_float;
			func_10132(var_4830_int, var_4831_float);
		}
	}
	if(var_4816_int == 45288) {
		bool var_4841_bool; object var_4842_object;
		var_4843_object = GlobalVars[16];
		var_4843_object = var_4842_object;
		func_11300(var_4842_object);
		if(!var_4841_bool) { //@nz
			int var_4849_int; float var_4850_float;
			var_4817_float = var_4850_float;
			func_9943(var_4849_int, var_4850_float);
		}
	}
	if(var_4816_int == 45287) {
		bool var_4857_bool; object var_4858_object;
		var_4859_object = GlobalVars[16];
		var_4859_object = var_4858_object;
		func_11288(var_4858_object);
		if(!var_4857_bool) { //@nz
			int var_4865_int; float var_4866_float;
			var_4817_float = var_4866_float;
			func_9925(var_4865_int, var_4866_float);
		}
	}
	if(var_4816_int == 45289) {
		bool var_4873_bool; object var_4874_object;
		var_4875_object = GlobalVars[16];
		var_4875_object = var_4874_object;
		func_11024(var_4874_object);
		if(!var_4873_bool) { //@nz
			int var_4881_int; float var_4882_float;
			var_4817_float = var_4882_float;
			func_9952(var_4881_int, var_4882_float);
		}
	}
	if(var_4816_int == 45272) {
		object var_4889_object; object var_4890_object;
		var_4891_object = GlobalVars[16];
		var_4891_object = var_4889_object;
		var_4892_object = GlobalVars[16];
		var_4892_object = var_4890_object;
		func_10843();
	}
	if(var_4816_int == 45277) {
		object var_4903_object; object var_4904_object;
		var_4905_object = GlobalVars[16];
		var_4905_object = var_4903_object;
		var_4906_object = GlobalVars[16];
		var_4906_object = var_4904_object;
		func_10928();
	}
	if(var_4816_int == 45280)
		@QueuePlayMovie("army.wmv");
	if(var_4816_int == 45284) {
		bool var_4920_bool; object var_4921_object;
		var_4922_object = GlobalVars[16];
		var_4922_object = var_4921_object;
		func_11252(var_4921_object);
		if(!var_4920_bool) { //@nz
			int var_4928_int; float var_4929_float;
			var_4817_float = var_4929_float;
			func_10114(var_4928_int, var_4929_float);
		}
	}
	if(var_4816_int == 45258) {
		int var_4936_int; float var_4937_float;
		var_4817_float = var_4937_float;
		func_10015(var_4936_int, var_4937_float);
	}
	if(var_4816_int == 45285) {
		bool var_4944_bool; object var_4945_object;
		var_4946_object = GlobalVars[16];
		var_4946_object = var_4945_object;
		func_11264(var_4945_object);
		if(!var_4944_bool) { //@nz
			int var_4952_int; float var_4953_float;
			var_4817_float = var_4953_float;
			func_10123(var_4952_int, var_4953_float);
		}
	}
	if(var_4816_int == 45279)
		@QueuePlayMovie("aglaja.wmv");
	if(var_4816_int == 45256) {
		bool var_4963_bool; object var_4964_object;
		var_4965_object = GlobalVars[16];
		var_4965_object = var_4964_object;
		func_11228(var_4964_object);
		if(!var_4963_bool) { //@nz
			int var_4971_int; float var_4972_float;
			var_4817_float = var_4972_float;
			func_10105(var_4971_int, var_4972_float);
		}
	}
	if(var_4816_int == 45274) {
		object var_4979_object; object var_4980_object;
		var_4981_object = GlobalVars[16];
		var_4981_object = var_4979_object;
		var_4982_object = GlobalVars[16];
		var_4982_object = var_4980_object;
		func_10877();
	}
	if(var_4816_int == 45276) {
		object var_4993_object; object var_4994_object;
		var_4995_object = GlobalVars[16];
		var_4995_object = var_4993_object;
		var_4996_object = GlobalVars[16];
		var_4996_object = var_4994_object;
		func_10911();
	}
	if(var_4816_int == 45281) {
		bool var_5007_bool; object var_5008_object;
		var_5009_object = GlobalVars[16];
		var_5009_object = var_5008_object;
		func_11240(var_5008_object);
		if(!var_5007_bool) { //@nz
			int var_5015_int; float var_5016_float;
			var_4817_float = var_5016_float;
			func_10069(var_5015_int, var_5016_float);
		}
	}
	if(var_4816_int == 45283) {
		object var_5023_object; object var_5024_object;
		var_5025_object = GlobalVars[16];
		var_5025_object = var_5023_object;
		var_5026_object = GlobalVars[16];
		var_5026_object = var_5024_object;
		func_10950();
	}
	if(var_4816_int == 45275) {
		object var_5072_object; object var_5073_object;
		var_5074_object = GlobalVars[16];
		var_5074_object = var_5072_object;
		var_5075_object = GlobalVars[16];
		var_5075_object = var_5073_object;
		func_10894();
	}
	if(var_4816_int == 45278) {
		bool var_5086_bool; object var_5087_object;
		var_5088_object = GlobalVars[16];
		var_5088_object = var_5087_object;
		func_11060(var_5087_object);
		if(!var_5086_bool) { //@nz
			object var_5094_object; object var_5095_object;
			var_5096_object = GlobalVars[16];
			var_5096_object = var_5094_object;
			var_5097_object = GlobalVars[16];
			var_5097_object = var_5095_object;
			func_11008();
		}
	}
	if(var_4816_int == 45273) {
		object var_5135_object; object var_5136_object;
		var_5137_object = GlobalVars[16];
		var_5137_object = var_5135_object;
		var_5138_object = GlobalVars[16];
		var_5138_object = var_5136_object;
		func_10860();
	}
	if(var_4816_int == 45257) {
		int var_5149_int; float var_5150_float;
		var_4817_float = var_5150_float;
		func_10006(var_5149_int, var_5150_float);
	}
	if(var_4816_int == 45243) {
		bool var_5157_bool; object var_5158_object;
		var_5159_object = GlobalVars[16];
		var_5159_object = var_5158_object;
		func_11084(var_5158_object);
		if(!var_5157_bool) { //@nz
			object var_5165_object; object var_5166_object;
			var_5167_object = GlobalVars[16];
			var_5167_object = var_5165_object;
			var_5168_object = GlobalVars[16];
			var_5168_object = var_5166_object;
			func_10827();
			int var_5185_int; float var_5186_float;
			var_4817_float = var_5186_float;
			func_9997(var_5185_int, var_5186_float);
		}
	}
	if(var_4816_int == 45172) {
		bool var_5193_bool; object var_5194_object;
		var_5195_object = GlobalVars[16];
		var_5195_object = var_5194_object;
		func_11312(var_5193_bool, var_5194_object);
		if(var_5193_bool != 0) {
			int var_5198_int; float var_5199_float;
			var_4817_float = var_5199_float;
			func_9916(var_5198_int, var_5199_float);
		}
	}
	if(var_4816_int == 45249) {
		object var_5206_object;
		func_137(var_5206_object, "quest_k5_04");
	}
	if(var_4816_int == 45241) {
		int var_5216_int; float var_5217_float;
		var_4817_float = var_5217_float;
		func_9970(var_5216_int, var_5217_float);
	}
	if(var_4816_int == 45245) {
		int var_5224_int; float var_5225_float;
		var_4817_float = var_5225_float;
		func_10024(var_5224_int, var_5225_float);
	}
	if(var_4816_int == 45252) {
		bool var_5232_bool = true;
		bool var_5233_bool; object var_5234_object;
		var_5235_object = GlobalVars[16];
		var_5235_object = var_5234_object;
		func_11168(var_5234_object);
		var_5240_bool = !var_5233_bool; //@nz
		if(var_5240_bool != 1) {
			bool var_5241_bool; object var_5242_object;
			var_5243_object = GlobalVars[16];
			var_5243_object = var_5242_object;
			func_11180(var_5242_object);
			var_5248_bool = !var_5241_bool; //@nz
			if(var_5248_bool != 1)
				var_5232_bool = false;
		}
		if(var_5232_bool != 0) {
			int var_5249_int; float var_5250_float;
			var_4817_float = var_5250_float;
			func_9979(var_5249_int, var_5250_float);
		}
	}
	if(var_4816_int == 45247) {
		int var_5257_int; float var_5258_float;
		var_4817_float = var_5258_float;
		func_10087(var_5257_int, var_5258_float);
	}
	if(var_4816_int == 45170) {
		bool var_5265_bool; object var_5266_object;
		var_5267_object = GlobalVars[16];
		var_5267_object = var_5266_object;
		func_11312(var_5265_bool, var_5266_object);
		if(var_5265_bool != 0) {
			int var_5268_int; float var_5269_float;
			var_4817_float = var_5269_float;
			func_9889(var_5268_int, var_5269_float);
		}
	}
	if(var_4816_int == 45253) {
		bool var_5276_bool = true;
		bool var_5277_bool; object var_5278_object;
		var_5279_object = GlobalVars[16];
		var_5279_object = var_5278_object;
		func_11204(var_5278_object);
		var_5284_bool = !var_5277_bool; //@nz
		if(var_5284_bool != 1) {
			bool var_5285_bool; object var_5286_object;
			var_5287_object = GlobalVars[16];
			var_5287_object = var_5286_object;
			func_11192(var_5286_object);
			var_5292_bool = !var_5285_bool; //@nz
			if(var_5292_bool != 1)
				var_5276_bool = false;
		}
		if(var_5276_bool != 0) {
			int var_5293_int; float var_5294_float;
			var_4817_float = var_5294_float;
			func_9979(var_5293_int, var_5294_float);
		}
	}
	if(var_4816_int == 45173) {
		bool var_5297_bool; object var_5298_object;
		var_5299_object = GlobalVars[16];
		var_5299_object = var_5298_object;
		func_11312(var_5297_bool, var_5298_object);
		if(var_5297_bool != 0) {
			int var_5300_int; float var_5301_float;
			var_4817_float = var_5301_float;
			func_9934(var_5300_int, var_5301_float);
		}
	}
	if(var_4816_int == 45254) {
		int var_5308_int; float var_5309_float;
		var_4817_float = var_5309_float;
		func_10042(var_5308_int, var_5309_float);
	}
	if(var_4816_int == 45255) {
		bool var_5316_bool; object var_5317_object;
		var_5318_object = GlobalVars[16];
		var_5318_object = var_5317_object;
		func_11216(var_5317_object);
		if(!var_5316_bool) { //@nz
			int var_5324_int; float var_5325_float;
			var_4817_float = var_5325_float;
			func_10078(var_5324_int, var_5325_float);
		}
	}
	if(var_4816_int == 45167) {
		bool var_5332_bool; object var_5333_object;
		var_5334_object = GlobalVars[16];
		var_5334_object = var_5333_object;
		func_11312(var_5332_bool, var_5333_object);
		if(var_5332_bool != 0) {
			int var_5335_int; float var_5336_float;
			var_4817_float = var_5336_float;
			func_9862(var_5335_int, var_5336_float);
		}
	}
	if(var_4816_int == 45240) {
		bool var_5343_bool; object var_5344_object;
		var_5345_object = GlobalVars[16];
		var_5345_object = var_5344_object;
		func_11060(var_5344_object);
		if(!var_5343_bool) { //@nz
			int var_5347_int; float var_5348_float;
			var_4817_float = var_5348_float;
			func_9961(var_5347_int, var_5348_float);
		}
	}
	if(var_4816_int == 45250) {
		bool var_5355_bool = true;
		bool var_5356_bool; object var_5357_object;
		var_5358_object = GlobalVars[16];
		var_5358_object = var_5357_object;
		func_11120(var_5357_object);
		var_5363_bool = !var_5356_bool; //@nz
		if(var_5363_bool != 1) {
			bool var_5364_bool; object var_5365_object;
			var_5366_object = GlobalVars[16];
			var_5366_object = var_5365_object;
			func_11132(var_5365_object);
			var_5371_bool = !var_5364_bool; //@nz
			if(var_5371_bool != 1)
				var_5355_bool = false;
		}
		if(var_5355_bool != 0) {
			int var_5372_int; float var_5373_float;
			var_4817_float = var_5373_float;
			func_9979(var_5372_int, var_5373_float);
		}
	}
	if(var_4816_int == 45168) {
		bool var_5376_bool; object var_5377_object;
		var_5378_object = GlobalVars[16];
		var_5378_object = var_5377_object;
		func_11312(var_5376_bool, var_5377_object);
		if(var_5376_bool != 0) {
			int var_5379_int; float var_5380_float;
			var_4817_float = var_5380_float;
			func_9871(var_5379_int, var_5380_float);
		}
	}
	if(var_4816_int == 45171) {
		bool var_5387_bool; object var_5388_object;
		var_5389_object = GlobalVars[16];
		var_5389_object = var_5388_object;
		func_11312(var_5387_bool, var_5388_object);
		if(var_5387_bool != 0) {
			int var_5390_int; float var_5391_float;
			var_4817_float = var_5391_float;
			func_9898(var_5390_int, var_5391_float);
		}
	}
	if(var_4816_int == 45244) {
		int var_5398_int; float var_5399_float;
		var_4817_float = var_5399_float;
		func_9988(var_5398_int, var_5399_float);
	}
	if(var_4816_int == 45246) {
		int var_5406_int; float var_5407_float;
		var_4817_float = var_5407_float;
		func_10060(var_5406_int, var_5407_float);
	}
	if(var_4816_int == 45236) {
		int var_5414_int; float var_5415_float;
		var_4817_float = var_5415_float;
		func_10033(var_5414_int, var_5415_float);
	}
	if(var_4816_int == 45248) {
		bool var_5422_bool; object var_5423_object;
		var_5424_object = GlobalVars[16];
		var_5424_object = var_5423_object;
		func_11096(var_5423_object);
		if(!var_5422_bool) { //@nz
			int var_5430_int; float var_5431_float;
			var_4817_float = var_5431_float;
			func_10096(var_5430_int, var_5431_float);
		}
	}
	if(var_4816_int == 45251) {
		bool var_5438_bool = true;
		bool var_5439_bool; object var_5440_object;
		var_5441_object = GlobalVars[16];
		var_5441_object = var_5440_object;
		func_11144(var_5440_object);
		var_5446_bool = !var_5439_bool; //@nz
		if(var_5446_bool != 1) {
			bool var_5447_bool; object var_5448_object;
			var_5449_object = GlobalVars[16];
			var_5449_object = var_5448_object;
			func_11156(var_5448_object);
			var_5454_bool = !var_5447_bool; //@nz
			if(var_5454_bool != 1)
				var_5438_bool = false;
		}
		if(var_5438_bool != 0) {
			int var_5455_int; float var_5456_float;
			var_4817_float = var_5456_float;
			func_9979(var_5455_int, var_5456_float);
		}
	}
	if(var_4816_int == 45242) {
		bool var_5459_bool = true;
		bool var_5460_bool; object var_5461_object;
		var_5462_object = GlobalVars[16];
		var_5462_object = var_5461_object;
		func_11072(var_5461_object);
		var_5467_bool = !var_5460_bool; //@nz
		if(var_5467_bool != 1) {
			bool var_5468_bool; object var_5469_object;
			var_5470_object = GlobalVars[16];
			var_5470_object = var_5469_object;
			func_11108(var_5469_object);
			var_5475_bool = !var_5468_bool; //@nz
			if(var_5475_bool != 1)
				var_5459_bool = false;
		}
		if(var_5459_bool != 0) {
			int var_5476_int; float var_5477_float;
			var_4817_float = var_5477_float;
			func_9979(var_5476_int, var_5477_float);
		}
	}
	if(var_4816_int == 45169) {
		bool var_5480_bool; object var_5481_object;
		var_5482_object = GlobalVars[16];
		var_5482_object = var_5481_object;
		func_11312(var_5480_bool, var_5481_object);
		if(var_5480_bool != 0) {
			int var_5483_int; float var_5484_float;
			var_4817_float = var_5484_float;
			func_9880(var_5483_int, var_5484_float);
		}
	}
	if(var_4816_int == 45108) {
		object var_5491_object; object var_5492_object;
		var_5493_object = GlobalVars[16];
		var_5493_object = var_5491_object;
		var_5494_object = GlobalVars[16];
		var_5494_object = var_5492_object;
		func_10757();
		bool var_5512_bool;
		func_239(var_5512_bool, "quest_k10_01", "cleanup");
		object var_5515_object;
		func_137(var_5515_object, "quest_k11_01");
	}
	if(var_4816_int == 45102) {
		object var_5519_object; object var_5520_object;
		var_5521_object = GlobalVars[16];
		var_5521_object = var_5519_object;
		var_5522_object = GlobalVars[16];
		var_5522_object = var_5520_object;
		func_10530();
		object var_5552_object;
		func_148(var_5552_object, "quest_k6_01");
	}
	if(var_4816_int == 45103) {
		object var_5562_object; object var_5563_object;
		var_5564_object = GlobalVars[16];
		var_5564_object = var_5562_object;
		var_5565_object = GlobalVars[16];
		var_5565_object = var_5563_object;
		func_10610();
		bool var_5591_bool;
		func_239(var_5591_bool, "quest_k6_01", "cleanup");
		object var_5594_object;
		func_137(var_5594_object, "quest_k7_01");
	}
	if(var_4816_int == 45107) {
		bool var_5598_bool; object var_5599_object;
		var_5600_object = GlobalVars[16];
		var_5600_object = var_5599_object;
		func_11048(var_5599_object);
		if(!var_5598_bool) { //@nz
			int var_5606_int; float var_5607_float;
			var_4817_float = var_5607_float;
			func_9907(var_5606_int, var_5607_float);
		}
	}
	if(var_4816_int == 45101) {
		object var_5614_object; object var_5615_object;
		var_5616_object = GlobalVars[16];
		var_5616_object = var_5614_object;
		var_5617_object = GlobalVars[16];
		var_5617_object = var_5615_object;
		func_10461();
		object var_5643_object; object var_5644_object;
		var_5645_object = GlobalVars[16];
		var_5645_object = var_5643_object;
		var_5646_object = GlobalVars[16];
		var_5646_object = var_5644_object;
		func_10162();
		bool var_5657_bool;
		func_239(var_5657_bool, "quest_k4_01", "cleanup");
	}
	if(var_4816_int == 45109) {
		object var_5662_object; object var_5663_object;
		var_5664_object = GlobalVars[16];
		var_5664_object = var_5662_object;
		var_5665_object = GlobalVars[16];
		var_5665_object = var_5663_object;
		func_10795();
		bool var_5674_bool;
		func_239(var_5674_bool, "quest_k11_01", "cleanup");
		object var_5677_object;
		func_137(var_5677_object, "quest_k12_01");
	}
	if(var_4816_int == 45105) {
		object var_5681_object; object var_5682_object;
		var_5683_object = GlobalVars[16];
		var_5683_object = var_5681_object;
		var_5684_object = GlobalVars[16];
		var_5684_object = var_5682_object;
		func_10721();
		bool var_5693_bool;
		func_239(var_5693_bool, "quest_k8_01", "cleanup");
		object var_5696_object;
		func_137(var_5696_object, "quest_k9_01");
	}
	if(var_4816_int == 45106) {
		object var_5700_object; object var_5701_object;
		var_5702_object = GlobalVars[16];
		var_5702_object = var_5700_object;
		var_5703_object = GlobalVars[16];
		var_5703_object = var_5701_object;
		func_10739();
		bool var_5712_bool;
		func_239(var_5712_bool, "quest_k9_01", "cleanup");
		object var_5715_object;
		func_137(var_5715_object, "quest_k10_01");
	}
	if(var_4816_int == 45095) {
		object var_5719_object; object var_5720_object;
		var_5721_object = GlobalVars[16];
		var_5721_object = var_5719_object;
		var_5722_object = GlobalVars[16];
		var_5722_object = var_5720_object;
		func_10176();
		bool var_5754_bool;
		func_239(var_5754_bool, "quest_k1_01", "cleanup");
	}
	if(var_4816_int == 45163) {
		bool var_5759_bool; object var_5760_object;
		var_5761_object = GlobalVars[16];
		var_5761_object = var_5760_object;
		func_11312(var_5759_bool, var_5760_object);
		if(var_5759_bool != 0) {
			int var_5762_int; float var_5763_float;
			var_4817_float = var_5763_float;
			func_9826(var_5762_int, var_5763_float);
		}
	}
	if(var_4816_int == 45164) {
		bool var_5770_bool; object var_5771_object;
		var_5772_object = GlobalVars[16];
		var_5772_object = var_5771_object;
		func_11312(var_5770_bool, var_5771_object);
		if(var_5770_bool != 0) {
			int var_5773_int; float var_5774_float;
			var_4817_float = var_5774_float;
			func_9835(var_5773_int, var_5774_float);
		}
	}
	if(var_4816_int == 45165) {
		bool var_5781_bool; object var_5782_object;
		var_5783_object = GlobalVars[16];
		var_5783_object = var_5782_object;
		func_11312(var_5781_bool, var_5782_object);
		if(var_5781_bool != 0) {
			int var_5784_int; float var_5785_float;
			var_4817_float = var_5785_float;
			func_9844(var_5784_int, var_5785_float);
		}
	}
	if(var_4816_int == 45110) {
		object var_5792_object; object var_5793_object;
		var_5794_object = GlobalVars[16];
		var_5794_object = var_5792_object;
		var_5795_object = GlobalVars[16];
		var_5795_object = var_5793_object;
		func_10266();
		object var_5833_object; object var_5834_object;
		var_5835_object = GlobalVars[16];
		var_5835_object = var_5833_object;
		var_5836_object = GlobalVars[16];
		var_5836_object = var_5834_object;
		func_10162();
		object var_5837_object;
		func_137(var_5837_object, "quest_k3_01");
	}
	if(var_4816_int == 45166) {
		bool var_5841_bool; object var_5842_object;
		var_5843_object = GlobalVars[16];
		var_5843_object = var_5842_object;
		func_11312(var_5841_bool, var_5842_object);
		if(var_5841_bool != 0) {
			int var_5844_int; float var_5845_float;
			var_4817_float = var_5845_float;
			func_9853(var_5844_int, var_5845_float);
		}
	}
	if(var_4816_int == 45096) {
		bool var_5852_bool; object var_5853_object;
		var_5854_object = GlobalVars[16];
		var_5854_object = var_5853_object;
		func_11036(var_5853_object);
		if(var_5852_bool != 0) {
			object var_5859_object; object var_5860_object;
			var_5861_object = GlobalVars[16];
			var_5861_object = var_5859_object;
			var_5862_object = GlobalVars[16];
			var_5862_object = var_5860_object;
			func_10994(var_5860_object);
			int var_5895_int; float var_5896_float;
			var_4817_float = var_5896_float;
			func_10051(var_5895_int, var_5896_float);
		}
	}
	if(var_4816_int == 45104) {
		object var_5903_object; object var_5904_object;
		var_5905_object = GlobalVars[16];
		var_5905_object = var_5903_object;
		var_5906_object = GlobalVars[16];
		var_5906_object = var_5904_object;
		func_10676();
		bool var_5926_bool;
		func_239(var_5926_bool, "quest_k7_01", "cleanup");
		object var_5929_object;
		func_137(var_5929_object, "quest_k8_01");
	}
	if(var_4816_int == 45100) {
		object var_5933_object; object var_5934_object;
		var_5935_object = GlobalVars[16];
		var_5935_object = var_5933_object;
		var_5936_object = GlobalVars[16];
		var_5936_object = var_5934_object;
		func_10374();
		object var_5968_object; object var_5969_object;
		var_5970_object = GlobalVars[16];
		var_5970_object = var_5968_object;
		var_5971_object = GlobalVars[16];
		var_5971_object = var_5969_object;
		func_10169();
		bool var_5974_bool;
		func_239(var_5974_bool, "quest_k3_01", "cleanup");
		object var_5977_object;
		func_148(var_5977_object, "quest_k4_01");
	}
}


// @pe
void func_5394(object var_144_object)
{
	var_144_object->add("dt_house3_14_i2");
	var_144_object->add("dt_house3_14");
	var_144_object->add("house1_arc_01l");
	var_144_object->add("house1_arc_01r");
	var_144_object->add("dt_House6_01");
	var_144_object->add("dt_house_1_09");
	var_144_object->add("house5_24");
	var_144_object->add("dt_House6_03");
	var_144_object->add("dt_House6_04");
	var_144_object->add("dt_house_1_08");
	var_144_object->add("house5_unoin_solidl");
	var_144_object->add("house5_unoin_solidr");
	var_144_object->add("dt_house2_12");
	var_144_object->add("dt_house2_11");
	var_144_object->add("dt_house2_13");
	var_144_object->add("dt_house2_09");
	var_144_object->add("dt_house2_08");
	var_144_object->add("dt_house2_07");
	var_144_object->add("dt_house2_06");
	var_144_object->add("house5_01");
	var_144_object->add("house5_15");
	var_144_object->add("house5_16");
	var_144_object->add("house5_17");
	var_144_object->add("house5_unoin04l");
	var_144_object->add("house5_unoin04r");
	var_144_object->add("house5_23");
	var_144_object->add("house1_se_05r");
	var_144_object->add("house1_se_05l");
	var_144_object->add("dt_house2_10");
}


// @pe
void func_6422(int var_3997_int, int var_3998_int, object var_3999_object, object var_4000_object, object var_4001_object, object var_4002_object)
{
	if(var_3998_int == 0) {
		func_796(10, false);
		func_813(10, false, 1);
		int var_4011_int; object var_4012_object; object var_4013_object; object var_4014_object;
		var_3997_int = var_4011_int;
		var_3999_object = var_4012_object;
		var_4000_object = var_4013_object;
		var_4001_object = var_4014_object;
		func_720(10, var_4011_int, var_4012_object, var_4013_object, var_4014_object);
		object var_4015_object;
		var_4002_object = var_4015_object;
		func_305(var_4015_object, 2);
		func_870(10, false, 7);
		func_932(10, true, 7);
	}
	func_779(10, false);
	int var_4026_int; int var_4027_int;
	var_3997_int = var_4026_int;
	var_3998_int = var_4027_int;
	func_3659(10, var_4026_int, var_4027_int);
}


void func_284(float var_4580_float)
{
	float var_4582_float;
	@GetGameTime(var_4582_float);
	var_4582_float = var_4580_float;
}


void func_289(void)
{
	@SetSepia(0.5, 0.886);
}


// @pe
void func_4385(void)
{
}


// @pe
void func_4387(int var_518_int, int var_519_int, object var_520_object, object var_521_object, object var_522_object, object var_523_object)
{
	if(var_519_int == 0) {
		func_796(0, false);
		func_813(0, false, 1);
		int var_566_int; int var_567_int; object var_568_object; object var_569_object; object var_570_object;
		var_566_int = 0;
		var_518_int = var_567_int;
		var_520_object = var_568_object;
		var_521_object = var_569_object;
		var_522_object = var_570_object;
		func_622(var_567_int, var_568_object, var_569_object, var_570_object);
		object var_612_object;
		var_523_object = var_612_object;
		func_305(var_612_object, 0);
		func_870(0, false, 4);
		func_932(0, false, 4);
	}
	int var_725_int;
	var_519_int = var_725_int;
	func_1050(0, var_725_int);
	int var_751_int; int var_752_int;
	var_518_int = var_751_int;
	var_519_int = var_752_int;
	func_2206(0, var_751_int, var_752_int);
}


void func_10530(void)
{
	object var_5527_object;
	func_11417(var_5527_object);
	object var_5525_object;
	var_5527_object = var_5525_object;
	object var_5526_object;
	var_5525_object->FindMark(var_5526_object, "k5q03LaskaGotoAlbinos");
	if(var_5526_object != 0)
		var_5526_object->Remove();
	var_5525_object->FindMark(var_5526_object, "k5q01AlexandrGotoMladVlad");
	if(var_5526_object != 0)
		var_5526_object->Remove();
	var_5525_object->FindMark(var_5526_object, "k5q01RubinGotoGeorg");
	if(var_5526_object != 0)
		var_5526_object->Remove();
	var_5525_object->FindMark(var_5526_object, "k5q04KapellaGotoMaria");
	if(var_5526_object != 0)
		var_5526_object->Remove();
	var_5525_object->FindMark(var_5526_object, "k5q04MariaGotoDanko");
	if(var_5526_object != 0)
		var_5526_object->Remove();
	var_5525_object->FindMark(var_5526_object, "k5q02KabatchikGotoAlexandr");
	if(var_5526_object != 0)
		var_5526_object->Remove();
	var_5525_object->FindMark(var_5526_object, "k5q02KaterinaGotoPetr");
	if(var_5526_object != 0)
		var_5526_object->Remove();
	var_5525_object->FindMark(var_5526_object, "k5q02PetrGotoAndrei");
	if(var_5526_object != 0)
		var_5526_object->Remove();
	bool var_5544_bool;
	func_11392(var_5544_bool, 390);
	bool var_5546_bool;
	func_11392(var_5546_bool, 397);
	bool var_5548_bool;
	func_11392(var_5548_bool, 405);
	bool var_5550_bool;
	func_11392(var_5550_bool, 740);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_294(void)
{
	@SetSepia(0, 0);
}


// @pe
void func_299(string var_446_string, int var_447_int)
{
	var_446_string = ("Region" + var_447_int) + "State";
}


void func_305(object var_612_object, int var_613_int)
{
	int var_620_int; string var_621_string; string var_623_string; object var_625_object;
	var_612_object->size(var_620_int);
	if(var_613_int == 1) {
		var_621_string = "s_";
	} else if(var_613_int == 2) {
	}
	int var_622_int = 0;
	
	for(;;) {
		if(var_622_int < var_620_int) {
			var_612_object->get(var_623_string, var_622_int);
			@GetSceneByName(var_625_object, var_623_string);
			if(!var_625_object) //@nz
				@Trace(("City manager: can't replace indoor scene \"" + var_623_string) + "\" because it doesn't exist");
			else
				@ReplaceScene(var_625_object, (("n_" + var_623_string) + ".isc"));

		}
		var_625_object = null;
		var_622_int += 1;
	}
	
}


// @pe
void func_1345(bool var_1128_bool, int var_1129_int, int var_1130_int)
{
	var_1128_bool = false;
	if(var_1129_int >= 10) {
		if(var_1130_int < 6)
			var_1128_bool = true;
	}
}


// @pe
void func_6474(object var_245_object)
{
	var_245_object->add("r5_house2_01");
	var_245_object->add("r5_house2_02");
	var_245_object->add("r5_house2_03");
	var_245_object->add("r5_house3_01_i2");
	var_245_object->add("r5_house3_01");
	var_245_object->add("r5_house3_02_i2");
	var_245_object->add("r5_house3_02");
	var_245_object->add("r5_house3_03_i2");
	var_245_object->add("r5_house3_03");
	var_245_object->add("r5_house3_04_i2");
	var_245_object->add("r5_house3_04");
	var_245_object->add("r5_house3_05_i2");
	var_245_object->add("r5_house3_05");
	var_245_object->add("r5_house3_06_i2");
	var_245_object->add("r5_house3_06");
	var_245_object->add("r5_house3_07_i2");
	var_245_object->add("r5_house3_07");
	var_245_object->add("r5_House6_01");
}


// @pe
void func_1355(bool var_1139_bool, int var_1140_int, int var_1141_int)
{
	var_1139_bool = false;
	if(var_1140_int >= 3) {
		bool var_1144_bool = true;
		var_1146_bool = var_1141_int > 22;
		if(var_1146_bool != 1) {
			var_1148_bool = var_1141_int < 5;
			if(var_1148_bool != 1)
				var_1144_bool = false;
		}
		if(var_1144_bool != 0)
			var_1139_bool = true;
	}
}


void func_2383(int var_914_int, int var_915_int, int var_916_int)
{
	int var_918_int;
	if((var_915_int + 1) == 12)
		return 2;
	bool var_923_bool = false;
	bool var_924_bool = true;
	var_926_bool = var_916_int < 7;
	if(var_926_bool != 1) {
		var_928_bool = var_916_int > 21;
		if(var_928_bool != 1)
			var_924_bool = false;
	}
	if(var_924_bool != 0) {
		if(var_915_int != 0)
			var_923_bool = true;
	}
	if(var_923_bool != 0) {
		float var_932_float; int var_933_int;
		var_915_int = var_933_int;
		func_1141(var_932_float, var_933_int);
		if((1 * var_932_float) != 0) {
			int var_935_int; int var_938_int;
			var_914_int = var_935_int;
			var_918_int = var_938_int;
			func_503(var_935_int, "pers_grabitel", "grabitel.xml", var_938_int);
		}
	}
	bool var_939_bool; int var_940_int; int var_941_int;
	var_916_int = var_941_int;
	func_1110(var_939_bool, var_940_int, var_941_int);
	if(var_939_bool != 0) {
		int var_942_int;
		var_914_int = var_942_int;
		func_503(var_942_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_946_int;
		var_914_int = var_946_int;
		func_503(var_946_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_950_int;
		var_914_int = var_950_int;
		func_503(var_950_int, "pers_worker", "worker_attacker.xml", 1);
		int var_954_int;
		var_914_int = var_954_int;
		func_503(var_954_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_958_int;
		var_914_int = var_958_int;
		func_503(var_958_int, "pers_alkash", "alkash.xml", 1);
		int var_962_int;
		var_914_int = var_962_int;
		func_503(var_962_int, "pers_woman", "woman.xml", 2);
	} else {
			bool var_978_bool = false;
			if(var_916_int > 8) {
				if(var_916_int < 21)
					var_978_bool = true;
			}
			if(var_978_bool == 0) goto Label_2524;
			int var_983_int;
			var_914_int = var_983_int;
			func_503(var_983_int, "pers_worker", "worker.xml", 2);
			int var_987_int;
			var_914_int = var_987_int;
			func_503(var_987_int, "pers_worker", "worker2.xml", 2);
			int var_991_int;
			var_914_int = var_991_int;
			func_503(var_991_int, "pers_alkash", "alkash.xml", 1);
			int var_995_int;
			var_914_int = var_995_int;
			func_503(var_995_int, "pers_woman", "woman.xml", 2);
			int var_999_int;
			var_914_int = var_999_int;
			func_503(var_999_int, "pers_unosha", "unosha.xml", 1);
			int var_1003_int;
			var_914_int = var_1003_int;
			func_503(var_1003_int, "pers_unosha", "unosha2.xml", 1);
	}
	for(;;) {
		bool var_966_bool = false;
		bool var_967_bool = false;
		if(var_940_int == 0) {
			if(var_916_int > 12)
				var_967_bool = true;
		}
		if(var_967_bool != 0) {
			if(var_916_int < 22)
				var_966_bool = true;
		}
		if(var_966_bool != 0) {
			int var_974_int;
			var_914_int = var_974_int;
			func_503(var_974_int, "pers_woman", "woman_killme.xml", 1);
		}
		return 2;

	}
	
Label_2524:
	int var_1007_int;
	var_914_int = var_1007_int;
	func_503(var_1007_int, "pers_alkash", "alkash.xml", 1);
	int var_1011_int;
	var_914_int = var_1011_int;
	func_503(var_1011_int, "pers_worker", "worker.xml", 1);
	int var_1015_int;
	var_914_int = var_1015_int;
	func_503(var_1015_int, "pers_worker", "worker2.xml", 1);
	int var_1019_int;
	var_914_int = var_1019_int;
	func_503(var_1019_int, "pers_unosha", "unosha2.xml", 1);
	int var_1023_int;
	var_914_int = var_1023_int;
	func_503(var_1023_int, "pers_dog", "dog.xml", 1);
}


// @pe
void func_4439(int var_2005_int, int var_2006_int, object var_2007_object, object var_2008_object, object var_2009_object, object var_2010_object)
{
	if(var_2006_int == 0) {
		func_796(0, true);
		func_813(0, true, 1);
		int var_2019_int; object var_2020_object; object var_2021_object; object var_2022_object;
		var_2005_int = var_2019_int;
		var_2007_object = var_2020_object;
		var_2008_object = var_2021_object;
		var_2009_object = var_2022_object;
		func_641(0, var_2019_int, var_2020_object, var_2021_object, var_2022_object);
		object var_2108_object;
		var_2010_object = var_2108_object;
		func_305(var_2108_object, 1);
		func_870(0, true, 4);
		func_932(0, false, 4);
	}
	func_779(0, false);
	int var_2119_int; int var_2120_int;
	var_2005_int = var_2119_int;
	var_2006_int = var_2120_int;
	func_3137(0, var_2119_int, var_2120_int);
}


void func_343(int var_122_int)
{
	int var_125_int; int var_126_int;
	var_125_int = 0;
	
	while(0 < 16) {
		bool var_129_bool; int var_130_int;
		var_126_int = var_130_int;
		func_430(var_129_bool, var_130_int);
		if(var_129_bool != 0)
			var_125_int += 1;
		var_126_int += 1;
	}
	
	var_125_int = var_122_int;
}


// @pe
void func_1372(bool var_2208_bool, int var_2209_int)
{
	var_2208_bool = var_2209_int >= 8;
}


void func_1376(int var_1806_int, int var_1807_int, int var_1808_int)
{
	int var_1810_int;
	if((var_1807_int + 1) == 12)
		return 2;
	bool var_1815_bool = false;
	bool var_1816_bool = true;
	var_1818_bool = var_1808_int < 7;
	if(var_1818_bool != 1) {
		var_1820_bool = var_1808_int > 21;
		if(var_1820_bool != 1)
			var_1816_bool = false;
	}
	if(var_1816_bool != 0) {
		if(var_1807_int != 0)
			var_1815_bool = true;
	}
	if(var_1815_bool != 0) {
		float var_1823_float; int var_1824_int;
		var_1807_int = var_1824_int;
		func_1141(var_1823_float, var_1824_int);
		var_1823_float = var_1810_int;
		if(var_1810_int != 0) {
			int var_1826_int; int var_1829_int;
			var_1806_int = var_1826_int;
			var_1810_int = var_1829_int;
			func_503(var_1826_int, "pers_grabitel", "grabitel.xml", var_1829_int);
		}
	}
	bool var_1830_bool; int var_1831_int; int var_1832_int;
	var_1808_int = var_1832_int;
	func_1110(var_1830_bool, var_1831_int, var_1832_int);
	if(var_1830_bool != 0) {
		int var_1833_int;
		var_1806_int = var_1833_int;
		func_503(var_1833_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1837_int;
		var_1806_int = var_1837_int;
		func_503(var_1837_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1841_int;
		var_1806_int = var_1841_int;
		func_503(var_1841_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1845_int;
		var_1806_int = var_1845_int;
		func_503(var_1845_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1849_int;
		var_1806_int = var_1849_int;
		func_503(var_1849_int, "pers_wasted_girl", "wasted_girl.xml", 2);
		int var_1853_int;
		var_1806_int = var_1853_int;
		func_503(var_1853_int, "pers_wasted_male", "wasted_male.xml", 3);
		int var_1857_int;
		var_1806_int = var_1857_int;
		func_503(var_1857_int, "pers_woman", "woman.xml", 3);
		int var_1861_int;
		var_1806_int = var_1861_int;
		func_503(var_1861_int, "pers_boy", "boy.xml", 1);
		int var_1865_int;
		var_1806_int = var_1865_int;
		func_503(var_1865_int, "pers_girl", "girl.xml", 1);
		int var_1869_int;
		var_1806_int = var_1869_int;
		func_503(var_1869_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_1892_bool = false;
			if(var_1808_int > 8) {
				if(var_1808_int < 21)
					var_1892_bool = true;
			}
			if(var_1892_bool == 0) goto Label_1558;
			int var_1897_int;
			var_1806_int = var_1897_int;
			func_503(var_1897_int, "pers_wasted_girl", "wasted_girl.xml", 2);
			int var_1901_int;
			var_1806_int = var_1901_int;
			func_503(var_1901_int, "pers_wasted_male", "wasted_male.xml", 3);
			int var_1905_int;
			var_1806_int = var_1905_int;
			func_503(var_1905_int, "pers_woman", "woman.xml", 3);
			int var_1909_int;
			var_1806_int = var_1909_int;
			func_503(var_1909_int, "pers_unosha", "unosha.xml", 2);
			int var_1913_int;
			var_1806_int = var_1913_int;
			func_503(var_1913_int, "pers_unosha", "unosha2.xml", 2);
			int var_1917_int;
			var_1806_int = var_1917_int;
			func_503(var_1917_int, "pers_boy", "boy.xml", 2);
			int var_1921_int;
			var_1806_int = var_1921_int;
			func_503(var_1921_int, "pers_girl", "girl.xml", 1);
			int var_1925_int;
			var_1806_int = var_1925_int;
			func_503(var_1925_int, "pers_girl", "girl2.xml", 1);
	}
	for(;;) {
		bool var_1873_bool = false;
		bool var_1874_bool = false;
		if(var_1831_int == 0) {
			if(var_1808_int > 12)
				var_1874_bool = true;
		}
		if(var_1874_bool != 0) {
			if(var_1808_int < 22)
				var_1873_bool = true;
		}
		if(var_1873_bool != 0) {
			int var_1881_int;
			var_1806_int = var_1881_int;
			func_503(var_1881_int, "pers_wasted_girl", "wasted_girl_killme.xml", 1);
		}
		bool var_1885_bool; int var_1886_int; int var_1887_int;
		var_1807_int = var_1886_int;
		var_1808_int = var_1887_int;
		func_1345(var_1885_bool, var_1886_int, var_1887_int);
		if(var_1885_bool != 0) {
			int var_1888_int;
			var_1806_int = var_1888_int;
			func_503(var_1888_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		return 2;

	}
	
Label_1558:
	int var_1929_int;
	var_1806_int = var_1929_int;
	func_503(var_1929_int, "pers_wasted_girl", "wasted_girl.xml", 1);
	int var_1933_int;
	var_1806_int = var_1933_int;
	func_503(var_1933_int, "pers_wasted_male", "wasted_male.xml", 2);
	int var_1937_int;
	var_1806_int = var_1937_int;
	func_503(var_1937_int, "pers_unosha", "unosha.xml", 1);
	int var_1941_int;
	var_1806_int = var_1941_int;
	func_503(var_1941_int, "pers_unosha", "unosha2.xml", 1);
}


void func_13671(object var_4538_object, object var_4539_object, cvector var_4540_cvector, cvector var_4541_cvector)
{
	object var_4543_object;
	var_4539_object->AddStationaryActor(var_4543_object, var_4540_cvector, var_4541_cvector, "pers_morlok", "Burah_arena_manager.xml");
	var_4543_object = var_4538_object;
}
EMIT "Stack[-1] = 0";


void func_361(int var_135_int)
{
	int var_140_int; int var_142_int;
	@irand(var_140_int, 16);
	int var_141_int = 0;
	
	while(var_141_int < 16) {
		var_142_int = (var_141_int + var_140_int) % 16;
		bool var_148_bool = false;
		bool var_149_bool; int var_150_int;
		var_142_int = var_150_int;
		func_400(var_149_bool, var_150_int);
		if(var_149_bool != 0) {
			bool var_158_bool; int var_159_int; int var_160_int;
			var_142_int = var_159_int;
			var_135_int = var_160_int;
			func_13113(var_158_bool, var_159_int, var_160_int);
			if(var_158_bool != 0)
				var_148_bool = true;
		}
		if(var_148_bool != 0) {
			int var_221_int;
			func_442(var_221_int);
			@Trace("Diseased Region: " + var_221_int);
		}
		var_141_int += 1;
	}
	
}


// @pe
void func_5483(int var_1341_int, int var_1342_int, object var_1343_object, object var_1344_object, object var_1345_object, object var_1346_object)
{
	if(var_1342_int == 0) {
		func_796(5, false);
		func_813(5, false, 1);
		int var_1354_int; int var_1355_int; object var_1356_object; object var_1357_object; object var_1358_object;
		var_1354_int = 5;
		var_1341_int = var_1355_int;
		var_1343_object = var_1356_object;
		var_1344_object = var_1357_object;
		var_1345_object = var_1358_object;
		func_622(var_1355_int, var_1356_object, var_1357_object, var_1358_object);
		object var_1359_object;
		var_1346_object = var_1359_object;
		func_305(var_1359_object, 0);
		func_870(5, false, 4);
		func_932(5, false, 4);
	}
	int var_1368_int;
	var_1342_int = var_1368_int;
	func_983(5, var_1368_int);
	int var_1370_int; int var_1371_int;
	var_1341_int = var_1370_int;
	var_1342_int = var_1371_int;
	func_1897(5, var_1370_int, var_1371_int);
}


void func_10610(void)
{
	object var_5570_object;
	func_11417(var_5570_object);
	object var_5568_object;
	var_5570_object = var_5568_object;
	object var_5569_object;
	var_5568_object->FindMark(var_5569_object, "k6q03LaskaGotoAlbinos");
	if(var_5569_object != 0)
		var_5569_object->Remove();
	var_5568_object->FindMark(var_5569_object, "k6q01IfAnna");
	if(var_5569_object != 0)
		var_5569_object->Remove();
	var_5568_object->FindMark(var_5569_object, "k6q01IfEva");
	if(var_5569_object != 0)
		var_5569_object->Remove();
	var_5568_object->FindMark(var_5569_object, "k6q01IfLara");
	if(var_5569_object != 0)
		var_5569_object->Remove();
	var_5568_object->FindMark(var_5569_object, "k6q01IfOspina");
	if(var_5569_object != 0)
		var_5569_object->Remove();
	var_5568_object->FindMark(var_5569_object, "k6q02GotoKapella");
	if(var_5569_object != 0)
		var_5569_object->Remove();
	bool var_5583_bool;
	func_11392(var_5583_bool, 408);
	bool var_5585_bool;
	func_11392(var_5585_bool, 500);
	bool var_5587_bool;
	func_11392(var_5587_bool, 748);
	bool var_5589_bool;
	func_11392(var_5589_bool, 723);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_8570(int var_4477_int, int var_4478_int)
{
	object var_4486_object; object var_4487_object; string var_4488_string; int var_4489_int; int var_4490_int; int var_4491_int;
	bool var_4492_bool = false;
	if(var_4478_int == 5) {
		if(var_4477_int >= 7)
			var_4492_bool = true;
	}
	if(var_4492_bool != 0) {
		int var_4497_int;
		func_11434(var_4497_int);
		if(var_4497_int != 2)
			func_7781();
	} else {
		bool var_4774_bool = false;
		if(var_4478_int == 22) {
			if(var_4477_int >= 7)
				var_4774_bool = true;
		}
		if(var_4774_bool == 0) goto Label_8610;
		int var_4779_int;
		func_11434(var_4779_int);
		if(!(var_4779_int != 2)) goto Label_8610;
		func_7844();
	}
Label_8610:
	bool var_4546_bool = false;
	if(var_4478_int == 7) {
		if(var_4477_int != 1)
			var_4546_bool = true;
	}
	if(var_4546_bool != 0)
		@SendWorldWndMessage(100);
	if(var_4478_int == 0) {
		func_8748();
		func_8823();
		if(var_4477_int == 6) {
			@GetMainOutdoorScene(var_4486_object);
			@AddScriptedActor(var_4487_object, "shed_corpse", "splash_object_wo_pf.bin", var_4486_object, [0.0, 0.0, 0.0]);
			var_4487_object = null;
			var_4486_object = null;
		}
		if(var_4477_int == 9)
			func_8872();
		if(var_4477_int != 1) {
			int var_4669_int;
			func_11434(var_4669_int);
			if(var_4669_int == 1) {
				@GetVariable((("b" + (var_4477_int - 1)) + "q01"), var_4489_int);
				var_4488_string = "volonteers_burah";
			} else {
					int var_4759_int;
					func_11434(var_4759_int);
					if(!(var_4759_int == 0)) goto Label_8685;
					@GetVariable((("d" + (var_4477_int - 1)) + "q01"), var_4489_int);
					var_4488_string = "volonteers_danko";
			}
			for(;;) {
				@Trace(var_4488_string);
				if(var_4489_int == 1000) {
					bool var_4680_bool; string var_4681_string;
					var_4488_string = var_4681_string;
					func_251(var_4680_bool, var_4681_string, "rescue_locked", "");
				}
				bool var_4687_bool; string var_4688_string;
				var_4488_string = var_4688_string;
				func_251(var_4687_bool, var_4688_string, "update", "");
		}
	}
		bool var_4691_bool = false;
		if(var_4477_int == 6) {
			if(var_4478_int == 0)
				var_4691_bool = true;
		}
		if(var_4691_bool != 0)
			func_7901();
		bool var_4698_bool = false;
		if(var_4477_int == 7) {
			if(var_4478_int == 0)
				var_4698_bool = true;
		}
		if(var_4698_bool != 0) {
			var_4703_object = GlobalVars[14];
			var_4703_object->size(var_4490_int);

			for(;;) {
				if(!(0 < var_4490_int)) goto Label_8747;
				int var_4705_int;
				var_4491_int = var_4705_int;
				func_7608(var_4705_int);
				var_4491_int += 1;
			}
		}
	Label_8747:

	}
	
Label_8685:
	@GetVariable((("k" + (var_4477_int - 1)) + "q01"), var_4489_int);
	var_4488_string = "volonteers_klara";
	
}


void func_9601(int var_3169_int, int var_3170_int, int var_3171_int)
{
	var_3180_object = GlobalVars[8];
	object var_3176_object;
	var_3180_object->get(var_3176_object, var_3169_int);
	var_3181_object = GlobalVars[9];
	object var_3177_object;
	var_3181_object->get(var_3177_object, var_3169_int);
	var_3182_object = GlobalVars[10];
	object var_3178_object;
	var_3182_object->get(var_3178_object, var_3169_int);
	var_3183_object = GlobalVars[13];
	object var_3179_object;
	var_3183_object->get(var_3179_object, var_3169_int);
	if(var_3169_int == 0) {
		int var_3186_int; int var_3187_int; object var_3188_object; object var_3189_object; object var_3190_object; object var_3191_object;
		var_3170_int = var_3186_int;
		var_3171_int = var_3187_int;
		var_3176_object = var_3188_object;
		var_3177_object = var_3189_object;
		var_3178_object = var_3190_object;
		var_3179_object = var_3191_object;
		func_4491(var_3186_int, var_3187_int, var_3188_object, var_3189_object, var_3190_object, var_3191_object);
	} else if(var_3169_int == 1) {
			int var_3400_int; int var_3401_int; object var_3402_object; object var_3403_object; object var_3404_object; object var_3405_object;
			var_3170_int = var_3400_int;
			var_3171_int = var_3401_int;
			var_3176_object = var_3402_object;
			var_3177_object = var_3403_object;
			var_3178_object = var_3404_object;
			var_3179_object = var_3405_object;
			func_4688(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_3169_int == 2) {
		int var_3536_int; int var_3537_int; object var_3538_object; object var_3539_object; object var_3540_object; object var_3541_object;
		var_3170_int = var_3536_int;
		var_3171_int = var_3537_int;
		var_3176_object = var_3538_object;
		var_3177_object = var_3539_object;
		var_3178_object = var_3540_object;
		var_3179_object = var_3541_object;
		func_4894(var_3536_int, var_3537_int, var_3538_object, var_3539_object, var_3540_object, var_3541_object);
	} else if(var_3169_int == 3) {
		int var_3679_int; int var_3680_int; object var_3681_object; object var_3682_object; object var_3683_object; object var_3684_object;
		var_3170_int = var_3679_int;
		var_3171_int = var_3680_int;
		var_3176_object = var_3681_object;
		var_3177_object = var_3682_object;
		var_3178_object = var_3683_object;
		var_3179_object = var_3684_object;
		func_5124(var_3679_int, var_3680_int, var_3681_object, var_3682_object, var_3683_object, var_3684_object);
	} else if(var_3169_int == 4) {
		int var_3712_int; int var_3713_int; object var_3714_object; object var_3715_object; object var_3716_object; object var_3717_object;
		var_3170_int = var_3712_int;
		var_3171_int = var_3713_int;
		var_3176_object = var_3714_object;
		var_3177_object = var_3715_object;
		var_3178_object = var_3716_object;
		var_3179_object = var_3717_object;
		func_5342(var_3712_int, var_3713_int, var_3714_object, var_3715_object, var_3716_object, var_3717_object);
	} else if(var_3169_int == 5) {
		int var_3745_int; int var_3746_int; object var_3747_object; object var_3748_object; object var_3749_object; object var_3750_object;
		var_3170_int = var_3745_int;
		var_3171_int = var_3746_int;
		var_3176_object = var_3747_object;
		var_3177_object = var_3748_object;
		var_3178_object = var_3749_object;
		var_3179_object = var_3750_object;
		func_5587(var_3745_int, var_3746_int, var_3747_object, var_3748_object, var_3749_object, var_3750_object);
	} else if(var_3169_int == 6) {
		int var_3778_int; int var_3779_int; object var_3780_object; object var_3781_object; object var_3782_object; object var_3783_object;
		var_3170_int = var_3778_int;
		var_3171_int = var_3779_int;
		var_3176_object = var_3780_object;
		var_3177_object = var_3781_object;
		var_3178_object = var_3782_object;
		var_3179_object = var_3783_object;
		func_5655();
	} else if(var_3169_int == 7) {
		int var_3788_int; int var_3789_int; object var_3790_object; object var_3791_object; object var_3792_object; object var_3793_object;
		var_3170_int = var_3788_int;
		var_3171_int = var_3789_int;
		var_3176_object = var_3790_object;
		var_3177_object = var_3791_object;
		var_3178_object = var_3792_object;
		var_3179_object = var_3793_object;
		func_5810(var_3788_int, var_3789_int, var_3790_object, var_3791_object, var_3792_object, var_3793_object);
	} else if(var_3169_int == 8) {
		int var_3931_int; int var_3932_int; object var_3933_object; object var_3934_object; object var_3935_object; object var_3936_object;
		var_3170_int = var_3931_int;
		var_3171_int = var_3932_int;
		var_3176_object = var_3933_object;
		var_3177_object = var_3934_object;
		var_3178_object = var_3935_object;
		var_3179_object = var_3936_object;
		func_6010(var_3931_int, var_3932_int, var_3933_object, var_3934_object, var_3935_object, var_3936_object);
	} else if(var_3169_int == 9) {
		int var_3964_int; int var_3965_int; object var_3966_object; object var_3967_object; object var_3968_object; object var_3969_object;
		var_3170_int = var_3964_int;
		var_3171_int = var_3965_int;
		var_3176_object = var_3966_object;
		var_3177_object = var_3967_object;
		var_3178_object = var_3968_object;
		var_3179_object = var_3969_object;
		func_6213(var_3964_int, var_3965_int, var_3966_object, var_3967_object, var_3968_object, var_3969_object);
	} else if(var_3169_int == 10) {
		int var_3997_int; int var_3998_int; object var_3999_object; object var_4000_object; object var_4001_object; object var_4002_object;
		var_3170_int = var_3997_int;
		var_3171_int = var_3998_int;
		var_3176_object = var_3999_object;
		var_3177_object = var_4000_object;
		var_3178_object = var_4001_object;
		var_3179_object = var_4002_object;
		func_6422(var_3997_int, var_3998_int, var_3999_object, var_4000_object, var_4001_object, var_4002_object);
	} else if(var_3169_int == 11) {
		int var_4030_int; int var_4031_int; object var_4032_object; object var_4033_object; object var_4034_object; object var_4035_object;
		var_3170_int = var_4030_int;
		var_3171_int = var_4031_int;
		var_3176_object = var_4032_object;
		var_3177_object = var_4033_object;
		var_3178_object = var_4034_object;
		var_3179_object = var_4035_object;
		func_6634(var_4030_int, var_4031_int, var_4032_object, var_4033_object, var_4034_object, var_4035_object);
	} else if(var_3169_int == 12) {
		int var_4063_int; int var_4064_int; object var_4065_object; object var_4066_object; object var_4067_object; object var_4068_object;
		var_3170_int = var_4063_int;
		var_3171_int = var_4064_int;
		var_3176_object = var_4065_object;
		var_3177_object = var_4066_object;
		var_3178_object = var_4067_object;
		var_3179_object = var_4068_object;
		func_6831(var_4063_int, var_4064_int, var_4065_object, var_4066_object, var_4067_object, var_4068_object);
	} else if(var_3169_int == 13) {
		int var_4096_int; int var_4097_int; object var_4098_object; object var_4099_object; object var_4100_object; object var_4101_object;
		var_3170_int = var_4096_int;
		var_3171_int = var_4097_int;
		var_3176_object = var_4098_object;
		var_3177_object = var_4099_object;
		var_3178_object = var_4100_object;
		var_3179_object = var_4101_object;
		func_7034(var_4096_int, var_4097_int, var_4098_object, var_4099_object, var_4100_object, var_4101_object);
	} else if(var_3169_int == 14) {
		int var_4129_int; int var_4130_int; object var_4131_object; object var_4132_object; object var_4133_object; object var_4134_object;
		var_3170_int = var_4129_int;
		var_3171_int = var_4130_int;
		var_3176_object = var_4131_object;
		var_3177_object = var_4132_object;
		var_3178_object = var_4133_object;
		var_3179_object = var_4134_object;
		func_7234(var_4129_int, var_4130_int, var_4131_object, var_4132_object, var_4133_object, var_4134_object);
	} else if(var_3169_int == 15) {
		int var_4272_int; int var_4273_int; object var_4274_object; object var_4275_object; object var_4276_object; object var_4277_object;
		var_3170_int = var_4272_int;
		var_3171_int = var_4273_int;
		var_3176_object = var_4274_object;
		var_3177_object = var_4275_object;
		var_3178_object = var_4276_object;
		var_3179_object = var_4277_object;
		func_7416(var_4272_int, var_4273_int, var_4274_object, var_4275_object, var_4276_object, var_4277_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_6530(int var_1670_int, int var_1671_int, object var_1672_object, object var_1673_object, object var_1674_object, object var_1675_object)
{
	if(var_1671_int == 0) {
		func_796(11, false);
		func_813(11, false, 1);
		int var_1683_int; int var_1684_int; object var_1685_object; object var_1686_object; object var_1687_object;
		var_1683_int = 11;
		var_1670_int = var_1684_int;
		var_1672_object = var_1685_object;
		var_1673_object = var_1686_object;
		var_1674_object = var_1687_object;
		func_622(var_1684_int, var_1685_object, var_1686_object, var_1687_object);
		object var_1688_object;
		var_1675_object = var_1688_object;
		func_305(var_1688_object, 0);
		func_870(11, false, 5);
		func_932(11, false, 5);
	}
	int var_1697_int;
	var_1671_int = var_1697_int;
	func_983(11, var_1697_int);
	int var_1699_int; int var_1700_int;
	var_1670_int = var_1699_int;
	var_1671_int = var_1700_int;
	func_1624(11, var_1699_int, var_1700_int);
}


// @pe
void func_4491(int var_3186_int, int var_3187_int, object var_3188_object, object var_3189_object, object var_3190_object, object var_3191_object)
{
	if(var_3187_int == 0) {
		func_796(0, false);
		func_813(0, false, 1);
		int var_3200_int; object var_3201_object; object var_3202_object; object var_3203_object;
		var_3186_int = var_3200_int;
		var_3188_object = var_3201_object;
		var_3189_object = var_3202_object;
		var_3190_object = var_3203_object;
		func_720(0, var_3200_int, var_3201_object, var_3202_object, var_3203_object);
		object var_3238_object;
		var_3191_object = var_3238_object;
		func_305(var_3238_object, 2);
		func_870(0, false, 4);
		func_932(0, true, 4);
	}
	func_779(0, false);
	int var_3249_int; int var_3250_int;
	var_3186_int = var_3249_int;
	var_3187_int = var_3250_int;
	func_4035(0, var_3249_int, var_3250_int);
}


void func_3471(int var_4157_int, int var_4158_int, int var_4159_int)
{
	int var_4164_int; int var_4165_int; int var_4166_int; int var_4167_int;
	bool var_4168_bool = false;
	if(var_4159_int > 8) {
		if(var_4159_int < 21)
			var_4168_bool = true;
	}
	if(var_4168_bool != 0) {
		int var_4173_int;
		var_4157_int = var_4173_int;
		func_503(var_4173_int, "pers_rat", "rat.xml", 3);
		int var_4177_int;
		var_4157_int = var_4177_int;
		func_503(var_4177_int, "pers_alkash", "alkash.xml", 2);
		int var_4181_int;
		var_4157_int = var_4181_int;
		func_503(var_4181_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_4186_float; int var_4187_int;
		func_1165(var_4186_float, var_4187_int);
		if((2 * var_4186_float) != 0) {
			int var_4189_int; int var_4192_int;
			var_4157_int = var_4189_int;
			var_4164_int = var_4192_int;
			func_503(var_4189_int, "pers_grabitel", "grabitel.xml", var_4192_int);
		}
		if((var_4187_int + 1) >= 2) {
			int var_4197_int;
			var_4157_int = var_4197_int;
			func_503(var_4197_int, "pers_patrool", "patrol.xml", 2);
			bool var_4201_bool; int var_4202_int;
			var_4158_int = var_4202_int;
			func_1372(var_4201_bool, var_4202_int);
			if(var_4201_bool != 0) {
				int var_4203_int;
				var_4157_int = var_4203_int;
				func_503(var_4203_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_4208_float; int var_4209_int;
		func_1255(var_4208_float, var_4209_int);
		if((1 * var_4208_float) != 0) {
			int var_4211_int; int var_4214_int;
			var_4157_int = var_4211_int;
			var_4165_int = var_4214_int;
			func_503(var_4211_int, "pers_bomber", "bomber.xml", var_4214_int);
		}
	} else {
		int var_4228_int;
		var_4157_int = var_4228_int;
		func_503(var_4228_int, "pers_rat", "rat.xml", 5);
		int var_4232_int;
		var_4157_int = var_4232_int;
		func_503(var_4232_int, "pers_alkash", "alkash.xml", 1);
		if((var_4209_int + 1) >= 2) {
			int var_4240_int;
			var_4157_int = var_4240_int;
			func_503(var_4240_int, "pers_patrool", "patrol.xml", 1);
			bool var_4244_bool; int var_4245_int;
			var_4158_int = var_4245_int;
			func_1372(var_4244_bool, var_4245_int);
			if(var_4244_bool != 0) {
				int var_4246_int;
				var_4157_int = var_4246_int;
				func_503(var_4246_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		int var_4250_int;
		var_4157_int = var_4250_int;
		func_503(var_4250_int, "pers_rat", "rat.xml", 2);
		float var_4255_float; int var_4256_int;
		var_4158_int = var_4256_int;
		func_1165(var_4255_float, var_4256_int);
		if((3 * var_4255_float) != 0) {
			int var_4258_int; int var_4261_int;
			var_4157_int = var_4258_int;
			var_4166_int = var_4261_int;
			func_503(var_4258_int, "pers_grabitel", "grabitel.xml", var_4261_int);
		}
		float var_4263_float; int var_4264_int;
		var_4158_int = var_4264_int;
		func_1255(var_4263_float, var_4264_int);
		if((1 * var_4263_float) == 0) goto Label_3633;
		int var_4266_int; int var_4269_int;
		var_4157_int = var_4266_int;
		var_4167_int = var_4269_int;
		func_503(var_4266_int, "pers_bomber", "bomber.xml", var_4269_int);
	}
Label_3633:
	bool var_4215_bool; int var_4216_int; int var_4217_int;
	var_4158_int = var_4216_int;
	var_4159_int = var_4217_int;
	func_1345(var_4215_bool, var_4216_int, var_4217_int);
	if(var_4215_bool != 0) {
		int var_4218_int;
		var_4157_int = var_4218_int;
		func_503(var_4218_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_4222_bool; int var_4223_int;
	var_4158_int = var_4223_int;
	func_1372(var_4222_bool, var_4223_int);
	if(var_4222_bool != 0) {
		int var_4224_int;
		var_4157_int = var_4224_int;
		func_503(var_4224_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


void func_400(bool var_492_bool, int var_493_int)
{
	int var_497_int;
	var_493_int = var_497_int;
	string var_496_string;
	func_299(var_496_string, var_497_int);
	int var_495_int;
	@GetVariable(var_496_string, var_495_int);
	var_492_bool = (var_495_int & 3) == 0;
}


void func_412(int var_95_int)
{
	int var_101_int;
	var_95_int = var_101_int;
	string var_100_string;
	func_299(var_100_string, var_101_int);
	int var_98_int;
	@GetVariable(var_100_string, var_98_int);
	string var_105_string; int var_106_int;
	var_95_int = var_106_int;
	func_299(var_105_string, var_106_int);
	@SetVariable(var_105_string, ((var_98_int & 252) | 0));
}


// @pe
void func_5535(int var_2619_int, int var_2620_int, object var_2621_object, object var_2622_object, object var_2623_object, object var_2624_object)
{
	if(var_2620_int == 0) {
		func_796(5, true);
		func_813(5, true, 1);
		int var_2633_int; object var_2634_object; object var_2635_object; object var_2636_object;
		var_2619_int = var_2633_int;
		var_2621_object = var_2634_object;
		var_2622_object = var_2635_object;
		var_2623_object = var_2636_object;
		func_641(5, var_2633_int, var_2634_object, var_2635_object, var_2636_object);
		object var_2637_object;
		var_2624_object = var_2637_object;
		func_305(var_2637_object, 1);
		func_870(5, true, 4);
		func_932(5, false, 4);
	}
	func_779(5, false);
	int var_2648_int; int var_2649_int;
	var_2619_int = var_2648_int;
	var_2620_int = var_2649_int;
	func_2944(5, var_2648_int, var_2649_int);
}


void func_430(bool var_1979_bool, int var_1980_int)
{
	int var_1984_int;
	var_1980_int = var_1984_int;
	string var_1983_string;
	func_299(var_1983_string, var_1984_int);
	int var_1982_int;
	@GetVariable(var_1983_string, var_1982_int);
	var_1979_bool = (var_1982_int & 3) == 1;
}


void func_10676(void)
{
	object var_5911_object;
	func_11417(var_5911_object);
	object var_5909_object;
	var_5911_object = var_5909_object;
	object var_5910_object;
	var_5909_object->FindMark(var_5910_object, "k7q01BirdmaskGotoCorpse");
	if(var_5910_object != 0)
		var_5910_object->Remove();
	var_5909_object->FindMark(var_5910_object, "k7q02DankoGotoGatherer");
	if(var_5910_object != 0)
		var_5910_object->Remove();
	var_5909_object->FindMark(var_5910_object, "k7q03BurahGotoFather");
	if(var_5910_object != 0)
		var_5910_object->Remove();
	bool var_5918_bool;
	func_11392(var_5918_bool, 416);
	bool var_5920_bool;
	func_11392(var_5920_bool, 430);
	bool var_5922_bool;
	func_11392(var_5922_bool, 434);
	bool var_5924_bool;
	func_11392(var_5924_bool, 723);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_6582(int var_2900_int, int var_2901_int, object var_2902_object, object var_2903_object, object var_2904_object, object var_2905_object)
{
	if(var_2901_int == 0) {
		func_796(11, false);
		func_813(11, true, 1);
		int var_2914_int; object var_2915_object; object var_2916_object; object var_2917_object;
		var_2900_int = var_2914_int;
		var_2902_object = var_2915_object;
		var_2903_object = var_2916_object;
		var_2904_object = var_2917_object;
		func_641(11, var_2914_int, var_2915_object, var_2916_object, var_2917_object);
		object var_2918_object;
		var_2905_object = var_2918_object;
		func_305(var_2918_object, 1);
		func_870(11, true, 5);
		func_932(11, false, 5);
	}
	func_779(11, false);
	int var_2929_int; int var_2930_int;
	var_2900_int = var_2929_int;
	var_2901_int = var_2930_int;
	func_2764(11, var_2929_int, var_2930_int);
}


void func_7608(int var_10_int)
{
	object var_27_object;
	var_28_object = GlobalVars[14];
	int var_20_int;
	var_28_object->size(var_20_int);
	bool var_29_bool = true;
	var_30_bool = var_10_int >= var_20_int;
	if(var_30_bool != 1) {
		var_32_bool = var_10_int == -1;
		if(var_32_bool != 1)
			var_29_bool = false;
	}
	if(var_29_bool != 0) {
		@Trace("Wrong bonfire index " + var_10_int);
		return 16;
	}
	var_35_object = GlobalVars[14];
	object var_21_object;
	var_35_object->get(var_21_object, var_10_int);
	object var_22_object;
	@FindActor(var_22_object, ("bonfire_light" + (var_10_int + 1)));
	if(!var_22_object) //@nz
		@Trace(("Bofire  light " + (var_10_int + 1)) + " not found");
	else
		var_22_object->Switch(true);
	object var_23_object;
	@GetMainOutdoorScene(var_23_object);
	cvector var_24_cvector;
	cvector var_25_cvector;
	bool var_26_bool;
	var_23_object->GetLocator(("pt_bonfire" + (var_10_int + 1)), var_26_bool, var_24_cvector, var_25_cvector);
	if(!var_26_bool) { //@nz
		@Trace("Locator for bonfire doesn't exist");
		return 16;
	}
	if(!var_21_object) { //@nz
		@AddActorByType(var_27_object, "scripted", var_23_object, var_24_cvector, var_25_cvector, "bonfire_big.xml");
		var_56_object = GlobalVars[14];
		var_56_object->set(var_10_int, var_27_object);
		var_27_object = null;
	}
	@Trace(("Setting bonfire " + (var_10_int + 1)) + "... ok");
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


void func_442(int var_24_int)
{
	int var_30_int;
	var_24_int = var_30_int;
	string var_29_string;
	func_299(var_29_string, var_30_int);
	int var_27_int;
	@GetVariable(var_29_string, var_27_int);
	string var_37_string; int var_38_int;
	var_24_int = var_38_int;
	func_299(var_37_string, var_38_int);
	@SetVariable(var_37_string, ((var_27_int & 252) | 1));
}


// @pe
void func_4543(object var_63_object)
{
	var_63_object->add("dt_house3_05_i2");
	var_63_object->add("dt_house3_05");
	var_63_object->add("dt_house3_06_i2");
	var_63_object->add("dt_house_1_10");
	var_63_object->add("house5_10");
	var_63_object->add("house5_07");
	var_63_object->add("dt_house_1_03");
	var_63_object->add("dt_house1_union2_04l");
	var_63_object->add("dt_house1_union2_04r");
	var_63_object->add("house5_22");
	var_63_object->add("house5_08");
	var_63_object->add("dt_house1_union2_02l");
	var_63_object->add("dt_house1_union2_02r");
}


void func_460(bool var_86_bool, int var_87_int)
{
	int var_91_int;
	var_87_int = var_91_int;
	string var_90_string;
	func_299(var_90_string, var_91_int);
	int var_89_int;
	@GetVariable(var_90_string, var_89_int);
	var_86_bool = (var_89_int & 3) == 2;
}


// @pe
void func_5587(int var_3745_int, int var_3746_int, object var_3747_object, object var_3748_object, object var_3749_object, object var_3750_object)
{
	if(var_3746_int == 0) {
		func_796(5, false);
		func_813(5, false, 1);
		int var_3759_int; object var_3760_object; object var_3761_object; object var_3762_object;
		var_3745_int = var_3759_int;
		var_3747_object = var_3760_object;
		var_3748_object = var_3761_object;
		var_3749_object = var_3762_object;
		func_720(5, var_3759_int, var_3760_object, var_3761_object, var_3762_object);
		object var_3763_object;
		var_3750_object = var_3763_object;
		func_305(var_3763_object, 2);
		func_870(5, false, 4);
		func_932(5, true, 4);
	}
	func_779(5, false);
	int var_3774_int; int var_3775_int;
	var_3745_int = var_3774_int;
	var_3746_int = var_3775_int;
	func_3847(5, var_3774_int, var_3775_int);
}


void func_472(int var_76_int)
{
	int var_82_int;
	var_76_int = var_82_int;
	string var_81_string;
	func_299(var_81_string, var_82_int);
	int var_79_int;
	@GetVariable(var_81_string, var_79_int);
	string var_86_string; int var_87_int;
	var_76_int = var_87_int;
	func_299(var_86_string, var_87_int);
	@SetVariable(var_86_string, ((var_79_int & 252) | 2));
}


// @pe
void func_10721(void)
{
	bool var_5685_bool;
	func_11392(var_5685_bool, 438);
	bool var_5687_bool;
	func_11392(var_5687_bool, 723);
	bool var_5689_bool;
	func_11392(var_5689_bool, 751);
	bool var_5691_bool;
	func_11392(var_5691_bool, 757);
}


// @pe
void func_4584(int var_886_int, int var_887_int, object var_888_object, object var_889_object, object var_890_object, object var_891_object)
{
	if(var_887_int == 0) {
		func_796(1, false);
		func_813(1, false, 1);
		int var_899_int; int var_900_int; object var_901_object; object var_902_object; object var_903_object;
		var_899_int = 1;
		var_886_int = var_900_int;
		var_888_object = var_901_object;
		var_889_object = var_902_object;
		var_890_object = var_903_object;
		func_622(var_900_int, var_901_object, var_902_object, var_903_object);
		object var_904_object;
		var_891_object = var_904_object;
		func_305(var_904_object, 0);
		func_870(1, false, 8);
		func_932(1, false, 8);
	}
	int var_913_int;
	var_887_int = var_913_int;
	func_1050(1, var_913_int);
	int var_915_int; int var_916_int;
	var_886_int = var_915_int;
	var_887_int = var_916_int;
	func_2383(1, var_915_int, var_916_int);
}


void func_490(int var_487_int)
{
	object var_489_object;
	@GetMainOutdoorScene(var_489_object);
	if(var_489_object == null)
		@Trace("City manager: main outdoor scene not found");
	var_489_object->RemoveAllRegionActors(var_487_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6634(int var_4030_int, int var_4031_int, object var_4032_object, object var_4033_object, object var_4034_object, object var_4035_object)
{
	if(var_4031_int == 0) {
		func_796(11, true);
		func_813(11, false, 1);
		int var_4044_int; object var_4045_object; object var_4046_object; object var_4047_object;
		var_4030_int = var_4044_int;
		var_4032_object = var_4045_object;
		var_4033_object = var_4046_object;
		var_4034_object = var_4047_object;
		func_720(11, var_4044_int, var_4045_object, var_4046_object, var_4047_object);
		object var_4048_object;
		var_4035_object = var_4048_object;
		func_305(var_4048_object, 2);
		func_870(11, false, 5);
		func_932(11, true, 5);
	}
	func_779(11, false);
	int var_4059_int; int var_4060_int;
	var_4030_int = var_4059_int;
	var_4031_int = var_4060_int;
	func_3659(11, var_4059_int, var_4060_int);
}


// @pe
void func_10739(void)
{
	bool var_5704_bool;
	func_11392(var_5704_bool, 517);
	bool var_5706_bool;
	func_11392(var_5706_bool, 723);
	bool var_5708_bool;
	func_11392(var_5708_bool, 751);
	bool var_5710_bool;
	func_11392(var_5710_bool, 757);
}


void func_503(int var_783_int, string var_784_string, string var_785_string, int var_786_int)
{
	object var_788_object;
	@GetMainOutdoorScene(var_788_object);
	if(var_788_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_788_object->SetRegionActorCount(var_783_int, var_784_string, var_785_string, var_786_int);
}
EMIT "Stack[-1] = 0";


void func_516(int var_2215_int, string var_2216_string, string var_2217_string, int var_2218_int, int var_2219_int, int var_2220_int)
{
	object var_2222_object;
	@GetMainOutdoorScene(var_2222_object);
	if(var_2222_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_2222_object->SetRegionActorCount(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int);
}
EMIT "Stack[-1] = 0";


void func_7685(int var_379_int)
{
	var_386_object = GlobalVars[14];
	int var_383_int;
	var_386_object->size(var_383_int);
	bool var_387_bool = true;
	var_388_bool = var_379_int >= var_383_int;
	if(var_388_bool != 1) {
		var_390_bool = var_379_int == -1;
		if(var_390_bool != 1)
			var_387_bool = false;
	}
	if(var_387_bool != 0)
		@Trace("Wrong bonfire index " + var_379_int);
	var_393_object = GlobalVars[14];
	object var_384_object;
	var_393_object->get(var_384_object, var_379_int);
	object var_385_object;
	@FindActor(var_385_object, ("bonfire_light" + (var_379_int + 1)));
	if(!var_385_object) //@nz
		@Trace(("Bofire  light " + (var_379_int + 1)) + " not found");
	else
		var_385_object->Switch(false);
	if(var_384_object != 0)
		@RemoveActor(var_384_object);
	var_406_object = GlobalVars[14];
	var_406_object->set(var_379_int, Obj());
	@Trace(("Cleanup bonfire " + (var_379_int + 1)) + "... ok");
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_10757(void)
{
	object var_5499_object;
	func_11417(var_5499_object);
	object var_5497_object;
	var_5499_object = var_5497_object;
	object var_5498_object;
	var_5497_object->FindMark(var_5498_object, "k10q01NotkinGotoRubin");
	if(var_5498_object != 0)
		var_5498_object->Remove();
	var_5497_object->FindMark(var_5498_object, "k10q01WastedGotoBurah");
	if(var_5498_object != 0)
		var_5498_object->Remove();
	bool var_5504_bool;
	func_11392(var_5504_bool, 447);
	bool var_5506_bool;
	func_11392(var_5506_bool, 723);
	bool var_5508_bool;
	func_11392(var_5508_bool, 751);
	bool var_5510_bool;
	func_11392(var_5510_bool, 757);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5639(void)
{
}


// @pe
void func_5641(int var_1375_int)
{
	int var_1381_int;
	var_1375_int = var_1381_int;
	func_1050(6, var_1381_int);
}


// @pe
void func_5648(void)
{
	func_779(6, false);
}


void func_529(int var_2142_int, string var_2143_string, string var_2144_string, int var_2145_int)
{
	object var_2147_object;
	@GetMainOutdoorScene(var_2147_object);
	if(var_2147_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_2147_object->SetRegionActorCountByType(var_2142_int, var_2143_string, var_2144_string, var_2145_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5655(void)
{
	func_779(6, false);
}


void func_2584(int var_3027_int, int var_3028_int, int var_3029_int)
{
	int var_3032_int; int var_3033_int;
	bool var_3034_bool = false;
	if(var_3029_int > 8) {
		if(var_3029_int < 21)
			var_3034_bool = true;
	}
	if(var_3034_bool != 0) {
		int var_3039_int;
		var_3027_int = var_3039_int;
		func_503(var_3039_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_3043_int;
		var_3027_int = var_3043_int;
		func_503(var_3043_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		int var_3047_int;
		var_3027_int = var_3047_int;
		func_503(var_3047_int, "pers_rat_big", "rat_big.xml", 3);
		int var_3051_int;
		var_3027_int = var_3051_int;
		func_529(var_3051_int, "fog", "fog.xml", 8);
		if(var_3028_int >= 5) {
			int var_3057_int;
			var_3027_int = var_3057_int;
			func_529(var_3057_int, "fog", "fog_hunter.xml", 3);
		}
		float var_3062_float; int var_3063_int;
		func_1255(var_3062_float, var_3063_int);
		if((1 * var_3062_float) != 0) {
			int var_3065_int; int var_3068_int;
			var_3027_int = var_3065_int;
			var_3032_int = var_3068_int;
			func_503(var_3065_int, "pers_bomber", "bomber.xml", var_3068_int);
		}
	} else {
		int var_3106_int;
		var_3027_int = var_3106_int;
		func_503(var_3106_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_3110_int;
		var_3027_int = var_3110_int;
		func_503(var_3110_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_3114_int;
		var_3027_int = var_3114_int;
		func_503(var_3114_int, "pers_rat_big", "rat_big.xml", 4);
		int var_3118_int;
		var_3027_int = var_3118_int;
		func_529(var_3118_int, "fog", "fog.xml", 6);
		if(var_3063_int >= 5) {
			int var_3124_int;
			var_3027_int = var_3124_int;
			func_529(var_3124_int, "fog", "fog_hunter.xml", 2);
		}
		float var_3129_float; int var_3130_int;
		var_3028_int = var_3130_int;
		func_1255(var_3129_float, var_3130_int);
		if((1 * var_3129_float) == 0) goto Label_2702;
		int var_3132_int; int var_3135_int;
		var_3027_int = var_3132_int;
		var_3033_int = var_3135_int;
		func_503(var_3132_int, "pers_bomber", "bomber.xml", var_3135_int);
	}
Label_2702:
	int var_3069_int;
	var_3027_int = var_3069_int;
	func_516(var_3069_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_3075_int;
	var_3027_int = var_3075_int;
	func_516(var_3075_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_3081_int;
	var_3027_int = var_3081_int;
	func_516(var_3081_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_3087_int;
	var_3027_int = var_3087_int;
	func_516(var_3087_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_3093_bool; int var_3094_int; int var_3095_int;
	var_3028_int = var_3094_int;
	var_3029_int = var_3095_int;
	func_1345(var_3093_bool, var_3094_int, var_3095_int);
	if(var_3093_bool != 0) {
		int var_3096_int;
		var_3027_int = var_3096_int;
		func_503(var_3096_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3100_bool; int var_3101_int;
	var_3028_int = var_3101_int;
	func_1372(var_3100_bool, var_3101_int);
	if(var_3100_bool != 0) {
		int var_3102_int;
		var_3027_int = var_3102_int;
		func_503(var_3102_int, "pers_sanitar", "sanitar.xml", 2);
	}
	
}


// @pe
void func_4636(int var_2275_int, int var_2276_int, object var_2277_object, object var_2278_object, object var_2279_object, object var_2280_object)
{
	if(var_2276_int == 0) {
		func_796(1, true);
		func_813(1, true, 1);
		int var_2289_int; object var_2290_object; object var_2291_object; object var_2292_object;
		var_2275_int = var_2289_int;
		var_2277_object = var_2290_object;
		var_2278_object = var_2291_object;
		var_2279_object = var_2292_object;
		func_641(1, var_2289_int, var_2290_object, var_2291_object, var_2292_object);
		object var_2293_object;
		var_2280_object = var_2293_object;
		func_305(var_2293_object, 1);
		func_870(1, true, 8);
		func_932(1, false, 8);
	}
	func_779(1, false);
	int var_2304_int; int var_2305_int;
	var_2275_int = var_2304_int;
	var_2276_int = var_2305_int;
	func_3304(1, var_2304_int, var_2305_int);
}


void func_542(int var_571_int, bool var_572_bool)
{
	object var_577_object; bool var_579_bool; object var_580_object;
	@GetMainOutdoorScene(var_577_object);
	object var_578_object;
	var_577_object->GetGroupActors(var_578_object, (101 + var_571_int));
	if(var_578_object != 0) {

		for(;;) {
			var_578_object->Next(var_579_bool, var_580_object);
			if(var_579_bool != 0) {
				bool var_585_bool; object var_586_object;
				var_580_object = var_586_object;
				func_81(var_585_bool, var_586_object, "locked");
				if(var_585_bool != 0)
					var_580_object->SetProperty("locked", var_572_bool);
				else
					@Trace(("Actor \"" + var_580_object) + "\" can't be locked");
			var_580_object = null;
	}
		}
	}
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_5662(object var_177_object)
{
	var_177_object->add("House6_02");
	var_177_object->add("House6_01");
	var_177_object->add("house_2_01");
	var_177_object->add("house7_03");
	var_177_object->add("house7_02");
	var_177_object->add("house3_01_i2");
	var_177_object->add("house3_01");
	var_177_object->add("house_2_03");
	var_177_object->add("house_2_02");
	var_177_object->add("house4_01_i2");
	var_177_object->add("house4_01");
	var_177_object->add("House6_05");
	var_177_object->add("House6_04");
	var_177_object->add("House6_03");
}


// @pe
void func_6686(object var_265_object)
{
	var_265_object->add("r6_house2_03");
	var_265_object->add("r6_house4_01_i2");
	var_265_object->add("r6_house4_02_i2");
	var_265_object->add("r6_house4_02");
	var_265_object->add("r6_house3_02_i2");
	var_265_object->add("r6_house3_02");
	var_265_object->add("r6_house3_01_i2");
	var_265_object->add("r6_house3_01");
	var_265_object->add("r6_house2_01");
	var_265_object->add("r6_house7_01");
	var_265_object->add("r6_house7_02");
	var_265_object->add("r6_House6_01");
	var_265_object->add("r6_house2_02");
}


// @pe
void func_12830(object var_5108_object, bool var_5109_bool)
{
	var_5108_object->add(7);
	var_5108_object->add(23);
	var_5108_object->add(21);
	var_5108_object->add(9);
	var_5108_object->add(3);
	var_5108_object->add(1);
	var_5108_object->add(11);
	var_5108_object->add(13);
	if(var_5109_bool == false)
		var_5108_object->add(25);
}


// @pe
void func_10795(void)
{
	bool var_5666_bool;
	func_11392(var_5666_bool, 480);
	bool var_5668_bool;
	func_11392(var_5668_bool, 723);
	bool var_5670_bool;
	func_11392(var_5670_bool, 751);
	bool var_5672_bool;
	func_11392(var_5672_bool, 757);
}


void func_8748(void)
{
	object var_4488_object; bool var_4489_bool; cvector var_4490_cvector; cvector var_4491_cvector; string var_4492_string;
	int var_4493_int;
	func_11434(var_4493_int);
	if(var_4493_int == 0)
		return 16;
	var_4496_object = GlobalVars[6];
	int var_4485_int;
	var_4496_object->size(var_4485_int);
	object var_4486_object;
	@GetMainOutdoorScene(var_4486_object);
	int var_4487_int = 0;
	
	for(;;) {
		if(var_4487_int < var_4485_int) {
			var_4498_object = GlobalVars[6];
			var_4498_object->get(var_4488_object, var_4487_int);
			if(var_4488_object != 0) {
			} else {
			var_4486_object->GetLocator(("pt_plant" + (var_4487_int + 1)), var_4489_bool, var_4490_cvector, var_4491_cvector);
			if(!var_4489_bool) { //@nz
				@Trace("Plant point not found");
				goto Label_8818;
			}
			@RandOneOf(var_4492_string, 6, 3, 3, 3, 1, 1, "", "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
			if(var_4492_string != 0) {
				var_4486_object->AddStationaryActorByType(var_4488_object, var_4490_cvector, var_4491_cvector, "scripted", (("item_" + var_4492_string) + "_stat.xml"));
				var_4525_object = GlobalVars[6];
				var_4525_object->set(var_4487_int, var_4488_object);
				@Trace((("New plant: \"" + var_4492_string) + "\" at location #") + (var_4487_int + 1));
			}
			var_4488_object = null;
		}
		return 16;
		}
	Label_8818:
		var_4487_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


// @pe
void func_10813(void)
{
	func_177("house1_kabak@door1", true);
}


void func_12862(int var_5123_int)
{
	int var_5125_int;
	@GetVariable(("vol_" + var_5123_int), var_5125_int);
	@SetVariable(("vol_" + var_5123_int), (var_5125_int | 8));
}


void func_576(string var_2030_string, object var_2031_object, string var_2032_string, string var_2033_string)
{
	object var_2045_object; bool var_2047_bool; cvector var_2048_cvector; cvector var_2049_cvector; object var_2050_object;
	@GetMainOutdoorScene(var_2045_object);
	int var_2046_int = 0;
	
	for(;;) {
		var_2045_object->GetLocator((var_2030_string + (var_2046_int + 1)), var_2047_bool, var_2048_cvector, var_2049_cvector);
		if(!var_2047_bool) //@nz
			break;
		var_2045_object->AddStationaryActor(var_2050_object, var_2048_cvector, var_2049_cvector, var_2032_string, var_2033_string);
		var_2031_object->add(var_2050_object);
		var_2050_object = null;
		var_2046_int += 1;
	}
}
EMIT "Stack[-6] = 0";


void func_7745(object var_4432_object, object var_4433_object, string var_4434_string, string var_4435_string, string var_4436_string)
{
	bool var_4442_bool; cvector var_4443_cvector; cvector var_4444_cvector; object var_4445_object;
	var_4433_object->GetLocator(("pt_guard_" + var_4434_string), var_4442_bool, var_4443_cvector, var_4444_cvector);
	if(!var_4442_bool) //@nz
		@Trace("Locator doesn't exist for guard " + var_4434_string);
	else
		var_4433_object->AddStationaryActor(var_4445_object, var_4443_cvector, var_4444_cvector, var_4435_string, var_4436_string);
	var_4445_object = var_4432_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_10820(void)
{
	func_177("mnogogrannik_han@door1", true);
}


// @pe
void func_6727(int var_1703_int, int var_1704_int, object var_1705_object, object var_1706_object, object var_1707_object, object var_1708_object)
{
	if(var_1704_int == 0) {
		func_796(12, false);
		func_813(12, false, 1);
		int var_1716_int; int var_1717_int; object var_1718_object; object var_1719_object; object var_1720_object;
		var_1716_int = 12;
		var_1703_int = var_1717_int;
		var_1705_object = var_1718_object;
		var_1706_object = var_1719_object;
		var_1707_object = var_1720_object;
		func_622(var_1717_int, var_1718_object, var_1719_object, var_1720_object);
		object var_1721_object;
		var_1708_object = var_1721_object;
		func_305(var_1721_object, 0);
		func_870(12, false, 4);
		func_932(12, false, 4);
	}
	int var_1730_int;
	var_1704_int = var_1730_int;
	func_1020(12, var_1730_int);
	int var_1732_int; int var_1733_int;
	var_1703_int = var_1732_int;
	var_1704_int = var_1733_int;
	func_1624(12, var_1732_int, var_1733_int);
}


// @pe
void func_5706(int var_1384_int, int var_1385_int, object var_1386_object, object var_1387_object, object var_1388_object, object var_1389_object)
{
	if(var_1385_int == 0) {
		func_796(7, false);
		func_813(7, false, 1);
		int var_1397_int; int var_1398_int; object var_1399_object; object var_1400_object; object var_1401_object;
		var_1397_int = 7;
		var_1384_int = var_1398_int;
		var_1386_object = var_1399_object;
		var_1387_object = var_1400_object;
		var_1388_object = var_1401_object;
		func_622(var_1398_int, var_1399_object, var_1400_object, var_1401_object);
		object var_1402_object;
		var_1389_object = var_1402_object;
		func_305(var_1402_object, 0);
		func_870(7, false, 6);
		func_932(7, false, 6);
	}
	int var_1411_int;
	var_1385_int = var_1411_int;
	func_1020(7, var_1411_int);
	int var_1413_int; int var_1414_int;
	var_1384_int = var_1413_int;
	var_1385_int = var_1414_int;
	func_1624(7, var_1413_int, var_1414_int);
}


void func_3659(int var_3816_int, int var_3817_int, int var_3818_int)
{
	int var_3823_int; int var_3824_int; int var_3825_int; int var_3826_int;
	bool var_3827_bool = false;
	if(var_3818_int > 8) {
		if(var_3818_int < 21)
			var_3827_bool = true;
	}
	if(var_3827_bool != 0) {
		int var_3832_int;
		var_3816_int = var_3832_int;
		func_503(var_3832_int, "pers_rat", "rat.xml", 1);
		int var_3836_int;
		var_3816_int = var_3836_int;
		func_503(var_3836_int, "pers_alkash", "alkash.xml", 2);
		int var_3840_int;
		var_3816_int = var_3840_int;
		func_503(var_3840_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3845_float; int var_3846_int;
		func_1165(var_3845_float, var_3846_int);
		if((2 * var_3845_float) != 0) {
			int var_3848_int; int var_3851_int;
			var_3816_int = var_3848_int;
			var_3823_int = var_3851_int;
			func_503(var_3848_int, "pers_grabitel", "grabitel.xml", var_3851_int);
		}
		if((var_3846_int + 1) >= 2) {
			int var_3856_int;
			var_3816_int = var_3856_int;
			func_503(var_3856_int, "pers_patrool", "patrol.xml", 1);
			bool var_3860_bool; int var_3861_int;
			var_3817_int = var_3861_int;
			func_1372(var_3860_bool, var_3861_int);
			if(var_3860_bool != 0) {
				int var_3862_int;
				var_3816_int = var_3862_int;
				func_503(var_3862_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3867_float; int var_3868_int;
		var_3817_int = var_3868_int;
		func_1255(var_3867_float, var_3868_int);
		if((1 * var_3867_float) != 0) {
			int var_3870_int; int var_3873_int;
			var_3816_int = var_3870_int;
			var_3824_int = var_3873_int;
			func_503(var_3870_int, "pers_bomber", "bomber.xml", var_3873_int);
		}
	} else {
		int var_3887_int;
		var_3816_int = var_3887_int;
		func_503(var_3887_int, "pers_rat", "rat.xml", 3);
		int var_3891_int;
		var_3816_int = var_3891_int;
		func_503(var_3891_int, "pers_alkash", "alkash.xml", 1);
		int var_3895_int;
		var_3816_int = var_3895_int;
		func_503(var_3895_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3900_float; int var_3901_int;
		func_1165(var_3900_float, var_3901_int);
		if((3 * var_3900_float) != 0) {
			int var_3903_int; int var_3906_int;
			var_3816_int = var_3903_int;
			var_3825_int = var_3906_int;
			func_503(var_3903_int, "pers_grabitel", "grabitel.xml", var_3906_int);
		}
		if((var_3901_int + 1) >= 2) {
			int var_3911_int;
			var_3816_int = var_3911_int;
			func_503(var_3911_int, "pers_patrool", "patrol.xml", 1);
			bool var_3915_bool; int var_3916_int;
			var_3817_int = var_3916_int;
			func_1372(var_3915_bool, var_3916_int);
			if(var_3915_bool != 0) {
				int var_3917_int;
				var_3816_int = var_3917_int;
				func_503(var_3917_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3922_float; int var_3923_int;
		var_3817_int = var_3923_int;
		func_1255(var_3922_float, var_3923_int);
		if((1 * var_3922_float) == 0) goto Label_3821;
		int var_3925_int; int var_3928_int;
		var_3816_int = var_3925_int;
		var_3826_int = var_3928_int;
		func_503(var_3925_int, "pers_bomber", "bomber.xml", var_3928_int);
	}
Label_3821:
	bool var_3874_bool; int var_3875_int; int var_3876_int;
	var_3817_int = var_3875_int;
	var_3818_int = var_3876_int;
	func_1345(var_3874_bool, var_3875_int, var_3876_int);
	if(var_3874_bool != 0) {
		int var_3877_int;
		var_3816_int = var_3877_int;
		func_503(var_3877_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3881_bool; int var_3882_int;
	var_3817_int = var_3882_int;
	func_1372(var_3881_bool, var_3882_int);
	if(var_3881_bool != 0) {
		int var_3883_int;
		var_3816_int = var_3883_int;
		func_503(var_3883_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


void func_10827(void)
{
	object var_5171_object;
	func_11417(var_5171_object);
	object var_5170_object;
	var_5171_object = var_5170_object;
	float var_5182_float;
	func_284(var_5182_float);
	var_5170_object->AddMark("k2q03LaraLetter", "pt_map_lara", 0, 539375, var_5182_float);
}
EMIT "Stack[-1] = 0";


void func_12874(void)
{
	object var_5104_object; int var_5107_int;
	@CreateIntVector(var_5104_object);
	object var_5108_object;
	var_5104_object = var_5108_object;
	func_12830(false, -1);
	int var_5105_int;
	var_5104_object->size(var_5105_int);
	int var_5106_int = 0;
	
	while(var_5106_int < var_5105_int) {
		var_5104_object->get(var_5107_int, var_5106_int);
		int var_5123_int;
		var_5107_int = var_5123_int;
		func_12862(var_5123_int);
		var_5106_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


// @pe
void func_4688(int var_3400_int, int var_3401_int, object var_3402_object, object var_3403_object, object var_3404_object, object var_3405_object)
{
	if(var_3401_int == 0) {
		func_796(1, false);
		func_813(1, false, 1);
		int var_3414_int; object var_3415_object; object var_3416_object; object var_3417_object;
		var_3400_int = var_3414_int;
		var_3402_object = var_3415_object;
		var_3403_object = var_3416_object;
		var_3404_object = var_3417_object;
		func_720(1, var_3414_int, var_3415_object, var_3416_object, var_3417_object);
		object var_3418_object;
		var_3405_object = var_3418_object;
		func_305(var_3418_object, 2);
		func_870(1, false, 8);
		func_932(1, true, 8);
	}
	func_779(1, false);
	int var_3429_int; int var_3430_int;
	var_3400_int = var_3429_int;
	var_3401_int = var_3430_int;
	func_4210(1, var_3429_int, var_3430_int);
}


// @pe
void func_7762(object var_4429_object, object var_4430_object, int var_4431_int)
{
	object var_4433_object;
	var_4430_object = var_4433_object;
	object var_4432_object;
	func_7745(var_4432_object, var_4433_object, ("term" + var_4431_int), "pers_patrool", "guard_term.xml");
	var_4432_object = var_4429_object;
}


void func_598(string var_2056_string, object var_2057_object)
{
	object var_2070_object; bool var_2072_bool; cvector var_2073_cvector; cvector var_2074_cvector; object var_2075_object;
	@GetMainOutdoorScene(var_2070_object);
	int var_2071_int = 0;
	
	for(;;) {
		var_2070_object->GetLocator((var_2056_string + (var_2071_int + 1)), var_2072_bool, var_2073_cvector, var_2074_cvector);
		if(!var_2072_bool) //@nz
			break;
		var_2070_object->AddStationaryActorByType(var_2075_object, var_2073_cvector, var_2074_cvector, "fog", "fog_stat.xml");
		var_2057_object->add(var_2075_object);
		var_2075_object = null;
		var_2071_int += 1;
	}
}
EMIT "Stack[-7] = 0";


void func_1624(int var_1412_int, int var_1413_int, int var_1414_int)
{
	int var_1416_int;
	if((var_1413_int + 1) == 12)
		return 2;
	bool var_1421_bool = false;
	bool var_1422_bool = true;
	var_1424_bool = var_1414_int < 7;
	if(var_1424_bool != 1) {
		var_1426_bool = var_1414_int > 21;
		if(var_1426_bool != 1)
			var_1422_bool = false;
	}
	if(var_1422_bool != 0) {
		if(var_1413_int != 0)
			var_1421_bool = true;
	}
	if(var_1421_bool != 0) {
		float var_1430_float; int var_1431_int;
		var_1413_int = var_1431_int;
		func_1141(var_1430_float, var_1431_int);
		if((1 * var_1430_float) != 0) {
			int var_1433_int; int var_1436_int;
			var_1412_int = var_1433_int;
			var_1416_int = var_1436_int;
			func_503(var_1433_int, "pers_grabitel", "grabitel.xml", var_1436_int);
		}
	}
	bool var_1437_bool; int var_1438_int; int var_1439_int;
	var_1414_int = var_1439_int;
	func_1110(var_1437_bool, var_1438_int, var_1439_int);
	if(var_1437_bool != 0) {
		int var_1440_int;
		var_1412_int = var_1440_int;
		func_503(var_1440_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1444_int;
		var_1412_int = var_1444_int;
		func_503(var_1444_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1448_int;
		var_1412_int = var_1448_int;
		func_503(var_1448_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1452_int;
		var_1412_int = var_1452_int;
		func_503(var_1452_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1456_int;
		var_1412_int = var_1456_int;
		func_503(var_1456_int, "pers_woman", "woman.xml", 1);
		int var_1460_int;
		var_1412_int = var_1460_int;
		func_503(var_1460_int, "pers_alkash", "alkash.xml", 1);
		bool var_1464_bool = false;
		if(var_1414_int > 8) {
			if(var_1414_int < 21)
				var_1464_bool = true;
		}
		if(var_1464_bool != 0) {
			int var_1469_int;
			var_1412_int = var_1469_int;
			func_503(var_1469_int, "pers_boy", "boy.xml", 1);
			int var_1473_int;
			var_1412_int = var_1473_int;
			func_503(var_1473_int, "pers_girl", "girl.xml", 1);
			int var_1477_int;
			var_1412_int = var_1477_int;
			func_503(var_1477_int, "pers_girl", "girl2.xml", 1);
			int var_1481_int;
			var_1412_int = var_1481_int;
			func_503(var_1481_int, "pers_littleboy", "littleboy.xml", 1);
			int var_1485_int;
			var_1412_int = var_1485_int;
			func_503(var_1485_int, "pers_littlegirl", "littlegirl.xml", 1);
		}
	} else {
			bool var_1496_bool = false;
			if(var_1414_int > 8) {
				if(var_1414_int < 21)
					var_1496_bool = true;
			}
			if(var_1496_bool == 0) goto Label_1843;
			int var_1501_int;
			var_1412_int = var_1501_int;
			func_503(var_1501_int, "pers_woman", "woman.xml", 1);
			int var_1505_int;
			var_1412_int = var_1505_int;
			func_503(var_1505_int, "pers_unosha", "unosha.xml", 1);
			int var_1509_int;
			var_1412_int = var_1509_int;
			func_503(var_1509_int, "pers_unosha", "unosha2.xml", 1);
			int var_1513_int;
			var_1412_int = var_1513_int;
			func_503(var_1513_int, "pers_boy", "boy.xml", 1);
			int var_1517_int;
			var_1412_int = var_1517_int;
			func_503(var_1517_int, "pers_girl", "girl.xml", 1);
			int var_1521_int;
			var_1412_int = var_1521_int;
			func_503(var_1521_int, "pers_girl", "girl2.xml", 1);
			int var_1525_int;
			var_1412_int = var_1525_int;
			func_503(var_1525_int, "pers_littleboy", "littleboy.xml", 1);
			int var_1529_int;
			var_1412_int = var_1529_int;
			func_503(var_1529_int, "pers_littlegirl", "littlegirl.xml", 1);
			int var_1533_int;
			var_1412_int = var_1533_int;
			func_503(var_1533_int, "pers_alkash", "alkash.xml", 1);
			if((var_1438_int + 1) >= 3) {
				int var_1541_int;
				var_1412_int = var_1541_int;
				func_503(var_1541_int, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
	}
Label_1883:
	for(;;) {
		bool var_1489_bool; int var_1490_int; int var_1491_int;
		var_1413_int = var_1490_int;
		var_1414_int = var_1491_int;
		func_1345(var_1489_bool, var_1490_int, var_1491_int);
		if(var_1489_bool != 0) {
			int var_1492_int;
			var_1412_int = var_1492_int;
			func_503(var_1492_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		return 2;

	}
	
Label_1843:
	int var_1545_int;
	var_1412_int = var_1545_int;
	func_503(var_1545_int, "pers_woman", "woman.xml", 1);
	int var_1549_int;
	var_1412_int = var_1549_int;
	func_503(var_1549_int, "pers_unosha", "unosha.xml", 1);
	int var_1553_int;
	var_1412_int = var_1553_int;
	func_503(var_1553_int, "pers_unosha", "unosha2.xml", 1);
	int var_1557_int;
	var_1412_int = var_1557_int;
	func_503(var_1557_int, "pers_alkash", "alkash.xml", 1);
	if(!((var_1413_int + 1) >= 3)) goto Label_1883;
	int var_1565_int;
	var_1412_int = var_1565_int;
	func_503(var_1565_int, "pers_dohodyaga", "dohodyaga.xml", 1);
}


// @pe
void func_10843(void)
{
	int var_4893_int;
	func_132(var_4893_int, "map_chertez_state");
	if(var_4893_int <= 1) {
		@SetVariable("map_chertez_state", 1);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_7773(bool var_4473_bool)
{
	object var_4475_object;
	@FindActor(var_4475_object, "arena_light");
	var_4475_object->Switch(var_4473_bool);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9826(int var_5762_int, float var_5763_float)
{
	float var_5767_float;
	var_5763_float = var_5767_float;
	int var_5764_int;
	func_11409(var_5764_int, 530554, 530553, var_5767_float);
	var_5764_int = var_5762_int;
}


// @pe
void func_12899(void)
{
	func_12874();
}


void func_7781(void)
{
	object var_4506_object; bool var_4507_bool; cvector var_4508_cvector; cvector var_4509_cvector; int var_4510_int; object var_4511_object;
	@Trace("Setting arena...");
	var_4513_object = GlobalVars[11];
	if(var_4513_object == null) {
		@GetMainOutdoorScene(var_4506_object);
		var_4506_object->GetLocator("pt_arena_manager", var_4507_bool, var_4508_cvector, var_4509_cvector);
		if(!var_4507_bool) { //@nz
			@Trace("Locator doesn't exist for arena manager");
		} else {
				var_4537_object = GlobalVars[11];
				object var_4538_object; object var_4539_object; cvector var_4540_cvector; cvector var_4541_cvector;
				var_4506_object = var_4539_object;
				var_4508_cvector = var_4540_cvector;
				var_4509_cvector = var_4541_cvector;
				func_13671(var_4538_object, var_4539_object, var_4540_cvector, var_4541_cvector);
				var_4538_object = var_4537_object;
				GlobalVars[11] = var_4537_object;
		}
		var_4510_int = 0;

		for(;;) {
			if(var_4510_int < 6) {
				var_4506_object->GetLocator(("pt_arena_torch" + (var_4510_int + 1)), var_4507_bool, var_4508_cvector, var_4509_cvector);
				if(!var_4507_bool) { //@nz
					@Trace("Locator doesn't exist for arena torch " + (var_4510_int + 1));
				} else {
				@AddActorByType(var_4511_object, "scripted", var_4506_object, var_4508_cvector, var_4509_cvector, "torch.xml");
				var_4532_object = GlobalVars[12];
				var_4532_object->add(var_4511_object);
				var_4511_object = null;
			}
			func_7773(true);
			var_4506_object = null;
	}
		return 12;

		}
		var_4510_int += 1;
	}
	
}


void func_12903(bool var_303_bool, int var_304_int)
{
	int var_306_int;
	@GetVariable(("K2System" + var_304_int), var_306_int);
	var_303_bool = var_306_int != 0;
}


// @pe
void func_9835(int var_5773_int, float var_5774_float)
{
	float var_5778_float;
	var_5774_float = var_5778_float;
	int var_5775_int;
	func_11409(var_5775_int, 530556, 530555, var_5778_float);
	var_5775_int = var_5773_int;
}


// @pe
void func_10860(void)
{
	int var_5139_int;
	func_132(var_5139_int, "map_chertez_state");
	if(var_5139_int <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_622(int var_566_int, object var_568_object, object var_569_object, object var_570_object)
{
	int var_571_int;
	var_566_int = var_571_int;
	func_542(var_571_int, true);
	object var_599_object;
	var_568_object = var_599_object;
	func_263(var_599_object);
	object var_610_object;
	var_569_object = var_610_object;
	func_263(var_610_object);
	object var_611_object;
	var_570_object = var_611_object;
	func_263(var_611_object);
}


// @pe
void func_12911(int var_198_int, int var_199_int)
{
	if(var_199_int == 6) {
		var_198_int = 14;
		return 0;
	EMIT "GOTO 0x3293";
	}
	if(var_199_int == 7) {
		var_198_int = 8;
		return 0;
	EMIT "GOTO 0x3293";
	}
	if(var_199_int == 8) {
		var_198_int = 4;
		return 0;
	EMIT "GOTO 0x3293";
	}
	if(var_199_int == 9) {
		var_198_int = 13;
		return 0;
	EMIT "GOTO 0x3293";
	}
	if(var_199_int == 10) {
		var_198_int = 5;
		return 0;
	EMIT "GOTO 0x3293";
	}
	if(var_199_int == 11) {
		var_198_int = 11;
		return 0;
	}
	var_198_int = -1;
}


// @pe
void func_9844(int var_5784_int, float var_5785_float)
{
	float var_5789_float;
	var_5785_float = var_5789_float;
	int var_5786_int;
	func_11409(var_5786_int, 530558, 530557, var_5789_float);
	var_5786_int = var_5784_int;
}


void func_8823(void)
{
	object var_4541_object; object var_4544_object; bool var_4545_bool; cvector var_4546_cvector; cvector var_4547_cvector; string var_4548_string;
	@GetMainOutdoorScene(var_4541_object);
	var_4549_object = GlobalVars[7];
	int var_4542_int;
	var_4549_object->size(var_4542_int);
	int var_4543_int = 0;
	
	for(;;) {
		if(var_4543_int < var_4542_int) {
			var_4551_object = GlobalVars[7];
			var_4551_object->get(var_4544_object, var_4543_int);
			if(var_4544_object != 0) {
			} else {
			var_4541_object->GetLocator(("pt_grave_supply" + (var_4543_int + 1)), var_4545_bool, var_4546_cvector, var_4547_cvector);
			if(!var_4545_bool) { //@nz
				@Trace("Grave supply point not found");
				goto Label_8867;
			}
			@RandOneOf(var_4548_string, 1, 1, "bread", "milk");
			var_4541_object->AddStationaryActorByType(var_4544_object, var_4546_cvector, var_4547_cvector, "scripted", (("item_" + var_4548_string) + "_stat.xml"));
			var_4569_object = GlobalVars[7];
			var_4569_object->set(var_4543_int, var_4544_object);
			var_4544_object = null;
		}
		}
	Label_8867:
		var_4543_int += 1;
	}
	
}
EMIT "Stack[-8] = 0";


// @pe
void func_6779(int var_2933_int, int var_2934_int, object var_2935_object, object var_2936_object, object var_2937_object, object var_2938_object)
{
	if(var_2934_int == 0) {
		func_796(12, true);
		func_813(12, true, 1);
		int var_2947_int; object var_2948_object; object var_2949_object; object var_2950_object;
		var_2933_int = var_2947_int;
		var_2935_object = var_2948_object;
		var_2936_object = var_2949_object;
		var_2937_object = var_2950_object;
		func_641(12, var_2947_int, var_2948_object, var_2949_object, var_2950_object);
		object var_2951_object;
		var_2938_object = var_2951_object;
		func_305(var_2951_object, 1);
		func_870(12, true, 4);
		func_932(12, false, 4);
	}
	func_779(12, false);
	int var_2962_int; int var_2963_int;
	var_2933_int = var_2962_int;
	var_2934_int = var_2963_int;
	func_2764(12, var_2962_int, var_2963_int);
}


// @pe
void func_10877(void)
{
	int var_4983_int;
	func_132(var_4983_int, "map_chertez_state");
	if(var_4983_int <= 3) {
		@SetVariable("map_chertez_state", 3);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_5758(int var_2662_int, int var_2663_int, object var_2664_object, object var_2665_object, object var_2666_object, object var_2667_object)
{
	if(var_2663_int == 0) {
		func_796(7, true);
		func_813(7, true, 1);
		int var_2676_int; object var_2677_object; object var_2678_object; object var_2679_object;
		var_2662_int = var_2676_int;
		var_2664_object = var_2677_object;
		var_2665_object = var_2678_object;
		var_2666_object = var_2679_object;
		func_641(7, var_2676_int, var_2677_object, var_2678_object, var_2679_object);
		object var_2680_object;
		var_2667_object = var_2680_object;
		func_305(var_2680_object, 1);
		func_870(7, true, 6);
		func_932(7, false, 6);
	}
	func_779(7, false);
	int var_2691_int; int var_2692_int;
	var_2662_int = var_2691_int;
	var_2663_int = var_2692_int;
	func_2764(7, var_2691_int, var_2692_int);
}


// @pe
void func_9853(int var_5844_int, float var_5845_float)
{
	float var_5849_float;
	var_5845_float = var_5849_float;
	int var_5846_int;
	func_11409(var_5846_int, 530560, 530559, var_5849_float);
	var_5846_int = var_5844_int;
}


// @pe
void func_641(int var_2018_int, int var_2019_int, object var_2020_object, object var_2021_object, object var_2022_object)
{
	int var_2023_int;
	var_2018_int = var_2023_int;
	func_542(var_2023_int, false);
	object var_2025_object;
	var_2020_object = var_2025_object;
	func_263(var_2025_object);
	object var_2026_object;
	var_2021_object = var_2026_object;
	func_263(var_2026_object);
	object var_2027_object;
	var_2022_object = var_2027_object;
	func_263(var_2027_object);
	if(var_2019_int < 8) {
		object var_2031_object;
		var_2020_object = var_2031_object;
		func_576((("pt_blockpost" + (var_2018_int + 1)) + "_1_"), var_2031_object, "pers_patrool", "patrol_stat.xml");
		object var_2057_object;
		var_2022_object = var_2057_object;
		func_598((("pt_fog" + (var_2018_int + 1)) + "_"), var_2057_object);
	} else {
		object var_2084_object;
		var_2020_object = var_2084_object;
		func_576((("pt_blockpost" + (var_2018_int + 1)) + "_1_"), var_2084_object, "pers_soldat", "soldier.xml");
		object var_2093_object;
		var_2021_object = var_2093_object;
		func_576((("pt_blockpost" + (var_2018_int + 1)) + "_2_"), var_2093_object, "pers_sanitar", "sanitar_stat.xml");
		object var_2102_object;
		var_2022_object = var_2102_object;
		func_598((("pt_fog" + (var_2018_int + 1)) + "_"), var_2102_object);
	}
	
}


// @pe
void func_4740(object var_78_object)
{
	var_78_object->add("dt_house1_union2_05l");
	var_78_object->add("dt_house1_union2_05r");
	var_78_object->add("dt_house2_01");
	var_78_object->add("dt_house2_02");
	var_78_object->add("dt_house2_03");
	var_78_object->add("dt_house2_04");
	var_78_object->add("dt_house2_05");
	var_78_object->add("dt_house3_10_i2");
	var_78_object->add("dt_house3_10");
	var_78_object->add("dt_house3_11_i2");
	var_78_object->add("dt_house3_11");
	var_78_object->add("dt_house3_12_i2");
	var_78_object->add("dt_house3_12");
	var_78_object->add("dt_house_1_06");
	var_78_object->add("dt_house3_07_i2");
	var_78_object->add("dt_house3_07");
}


// @pe
void func_9862(int var_5335_int, float var_5336_float)
{
	float var_5340_float;
	var_5336_float = var_5340_float;
	int var_5337_int;
	func_11409(var_5337_int, 530562, 530561, var_5340_float);
	var_5337_int = var_5335_int;
}


// @pe
void func_10894(void)
{
	int var_5076_int;
	func_132(var_5076_int, "map_chertez_state");
	if(var_5076_int <= 4) {
		@SetVariable("map_chertez_state", 4);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_9871(int var_5379_int, float var_5380_float)
{
	float var_5384_float;
	var_5380_float = var_5384_float;
	int var_5381_int;
	func_11409(var_5381_int, 530564, 530563, var_5384_float);
	var_5381_int = var_5379_int;
}


void func_12949(bool var_245_bool, int var_246_int)
{
	int var_248_int;
	@GetVariable(("K2SystemSvitaRemoved" + var_246_int), var_248_int);
	var_245_bool = var_248_int != 0;
}


// @pe
void func_9880(int var_5483_int, float var_5484_float)
{
	float var_5488_float;
	var_5484_float = var_5488_float;
	int var_5485_int;
	func_11409(var_5485_int, 530566, 530565, var_5488_float);
	var_5485_int = var_5483_int;
}


// @pe
void func_12957(int var_178_int, int var_179_int)
{
	if(var_179_int == 6) {
		var_178_int = 4;
		return 0;
	EMIT "GOTO 0x32c1";
	}
	if(var_179_int == 7) {
		var_178_int = 3;
		return 0;
	EMIT "GOTO 0x32c1";
	}
	if(var_179_int == 8) {
		var_178_int = 12;
		return 0;
	EMIT "GOTO 0x32c1";
	}
	if(var_179_int == 9) {
		var_178_int = 5;
		return 0;
	EMIT "GOTO 0x32c1";
	}
	if(var_179_int == 10) {
		var_178_int = 9;
		return 0;
	EMIT "GOTO 0x32c1";
	}
	if(var_179_int == 11) {
		var_178_int = 13;
		return 0;
	}
	var_178_int = -1;
}


// @pe
void func_10911(void)
{
	int var_4997_int;
	func_132(var_4997_int, "map_chertez_state");
	if(var_4997_int <= 5) {
		@SetVariable("map_chertez_state", 5);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_9889(int var_5268_int, float var_5269_float)
{
	float var_5273_float;
	var_5269_float = var_5273_float;
	int var_5270_int;
	func_11409(var_5270_int, 530568, 530567, var_5273_float);
	var_5270_int = var_5268_int;
}


void func_7844(void)
{
	int var_4785_int; int var_4786_int; object var_4787_object;
	@Trace("Cleaning arena...");
	var_4789_object = GlobalVars[11];
	if(var_4789_object != null) {
		var_4791_object = GlobalVars[11];
		var_4791_object->Remove();
		var_4792_object = GlobalVars[12];
		var_4792_object->size(var_4785_int);
		var_4786_int = 0;

		while(var_4786_int < var_4785_int) {
			var_4794_object = GlobalVars[12];
			var_4794_object->get(var_4787_object, var_4786_int);
			@Trigger(var_4787_object, "remove");
			var_4787_object = null;
			var_4786_int += 1;
		}

		var_4797_object = GlobalVars[12];
		var_4797_object->clear();
		func_7773(false);
	}
}


void func_8872(void)
{
	object var_4656_object;
	@GetMainOutdoorScene(var_4656_object);
	object var_4657_object;
	@AddScriptedActor(var_4657_object, "big_gun", "big_gun.bin", var_4656_object, [0.0, 0.0, 0.0]);
	@AddScriptedActor(var_4657_object, "vagon_martira", "big_gun.bin", var_4656_object, [0.0, 0.0, 0.0]);
	@AddScriptedActor(var_4657_object, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", var_4656_object, [0.0, 0.0, 0.0]);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9898(int var_5390_int, float var_5391_float)
{
	float var_5395_float;
	var_5391_float = var_5395_float;
	int var_5392_int;
	func_11409(var_5392_int, 530570, 530569, var_5395_float);
	var_5392_int = var_5390_int;
}


// @pe
void func_6831(int var_4063_int, int var_4064_int, object var_4065_object, object var_4066_object, object var_4067_object, object var_4068_object)
{
	if(var_4064_int == 0) {
		func_796(12, false);
		func_813(12, false, 1);
		int var_4077_int; object var_4078_object; object var_4079_object; object var_4080_object;
		var_4063_int = var_4077_int;
		var_4065_object = var_4078_object;
		var_4066_object = var_4079_object;
		var_4067_object = var_4080_object;
		func_720(12, var_4077_int, var_4078_object, var_4079_object, var_4080_object);
		object var_4081_object;
		var_4068_object = var_4081_object;
		func_305(var_4081_object, 2);
		func_870(12, false, 4);
		func_932(12, true, 4);
	}
	func_779(12, false);
	int var_4092_int; int var_4093_int;
	var_4063_int = var_4092_int;
	var_4064_int = var_4093_int;
	func_3659(12, var_4092_int, var_4093_int);
}


// @pe
void func_10928(void)
{
	int var_4907_int;
	func_132(var_4907_int, "map_chertez_state");
	if(var_4907_int <= 6) {
		@SetVariable("map_chertez_state", 6);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_5810(int var_3788_int, int var_3789_int, object var_3790_object, object var_3791_object, object var_3792_object, object var_3793_object)
{
	if(var_3789_int == 0) {
		func_796(7, false);
		func_813(7, false, 1);
		int var_3802_int; object var_3803_object; object var_3804_object; object var_3805_object;
		var_3788_int = var_3802_int;
		var_3790_object = var_3803_object;
		var_3791_object = var_3804_object;
		var_3792_object = var_3805_object;
		func_720(7, var_3802_int, var_3803_object, var_3804_object, var_3805_object);
		object var_3806_object;
		var_3793_object = var_3806_object;
		func_305(var_3806_object, 2);
		func_870(7, false, 6);
		func_932(7, true, 6);
	}
	func_779(7, false);
	int var_3817_int; int var_3818_int;
	var_3788_int = var_3817_int;
	var_3789_int = var_3818_int;
	func_3659(7, var_3817_int, var_3818_int);
}


// @pe
void func_9907(int var_5606_int, float var_5607_float)
{
	float var_5611_float;
	var_5607_float = var_5611_float;
	int var_5608_int;
	func_11409(var_5608_int, 527719, 527718, var_5611_float);
	var_5608_int = var_5606_int;
}


// @pe
void func_4790(int var_1029_int, int var_1030_int, object var_1031_object, object var_1032_object, object var_1033_object, object var_1034_object)
{
	if(var_1030_int == 0) {
		func_796(2, false);
		func_813(2, false, 1);
		int var_1042_int; int var_1043_int; object var_1044_object; object var_1045_object; object var_1046_object;
		var_1042_int = 2;
		var_1029_int = var_1043_int;
		var_1031_object = var_1044_object;
		var_1032_object = var_1045_object;
		var_1033_object = var_1046_object;
		func_622(var_1043_int, var_1044_object, var_1045_object, var_1046_object);
		object var_1047_object;
		var_1034_object = var_1047_object;
		func_305(var_1047_object, 0);
		func_870(2, false, 5);
		func_932(2, false, 5);
	}
	int var_1056_int;
	var_1030_int = var_1056_int;
	func_1050(2, var_1056_int);
	int var_1058_int; int var_1059_int;
	var_1029_int = var_1058_int;
	var_1030_int = var_1059_int;
	func_1897(2, var_1058_int, var_1059_int);
}


// @pe
void func_9916(int var_5198_int, float var_5199_float)
{
	float var_5203_float;
	var_5199_float = var_5203_float;
	int var_5200_int;
	func_11409(var_5200_int, 530572, 530571, var_5203_float);
	var_5200_int = var_5198_int;
}


void func_8893(bool var_2_bool, int var_3_int)
{
	int var_11_int; int var_12_int; int var_13_int; float var_14_float; int var_15_int; int var_16_int;
	bool var_17_bool = false;
	if(var_3_int > 16384) {
		if(var_3_int < 16396)
			var_17_bool = true;
	}
	if(var_17_bool != 0) {
		var_11_int = var_3_int - 16384;
		int var_23_int;
		var_11_int = var_23_int;
		func_13216(var_23_int);
		var_2_bool = true;
		return 12;
	}
	bool var_365_bool = false;
	if(var_3_int > 32768) {
		if(var_3_int < 33056)
			var_365_bool = true;
	}
	if(var_365_bool != 0) {
		var_12_int = (var_3_int - 32768) / 24;
		var_13_int = (var_3_int - 32768) % 24;
		@GetGameTime(var_14_float);
		var_15_int = var_14_float / 24;
		var_14_float = var_16_int;
		var_16_int = var_16_int % 24;
		int var_378_int; int var_379_int; int var_380_int; int var_381_int;
		var_12_int = var_378_int;
		var_13_int = var_379_int;
		var_15_int = var_380_int;
		var_16_int = var_381_int;
		func_9031(var_378_int, var_379_int, var_380_int, var_381_int);
		var_2_bool = true;
		return 12;
	}
	var_2_bool = false;
}


// @pe
void func_10945(void)
{
	func_11325();
}


// @pe
void func_12995(int var_282_int, int var_283_int)
{
	if(var_283_int == 8) {
		var_282_int = 5;
		return 0;
	EMIT "GOTO 0x32db";
	}
	if(var_283_int == 9) {
		var_282_int = 10;
		return 0;
	EMIT "GOTO 0x32db";
	}
	if(var_283_int == 10) {
		var_282_int = 3;
		return 0;
	EMIT "GOTO 0x32db";
	}
	if(var_283_int == 11) {
		var_282_int = 1;
		return 0;
	}
	var_282_int = -1;
}


// @pe
void func_9925(int var_4865_int, float var_4866_float)
{
	float var_4870_float;
	var_4866_float = var_4870_float;
	int var_4867_int;
	func_11409(var_4867_int, 542478, 542477, var_4870_float);
	var_4867_int = var_4865_int;
}


void func_7878(void)
{
	object var_324_object;
	@GetMainOutdoorScene(var_324_object);
	int var_325_int = 1;
	
	while(var_325_int <= 17) {
		var_328_object = GlobalVars[15];
		object var_329_object; object var_330_object;
		var_324_object = var_330_object;
		func_159(var_329_object, var_330_object, ("pt_bull" + var_325_int), "pers_bull", "bull.xml");
		var_328_object->add(var_329_object);
		var_325_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";


// @pe
void func_10950(void)
{
	int var_5027_int;
	func_132(var_5027_int, "K_Mission5");
	if(var_5027_int == 0) {
		@SetVariable("K_Mission5", 1);
		func_11338();
		bool var_5056_bool;
		func_11392(var_5056_bool, 567);
		bool var_5064_bool;
		func_11392(var_5064_bool, 568);
		bool var_5066_bool;
		func_11392(var_5066_bool, 569);
		bool var_5068_bool;
		func_11392(var_5068_bool, 570);
	}
}


void func_2764(int var_2690_int, int var_2691_int, int var_2692_int)
{
	int var_2695_int; int var_2696_int;
	bool var_2697_bool = false;
	if(var_2692_int > 8) {
		if(var_2692_int < 21)
			var_2697_bool = true;
	}
	if(var_2697_bool != 0) {
		int var_2702_int;
		var_2690_int = var_2702_int;
		func_503(var_2702_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_2706_int;
		var_2690_int = var_2706_int;
		func_503(var_2706_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2710_int;
		var_2690_int = var_2710_int;
		func_503(var_2710_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2714_int;
		var_2690_int = var_2714_int;
		func_529(var_2714_int, "fog", "fog.xml", 6);
		if(var_2691_int >= 5) {
			int var_2720_int;
			var_2690_int = var_2720_int;
			func_529(var_2720_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2725_float; int var_2726_int;
		func_1255(var_2725_float, var_2726_int);
		if((1 * var_2725_float) != 0) {
			int var_2728_int; int var_2731_int;
			var_2690_int = var_2728_int;
			var_2695_int = var_2731_int;
			func_503(var_2728_int, "pers_bomber", "bomber.xml", var_2731_int);
		}
	} else {
		int var_2769_int;
		var_2690_int = var_2769_int;
		func_503(var_2769_int, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		int var_2773_int;
		var_2690_int = var_2773_int;
		func_503(var_2773_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		int var_2777_int;
		var_2690_int = var_2777_int;
		func_503(var_2777_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2781_int;
		var_2690_int = var_2781_int;
		func_529(var_2781_int, "fog", "fog.xml", 6);
		if(var_2726_int >= 5) {
			int var_2787_int;
			var_2690_int = var_2787_int;
			func_529(var_2787_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2792_float; int var_2793_int;
		var_2691_int = var_2793_int;
		func_1255(var_2792_float, var_2793_int);
		if((1 * var_2792_float) == 0) goto Label_2882;
		int var_2795_int; int var_2798_int;
		var_2690_int = var_2795_int;
		var_2696_int = var_2798_int;
		func_503(var_2795_int, "pers_bomber", "bomber.xml", var_2798_int);
	}
Label_2882:
	int var_2732_int;
	var_2690_int = var_2732_int;
	func_516(var_2732_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2738_int;
	var_2690_int = var_2738_int;
	func_516(var_2738_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2744_int;
	var_2690_int = var_2744_int;
	func_516(var_2744_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2750_int;
	var_2690_int = var_2750_int;
	func_516(var_2750_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_2756_bool; int var_2757_int; int var_2758_int;
	var_2691_int = var_2757_int;
	var_2692_int = var_2758_int;
	func_1345(var_2756_bool, var_2757_int, var_2758_int);
	if(var_2756_bool != 0) {
		int var_2759_int;
		var_2690_int = var_2759_int;
		func_503(var_2759_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_2763_bool; int var_2764_int;
	var_2691_int = var_2764_int;
	func_1372(var_2763_bool, var_2764_int);
	if(var_2763_bool != 0) {
		int var_2765_int;
		var_2690_int = var_2765_int;
		func_503(var_2765_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_9934(int var_5300_int, float var_5301_float)
{
	float var_5305_float;
	var_5301_float = var_5305_float;
	int var_5302_int;
	func_11409(var_5302_int, 530574, 530573, var_5305_float);
	var_5302_int = var_5300_int;
}


// @pe
void func_720(int var_3199_int, int var_3200_int, object var_3201_object, object var_3202_object, object var_3203_object)
{
	int var_3204_int;
	var_3199_int = var_3204_int;
	func_542(var_3204_int, false);
	object var_3206_object;
	var_3201_object = var_3206_object;
	func_263(var_3206_object);
	object var_3207_object;
	var_3202_object = var_3207_object;
	func_263(var_3207_object);
	object var_3208_object;
	var_3203_object = var_3208_object;
	func_263(var_3208_object);
	if(var_3200_int < 8) {
		object var_3212_object;
		var_3201_object = var_3212_object;
		func_576((("pt_blockpost" + (var_3199_int + 1)) + "_1_"), var_3212_object, "pers_patrool", "patrol_stat.xml");
	} else {
		object var_3221_object;
		var_3201_object = var_3221_object;
		func_576((("pt_blockpost" + (var_3199_int + 1)) + "_1_"), var_3221_object, "pers_soldat", "soldier.xml");
		object var_3230_object;
		var_3202_object = var_3230_object;
		func_576((("pt_blockpost" + (var_3199_int + 1)) + "_2_"), var_3230_object, "pers_sanitar", "sanitar_stat.xml");
	}
	
}


// @pe
void func_9943(int var_4849_int, float var_4850_float)
{
	float var_4854_float;
	var_4850_float = var_4854_float;
	int var_4851_int;
	func_11409(var_4851_int, 530266, 530265, var_4854_float);
	var_4851_int = var_4849_int;
}


void func_7901(void)
{
	var_4697_object = GlobalVars[15];
	object var_4696_object;
	var_4697_object = var_4696_object;
	func_263(var_4696_object);
}


// @pe
void func_13021(int var_265_int, int var_266_int)
{
	if(var_266_int == 8) {
		var_265_int = 11;
		return 0;
	EMIT "GOTO 0x32f5";
	}
	if(var_266_int == 9) {
		var_265_int = 2;
		return 0;
	EMIT "GOTO 0x32f5";
	}
	if(var_266_int == 10) {
		var_265_int = 7;
		return 0;
	EMIT "GOTO 0x32f5";
	}
	if(var_266_int == 11) {
		var_265_int = 15;
		return 0;
	}
	var_265_int = -1;
}


// @pe
void func_9952(int var_4881_int, float var_4882_float)
{
	float var_4886_float;
	var_4882_float = var_4886_float;
	int var_4883_int;
	func_11409(var_4883_int, 542793, 542792, var_4886_float);
	var_4883_int = var_4881_int;
}


// @pe
void func_6883(object var_280_object)
{
	var_280_object->add("r7_house2_01");
	var_280_object->add("r7_house2_02");
	var_280_object->add("r7_house2_03");
	var_280_object->add("r7_house2_04");
	var_280_object->add("r7_house3_03_i2");
	var_280_object->add("r7_house3_03");
	var_280_object->add("r7_house3_04_i2");
	var_280_object->add("r7_house3_04");
	var_280_object->add("r7_house3_05_i2");
	var_280_object->add("r7_house3_05");
	var_280_object->add("r7_house3_06_i2");
	var_280_object->add("r7_house3_01_i2");
	var_280_object->add("r7_house3_01");
	var_280_object->add("r7_house3_02_i2");
	var_280_object->add("r7_house3_02");
}


void func_7908(void)
{
	bool var_33_bool; int var_34_int; bool var_35_bool; int var_36_int; bool var_37_bool; object var_38_object;
	var_39_object = GlobalVars[15];
	object var_40_object;
	func_126(var_40_object);
	var_40_object = var_39_object;
	GlobalVars[15] = var_39_object;
	var_43_object = GlobalVars[13];
	object var_44_object;
	func_126(var_44_object);
	var_44_object = var_43_object;
	GlobalVars[13] = var_43_object;
	var_45_object = GlobalVars[8];
	object var_46_object;
	func_126(var_46_object);
	var_46_object = var_45_object;
	GlobalVars[8] = var_45_object;
	var_47_object = GlobalVars[9];
	object var_48_object;
	func_126(var_48_object);
	var_48_object = var_47_object;
	GlobalVars[9] = var_47_object;
	var_49_object = GlobalVars[10];
	object var_50_object;
	func_126(var_50_object);
	var_50_object = var_49_object;
	GlobalVars[10] = var_49_object;
	int var_29_int = 0;
	
	while(var_29_int < 16) {
		var_53_object = GlobalVars[8];
		object var_54_object;
		func_126(var_54_object);
		var_53_object->add(var_54_object);
		var_55_object = GlobalVars[9];
		object var_56_object;
		func_126(var_56_object);
		var_55_object->add(var_56_object);
		var_57_object = GlobalVars[10];
		object var_58_object;
		func_126(var_58_object);
		var_57_object->add(var_58_object);
		var_29_int += 1;
	}
	
	object var_30_object;
	@CreateStringVector(var_30_object);
	var_60_object = GlobalVars[13];
	var_60_object->add(var_30_object);
	object var_61_object;
	var_30_object = var_61_object;
	func_4385();
	@CreateStringVector(var_30_object);
	var_62_object = GlobalVars[13];
	var_62_object->add(var_30_object);
	object var_63_object;
	var_30_object = var_63_object;
	func_4543(var_63_object);
	@CreateStringVector(var_30_object);
	var_77_object = GlobalVars[13];
	var_77_object->add(var_30_object);
	object var_78_object;
	var_30_object = var_78_object;
	func_4740(var_78_object);
	@CreateStringVector(var_30_object);
	var_95_object = GlobalVars[13];
	var_95_object->add(var_30_object);
	object var_96_object;
	var_30_object = var_96_object;
	func_4946(var_96_object);
	@CreateStringVector(var_30_object);
	var_121_object = GlobalVars[13];
	var_121_object->add(var_30_object);
	object var_122_object;
	var_30_object = var_122_object;
	func_5176(var_122_object);
	@CreateStringVector(var_30_object);
	var_143_object = GlobalVars[13];
	var_143_object->add(var_30_object);
	object var_144_object;
	var_30_object = var_144_object;
	func_5394(var_144_object);
	@CreateStringVector(var_30_object);
	var_174_object = GlobalVars[13];
	var_174_object->add(var_30_object);
	object var_175_object;
	var_30_object = var_175_object;
	func_5639();
	@CreateStringVector(var_30_object);
	var_176_object = GlobalVars[13];
	var_176_object->add(var_30_object);
	object var_177_object;
	var_30_object = var_177_object;
	func_5662(var_177_object);
	@CreateStringVector(var_30_object);
	var_192_object = GlobalVars[13];
	var_192_object->add(var_30_object);
	object var_193_object;
	var_30_object = var_193_object;
	func_5862(var_193_object);
	@CreateStringVector(var_30_object);
	var_208_object = GlobalVars[13];
	var_208_object->add(var_30_object);
	object var_209_object;
	var_30_object = var_209_object;
	func_6062(var_209_object);
	@CreateStringVector(var_30_object);
	var_225_object = GlobalVars[13];
	var_225_object->add(var_30_object);
	object var_226_object;
	var_30_object = var_226_object;
	func_6265(var_226_object);
	@CreateStringVector(var_30_object);
	var_244_object = GlobalVars[13];
	var_244_object->add(var_30_object);
	object var_245_object;
	var_30_object = var_245_object;
	func_6474(var_245_object);
	@CreateStringVector(var_30_object);
	var_264_object = GlobalVars[13];
	var_264_object->add(var_30_object);
	object var_265_object;
	var_30_object = var_265_object;
	func_6686(var_265_object);
	@CreateStringVector(var_30_object);
	var_279_object = GlobalVars[13];
	var_279_object->add(var_30_object);
	object var_280_object;
	var_30_object = var_280_object;
	func_6883(var_280_object);
	@CreateStringVector(var_30_object);
	var_296_object = GlobalVars[13];
	var_296_object->add(var_30_object);
	object var_297_object;
	var_30_object = var_297_object;
	func_7086(var_297_object);
	@CreateStringVector(var_30_object);
	var_312_object = GlobalVars[13];
	var_312_object->add(var_30_object);
	object var_313_object;
	var_30_object = var_313_object;
	func_7286(var_313_object);
	func_7878();
	object var_31_object;
	@GetMainOutdoorScene(var_31_object);
	var_349_object = GlobalVars[6];
	object var_350_object;
	func_126(var_350_object);
	var_350_object = var_349_object;
	GlobalVars[6] = var_349_object;
	int var_32_int = 0;
	
	for(;;) {
		var_31_object->GetLocator(("pt_plant" + (var_32_int + 1)), var_33_bool);
		if(!var_33_bool) { //@nz
		} else {
			var_32_int += 1;
		}
		var_356_object = GlobalVars[6];
		var_356_object->resize(var_32_int);
		@Trace("Total plants: " + var_32_int);
		var_359_object = GlobalVars[7];
		object var_360_object;
		func_126(var_360_object);
		var_360_object = var_359_object;
		GlobalVars[7] = var_359_object;
		var_34_int = 0;

		for(;;) {
			var_31_object->GetLocator(("pt_grave_supply" + (var_34_int + 1)), var_35_bool);
			if(!var_35_bool) { //@nz
			} else {
				var_34_int += 1;
			}
			var_366_object = GlobalVars[7];
			var_366_object->resize(var_34_int);
			@Trace("Total grave supplies: " + var_34_int);
			var_369_object = GlobalVars[14];
			object var_370_object;
			func_126(var_370_object);
			var_370_object = var_369_object;
			GlobalVars[14] = var_369_object;

			for(;;) {
				var_31_object->GetLocator(("pt_bonfire" + (0 + 1)), var_37_bool);
				if(!var_37_bool) //@nz
					break;
				var_378_object = GlobalVars[14];
				var_378_object->add(Obj());
				int var_379_int;
				var_36_int = var_379_int;
				func_7685(var_379_int);
				var_38_object = null;
				var_36_int += 1;
			}
			@Trace("Total bonfires: " + var_36_int);

		}

	}
}
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


// @pe
void func_5862(object var_193_object)
{
	var_193_object->add("r2_house_2_01");
	var_193_object->add("r2_house_2_02");
	var_193_object->add("r2_house_2_03");
	var_193_object->add("r2_house7_02");
	var_193_object->add("r2_house01_01");
	var_193_object->add("r2_house7_01");
	var_193_object->add("r2_house3_01_i2");
	var_193_object->add("r2_house3_01");
	var_193_object->add("r2_house3_02_i2");
	var_193_object->add("r2_house3_02");
	var_193_object->add("r2_house3_03_i2");
	var_193_object->add("r2_house3_03");
	var_193_object->add("r3_house7_01");
	var_193_object->add("r3_house7_02");
}


// @pe
void func_10982(void)
{
	func_177("cot_georg@door1", false);
	func_177("cot_georg@door2", false);
}


// @pe
void func_9961(int var_5347_int, float var_5348_float)
{
	float var_5352_float;
	var_5348_float = var_5352_float;
	int var_5349_int;
	func_11409(var_5349_int, 538944, 538943, var_5352_float);
	var_5349_int = var_5347_int;
}


// @pe
void func_4842(int var_2407_int, int var_2408_int, object var_2409_object, object var_2410_object, object var_2411_object, object var_2412_object)
{
	if(var_2408_int == 0) {
		func_796(2, true);
		func_813(2, true, 1);
		int var_2421_int; object var_2422_object; object var_2423_object; object var_2424_object;
		var_2407_int = var_2421_int;
		var_2409_object = var_2422_object;
		var_2410_object = var_2423_object;
		var_2411_object = var_2424_object;
		func_641(2, var_2421_int, var_2422_object, var_2423_object, var_2424_object);
		object var_2425_object;
		var_2412_object = var_2425_object;
		func_305(var_2425_object, 1);
		func_870(2, true, 5);
		func_932(2, false, 5);
	}
	func_779(2, false);
	int var_2436_int; int var_2437_int;
	var_2407_int = var_2436_int;
	var_2408_int = var_2437_int;
	func_2944(2, var_2436_int, var_2437_int);
}


// @pe
void func_9970(int var_5216_int, float var_5217_float)
{
	float var_5221_float;
	var_5217_float = var_5221_float;
	int var_5218_int;
	func_11409(var_5218_int, 538946, 538945, var_5221_float);
	var_5218_int = var_5216_int;
}


// @pe
void func_10994(object var_5859_object)
{
	object var_5864_object;
	var_5859_object = var_5864_object;
	bool var_5863_bool;
	func_194(var_5863_bool, var_5864_object, -0.1);
}


void func_8948(void)
{
	float var_424_float; int var_426_int; float var_427_float; int var_428_int; object var_429_object; object var_430_object;
	@GetGameTime(var_424_float);
	int var_425_int = 1;
	
	while(var_425_int < 12) {
		@SetTimeEvent((16384 + var_425_int), (24 * var_425_int));
		var_425_int += 1;
	}
	
	
	for(;;) {
		if(0 < 288) {
			var_426_int = var_427_float;
			if(var_427_float < var_424_float) {
			} else {
			@SetTimeEvent((32768 + var_426_int), var_427_float);
		}

		while(0 < 16) {
			string var_446_string; int var_447_int;
			var_428_int = var_447_int;
			func_299(var_446_string, var_447_int);
			@SetVariable(var_446_string, 0);
			int var_452_int;
			var_428_int = var_452_int;
			func_796(var_452_int, false);
			var_428_int += 1;
		}

		int var_465_int; int var_467_int;
		var_465_int = var_424_float % 24;
		var_467_int = var_424_float % 24;
		func_9031(0, var_465_int, 0, var_467_int);
		@FindActor(var_429_object, "dt_house_1_07");
		var_429_object->EnableSubset(200, false);
		@GetMainOutdoorScene(var_430_object);
		bool var_4404_bool = true;
		var_4406_bool = var_424_float < 7;
		if(var_4406_bool != 1) {
			var_4408_bool = var_424_float >= 20;
			if(var_4408_bool != 1)
				var_4404_bool = false;
		}
		var_430_object->SwitchLights(0, var_4404_bool);
		}
		var_426_int += 1;
	}
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_13047(string var_4336_string, int var_4337_int)
{
	if(var_4337_int == 8) {
		var_4336_string = "house5_unoin_solidl";
		return 0;
	EMIT "GOTO 0x330f";
	}
	if(var_4337_int == 9) {
		var_4336_string = "r4_house4_02_i2";
		return 0;
	EMIT "GOTO 0x330f";
	}
	if(var_4337_int == 10) {
		var_4336_string = "dt_house1_union2_01r";
		return 0;
	EMIT "GOTO 0x330f";
	}
	if(var_4337_int == 11) {
		var_4336_string = "dt_house_1_03";
		return 0;
	}
	var_4336_string = "";
}


// @pe
void func_11001(void)
{
	func_177("termitnik@door1", true);
}


// @pe
void func_9979(int var_5249_int, float var_5250_float)
{
	float var_5254_float;
	var_5250_float = var_5254_float;
	int var_5251_int;
	func_11409(var_5251_int, 538954, 538953, var_5254_float);
	var_5251_int = var_5249_int;
}


// @pe
void func_11008(void)
{
	@SetVariable("resque_list", 1);
	func_12899();
}


// @pe
void func_9988(int var_5398_int, float var_5399_float)
{
	float var_5403_float;
	var_5399_float = var_5403_float;
	int var_5400_int;
	func_11409(var_5400_int, 538948, 538947, var_5403_float);
	var_5400_int = var_5398_int;
}


void func_3847(int var_3564_int, int var_3565_int, int var_3566_int)
{
	int var_3571_int; int var_3572_int; int var_3573_int; int var_3574_int;
	bool var_3575_bool = false;
	if(var_3566_int > 8) {
		if(var_3566_int < 21)
			var_3575_bool = true;
	}
	if(var_3575_bool != 0) {
		int var_3580_int;
		var_3564_int = var_3580_int;
		func_503(var_3580_int, "pers_rat", "rat.xml", 2);
		int var_3584_int;
		var_3564_int = var_3584_int;
		func_503(var_3584_int, "pers_alkash", "alkash.xml", 2);
		int var_3588_int;
		var_3564_int = var_3588_int;
		func_503(var_3588_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3593_float; int var_3594_int;
		func_1165(var_3593_float, var_3594_int);
		if((2 * var_3593_float) != 0) {
			int var_3596_int; int var_3599_int;
			var_3564_int = var_3596_int;
			var_3571_int = var_3599_int;
			func_503(var_3596_int, "pers_grabitel", "grabitel.xml", var_3599_int);
		}
		if((var_3594_int + 1) >= 2) {
			int var_3604_int;
			var_3564_int = var_3604_int;
			func_503(var_3604_int, "pers_patrool", "patrol.xml", 2);
			bool var_3608_bool; int var_3609_int;
			var_3565_int = var_3609_int;
			func_1372(var_3608_bool, var_3609_int);
			if(var_3608_bool != 0) {
				int var_3610_int;
				var_3564_int = var_3610_int;
				func_503(var_3610_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3615_float; int var_3616_int;
		var_3565_int = var_3616_int;
		func_1255(var_3615_float, var_3616_int);
		if((1 * var_3615_float) != 0) {
			int var_3618_int; int var_3621_int;
			var_3564_int = var_3618_int;
			var_3572_int = var_3621_int;
			func_503(var_3618_int, "pers_bomber", "bomber.xml", var_3621_int);
		}
	} else {
		int var_3635_int;
		var_3564_int = var_3635_int;
		func_503(var_3635_int, "pers_rat", "rat.xml", 4);
		int var_3639_int;
		var_3564_int = var_3639_int;
		func_503(var_3639_int, "pers_alkash", "alkash.xml", 1);
		int var_3643_int;
		var_3564_int = var_3643_int;
		func_503(var_3643_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3648_float; int var_3649_int;
		func_1165(var_3648_float, var_3649_int);
		if((3 * var_3648_float) != 0) {
			int var_3651_int; int var_3654_int;
			var_3564_int = var_3651_int;
			var_3573_int = var_3654_int;
			func_503(var_3651_int, "pers_grabitel", "grabitel.xml", var_3654_int);
		}
		if((var_3649_int + 1) >= 2) {
			int var_3659_int;
			var_3564_int = var_3659_int;
			func_503(var_3659_int, "pers_patrool", "patrol.xml", 1);
			bool var_3663_bool; int var_3664_int;
			var_3565_int = var_3664_int;
			func_1372(var_3663_bool, var_3664_int);
			if(var_3663_bool != 0) {
				int var_3665_int;
				var_3564_int = var_3665_int;
				func_503(var_3665_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3670_float; int var_3671_int;
		var_3565_int = var_3671_int;
		func_1255(var_3670_float, var_3671_int);
		if((1 * var_3670_float) == 0) goto Label_4009;
		int var_3673_int; int var_3676_int;
		var_3564_int = var_3673_int;
		var_3574_int = var_3676_int;
		func_503(var_3673_int, "pers_bomber", "bomber.xml", var_3676_int);
	}
Label_4009:
	bool var_3622_bool; int var_3623_int; int var_3624_int;
	var_3565_int = var_3623_int;
	var_3566_int = var_3624_int;
	func_1345(var_3622_bool, var_3623_int, var_3624_int);
	if(var_3622_bool != 0) {
		int var_3625_int;
		var_3564_int = var_3625_int;
		func_503(var_3625_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3629_bool; int var_3630_int;
	var_3565_int = var_3630_int;
	func_1372(var_3629_bool, var_3630_int);
	if(var_3629_bool != 0) {
		int var_3631_int;
		var_3564_int = var_3631_int;
		func_503(var_3631_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_11017(void)
{
	func_177("mnogogrannik@door1", true);
}


void func_779(int var_737_int, bool var_738_bool)
{
	object var_741_object;
	@GetMainOutdoorScene(var_741_object);
	if(var_741_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_741_object->EnableSubsets((var_737_int + 1), 100, var_738_bool, true);
}
EMIT "Stack[-2] = 0";


// @pe
void func_9997(int var_5185_int, float var_5186_float)
{
	float var_5190_float;
	var_5186_float = var_5190_float;
	int var_5187_int;
	func_11409(var_5187_int, 538950, 538949, var_5190_float);
	var_5187_int = var_5185_int;
}


// @pe
void func_11024(bool var_4873_bool)
{
	int var_4876_int;
	func_132(var_4876_int, "k12DankoVisit");
	if(var_4876_int != 0) {
		var_4873_bool = true;
		return 0;
	}
	var_4873_bool = false;
}


// @pe
void func_13073(string var_4351_string, int var_4352_int)
{
	if(var_4352_int == 8) {
		var_4351_string = "r5_House6_01";
		return 0;
	EMIT "GOTO 0x3329";
	}
	if(var_4352_int == 9) {
		var_4351_string = "dt_house2_01";
		return 0;
	EMIT "GOTO 0x3329";
	}
	if(var_4352_int == 10) {
		var_4351_string = "house7_02";
		return 0;
	EMIT "GOTO 0x3329";
	}
	if(var_4352_int == 11) {
		var_4351_string = "lc_house3_05";
		return 0;
	}
	var_4351_string = "";
}


// @pe
void func_5906(int var_1571_int, int var_1572_int, object var_1573_object, object var_1574_object, object var_1575_object, object var_1576_object)
{
	if(var_1572_int == 0) {
		func_796(8, false);
		func_813(8, false, 1);
		int var_1584_int; int var_1585_int; object var_1586_object; object var_1587_object; object var_1588_object;
		var_1584_int = 8;
		var_1571_int = var_1585_int;
		var_1573_object = var_1586_object;
		var_1574_object = var_1587_object;
		var_1575_object = var_1588_object;
		func_622(var_1585_int, var_1586_object, var_1587_object, var_1588_object);
		object var_1589_object;
		var_1576_object = var_1589_object;
		func_305(var_1589_object, 0);
		func_870(8, false, 4);
		func_932(8, false, 4);
	}
	int var_1598_int;
	var_1572_int = var_1598_int;
	func_983(8, var_1598_int);
	int var_1600_int; int var_1601_int;
	var_1571_int = var_1600_int;
	var_1572_int = var_1601_int;
	func_1624(8, var_1600_int, var_1601_int);
}


// @pe
void func_6930(int var_1736_int, int var_1737_int, object var_1738_object, object var_1739_object, object var_1740_object, object var_1741_object)
{
	if(var_1737_int == 0) {
		func_796(13, false);
		func_813(13, false, 1);
		int var_1749_int; int var_1750_int; object var_1751_object; object var_1752_object; object var_1753_object;
		var_1749_int = 13;
		var_1736_int = var_1750_int;
		var_1738_object = var_1751_object;
		var_1739_object = var_1752_object;
		var_1740_object = var_1753_object;
		func_622(var_1750_int, var_1751_object, var_1752_object, var_1753_object);
		object var_1754_object;
		var_1741_object = var_1754_object;
		func_305(var_1754_object, 0);
		func_870(13, false, 4);
		func_932(13, false, 4);
	}
	int var_1763_int;
	var_1737_int = var_1763_int;
	func_1050(13, var_1763_int);
	int var_1765_int; int var_1766_int;
	var_1736_int = var_1765_int;
	var_1737_int = var_1766_int;
	func_1624(13, var_1765_int, var_1766_int);
}


// @pe
void func_10006(int var_5149_int, float var_5150_float)
{
	float var_5154_float;
	var_5150_float = var_5154_float;
	int var_5151_int;
	func_11409(var_5151_int, 530678, 530677, var_5154_float);
	var_5151_int = var_5149_int;
}


void func_796(int var_452_int, bool var_453_bool)
{
	object var_456_object;
	@GetMainOutdoorScene(var_456_object);
	if(var_456_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_456_object->EnableSubsets((var_452_int + 1), 200, var_453_bool, false);
}
EMIT "Stack[-2] = 0";


// @pe
void func_11036(bool var_5852_bool)
{
	int var_5855_int;
	func_132(var_5855_int, "k3q04SendBurahMail");
	if(var_5855_int != 0) {
		var_5852_bool = true;
		return 0;
	}
	var_5852_bool = false;
}


// @pe
void func_4894(int var_3536_int, int var_3537_int, object var_3538_object, object var_3539_object, object var_3540_object, object var_3541_object)
{
	if(var_3537_int == 0) {
		func_796(2, false);
		func_813(2, false, 1);
		int var_3550_int; object var_3551_object; object var_3552_object; object var_3553_object;
		var_3536_int = var_3550_int;
		var_3538_object = var_3551_object;
		var_3539_object = var_3552_object;
		var_3540_object = var_3553_object;
		func_720(2, var_3550_int, var_3551_object, var_3552_object, var_3553_object);
		object var_3554_object;
		var_3541_object = var_3554_object;
		func_305(var_3554_object, 2);
		func_870(2, false, 5);
		func_932(2, true, 5);
	}
	func_779(2, false);
	int var_3565_int; int var_3566_int;
	var_3536_int = var_3565_int;
	var_3537_int = var_3566_int;
	func_3847(2, var_3565_int, var_3566_int);
}


// @pe
void func_10015(int var_4936_int, float var_4937_float)
{
	float var_4941_float;
	var_4937_float = var_4941_float;
	int var_4938_int;
	func_11409(var_4938_int, 530680, 530679, var_4941_float);
	var_4938_int = var_4936_int;
}


// @pe
void func_10024(int var_5224_int, float var_5225_float)
{
	float var_5229_float;
	var_5225_float = var_5229_float;
	int var_5226_int;
	func_11409(var_5226_int, 538956, 538955, var_5229_float);
	var_5226_int = var_5224_int;
}


// @pe
void func_11048(bool var_5598_bool)
{
	int var_5601_int;
	func_132(var_5601_int, "k10q01KnowAboutRubin");
	if(var_5601_int != 0) {
		var_5598_bool = true;
		return 0;
	}
	var_5598_bool = false;
}


void func_13099(void)
{
	int var_4572_int = 1;
	
	while(var_4572_int <= 12) {
		@SetVariable(("RMap" + var_4572_int), 1);
		var_4572_int += 1;
	}
	
}


void func_813(int var_528_int, bool var_529_bool, int var_530_int)
{
	string var_538_string; object var_539_object; int var_540_int; string var_541_string; object var_542_object; int var_543_int; object var_544_object;
	var_538_string = "street_rags" + (var_528_int + 1);
	if(var_529_bool != 0) {
		@GetMainOutdoorScene(var_539_object);
		if(var_539_object == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return 14;
		}
		var_540_int = 1;

		for(;;) {
			if(var_540_int <= var_530_int) {
				var_541_string = (var_538_string + "_") + var_540_int;
				@FindActor(var_542_object, var_541_string);
				if(!var_542_object) //@nz
					@AddActor(var_542_object, var_541_string, var_539_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "do_invis.xml");
				else
					var_542_object->RemoveOnUnload(false);
			var_539_object = null;
	} else {
			var_543_int = 1;

			for(;;) {
				if(!(var_543_int <= var_530_int)) goto Label_869;
				@FindActor(var_544_object, ((var_538_string + "_") + var_543_int));
				if(var_544_object != 0)
					var_544_object->RemoveOnUnload();
				var_544_object = null;
				var_543_int += 1;
			}
	}
	Label_869:
		return 14;

		}
		var_542_object = null;
		var_540_int += 1;
	}
	
}


// @pe
void func_10033(int var_5414_int, float var_5415_float)
{
	float var_5419_float;
	var_5415_float = var_5419_float;
	int var_5416_int;
	func_11409(var_5416_int, 538402, 538401, var_5419_float);
	var_5416_int = var_5414_int;
}


// @pe
void func_11060(bool var_5086_bool)
{
	int var_5089_int;
	func_132(var_5089_int, "resque_list");
	if(var_5089_int != 0) {
		var_5086_bool = true;
		return 0;
	}
	var_5086_bool = false;
}


void func_13113(bool var_158_bool, int var_159_int, int var_160_int)
{
	int var_163_int; int var_164_int;
	if(var_159_int == 6) {
		var_158_bool = false;
		return 4;
	}
	if(var_160_int == 4) {
		if(var_159_int == 15) {
			var_158_bool = false;
			return 4;
		}
		if(var_159_int == 9) {
			var_158_bool = false;
			return 4;
		}
	} else if(var_160_int == 5) {
			if(var_159_int == 15) {
				var_158_bool = false;
				return 4;
			}
	}
Label_13150:
	for(;;) {
		bool var_173_bool = false;
		if(var_160_int > 4) {
			if(var_160_int < 6)
				var_173_bool = true;
		}
		if(var_173_bool != 0) {
			int var_178_int;
			func_12957(var_178_int, 6);
			var_178_int = var_163_int;
			if(var_163_int == var_159_int) {
				var_158_bool = false;
				return 4;
			}
		}
		bool var_193_bool = false;
		if(var_160_int > 3) {
			if(var_160_int < 6)
				var_193_bool = true;
		}
		if(var_193_bool != 0) {
			int var_198_int;
			func_12911(var_198_int, 6);
			var_198_int = var_164_int;
			if(var_164_int == var_159_int) {
				var_158_bool = false;
				return 4;
			}
		}
		var_158_bool = true;
		return 4;

	}
	
	if(!(var_160_int == 6)) goto Label_13150;
	if(!(var_159_int == 15)) goto Label_13150;
	var_158_bool = false;
}


// @pe
void func_10042(int var_5308_int, float var_5309_float)
{
	float var_5313_float;
	var_5309_float = var_5313_float;
	int var_5310_int;
	func_11409(var_5310_int, 539490, 539489, var_5313_float);
	var_5310_int = var_5308_int;
}


// @pe
void func_11072(bool var_5460_bool)
{
	int var_5463_int;
	func_132(var_5463_int, "k2AlexandrVisit");
	if(var_5463_int != 0) {
		var_5460_bool = true;
		return 0;
	}
	var_5460_bool = false;
}


// @pe
void func_10051(int var_5895_int, float var_5896_float)
{
	float var_5900_float;
	var_5896_float = var_5900_float;
	int var_5897_int;
	func_11409(var_5897_int, 525653, 525652, var_5900_float);
	var_5897_int = var_5895_int;
}


// @pe
void func_5958(int var_2801_int, int var_2802_int, object var_2803_object, object var_2804_object, object var_2805_object, object var_2806_object)
{
	if(var_2802_int == 0) {
		func_796(8, true);
		func_813(8, true, 1);
		int var_2815_int; object var_2816_object; object var_2817_object; object var_2818_object;
		var_2801_int = var_2815_int;
		var_2803_object = var_2816_object;
		var_2804_object = var_2817_object;
		var_2805_object = var_2818_object;
		func_641(8, var_2815_int, var_2816_object, var_2817_object, var_2818_object);
		object var_2819_object;
		var_2806_object = var_2819_object;
		func_305(var_2819_object, 1);
		func_870(8, true, 4);
		func_932(8, false, 4);
	}
	func_779(8, false);
	int var_2830_int; int var_2831_int;
	var_2801_int = var_2830_int;
	var_2802_int = var_2831_int;
	func_2764(8, var_2830_int, var_2831_int);
}


void func_9031(int var_464_int, int var_465_int, int var_466_int, int var_467_int)
{
	int var_475_int; object var_476_object; object var_477_object; object var_478_object; object var_479_object;
	@Trace("City update");
	bool var_481_bool = false;
	if(var_464_int == var_466_int) {
		if(var_465_int == var_467_int)
			var_481_bool = true;
	}
	if(var_481_bool != 0)
		@PlaySound("kolokol");
	
	for(;;) {
		if(0 < 16) {
			int var_487_int;
			var_475_int = var_487_int;
			func_490(var_487_int);
			bool var_492_bool; int var_493_int;
			var_475_int = var_493_int;
			func_400(var_492_bool, var_493_int);
			if(var_492_bool != 0) {
				int var_501_int; int var_502_int; int var_503_int;
				var_475_int = var_501_int;
				var_464_int = var_502_int;
				var_465_int = var_503_int;
				func_9151(var_501_int, var_502_int, var_503_int);
			} else {
			bool var_1979_bool; int var_1980_int;
			var_475_int = var_1980_int;
			func_430(var_1979_bool, var_1980_int);
			if(var_1979_bool != 0) {
				int var_1988_int; int var_1989_int; int var_1990_int;
				var_475_int = var_1988_int;
				var_464_int = var_1989_int;
				var_465_int = var_1990_int;
				func_9376(var_1988_int, var_1989_int, var_1990_int);
				goto Label_9084;
			}
			int var_3169_int; int var_3170_int; int var_3171_int;
			var_475_int = var_3169_int;
			var_464_int = var_3170_int;
			var_465_int = var_3171_int;
			func_9601(var_3169_int, var_3170_int, var_3171_int);
		}
		if(var_465_int == 0) {
			int var_4305_int;
			func_13574(var_4305_int);
			bool var_4379_bool = true;
			var_4381_bool = var_4305_int == 1;
			if(var_4381_bool != 1) {
				bool var_4382_bool;
				func_430(var_4382_bool, 5);
				if(var_4382_bool != 1)
					var_4379_bool = false;
			}
			if(var_4379_bool != 0) {
				@FindActor(var_476_object, "dt_house_1_07");
				var_476_object->EnableSubset(200, true);
				var_476_object = null;
			} else {
					@FindActor(var_477_object, "dt_house_1_07");
					var_477_object->EnableSubset(200, false);
					var_477_object = null;
			}
		}
		if(var_465_int == 7) {
			@Trace("day time");
			@GetMainOutdoorScene(var_478_object);
			var_478_object->SwitchLights(0, false);
			var_478_object = null;
		} else if(var_465_int == 20) {
			@Trace("night time");
			@GetMainOutdoorScene(var_479_object);
			var_479_object->SwitchLights(0, true);
			var_479_object = null;

		}
		}
	Label_9084:
		var_475_int += 1;
	}
	
}


// @pe
void func_6982(int var_2966_int, int var_2967_int, object var_2968_object, object var_2969_object, object var_2970_object, object var_2971_object)
{
	if(var_2967_int == 0) {
		func_796(13, true);
		func_813(13, true, 1);
		int var_2980_int; object var_2981_object; object var_2982_object; object var_2983_object;
		var_2966_int = var_2980_int;
		var_2968_object = var_2981_object;
		var_2969_object = var_2982_object;
		var_2970_object = var_2983_object;
		func_641(13, var_2980_int, var_2981_object, var_2982_object, var_2983_object);
		object var_2984_object;
		var_2971_object = var_2984_object;
		func_305(var_2984_object, 1);
		func_870(13, true, 4);
		func_932(13, false, 4);
	}
	func_779(13, false);
	int var_2995_int; int var_2996_int;
	var_2966_int = var_2995_int;
	var_2967_int = var_2996_int;
	func_2764(13, var_2995_int, var_2996_int);
}


// @pe
void func_11084(bool var_5157_bool)
{
	int var_5160_int;
	func_132(var_5160_int, "k2LaraVisit");
	if(var_5160_int != 0) {
		var_5157_bool = true;
		return 0;
	}
	var_5157_bool = false;
}


// @pe
void func_10060(int var_5406_int, float var_5407_float)
{
	float var_5411_float;
	var_5407_float = var_5411_float;
	int var_5408_int;
	func_11409(var_5408_int, 538962, 538961, var_5411_float);
	var_5408_int = var_5406_int;
}


// @pe
void func_4946(object var_96_object)
{
	var_96_object->add("house5_02");
	var_96_object->add("dt_house1_union2_03l");
	var_96_object->add("dt_house1_union2_03r");
	var_96_object->add("dt_house1_union2_01l");
	var_96_object->add("dt_house1_union2_01r");
	var_96_object->add("house5_unoinl");
	var_96_object->add("house5_unoinr");
	var_96_object->add("dt_house_1_01");
	var_96_object->add("house5_05");
	var_96_object->add("house5_06");
	var_96_object->add("dt_house_1_02");
	var_96_object->add("house5_unoin_solid01l");
	var_96_object->add("house5_unoin_solid01r");
	var_96_object->add("house5_03");
	var_96_object->add("house5_04");
	var_96_object->add("house1_se_02l");
	var_96_object->add("house1_se_02r");
	var_96_object->add("dt_house3_01_i2");
	var_96_object->add("dt_house3_02_i2");
	var_96_object->add("dt_house3_02");
	var_96_object->add("dt_house3_03_i2");
	var_96_object->add("dt_house3_03");
	var_96_object->add("dt_house3_04_i2");
	var_96_object->add("house5_21");
}


// @pe
void func_10069(int var_5015_int, float var_5016_float)
{
	float var_5020_float;
	var_5016_float = var_5020_float;
	int var_5017_int;
	func_11409(var_5017_int, 540537, 540536, var_5020_float);
	var_5017_int = var_5015_int;
}


// @pe
void func_11096(bool var_5422_bool)
{
	int var_5425_int;
	func_132(var_5425_int, "k5LaskaVisit");
	if(var_5425_int != 0) {
		var_5422_bool = true;
		return 0;
	}
	var_5422_bool = false;
}


// @pe
void func_10078(int var_5324_int, float var_5325_float)
{
	float var_5329_float;
	var_5325_float = var_5329_float;
	int var_5326_int;
	func_11409(var_5326_int, 539492, 539491, var_5329_float);
	var_5326_int = var_5324_int;
}


// @pe
void func_11108(bool var_5468_bool)
{
	int var_5471_int;
	func_132(var_5471_int, "k2KaterinaVisit");
	if(var_5471_int != 0) {
		var_5468_bool = true;
		return 0;
	}
	var_5468_bool = false;
}


void func_870(int var_639_int, bool var_640_bool, int var_641_int)
{
	string var_650_string; object var_651_object; int var_652_int; string var_653_string; object var_654_object; int var_655_int; string var_656_string; object var_657_object;
	var_650_string = "dr_mark" + (var_639_int + 1);
	if(var_640_bool != 0) {
		@GetMainOutdoorScene(var_651_object);
		if(var_651_object == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return 16;
		}
		var_652_int = 1;

		for(;;) {
			if(var_652_int <= var_641_int) {
				var_653_string = (var_650_string + "_") + var_652_int;
				@FindActor(var_654_object, var_653_string);
				if(!var_654_object) { //@nz
					@AddActor(var_654_object, var_653_string, var_651_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "disease_object.xml");
				} else {
				bool var_672_bool; string var_673_string;
				var_653_string = var_673_string;
				func_239(var_672_bool, var_673_string, "restore");
			}
			var_651_object = null;
	} else {
			var_655_int = 1;

			for(;;) {
				if(!(var_655_int <= var_641_int)) goto Label_931;
				@FindActor(var_657_object, ((var_650_string + "_") + var_655_int));
				if(var_657_object != 0) {
					bool var_682_bool; string var_683_string;
					var_656_string = var_683_string;
					func_239(var_682_bool, var_683_string, "cleanup");
				}
				var_657_object = null;
				var_655_int += 1;
			}
	}
	Label_931:
		return 16;

		}
		var_654_object = null;
		var_652_int += 1;
	}
	
}


// @pe
void func_10087(int var_5257_int, float var_5258_float)
{
	float var_5262_float;
	var_5258_float = var_5262_float;
	int var_5259_int;
	func_11409(var_5259_int, 538964, 538963, var_5262_float);
	var_5259_int = var_5257_int;
}


void func_1897(int var_1057_int, int var_1058_int, int var_1059_int)
{
	int var_1061_int;
	if((var_1058_int + 1) == 12)
		return 2;
	bool var_1066_bool = false;
	bool var_1067_bool = true;
	var_1069_bool = var_1059_int < 7;
	if(var_1069_bool != 1) {
		var_1071_bool = var_1059_int > 21;
		if(var_1071_bool != 1)
			var_1067_bool = false;
	}
	if(var_1067_bool != 0) {
		if(var_1058_int != 0)
			var_1066_bool = true;
	}
	if(var_1066_bool != 0) {
		float var_1074_float; int var_1075_int;
		var_1058_int = var_1075_int;
		func_1141(var_1074_float, var_1075_int);
		var_1074_float = var_1061_int;
		if(var_1061_int != 0) {
			int var_1077_int; int var_1080_int;
			var_1057_int = var_1077_int;
			var_1061_int = var_1080_int;
			func_503(var_1077_int, "pers_grabitel", "grabitel.xml", var_1080_int);
		}
	}
	bool var_1081_bool; int var_1082_int; int var_1083_int;
	var_1058_int = var_1082_int;
	var_1059_int = var_1083_int;
	func_1110(var_1081_bool, var_1082_int, var_1083_int);
	if(var_1081_bool != 0) {
		int var_1084_int;
		var_1057_int = var_1084_int;
		func_503(var_1084_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1088_int;
		var_1057_int = var_1088_int;
		func_503(var_1088_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1092_int;
		var_1057_int = var_1092_int;
		func_503(var_1092_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1096_int;
		var_1057_int = var_1096_int;
		func_503(var_1096_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1100_int;
		var_1057_int = var_1100_int;
		func_503(var_1100_int, "pers_woman", "woman.xml", 1);
		int var_1104_int;
		var_1057_int = var_1104_int;
		func_503(var_1104_int, "pers_alkash", "alkash.xml", 1);
		int var_1108_int;
		var_1057_int = var_1108_int;
		func_503(var_1108_int, "pers_girl", "girl.xml", 1);
		int var_1112_int;
		var_1057_int = var_1112_int;
		func_503(var_1112_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_1153_bool = false;
			if(var_1059_int > 8) {
				if(var_1059_int < 21)
					var_1153_bool = true;
			}
			if(var_1153_bool == 0) goto Label_2089;
			int var_1158_int;
			var_1057_int = var_1158_int;
			func_503(var_1158_int, "pers_woman", "woman.xml", 1);
			int var_1162_int;
			var_1057_int = var_1162_int;
			func_503(var_1162_int, "pers_unosha", "unosha.xml", 1);
			int var_1166_int;
			var_1057_int = var_1166_int;
			func_503(var_1166_int, "pers_unosha", "unosha2.xml", 1);
			int var_1170_int;
			var_1057_int = var_1170_int;
			func_503(var_1170_int, "pers_worker", "worker.xml", 1);
			int var_1174_int;
			var_1057_int = var_1174_int;
			func_503(var_1174_int, "pers_worker", "worker2.xml", 1);
			int var_1178_int;
			var_1057_int = var_1178_int;
			func_503(var_1178_int, "pers_alkash", "alkash.xml", 1);
			int var_1182_int;
			var_1057_int = var_1182_int;
			func_503(var_1182_int, "pers_girl", "girl.xml", 1);
			int var_1186_int;
			var_1057_int = var_1186_int;
			func_503(var_1186_int, "pers_girl", "girl2.xml", 1);
			if((var_1058_int + 1) >= 3) {
				int var_1194_int;
				var_1057_int = var_1194_int;
				func_503(var_1194_int, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
			if((var_1058_int + 1) >= 7) {
				int var_1202_int;
				var_1057_int = var_1202_int;
				func_503(var_1202_int, "pers_butcher", "butcher.xml", 2);
			}
	}
Label_2155:
	for(;;) {
		bool var_1116_bool = false;
		bool var_1117_bool = false;
		if(var_1058_int == 0) {
			if(var_1059_int > 12)
				var_1117_bool = true;
		}
		if(var_1117_bool != 0) {
			if(var_1059_int < 22)
				var_1116_bool = true;
		}
		if(var_1116_bool != 0) {
			int var_1124_int;
			var_1057_int = var_1124_int;
			func_503(var_1124_int, "pers_woman", "woman_killme.xml", 1);
		}
		bool var_1128_bool; int var_1129_int; int var_1130_int;
		var_1058_int = var_1129_int;
		var_1059_int = var_1130_int;
		func_1345(var_1128_bool, var_1129_int, var_1130_int);
		if(var_1128_bool != 0) {
			int var_1135_int;
			var_1057_int = var_1135_int;
			func_503(var_1135_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		bool var_1139_bool; int var_1140_int; int var_1141_int;
		var_1058_int = var_1140_int;
		var_1059_int = var_1141_int;
		func_1355(var_1139_bool, var_1140_int, var_1141_int);
		if(var_1139_bool != 0) {
			int var_1149_int;
			var_1057_int = var_1149_int;
			func_503(var_1149_int, "pers_nudegirl", "nudegirl.xml", 1);
		}
		return 2;

	}
	
Label_2089:
	int var_1206_int;
	var_1057_int = var_1206_int;
	func_503(var_1206_int, "pers_woman", "woman.xml", 1);
	int var_1210_int;
	var_1057_int = var_1210_int;
	func_503(var_1210_int, "pers_unosha", "unosha.xml", 1);
	int var_1214_int;
	var_1057_int = var_1214_int;
	func_503(var_1214_int, "pers_unosha", "unosha2.xml", 1);
	int var_1218_int;
	var_1057_int = var_1218_int;
	func_503(var_1218_int, "pers_worker", "worker.xml", 1);
	int var_1222_int;
	var_1057_int = var_1222_int;
	func_503(var_1222_int, "pers_worker", "worker2.xml", 1);
	int var_1226_int;
	var_1057_int = var_1226_int;
	func_503(var_1226_int, "pers_alkash", "alkash.xml", 1);
	if((var_1058_int + 1) >= 3) {
		int var_1234_int;
		var_1057_int = var_1234_int;
		func_503(var_1234_int, "pers_dohodyaga", "dohodyaga.xml", 1);
	}
	if(!((var_1058_int + 1) >= 7)) goto Label_2155;
	int var_1242_int;
	var_1057_int = var_1242_int;
	func_503(var_1242_int, "pers_butcher", "butcher.xml", 3);
}


// @pe
void func_11120(bool var_5356_bool)
{
	int var_5359_int;
	func_132(var_5359_int, "k3AlexandrVisit");
	if(var_5359_int != 0) {
		var_5356_bool = true;
		return 0;
	}
	var_5356_bool = false;
}


// @pe
void func_10096(int var_5430_int, float var_5431_float)
{
	float var_5435_float;
	var_5431_float = var_5435_float;
	int var_5432_int;
	func_11409(var_5432_int, 538958, 538957, var_5435_float);
	var_5432_int = var_5430_int;
}


// @pe
void func_10105(int var_4971_int, float var_4972_float)
{
	float var_4976_float;
	var_4972_float = var_4976_float;
	int var_4973_int;
	func_11409(var_4973_int, 539494, 539493, var_4976_float);
	var_4973_int = var_4971_int;
}


// @pe
void func_6010(int var_3931_int, int var_3932_int, object var_3933_object, object var_3934_object, object var_3935_object, object var_3936_object)
{
	if(var_3932_int == 0) {
		func_796(8, false);
		func_813(8, false, 1);
		int var_3945_int; object var_3946_object; object var_3947_object; object var_3948_object;
		var_3931_int = var_3945_int;
		var_3933_object = var_3946_object;
		var_3934_object = var_3947_object;
		var_3935_object = var_3948_object;
		func_720(8, var_3945_int, var_3946_object, var_3947_object, var_3948_object);
		object var_3949_object;
		var_3936_object = var_3949_object;
		func_305(var_3949_object, 2);
		func_870(8, false, 4);
		func_932(8, true, 4);
	}
	func_779(8, false);
	int var_3960_int; int var_3961_int;
	var_3931_int = var_3960_int;
	var_3932_int = var_3961_int;
	func_3659(8, var_3960_int, var_3961_int);
}


// @pe
void func_7034(int var_4096_int, int var_4097_int, object var_4098_object, object var_4099_object, object var_4100_object, object var_4101_object)
{
	if(var_4097_int == 0) {
		func_796(13, false);
		func_813(13, false, 1);
		int var_4110_int; object var_4111_object; object var_4112_object; object var_4113_object;
		var_4096_int = var_4110_int;
		var_4098_object = var_4111_object;
		var_4099_object = var_4112_object;
		var_4100_object = var_4113_object;
		func_720(13, var_4110_int, var_4111_object, var_4112_object, var_4113_object);
		object var_4114_object;
		var_4101_object = var_4114_object;
		func_305(var_4114_object, 2);
		func_870(13, false, 4);
		func_932(13, true, 4);
	}
	func_779(13, false);
	int var_4125_int; int var_4126_int;
	var_4096_int = var_4125_int;
	var_4097_int = var_4126_int;
	func_3659(13, var_4125_int, var_4126_int);
}


// @pe
void func_11132(bool var_5364_bool)
{
	int var_5367_int;
	func_132(var_5367_int, "k3KaterinaVisit");
	if(var_5367_int != 0) {
		var_5364_bool = true;
		return 0;
	}
	var_5364_bool = false;
}


void func_2944(int var_2435_int, int var_2436_int, int var_2437_int)
{
	int var_2440_int; int var_2441_int;
	bool var_2442_bool = false;
	if(var_2437_int > 8) {
		if(var_2437_int < 21)
			var_2442_bool = true;
	}
	if(var_2442_bool != 0) {
		int var_2447_int;
		var_2435_int = var_2447_int;
		func_503(var_2447_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_2451_int;
		var_2435_int = var_2451_int;
		func_503(var_2451_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		int var_2455_int;
		var_2435_int = var_2455_int;
		func_503(var_2455_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2459_int;
		var_2435_int = var_2459_int;
		func_529(var_2459_int, "fog", "fog.xml", 6);
		if(var_2436_int >= 5) {
			int var_2465_int;
			var_2435_int = var_2465_int;
			func_529(var_2465_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2470_float; int var_2471_int;
		func_1255(var_2470_float, var_2471_int);
		if((1 * var_2470_float) != 0) {
			int var_2473_int; int var_2476_int;
			var_2435_int = var_2473_int;
			var_2440_int = var_2476_int;
			func_503(var_2473_int, "pers_bomber", "bomber.xml", var_2476_int);
		}
	} else {
		int var_2521_int;
		var_2435_int = var_2521_int;
		func_503(var_2521_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2525_int;
		var_2435_int = var_2525_int;
		func_503(var_2525_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2529_int;
		var_2435_int = var_2529_int;
		func_503(var_2529_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2533_int;
		var_2435_int = var_2533_int;
		func_529(var_2533_int, "fog", "fog.xml", 6);
		if(var_2471_int >= 5) {
			int var_2539_int;
			var_2435_int = var_2539_int;
			func_529(var_2539_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2544_float; int var_2545_int;
		var_2436_int = var_2545_int;
		func_1255(var_2544_float, var_2545_int);
		if((1 * var_2544_float) == 0) goto Label_3062;
		int var_2547_int; int var_2550_int;
		var_2435_int = var_2547_int;
		var_2441_int = var_2550_int;
		func_503(var_2547_int, "pers_bomber", "bomber.xml", var_2550_int);
	}
Label_3062:
	int var_2477_int;
	var_2435_int = var_2477_int;
	func_516(var_2477_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2483_int;
	var_2435_int = var_2483_int;
	func_516(var_2483_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2489_int;
	var_2435_int = var_2489_int;
	func_516(var_2489_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2495_int;
	var_2435_int = var_2495_int;
	func_516(var_2495_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_2501_bool; int var_2502_int; int var_2503_int;
	var_2436_int = var_2502_int;
	var_2437_int = var_2503_int;
	func_1345(var_2501_bool, var_2502_int, var_2503_int);
	if(var_2501_bool != 0) {
		int var_2504_int;
		var_2435_int = var_2504_int;
		func_503(var_2504_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_2508_bool; int var_2509_int; int var_2510_int;
	var_2436_int = var_2509_int;
	var_2437_int = var_2510_int;
	func_1355(var_2508_bool, var_2509_int, var_2510_int);
	if(var_2508_bool != 0) {
		int var_2511_int;
		var_2435_int = var_2511_int;
		func_503(var_2511_int, "pers_nudegirl", "nudegirl.xml", 1);
	}
	bool var_2515_bool; int var_2516_int;
	var_2436_int = var_2516_int;
	func_1372(var_2515_bool, var_2516_int);
	if(var_2515_bool != 0) {
		int var_2517_int;
		var_2435_int = var_2517_int;
		func_503(var_2517_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_10114(int var_4928_int, float var_4929_float)
{
	float var_4933_float;
	var_4929_float = var_4933_float;
	int var_4930_int;
	func_11409(var_4930_int, 542472, 542471, var_4933_float);
	var_4930_int = var_4928_int;
}


void func_13190(int var_4799_int, int var_4800_int)
{
	object var_4803_object;
	@Trace((("Updating game " + var_4799_int) + " ") + var_4800_int);
	bool var_4809_bool = false;
	if(var_4799_int == 7) {
		if(var_4800_int == 0)
			var_4809_bool = true;
	}
	if(var_4809_bool != 0) {
		@GetSceneByName(var_4803_object, "sobor");
		@Trigger(var_4803_object, "aglaja");
		var_4803_object = null;
	}
}


// @pe
void func_11144(bool var_5439_bool)
{
	int var_5442_int;
	func_132(var_5442_int, "k4AlexandrVisit");
	if(var_5442_int != 0) {
		var_5439_bool = true;
		return 0;
	}
	var_5439_bool = false;
}


// @pe
void func_10123(int var_4952_int, float var_4953_float)
{
	float var_4957_float;
	var_4953_float = var_4957_float;
	int var_4954_int;
	func_11409(var_4954_int, 542474, 542473, var_4957_float);
	var_4954_int = var_4952_int;
}


// @pe
void func_10132(int var_4830_int, float var_4831_float)
{
	float var_4835_float;
	var_4831_float = var_4835_float;
	int var_4832_int;
	func_11409(var_4832_int, 542476, 542475, var_4835_float);
	var_4832_int = var_4830_int;
}


// @pe
void func_11156(bool var_5447_bool)
{
	int var_5450_int;
	func_132(var_5450_int, "k4KaterinaVisit");
	if(var_5450_int != 0) {
		var_5447_bool = true;
		return 0;
	}
	var_5447_bool = false;
}


// @pe
void func_5020(int var_1248_int, int var_1249_int, object var_1250_object, object var_1251_object, object var_1252_object, object var_1253_object)
{
	if(var_1249_int == 0) {
		func_796(3, false);
		func_813(3, false, 1);
		int var_1261_int; int var_1262_int; object var_1263_object; object var_1264_object; object var_1265_object;
		var_1261_int = 3;
		var_1248_int = var_1262_int;
		var_1250_object = var_1263_object;
		var_1251_object = var_1264_object;
		var_1252_object = var_1265_object;
		func_622(var_1262_int, var_1263_object, var_1264_object, var_1265_object);
		object var_1266_object;
		var_1253_object = var_1266_object;
		func_305(var_1266_object, 0);
		func_870(3, false, 7);
		func_932(3, false, 7);
	}
	int var_1275_int;
	var_1249_int = var_1275_int;
	func_983(3, var_1275_int);
	int var_1292_int; int var_1293_int;
	var_1248_int = var_1292_int;
	var_1249_int = var_1293_int;
	func_1897(3, var_1292_int, var_1293_int);
}


// @pe
void func_10141(void)
{
	func_177("termitnik2@door1", true);
}


void func_13216(int var_23_int)
{
	int var_36_int; int var_37_int; int var_39_int; int var_40_int; int var_41_int; int var_42_int; bool var_43_bool; int var_44_int; int var_45_int;
	@Trace("Disease update");
	int var_35_int = 0;
	if(var_23_int == 0) {
		var_35_int = 0;
	} else {
											if(var_23_int == 1)
												var_35_int = 0;
									int var_253_int;
									func_12911(var_253_int, (var_23_int + 1));
									var_253_int = var_40_int;
									if(var_40_int != -1) {
										int var_258_int;
										var_40_int = var_258_int;
										func_442(var_258_int);
									}
									int var_259_int;
									func_12957(var_259_int, (var_23_int + 1));
									var_259_int = var_40_int;
									if(var_40_int != -1) {
										int var_264_int;
										var_40_int = var_264_int;
										func_412(var_264_int);
									}
									int var_265_int;
									func_13021(var_265_int, (var_23_int + 2));
									var_265_int = var_40_int;
									if(var_40_int != -1) {
										bool var_278_bool; int var_279_int;
										var_40_int = var_279_int;
										func_430(var_278_bool, var_279_int);
										if(!var_278_bool) { //@nz
											int var_281_int;
											var_40_int = var_281_int;
											func_442(var_281_int);
										}
									}
									int var_282_int;
									func_12995(var_282_int, (var_23_int + 2));
									var_282_int = var_40_int;
									if(var_40_int != -1) {
										bool var_295_bool; int var_296_int;
										var_40_int = var_296_int;
										func_430(var_295_bool, var_296_int);
										if(!var_295_bool) { //@nz
											int var_298_int;
											var_40_int = var_298_int;
											func_442(var_298_int);
										}
									}
									int var_299_int; int var_300_int;
									var_23_int = var_300_int;
									func_12911(var_299_int, var_300_int);
									var_299_int = var_40_int;
									if(var_40_int != -1) {
										bool var_303_bool; int var_304_int;
										var_23_int = var_304_int;
										func_12903(var_303_bool, var_304_int);
										var_303_bool = var_43_bool;
										if(var_43_bool != 0) {
											int var_311_int;
											var_40_int = var_311_int;
											func_442(var_311_int);
										} else {
											int var_326_int;
											var_40_int = var_326_int;
											func_472(var_326_int);

										}
									}
									int var_312_int;
									func_12995(var_312_int, (var_23_int + 1));
									var_312_int = var_40_int;
									if(var_40_int != -1) {
										int var_317_int;
										var_40_int = var_317_int;
										func_472(var_317_int);
									}
									int var_318_int;
									func_13021(var_318_int, (var_23_int + 1));
									var_318_int = var_44_int;
									bool var_321_bool = false;
									if(var_44_int != var_40_int) {
										if(var_44_int != -1)
											var_321_bool = true;
									}
									if(var_321_bool == 0) goto Label_13547;
									int var_325_int;
									var_44_int = var_325_int;
									func_472(var_325_int);
	}

	for(;;) {
		if((var_23_int + 1) != 12) {
			@Trace("Diseased regions : " + var_35_int);
			if((var_23_int + 1) < 6) {

				for(;;) {
					if(0 < 16) {
						bool var_61_bool; int var_62_int;
						var_36_int = var_62_int;
						func_430(var_61_bool, var_62_int);
						if(var_61_bool != 0) {
							int var_73_int;
							var_36_int = var_73_int;
							func_472(var_73_int);
						} else {
						bool var_86_bool; int var_87_int;
						var_36_int = var_87_int;
						func_460(var_86_bool, var_87_int);
						if(var_86_bool != 0) {
							int var_95_int;
							var_36_int = var_95_int;
							func_412(var_95_int);
					}
						if(var_23_int == 2) {
							@Trace("Special diseased region: 5");
							func_442(5);
						} else {
							if(var_23_int == 3) {
								@Trace("Special diseased region: 1");
								func_442(1);
			}
							if((var_23_int + 1) == 6) {

								for(;;) {
									if(0 < 16) {
										bool var_236_bool; int var_237_int;
										var_41_int = var_237_int;
										func_430(var_236_bool, var_237_int);
										if(var_236_bool != 0) {
											int var_238_int;
											var_41_int = var_238_int;
											func_472(var_238_int);
										} else {
										bool var_240_bool; int var_241_int;
										var_41_int = var_241_int;
										func_460(var_240_bool, var_241_int);
										if(var_240_bool != 0) {
											int var_242_int;
											var_41_int = var_242_int;
											func_412(var_242_int);
									}
									} else {
										var_41_int += 1;
									}
								Label_13408:
									int var_243_int; int var_244_int;
									var_23_int = var_244_int;
									func_12957(var_243_int, var_244_int);
									var_243_int = var_40_int;
									bool var_245_bool; int var_246_int;
									var_23_int = var_246_int;
									func_12949(var_245_bool, var_246_int);
									if(var_245_bool != 0) {
										int var_252_int;
										var_40_int = var_252_int;
										func_412(var_252_int);
									} else {
												int var_327_int;
												var_40_int = var_327_int;
												func_442(var_327_int);
							}

											for(;;) {
												if(!(0 < 16)) goto Label_13408;
												bool var_330_bool; int var_331_int;
												var_42_int = var_331_int;
												func_460(var_330_bool, var_331_int);
												if(var_330_bool != 0) {
													int var_332_int;
													var_42_int = var_332_int;
													func_412(var_332_int);
												}
												var_42_int += 1;
											}
		}

										for(;;) {
											if(!(0 < 16)) goto Label_13573;
											bool var_336_bool = true;
											bool var_337_bool; int var_338_int;
											var_45_int = var_338_int;
											func_430(var_337_bool, var_338_int);
											if(var_337_bool != 1) {
												bool var_339_bool; int var_340_int;
												var_45_int = var_340_int;
												func_460(var_339_bool, var_340_int);
												if(var_339_bool != 1)
													var_336_bool = false;
											}
											if(var_336_bool != 0) {
												int var_341_int;
												var_45_int = var_341_int;
												func_412(var_341_int);
											}
											var_45_int += 1;
										}

								}
							}
						}
					}
					int var_122_int;
					func_343(var_122_int);
					var_122_int = var_37_int;
					if(var_37_int < var_35_int) {
						var_39_int = 0;

						for(;;) {
							if(!(var_39_int < (var_35_int - var_37_int))) goto Label_13359;
							func_361(var_23_int + 1);
							var_39_int += 1;
						}
					}
				Label_13359:
									} else {
				if(var_23_int == 2) {
					var_35_int = 1;
				} else if(var_23_int == 3) {
					var_35_int = 2;
				} else if(var_23_int == 4) {
					var_35_int = 3;
				} else if(var_23_int == 5) {
					var_35_int = 4;
				} else if(var_23_int == 6) {
					var_35_int = 5;
				} else if(var_23_int == 7) {
					var_35_int = 5;
				} else if(var_23_int == 8) {
					var_35_int = 6;
				} else if(var_23_int == 9) {
					var_35_int = 6;
				} else if(var_23_int == 10) {
					var_35_int = 7;
				} else if(var_23_int == 11) {
					var_35_int = 8;
					}
				}
			Label_13547:
			} else {
				var_36_int += 1;
			}
		Label_13573:
			}
		}

	}
	
}


// @pe
void func_11168(bool var_5233_bool)
{
	int var_5236_int;
	func_132(var_5236_int, "k5AlexandrVisit");
	if(var_5236_int != 0) {
		var_5233_bool = true;
		return 0;
	}
	var_5233_bool = false;
}


void func_932(int var_686_int, bool var_687_bool, int var_688_int)
{
	object var_696_object; object var_697_object; string var_699_string; object var_700_object;
	@FindActor(var_696_object, ("br_" + (var_686_int + 1)));
	if(var_687_bool != 0) {
		if(!var_696_object) { //@nz
			@GetMainOutdoorScene(var_697_object);
			@AddActor(var_696_object, ("br_" + (var_686_int + 1)), var_697_object, [0.0, 0.0, 0.0]);
			var_697_object = null;
		}
	} else if(var_696_object != 0) {
		@RemoveActor(var_696_object);
	}
	int var_698_int = 1;
	
	while(var_698_int <= var_688_int) {
		@FindActor(var_700_object, ((("dr_mark" + (var_686_int + 1)) + "_") + var_698_int));
		if(var_700_object != 0) {
			bool var_719_bool; string var_720_string;
			var_699_string = var_720_string;
			func_239(var_719_bool, var_720_string, "cleanup");
		}
		var_700_object = null;
		var_698_int += 1;
	}
	
	
}
EMIT "Stack[-5] = 0";


// @pe
void func_10148(void)
{
	func_177("house_vlad@door2", true);
}


// @pe
void func_10155(void)
{
	func_177("cot_maria@door1", false);
}


// @pe
void func_11180(bool var_5241_bool)
{
	int var_5244_int;
	func_132(var_5244_int, "k5KaterinaVisit");
	if(var_5244_int != 0) {
		var_5241_bool = true;
		return 0;
	}
	var_5241_bool = false;
}


// @pe
void func_6062(object var_209_object)
{
	var_209_object->add("r3_house_2_02");
	var_209_object->add("r3_house3_02_i2");
	var_209_object->add("r3_house3_02");
	var_209_object->add("r3_house4_05_i2");
	var_209_object->add("r3_house4_05");
	var_209_object->add("r3_house4_03_i2");
	var_209_object->add("r3_house4_04_i2");
	var_209_object->add("r3_house4_04");
	var_209_object->add("r3_house4_01_i2");
	var_209_object->add("r3_house4_01");
	var_209_object->add("r3_house_2_01");
	var_209_object->add("r3_house4_02_i2");
	var_209_object->add("r3_house4_02");
	var_209_object->add("r3_house3_01_i2");
	var_209_object->add("r3_house3_01");
}


// @pe
void func_7086(object var_297_object)
{
	var_297_object->add("lc_house7_02");
	var_297_object->add("lc_house7_03");
	var_297_object->add("lc_house7_04");
	var_297_object->add("lc_house7_05");
	var_297_object->add("lc_house7_06");
	var_297_object->add("lc_house7_07");
	var_297_object->add("lc_House6_02");
	var_297_object->add("lc_house7_01");
	var_297_object->add("lc_house_2_02");
	var_297_object->add("lc_House6_01");
	var_297_object->add("lc_house3_03_i2");
	var_297_object->add("lc_house3_03");
	var_297_object->add("lc_House6_03");
	var_297_object->add("lc_House6_04");
}


// @pe
void func_10162(void)
{
	func_177("warehouse_rubin@door1", false);
}


// @pe
void func_11192(bool var_5285_bool)
{
	int var_5288_int;
	func_132(var_5288_int, "k6KaterinaVisit");
	if(var_5288_int != 0) {
		var_5285_bool = true;
		return 0;
	}
	var_5285_bool = false;
}


// @pe
void func_10169(void)
{
	func_177("warehouse_rubin@door1", true);
}


void func_9151(int var_501_int, int var_502_int, int var_503_int)
{
	var_512_object = GlobalVars[8];
	object var_508_object;
	var_512_object->get(var_508_object, var_501_int);
	var_513_object = GlobalVars[9];
	object var_509_object;
	var_513_object->get(var_509_object, var_501_int);
	var_514_object = GlobalVars[10];
	object var_510_object;
	var_514_object->get(var_510_object, var_501_int);
	var_515_object = GlobalVars[13];
	object var_511_object;
	var_515_object->get(var_511_object, var_501_int);
	if(var_501_int == 0) {
		int var_518_int; int var_519_int; object var_520_object; object var_521_object; object var_522_object; object var_523_object;
		var_502_int = var_518_int;
		var_503_int = var_519_int;
		var_508_object = var_520_object;
		var_509_object = var_521_object;
		var_510_object = var_522_object;
		var_511_object = var_523_object;
		func_4387(var_518_int, var_519_int, var_520_object, var_521_object, var_522_object, var_523_object);
	} else if(var_501_int == 1) {
			int var_886_int; int var_887_int; object var_888_object; object var_889_object; object var_890_object; object var_891_object;
			var_502_int = var_886_int;
			var_503_int = var_887_int;
			var_508_object = var_888_object;
			var_509_object = var_889_object;
			var_510_object = var_890_object;
			var_511_object = var_891_object;
			func_4584(var_886_int, var_887_int, var_888_object, var_889_object, var_890_object, var_891_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_501_int == 2) {
		int var_1029_int; int var_1030_int; object var_1031_object; object var_1032_object; object var_1033_object; object var_1034_object;
		var_502_int = var_1029_int;
		var_503_int = var_1030_int;
		var_508_object = var_1031_object;
		var_509_object = var_1032_object;
		var_510_object = var_1033_object;
		var_511_object = var_1034_object;
		func_4790(var_1029_int, var_1030_int, var_1031_object, var_1032_object, var_1033_object, var_1034_object);
	} else if(var_501_int == 3) {
		int var_1248_int; int var_1249_int; object var_1250_object; object var_1251_object; object var_1252_object; object var_1253_object;
		var_502_int = var_1248_int;
		var_503_int = var_1249_int;
		var_508_object = var_1250_object;
		var_509_object = var_1251_object;
		var_510_object = var_1252_object;
		var_511_object = var_1253_object;
		func_5020(var_1248_int, var_1249_int, var_1250_object, var_1251_object, var_1252_object, var_1253_object);
	} else if(var_501_int == 4) {
		int var_1296_int; int var_1297_int; object var_1298_object; object var_1299_object; object var_1300_object; object var_1301_object;
		var_502_int = var_1296_int;
		var_503_int = var_1297_int;
		var_508_object = var_1298_object;
		var_509_object = var_1299_object;
		var_510_object = var_1300_object;
		var_511_object = var_1301_object;
		func_5238(var_1296_int, var_1297_int, var_1298_object, var_1299_object, var_1300_object, var_1301_object);
	} else if(var_501_int == 5) {
		int var_1341_int; int var_1342_int; object var_1343_object; object var_1344_object; object var_1345_object; object var_1346_object;
		var_502_int = var_1341_int;
		var_503_int = var_1342_int;
		var_508_object = var_1343_object;
		var_509_object = var_1344_object;
		var_510_object = var_1345_object;
		var_511_object = var_1346_object;
		func_5483(var_1341_int, var_1342_int, var_1343_object, var_1344_object, var_1345_object, var_1346_object);
	} else if(var_501_int == 6) {
		int var_1374_int; int var_1375_int; object var_1376_object; object var_1377_object; object var_1378_object; object var_1379_object;
		var_502_int = var_1374_int;
		var_503_int = var_1375_int;
		var_508_object = var_1376_object;
		var_509_object = var_1377_object;
		var_510_object = var_1378_object;
		var_511_object = var_1379_object;
		func_5641(var_1379_object);
	} else if(var_501_int == 7) {
		int var_1384_int; int var_1385_int; object var_1386_object; object var_1387_object; object var_1388_object; object var_1389_object;
		var_502_int = var_1384_int;
		var_503_int = var_1385_int;
		var_508_object = var_1386_object;
		var_509_object = var_1387_object;
		var_510_object = var_1388_object;
		var_511_object = var_1389_object;
		func_5706(var_1384_int, var_1385_int, var_1386_object, var_1387_object, var_1388_object, var_1389_object);
	} else if(var_501_int == 8) {
		int var_1571_int; int var_1572_int; object var_1573_object; object var_1574_object; object var_1575_object; object var_1576_object;
		var_502_int = var_1571_int;
		var_503_int = var_1572_int;
		var_508_object = var_1573_object;
		var_509_object = var_1574_object;
		var_510_object = var_1575_object;
		var_511_object = var_1576_object;
		func_5906(var_1571_int, var_1572_int, var_1573_object, var_1574_object, var_1575_object, var_1576_object);
	} else if(var_501_int == 9) {
		int var_1604_int; int var_1605_int; object var_1606_object; object var_1607_object; object var_1608_object; object var_1609_object;
		var_502_int = var_1604_int;
		var_503_int = var_1605_int;
		var_508_object = var_1606_object;
		var_509_object = var_1607_object;
		var_510_object = var_1608_object;
		var_511_object = var_1609_object;
		func_6109(var_1604_int, var_1605_int, var_1606_object, var_1607_object, var_1608_object, var_1609_object);
	} else if(var_501_int == 10) {
		int var_1637_int; int var_1638_int; object var_1639_object; object var_1640_object; object var_1641_object; object var_1642_object;
		var_502_int = var_1637_int;
		var_503_int = var_1638_int;
		var_508_object = var_1639_object;
		var_509_object = var_1640_object;
		var_510_object = var_1641_object;
		var_511_object = var_1642_object;
		func_6318(var_1637_int, var_1638_int, var_1639_object, var_1640_object, var_1641_object, var_1642_object);
	} else if(var_501_int == 11) {
		int var_1670_int; int var_1671_int; object var_1672_object; object var_1673_object; object var_1674_object; object var_1675_object;
		var_502_int = var_1670_int;
		var_503_int = var_1671_int;
		var_508_object = var_1672_object;
		var_509_object = var_1673_object;
		var_510_object = var_1674_object;
		var_511_object = var_1675_object;
		func_6530(var_1670_int, var_1671_int, var_1672_object, var_1673_object, var_1674_object, var_1675_object);
	} else if(var_501_int == 12) {
		int var_1703_int; int var_1704_int; object var_1705_object; object var_1706_object; object var_1707_object; object var_1708_object;
		var_502_int = var_1703_int;
		var_503_int = var_1704_int;
		var_508_object = var_1705_object;
		var_509_object = var_1706_object;
		var_510_object = var_1707_object;
		var_511_object = var_1708_object;
		func_6727(var_1703_int, var_1704_int, var_1705_object, var_1706_object, var_1707_object, var_1708_object);
	} else if(var_501_int == 13) {
		int var_1736_int; int var_1737_int; object var_1738_object; object var_1739_object; object var_1740_object; object var_1741_object;
		var_502_int = var_1736_int;
		var_503_int = var_1737_int;
		var_508_object = var_1738_object;
		var_509_object = var_1739_object;
		var_510_object = var_1740_object;
		var_511_object = var_1741_object;
		func_6930(var_1736_int, var_1737_int, var_1738_object, var_1739_object, var_1740_object, var_1741_object);
	} else if(var_501_int == 14) {
		int var_1769_int; int var_1770_int; object var_1771_object; object var_1772_object; object var_1773_object; object var_1774_object;
		var_502_int = var_1769_int;
		var_503_int = var_1770_int;
		var_508_object = var_1771_object;
		var_509_object = var_1772_object;
		var_510_object = var_1773_object;
		var_511_object = var_1774_object;
		func_7130(var_1769_int, var_1770_int, var_1771_object, var_1772_object, var_1773_object, var_1774_object);
	} else if(var_501_int == 15) {
		int var_1947_int; int var_1948_int; object var_1949_object; object var_1950_object; object var_1951_object; object var_1952_object;
		var_502_int = var_1947_int;
		var_503_int = var_1948_int;
		var_508_object = var_1949_object;
		var_509_object = var_1950_object;
		var_510_object = var_1951_object;
		var_511_object = var_1952_object;
		func_7312(var_1947_int, var_1948_int, var_1949_object, var_1950_object, var_1951_object, var_1952_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


void func_10176(void)
{
	object var_5727_object;
	func_11417(var_5727_object);
	object var_5725_object;
	var_5727_object = var_5725_object;
	object var_5726_object;
	var_5725_object->FindMark(var_5726_object, "k1q01AlexandrGotoKaterina");
	if(var_5726_object != 0)
		var_5726_object->Remove();
	var_5725_object->FindMark(var_5726_object, "k1q01AlexandrGotoStation");
	if(var_5726_object != 0)
		var_5726_object->Remove();
	var_5725_object->FindMark(var_5726_object, "k1q01BurahGotoAnna");
	if(var_5726_object != 0)
		var_5726_object->Remove();
	var_5725_object->FindMark(var_5726_object, "k1q01CompletedGotoAlexandt");
	if(var_5726_object != 0)
		var_5726_object->Remove();
	var_5725_object->FindMark(var_5726_object, "k1q01KaterinaGotoAlexandr");
	if(var_5726_object != 0)
		var_5726_object->Remove();
	var_5725_object->FindMark(var_5726_object, "k1q01LaskaGotoBurah");
	if(var_5726_object != 0)
		var_5726_object->Remove();
	var_5725_object->FindMark(var_5726_object, "k1q01StationGotoLaska");
	if(var_5726_object != 0)
		var_5726_object->Remove();
	var_5725_object->FindMark(var_5726_object, "k1q02GeorgGotoMaria");
	if(var_5726_object != 0)
		var_5726_object->Remove();
	var_5725_object->FindMark(var_5726_object, "k1q02KaterinaGotoGeorg");
	if(var_5726_object != 0)
		var_5726_object->Remove();
	var_5725_object->FindMark(var_5726_object, "k1q03AnnaGotoNotkin");
	if(var_5726_object != 0)
		var_5726_object->Remove();
	bool var_5748_bool;
	func_11392(var_5748_bool, 318);
	bool var_5750_bool;
	func_11392(var_5750_bool, 326);
	bool var_5752_bool;
	func_11392(var_5752_bool, 333);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_4035(int var_3248_int, int var_3249_int, int var_3250_int)
{
	int var_3255_int; int var_3256_int; int var_3257_int; int var_3258_int;
	bool var_3259_bool = false;
	if(var_3250_int > 8) {
		if(var_3250_int < 21)
			var_3259_bool = true;
	}
	if(var_3259_bool != 0) {
		int var_3264_int;
		var_3248_int = var_3264_int;
		func_503(var_3264_int, "pers_rat", "rat.xml", 4);
		int var_3268_int;
		var_3248_int = var_3268_int;
		func_503(var_3268_int, "pers_alkash", "alkash.xml", 2);
		int var_3272_int;
		var_3248_int = var_3272_int;
		func_503(var_3272_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3277_float; int var_3278_int;
		func_1165(var_3277_float, var_3278_int);
		if((2 * var_3277_float) != 0) {
			int var_3324_int; int var_3327_int;
			var_3248_int = var_3324_int;
			var_3255_int = var_3327_int;
			func_503(var_3324_int, "pers_grabitel", "grabitel.xml", var_3327_int);
		}
		if((var_3278_int + 1) >= 2) {
			int var_3332_int;
			var_3248_int = var_3332_int;
			func_503(var_3332_int, "pers_patrool", "patrol.xml", 2);
			bool var_3336_bool; int var_3337_int;
			var_3249_int = var_3337_int;
			func_1372(var_3336_bool, var_3337_int);
			if(var_3336_bool != 0) {
				int var_3338_int;
				var_3248_int = var_3338_int;
				func_503(var_3338_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3343_float; int var_3344_int;
		var_3249_int = var_3344_int;
		func_1255(var_3343_float, var_3344_int);
		if((1 * var_3343_float) != 0) {
			int var_3346_int; int var_3349_int;
			var_3248_int = var_3346_int;
			var_3256_int = var_3349_int;
			func_503(var_3346_int, "pers_bomber", "bomber.xml", var_3349_int);
		}
	} else {
		int var_3356_int;
		var_3248_int = var_3356_int;
		func_503(var_3356_int, "pers_rat", "rat.xml", 7);
		int var_3360_int;
		var_3248_int = var_3360_int;
		func_503(var_3360_int, "pers_alkash", "alkash.xml", 1);
		int var_3364_int;
		var_3248_int = var_3364_int;
		func_503(var_3364_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3369_float; int var_3370_int;
		func_1165(var_3369_float, var_3370_int);
		if((2 * var_3369_float) != 0) {
			int var_3372_int; int var_3375_int;
			var_3248_int = var_3372_int;
			var_3257_int = var_3375_int;
			func_503(var_3372_int, "pers_grabitel", "grabitel.xml", var_3375_int);
		}
		if((var_3370_int + 1) >= 2) {
			int var_3380_int;
			var_3248_int = var_3380_int;
			func_503(var_3380_int, "pers_patrool", "patrol.xml", 1);
			bool var_3384_bool; int var_3385_int;
			var_3249_int = var_3385_int;
			func_1372(var_3384_bool, var_3385_int);
			if(var_3384_bool != 0) {
				int var_3386_int;
				var_3248_int = var_3386_int;
				func_503(var_3386_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3391_float; int var_3392_int;
		var_3249_int = var_3392_int;
		func_1255(var_3391_float, var_3392_int);
		if((1 * var_3391_float) == 0) goto Label_4197;
		int var_3394_int; int var_3397_int;
		var_3248_int = var_3394_int;
		var_3258_int = var_3397_int;
		func_503(var_3394_int, "pers_bomber", "bomber.xml", var_3397_int);
	}
Label_4197:
	bool var_3350_bool; int var_3351_int;
	var_3249_int = var_3351_int;
	func_1372(var_3350_bool, var_3351_int);
	if(var_3350_bool != 0) {
		int var_3352_int;
		var_3248_int = var_3352_int;
		func_503(var_3352_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_11204(bool var_5277_bool)
{
	int var_5280_int;
	func_132(var_5280_int, "k6AlexandrVisit");
	if(var_5280_int != 0) {
		var_5277_bool = true;
		return 0;
	}
	var_5277_bool = false;
}


// @pe
void func_5072(int var_2553_int, int var_2554_int, object var_2555_object, object var_2556_object, object var_2557_object, object var_2558_object)
{
	if(var_2554_int == 0) {
		func_796(3, true);
		func_813(3, true, 1);
		int var_2567_int; object var_2568_object; object var_2569_object; object var_2570_object;
		var_2553_int = var_2567_int;
		var_2555_object = var_2568_object;
		var_2556_object = var_2569_object;
		var_2557_object = var_2570_object;
		func_641(3, var_2567_int, var_2568_object, var_2569_object, var_2570_object);
		object var_2571_object;
		var_2558_object = var_2571_object;
		func_305(var_2571_object, 1);
		func_870(3, true, 7);
		func_932(3, false, 7);
	}
	func_779(3, false);
	int var_2582_int; int var_2583_int;
	var_2553_int = var_2582_int;
	var_2554_int = var_2583_int;
	func_2944(3, var_2582_int, var_2583_int);
}


// @pe
void func_11216(bool var_5316_bool)
{
	int var_5319_int;
	func_132(var_5319_int, "k5Kapellavisit");
	if(var_5319_int != 0) {
		var_5316_bool = true;
		return 0;
	}
	var_5316_bool = false;
}


// @pe
void func_983(int var_1274_int, int var_1275_int)
{
	bool var_1276_bool = true;
	bool var_1277_bool = true;
	var_1279_bool = var_1275_int >= 20;
	if(var_1279_bool != 1) {
		var_1281_bool = var_1275_int < 2;
		if(var_1281_bool != 1)
			var_1277_bool = false;
	}
	if(var_1277_bool != 1) {
		bool var_1282_bool = false;
		if(var_1275_int >= 6) {
			if(var_1275_int < 10)
				var_1282_bool = true;
		}
		if(var_1282_bool != 1)
			var_1276_bool = false;
	}
	if(var_1276_bool != 0) {
		int var_1287_int;
		var_1274_int = var_1287_int;
		func_779(var_1287_int, true);
	} else {
		int var_1289_int;
		var_1274_int = var_1289_int;
		func_779(var_1289_int, false);
	}
	
}


// @pe
void func_7130(int var_1769_int, int var_1770_int, object var_1771_object, object var_1772_object, object var_1773_object, object var_1774_object)
{
	if(var_1770_int == 0) {
		func_796(14, false);
		func_813(14, false, 1);
		int var_1782_int; int var_1783_int; object var_1784_object; object var_1785_object; object var_1786_object;
		var_1782_int = 14;
		var_1769_int = var_1783_int;
		var_1771_object = var_1784_object;
		var_1772_object = var_1785_object;
		var_1773_object = var_1786_object;
		func_622(var_1783_int, var_1784_object, var_1785_object, var_1786_object);
		object var_1787_object;
		var_1774_object = var_1787_object;
		func_305(var_1787_object, 0);
		func_870(14, false, 5);
		func_932(14, false, 5);
	}
	int var_1796_int;
	var_1770_int = var_1796_int;
	func_1087(14, var_1796_int);
	int var_1807_int; int var_1808_int;
	var_1769_int = var_1807_int;
	var_1770_int = var_1808_int;
	func_1376(14, var_1807_int, var_1808_int);
}


// @pe
void func_11228(bool var_4963_bool)
{
	int var_4966_int;
	func_132(var_4966_int, "k6LaskaVisit");
	if(var_4966_int != 0) {
		var_4963_bool = true;
		return 0;
	}
	var_4963_bool = false;
}


// @pe
void func_6109(int var_1604_int, int var_1605_int, object var_1606_object, object var_1607_object, object var_1608_object, object var_1609_object)
{
	if(var_1605_int == 0) {
		func_796(9, false);
		func_813(9, false, 1);
		int var_1617_int; int var_1618_int; object var_1619_object; object var_1620_object; object var_1621_object;
		var_1617_int = 9;
		var_1604_int = var_1618_int;
		var_1606_object = var_1619_object;
		var_1607_object = var_1620_object;
		var_1608_object = var_1621_object;
		func_622(var_1618_int, var_1619_object, var_1620_object, var_1621_object);
		object var_1622_object;
		var_1609_object = var_1622_object;
		func_305(var_1622_object, 0);
		func_870(9, false, 7);
		func_932(9, false, 7);
	}
	int var_1631_int;
	var_1605_int = var_1631_int;
	func_1050(9, var_1631_int);
	int var_1633_int; int var_1634_int;
	var_1604_int = var_1633_int;
	var_1605_int = var_1634_int;
	func_1624(9, var_1633_int, var_1634_int);
}


// @pe
void func_11240(bool var_5007_bool)
{
	int var_5010_int;
	func_132(var_5010_int, "k4LaraVisit");
	if(var_5010_int != 0) {
		var_5007_bool = true;
		return 0;
	}
	var_5007_bool = false;
}


// @pe
void func_11252(bool var_4920_bool)
{
	int var_4923_int;
	func_132(var_4923_int, "k7AglajaVisit");
	if(var_4923_int != 0) {
		var_4920_bool = true;
		return 0;
	}
	var_4920_bool = false;
}


// @pe
void func_1020(int var_1322_int, int var_1323_int)
{
	bool var_1324_bool = true;
	var_1326_bool = var_1323_int >= 20;
	if(var_1326_bool != 1) {
		bool var_1327_bool = false;
		if(var_1323_int >= 6) {
			if(var_1323_int < 10)
				var_1327_bool = true;
		}
		if(var_1327_bool != 1)
			var_1324_bool = false;
	}
	if(var_1324_bool != 0) {
		int var_1332_int;
		var_1322_int = var_1332_int;
		func_779(var_1332_int, true);
	} else {
		int var_1334_int;
		var_1322_int = var_1334_int;
		func_779(var_1334_int, false);
	}
	
}


