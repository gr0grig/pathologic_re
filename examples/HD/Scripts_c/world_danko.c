// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:,7:object:,8:object:,9:object:,10:object:,11:object:,12:object:,13:object:,14:object:,15:object:,16:object:

maintask task_0
{
	void init(void)
	{
		@SetVariable("branch", 0);
		@SetSaveProperty(0, 0);
		func_57();
		func_7914();
		func_8954();
		func_12587();
		float var_4560_float;
		float var_4561_float;
		func_290(var_4561_float);
		var_4561_float = var_4560_float;
		func_13947(var_4560_float);
		func_183("burah_home@door1", true);
	
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
		func_8899(var_3_int, var_4_float);
		bool var_2_bool;
		if(var_2_bool != 0)
			return 0;
		bool var_4135_bool; int var_4136_int; float var_4137_float;
		iID = var_4136_int;
		fTime = var_4137_float;
		func_12526(var_4136_int, var_4137_float);
		if(var_4135_bool != 0)
			return 0;
		int var_4657_int; float var_4658_float;
		iID = var_4657_int;
		fTime = var_4658_float;
		func_12622(var_4657_int, var_4658_float);
	}

}


void OnTrigger(string name, string var_1_string)
{
	int var_4_int;
	if(name == "playsound") {
		@PlaySound(var_1_string);
	} else if(name == "enable_bonfire") {
			@_strtoi(var_4_int, var_1_string);
			func_7614(var_4_int - 1);
	}
Label_7502:
	for(;;) {

	}
	
	if(!(name == "disable_bonfire")) goto Label_7502;
	int var_5_int;
	@_strtoi(var_5_int, var_1_string);
	func_7691(var_5_int - 1);
}


void OnConsole(string var_0_string, string var_1_string)
{
	int var_12_int; int var_13_int; object var_14_object; int var_15_int; int var_16_int; object var_17_object; object var_18_object; object var_19_object; cvector var_20_cvector; object var_21_object;
	if(var_0_string == "horror") {
		@_strtoi(var_12_int, var_1_string);
		int var_24_int;
		var_12_int = var_24_int;
		func_448(var_24_int);
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
			func_311(var_45_object, 1);
			@Trace("Replaced");
			var_14_object = null;
		} else {
				@Trace("Invalid region index");
	}
			if(var_0_string == "nail") {
				@_strtoi(var_15_int, var_1_string);
				int var_76_int;
				var_15_int = var_76_int;
				func_478(var_76_int);
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
					func_311(var_94_object, 2);
					@Trace("Replaced");
					var_17_object = null;
				} else {
				@Trace("Invalid region index");
			}
			if(var_0_string == "fogme") {
				object var_100_object;
				func_80(var_100_object);
				var_100_object = var_18_object;
				var_18_object->GetScene(var_19_object);
				var_18_object->GetPosition(var_20_cvector);
				@AddActorByType(var_21_object, "fog", var_19_object, var_20_cvector, [0.0, 0.0, 1.0], "fog_stat.xml");
				var_21_object = null;
				var_19_object = null;
				var_18_object = null;
			} else if(var_0_string == "sepia") {
				func_295();
			} else if(var_0_string == "nosepia") {
				func_300();
			}
			}
	}
	goto Label_7613;
	
Label_7613:
	for(;;) {

	}
	
}


// @pe
void func_12289(bool var_5573_bool)
{
	int var_5576_int;
	func_138(var_5576_int, "d3RubinVisit");
	if(var_5576_int == 1)
		var_5573_bool = true;
	var_5573_bool = false;
}


// @pe
void func_1026(int var_1323_int, int var_1324_int)
{
	bool var_1325_bool = true;
	var_1327_bool = var_1324_int >= 20;
	if(var_1327_bool != 1) {
		bool var_1328_bool = false;
		if(var_1324_int >= 6) {
			if(var_1324_int < 10)
				var_1328_bool = true;
		}
		if(var_1328_bool != 1)
			var_1325_bool = false;
	}
	if(var_1325_bool != 0) {
		int var_1333_int;
		var_1323_int = var_1333_int;
		func_785(var_1333_int, true);
	} else {
		int var_1335_int;
		var_1323_int = var_1335_int;
		func_785(var_1335_int, false);
	}
	
}


// @pe
void func_10246(int var_5376_int, float var_5377_float)
{
	float var_5381_float;
	var_5377_float = var_5381_float;
	int var_5378_int;
	func_12495(var_5378_int, 522202, 522201, var_5381_float);
	var_5378_int = var_5376_int;
}


// @pe
void func_5130(int var_3680_int, int var_3681_int, object var_3682_object, object var_3683_object, object var_3684_object, object var_3685_object)
{
	if(var_3681_int == 0) {
		func_802(3, false);
		func_819(3, false, 1);
		int var_3694_int; object var_3695_object; object var_3696_object; object var_3697_object;
		var_3680_int = var_3694_int;
		var_3682_object = var_3695_object;
		var_3683_object = var_3696_object;
		var_3684_object = var_3697_object;
		func_726(3, var_3694_int, var_3695_object, var_3696_object, var_3697_object);
		object var_3698_object;
		var_3685_object = var_3698_object;
		func_311(var_3698_object, 2);
		func_876(3, false, 7);
		func_938(3, true, 7);
	}
	func_785(3, false);
	int var_3709_int; int var_3710_int;
	var_3680_int = var_3709_int;
	var_3681_int = var_3710_int;
	func_3853(3, var_3709_int, var_3710_int);
}


// @pe
void func_12301(bool var_5557_bool)
{
	int var_5560_int;
	func_138(var_5560_int, "d3GeorgVisit");
	if(var_5560_int == 1)
		var_5557_bool = true;
	var_5557_bool = false;
}


void func_8206(void)
{
	object var_4416_object;
	@GetMainOutdoorScene(var_4416_object);
	var_4417_object = GlobalVars[0];
	object var_4418_object; object var_4419_object;
	var_4416_object = var_4419_object;
	func_7768(var_4418_object, var_4419_object, 1);
	var_4418_object = var_4417_object;
	GlobalVars[0] = var_4417_object;
	var_4440_object = GlobalVars[1];
	object var_4441_object; object var_4442_object;
	var_4416_object = var_4442_object;
	func_7768(var_4441_object, var_4442_object, 2);
	var_4441_object = var_4440_object;
	GlobalVars[1] = var_4440_object;
	var_4444_object = GlobalVars[2];
	object var_4445_object; object var_4446_object;
	var_4416_object = var_4446_object;
	func_7768(var_4445_object, var_4446_object, 3);
	var_4445_object = var_4444_object;
	GlobalVars[2] = var_4444_object;
	var_4448_object = GlobalVars[3];
	object var_4449_object; object var_4450_object;
	var_4416_object = var_4450_object;
	func_7768(var_4449_object, var_4450_object, 4);
	var_4449_object = var_4448_object;
	GlobalVars[3] = var_4448_object;
	var_4452_object = GlobalVars[4];
	object var_4453_object; object var_4454_object;
	var_4416_object = var_4454_object;
	func_7768(var_4453_object, var_4454_object, 5);
	var_4453_object = var_4452_object;
	GlobalVars[4] = var_4452_object;
	var_4456_object = GlobalVars[5];
	object var_4457_object; object var_4458_object;
	var_4416_object = var_4458_object;
	func_7768(var_4457_object, var_4458_object, 6);
	var_4457_object = var_4456_object;
	GlobalVars[5] = var_4456_object;
	var_4460_object = GlobalVars[12];
	object var_4461_object;
	func_132(var_4461_object);
	var_4461_object = var_4460_object;
	GlobalVars[12] = var_4460_object;
	func_7779(false);
	func_8754();
	func_8829();
	@SendWorldWndMessage(100);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10255(int var_5697_int, float var_5698_float)
{
	float var_5702_float;
	var_5698_float = var_5702_float;
	int var_5699_int;
	func_12495(var_5699_int, 502853, 502852, var_5702_float);
	var_5699_int = var_5697_int;
}


// @pe
void func_7188(int var_3000_int, int var_3001_int, object var_3002_object, object var_3003_object, object var_3004_object, object var_3005_object)
{
	if(var_3001_int == 0) {
		func_802(14, true);
		func_819(14, true, 1);
		int var_3014_int; object var_3015_object; object var_3016_object; object var_3017_object;
		var_3000_int = var_3014_int;
		var_3002_object = var_3015_object;
		var_3003_object = var_3016_object;
		var_3004_object = var_3017_object;
		func_647(14, var_3014_int, var_3015_object, var_3016_object, var_3017_object);
		object var_3018_object;
		var_3005_object = var_3018_object;
		func_311(var_3018_object, 1);
		func_876(14, true, 5);
		func_938(14, false, 5);
	}
	func_785(14, false);
	int var_3029_int; int var_3030_int;
	var_3000_int = var_3029_int;
	var_3001_int = var_3030_int;
	func_2590(14, var_3029_int, var_3030_int);
}


// @pe
void func_6167(int var_2835_int, int var_2836_int, object var_2837_object, object var_2838_object, object var_2839_object, object var_2840_object)
{
	if(var_2836_int == 0) {
		func_802(9, true);
		func_819(9, true, 1);
		int var_2849_int; object var_2850_object; object var_2851_object; object var_2852_object;
		var_2835_int = var_2849_int;
		var_2837_object = var_2850_object;
		var_2838_object = var_2851_object;
		var_2839_object = var_2852_object;
		func_647(9, var_2849_int, var_2850_object, var_2851_object, var_2852_object);
		object var_2853_object;
		var_2840_object = var_2853_object;
		func_311(var_2853_object, 1);
		func_876(9, true, 7);
		func_938(9, false, 7);
	}
	func_785(9, false);
	int var_2864_int; int var_2865_int;
	var_2835_int = var_2864_int;
	var_2836_int = var_2865_int;
	func_2770(9, var_2864_int, var_2865_int);
}


// @pe
void func_10264(int var_6267_int, float var_6268_float)
{
	float var_6272_float;
	var_6268_float = var_6272_float;
	int var_6269_int;
	func_12495(var_6269_int, 503175, 503174, var_6272_float);
	var_6269_int = var_6267_int;
}


// @pe
void func_12313(bool var_5619_bool)
{
	int var_5622_int;
	func_138(var_5622_int, "d4BigVladVisit");
	if(var_5622_int == 1)
		var_5619_bool = true;
	var_5619_bool = false;
}


// @pe
void func_1056(int var_725_int, int var_726_int)
{
	bool var_727_bool = true;
	bool var_728_bool = true;
	var_730_bool = var_726_int >= 22;
	if(var_730_bool != 1) {
		var_732_bool = var_726_int < 4;
		if(var_732_bool != 1)
			var_728_bool = false;
	}
	if(var_728_bool != 1) {
		bool var_733_bool = false;
		if(var_726_int >= 6) {
			if(var_726_int < 8)
				var_733_bool = true;
		}
		if(var_733_bool != 1)
			var_727_bool = false;
	}
	if(var_727_bool != 0) {
		int var_738_int;
		var_725_int = var_738_int;
		func_785(var_738_int, true);
	} else {
		int var_749_int;
		var_725_int = var_749_int;
		func_785(var_749_int, false);
	}
	
}


// @pe
void func_10273(int var_5387_int, float var_5388_float)
{
	float var_5392_float;
	var_5388_float = var_5392_float;
	int var_5389_int;
	func_12495(var_5389_int, 522204, 522203, var_5392_float);
	var_5389_int = var_5387_int;
}


// @pe
void func_12325(bool var_4996_bool)
{
	int var_4999_int;
	func_138(var_4999_int, "d12q01KlaraVisit");
	if(var_4999_int != 0) {
		var_4996_bool = true;
		return 0;
	}
	var_4996_bool = false;
}


// @pe
void func_10282(int var_5713_int, float var_5714_float)
{
	float var_5718_float;
	var_5714_float = var_5718_float;
	int var_5715_int;
	func_12495(var_5715_int, 503177, 503176, var_5718_float);
	var_5715_int = var_5713_int;
}


// @pe
void func_12337(bool var_5689_bool)
{
	int var_5692_int;
	func_138(var_5692_int, "d5RubinVisit");
	if(var_5692_int == 1)
		var_5689_bool = true;
	var_5689_bool = false;
}


// @pe
void func_10291(int var_5643_int, float var_5644_float)
{
	float var_5648_float;
	var_5644_float = var_5648_float;
	int var_5645_int;
	func_12495(var_5645_int, 503181, 503180, var_5648_float);
	var_5645_int = var_5643_int;
}


void func_57(void)
{
	object var_9_object;
	@FindActor(var_9_object, "player");
	object var_10_object;
	@GetSceneByName(var_10_object, "cot_eva");
	if(!var_10_object) //@nz
		@Trace("Starting scene not found");
	bool var_11_bool;
	cvector var_12_cvector;
	cvector var_13_cvector;
	var_10_object->GetLocator("pt_birth_Danko", var_11_bool, var_12_cvector, var_13_cvector);
	if(var_11_bool != 0)
		@Teleport(var_9_object, var_10_object, var_12_cvector, var_13_cvector);
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


// @pe
void func_10300(int var_5729_int, float var_5730_float)
{
	float var_5734_float;
	var_5730_float = var_5734_float;
	int var_5731_int;
	func_12495(var_5731_int, 503179, 503178, var_5734_float);
	var_5731_int = var_5729_int;
}


// @pe
void func_14397(object var_4899_object, bool var_4900_bool, int var_4901_int)
{
	var_4899_object->add(6);
	var_4899_object->add(26);
	var_4899_object->add(2);
	var_4899_object->add(22);
	if(var_4900_bool == false) {
		var_4899_object->add(15);
		var_4899_object->add(5);
		var_4899_object->add(16);
	} else if(var_4901_int != 0) {
		var_4899_object->add(15);
	}
	
}


// @pe
void func_12349(bool var_5635_bool)
{
	int var_5638_int;
	func_138(var_5638_int, "d6KapellaVisit");
	if(var_5638_int == 1)
		var_5635_bool = true;
	var_5635_bool = false;
}


// @pe
void func_5182(object var_123_object)
{
	var_123_object->add("dt_house3_08_i2");
	var_123_object->add("dt_house3_09");
	var_123_object->add("dt_house3_09_i2");
	var_123_object->add("house1_se_03l");
	var_123_object->add("house1_se_03r");
	var_123_object->add("house1_se_01l");
	var_123_object->add("house1_se_01r");
	var_123_object->add("house1_se_04l");
	var_123_object->add("house1_se_04r");
	var_123_object->add("house5_11");
	var_123_object->add("house5_09");
	var_123_object->add("house5_13");
	var_123_object->add("house5_12");
	var_123_object->add("house5_14");
	var_123_object->add("house5_unoin03l");
	var_123_object->add("house5_unoin03r");
	var_123_object->add("house5_unoin02l");
	var_123_object->add("house5_unoin02r");
	var_123_object->add("house5_unoin01l");
	var_123_object->add("house5_unoin01r");
}


// @pe
void func_10309(int var_5966_int, float var_5967_float)
{
	float var_5971_float;
	var_5967_float = var_5971_float;
	int var_5968_int;
	func_12495(var_5968_int, 512530, 512529, var_5971_float);
	var_5968_int = var_5966_int;
}


// @pe
void func_1093(int var_1796_int, int var_1797_int)
{
	bool var_1798_bool = true;
	var_1800_bool = var_1797_int >= 22;
	if(var_1800_bool != 1) {
		var_1802_bool = var_1797_int < 6;
		if(var_1802_bool != 1)
			var_1798_bool = false;
	}
	if(var_1798_bool != 0) {
		int var_1803_int;
		var_1796_int = var_1803_int;
		func_785(var_1803_int, true);
	} else {
		int var_1805_int;
		var_1796_int = var_1805_int;
		func_785(var_1805_int, false);
	}
	
}


void func_3143(int var_2119_int, int var_2120_int, int var_2121_int)
{
	int var_2124_int; int var_2125_int;
	bool var_2126_bool = false;
	if(var_2121_int > 8) {
		if(var_2121_int < 21)
			var_2126_bool = true;
	}
	if(var_2126_bool != 0) {
		int var_2131_int;
		var_2119_int = var_2131_int;
		func_509(var_2131_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2135_int;
		var_2119_int = var_2135_int;
		func_509(var_2135_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2139_int;
		var_2119_int = var_2139_int;
		func_509(var_2139_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2143_int;
		var_2119_int = var_2143_int;
		func_535(var_2143_int, "fog", "fog.xml", 6);
		if(var_2120_int >= 5) {
			int var_2153_int;
			var_2119_int = var_2153_int;
			func_535(var_2153_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2158_float; int var_2159_int;
		func_1261(var_2158_float, var_2159_int);
		if((1 * var_2158_float) != 0) {
			int var_2205_int; int var_2208_int;
			var_2119_int = var_2205_int;
			var_2124_int = var_2208_int;
			func_509(var_2205_int, "pers_bomber", "bomber.xml", var_2208_int);
		}
	} else {
		int var_2244_int;
		var_2119_int = var_2244_int;
		func_509(var_2244_int, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		int var_2248_int;
		var_2119_int = var_2248_int;
		func_509(var_2248_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		int var_2252_int;
		var_2119_int = var_2252_int;
		func_509(var_2252_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2256_int;
		var_2119_int = var_2256_int;
		func_535(var_2256_int, "fog", "fog.xml", 6);
		if(var_2159_int >= 5) {
			int var_2262_int;
			var_2119_int = var_2262_int;
			func_535(var_2262_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2267_float; int var_2268_int;
		var_2120_int = var_2268_int;
		func_1261(var_2267_float, var_2268_int);
		if((2 * var_2267_float) == 0) goto Label_3261;
		int var_2270_int; int var_2273_int;
		var_2119_int = var_2270_int;
		var_2125_int = var_2273_int;
		func_509(var_2270_int, "pers_bomber", "bomber.xml", var_2273_int);
	}
Label_3261:
	bool var_2209_bool; int var_2210_int;
	var_2120_int = var_2210_int;
	func_1378(var_2209_bool, var_2210_int);
	if(var_2209_bool != 0) {
		int var_2212_int;
		var_2119_int = var_2212_int;
		func_509(var_2212_int, "pers_sanitar", "sanitar.xml", 2);
	}
	int var_2216_int;
	var_2119_int = var_2216_int;
	func_522(var_2216_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2226_int;
	var_2119_int = var_2226_int;
	func_522(var_2226_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2232_int;
	var_2119_int = var_2232_int;
	func_522(var_2232_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2238_int;
	var_2119_int = var_2238_int;
	func_522(var_2238_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	
}


// @pe
void func_7240(int var_4130_int, int var_4131_int, object var_4132_object, object var_4133_object, object var_4134_object, object var_4135_object)
{
	if(var_4131_int == 0) {
		func_802(14, false);
		func_819(14, false, 1);
		int var_4144_int; object var_4145_object; object var_4146_object; object var_4147_object;
		var_4130_int = var_4144_int;
		var_4132_object = var_4145_object;
		var_4133_object = var_4146_object;
		var_4134_object = var_4147_object;
		func_726(14, var_4144_int, var_4145_object, var_4146_object, var_4147_object);
		object var_4148_object;
		var_4135_object = var_4148_object;
		func_311(var_4148_object, 2);
		func_876(14, false, 5);
		func_938(14, true, 5);
	}
	func_785(14, false);
	int var_4159_int; int var_4160_int;
	var_4130_int = var_4159_int;
	var_4131_int = var_4160_int;
	func_3477(14, var_4159_int, var_4160_int);
}


// @pe
void func_12361(bool var_5721_bool)
{
	int var_5724_int;
	func_138(var_5724_int, "d6MariaVisit");
	if(var_5724_int == 1)
		var_5721_bool = true;
	var_5721_bool = false;
}


// @pe
void func_6219(int var_3965_int, int var_3966_int, object var_3967_object, object var_3968_object, object var_3969_object, object var_3970_object)
{
	if(var_3966_int == 0) {
		func_802(9, false);
		func_819(9, false, 1);
		int var_3979_int; object var_3980_object; object var_3981_object; object var_3982_object;
		var_3965_int = var_3979_int;
		var_3967_object = var_3980_object;
		var_3968_object = var_3981_object;
		var_3969_object = var_3982_object;
		func_726(9, var_3979_int, var_3980_object, var_3981_object, var_3982_object);
		object var_3983_object;
		var_3970_object = var_3983_object;
		func_311(var_3983_object, 2);
		func_876(9, false, 7);
		func_938(9, true, 7);
	}
	func_785(9, false);
	int var_3994_int; int var_3995_int;
	var_3965_int = var_3994_int;
	var_3966_int = var_3995_int;
	func_3665(9, var_3994_int, var_3995_int);
}


// @pe
void func_10318(int var_5659_int, float var_5660_float)
{
	float var_5664_float;
	var_5660_float = var_5664_float;
	int var_5661_int;
	func_12495(var_5661_int, 515382, 515381, var_5664_float);
	var_5661_int = var_5659_int;
}


void func_80(object var_100_object)
{
	object var_102_object;
	@FindActor(var_102_object, "player");
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_12373(bool var_5705_bool)
{
	int var_5708_int;
	func_138(var_5708_int, "d6BigVladVisit");
	if(var_5708_int == 1)
		var_5705_bool = true;
	var_5705_bool = false;
}


void func_8278(int var_4157_int, int var_4158_int)
{
	bool var_4163_bool; int var_4164_int; int var_4165_int;
	if(var_4158_int == 0) {
		var_4163_bool = false;
		if(var_4157_int == 2) {
			int var_4170_int;
			func_12520(var_4170_int);
			if(var_4170_int == 0) {
				@GetVariable("d1q01", var_4164_int);
				if(var_4164_int != 1000) {
					var_4163_bool = true;
					@UnlockAchievement("ACHIEVEMENT_UP");
					@GameOver("gameover_fail.xml");
				}
			} else {
						int var_4286_int;
						func_12520(var_4286_int);
						if(!(var_4286_int == 1)) goto Label_8325;
						@GetVariable("b1q01", var_4165_int);
						if(!(var_4165_int != 1000)) goto Label_8325;
						var_4163_bool = true;
						@UnlockAchievement("ACHIEVEMENT_UP");
						@GameOver("gameover_fail.xml");
			}
		}
	Label_8325:
		if(!var_4163_bool) { //@nz
			int var_4179_int;
			func_12520(var_4179_int);
			if(var_4179_int == 0) {
				if(var_4157_int == 2) {
					@UnlockAchievement("ACHIEVEMENT_BACH_1");
				} else {
						if(var_4157_int == 3)
							@UnlockAchievement("ACHIEVEMENT_BACH_2");

					for(;;) {
						} else {
					if(var_4157_int == 4) {
						@UnlockAchievement("ACHIEVEMENT_BACH_3");
					} else if(var_4157_int == 5) {
						@UnlockAchievement("ACHIEVEMENT_BACH_4");
					} else if(var_4157_int == 6) {
						@UnlockAchievement("ACHIEVEMENT_BACH_5");
					} else if(var_4157_int == 7) {
						@UnlockAchievement("ACHIEVEMENT_BACH_6");
					} else if(var_4157_int == 8) {
						@UnlockAchievement("ACHIEVEMENT_BACH_7");
					} else if(var_4157_int == 9) {
						@UnlockAchievement("ACHIEVEMENT_BACH_8");
					} else if(var_4157_int == 10) {
						@UnlockAchievement("ACHIEVEMENT_BACH_9");
					} else if(var_4157_int == 11) {
						@UnlockAchievement("ACHIEVEMENT_BACH_10");
					} else if(var_4157_int == 12) {
						@UnlockAchievement("ACHIEVEMENT_BACH_11");
					}
			}
				int var_4217_int;
				func_12520(var_4217_int);
				if(var_4217_int == 1) {
					if(var_4157_int == 2) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_1");
					} else if(var_4157_int == 3) {
							@UnlockAchievement("ACHIEVEMENT_BURAH_2");
					}

					for(;;) {
						goto Label_8569;

					}

					if(var_4157_int == 4) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_3");
					} else if(var_4157_int == 5) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_4");
					} else if(var_4157_int == 6) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_5");
					} else if(var_4157_int == 7) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_6");
					} else if(var_4157_int == 8) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_7");
					} else if(var_4157_int == 9) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_8");
					} else if(var_4157_int == 10) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_9");
					} else if(var_4157_int == 11) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_10");
					} else if(var_4157_int == 12) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_11");
					}
				}
				if(var_4157_int == 2) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_1");
				} else if(var_4157_int == 3) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_2");
				} else if(var_4157_int == 4) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_3");
				} else if(var_4157_int == 5) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_4");
				} else if(var_4157_int == 6) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_5");
				} else if(var_4157_int == 7) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_6");
				} else if(var_4157_int == 8) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_7");
				} else if(var_4157_int == 9) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_8");
				} else if(var_4157_int == 10) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_9");
				} else if(var_4157_int == 11) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_10");
				} else if(var_4157_int == 12) {
					@UnlockAchievement("ACHIEVEMENT_CLARA_11");

					}
				}
		}
		Label_8569:
			@SendWorldWndMessage(101);
			@SetVariable("c_iWM_RealDayChange", var_4157_int);
	}
		return 6;

	}
	
}


void func_87(bool var_586_bool, object var_587_object, string var_588_string)
{
	var_593_bool = IsFuncExist(var_587_object, "HasProperty", 2);
	if(!var_593_bool) { //@nz
		var_586_bool = false;
		return 2;
	}
	bool var_590_bool;
	var_587_object->HasProperty(var_588_string, var_590_bool);
	var_590_bool = var_586_bool;
}


// @pe
void func_10327(int var_5753_int, float var_5754_float)
{
	float var_5758_float;
	var_5754_float = var_5758_float;
	int var_5755_int;
	func_12495(var_5755_int, 515433, 515432, var_5758_float);
	var_5755_int = var_5753_int;
}


void func_1116(bool var_792_bool, int var_793_int, int var_794_int)
{
	int var_797_int;
	func_12520(var_797_int);
	int var_796_int;
	var_797_int = var_796_int;
	if(var_796_int == 1) {
		bool var_803_bool = false;
		if(var_793_int == 0) {
			if(var_794_int < 21)
				var_803_bool = true;
		}
		if(var_803_bool != 0) {
			var_792_bool = true;
			return 2;
		}
	} else {
		if(!(var_796_int == 2)) goto Label_1145;
		if(!(var_793_int == 5)) goto Label_1145;
		var_792_bool = true;
		return 2;
	}
Label_1145:
	var_792_bool = false;
	
}


void func_14430(int var_4915_int)
{
	int var_4917_int;
	@GetVariable(("vol_" + var_4915_int), var_4917_int);
	@SetVariable(("vol_" + var_4915_int), (var_4917_int | 8));
}


// @pe
void func_10336(int var_5395_int, float var_5396_float)
{
	float var_5400_float;
	var_5396_float = var_5400_float;
	int var_5397_int;
	func_12495(var_5397_int, 522206, 522205, var_5400_float);
	var_5397_int = var_5395_int;
}


// @pe
void func_12385(bool var_5651_bool)
{
	int var_5654_int;
	func_138(var_5654_int, "d6ViktorVisit");
	if(var_5654_int == 1)
		var_5651_bool = true;
	var_5651_bool = false;
}


void func_99(bool var_4826_bool, object var_4827_object, string var_4828_string, float var_4829_float, float var_4830_float, float var_4831_float)
{
	object var_4835_object;
	var_4827_object = var_4835_object;
	string var_4836_string;
	var_4828_string = var_4836_string;
	bool var_4834_bool;
	func_87(var_4834_bool, var_4835_object, var_4836_string);
	if(!var_4834_bool) //@nz
		var_4826_bool = false;
	float var_4833_float;
	var_4827_object->GetProperty(var_4828_string, var_4833_float);
	float var_4838_float; float var_4840_float; float var_4841_float;
	var_4830_float = var_4840_float;
	var_4831_float = var_4841_float;
	func_121(var_4838_float, (var_4833_float + var_4829_float), var_4840_float, var_4841_float);
	var_4827_object->SetProperty(var_4828_string, var_4838_float);
	var_4826_bool = true;
}


// @pe
void func_10345(int var_5489_int, float var_5490_float)
{
	float var_5494_float;
	var_5490_float = var_5494_float;
	int var_5491_int;
	func_12495(var_5491_int, 515439, 515438, var_5494_float);
	var_5491_int = var_5489_int;
}


void func_14442(void)
{
	object var_4895_object; int var_4898_int;
	@CreateIntVector(var_4895_object);
	object var_4899_object;
	var_4895_object = var_4899_object;
	func_14397(var_4899_object, false, -1);
	int var_4896_int;
	var_4895_object->size(var_4896_int);
	int var_4897_int = 0;
	
	while(var_4897_int < var_4896_int) {
		var_4895_object->get(var_4898_int, var_4897_int);
		int var_4915_int;
		var_4898_int = var_4915_int;
		func_14430(var_4915_int);
		var_4897_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


// @pe
void func_12397(bool var_5745_bool)
{
	int var_5748_int;
	func_138(var_5748_int, "d7AglajaVisit");
	if(var_5748_int == 1)
		var_5745_bool = true;
	var_5745_bool = false;
}


// @pe
void func_10354(int var_5737_int, float var_5738_float)
{
	float var_5742_float;
	var_5738_float = var_5742_float;
	int var_5739_int;
	func_12495(var_5739_int, 515431, 515430, var_5742_float);
	var_5739_int = var_5737_int;
}


void func_4216(int var_3429_int, int var_3430_int, int var_3431_int)
{
	int var_3436_int; int var_3437_int; int var_3438_int; int var_3439_int;
	bool var_3440_bool = false;
	if(var_3431_int > 8) {
		if(var_3431_int < 21)
			var_3440_bool = true;
	}
	if(var_3440_bool != 0) {
		int var_3445_int;
		var_3429_int = var_3445_int;
		func_509(var_3445_int, "pers_rat", "rat.xml", 4);
		int var_3449_int;
		var_3429_int = var_3449_int;
		func_509(var_3449_int, "pers_alkash", "alkash.xml", 2);
		int var_3453_int;
		var_3429_int = var_3453_int;
		func_509(var_3453_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3458_float; int var_3459_int;
		func_1171(var_3458_float, var_3459_int);
		if((2 * var_3458_float) != 0) {
			int var_3461_int; int var_3464_int;
			var_3429_int = var_3461_int;
			var_3436_int = var_3464_int;
			func_509(var_3461_int, "pers_grabitel", "grabitel.xml", var_3464_int);
		}
		if((var_3459_int + 1) >= 2) {
			int var_3469_int;
			var_3429_int = var_3469_int;
			func_509(var_3469_int, "pers_patrool", "patrol.xml", 2);
			bool var_3473_bool; int var_3474_int;
			var_3430_int = var_3474_int;
			func_1378(var_3473_bool, var_3474_int);
			if(var_3473_bool != 0) {
				int var_3475_int;
				var_3429_int = var_3475_int;
				func_509(var_3475_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3480_float; int var_3481_int;
		var_3430_int = var_3481_int;
		func_1261(var_3480_float, var_3481_int);
		if((1 * var_3480_float) != 0) {
			int var_3483_int; int var_3486_int;
			var_3429_int = var_3483_int;
			var_3437_int = var_3486_int;
			func_509(var_3483_int, "pers_bomber", "bomber.xml", var_3486_int);
		}
	} else {
		int var_3493_int;
		var_3429_int = var_3493_int;
		func_509(var_3493_int, "pers_rat", "rat.xml", 8);
		int var_3497_int;
		var_3429_int = var_3497_int;
		func_509(var_3497_int, "pers_alkash", "alkash.xml", 1);
		int var_3501_int;
		var_3429_int = var_3501_int;
		func_509(var_3501_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3506_float; int var_3507_int;
		func_1171(var_3506_float, var_3507_int);
		if((3 * var_3506_float) != 0) {
			int var_3509_int; int var_3512_int;
			var_3429_int = var_3509_int;
			var_3438_int = var_3512_int;
			func_509(var_3509_int, "pers_grabitel", "grabitel.xml", var_3512_int);
		}
		if((var_3507_int + 1) >= 2) {
			int var_3517_int;
			var_3429_int = var_3517_int;
			func_509(var_3517_int, "pers_patrool", "patrol.xml", 1);
			bool var_3521_bool; int var_3522_int;
			var_3430_int = var_3522_int;
			func_1378(var_3521_bool, var_3522_int);
			if(var_3521_bool != 0) {
				int var_3523_int;
				var_3429_int = var_3523_int;
				func_509(var_3523_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3528_float; int var_3529_int;
		var_3430_int = var_3529_int;
		func_1261(var_3528_float, var_3529_int);
		if((1 * var_3528_float) == 0) goto Label_4378;
		int var_3531_int; int var_3534_int;
		var_3429_int = var_3531_int;
		var_3439_int = var_3534_int;
		func_509(var_3531_int, "pers_bomber", "bomber.xml", var_3534_int);
	}
Label_4378:
	bool var_3487_bool; int var_3488_int;
	var_3430_int = var_3488_int;
	func_1378(var_3487_bool, var_3488_int);
	if(var_3487_bool != 0) {
		int var_3489_int;
		var_3429_int = var_3489_int;
		func_509(var_3489_int, "pers_sanitar", "sanitar.xml", 2);
	}
	
}


// @pe
void func_12409(bool var_5497_bool)
{
	int var_5500_int;
	func_138(var_5500_int, "d11AglajaVisit");
	if(var_5500_int == 1)
		var_5497_bool = true;
	var_5497_bool = false;
}


// @pe
void func_121(float var_4838_float, float var_4839_float, float var_4840_float, float var_4841_float)
{
	if(var_4839_float < var_4840_float) {
		var_4840_float = var_4838_float;
		return 0;
	}
	if(var_4839_float > var_4841_float) {
		var_4841_float = var_4838_float;
		return 0;
	}
	var_4839_float = var_4838_float;
}


// @pe
void func_10363(int var_4988_int, float var_4989_float)
{
	float var_4993_float;
	var_4989_float = var_4993_float;
	int var_4990_int;
	func_12495(var_4990_int, 536365, 536364, var_4993_float);
	var_4990_int = var_4988_int;
}


// @pe
void func_1147(float var_769_float, int var_770_int)
{
	if((var_770_int + 1) == 7) {
		var_769_float = 2;
		return 0;
	}
	if((var_770_int + 1) == 8) {
		var_769_float = 0;
		return 0;
	}
	if((var_770_int + 1) == 1) {
		var_769_float = 0;
		return 0;
	}
	var_769_float = 1;
}


// @pe
void func_7292(object var_314_object)
{
	var_314_object->add("lc_house3_05_i2");
	var_314_object->add("lc_house3_05");
	var_314_object->add("lc_house3_06_i2");
	var_314_object->add("lc_house3_06");
	var_314_object->add("lc_House6_06");
	var_314_object->add("lc_house3_04_i2");
	var_314_object->add("lc_house3_04");
	var_314_object->add("house3_plus_03_i2");
}


// @pe
void func_5244(int var_1297_int, int var_1298_int, object var_1299_object, object var_1300_object, object var_1301_object, object var_1302_object)
{
	if(var_1298_int == 0) {
		func_802(4, false);
		func_819(4, false, 1);
		int var_1310_int; int var_1311_int; object var_1312_object; object var_1313_object; object var_1314_object;
		var_1310_int = 4;
		var_1297_int = var_1311_int;
		var_1299_object = var_1312_object;
		var_1300_object = var_1313_object;
		var_1301_object = var_1314_object;
		func_628(var_1311_int, var_1312_object, var_1313_object, var_1314_object);
		object var_1315_object;
		var_1302_object = var_1315_object;
		func_311(var_1315_object, 0);
		func_876(4, false, 4);
		func_938(4, false, 4);
	}
	int var_1324_int;
	var_1298_int = var_1324_int;
	func_1026(4, var_1324_int);
	int var_1338_int; int var_1339_int;
	var_1297_int = var_1338_int;
	var_1298_int = var_1339_int;
	func_1903(4, var_1338_int, var_1339_int);
}


// @pe
void func_6271(object var_227_object)
{
	var_227_object->add("r4_house_2_02");
	var_227_object->add("r4_house3_03_i2");
	var_227_object->add("r4_house3_03");
	var_227_object->add("r4_house4_02_i2");
	var_227_object->add("r4_house4_02");
	var_227_object->add("r4_house4_01_i2");
	var_227_object->add("r4_house4_01");
	var_227_object->add("r4_house3_02_i2");
	var_227_object->add("r4_house3_02");
	var_227_object->add("r4_house_2_01");
	var_227_object->add("r4_house3_01_i2");
	var_227_object->add("r4_house3_01");
	var_227_object->add("r4_house7_01");
	var_227_object->add("r4_House6_01");
	var_227_object->add("r4_house_2_03");
	var_227_object->add("r4_House6_03");
	var_227_object->add("r4_house_2_04");
}


void func_11394(void)
{
	object var_6226_object;
	func_12503(var_6226_object);
	object var_6224_object;
	var_6226_object = var_6224_object;
	object var_6225_object;
	var_6224_object->FindMark(var_6225_object, "d5q01AlexandrGotoKaterina");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q01BigVladGotoAlexandr");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q01BigVladGotoLara");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q01BurahMeeting");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q01GrifWantsMoney");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q01PatrolGotoGrif");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q01RubinGotoBigVlad");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q01RubinGotoBigVladSelf");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q02AnnaGotoGorbun");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q02AnnaGotoGorbunSelf");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q02AnnaGotoKabak");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q02GorbunFindTheDaughter");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q02NudeMeeting");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q03BirdmaskBringMoneySelf");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q03BirdmaskGotoMladVlad");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q03BirdmaskGotoViktor");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	var_6224_object->FindMark(var_6225_object, "d5q03SavePrisoners");
	if(var_6225_object != 0)
		var_6225_object->Remove();
	bool var_6261_bool;
	func_12478(var_6261_bool, 139);
	bool var_6263_bool;
	func_12478(var_6263_bool, 148);
	bool var_6265_bool;
	func_12478(var_6265_bool, 154);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_14467(void)
{
	func_14442();
}


void func_132(object var_41_object)
{
	object var_43_object;
	@CreateObjectVector(var_43_object);
	var_43_object = var_41_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_12421(bool var_5195_bool)
{
	var_5195_bool = false;
}


// @pe
void func_10372(int var_5160_int, float var_5161_float)
{
	float var_5165_float;
	var_5161_float = var_5165_float;
	int var_5162_int;
	func_12495(var_5162_int, 522208, 522207, var_5165_float);
	var_5162_int = var_5160_int;
}


void func_14471(void)
{
}


// @pe
void func_14472(bool var_144_bool, int var_145_int, int var_146_int)
{
	if(var_145_int == 6) {
		var_144_bool = false;
		return 0;
	}
	if(var_146_int == 4) {
		if(var_145_int == 15) {
			var_144_bool = false;
			return 0;
		}
		if(var_145_int == 9) {
			var_144_bool = false;
			return 0;
		}
	} else if(var_146_int == 5) {
			if(var_145_int == 15) {
				var_144_bool = false;
				return 0;
			}
	}
Label_14509:
	for(;;) {
		var_144_bool = true;
		return 0;

	}
	
	if(!(var_146_int == 6)) goto Label_14509;
	if(!(var_145_int == 15)) goto Label_14509;
	var_144_bool = false;
}


void func_12424(void)
{
	object var_4756_object;
	@CreateDiaryEntry(var_4756_object, 30, 0, 504079);
	bool var_4760_bool; object var_4761_object;
	var_4756_object = var_4761_object;
	func_12450(var_4760_bool, var_4761_object, -1);
}
EMIT "Stack[-1] = 0";


void func_138(int var_4665_int, string var_4666_string)
{
	int var_4668_int;
	@GetVariable(var_4666_string, var_4668_int);
	var_4668_int = var_4665_int;
}


// @pe
void func_10381(int var_5018_int, float var_5019_float)
{
	float var_5023_float;
	var_5019_float = var_5023_float;
	int var_5020_int;
	func_12495(var_5020_int, 538406, 538405, var_5023_float);
	var_5020_int = var_5018_int;
}


void func_143(object var_4823_object, string var_4824_string)
{
	object var_4827_object;
	@GetMainOutdoorScene(var_4827_object);
	object var_4828_object;
	@AddBlankActor(var_4828_object, var_4827_object, var_4824_string, (var_4824_string + ".bin"));
	var_4828_object = var_4823_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1171(float var_3278_float, int var_3279_int)
{
	if((var_3279_int + 1) == 1) {
		var_3278_float = 0;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	if((var_3279_int + 1) == 2) {
		var_3278_float = 0;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	if((var_3279_int + 1) == 3) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	if((var_3279_int + 1) == 4) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	if((var_3279_int + 1) == 5) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	if((var_3279_int + 1) == 6) {
		var_3278_float = 2;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	if((var_3279_int + 1) == 7) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	if((var_3279_int + 1) == 8) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	if((var_3279_int + 1) == 9) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	if((var_3279_int + 1) == 10) {
		var_3278_float = 1;
		return 0;
	EMIT "GOTO 0x4eb";
	}
	if((var_3279_int + 1) == 11) {
		var_3278_float = 1;
		return 0;
	}
	var_3278_float = 0;
}


void func_12437(object var_4769_object)
{
	object var_4771_object;
	@GetDiaryRoot(var_4771_object);
	if(!var_4771_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_4769_object = false;
	}
	var_4771_object = var_4769_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_10390(int var_5325_int, float var_5326_float)
{
	float var_5330_float;
	var_5326_float = var_5330_float;
	int var_5327_int;
	func_12495(var_5327_int, 533323, 533322, var_5330_float);
	var_5327_int = var_5325_int;
}


// @pe
void func_7318(int var_1948_int, int var_1949_int, object var_1950_object, object var_1951_object, object var_1952_object, object var_1953_object)
{
	if(var_1949_int == 0) {
		func_802(15, false);
		func_819(15, false, 1);
		int var_1961_int; int var_1962_int; object var_1963_object; object var_1964_object; object var_1965_object;
		var_1961_int = 15;
		var_1948_int = var_1962_int;
		var_1950_object = var_1963_object;
		var_1951_object = var_1964_object;
		var_1952_object = var_1965_object;
		func_628(var_1962_int, var_1963_object, var_1964_object, var_1965_object);
		object var_1966_object;
		var_1953_object = var_1966_object;
		func_311(var_1966_object, 0);
		func_876(15, false, 5);
		func_938(15, false, 5);
	}
	int var_1975_int;
	var_1949_int = var_1975_int;
	func_1093(15, var_1975_int);
	int var_1977_int; int var_1978_int;
	var_1948_int = var_1977_int;
	var_1949_int = var_1978_int;
	func_1382(15, var_1977_int, var_1978_int);
}


void func_154(object var_6068_object, string var_6069_string)
{
	object var_6072_object;
	@GetMainOutdoorScene(var_6072_object);
	object var_6073_object;
	@AddBlankActorFromXml(var_6073_object, var_6072_object, var_6069_string, (var_6069_string + ".xml"));
	var_6073_object = var_6068_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10399(int var_4935_int, float var_4936_float)
{
	float var_4940_float;
	var_4936_float = var_4940_float;
	int var_4937_int;
	func_12495(var_4937_int, 538721, 538720, var_4940_float);
	var_4937_int = var_4935_int;
}


void func_12450(bool var_4760_bool, object var_4761_object, int var_4762_int)
{
	object var_4769_object;
	func_12437(var_4769_object);
	object var_4766_object;
	var_4769_object = var_4766_object;
	object var_4767_object;
	var_4766_object->Find(var_4762_int, var_4767_object);
	if(!var_4767_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_4762_int);
		var_4760_bool = false;
	}
	var_4767_object->AddChild(var_4761_object);
	@SendWorldWndMessage(7);
	int var_4768_int;
	var_4761_object->GetCategory(var_4768_int);
	@SetDiarySection(var_4768_int);
	var_4760_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2212(int var_751_int, int var_752_int, int var_753_int)
{
	int var_755_int;
	if((var_752_int + 1) == 12)
		return 2;
	bool var_760_bool = false;
	bool var_761_bool = true;
	var_763_bool = var_753_int < 7;
	if(var_763_bool != 1) {
		var_765_bool = var_753_int > 21;
		if(var_765_bool != 1)
			var_761_bool = false;
	}
	if(var_761_bool != 0) {
		if(var_752_int != 0)
			var_760_bool = true;
	}
	if(var_760_bool != 0) {
		float var_769_float; int var_770_int;
		var_752_int = var_770_int;
		func_1147(var_769_float, var_770_int);
		if((1 * var_769_float) != 0) {
			int var_784_int; int var_787_int;
			var_751_int = var_784_int;
			var_755_int = var_787_int;
			func_509(var_784_int, "pers_grabitel", "grabitel.xml", var_787_int);
		}
	}
	bool var_792_bool; int var_793_int; int var_794_int;
	var_752_int = var_793_int;
	var_753_int = var_794_int;
	func_1116(var_792_bool, var_793_int, var_794_int);
	if(var_792_bool != 0) {
		int var_812_int;
		var_751_int = var_812_int;
		func_509(var_812_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_816_int;
		var_751_int = var_816_int;
		func_509(var_816_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_820_int;
		var_751_int = var_820_int;
		func_509(var_820_int, "pers_worker", "worker_attacker.xml", 1);
		int var_824_int;
		var_751_int = var_824_int;
		func_509(var_824_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_828_int;
		var_751_int = var_828_int;
		func_509(var_828_int, "pers_boy", "boy.xml", 1);
		int var_832_int;
		var_751_int = var_832_int;
		func_509(var_832_int, "pers_alkash", "alkash.xml", 1);
		int var_836_int;
		var_751_int = var_836_int;
		func_509(var_836_int, "pers_girl", "girl.xml", 1);
		int var_840_int;
		var_751_int = var_840_int;
		func_509(var_840_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_844_bool = false;
			if(var_753_int > 8) {
				if(var_753_int < 21)
					var_844_bool = true;
			}
			if(var_844_bool == 0) goto Label_2367;
			int var_849_int;
			var_751_int = var_849_int;
			func_509(var_849_int, "pers_boy", "boy.xml", 1);
			int var_853_int;
			var_751_int = var_853_int;
			func_509(var_853_int, "pers_alkash", "alkash.xml", 1);
			int var_857_int;
			var_751_int = var_857_int;
			func_509(var_857_int, "pers_girl", "girl.xml", 1);
			int var_861_int;
			var_751_int = var_861_int;
			func_509(var_861_int, "pers_girl", "girl2.xml", 1);
			int var_865_int;
			var_751_int = var_865_int;
			func_509(var_865_int, "pers_worker", "worker.xml", 2);
			int var_869_int;
			var_751_int = var_869_int;
			func_509(var_869_int, "pers_worker", "worker2.xml", 2);
	}
	for(;;) {
		return 2;

	}
	
Label_2367:
	int var_873_int;
	var_751_int = var_873_int;
	func_509(var_873_int, "pers_alkash", "alkash.xml", 1);
	int var_877_int;
	var_751_int = var_877_int;
	func_509(var_877_int, "pers_worker", "worker.xml", 1);
	int var_881_int;
	var_751_int = var_881_int;
	func_509(var_881_int, "pers_worker", "worker2.xml", 1);
}


void func_165(object var_330_object, object var_331_object, string var_332_string, string var_333_string, string var_334_string)
{
	bool var_340_bool; cvector var_341_cvector; cvector var_342_cvector;
	var_331_object->GetLocator(var_332_string, var_340_bool, var_341_cvector, var_342_cvector);
	if(!var_340_bool) //@nz
		@Trace(("Locator " + var_332_string) + " doesn't exist");
	else
		var_331_object->AddStationaryActor(Obj(), var_341_cvector, var_342_cvector, var_333_string, var_334_string);
	object var_343_object = var_330_object;
	
}
EMIT "Stack[-1] = 0";


void func_9382(int var_1989_int, int var_1990_int, int var_1991_int)
{
	var_2000_object = GlobalVars[8];
	object var_1996_object;
	var_2000_object->get(var_1996_object, var_1989_int);
	var_2001_object = GlobalVars[9];
	object var_1997_object;
	var_2001_object->get(var_1997_object, var_1989_int);
	var_2002_object = GlobalVars[10];
	object var_1998_object;
	var_2002_object->get(var_1998_object, var_1989_int);
	var_2003_object = GlobalVars[13];
	object var_1999_object;
	var_2003_object->get(var_1999_object, var_1989_int);
	if(var_1989_int == 0) {
		int var_2006_int; int var_2007_int; object var_2008_object; object var_2009_object; object var_2010_object; object var_2011_object;
		var_1990_int = var_2006_int;
		var_1991_int = var_2007_int;
		var_1996_object = var_2008_object;
		var_1997_object = var_2009_object;
		var_1998_object = var_2010_object;
		var_1999_object = var_2011_object;
		func_4445(var_2006_int, var_2007_int, var_2008_object, var_2009_object, var_2010_object, var_2011_object);
	} else if(var_1989_int == 1) {
			int var_2276_int; int var_2277_int; object var_2278_object; object var_2279_object; object var_2280_object; object var_2281_object;
			var_1990_int = var_2276_int;
			var_1991_int = var_2277_int;
			var_1996_object = var_2278_object;
			var_1997_object = var_2279_object;
			var_1998_object = var_2280_object;
			var_1999_object = var_2281_object;
			func_4642(var_2276_int, var_2277_int, var_2278_object, var_2279_object, var_2280_object, var_2281_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_1989_int == 2) {
		int var_2408_int; int var_2409_int; object var_2410_object; object var_2411_object; object var_2412_object; object var_2413_object;
		var_1990_int = var_2408_int;
		var_1991_int = var_2409_int;
		var_1996_object = var_2410_object;
		var_1997_object = var_2411_object;
		var_1998_object = var_2412_object;
		var_1999_object = var_2413_object;
		func_4848(var_2408_int, var_2409_int, var_2410_object, var_2411_object, var_2412_object, var_2413_object);
	} else if(var_1989_int == 3) {
		int var_2554_int; int var_2555_int; object var_2556_object; object var_2557_object; object var_2558_object; object var_2559_object;
		var_1990_int = var_2554_int;
		var_1991_int = var_2555_int;
		var_1996_object = var_2556_object;
		var_1997_object = var_2557_object;
		var_1998_object = var_2558_object;
		var_1999_object = var_2559_object;
		func_5078(var_2554_int, var_2555_int, var_2556_object, var_2557_object, var_2558_object, var_2559_object);
	} else if(var_1989_int == 4) {
		int var_2587_int; int var_2588_int; object var_2589_object; object var_2590_object; object var_2591_object; object var_2592_object;
		var_1990_int = var_2587_int;
		var_1991_int = var_2588_int;
		var_1996_object = var_2589_object;
		var_1997_object = var_2590_object;
		var_1998_object = var_2591_object;
		var_1999_object = var_2592_object;
		func_5296(var_2587_int, var_2588_int, var_2589_object, var_2590_object, var_2591_object, var_2592_object);
	} else if(var_1989_int == 5) {
		int var_2620_int; int var_2621_int; object var_2622_object; object var_2623_object; object var_2624_object; object var_2625_object;
		var_1990_int = var_2620_int;
		var_1991_int = var_2621_int;
		var_1996_object = var_2622_object;
		var_1997_object = var_2623_object;
		var_1998_object = var_2624_object;
		var_1999_object = var_2625_object;
		func_5541(var_2620_int, var_2621_int, var_2622_object, var_2623_object, var_2624_object, var_2625_object);
	} else if(var_1989_int == 6) {
		int var_2653_int; int var_2654_int; object var_2655_object; object var_2656_object; object var_2657_object; object var_2658_object;
		var_1990_int = var_2653_int;
		var_1991_int = var_2654_int;
		var_1996_object = var_2655_object;
		var_1997_object = var_2656_object;
		var_1998_object = var_2657_object;
		var_1999_object = var_2658_object;
		func_5654();
	} else if(var_1989_int == 7) {
		int var_2663_int; int var_2664_int; object var_2665_object; object var_2666_object; object var_2667_object; object var_2668_object;
		var_1990_int = var_2663_int;
		var_1991_int = var_2664_int;
		var_1996_object = var_2665_object;
		var_1997_object = var_2666_object;
		var_1998_object = var_2667_object;
		var_1999_object = var_2668_object;
		func_5764(var_2663_int, var_2664_int, var_2665_object, var_2666_object, var_2667_object, var_2668_object);
	} else if(var_1989_int == 8) {
		int var_2802_int; int var_2803_int; object var_2804_object; object var_2805_object; object var_2806_object; object var_2807_object;
		var_1990_int = var_2802_int;
		var_1991_int = var_2803_int;
		var_1996_object = var_2804_object;
		var_1997_object = var_2805_object;
		var_1998_object = var_2806_object;
		var_1999_object = var_2807_object;
		func_5964(var_2802_int, var_2803_int, var_2804_object, var_2805_object, var_2806_object, var_2807_object);
	} else if(var_1989_int == 9) {
		int var_2835_int; int var_2836_int; object var_2837_object; object var_2838_object; object var_2839_object; object var_2840_object;
		var_1990_int = var_2835_int;
		var_1991_int = var_2836_int;
		var_1996_object = var_2837_object;
		var_1997_object = var_2838_object;
		var_1998_object = var_2839_object;
		var_1999_object = var_2840_object;
		func_6167(var_2835_int, var_2836_int, var_2837_object, var_2838_object, var_2839_object, var_2840_object);
	} else if(var_1989_int == 10) {
		int var_2868_int; int var_2869_int; object var_2870_object; object var_2871_object; object var_2872_object; object var_2873_object;
		var_1990_int = var_2868_int;
		var_1991_int = var_2869_int;
		var_1996_object = var_2870_object;
		var_1997_object = var_2871_object;
		var_1998_object = var_2872_object;
		var_1999_object = var_2873_object;
		func_6376(var_2868_int, var_2869_int, var_2870_object, var_2871_object, var_2872_object, var_2873_object);
	} else if(var_1989_int == 11) {
		int var_2901_int; int var_2902_int; object var_2903_object; object var_2904_object; object var_2905_object; object var_2906_object;
		var_1990_int = var_2901_int;
		var_1991_int = var_2902_int;
		var_1996_object = var_2903_object;
		var_1997_object = var_2904_object;
		var_1998_object = var_2905_object;
		var_1999_object = var_2906_object;
		func_6588(var_2901_int, var_2902_int, var_2903_object, var_2904_object, var_2905_object, var_2906_object);
	} else if(var_1989_int == 12) {
		int var_2934_int; int var_2935_int; object var_2936_object; object var_2937_object; object var_2938_object; object var_2939_object;
		var_1990_int = var_2934_int;
		var_1991_int = var_2935_int;
		var_1996_object = var_2936_object;
		var_1997_object = var_2937_object;
		var_1998_object = var_2938_object;
		var_1999_object = var_2939_object;
		func_6785(var_2934_int, var_2935_int, var_2936_object, var_2937_object, var_2938_object, var_2939_object);
	} else if(var_1989_int == 13) {
		int var_2967_int; int var_2968_int; object var_2969_object; object var_2970_object; object var_2971_object; object var_2972_object;
		var_1990_int = var_2967_int;
		var_1991_int = var_2968_int;
		var_1996_object = var_2969_object;
		var_1997_object = var_2970_object;
		var_1998_object = var_2971_object;
		var_1999_object = var_2972_object;
		func_6988(var_2967_int, var_2968_int, var_2969_object, var_2970_object, var_2971_object, var_2972_object);
	} else if(var_1989_int == 14) {
		int var_3000_int; int var_3001_int; object var_3002_object; object var_3003_object; object var_3004_object; object var_3005_object;
		var_1990_int = var_3000_int;
		var_1991_int = var_3001_int;
		var_1996_object = var_3002_object;
		var_1997_object = var_3003_object;
		var_1998_object = var_3004_object;
		var_1999_object = var_3005_object;
		func_7188(var_3000_int, var_3001_int, var_3002_object, var_3003_object, var_3004_object, var_3005_object);
	} else if(var_1989_int == 15) {
		int var_3139_int; int var_3140_int; object var_3141_object; object var_3142_object; object var_3143_object; object var_3144_object;
		var_1990_int = var_3139_int;
		var_1991_int = var_3140_int;
		var_1996_object = var_3141_object;
		var_1997_object = var_3142_object;
		var_1998_object = var_3143_object;
		var_1999_object = var_3144_object;
		func_7370(var_3139_int, var_3140_int, var_3141_object, var_3142_object, var_3143_object, var_3144_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_10408(int var_4972_int, float var_4973_float)
{
	float var_4977_float;
	var_4973_float = var_4977_float;
	int var_4974_int;
	func_12495(var_4974_int, 536369, 536368, var_4977_float);
	var_4974_int = var_4972_int;
}


void func_14511(int var_4627_int, int var_4628_int)
{
	object var_4632_object; object var_4633_object;
	@Trace((("Updating game " + var_4627_int) + " ") + var_4628_int);
	bool var_4639_bool = false;
	if(var_4627_int == 5) {
		if(var_4628_int == 0)
			var_4639_bool = true;
	}
	if(var_4639_bool != 0) {
		@FindActor(var_4632_object, "house7_03@door1");
		var_4632_object->SetProperty("lp", true);
		@FindActor(var_4632_object, "house7_03@door2");
		var_4632_object->SetProperty("lp", true);
		var_4632_object = null;
	} else {
		bool var_4650_bool = false;
		if(var_4627_int == 7) {
			if(var_4628_int == 0)
				var_4650_bool = true;
		}
		if(var_4650_bool == 0) goto Label_14562;
		@GetSceneByName(var_4633_object, "sobor");
		@Trigger(var_4633_object, "aglaja");
		var_4633_object = null;
	}
Label_14562:
	
}


// @pe
void func_5296(int var_2587_int, int var_2588_int, object var_2589_object, object var_2590_object, object var_2591_object, object var_2592_object)
{
	if(var_2588_int == 0) {
		func_802(4, true);
		func_819(4, true, 1);
		int var_2601_int; object var_2602_object; object var_2603_object; object var_2604_object;
		var_2587_int = var_2601_int;
		var_2589_object = var_2602_object;
		var_2590_object = var_2603_object;
		var_2591_object = var_2604_object;
		func_647(4, var_2601_int, var_2602_object, var_2603_object, var_2604_object);
		object var_2605_object;
		var_2592_object = var_2605_object;
		func_311(var_2605_object, 1);
		func_876(4, true, 4);
		func_938(4, false, 4);
	}
	func_785(4, false);
	int var_2616_int; int var_2617_int;
	var_2587_int = var_2616_int;
	var_2588_int = var_2617_int;
	func_2950(4, var_2616_int, var_2617_int);
}


// @pe
void func_10417(int var_5168_int, float var_5169_float)
{
	float var_5173_float;
	var_5169_float = var_5173_float;
	int var_5170_int;
	func_12495(var_5170_int, 522210, 522209, var_5173_float);
	var_5170_int = var_5168_int;
}


// @pe
void func_6324(int var_1638_int, int var_1639_int, object var_1640_object, object var_1641_object, object var_1642_object, object var_1643_object)
{
	if(var_1639_int == 0) {
		func_802(10, false);
		func_819(10, false, 1);
		int var_1651_int; int var_1652_int; object var_1653_object; object var_1654_object; object var_1655_object;
		var_1651_int = 10;
		var_1638_int = var_1652_int;
		var_1640_object = var_1653_object;
		var_1641_object = var_1654_object;
		var_1642_object = var_1655_object;
		func_628(var_1652_int, var_1653_object, var_1654_object, var_1655_object);
		object var_1656_object;
		var_1643_object = var_1656_object;
		func_311(var_1656_object, 0);
		func_876(10, false, 7);
		func_938(10, false, 7);
	}
	int var_1665_int;
	var_1639_int = var_1665_int;
	func_989(10, var_1665_int);
	int var_1667_int; int var_1668_int;
	var_1638_int = var_1667_int;
	var_1639_int = var_1668_int;
	func_1630(10, var_1667_int, var_1668_int);
}


void func_183(string var_4735_string, bool var_4736_bool)
{
	object var_4738_object;
	@FindActor(var_4738_object, var_4735_string);
	if(!var_4738_object) //@nz
		@Trace(("Door " + var_4735_string) + " not found");
	else
		var_4738_object->SetProperty("locked", var_4736_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_10426(int var_4782_int, float var_4783_float)
{
	float var_4787_float;
	var_4783_float = var_4787_float;
	int var_4784_int;
	func_12495(var_4784_int, 536371, 536370, var_4787_float);
	var_4784_int = var_4782_int;
}


void func_12478(bool var_5526_bool, int var_5527_int)
{
	object var_5532_object;
	func_12437(var_5532_object);
	object var_5530_object;
	var_5532_object = var_5530_object;
	object var_5531_object;
	var_5530_object->Find(var_5527_int, var_5531_object);
	if(!var_5531_object) //@nz
		var_5526_bool = false;
	var_5531_object->Remove();
	var_5526_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10435(int var_5481_int, float var_5482_float)
{
	float var_5486_float;
	var_5482_float = var_5486_float;
	int var_5483_int;
	func_12495(var_5483_int, 533585, 533584, var_5486_float);
	var_5483_int = var_5481_int;
}


// @pe
void func_200(bool var_4815_bool, object var_4816_object, float var_4817_float)
{
	if(!var_4816_object) { //@nz
		var_4815_bool = false;
		return 0;
	}
	if(var_4817_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_4817_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_4822_float;
		var_4817_float = var_4822_float;
		func_235(var_4822_float);
		bool var_4826_bool; object var_4827_object; float var_4829_float;
		var_4816_object = var_4827_object;
		var_4817_float = var_4829_float;
		func_99(var_4826_bool, var_4827_object, "reputation", var_4829_float, (float)0, (float)1);
		var_4815_bool = true;
		return 0;

	}
	
	var_4815_bool = false;
}


// @pe
void func_7370(int var_3139_int, int var_3140_int, object var_3141_object, object var_3142_object, object var_3143_object, object var_3144_object)
{
	if(var_3140_int == 0) {
		func_802(15, true);
		func_819(15, true, 1);
		int var_3153_int; object var_3154_object; object var_3155_object; object var_3156_object;
		var_3139_int = var_3153_int;
		var_3141_object = var_3154_object;
		var_3142_object = var_3155_object;
		var_3143_object = var_3156_object;
		func_647(15, var_3153_int, var_3154_object, var_3155_object, var_3156_object);
		object var_3157_object;
		var_3144_object = var_3157_object;
		func_311(var_3157_object, 1);
		func_876(15, true, 5);
		func_938(15, false, 5);
	}
	func_785(15, false);
	int var_3168_int; int var_3169_int;
	var_3139_int = var_3168_int;
	var_3140_int = var_3169_int;
	func_2590(15, var_3168_int, var_3169_int);
}


// @pe
void func_10444(int var_5152_int, float var_5153_float)
{
	float var_5157_float;
	var_5153_float = var_5157_float;
	int var_5154_int;
	func_12495(var_5154_int, 536367, 536366, var_5157_float);
	var_5154_int = var_5152_int;
}


void func_12495(int var_4816_int, int var_4817_int, int var_4818_int, float var_4819_float)
{
	int var_4821_int;
	@AddMessage(var_4817_int, var_4818_int, var_4819_float, var_4821_int);
	@SendWorldWndMessage(6);
	var_4821_int = var_4816_int;
}


// @pe
void func_10453(int var_4705_int, float var_4706_float)
{
	float var_4710_float;
	var_4706_float = var_4710_float;
	int var_4707_int;
	func_12495(var_4707_int, 538734, 538733, var_4710_float);
	var_4707_int = var_4705_int;
}


void func_12503(object var_4691_object)
{
	object var_4694_object; object var_4695_object;
	@GetMainOutdoorScene(var_4694_object);
	if(var_4694_object == null) {
		@Trace("Can't find main outdoor scene");
		var_4695_object = null;
		var_4695_object = var_4691_object;
	}
	var_4694_object->GetMap(var_4695_object);
	var_4695_object = var_4691_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10462(void)
{
	func_183("termitnik2@door1", true);
}


void func_14563(int var_23_int)
{
	int var_31_int; int var_32_int; int var_34_int; int var_35_int;
	@Trace("Disease update");
	int var_30_int = 0;
	if(var_23_int == 0) {
		var_30_int = 0;
	} else {
						if(var_23_int == 1)
							var_30_int = 0;
	}

	for(;;) {
		if((var_23_int + 1) != 12) {
			@Trace("Diseased regions : " + var_30_int);

			for(;;) {
				if(0 < 16) {
					bool var_47_bool; int var_48_int;
					var_31_int = var_48_int;
					func_436(var_47_bool, var_48_int);
					if(var_47_bool != 0) {
						int var_59_int;
						var_31_int = var_59_int;
						func_478(var_59_int);
					} else {
					bool var_72_bool; int var_73_int;
					var_31_int = var_73_int;
					func_466(var_72_bool, var_73_int);
					if(var_72_bool == 0) goto Label_14659;
					int var_81_int;
					var_31_int = var_81_int;
					func_418(var_81_int);
				}
				if(var_23_int == 2) {
					@Trace("Special diseased region: 5");
					func_448(5);
				} else {
					if(var_23_int == 3) {
						@Trace("Special diseased region: 3");
						func_448(3);
						@Trace("Special diseased region: 13");
						func_448(13);
		}

					for(;;) {
						if(!(0 < 16)) goto Label_14734;
						bool var_176_bool = true;
						bool var_177_bool; int var_178_int;
						var_35_int = var_178_int;
						func_436(var_177_bool, var_178_int);
						if(var_177_bool != 1) {
							bool var_179_bool; int var_180_int;
							var_35_int = var_180_int;
							func_466(var_179_bool, var_180_int);
							if(var_179_bool != 1)
								var_176_bool = false;
						}
						if(var_176_bool != 0) {
							int var_181_int;
							var_35_int = var_181_int;
							func_418(var_181_int);
						}
						var_35_int += 1;
					}

				}
				int var_108_int;
				func_349(var_108_int);
				var_108_int = var_32_int;
				if(var_32_int < var_30_int) {
					var_34_int = 0;

					for(;;) {
						if(!(var_34_int < (var_30_int - var_32_int))) goto Label_14708;
						func_367(var_23_int + 1);
						var_34_int += 1;
					}
				}
			Label_14708:
				} else {
			if(var_23_int == 2) {
				var_30_int = 1;
			} else if(var_23_int == 3) {
				var_30_int = 2;
			} else if(var_23_int == 4) {
				var_30_int = 3;
			} else if(var_23_int == 5) {
				var_30_int = 4;
			} else if(var_23_int == 6) {
				var_30_int = 5;
			} else if(var_23_int == 7) {
				var_30_int = 5;
			} else if(var_23_int == 8) {
				var_30_int = 6;
			} else if(var_23_int == 9) {
				var_30_int = 6;
			} else if(var_23_int == 10) {
				var_30_int = 7;
			} else if(var_23_int == 11) {
				var_30_int = 8;
				}
			}
		Label_14734:
			return 12;
			}
		Label_14659:
			var_31_int += 1;
		}

	}
	
}


// @pe
void func_5348(int var_3713_int, int var_3714_int, object var_3715_object, object var_3716_object, object var_3717_object, object var_3718_object)
{
	if(var_3714_int == 0) {
		func_802(4, false);
		func_819(4, false, 1);
		int var_3727_int; object var_3728_object; object var_3729_object; object var_3730_object;
		var_3713_int = var_3727_int;
		var_3715_object = var_3728_object;
		var_3716_object = var_3729_object;
		var_3717_object = var_3730_object;
		func_726(4, var_3727_int, var_3728_object, var_3729_object, var_3730_object);
		object var_3731_object;
		var_3718_object = var_3731_object;
		func_311(var_3731_object, 2);
		func_876(4, false, 4);
		func_938(4, true, 4);
	}
	func_785(4, false);
	int var_3742_int; int var_3743_int;
	var_3713_int = var_3742_int;
	var_3714_int = var_3743_int;
	func_3853(4, var_3742_int, var_3743_int);
}


// @pe
void func_10469(void)
{
	func_183("house_vlad@door2", true);
}


void func_12520(int var_797_int)
{
	int var_799_int;
	@GetVariable("branch", var_799_int);
	var_799_int = var_797_int;
}


// @pe
void func_6376(int var_2868_int, int var_2869_int, object var_2870_object, object var_2871_object, object var_2872_object, object var_2873_object)
{
	if(var_2869_int == 0) {
		func_802(10, true);
		func_819(10, true, 1);
		int var_2882_int; object var_2883_object; object var_2884_object; object var_2885_object;
		var_2868_int = var_2882_int;
		var_2870_object = var_2883_object;
		var_2871_object = var_2884_object;
		var_2872_object = var_2885_object;
		func_647(10, var_2882_int, var_2883_object, var_2884_object, var_2885_object);
		object var_2886_object;
		var_2873_object = var_2886_object;
		func_311(var_2886_object, 1);
		func_876(10, true, 7);
		func_938(10, false, 7);
	}
	func_785(10, false);
	int var_2897_int; int var_2898_int;
	var_2868_int = var_2897_int;
	var_2869_int = var_2898_int;
	func_2770(10, var_2897_int, var_2898_int);
}


void func_235(float var_4822_float)
{
	object var_4824_object;
	@CreateFloatVector(var_4824_object);
	var_4824_object->add(var_4822_float);
	@SendWorldWndMessage(16, var_4824_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10476(void)
{
	func_183("warehouse_rubin@door1", false);
}


// @pe
void func_1261(float var_2158_float, int var_2159_int)
{
	if((var_2159_int + 1) == 1) {
		var_2158_float = 0;
		return 0;
	EMIT "GOTO 0x545";
	}
	if((var_2159_int + 1) == 2) {
		var_2158_float = 0;
		return 0;
	EMIT "GOTO 0x545";
	}
	if((var_2159_int + 1) == 3) {
		var_2158_float = 0;
		return 0;
	EMIT "GOTO 0x545";
	}
	if((var_2159_int + 1) == 4) {
		var_2158_float = 0;
		return 0;
	EMIT "GOTO 0x545";
	}
	if((var_2159_int + 1) == 5) {
		var_2158_float = 0;
		return 0;
	EMIT "GOTO 0x545";
	}
	if((var_2159_int + 1) == 6) {
		var_2158_float = 2;
		return 0;
	EMIT "GOTO 0x545";
	}
	if((var_2159_int + 1) == 7) {
		var_2158_float = 1;
		return 0;
	EMIT "GOTO 0x545";
	}
	if((var_2159_int + 1) == 8) {
		var_2158_float = 1;
		return 0;
	EMIT "GOTO 0x545";
	}
	if((var_2159_int + 1) == 9) {
		var_2158_float = 1;
		return 0;
	EMIT "GOTO 0x545";
	}
	if((var_2159_int + 1) == 10) {
		var_2158_float = 1;
		return 0;
	EMIT "GOTO 0x545";
	}
	if((var_2159_int + 1) == 11) {
		var_2158_float = 1;
		return 0;
	}
	var_2158_float = 0;
}


void func_12526(bool var_4135_bool, int var_4136_int)
{
	int var_4143_int; int var_4144_int; int var_4145_int;
	bool var_4146_bool = false;
	if(var_4136_int > 42000) {
		if(var_4136_int < 42288)
			var_4146_bool = true;
	}
	if(var_4146_bool != 0) {
		var_4143_int = (var_4136_int - 42000) % 24;
		int var_4158_int;
		var_4143_int = var_4158_int;
		func_8278((((var_4136_int - 42000) / 24) + 1), var_4158_int);
		var_4135_bool = true;
		return 8;
	}
	bool var_4294_bool = false;
	if(var_4136_int > 40000) {
		if(var_4136_int < 40288)
			var_4294_bool = true;
	}
	if(var_4294_bool != 0) {
		var_4144_int = (var_4136_int - 40000) / 24;
		var_4145_int = (var_4136_int - 40000) % 24;
		int var_4306_int;
		var_4145_int = var_4306_int;
		func_8576((var_4144_int + 1), var_4306_int);
		int var_4628_int;
		var_4145_int = var_4628_int;
		func_14511((var_4144_int + 1), var_4628_int);
		var_4135_bool = true;
		return 8;
	}
	var_4135_bool = false;
}


void func_3310(int var_2304_int, int var_2305_int, int var_2306_int)
{
	int var_2309_int; int var_2310_int;
	bool var_2311_bool = false;
	if(var_2306_int > 8) {
		if(var_2306_int < 21)
			var_2311_bool = true;
	}
	if(var_2311_bool != 0) {
		int var_2316_int;
		var_2304_int = var_2316_int;
		func_509(var_2316_int, "pers_vaxxabit", "vaxxabit_d.xml", 7);
		int var_2320_int;
		var_2304_int = var_2320_int;
		func_509(var_2320_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 7);
		int var_2324_int;
		var_2304_int = var_2324_int;
		func_509(var_2324_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2328_int;
		var_2304_int = var_2328_int;
		func_535(var_2328_int, "fog", "fog.xml", 7);
		if(var_2305_int >= 5) {
			int var_2334_int;
			var_2304_int = var_2334_int;
			func_535(var_2334_int, "fog", "fog_hunter.xml", 3);
		}
		float var_2339_float; int var_2340_int;
		func_1261(var_2339_float, var_2340_int);
		if((2 * var_2339_float) != 0) {
			int var_2342_int; int var_2345_int;
			var_2304_int = var_2342_int;
			var_2309_int = var_2345_int;
			func_509(var_2342_int, "pers_bomber", "bomber.xml", var_2345_int);
		}
	} else {
		int var_2376_int;
		var_2304_int = var_2376_int;
		func_509(var_2376_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2380_int;
		var_2304_int = var_2380_int;
		func_509(var_2380_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2384_int;
		var_2304_int = var_2384_int;
		func_509(var_2384_int, "pers_rat_big", "rat_big.xml", 4);
		int var_2388_int;
		var_2304_int = var_2388_int;
		func_535(var_2388_int, "fog", "fog.xml", 7);
		if(var_2340_int >= 5) {
			int var_2394_int;
			var_2304_int = var_2394_int;
			func_535(var_2394_int, "fog", "fog_hunter.xml", 3);
		}
		float var_2399_float; int var_2400_int;
		var_2305_int = var_2400_int;
		func_1261(var_2399_float, var_2400_int);
		if((2 * var_2399_float) == 0) goto Label_3428;
		int var_2402_int; int var_2405_int;
		var_2304_int = var_2402_int;
		var_2310_int = var_2405_int;
		func_509(var_2402_int, "pers_bomber", "bomber.xml", var_2405_int);
	}
Label_3428:
	bool var_2346_bool; int var_2347_int;
	var_2305_int = var_2347_int;
	func_1378(var_2346_bool, var_2347_int);
	if(var_2346_bool != 0) {
		int var_2348_int;
		var_2304_int = var_2348_int;
		func_509(var_2348_int, "pers_sanitar", "sanitar.xml", 2);
	}
	int var_2352_int;
	var_2304_int = var_2352_int;
	func_522(var_2352_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2358_int;
	var_2304_int = var_2358_int;
	func_522(var_2358_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2364_int;
	var_2304_int = var_2364_int;
	func_522(var_2364_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2370_int;
	var_2304_int = var_2370_int;
	func_522(var_2370_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	
}


void func_10483(void)
{
	object var_6381_object;
	func_12503(var_6381_object);
	object var_6380_object;
	var_6381_object = var_6380_object;
	float var_6386_float;
	func_290(var_6386_float);
	var_6380_object->AddMark("d1KaterinaMapMark", "pt_map_katerina", 3, 508640, var_6386_float);
}
EMIT "Stack[-1] = 0";


void func_245(bool var_673_bool, string var_674_string, string var_675_string)
{
	object var_677_object;
	@FindActor(var_677_object, var_674_string);
	if(var_677_object == null)
		var_673_bool = false;
	@Trigger(var_677_object, var_675_string);
	var_673_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_7422(int var_4273_int, int var_4274_int, object var_4275_object, object var_4276_object, object var_4277_object, object var_4278_object)
{
	if(var_4274_int == 0) {
		func_802(15, false);
		func_819(15, false, 1);
		int var_4287_int; object var_4288_object; object var_4289_object; object var_4290_object;
		var_4273_int = var_4287_int;
		var_4275_object = var_4288_object;
		var_4276_object = var_4289_object;
		var_4277_object = var_4290_object;
		func_726(15, var_4287_int, var_4288_object, var_4289_object, var_4290_object);
		object var_4291_object;
		var_4278_object = var_4291_object;
		func_311(var_4291_object, 2);
		func_876(15, false, 5);
		func_938(15, true, 5);
	}
	func_785(15, false);
	int var_4302_int; int var_4303_int;
	var_4273_int = var_4302_int;
	var_4274_int = var_4303_int;
	func_3477(15, var_4302_int, var_4303_int);
}


void func_257(bool var_4508_bool, string var_4509_string, string var_4510_string, string var_4511_string)
{
	object var_4513_object;
	@FindActor(var_4513_object, var_4509_string);
	if(var_4513_object == null)
		var_4508_bool = false;
	@Trigger(var_4513_object, var_4510_string, var_4511_string);
	var_4508_bool = true;
}
EMIT "Stack[-1] = 0";


void func_10499(void)
{
	object var_5929_object;
	func_12503(var_5929_object);
	object var_5927_object;
	var_5929_object = var_5927_object;
	object var_5928_object;
	var_5927_object->FindMark(var_5928_object, "d8q01MatGotoToyHouse");
	if(var_5928_object != 0)
		var_5928_object->Remove();
	var_5927_object->FindMark(var_5928_object, "d8q01MatGotoBoiny");
	if(var_5928_object != 0)
		var_5928_object->Remove();
	var_5927_object->FindMark(var_5928_object, "d8q01MladVladGotoMat");
	if(var_5928_object != 0)
		var_5928_object->Remove();
	var_5927_object->FindMark(var_5928_object, "d8q01MladVladgotoOspina");
	if(var_5928_object != 0)
		var_5928_object->Remove();
	var_5927_object->FindMark(var_5928_object, "d8q01OspinaGotoMladVlad");
	if(var_5928_object != 0)
		var_5928_object->Remove();
	var_5927_object->FindMark(var_5928_object, "d8q02GotoKapella");
	if(var_5928_object != 0)
		var_5928_object->Remove();
	var_5927_object->FindMark(var_5928_object, "d8q04MladVladGotoMark");
	if(var_5928_object != 0)
		var_5928_object->Remove();
	bool var_5944_bool;
	func_12478(var_5944_bool, 175);
	bool var_5946_bool;
	func_12478(var_5946_bool, 127);
	bool var_5948_bool;
	func_12478(var_5948_bool, 124);
	bool var_5950_bool;
	func_12478(var_5950_bool, 649);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_269(object var_600_object)
{
	int var_604_int; int var_605_int; object var_606_object;
	if(var_600_object != 0) {
		var_600_object->size(var_604_int);
		var_605_int = 0;

		while(var_605_int < var_604_int) {
			var_600_object->get(var_606_object, var_605_int);
			if(var_606_object != 0)
				var_606_object->Remove();
			var_606_object = null;
			var_605_int += 1;
		}

		var_600_object->clear();
	}
}


void func_11533(void)
{
	object var_6288_object;
	func_12503(var_6288_object);
	object var_6286_object;
	var_6288_object = var_6286_object;
	object var_6287_object;
	var_6286_object->FindMark(var_6287_object, "d6q01AlexandrGotoJulia");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q01AlexandrGotoKaterina");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q01AlexandrGotoLara");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q01AlexangrGotoJulLaraSelf");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q01BigVladGotoAnna");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q01BigVladGotoAnnaOspinaSelf");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q01BigVladGotoOspina");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q01KaterinaGotoLaska");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q01KaterinagotoLaskaSelf");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q01KillerIsKlara");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q01LaskaGotoAlbinos");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q01ViktorGotoAlexandr");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q01ViktorGotoAlxBigSelf");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q01ViktorGotoBigVlad");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q02BigVlad");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q02KapellaGotoMladVlad");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q02MladVladGotoBigVlad");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	var_6286_object->FindMark(var_6287_object, "d6q02MladVladGotoBigVladSelf");
	if(var_6287_object != 0)
		var_6287_object->Remove();
	bool var_6325_bool;
	func_12478(var_6325_bool, 111);
	bool var_6327_bool;
	func_12478(var_6327_bool, 102);
	bool var_6329_bool;
	func_12478(var_6329_bool, 107);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5400(object var_145_object)
{
	var_145_object->add("dt_house3_14_i2");
	var_145_object->add("dt_house3_14");
	var_145_object->add("house1_arc_01l");
	var_145_object->add("house1_arc_01r");
	var_145_object->add("dt_House6_01");
	var_145_object->add("dt_house_1_09");
	var_145_object->add("house5_24");
	var_145_object->add("dt_House6_03");
	var_145_object->add("dt_House6_04");
	var_145_object->add("dt_house_1_08");
	var_145_object->add("house5_unoin_solidl");
	var_145_object->add("house5_unoin_solidr");
	var_145_object->add("dt_house2_12");
	var_145_object->add("dt_house2_11");
	var_145_object->add("dt_house2_13");
	var_145_object->add("dt_house2_09");
	var_145_object->add("dt_house2_08");
	var_145_object->add("dt_house2_07");
	var_145_object->add("dt_house2_06");
	var_145_object->add("house5_01");
	var_145_object->add("house5_15");
	var_145_object->add("house5_16");
	var_145_object->add("house5_17");
	var_145_object->add("house5_unoin04l");
	var_145_object->add("house5_unoin04r");
	var_145_object->add("house5_23");
	var_145_object->add("house1_se_05r");
	var_145_object->add("house1_se_05l");
	var_145_object->add("dt_house2_10");
}


// @pe
void func_6428(int var_3998_int, int var_3999_int, object var_4000_object, object var_4001_object, object var_4002_object, object var_4003_object)
{
	if(var_3999_int == 0) {
		func_802(10, false);
		func_819(10, false, 1);
		int var_4012_int; object var_4013_object; object var_4014_object; object var_4015_object;
		var_3998_int = var_4012_int;
		var_4000_object = var_4013_object;
		var_4001_object = var_4014_object;
		var_4002_object = var_4015_object;
		func_726(10, var_4012_int, var_4013_object, var_4014_object, var_4015_object);
		object var_4016_object;
		var_4003_object = var_4016_object;
		func_311(var_4016_object, 2);
		func_876(10, false, 7);
		func_938(10, true, 7);
	}
	func_785(10, false);
	int var_4027_int; int var_4028_int;
	var_3998_int = var_4027_int;
	var_3999_int = var_4028_int;
	func_3665(10, var_4027_int, var_4028_int);
}


void func_290(float var_4561_float)
{
	float var_4563_float;
	@GetGameTime(var_4563_float);
	var_4563_float = var_4561_float;
}


void func_295(void)
{
	@SetSepia(0.5, 0.886);
}


// @pe
void func_4391(void)
{
}


// @pe
void func_4393(int var_519_int, int var_520_int, object var_521_object, object var_522_object, object var_523_object, object var_524_object)
{
	if(var_520_int == 0) {
		func_802(0, false);
		func_819(0, false, 1);
		int var_567_int; int var_568_int; object var_569_object; object var_570_object; object var_571_object;
		var_567_int = 0;
		var_519_int = var_568_int;
		var_521_object = var_569_object;
		var_522_object = var_570_object;
		var_523_object = var_571_object;
		func_628(var_568_int, var_569_object, var_570_object, var_571_object);
		object var_613_object;
		var_524_object = var_613_object;
		func_311(var_613_object, 0);
		func_876(0, false, 4);
		func_938(0, false, 4);
	}
	int var_726_int;
	var_520_int = var_726_int;
	func_1056(0, var_726_int);
	int var_752_int; int var_753_int;
	var_519_int = var_752_int;
	var_520_int = var_753_int;
	func_2212(0, var_752_int, var_753_int);
}


void func_12587(void)
{
	float var_4401_float; float var_4403_float;
	@GetGameTime(var_4401_float);
	int var_4402_int = 1;
	
	for(;;) {
		if(var_4402_int < 288) {
			var_4403_float = 1.0 * var_4402_int;
			if(var_4403_float < var_4401_float) {
			} else {
			@SetTimeEvent((40000 + var_4402_int), var_4403_float);
			var_4403_float -= 0.0033333334;
			if(var_4403_float < var_4401_float) {
				goto Label_12612;
			}
			@SetTimeEvent((42000 + var_4402_int), var_4403_float);
		}
		func_8206();
		func_14471();
		}
	Label_12612:
		var_4402_int += 1;
	}
	
}


void func_300(void)
{
	@SetSepia(0, 0);
}


// @pe
void func_305(string var_447_string, int var_448_int)
{
	var_447_string = ("Region" + var_448_int) + "State";
}


void func_311(object var_613_object, int var_614_int)
{
	int var_621_int; string var_622_string; string var_624_string; object var_626_object;
	var_613_object->size(var_621_int);
	if(var_614_int == 1) {
		var_622_string = "s_";
	} else if(var_614_int == 2) {
	}
	int var_623_int = 0;
	
	for(;;) {
		if(var_623_int < var_621_int) {
			var_613_object->get(var_624_string, var_623_int);
			@GetSceneByName(var_626_object, var_624_string);
			if(!var_626_object) //@nz
				@Trace(("City manager: can't replace indoor scene \"" + var_624_string) + "\" because it doesn't exist");
			else
				@ReplaceScene(var_626_object, (("n_" + var_624_string) + ".isc"));

		}
		var_626_object = null;
		var_623_int += 1;
	}
	
}


// @pe
void func_1351(bool var_1129_bool, int var_1130_int, int var_1131_int)
{
	var_1129_bool = false;
	if(var_1130_int >= 10) {
		if(var_1131_int < 6)
			var_1129_bool = true;
	}
}


// @pe
void func_10572(void)
{
	func_183("house1_kabak@door1", true);
}


// @pe
void func_12622(int var_4657_int, float var_4658_float)
{
	if(var_4657_int == 45268) {
		object var_4661_object; object var_4662_object;
		var_4663_object = GlobalVars[16];
		var_4663_object = var_4661_object;
		var_4664_object = GlobalVars[16];
		var_4664_object = var_4662_object;
		func_10689();
	}
	if(var_4657_int == 45261) {
		bool var_4677_bool; object var_4678_object;
		var_4679_object = GlobalVars[16];
		var_4679_object = var_4678_object;
		func_12195(var_4678_object);
		if(!var_4677_bool) { //@nz
			object var_4685_object; object var_4686_object;
			var_4687_object = GlobalVars[16];
			var_4687_object = var_4685_object;
			var_4688_object = GlobalVars[16];
			var_4688_object = var_4686_object;
			func_10602();
			int var_4705_int; float var_4706_float;
			var_4658_float = var_4706_float;
			func_10453(var_4705_int, var_4706_float);
		}
	}
	if(var_4657_int == 45230) {
		int var_4716_int; float var_4717_float;
		var_4658_float = var_4717_float;
		func_10156(var_4716_int, var_4717_float);
	}
	if(var_4657_int == 45218) {
		bool var_4724_bool; object var_4725_object;
		var_4726_object = GlobalVars[16];
		var_4726_object = var_4725_object;
		func_12063(var_4725_object);
		if(!var_4724_bool) { //@nz
			int var_4732_int; float var_4733_float;
			var_4658_float = var_4733_float;
			func_9922(var_4732_int, var_4733_float);
		}
	}
	if(var_4657_int == 45269) {
		object var_4740_object; object var_4741_object;
		var_4742_object = GlobalVars[16];
		var_4742_object = var_4740_object;
		var_4743_object = GlobalVars[16];
		var_4743_object = var_4741_object;
		func_10706();
	}
	if(var_4657_int == 45231) {
		int var_4754_int; float var_4755_float;
		var_4658_float = var_4755_float;
		func_10201(var_4754_int, var_4755_float);
	}
	if(var_4657_int == 45227) {
		bool var_4762_bool; object var_4763_object;
		var_4764_object = GlobalVars[16];
		var_4764_object = var_4763_object;
		func_12147(var_4763_object);
		if(!var_4762_bool) { //@nz
			object var_4770_object; object var_4771_object;
			var_4772_object = GlobalVars[16];
			var_4772_object = var_4770_object;
			var_4773_object = GlobalVars[16];
			var_4773_object = var_4771_object;
			func_10618();
			int var_4782_int; float var_4783_float;
			var_4658_float = var_4783_float;
			func_10426(var_4782_int, var_4783_float);
		}
	}
	if(var_4657_int == 45271) {
		object var_4790_object; object var_4791_object;
		var_4792_object = GlobalVars[16];
		var_4792_object = var_4790_object;
		var_4793_object = GlobalVars[16];
		var_4793_object = var_4791_object;
		func_10740();
	}
	if(var_4657_int == 45282) {
		bool var_4804_bool; object var_4805_object;
		var_4806_object = GlobalVars[16];
		var_4806_object = var_4805_object;
		func_12207(var_4805_object);
		if(var_4804_bool != 0) {
			object var_4811_object; object var_4812_object;
			var_4813_object = GlobalVars[16];
			var_4813_object = var_4811_object;
			var_4814_object = GlobalVars[16];
			var_4814_object = var_4812_object;
			func_10776(var_4812_object);
			int var_4847_int; float var_4848_float;
			var_4658_float = var_4848_float;
			func_10120(var_4847_int, var_4848_float);
		}
	}
	if(var_4657_int == 45270) {
		object var_4855_object; object var_4856_object;
		var_4857_object = GlobalVars[16];
		var_4857_object = var_4855_object;
		var_4858_object = GlobalVars[16];
		var_4858_object = var_4856_object;
		func_10723();
	}
	if(var_4657_int == 45229) {
		int var_4869_int; float var_4870_float;
		var_4658_float = var_4870_float;
		func_10147(var_4869_int, var_4870_float);
	}
	if(var_4657_int == 45222) {
		bool var_4877_bool; object var_4878_object;
		var_4879_object = GlobalVars[16];
		var_4879_object = var_4878_object;
		func_11967(var_4878_object);
		if(!var_4877_bool) { //@nz
			object var_4885_object; object var_4886_object;
			var_4887_object = GlobalVars[16];
			var_4887_object = var_4885_object;
			var_4888_object = GlobalVars[16];
			var_4888_object = var_4886_object;
			func_10797();
		}
	}
	if(var_4657_int == 45260) {
		bool var_4927_bool; object var_4928_object;
		var_4929_object = GlobalVars[16];
		var_4929_object = var_4928_object;
		func_12183(var_4928_object);
		if(!var_4927_bool) { //@nz
			int var_4935_int; float var_4936_float;
			var_4658_float = var_4936_float;
			func_10399(var_4935_int, var_4936_float);
		}
	}
	if(var_4657_int == 45226) {
		bool var_4943_bool = false;
		bool var_4944_bool; object var_4945_object;
		var_4946_object = GlobalVars[16];
		var_4946_object = var_4945_object;
		func_12123(var_4945_object);
		if(!var_4944_bool) { //@nz
			bool var_4952_bool; object var_4953_object;
			var_4954_object = GlobalVars[16];
			var_4954_object = var_4953_object;
			func_12051(var_4953_object);
			if(!var_4952_bool) //@nz
				var_4943_bool = true;
		}
		if(var_4943_bool != 0) {
			object var_4960_object; object var_4961_object;
			var_4962_object = GlobalVars[16];
			var_4962_object = var_4960_object;
			var_4963_object = GlobalVars[16];
			var_4963_object = var_4961_object;
			func_10650();
			int var_4972_int; float var_4973_float;
			var_4658_float = var_4973_float;
			func_10408(var_4972_int, var_4973_float);
		}
	}
	if(var_4657_int == 45224) {
		bool var_4980_bool; object var_4981_object;
		var_4982_object = GlobalVars[16];
		var_4982_object = var_4981_object;
		func_12111(var_4981_object);
		if(!var_4980_bool) { //@nz
			int var_4988_int; float var_4989_float;
			var_4658_float = var_4989_float;
			func_10363(var_4988_int, var_4989_float);
		}
	}
	if(var_4657_int == 45221) {
		bool var_4996_bool; object var_4997_object;
		var_4998_object = GlobalVars[16];
		var_4998_object = var_4997_object;
		func_12325(var_4997_object);
		if(!var_4996_bool) { //@nz
			int var_5004_int; float var_5005_float;
			var_4658_float = var_5005_float;
			func_10021(var_5004_int, var_5005_float);
		}
	}
	if(var_4657_int == 45239) {
		object var_5012_object; object var_5013_object;
		var_5014_object = GlobalVars[16];
		var_5014_object = var_5012_object;
		var_5015_object = GlobalVars[16];
		var_5015_object = var_5013_object;
		func_10666();
		int var_5018_int; float var_5019_float;
		var_4658_float = var_5019_float;
		func_10381(var_5018_int, var_5019_float);
	}
	if(var_4657_int == 45220) {
		bool var_5026_bool; object var_5027_object;
		var_5028_object = GlobalVars[16];
		var_5028_object = var_5027_object;
		func_12087(var_5027_object);
		if(!var_5026_bool) { //@nz
			int var_5034_int; float var_5035_float;
			var_4658_float = var_5035_float;
			func_10012(var_5034_int, var_5035_float);
		}
	}
	if(var_4657_int == 45228) {
		bool var_5042_bool; object var_5043_object;
		var_5044_object = GlobalVars[16];
		var_5044_object = var_5043_object;
		func_12159(var_5043_object);
		if(!var_5042_bool) { //@nz
			int var_5050_int; float var_5051_float;
			var_4658_float = var_5051_float;
			func_9904(var_5050_int, var_5051_float);
		}
	}
	if(var_4657_int == 45219) {
		bool var_5058_bool; object var_5059_object;
		var_5060_object = GlobalVars[16];
		var_5060_object = var_5059_object;
		func_12075(var_5059_object);
		if(!var_5058_bool) { //@nz
			object var_5066_object; object var_5067_object;
			var_5068_object = GlobalVars[16];
			var_5068_object = var_5066_object;
			var_5069_object = GlobalVars[16];
			var_5069_object = var_5067_object;
			func_10586();
			int var_5078_int; float var_5079_float;
			var_4658_float = var_5079_float;
			func_9931(var_5078_int, var_5079_float);
		}
	}
	if(var_4657_int == 45232) {
		bool var_5086_bool; object var_5087_object;
		var_5088_object = GlobalVars[16];
		var_5088_object = var_5087_object;
		func_12171(var_5087_object);
		if(!var_5086_bool) { //@nz
			int var_5094_int; float var_5095_float;
			var_4658_float = var_5095_float;
			func_9985(var_5094_int, var_5095_float);
		}
	}
	if(var_4657_int == 45267) {
		object var_5102_object; object var_5103_object;
		var_5104_object = GlobalVars[16];
		var_5104_object = var_5102_object;
		var_5105_object = GlobalVars[16];
		var_5105_object = var_5103_object;
		func_10672();
	}
	if(var_4657_int == 45223) {
		bool var_5116_bool; object var_5117_object;
		var_5118_object = GlobalVars[16];
		var_5118_object = var_5117_object;
		func_12099(var_5117_object);
		if(!var_5116_bool) { //@nz
			int var_5124_int; float var_5125_float;
			var_4658_float = var_5125_float;
			func_10219(var_5124_int, var_5125_float);
		}
	}
	if(var_4657_int == 45225) {
		bool var_5132_bool; object var_5133_object;
		var_5134_object = GlobalVars[16];
		var_5134_object = var_5133_object;
		func_12135(var_5133_object);
		if(!var_5132_bool) { //@nz
			object var_5140_object; object var_5141_object;
			var_5142_object = GlobalVars[16];
			var_5142_object = var_5140_object;
			var_5143_object = GlobalVars[16];
			var_5143_object = var_5141_object;
			func_10634();
			int var_5152_int; float var_5153_float;
			var_4658_float = var_5153_float;
			func_10444(var_5152_int, var_5153_float);
		}
	}
	if(var_4657_int == 45214) {
		int var_5160_int; float var_5161_float;
		var_4658_float = var_5161_float;
		func_10372(var_5160_int, var_5161_float);
	}
	if(var_4657_int == 45215) {
		int var_5168_int; float var_5169_float;
		var_4658_float = var_5169_float;
		func_10417(var_5168_int, var_5169_float);
	}
	if(var_4657_int == 45216) {
		int var_5176_int; float var_5177_float;
		var_4658_float = var_5177_float;
		func_9913(var_5176_int, var_5177_float);
	}
	if(var_4657_int == 45217) {
		int var_5184_int; float var_5185_float;
		var_4658_float = var_5185_float;
		func_9958(var_5184_int, var_5185_float);
	}
	if(var_4657_int == 45174) {
		bool var_5192_bool; object var_5193_object;
		var_5194_object = GlobalVars[16];
		var_5194_object = var_5193_object;
		func_12219(var_5192_bool, var_5193_object);
		if(var_5192_bool != 0) {
			int var_5197_int; float var_5198_float;
			var_4658_float = var_5198_float;
			func_9832(var_5197_int, var_5198_float);
		}
	}
	if(var_4657_int == 45178) {
		bool var_5205_bool; object var_5206_object;
		var_5207_object = GlobalVars[16];
		var_5207_object = var_5206_object;
		func_12219(var_5205_bool, var_5206_object);
		if(var_5205_bool != 0) {
			int var_5208_int; float var_5209_float;
			var_4658_float = var_5209_float;
			func_9868(var_5208_int, var_5209_float);
		}
	}
	if(var_4657_int == 45179) {
		bool var_5216_bool; object var_5217_object;
		var_5218_object = GlobalVars[16];
		var_5218_object = var_5217_object;
		func_12219(var_5216_bool, var_5217_object);
		if(var_5216_bool != 0) {
			int var_5219_int; float var_5220_float;
			var_4658_float = var_5220_float;
			func_9877(var_5219_int, var_5220_float);
		}
	}
	if(var_4657_int == 45200) {
		bool var_5227_bool; object var_5228_object;
		var_5229_object = GlobalVars[16];
		var_5229_object = var_5228_object;
		func_11979(var_5228_object);
		if(!var_5227_bool) { //@nz
			int var_5235_int; float var_5236_float;
			var_4658_float = var_5236_float;
			func_10102(var_5235_int, var_5236_float);
		}
	}
	if(var_4657_int == 45180) {
		bool var_5243_bool; object var_5244_object;
		var_5245_object = GlobalVars[16];
		var_5245_object = var_5244_object;
		func_12219(var_5243_bool, var_5244_object);
		if(var_5243_bool != 0) {
			int var_5246_int; float var_5247_float;
			var_4658_float = var_5247_float;
			func_9886(var_5246_int, var_5247_float);
		}
	}
	if(var_4657_int == 45182) {
		bool var_5254_bool; object var_5255_object;
		var_5256_object = GlobalVars[16];
		var_5256_object = var_5255_object;
		func_12219(var_5254_bool, var_5255_object);
		if(var_5254_bool != 0) {
			int var_5257_int; float var_5258_float;
			var_4658_float = var_5258_float;
			func_9940(var_5257_int, var_5258_float);
		}
	}
	if(var_4657_int == 45176) {
		bool var_5265_bool; object var_5266_object;
		var_5267_object = GlobalVars[16];
		var_5267_object = var_5266_object;
		func_12219(var_5265_bool, var_5266_object);
		if(var_5265_bool != 0) {
			int var_5268_int; float var_5269_float;
			var_4658_float = var_5269_float;
			func_9850(var_5268_int, var_5269_float);
		}
	}
	if(var_4657_int == 45063)
		@QueuePlayMovie("aglaja.wmv");
	if(var_4657_int == 45177) {
		bool var_5279_bool; object var_5280_object;
		var_5281_object = GlobalVars[16];
		var_5281_object = var_5280_object;
		func_12219(var_5279_bool, var_5280_object);
		if(var_5279_bool != 0) {
			int var_5282_int; float var_5283_float;
			var_4658_float = var_5283_float;
			func_9859(var_5282_int, var_5283_float);
		}
	}
	if(var_4657_int == 45183) {
		bool var_5290_bool; object var_5291_object;
		var_5292_object = GlobalVars[16];
		var_5292_object = var_5291_object;
		func_12219(var_5290_bool, var_5291_object);
		if(var_5290_bool != 0) {
			int var_5293_int; float var_5294_float;
			var_4658_float = var_5294_float;
			func_9994(var_5293_int, var_5294_float);
		}
	}
	if(var_4657_int == 45202) {
		bool var_5301_bool; object var_5302_object;
		var_5303_object = GlobalVars[16];
		var_5303_object = var_5302_object;
		func_12015(var_5302_object);
		if(!var_5301_bool) { //@nz
			int var_5309_int; float var_5310_float;
			var_4658_float = var_5310_float;
			func_10183(var_5309_int, var_5310_float);
		}
	}
	if(var_4657_int == 45205) {
		bool var_5317_bool; object var_5318_object;
		var_5319_object = GlobalVars[16];
		var_5319_object = var_5318_object;
		func_12039(var_5318_object);
		if(!var_5317_bool) { //@nz
			int var_5325_int; float var_5326_float;
			var_4658_float = var_5326_float;
			func_10390(var_5325_int, var_5326_float);
		}
	}
	if(var_4657_int == 45209) {
		int var_5333_int; float var_5334_float;
		var_4658_float = var_5334_float;
		func_10138(var_5333_int, var_5334_float);
	}
	if(var_4657_int == 45207) {
		int var_5341_int; float var_5342_float;
		var_4658_float = var_5342_float;
		func_10084(var_5341_int, var_5342_float);
	}
	if(var_4657_int == 45208) {
		int var_5349_int; float var_5350_float;
		var_4658_float = var_5350_float;
		func_10093(var_5349_int, var_5350_float);
	}
	if(var_4657_int == 45181) {
		bool var_5357_bool; object var_5358_object;
		var_5359_object = GlobalVars[16];
		var_5359_object = var_5358_object;
		func_12219(var_5357_bool, var_5358_object);
		if(var_5357_bool != 0) {
			int var_5360_int; float var_5361_float;
			var_4658_float = var_5361_float;
			func_9895(var_5360_int, var_5361_float);
		}
	}
	if(var_4657_int == 45210) {
		int var_5368_int; float var_5369_float;
		var_4658_float = var_5369_float;
		func_10192(var_5368_int, var_5369_float);
	}
	if(var_4657_int == 45211) {
		int var_5376_int; float var_5377_float;
		var_4658_float = var_5377_float;
		func_10246(var_5376_int, var_5377_float);
	}
	if(var_4657_int == 45064)
		@QueuePlayMovie("army.wmv");
	if(var_4657_int == 45212) {
		int var_5387_int; float var_5388_float;
		var_4658_float = var_5388_float;
		func_10273(var_5387_int, var_5388_float);
	}
	if(var_4657_int == 45213) {
		int var_5395_int; float var_5396_float;
		var_4658_float = var_5396_float;
		func_10336(var_5395_int, var_5396_float);
	}
	if(var_4657_int == 45203) {
		bool var_5403_bool; object var_5404_object;
		var_5405_object = GlobalVars[16];
		var_5405_object = var_5404_object;
		func_12027(var_5404_object);
		if(!var_5403_bool) { //@nz
			int var_5411_int; float var_5412_float;
			var_4658_float = var_5412_float;
			func_10237(var_5411_int, var_5412_float);
		}
	}
	if(var_4657_int == 45175) {
		bool var_5419_bool; object var_5420_object;
		var_5421_object = GlobalVars[16];
		var_5421_object = var_5420_object;
		func_12219(var_5419_bool, var_5420_object);
		if(var_5419_bool != 0) {
			int var_5422_int; float var_5423_float;
			var_4658_float = var_5423_float;
			func_9841(var_5422_int, var_5423_float);
		}
	}
	if(var_4657_int == 45054) {
		int var_5430_int; float var_5431_float;
		var_4658_float = var_5431_float;
		func_10003(var_5430_int, var_5431_float);
	}
	if(var_4657_int == 45199) {
		bool var_5438_bool; object var_5439_object;
		var_5440_object = GlobalVars[16];
		var_5440_object = var_5439_object;
		func_11991(var_5439_object);
		if(!var_5438_bool) { //@nz
			int var_5446_int; float var_5447_float;
			var_4658_float = var_5447_float;
			func_10111(var_5446_int, var_5447_float);
		}
	}
	if(var_4657_int == 45201) {
		bool var_5454_bool; object var_5455_object;
		var_5456_object = GlobalVars[16];
		var_5456_object = var_5455_object;
		func_12003(var_5455_object);
		if(!var_5454_bool) { //@nz
			int var_5462_int; float var_5463_float;
			var_4658_float = var_5463_float;
			func_10210(var_5462_int, var_5463_float);
		}
	}
	if(var_4657_int == 45184) {
		bool var_5470_bool; object var_5471_object;
		var_5472_object = GlobalVars[16];
		var_5472_object = var_5471_object;
		func_12219(var_5470_bool, var_5471_object);
		if(var_5470_bool != 0) {
			int var_5473_int; float var_5474_float;
			var_4658_float = var_5474_float;
			func_10030(var_5473_int, var_5474_float);
		}
	}
	if(var_4657_int == 45206) {
		int var_5481_int; float var_5482_float;
		var_4658_float = var_5482_float;
		func_10435(var_5481_int, var_5482_float);
	}
	if(var_4657_int == 45050) {
		int var_5489_int; float var_5490_float;
		var_4658_float = var_5490_float;
		func_10345(var_5489_int, var_5490_float);
	}
	if(var_4657_int == 45051) {
		bool var_5497_bool; object var_5498_object;
		var_5499_object = GlobalVars[16];
		var_5499_object = var_5498_object;
		func_12409(var_5498_object);
		if(!var_5497_bool) { //@nz
			int var_5505_int; float var_5506_float;
			var_4658_float = var_5506_float;
			func_9949(var_5505_int, var_5506_float);
		}
	}
	if(var_4657_int == 45042) {
		object var_5513_object; object var_5514_object;
		var_5515_object = GlobalVars[16];
		var_5515_object = var_5513_object;
		var_5516_object = GlobalVars[16];
		var_5516_object = var_5514_object;
		func_11905();
		bool var_5544_bool;
		func_245(var_5544_bool, "quest_d11_01", "cleanup");
		object var_5547_object;
		func_143(var_5547_object, "quest_d12_01");
	}
	if(var_4657_int == 45040) {
		bool var_5557_bool; object var_5558_object;
		var_5559_object = GlobalVars[16];
		var_5559_object = var_5558_object;
		func_12301(var_5558_object);
		if(!var_5557_bool) { //@nz
			int var_5565_int; float var_5566_float;
			var_4658_float = var_5566_float;
			func_10165(var_5565_int, var_5566_float);
		}
	}
	if(var_4657_int == 45039) {
		bool var_5573_bool; object var_5574_object;
		var_5575_object = GlobalVars[16];
		var_5575_object = var_5574_object;
		func_12289(var_5574_object);
		if(!var_5573_bool) { //@nz
			object var_5581_object; object var_5582_object;
			var_5583_object = GlobalVars[16];
			var_5583_object = var_5581_object;
			var_5584_object = GlobalVars[16];
			var_5584_object = var_5582_object;
			func_10476();
			int var_5595_int; float var_5596_float;
			var_4658_float = var_5596_float;
			func_10174(var_5595_int, var_5596_float);
		}
	}
	if(var_4657_int == 45038) {
		bool var_5603_bool; object var_5604_object;
		var_5605_object = GlobalVars[16];
		var_5605_object = var_5604_object;
		func_12277(var_5604_object);
		if(!var_5603_bool) { //@nz
			int var_5611_int; float var_5612_float;
			var_4658_float = var_5612_float;
			func_10129(var_5611_int, var_5612_float);
		}
	}
	if(var_4657_int == 45041) {
		bool var_5619_bool; object var_5620_object;
		var_5621_object = GlobalVars[16];
		var_5621_object = var_5620_object;
		func_12313(var_5620_object);
		if(!var_5619_bool) { //@nz
			int var_5627_int; float var_5628_float;
			var_4658_float = var_5628_float;
			func_10228(var_5627_int, var_5628_float);
		}
	}
	if(var_4657_int == 45045) {
		bool var_5635_bool; object var_5636_object;
		var_5637_object = GlobalVars[16];
		var_5637_object = var_5636_object;
		func_12349(var_5636_object);
		if(!var_5635_bool) { //@nz
			int var_5643_int; float var_5644_float;
			var_4658_float = var_5644_float;
			func_10291(var_5643_int, var_5644_float);
		}
	}
	if(var_4657_int == 45047) {
		bool var_5651_bool; object var_5652_object;
		var_5653_object = GlobalVars[16];
		var_5653_object = var_5652_object;
		func_12385(var_5652_object);
		if(!var_5651_bool) { //@nz
			int var_5659_int; float var_5660_float;
			var_4658_float = var_5660_float;
			func_10318(var_5659_int, var_5660_float);
		}
	}
	if(var_4657_int == 45036) {
		bool var_5667_bool; object var_5668_object;
		var_5669_object = GlobalVars[16];
		var_5669_object = var_5668_object;
		func_12253(var_5668_object);
		if(!var_5667_bool) { //@nz
			object var_5675_object; object var_5676_object;
			var_5677_object = GlobalVars[16];
			var_5677_object = var_5675_object;
			var_5678_object = GlobalVars[16];
			var_5678_object = var_5676_object;
			func_10806();
			int var_5681_int; float var_5682_float;
			var_4658_float = var_5682_float;
			func_9967(var_5681_int, var_5682_float);
		}
	}
	if(var_4657_int == 45043) {
		bool var_5689_bool; object var_5690_object;
		var_5691_object = GlobalVars[16];
		var_5691_object = var_5690_object;
		func_12337(var_5690_object);
		if(!var_5689_bool) { //@nz
			int var_5697_int; float var_5698_float;
			var_4658_float = var_5698_float;
			func_10255(var_5697_int, var_5698_float);
		}
	}
	if(var_4657_int == 45046) {
		bool var_5705_bool; object var_5706_object;
		var_5707_object = GlobalVars[16];
		var_5707_object = var_5706_object;
		func_12373(var_5706_object);
		if(!var_5705_bool) { //@nz
			int var_5713_int; float var_5714_float;
			var_4658_float = var_5714_float;
			func_10282(var_5713_int, var_5714_float);
		}
	}
	if(var_4657_int == 45044) {
		bool var_5721_bool; object var_5722_object;
		var_5723_object = GlobalVars[16];
		var_5723_object = var_5722_object;
		func_12361(var_5722_object);
		if(!var_5721_bool) { //@nz
			int var_5729_int; float var_5730_float;
			var_4658_float = var_5730_float;
			func_10300(var_5729_int, var_5730_float);
		}
	}
	if(var_4657_int == 45048) {
		int var_5737_int; float var_5738_float;
		var_4658_float = var_5738_float;
		func_10354(var_5737_int, var_5738_float);
	}
	if(var_4657_int == 45049) {
		bool var_5745_bool; object var_5746_object;
		var_5747_object = GlobalVars[16];
		var_5747_object = var_5746_object;
		func_12397(var_5746_object);
		if(!var_5745_bool) { //@nz
			int var_5753_int; float var_5754_float;
			var_4658_float = var_5754_float;
			func_10327(var_5753_int, var_5754_float);
		}
	}
	if(var_4657_int == 45018) {
		object var_5761_object; object var_5762_object;
		var_5763_object = GlobalVars[16];
		var_5763_object = var_5761_object;
		var_5764_object = GlobalVars[16];
		var_5764_object = var_5762_object;
		func_11780();
		bool var_5790_bool;
		func_245(var_5790_bool, "quest_d9_01", "cleanup");
		object var_5793_object;
		func_143(var_5793_object, "quest_d10_01");
	}
	if(var_4657_int == 45005) {
		object var_5797_object; object var_5798_object;
		var_5799_object = GlobalVars[16];
		var_5799_object = var_5797_object;
		var_5800_object = GlobalVars[16];
		var_5800_object = var_5798_object;
		func_10980();
		bool var_5848_bool;
		func_245(var_5848_bool, "quest_d2_01", "cleanup");
		object var_5851_object;
		func_143(var_5851_object, "quest_d3_01");
	}
	if(var_4657_int == 45007) {
		object var_5855_object; object var_5856_object;
		var_5857_object = GlobalVars[16];
		var_5857_object = var_5855_object;
		var_5858_object = GlobalVars[16];
		var_5858_object = var_5856_object;
		func_10764();
	}
	if(var_4657_int == 45009) {
		int var_5863_int; float var_5864_float;
		var_4658_float = var_5864_float;
		func_10048(var_5863_int, var_5864_float);
	}
	if(var_4657_int == 45016) {
		object var_5871_object; object var_5872_object;
		var_5873_object = GlobalVars[16];
		var_5873_object = var_5871_object;
		var_5874_object = GlobalVars[16];
		var_5874_object = var_5872_object;
		func_11679();
		object var_5908_object; object var_5909_object;
		var_5910_object = GlobalVars[16];
		var_5910_object = var_5908_object;
		var_5911_object = GlobalVars[16];
		var_5911_object = var_5909_object;
		func_10790();
		bool var_5914_bool;
		func_245(var_5914_bool, "quest_d7_01", "cleanup");
		object var_5917_object;
		func_143(var_5917_object, "quest_d8_01");
	}
	if(var_4657_int == 45017) {
		object var_5921_object; object var_5922_object;
		var_5923_object = GlobalVars[16];
		var_5923_object = var_5921_object;
		var_5924_object = GlobalVars[16];
		var_5924_object = var_5922_object;
		func_10499();
		bool var_5952_bool;
		func_245(var_5952_bool, "quest_d8_01", "cleanup");
		object var_5955_object;
		func_143(var_5955_object, "quest_d9_01");
	}
	if(var_4657_int == 45015) {
		bool var_5959_bool; object var_5960_object;
		var_5961_object = GlobalVars[16];
		var_5961_object = var_5960_object;
		func_12241(var_5960_object);
		if(var_5959_bool != 0) {
			int var_5966_int; float var_5967_float;
			var_4658_float = var_5967_float;
			func_10309(var_5966_int, var_5967_float);
		}
	}
	if(var_4657_int == 45031) {
		object var_5974_object; object var_5975_object;
		var_5976_object = GlobalVars[16];
		var_5976_object = var_5974_object;
		var_5977_object = GlobalVars[16];
		var_5977_object = var_5975_object;
		func_11843();
		bool var_6001_bool;
		func_245(var_6001_bool, "quest_d10_01", "cleanup");
		object var_6004_object;
		func_143(var_6004_object, "quest_d11_01");
	}
	if(var_4657_int == 45011) {
		object var_6008_object; object var_6009_object;
		var_6010_object = GlobalVars[16];
		var_6010_object = var_6008_object;
		var_6011_object = GlobalVars[16];
		var_6011_object = var_6009_object;
		func_11230();
		bool var_6065_bool;
		func_245(var_6065_bool, "quest_d4_01", "cleanup");
		object var_6068_object;
		func_154(var_6068_object, "quest_d5_01");
	}
	if(var_4657_int == 45032) {
		object var_6078_object;
		func_143(var_6078_object, "quest_d11_02");
	}
	if(var_4657_int == 45008) {
		bool var_6082_bool; object var_6083_object;
		var_6084_object = GlobalVars[16];
		var_6084_object = var_6083_object;
		func_11955(var_6083_object);
		if(var_6082_bool != 0) {
			int var_6089_int; float var_6090_float;
			var_4658_float = var_6090_float;
			func_10057(var_6089_int, var_6090_float);
		}
	}
	if(var_4657_int == 45003) {
		object var_6097_object; object var_6098_object;
		var_6099_object = GlobalVars[16];
		var_6099_object = var_6097_object;
		var_6100_object = GlobalVars[16];
		var_6100_object = var_6098_object;
		func_10820();
		int var_6153_int; float var_6154_float;
		var_4658_float = var_6154_float;
		func_10039(var_6153_int, var_6154_float);
		object var_6159_object;
		func_143(var_6159_object, "quest_d2_01");
		bool var_6161_bool;
		func_245(var_6161_bool, "quest_d1_01", "cleanup");
		bool var_6164_bool;
		func_245(var_6164_bool, "tutorial_mask1", "cleanup");
		bool var_6167_bool;
		func_245(var_6167_bool, "tutorial_mask2", "cleanup");
	}
	if(var_4657_int == 45006) {
		object var_6172_object; object var_6173_object;
		var_6174_object = GlobalVars[16];
		var_6174_object = var_6172_object;
		var_6175_object = GlobalVars[16];
		var_6175_object = var_6173_object;
		func_11126();
		bool var_6211_bool;
		func_245(var_6211_bool, "quest_d3_01", "cleanup");
		object var_6214_object;
		func_143(var_6214_object, "quest_d4_01");
	}
	if(var_4657_int == 45012) {
		object var_6218_object; object var_6219_object;
		var_6220_object = GlobalVars[16];
		var_6220_object = var_6218_object;
		var_6221_object = GlobalVars[16];
		var_6221_object = var_6219_object;
		func_11394();
		int var_6267_int; float var_6268_float;
		var_4658_float = var_6268_float;
		func_10264(var_6267_int, var_6268_float);
		bool var_6273_bool;
		func_245(var_6273_bool, "quest_d5_01", "cleanup");
		object var_6276_object;
		func_143(var_6276_object, "quest_d6_01");
	}
	if(var_4657_int == 45013) {
		object var_6280_object; object var_6281_object;
		var_6282_object = GlobalVars[16];
		var_6282_object = var_6280_object;
		var_6283_object = GlobalVars[16];
		var_6283_object = var_6281_object;
		func_11533();
		bool var_6331_bool;
		func_245(var_6331_bool, "quest_d6_01", "cleanup");
		object var_6334_object;
		func_143(var_6334_object, "quest_d7_01");
	}
	if(var_4657_int == 45035) {
		bool var_6338_bool; object var_6339_object;
		var_6340_object = GlobalVars[16];
		var_6340_object = var_6339_object;
		func_12265(var_6339_object);
		if(!var_6338_bool) { //@nz
			object var_6346_object; object var_6347_object;
			var_6348_object = GlobalVars[16];
			var_6348_object = var_6346_object;
			var_6349_object = GlobalVars[16];
			var_6349_object = var_6347_object;
			func_10790();
			int var_6350_int; float var_6351_float;
			var_4658_float = var_6351_float;
			func_9976(var_6350_int, var_6351_float);
		}
	}
	if(var_4657_int == 45010) {
		bool var_6358_bool = false;
		bool var_6359_bool; object var_6360_object;
		var_6361_object = GlobalVars[16];
		var_6361_object = var_6360_object;
		func_12229(var_6360_object);
		if(!var_6359_bool) { //@nz
			bool var_6367_bool; object var_6368_object;
			var_6369_object = GlobalVars[16];
			var_6369_object = var_6368_object;
			func_11943(var_6368_object);
			if(!var_6367_bool) //@nz
				var_6358_bool = true;
		}
		if(var_6358_bool != 0) {
			object var_6375_object; object var_6376_object;
			var_6377_object = GlobalVars[16];
			var_6377_object = var_6375_object;
			var_6378_object = GlobalVars[16];
			var_6378_object = var_6376_object;
			func_10483();
			int var_6387_int; float var_6388_float;
			var_4658_float = var_6388_float;
			func_10075(var_6387_int, var_6388_float);
		}
	}
}


// @pe
void func_6480(object var_246_object)
{
	var_246_object->add("r5_house2_01");
	var_246_object->add("r5_house2_02");
	var_246_object->add("r5_house2_03");
	var_246_object->add("r5_house3_01_i2");
	var_246_object->add("r5_house3_01");
	var_246_object->add("r5_house3_02_i2");
	var_246_object->add("r5_house3_02");
	var_246_object->add("r5_house3_03_i2");
	var_246_object->add("r5_house3_03");
	var_246_object->add("r5_house3_04_i2");
	var_246_object->add("r5_house3_04");
	var_246_object->add("r5_house3_05_i2");
	var_246_object->add("r5_house3_05");
	var_246_object->add("r5_house3_06_i2");
	var_246_object->add("r5_house3_06");
	var_246_object->add("r5_house3_07_i2");
	var_246_object->add("r5_house3_07");
	var_246_object->add("r5_House6_01");
}


// @pe
void func_1361(bool var_1140_bool, int var_1141_int, int var_1142_int)
{
	var_1140_bool = false;
	if(var_1141_int >= 3) {
		bool var_1145_bool = true;
		var_1147_bool = var_1142_int > 22;
		if(var_1147_bool != 1) {
			var_1149_bool = var_1142_int < 5;
			if(var_1149_bool != 1)
				var_1145_bool = false;
		}
		if(var_1145_bool != 0)
			var_1140_bool = true;
	}
}


// @pe
void func_10579(void)
{
	func_183("mnogogrannik_han@door1", true);
}


void func_2389(int var_915_int, int var_916_int, int var_917_int)
{
	int var_919_int;
	if((var_916_int + 1) == 12)
		return 2;
	bool var_924_bool = false;
	bool var_925_bool = true;
	var_927_bool = var_917_int < 7;
	if(var_927_bool != 1) {
		var_929_bool = var_917_int > 21;
		if(var_929_bool != 1)
			var_925_bool = false;
	}
	if(var_925_bool != 0) {
		if(var_916_int != 0)
			var_924_bool = true;
	}
	if(var_924_bool != 0) {
		float var_933_float; int var_934_int;
		var_916_int = var_934_int;
		func_1147(var_933_float, var_934_int);
		if((1 * var_933_float) != 0) {
			int var_936_int; int var_939_int;
			var_915_int = var_936_int;
			var_919_int = var_939_int;
			func_509(var_936_int, "pers_grabitel", "grabitel.xml", var_939_int);
		}
	}
	bool var_940_bool; int var_941_int; int var_942_int;
	var_917_int = var_942_int;
	func_1116(var_940_bool, var_941_int, var_942_int);
	if(var_940_bool != 0) {
		int var_943_int;
		var_915_int = var_943_int;
		func_509(var_943_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_947_int;
		var_915_int = var_947_int;
		func_509(var_947_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_951_int;
		var_915_int = var_951_int;
		func_509(var_951_int, "pers_worker", "worker_attacker.xml", 1);
		int var_955_int;
		var_915_int = var_955_int;
		func_509(var_955_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_959_int;
		var_915_int = var_959_int;
		func_509(var_959_int, "pers_alkash", "alkash.xml", 1);
		int var_963_int;
		var_915_int = var_963_int;
		func_509(var_963_int, "pers_woman", "woman.xml", 2);
	} else {
			bool var_979_bool = false;
			if(var_917_int > 8) {
				if(var_917_int < 21)
					var_979_bool = true;
			}
			if(var_979_bool == 0) goto Label_2530;
			int var_984_int;
			var_915_int = var_984_int;
			func_509(var_984_int, "pers_worker", "worker.xml", 2);
			int var_988_int;
			var_915_int = var_988_int;
			func_509(var_988_int, "pers_worker", "worker2.xml", 2);
			int var_992_int;
			var_915_int = var_992_int;
			func_509(var_992_int, "pers_alkash", "alkash.xml", 1);
			int var_996_int;
			var_915_int = var_996_int;
			func_509(var_996_int, "pers_woman", "woman.xml", 2);
			int var_1000_int;
			var_915_int = var_1000_int;
			func_509(var_1000_int, "pers_unosha", "unosha.xml", 1);
			int var_1004_int;
			var_915_int = var_1004_int;
			func_509(var_1004_int, "pers_unosha", "unosha2.xml", 1);
	}
	for(;;) {
		bool var_967_bool = false;
		bool var_968_bool = false;
		if(var_941_int == 0) {
			if(var_917_int > 12)
				var_968_bool = true;
		}
		if(var_968_bool != 0) {
			if(var_917_int < 22)
				var_967_bool = true;
		}
		if(var_967_bool != 0) {
			int var_975_int;
			var_915_int = var_975_int;
			func_509(var_975_int, "pers_woman", "woman_killme.xml", 1);
		}
		return 2;

	}
	
Label_2530:
	int var_1008_int;
	var_915_int = var_1008_int;
	func_509(var_1008_int, "pers_alkash", "alkash.xml", 1);
	int var_1012_int;
	var_915_int = var_1012_int;
	func_509(var_1012_int, "pers_worker", "worker.xml", 1);
	int var_1016_int;
	var_915_int = var_1016_int;
	func_509(var_1016_int, "pers_worker", "worker2.xml", 1);
	int var_1020_int;
	var_915_int = var_1020_int;
	func_509(var_1020_int, "pers_unosha", "unosha2.xml", 1);
	int var_1024_int;
	var_915_int = var_1024_int;
	func_509(var_1024_int, "pers_dog", "dog.xml", 1);
}


void func_10586(void)
{
	object var_5072_object;
	func_12503(var_5072_object);
	object var_5071_object;
	var_5072_object = var_5071_object;
	float var_5077_float;
	func_290(var_5077_float);
	var_5071_object->AddMark("d10q03GotoMark", "pt_map_theater", 0, 511154, var_5077_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4445(int var_2006_int, int var_2007_int, object var_2008_object, object var_2009_object, object var_2010_object, object var_2011_object)
{
	if(var_2007_int == 0) {
		func_802(0, true);
		func_819(0, true, 1);
		int var_2020_int; object var_2021_object; object var_2022_object; object var_2023_object;
		var_2006_int = var_2020_int;
		var_2008_object = var_2021_object;
		var_2009_object = var_2022_object;
		var_2010_object = var_2023_object;
		func_647(0, var_2020_int, var_2021_object, var_2022_object, var_2023_object);
		object var_2109_object;
		var_2011_object = var_2109_object;
		func_311(var_2109_object, 1);
		func_876(0, true, 4);
		func_938(0, false, 4);
	}
	func_785(0, false);
	int var_2120_int; int var_2121_int;
	var_2006_int = var_2120_int;
	var_2007_int = var_2121_int;
	func_3143(0, var_2120_int, var_2121_int);
}


void func_349(int var_108_int)
{
	int var_111_int; int var_112_int;
	var_111_int = 0;
	
	while(0 < 16) {
		bool var_115_bool; int var_116_int;
		var_112_int = var_116_int;
		func_436(var_115_bool, var_116_int);
		if(var_115_bool != 0)
			var_111_int += 1;
		var_112_int += 1;
	}
	
	var_111_int = var_108_int;
}


// @pe
void func_1378(bool var_2209_bool, int var_2210_int)
{
	var_2209_bool = var_2210_int >= 8;
}


void func_1382(int var_1807_int, int var_1808_int, int var_1809_int)
{
	int var_1811_int;
	if((var_1808_int + 1) == 12)
		return 2;
	bool var_1816_bool = false;
	bool var_1817_bool = true;
	var_1819_bool = var_1809_int < 7;
	if(var_1819_bool != 1) {
		var_1821_bool = var_1809_int > 21;
		if(var_1821_bool != 1)
			var_1817_bool = false;
	}
	if(var_1817_bool != 0) {
		if(var_1808_int != 0)
			var_1816_bool = true;
	}
	if(var_1816_bool != 0) {
		float var_1824_float; int var_1825_int;
		var_1808_int = var_1825_int;
		func_1147(var_1824_float, var_1825_int);
		var_1824_float = var_1811_int;
		if(var_1811_int != 0) {
			int var_1827_int; int var_1830_int;
			var_1807_int = var_1827_int;
			var_1811_int = var_1830_int;
			func_509(var_1827_int, "pers_grabitel", "grabitel.xml", var_1830_int);
		}
	}
	bool var_1831_bool; int var_1832_int; int var_1833_int;
	var_1809_int = var_1833_int;
	func_1116(var_1831_bool, var_1832_int, var_1833_int);
	if(var_1831_bool != 0) {
		int var_1834_int;
		var_1807_int = var_1834_int;
		func_509(var_1834_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1838_int;
		var_1807_int = var_1838_int;
		func_509(var_1838_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1842_int;
		var_1807_int = var_1842_int;
		func_509(var_1842_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1846_int;
		var_1807_int = var_1846_int;
		func_509(var_1846_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1850_int;
		var_1807_int = var_1850_int;
		func_509(var_1850_int, "pers_wasted_girl", "wasted_girl.xml", 2);
		int var_1854_int;
		var_1807_int = var_1854_int;
		func_509(var_1854_int, "pers_wasted_male", "wasted_male.xml", 3);
		int var_1858_int;
		var_1807_int = var_1858_int;
		func_509(var_1858_int, "pers_woman", "woman.xml", 3);
		int var_1862_int;
		var_1807_int = var_1862_int;
		func_509(var_1862_int, "pers_boy", "boy.xml", 1);
		int var_1866_int;
		var_1807_int = var_1866_int;
		func_509(var_1866_int, "pers_girl", "girl.xml", 1);
		int var_1870_int;
		var_1807_int = var_1870_int;
		func_509(var_1870_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_1893_bool = false;
			if(var_1809_int > 8) {
				if(var_1809_int < 21)
					var_1893_bool = true;
			}
			if(var_1893_bool == 0) goto Label_1564;
			int var_1898_int;
			var_1807_int = var_1898_int;
			func_509(var_1898_int, "pers_wasted_girl", "wasted_girl.xml", 2);
			int var_1902_int;
			var_1807_int = var_1902_int;
			func_509(var_1902_int, "pers_wasted_male", "wasted_male.xml", 3);
			int var_1906_int;
			var_1807_int = var_1906_int;
			func_509(var_1906_int, "pers_woman", "woman.xml", 3);
			int var_1910_int;
			var_1807_int = var_1910_int;
			func_509(var_1910_int, "pers_unosha", "unosha.xml", 2);
			int var_1914_int;
			var_1807_int = var_1914_int;
			func_509(var_1914_int, "pers_unosha", "unosha2.xml", 2);
			int var_1918_int;
			var_1807_int = var_1918_int;
			func_509(var_1918_int, "pers_boy", "boy.xml", 2);
			int var_1922_int;
			var_1807_int = var_1922_int;
			func_509(var_1922_int, "pers_girl", "girl.xml", 1);
			int var_1926_int;
			var_1807_int = var_1926_int;
			func_509(var_1926_int, "pers_girl", "girl2.xml", 1);
	}
	for(;;) {
		bool var_1874_bool = false;
		bool var_1875_bool = false;
		if(var_1832_int == 0) {
			if(var_1809_int > 12)
				var_1875_bool = true;
		}
		if(var_1875_bool != 0) {
			if(var_1809_int < 22)
				var_1874_bool = true;
		}
		if(var_1874_bool != 0) {
			int var_1882_int;
			var_1807_int = var_1882_int;
			func_509(var_1882_int, "pers_wasted_girl", "wasted_girl_killme.xml", 1);
		}
		bool var_1886_bool; int var_1887_int; int var_1888_int;
		var_1808_int = var_1887_int;
		var_1809_int = var_1888_int;
		func_1351(var_1886_bool, var_1887_int, var_1888_int);
		if(var_1886_bool != 0) {
			int var_1889_int;
			var_1807_int = var_1889_int;
			func_509(var_1889_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		return 2;

	}
	
Label_1564:
	int var_1930_int;
	var_1807_int = var_1930_int;
	func_509(var_1930_int, "pers_wasted_girl", "wasted_girl.xml", 1);
	int var_1934_int;
	var_1807_int = var_1934_int;
	func_509(var_1934_int, "pers_wasted_male", "wasted_male.xml", 2);
	int var_1938_int;
	var_1807_int = var_1938_int;
	func_509(var_1938_int, "pers_unosha", "unosha.xml", 1);
	int var_1942_int;
	var_1807_int = var_1942_int;
	func_509(var_1942_int, "pers_unosha", "unosha2.xml", 1);
}


void func_10602(void)
{
	object var_4691_object;
	func_12503(var_4691_object);
	object var_4690_object;
	var_4691_object = var_4690_object;
	float var_4702_float;
	func_290(var_4702_float);
	var_4690_object->AddMark("d9q01GotoViktor", "pt_map_viktor", 1, 540031, var_4702_float);
}
EMIT "Stack[-1] = 0";


void func_367(int var_121_int)
{
	int var_126_int; int var_128_int;
	@irand(var_126_int, 16);
	int var_127_int = 0;
	
	while(var_127_int < 16) {
		var_128_int = (var_127_int + var_126_int) % 16;
		bool var_134_bool = false;
		bool var_135_bool; int var_136_int;
		var_128_int = var_136_int;
		func_406(var_135_bool, var_136_int);
		if(var_135_bool != 0) {
			bool var_144_bool; int var_145_int; int var_146_int;
			var_128_int = var_145_int;
			var_121_int = var_146_int;
			func_14472(var_144_bool, var_145_int, var_146_int);
			if(var_144_bool != 0)
				var_134_bool = true;
		}
		if(var_134_bool != 0) {
			int var_163_int;
			func_448(var_163_int);
			@Trace("Diseased Region: " + var_163_int);
		}
		var_127_int += 1;
	}
	
}


// @pe
void func_5489(int var_1342_int, int var_1343_int, object var_1344_object, object var_1345_object, object var_1346_object, object var_1347_object)
{
	if(var_1343_int == 0) {
		func_802(5, false);
		func_819(5, false, 1);
		int var_1355_int; int var_1356_int; object var_1357_object; object var_1358_object; object var_1359_object;
		var_1355_int = 5;
		var_1342_int = var_1356_int;
		var_1344_object = var_1357_object;
		var_1345_object = var_1358_object;
		var_1346_object = var_1359_object;
		func_628(var_1356_int, var_1357_object, var_1358_object, var_1359_object);
		object var_1360_object;
		var_1347_object = var_1360_object;
		func_311(var_1360_object, 0);
		func_876(5, false, 4);
		func_938(5, false, 4);
	}
	int var_1369_int;
	var_1343_int = var_1369_int;
	func_989(5, var_1369_int);
	int var_1371_int; int var_1372_int;
	var_1342_int = var_1371_int;
	var_1343_int = var_1372_int;
	func_1903(5, var_1371_int, var_1372_int);
}


void func_10618(void)
{
	object var_4776_object;
	func_12503(var_4776_object);
	object var_4775_object;
	var_4776_object = var_4775_object;
	float var_4781_float;
	func_290(var_4781_float);
	var_4775_object->AddMark("d9q02GotoJulia", "pt_map_julia", 0, 515296, var_4781_float);
}
EMIT "Stack[-1] = 0";


void func_8576(int var_4305_int, int var_4306_int)
{
	object var_4314_object; object var_4315_object; string var_4316_string; int var_4317_int; int var_4318_int; int var_4319_int;
	bool var_4320_bool = false;
	if(var_4306_int == 5) {
		if(var_4305_int >= 7)
			var_4320_bool = true;
	}
	if(var_4320_bool != 0) {
		int var_4325_int;
		func_12520(var_4325_int);
		if(var_4325_int != 2)
			func_7787();
	} else {
		bool var_4602_bool = false;
		if(var_4306_int == 22) {
			if(var_4305_int >= 7)
				var_4602_bool = true;
		}
		if(var_4602_bool == 0) goto Label_8616;
		int var_4607_int;
		func_12520(var_4607_int);
		if(!(var_4607_int != 2)) goto Label_8616;
		func_7850();
	}
Label_8616:
	bool var_4374_bool = false;
	if(var_4306_int == 7) {
		if(var_4305_int != 1)
			var_4374_bool = true;
	}
	if(var_4374_bool != 0)
		@SendWorldWndMessage(100);
	if(var_4306_int == 0) {
		func_8754();
		func_8829();
		if(var_4305_int == 6) {
			@GetMainOutdoorScene(var_4314_object);
			@AddScriptedActor(var_4315_object, "shed_corpse", "splash_object_wo_pf.bin", var_4314_object, [0.0, 0.0, 0.0]);
			var_4315_object = null;
			var_4314_object = null;
		}
		if(var_4305_int == 9)
			func_8878();
		if(var_4305_int != 1) {
			int var_4497_int;
			func_12520(var_4497_int);
			if(var_4497_int == 1) {
				@GetVariable((("b" + (var_4305_int - 1)) + "q01"), var_4317_int);
				var_4316_string = "volonteers_burah";
			} else {
					int var_4587_int;
					func_12520(var_4587_int);
					if(!(var_4587_int == 0)) goto Label_8691;
					@GetVariable((("d" + (var_4305_int - 1)) + "q01"), var_4317_int);
					var_4316_string = "volonteers_danko";
			}
			for(;;) {
				@Trace(var_4316_string);
				if(var_4317_int == 1000) {
					bool var_4508_bool; string var_4509_string;
					var_4316_string = var_4509_string;
					func_257(var_4508_bool, var_4509_string, "rescue_locked", "");
				}
				bool var_4515_bool; string var_4516_string;
				var_4316_string = var_4516_string;
				func_257(var_4515_bool, var_4516_string, "update", "");
		}
	}
		bool var_4519_bool = false;
		if(var_4305_int == 6) {
			if(var_4306_int == 0)
				var_4519_bool = true;
		}
		if(var_4519_bool != 0)
			func_7907();
		bool var_4526_bool = false;
		if(var_4305_int == 7) {
			if(var_4306_int == 0)
				var_4526_bool = true;
		}
		if(var_4526_bool != 0) {
			var_4531_object = GlobalVars[14];
			var_4531_object->size(var_4318_int);

			for(;;) {
				if(!(0 < var_4318_int)) goto Label_8753;
				int var_4533_int;
				var_4319_int = var_4533_int;
				func_7614(var_4533_int);
				var_4319_int += 1;
			}
		}
	Label_8753:

	}
	
Label_8691:
	@GetVariable((("k" + (var_4305_int - 1)) + "q01"), var_4317_int);
	var_4316_string = "volonteers_klara";
	
}


void func_9607(int var_3170_int, int var_3171_int, int var_3172_int)
{
	var_3181_object = GlobalVars[8];
	object var_3177_object;
	var_3181_object->get(var_3177_object, var_3170_int);
	var_3182_object = GlobalVars[9];
	object var_3178_object;
	var_3182_object->get(var_3178_object, var_3170_int);
	var_3183_object = GlobalVars[10];
	object var_3179_object;
	var_3183_object->get(var_3179_object, var_3170_int);
	var_3184_object = GlobalVars[13];
	object var_3180_object;
	var_3184_object->get(var_3180_object, var_3170_int);
	if(var_3170_int == 0) {
		int var_3187_int; int var_3188_int; object var_3189_object; object var_3190_object; object var_3191_object; object var_3192_object;
		var_3171_int = var_3187_int;
		var_3172_int = var_3188_int;
		var_3177_object = var_3189_object;
		var_3178_object = var_3190_object;
		var_3179_object = var_3191_object;
		var_3180_object = var_3192_object;
		func_4497(var_3187_int, var_3188_int, var_3189_object, var_3190_object, var_3191_object, var_3192_object);
	} else if(var_3170_int == 1) {
			int var_3401_int; int var_3402_int; object var_3403_object; object var_3404_object; object var_3405_object; object var_3406_object;
			var_3171_int = var_3401_int;
			var_3172_int = var_3402_int;
			var_3177_object = var_3403_object;
			var_3178_object = var_3404_object;
			var_3179_object = var_3405_object;
			var_3180_object = var_3406_object;
			func_4694(var_3401_int, var_3402_int, var_3403_object, var_3404_object, var_3405_object, var_3406_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_3170_int == 2) {
		int var_3537_int; int var_3538_int; object var_3539_object; object var_3540_object; object var_3541_object; object var_3542_object;
		var_3171_int = var_3537_int;
		var_3172_int = var_3538_int;
		var_3177_object = var_3539_object;
		var_3178_object = var_3540_object;
		var_3179_object = var_3541_object;
		var_3180_object = var_3542_object;
		func_4900(var_3537_int, var_3538_int, var_3539_object, var_3540_object, var_3541_object, var_3542_object);
	} else if(var_3170_int == 3) {
		int var_3680_int; int var_3681_int; object var_3682_object; object var_3683_object; object var_3684_object; object var_3685_object;
		var_3171_int = var_3680_int;
		var_3172_int = var_3681_int;
		var_3177_object = var_3682_object;
		var_3178_object = var_3683_object;
		var_3179_object = var_3684_object;
		var_3180_object = var_3685_object;
		func_5130(var_3680_int, var_3681_int, var_3682_object, var_3683_object, var_3684_object, var_3685_object);
	} else if(var_3170_int == 4) {
		int var_3713_int; int var_3714_int; object var_3715_object; object var_3716_object; object var_3717_object; object var_3718_object;
		var_3171_int = var_3713_int;
		var_3172_int = var_3714_int;
		var_3177_object = var_3715_object;
		var_3178_object = var_3716_object;
		var_3179_object = var_3717_object;
		var_3180_object = var_3718_object;
		func_5348(var_3713_int, var_3714_int, var_3715_object, var_3716_object, var_3717_object, var_3718_object);
	} else if(var_3170_int == 5) {
		int var_3746_int; int var_3747_int; object var_3748_object; object var_3749_object; object var_3750_object; object var_3751_object;
		var_3171_int = var_3746_int;
		var_3172_int = var_3747_int;
		var_3177_object = var_3748_object;
		var_3178_object = var_3749_object;
		var_3179_object = var_3750_object;
		var_3180_object = var_3751_object;
		func_5593(var_3746_int, var_3747_int, var_3748_object, var_3749_object, var_3750_object, var_3751_object);
	} else if(var_3170_int == 6) {
		int var_3779_int; int var_3780_int; object var_3781_object; object var_3782_object; object var_3783_object; object var_3784_object;
		var_3171_int = var_3779_int;
		var_3172_int = var_3780_int;
		var_3177_object = var_3781_object;
		var_3178_object = var_3782_object;
		var_3179_object = var_3783_object;
		var_3180_object = var_3784_object;
		func_5661();
	} else if(var_3170_int == 7) {
		int var_3789_int; int var_3790_int; object var_3791_object; object var_3792_object; object var_3793_object; object var_3794_object;
		var_3171_int = var_3789_int;
		var_3172_int = var_3790_int;
		var_3177_object = var_3791_object;
		var_3178_object = var_3792_object;
		var_3179_object = var_3793_object;
		var_3180_object = var_3794_object;
		func_5816(var_3789_int, var_3790_int, var_3791_object, var_3792_object, var_3793_object, var_3794_object);
	} else if(var_3170_int == 8) {
		int var_3932_int; int var_3933_int; object var_3934_object; object var_3935_object; object var_3936_object; object var_3937_object;
		var_3171_int = var_3932_int;
		var_3172_int = var_3933_int;
		var_3177_object = var_3934_object;
		var_3178_object = var_3935_object;
		var_3179_object = var_3936_object;
		var_3180_object = var_3937_object;
		func_6016(var_3932_int, var_3933_int, var_3934_object, var_3935_object, var_3936_object, var_3937_object);
	} else if(var_3170_int == 9) {
		int var_3965_int; int var_3966_int; object var_3967_object; object var_3968_object; object var_3969_object; object var_3970_object;
		var_3171_int = var_3965_int;
		var_3172_int = var_3966_int;
		var_3177_object = var_3967_object;
		var_3178_object = var_3968_object;
		var_3179_object = var_3969_object;
		var_3180_object = var_3970_object;
		func_6219(var_3965_int, var_3966_int, var_3967_object, var_3968_object, var_3969_object, var_3970_object);
	} else if(var_3170_int == 10) {
		int var_3998_int; int var_3999_int; object var_4000_object; object var_4001_object; object var_4002_object; object var_4003_object;
		var_3171_int = var_3998_int;
		var_3172_int = var_3999_int;
		var_3177_object = var_4000_object;
		var_3178_object = var_4001_object;
		var_3179_object = var_4002_object;
		var_3180_object = var_4003_object;
		func_6428(var_3998_int, var_3999_int, var_4000_object, var_4001_object, var_4002_object, var_4003_object);
	} else if(var_3170_int == 11) {
		int var_4031_int; int var_4032_int; object var_4033_object; object var_4034_object; object var_4035_object; object var_4036_object;
		var_3171_int = var_4031_int;
		var_3172_int = var_4032_int;
		var_3177_object = var_4033_object;
		var_3178_object = var_4034_object;
		var_3179_object = var_4035_object;
		var_3180_object = var_4036_object;
		func_6640(var_4031_int, var_4032_int, var_4033_object, var_4034_object, var_4035_object, var_4036_object);
	} else if(var_3170_int == 12) {
		int var_4064_int; int var_4065_int; object var_4066_object; object var_4067_object; object var_4068_object; object var_4069_object;
		var_3171_int = var_4064_int;
		var_3172_int = var_4065_int;
		var_3177_object = var_4066_object;
		var_3178_object = var_4067_object;
		var_3179_object = var_4068_object;
		var_3180_object = var_4069_object;
		func_6837(var_4064_int, var_4065_int, var_4066_object, var_4067_object, var_4068_object, var_4069_object);
	} else if(var_3170_int == 13) {
		int var_4097_int; int var_4098_int; object var_4099_object; object var_4100_object; object var_4101_object; object var_4102_object;
		var_3171_int = var_4097_int;
		var_3172_int = var_4098_int;
		var_3177_object = var_4099_object;
		var_3178_object = var_4100_object;
		var_3179_object = var_4101_object;
		var_3180_object = var_4102_object;
		func_7040(var_4097_int, var_4098_int, var_4099_object, var_4100_object, var_4101_object, var_4102_object);
	} else if(var_3170_int == 14) {
		int var_4130_int; int var_4131_int; object var_4132_object; object var_4133_object; object var_4134_object; object var_4135_object;
		var_3171_int = var_4130_int;
		var_3172_int = var_4131_int;
		var_3177_object = var_4132_object;
		var_3178_object = var_4133_object;
		var_3179_object = var_4134_object;
		var_3180_object = var_4135_object;
		func_7240(var_4130_int, var_4131_int, var_4132_object, var_4133_object, var_4134_object, var_4135_object);
	} else if(var_3170_int == 15) {
		int var_4273_int; int var_4274_int; object var_4275_object; object var_4276_object; object var_4277_object; object var_4278_object;
		var_3171_int = var_4273_int;
		var_3172_int = var_4274_int;
		var_3177_object = var_4275_object;
		var_3178_object = var_4276_object;
		var_3179_object = var_4277_object;
		var_3180_object = var_4278_object;
		func_7422(var_4273_int, var_4274_int, var_4275_object, var_4276_object, var_4277_object, var_4278_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_6536(int var_1671_int, int var_1672_int, object var_1673_object, object var_1674_object, object var_1675_object, object var_1676_object)
{
	if(var_1672_int == 0) {
		func_802(11, false);
		func_819(11, false, 1);
		int var_1684_int; int var_1685_int; object var_1686_object; object var_1687_object; object var_1688_object;
		var_1684_int = 11;
		var_1671_int = var_1685_int;
		var_1673_object = var_1686_object;
		var_1674_object = var_1687_object;
		var_1675_object = var_1688_object;
		func_628(var_1685_int, var_1686_object, var_1687_object, var_1688_object);
		object var_1689_object;
		var_1676_object = var_1689_object;
		func_311(var_1689_object, 0);
		func_876(11, false, 5);
		func_938(11, false, 5);
	}
	int var_1698_int;
	var_1672_int = var_1698_int;
	func_989(11, var_1698_int);
	int var_1700_int; int var_1701_int;
	var_1671_int = var_1700_int;
	var_1672_int = var_1701_int;
	func_1630(11, var_1700_int, var_1701_int);
}


void func_10634(void)
{
	object var_5146_object;
	func_12503(var_5146_object);
	object var_5145_object;
	var_5146_object = var_5145_object;
	float var_5151_float;
	func_290(var_5151_float);
	var_5145_object->AddMark("d9q03GotoLara", "pt_map_lara", 0, 515294, var_5151_float);
}
EMIT "Stack[-1] = 0";


void func_14735(int var_4306_int)
{
	object var_4316_object; object var_4317_object; object var_4318_object; object var_4319_object; object var_4320_object; object var_4321_object; object var_4322_object; object var_4323_object; object var_4324_object;
	if(var_4306_int == 1) {
		@Trace("Special diseased house: r4_house_2_02");
		@GetSceneByName(var_4316_object, "r4_house_2_02");
		@ReplaceScene(var_4316_object, "s_r4_house_2_02.isc");
		var_4316_object = null;
	} else if(var_4306_int == 2) {
			@Trace("Special house: r7_house2_01");
			@GetSceneByName(var_4317_object, "r7_house2_01");
			@ReplaceScene(var_4317_object, "r7_house2_01_d3q02.isc");
			var_4317_object = null;
	}

	
	if(var_4306_int == 3) {
		@Trace("Special diseased house: house7_03");
		@GetSceneByName(var_4318_object, "house7_03");
		@ReplaceScene(var_4318_object, "s_house7_03.isc");
		var_4318_object = null;
	} else if(var_4306_int == 4) {
		@GetSceneByName(var_4319_object, "theater");
		@ReplaceScene(var_4319_object, "dtheater_danko.isc");
		var_4319_object = null;
	} else if(var_4306_int == 5) {
		@Trace("Special house: sobor (with corpses)");
		@GetSceneByName(var_4320_object, "sobor");
		@ReplaceScene(var_4320_object, "sobor_trup.isc");
		var_4320_object = null;
	} else if(var_4306_int == 6) {
		@Trace("Special house: sobor (normal)");
		@GetSceneByName(var_4321_object, "sobor");
		@ReplaceScene(var_4321_object, "sobor_danko.isc");
		var_4321_object = null;
	} else if(var_4306_int == 7) {
		@Trace("Special diseased house: r4_house_2_02");
		@GetSceneByName(var_4322_object, "r4_house_2_02");
		@ReplaceScene(var_4322_object, "s_r4_house_2_02.isc");
		var_4322_object = null;
	} else if(var_4306_int == 8) {
		@Trace("Special replaced house: uprava_admin");
		@GetSceneByName(var_4323_object, "uprava_admin");
		@ReplaceScene(var_4323_object, "uprava_admin_army_danko.isc");
		var_4323_object = null;
	} else if(var_4306_int == 11) {
		@GetSceneByName(var_4324_object, "theater");
		@ReplaceScene(var_4324_object, "theater_danko.isc");
		var_4324_object = null;
	}
}


// @pe
void func_4497(int var_3187_int, int var_3188_int, object var_3189_object, object var_3190_object, object var_3191_object, object var_3192_object)
{
	if(var_3188_int == 0) {
		func_802(0, false);
		func_819(0, false, 1);
		int var_3201_int; object var_3202_object; object var_3203_object; object var_3204_object;
		var_3187_int = var_3201_int;
		var_3189_object = var_3202_object;
		var_3190_object = var_3203_object;
		var_3191_object = var_3204_object;
		func_726(0, var_3201_int, var_3202_object, var_3203_object, var_3204_object);
		object var_3239_object;
		var_3192_object = var_3239_object;
		func_311(var_3239_object, 2);
		func_876(0, false, 4);
		func_938(0, true, 4);
	}
	func_785(0, false);
	int var_3250_int; int var_3251_int;
	var_3187_int = var_3250_int;
	var_3188_int = var_3251_int;
	func_4041(0, var_3250_int, var_3251_int);
}


void func_3477(int var_4158_int, int var_4159_int, int var_4160_int)
{
	int var_4165_int; int var_4166_int; int var_4167_int; int var_4168_int;
	bool var_4169_bool = false;
	if(var_4160_int > 8) {
		if(var_4160_int < 21)
			var_4169_bool = true;
	}
	if(var_4169_bool != 0) {
		int var_4174_int;
		var_4158_int = var_4174_int;
		func_509(var_4174_int, "pers_rat", "rat.xml", 3);
		int var_4178_int;
		var_4158_int = var_4178_int;
		func_509(var_4178_int, "pers_alkash", "alkash.xml", 2);
		int var_4182_int;
		var_4158_int = var_4182_int;
		func_509(var_4182_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_4187_float; int var_4188_int;
		func_1171(var_4187_float, var_4188_int);
		if((2 * var_4187_float) != 0) {
			int var_4190_int; int var_4193_int;
			var_4158_int = var_4190_int;
			var_4165_int = var_4193_int;
			func_509(var_4190_int, "pers_grabitel", "grabitel.xml", var_4193_int);
		}
		if((var_4188_int + 1) >= 2) {
			int var_4198_int;
			var_4158_int = var_4198_int;
			func_509(var_4198_int, "pers_patrool", "patrol.xml", 2);
			bool var_4202_bool; int var_4203_int;
			var_4159_int = var_4203_int;
			func_1378(var_4202_bool, var_4203_int);
			if(var_4202_bool != 0) {
				int var_4204_int;
				var_4158_int = var_4204_int;
				func_509(var_4204_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_4209_float; int var_4210_int;
		func_1261(var_4209_float, var_4210_int);
		if((1 * var_4209_float) != 0) {
			int var_4212_int; int var_4215_int;
			var_4158_int = var_4212_int;
			var_4166_int = var_4215_int;
			func_509(var_4212_int, "pers_bomber", "bomber.xml", var_4215_int);
		}
	} else {
		int var_4229_int;
		var_4158_int = var_4229_int;
		func_509(var_4229_int, "pers_rat", "rat.xml", 5);
		int var_4233_int;
		var_4158_int = var_4233_int;
		func_509(var_4233_int, "pers_alkash", "alkash.xml", 1);
		if((var_4210_int + 1) >= 2) {
			int var_4241_int;
			var_4158_int = var_4241_int;
			func_509(var_4241_int, "pers_patrool", "patrol.xml", 1);
			bool var_4245_bool; int var_4246_int;
			var_4159_int = var_4246_int;
			func_1378(var_4245_bool, var_4246_int);
			if(var_4245_bool != 0) {
				int var_4247_int;
				var_4158_int = var_4247_int;
				func_509(var_4247_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		int var_4251_int;
		var_4158_int = var_4251_int;
		func_509(var_4251_int, "pers_rat", "rat.xml", 2);
		float var_4256_float; int var_4257_int;
		var_4159_int = var_4257_int;
		func_1171(var_4256_float, var_4257_int);
		if((3 * var_4256_float) != 0) {
			int var_4259_int; int var_4262_int;
			var_4158_int = var_4259_int;
			var_4167_int = var_4262_int;
			func_509(var_4259_int, "pers_grabitel", "grabitel.xml", var_4262_int);
		}
		float var_4264_float; int var_4265_int;
		var_4159_int = var_4265_int;
		func_1261(var_4264_float, var_4265_int);
		if((1 * var_4264_float) == 0) goto Label_3639;
		int var_4267_int; int var_4270_int;
		var_4158_int = var_4267_int;
		var_4168_int = var_4270_int;
		func_509(var_4267_int, "pers_bomber", "bomber.xml", var_4270_int);
	}
Label_3639:
	bool var_4216_bool; int var_4217_int; int var_4218_int;
	var_4159_int = var_4217_int;
	var_4160_int = var_4218_int;
	func_1351(var_4216_bool, var_4217_int, var_4218_int);
	if(var_4216_bool != 0) {
		int var_4219_int;
		var_4158_int = var_4219_int;
		func_509(var_4219_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_4223_bool; int var_4224_int;
	var_4159_int = var_4224_int;
	func_1378(var_4223_bool, var_4224_int);
	if(var_4223_bool != 0) {
		int var_4225_int;
		var_4158_int = var_4225_int;
		func_509(var_4225_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


void func_406(bool var_493_bool, int var_494_int)
{
	int var_498_int;
	var_494_int = var_498_int;
	string var_497_string;
	func_305(var_497_string, var_498_int);
	int var_496_int;
	@GetVariable(var_497_string, var_496_int);
	var_493_bool = (var_496_int & 3) == 0;
}


void func_10650(void)
{
	object var_4966_object;
	func_12503(var_4966_object);
	object var_4965_object;
	var_4966_object = var_4965_object;
	float var_4971_float;
	func_290(var_4971_float);
	var_4965_object->AddMark("d9q04GotoAnna", "pt_map_anna", 0, 511375, var_4971_float);
}
EMIT "Stack[-1] = 0";


void func_11679(void)
{
	object var_5879_object;
	func_12503(var_5879_object);
	object var_5877_object;
	var_5879_object = var_5877_object;
	object var_5878_object;
	var_5877_object->FindMark(var_5878_object, "d7q01AglajaFindLierSelf");
	if(var_5878_object != 0)
		var_5878_object->Remove();
	var_5877_object->FindMark(var_5878_object, "d7q01AglajaGotoBirdmaskSelf");
	if(var_5878_object != 0)
		var_5878_object->Remove();
	var_5877_object->FindMark(var_5878_object, "d7q01BirdmaskD");
	if(var_5878_object != 0)
		var_5878_object->Remove();
	var_5877_object->FindMark(var_5878_object, "d7q01BirdmaskM");
	if(var_5878_object != 0)
		var_5878_object->Remove();
	var_5877_object->FindMark(var_5878_object, "d7q01BirdmaskU");
	if(var_5878_object != 0)
		var_5878_object->Remove();
	var_5877_object->FindMark(var_5878_object, "d7q02AlexandrGotoPetr");
	if(var_5878_object != 0)
		var_5878_object->Remove();
	var_5877_object->FindMark(var_5878_object, "d7q02MarkGotoAlexandr");
	if(var_5878_object != 0)
		var_5878_object->Remove();
	var_5877_object->FindMark(var_5878_object, "d7q02MarkGotoCemetery");
	if(var_5878_object != 0)
		var_5878_object->Remove();
	var_5877_object->FindMark(var_5878_object, "d7q04WastedGotoGatherer");
	if(var_5878_object != 0)
		var_5878_object->Remove();
	var_5877_object->FindMark(var_5878_object, "d7q04NudeGotoAndrei");
	if(var_5878_object != 0)
		var_5878_object->Remove();
	bool var_5900_bool;
	func_12478(var_5900_bool, 165);
	bool var_5902_bool;
	func_12478(var_5902_bool, 170);
	bool var_5904_bool;
	func_12478(var_5904_bool, 637);
	bool var_5906_bool;
	func_12478(var_5906_bool, 641);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_418(int var_81_int)
{
	int var_87_int;
	var_81_int = var_87_int;
	string var_86_string;
	func_305(var_86_string, var_87_int);
	int var_84_int;
	@GetVariable(var_86_string, var_84_int);
	string var_91_string; int var_92_int;
	var_81_int = var_92_int;
	func_305(var_91_string, var_92_int);
	@SetVariable(var_91_string, ((var_84_int & 252) | 0));
}


// @pe
void func_5541(int var_2620_int, int var_2621_int, object var_2622_object, object var_2623_object, object var_2624_object, object var_2625_object)
{
	if(var_2621_int == 0) {
		func_802(5, true);
		func_819(5, true, 1);
		int var_2634_int; object var_2635_object; object var_2636_object; object var_2637_object;
		var_2620_int = var_2634_int;
		var_2622_object = var_2635_object;
		var_2623_object = var_2636_object;
		var_2624_object = var_2637_object;
		func_647(5, var_2634_int, var_2635_object, var_2636_object, var_2637_object);
		object var_2638_object;
		var_2625_object = var_2638_object;
		func_311(var_2638_object, 1);
		func_876(5, true, 4);
		func_938(5, false, 4);
	}
	func_785(5, false);
	int var_2649_int; int var_2650_int;
	var_2620_int = var_2649_int;
	var_2621_int = var_2650_int;
	func_2950(5, var_2649_int, var_2650_int);
}


// @pe
void func_10666(void)
{
	@SetVariable("d8BurahLetter", 1);
}


// @pe
void func_10672(void)
{
	int var_5106_int;
	func_138(var_5106_int, "map_chertez_state");
	if(var_5106_int <= 1) {
		@SetVariable("map_chertez_state", 1);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_436(bool var_1980_bool, int var_1981_int)
{
	int var_1985_int;
	var_1981_int = var_1985_int;
	string var_1984_string;
	func_305(var_1984_string, var_1985_int);
	int var_1983_int;
	@GetVariable(var_1984_string, var_1983_int);
	var_1980_bool = (var_1983_int & 3) == 1;
}


// @pe
void func_6588(int var_2901_int, int var_2902_int, object var_2903_object, object var_2904_object, object var_2905_object, object var_2906_object)
{
	if(var_2902_int == 0) {
		func_802(11, false);
		func_819(11, true, 1);
		int var_2915_int; object var_2916_object; object var_2917_object; object var_2918_object;
		var_2901_int = var_2915_int;
		var_2903_object = var_2916_object;
		var_2904_object = var_2917_object;
		var_2905_object = var_2918_object;
		func_647(11, var_2915_int, var_2916_object, var_2917_object, var_2918_object);
		object var_2919_object;
		var_2906_object = var_2919_object;
		func_311(var_2919_object, 1);
		func_876(11, true, 5);
		func_938(11, false, 5);
	}
	func_785(11, false);
	int var_2930_int; int var_2931_int;
	var_2901_int = var_2930_int;
	var_2902_int = var_2931_int;
	func_2770(11, var_2930_int, var_2931_int);
}


void func_7614(int var_10_int)
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


void func_448(int var_24_int)
{
	int var_30_int;
	var_24_int = var_30_int;
	string var_29_string;
	func_305(var_29_string, var_30_int);
	int var_27_int;
	@GetVariable(var_29_string, var_27_int);
	string var_37_string; int var_38_int;
	var_24_int = var_38_int;
	func_305(var_37_string, var_38_int);
	@SetVariable(var_37_string, ((var_27_int & 252) | 1));
}


// @pe
void func_10689(void)
{
	int var_4665_int;
	func_138(var_4665_int, "map_chertez_state");
	if(var_4665_int <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_4549(object var_64_object)
{
	var_64_object->add("dt_house3_05_i2");
	var_64_object->add("dt_house3_05");
	var_64_object->add("dt_house3_06_i2");
	var_64_object->add("dt_house_1_10");
	var_64_object->add("house5_10");
	var_64_object->add("house5_07");
	var_64_object->add("dt_house_1_03");
	var_64_object->add("dt_house1_union2_04l");
	var_64_object->add("dt_house1_union2_04r");
	var_64_object->add("house5_22");
	var_64_object->add("house5_08");
	var_64_object->add("dt_house1_union2_02l");
	var_64_object->add("dt_house1_union2_02r");
}


// @pe
void func_10706(void)
{
	int var_4744_int;
	func_138(var_4744_int, "map_chertez_state");
	if(var_4744_int <= 3) {
		@SetVariable("map_chertez_state", 3);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_466(bool var_72_bool, int var_73_int)
{
	int var_77_int;
	var_73_int = var_77_int;
	string var_76_string;
	func_305(var_76_string, var_77_int);
	int var_75_int;
	@GetVariable(var_76_string, var_75_int);
	var_72_bool = (var_75_int & 3) == 2;
}


// @pe
void func_5593(int var_3746_int, int var_3747_int, object var_3748_object, object var_3749_object, object var_3750_object, object var_3751_object)
{
	if(var_3747_int == 0) {
		func_802(5, false);
		func_819(5, false, 1);
		int var_3760_int; object var_3761_object; object var_3762_object; object var_3763_object;
		var_3746_int = var_3760_int;
		var_3748_object = var_3761_object;
		var_3749_object = var_3762_object;
		var_3750_object = var_3763_object;
		func_726(5, var_3760_int, var_3761_object, var_3762_object, var_3763_object);
		object var_3764_object;
		var_3751_object = var_3764_object;
		func_311(var_3764_object, 2);
		func_876(5, false, 4);
		func_938(5, true, 4);
	}
	func_785(5, false);
	int var_3775_int; int var_3776_int;
	var_3746_int = var_3775_int;
	var_3747_int = var_3776_int;
	func_3853(5, var_3775_int, var_3776_int);
}


void func_478(int var_76_int)
{
	int var_82_int;
	var_76_int = var_82_int;
	string var_81_string;
	func_305(var_81_string, var_82_int);
	int var_79_int;
	@GetVariable(var_81_string, var_79_int);
	string var_86_string; int var_87_int;
	var_76_int = var_87_int;
	func_305(var_86_string, var_87_int);
	@SetVariable(var_86_string, ((var_79_int & 252) | 2));
}


// @pe
void func_10723(void)
{
	int var_4859_int;
	func_138(var_4859_int, "map_chertez_state");
	if(var_4859_int <= 4) {
		@SetVariable("map_chertez_state", 4);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_4590(int var_887_int, int var_888_int, object var_889_object, object var_890_object, object var_891_object, object var_892_object)
{
	if(var_888_int == 0) {
		func_802(1, false);
		func_819(1, false, 1);
		int var_900_int; int var_901_int; object var_902_object; object var_903_object; object var_904_object;
		var_900_int = 1;
		var_887_int = var_901_int;
		var_889_object = var_902_object;
		var_890_object = var_903_object;
		var_891_object = var_904_object;
		func_628(var_901_int, var_902_object, var_903_object, var_904_object);
		object var_905_object;
		var_892_object = var_905_object;
		func_311(var_905_object, 0);
		func_876(1, false, 8);
		func_938(1, false, 8);
	}
	int var_914_int;
	var_888_int = var_914_int;
	func_1056(1, var_914_int);
	int var_916_int; int var_917_int;
	var_887_int = var_916_int;
	var_888_int = var_917_int;
	func_2389(1, var_916_int, var_917_int);
}


void func_496(int var_488_int)
{
	object var_490_object;
	@GetMainOutdoorScene(var_490_object);
	if(var_490_object == null)
		@Trace("City manager: main outdoor scene not found");
	var_490_object->RemoveAllRegionActors(var_488_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6640(int var_4031_int, int var_4032_int, object var_4033_object, object var_4034_object, object var_4035_object, object var_4036_object)
{
	if(var_4032_int == 0) {
		func_802(11, true);
		func_819(11, false, 1);
		int var_4045_int; object var_4046_object; object var_4047_object; object var_4048_object;
		var_4031_int = var_4045_int;
		var_4033_object = var_4046_object;
		var_4034_object = var_4047_object;
		var_4035_object = var_4048_object;
		func_726(11, var_4045_int, var_4046_object, var_4047_object, var_4048_object);
		object var_4049_object;
		var_4036_object = var_4049_object;
		func_311(var_4049_object, 2);
		func_876(11, false, 5);
		func_938(11, true, 5);
	}
	func_785(11, false);
	int var_4060_int; int var_4061_int;
	var_4031_int = var_4060_int;
	var_4032_int = var_4061_int;
	func_3665(11, var_4060_int, var_4061_int);
}


// @pe
void func_10740(void)
{
	int var_4794_int;
	func_138(var_4794_int, "map_chertez_state");
	if(var_4794_int <= 6) {
		@SetVariable("map_chertez_state", 6);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_509(int var_784_int, string var_785_string, string var_786_string, int var_787_int)
{
	object var_789_object;
	@GetMainOutdoorScene(var_789_object);
	if(var_789_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_789_object->SetRegionActorCount(var_784_int, var_785_string, var_786_string, var_787_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11773(void)
{
	func_183("mnogogrannik@door1", true);
}


void func_11780(void)
{
	object var_5769_object;
	func_12503(var_5769_object);
	object var_5767_object;
	var_5769_object = var_5767_object;
	object var_5768_object;
	var_5767_object->FindMark(var_5768_object, "d9q01GotoViktor");
	if(var_5768_object != 0)
		var_5768_object->Remove();
	var_5767_object->FindMark(var_5768_object, "d9q02GotoJulia");
	if(var_5768_object != 0)
		var_5768_object->Remove();
	var_5767_object->FindMark(var_5768_object, "d9q03GotoLara");
	if(var_5768_object != 0)
		var_5768_object->Remove();
	var_5767_object->FindMark(var_5768_object, "d9q04GotoAnna");
	if(var_5768_object != 0)
		var_5768_object->Remove();
	var_5767_object->FindMark(var_5768_object, "d9q05AglajaGotoBurah");
	if(var_5768_object != 0)
		var_5768_object->Remove();
	bool var_5780_bool;
	func_12478(var_5780_bool, 182);
	bool var_5782_bool;
	func_12478(var_5782_bool, 655);
	bool var_5784_bool;
	func_12478(var_5784_bool, 659);
	bool var_5786_bool;
	func_12478(var_5786_bool, 662);
	bool var_5788_bool;
	func_12478(var_5788_bool, 764);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10757(void)
{
	func_183("theater@door1", true);
}


void func_14856(object var_4366_object, object var_4367_object, cvector var_4368_cvector, cvector var_4369_cvector)
{
	object var_4371_object;
	var_4367_object->AddStationaryActor(var_4371_object, var_4368_cvector, var_4369_cvector, "pers_morlok", "Danko_arena_manager.xml");
	var_4371_object = var_4366_object;
}
EMIT "Stack[-1] = 0";


void func_522(int var_2216_int, string var_2217_string, string var_2218_string, int var_2219_int, int var_2220_int, int var_2221_int)
{
	object var_2223_object;
	@GetMainOutdoorScene(var_2223_object);
	if(var_2223_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_2223_object->SetRegionActorCount(var_2216_int, var_2217_string, var_2218_string, var_2219_int, var_2220_int, var_2221_int);
}
EMIT "Stack[-1] = 0";


void func_7691(int var_380_int)
{
	var_387_object = GlobalVars[14];
	int var_384_int;
	var_387_object->size(var_384_int);
	bool var_388_bool = true;
	var_389_bool = var_380_int >= var_384_int;
	if(var_389_bool != 1) {
		var_391_bool = var_380_int == -1;
		if(var_391_bool != 1)
			var_388_bool = false;
	}
	if(var_388_bool != 0)
		@Trace("Wrong bonfire index " + var_380_int);
	var_394_object = GlobalVars[14];
	object var_385_object;
	var_394_object->get(var_385_object, var_380_int);
	object var_386_object;
	@FindActor(var_386_object, ("bonfire_light" + (var_380_int + 1)));
	if(!var_386_object) //@nz
		@Trace(("Bofire  light " + (var_380_int + 1)) + " not found");
	else
		var_386_object->Switch(false);
	if(var_385_object != 0)
		@RemoveActor(var_385_object);
	var_407_object = GlobalVars[14];
	var_407_object->set(var_380_int, Obj());
	@Trace(("Cleanup bonfire " + (var_380_int + 1)) + "... ok");
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10764(void)
{
	func_183("theater@door1", false);
}


// @pe
void func_5645(void)
{
}


// @pe
void func_5647(int var_1376_int)
{
	int var_1382_int;
	var_1376_int = var_1382_int;
	func_1056(6, var_1382_int);
}


// @pe
void func_10771(void)
{
	func_12424();
}


// @pe
void func_5654(void)
{
	func_785(6, false);
}


void func_535(int var_2143_int, string var_2144_string, string var_2145_string, int var_2146_int)
{
	object var_2148_object;
	@GetMainOutdoorScene(var_2148_object);
	if(var_2148_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_2148_object->SetRegionActorCountByType(var_2143_int, var_2144_string, var_2145_string, var_2146_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10776(object var_4811_object)
{
	object var_4816_object;
	var_4811_object = var_4816_object;
	bool var_4815_bool;
	func_200(var_4815_bool, var_4816_object, -0.3);
}


// @pe
void func_5661(void)
{
	func_785(6, false);
}


void func_2590(int var_3028_int, int var_3029_int, int var_3030_int)
{
	int var_3033_int; int var_3034_int;
	bool var_3035_bool = false;
	if(var_3030_int > 8) {
		if(var_3030_int < 21)
			var_3035_bool = true;
	}
	if(var_3035_bool != 0) {
		int var_3040_int;
		var_3028_int = var_3040_int;
		func_509(var_3040_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_3044_int;
		var_3028_int = var_3044_int;
		func_509(var_3044_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		int var_3048_int;
		var_3028_int = var_3048_int;
		func_509(var_3048_int, "pers_rat_big", "rat_big.xml", 3);
		int var_3052_int;
		var_3028_int = var_3052_int;
		func_535(var_3052_int, "fog", "fog.xml", 8);
		if(var_3029_int >= 5) {
			int var_3058_int;
			var_3028_int = var_3058_int;
			func_535(var_3058_int, "fog", "fog_hunter.xml", 3);
		}
		float var_3063_float; int var_3064_int;
		func_1261(var_3063_float, var_3064_int);
		if((1 * var_3063_float) != 0) {
			int var_3066_int; int var_3069_int;
			var_3028_int = var_3066_int;
			var_3033_int = var_3069_int;
			func_509(var_3066_int, "pers_bomber", "bomber.xml", var_3069_int);
		}
	} else {
		int var_3107_int;
		var_3028_int = var_3107_int;
		func_509(var_3107_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_3111_int;
		var_3028_int = var_3111_int;
		func_509(var_3111_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_3115_int;
		var_3028_int = var_3115_int;
		func_509(var_3115_int, "pers_rat_big", "rat_big.xml", 4);
		int var_3119_int;
		var_3028_int = var_3119_int;
		func_535(var_3119_int, "fog", "fog.xml", 6);
		if(var_3064_int >= 5) {
			int var_3125_int;
			var_3028_int = var_3125_int;
			func_535(var_3125_int, "fog", "fog_hunter.xml", 2);
		}
		float var_3130_float; int var_3131_int;
		var_3029_int = var_3131_int;
		func_1261(var_3130_float, var_3131_int);
		if((1 * var_3130_float) == 0) goto Label_2708;
		int var_3133_int; int var_3136_int;
		var_3028_int = var_3133_int;
		var_3034_int = var_3136_int;
		func_509(var_3133_int, "pers_bomber", "bomber.xml", var_3136_int);
	}
Label_2708:
	int var_3070_int;
	var_3028_int = var_3070_int;
	func_522(var_3070_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_3076_int;
	var_3028_int = var_3076_int;
	func_522(var_3076_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_3082_int;
	var_3028_int = var_3082_int;
	func_522(var_3082_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_3088_int;
	var_3028_int = var_3088_int;
	func_522(var_3088_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_3094_bool; int var_3095_int; int var_3096_int;
	var_3029_int = var_3095_int;
	var_3030_int = var_3096_int;
	func_1351(var_3094_bool, var_3095_int, var_3096_int);
	if(var_3094_bool != 0) {
		int var_3097_int;
		var_3028_int = var_3097_int;
		func_509(var_3097_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3101_bool; int var_3102_int;
	var_3029_int = var_3102_int;
	func_1378(var_3101_bool, var_3102_int);
	if(var_3101_bool != 0) {
		int var_3103_int;
		var_3028_int = var_3103_int;
		func_509(var_3103_int, "pers_sanitar", "sanitar.xml", 2);
	}
	
}


// @pe
void func_10783(void)
{
	func_183("termitnik@door1", true);
}


// @pe
void func_4642(int var_2276_int, int var_2277_int, object var_2278_object, object var_2279_object, object var_2280_object, object var_2281_object)
{
	if(var_2277_int == 0) {
		func_802(1, true);
		func_819(1, true, 1);
		int var_2290_int; object var_2291_object; object var_2292_object; object var_2293_object;
		var_2276_int = var_2290_int;
		var_2278_object = var_2291_object;
		var_2279_object = var_2292_object;
		var_2280_object = var_2293_object;
		func_647(1, var_2290_int, var_2291_object, var_2292_object, var_2293_object);
		object var_2294_object;
		var_2281_object = var_2294_object;
		func_311(var_2294_object, 1);
		func_876(1, true, 8);
		func_938(1, false, 8);
	}
	func_785(1, false);
	int var_2305_int; int var_2306_int;
	var_2276_int = var_2305_int;
	var_2277_int = var_2306_int;
	func_3310(1, var_2305_int, var_2306_int);
}


void func_548(int var_572_int, bool var_573_bool)
{
	object var_578_object; bool var_580_bool; object var_581_object;
	@GetMainOutdoorScene(var_578_object);
	object var_579_object;
	var_578_object->GetGroupActors(var_579_object, (101 + var_572_int));
	if(var_579_object != 0) {

		for(;;) {
			var_579_object->Next(var_580_bool, var_581_object);
			if(var_580_bool != 0) {
				bool var_586_bool; object var_587_object;
				var_581_object = var_587_object;
				func_87(var_586_bool, var_587_object, "locked");
				if(var_586_bool != 0)
					var_581_object->SetProperty("locked", var_573_bool);
				else
					@Trace(("Actor \"" + var_581_object) + "\" can't be locked");
			var_581_object = null;
	}
		}
	}
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_6692(object var_266_object)
{
	var_266_object->add("r6_house2_03");
	var_266_object->add("r6_house4_01_i2");
	var_266_object->add("r6_house4_02_i2");
	var_266_object->add("r6_house4_02");
	var_266_object->add("r6_house3_02_i2");
	var_266_object->add("r6_house3_02");
	var_266_object->add("r6_house3_01_i2");
	var_266_object->add("r6_house3_01");
	var_266_object->add("r6_house2_01");
	var_266_object->add("r6_house7_01");
	var_266_object->add("r6_house7_02");
	var_266_object->add("r6_House6_01");
	var_266_object->add("r6_house2_02");
}


// @pe
void func_10790(void)
{
	func_183("termitnik@door1", false);
}


// @pe
void func_5668(object var_178_object)
{
	var_178_object->add("House6_02");
	var_178_object->add("House6_01");
	var_178_object->add("house_2_01");
	var_178_object->add("house7_03");
	var_178_object->add("house7_02");
	var_178_object->add("house3_01_i2");
	var_178_object->add("house3_01");
	var_178_object->add("house_2_03");
	var_178_object->add("house_2_02");
	var_178_object->add("house4_01_i2");
	var_178_object->add("house4_01");
	var_178_object->add("House6_05");
	var_178_object->add("House6_04");
	var_178_object->add("House6_03");
}


// @pe
void func_10797(void)
{
	@SetVariable("resque_list", 1);
	func_14467();
}


void func_8754(void)
{
	object var_4477_object; bool var_4478_bool; cvector var_4479_cvector; cvector var_4480_cvector; string var_4481_string;
	int var_4482_int;
	func_12520(var_4482_int);
	if(var_4482_int == 0)
		return 16;
	var_4485_object = GlobalVars[6];
	int var_4474_int;
	var_4485_object->size(var_4474_int);
	object var_4475_object;
	@GetMainOutdoorScene(var_4475_object);
	int var_4476_int = 0;
	
	for(;;) {
		if(var_4476_int < var_4474_int) {
			var_4487_object = GlobalVars[6];
			var_4487_object->get(var_4477_object, var_4476_int);
			if(var_4477_object != 0) {
			} else {
			var_4475_object->GetLocator(("pt_plant" + (var_4476_int + 1)), var_4478_bool, var_4479_cvector, var_4480_cvector);
			if(!var_4478_bool) { //@nz
				@Trace("Plant point not found");
				goto Label_8824;
			}
			@RandOneOf(var_4481_string, 6, 3, 3, 3, 1, 1, "", "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
			if(var_4481_string != 0) {
				var_4475_object->AddStationaryActorByType(var_4477_object, var_4479_cvector, var_4480_cvector, "scripted", (("item_" + var_4481_string) + "_stat.xml"));
				var_4514_object = GlobalVars[6];
				var_4514_object->set(var_4476_int, var_4477_object);
				@Trace((("New plant: \"" + var_4481_string) + "\" at location #") + (var_4476_int + 1));
			}
			var_4477_object = null;
		}
		return 16;
		}
	Label_8824:
		var_4476_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


// @pe
void func_10806(void)
{
	func_183("factory@door1", false);
}


// @pe
void func_10813(void)
{
	func_183("icot_eva@door1", true);
}


void func_11843(void)
{
	object var_5982_object;
	func_12503(var_5982_object);
	object var_5980_object;
	var_5982_object = var_5980_object;
	object var_5981_object;
	var_5980_object->FindMark(var_5981_object, "d10q01AglajaGotoPetr");
	if(var_5981_object != 0)
		var_5981_object->Remove();
	var_5980_object->FindMark(var_5981_object, "d10q02KaterinaGotoRubin");
	if(var_5981_object != 0)
		var_5981_object->Remove();
	var_5980_object->FindMark(var_5981_object, "d10q02RubinGotoMaria");
	if(var_5981_object != 0)
		var_5981_object->Remove();
	var_5980_object->FindMark(var_5981_object, "d10q02GeorgGotoAglaja");
	if(var_5981_object != 0)
		var_5981_object->Remove();
	var_5980_object->FindMark(var_5981_object, "d10q03GotoMark");
	if(var_5981_object != 0)
		var_5981_object->Remove();
	var_5980_object->FindMark(var_5981_object, "d10q03MarkGotoBlock");
	if(var_5981_object != 0)
		var_5981_object->Remove();
	bool var_5995_bool;
	func_12478(var_5995_bool, 186);
	bool var_5997_bool;
	func_12478(var_5997_bool, 666);
	bool var_5999_bool;
	func_12478(var_5999_bool, 672);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_10820(void)
{
	object var_6105_object;
	func_12503(var_6105_object);
	object var_6103_object;
	var_6105_object = var_6103_object;
	object var_6104_object;
	var_6103_object->FindMark(var_6104_object, "d1EvaGotoMaria");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1EvaInfo");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1GeorgInfo");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1JuliaMapMarkEva");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1JuliaMapMarkLara");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1KaterinaMapMark");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1q01AlexandrGotoJulia");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1q01AnnaMapMarkMladVlad");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1q01EvaGotoSimon");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1q01EvaMapMarkMladVlad");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1q01GeorgGotoViktor");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1q01JuliaGotoBigVlad");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1q01LaraMarkMladVlad");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1q01PatrolGotoAlexandr");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1q01ViktorGotoIsidor");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1q02AnnaGotoLaska");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1q02JuliaGotoAnna");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1q03KapellaGotoOspina");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	var_6103_object->FindMark(var_6104_object, "d1q03MladVladGotoOspina");
	if(var_6104_object != 0)
		var_6104_object->Remove();
	bool var_6144_bool;
	func_12478(var_6144_bool, 2);
	bool var_6146_bool;
	func_12478(var_6146_bool, 7);
	bool var_6148_bool;
	func_12478(var_6148_bool, 37);
	bool var_6150_bool;
	func_12478(var_6150_bool, 43);
	@Trace("Day1 cleanup");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_582(string var_2031_string, object var_2032_object, string var_2033_string, string var_2034_string)
{
	object var_2046_object; bool var_2048_bool; cvector var_2049_cvector; cvector var_2050_cvector; object var_2051_object;
	@GetMainOutdoorScene(var_2046_object);
	int var_2047_int = 0;
	
	for(;;) {
		var_2046_object->GetLocator((var_2031_string + (var_2047_int + 1)), var_2048_bool, var_2049_cvector, var_2050_cvector);
		if(!var_2048_bool) //@nz
			break;
		var_2046_object->AddStationaryActor(var_2051_object, var_2049_cvector, var_2050_cvector, var_2033_string, var_2034_string);
		var_2032_object->add(var_2051_object);
		var_2051_object = null;
		var_2047_int += 1;
	}
}
EMIT "Stack[-6] = 0";


void func_7751(object var_4421_object, object var_4422_object, string var_4423_string, string var_4424_string, string var_4425_string)
{
	bool var_4431_bool; cvector var_4432_cvector; cvector var_4433_cvector; object var_4434_object;
	var_4422_object->GetLocator(("pt_guard_" + var_4423_string), var_4431_bool, var_4432_cvector, var_4433_cvector);
	if(!var_4431_bool) //@nz
		@Trace("Locator doesn't exist for guard " + var_4423_string);
	else
		var_4422_object->AddStationaryActor(var_4434_object, var_4432_cvector, var_4433_cvector, var_4424_string, var_4425_string);
	var_4434_object = var_4421_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_6733(int var_1704_int, int var_1705_int, object var_1706_object, object var_1707_object, object var_1708_object, object var_1709_object)
{
	if(var_1705_int == 0) {
		func_802(12, false);
		func_819(12, false, 1);
		int var_1717_int; int var_1718_int; object var_1719_object; object var_1720_object; object var_1721_object;
		var_1717_int = 12;
		var_1704_int = var_1718_int;
		var_1706_object = var_1719_object;
		var_1707_object = var_1720_object;
		var_1708_object = var_1721_object;
		func_628(var_1718_int, var_1719_object, var_1720_object, var_1721_object);
		object var_1722_object;
		var_1709_object = var_1722_object;
		func_311(var_1722_object, 0);
		func_876(12, false, 4);
		func_938(12, false, 4);
	}
	int var_1731_int;
	var_1705_int = var_1731_int;
	func_1026(12, var_1731_int);
	int var_1733_int; int var_1734_int;
	var_1704_int = var_1733_int;
	var_1705_int = var_1734_int;
	func_1630(12, var_1733_int, var_1734_int);
}


// @pe
void func_5712(int var_1385_int, int var_1386_int, object var_1387_object, object var_1388_object, object var_1389_object, object var_1390_object)
{
	if(var_1386_int == 0) {
		func_802(7, false);
		func_819(7, false, 1);
		int var_1398_int; int var_1399_int; object var_1400_object; object var_1401_object; object var_1402_object;
		var_1398_int = 7;
		var_1385_int = var_1399_int;
		var_1387_object = var_1400_object;
		var_1388_object = var_1401_object;
		var_1389_object = var_1402_object;
		func_628(var_1399_int, var_1400_object, var_1401_object, var_1402_object);
		object var_1403_object;
		var_1390_object = var_1403_object;
		func_311(var_1403_object, 0);
		func_876(7, false, 6);
		func_938(7, false, 6);
	}
	int var_1412_int;
	var_1386_int = var_1412_int;
	func_1026(7, var_1412_int);
	int var_1414_int; int var_1415_int;
	var_1385_int = var_1414_int;
	var_1386_int = var_1415_int;
	func_1630(7, var_1414_int, var_1415_int);
}


void func_3665(int var_3817_int, int var_3818_int, int var_3819_int)
{
	int var_3824_int; int var_3825_int; int var_3826_int; int var_3827_int;
	bool var_3828_bool = false;
	if(var_3819_int > 8) {
		if(var_3819_int < 21)
			var_3828_bool = true;
	}
	if(var_3828_bool != 0) {
		int var_3833_int;
		var_3817_int = var_3833_int;
		func_509(var_3833_int, "pers_rat", "rat.xml", 1);
		int var_3837_int;
		var_3817_int = var_3837_int;
		func_509(var_3837_int, "pers_alkash", "alkash.xml", 2);
		int var_3841_int;
		var_3817_int = var_3841_int;
		func_509(var_3841_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3846_float; int var_3847_int;
		func_1171(var_3846_float, var_3847_int);
		if((2 * var_3846_float) != 0) {
			int var_3849_int; int var_3852_int;
			var_3817_int = var_3849_int;
			var_3824_int = var_3852_int;
			func_509(var_3849_int, "pers_grabitel", "grabitel.xml", var_3852_int);
		}
		if((var_3847_int + 1) >= 2) {
			int var_3857_int;
			var_3817_int = var_3857_int;
			func_509(var_3857_int, "pers_patrool", "patrol.xml", 1);
			bool var_3861_bool; int var_3862_int;
			var_3818_int = var_3862_int;
			func_1378(var_3861_bool, var_3862_int);
			if(var_3861_bool != 0) {
				int var_3863_int;
				var_3817_int = var_3863_int;
				func_509(var_3863_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3868_float; int var_3869_int;
		var_3818_int = var_3869_int;
		func_1261(var_3868_float, var_3869_int);
		if((1 * var_3868_float) != 0) {
			int var_3871_int; int var_3874_int;
			var_3817_int = var_3871_int;
			var_3825_int = var_3874_int;
			func_509(var_3871_int, "pers_bomber", "bomber.xml", var_3874_int);
		}
	} else {
		int var_3888_int;
		var_3817_int = var_3888_int;
		func_509(var_3888_int, "pers_rat", "rat.xml", 3);
		int var_3892_int;
		var_3817_int = var_3892_int;
		func_509(var_3892_int, "pers_alkash", "alkash.xml", 1);
		int var_3896_int;
		var_3817_int = var_3896_int;
		func_509(var_3896_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3901_float; int var_3902_int;
		func_1171(var_3901_float, var_3902_int);
		if((3 * var_3901_float) != 0) {
			int var_3904_int; int var_3907_int;
			var_3817_int = var_3904_int;
			var_3826_int = var_3907_int;
			func_509(var_3904_int, "pers_grabitel", "grabitel.xml", var_3907_int);
		}
		if((var_3902_int + 1) >= 2) {
			int var_3912_int;
			var_3817_int = var_3912_int;
			func_509(var_3912_int, "pers_patrool", "patrol.xml", 1);
			bool var_3916_bool; int var_3917_int;
			var_3818_int = var_3917_int;
			func_1378(var_3916_bool, var_3917_int);
			if(var_3916_bool != 0) {
				int var_3918_int;
				var_3817_int = var_3918_int;
				func_509(var_3918_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3923_float; int var_3924_int;
		var_3818_int = var_3924_int;
		func_1261(var_3923_float, var_3924_int);
		if((1 * var_3923_float) == 0) goto Label_3827;
		int var_3926_int; int var_3929_int;
		var_3817_int = var_3926_int;
		var_3827_int = var_3929_int;
		func_509(var_3926_int, "pers_bomber", "bomber.xml", var_3929_int);
	}
Label_3827:
	bool var_3875_bool; int var_3876_int; int var_3877_int;
	var_3818_int = var_3876_int;
	var_3819_int = var_3877_int;
	func_1351(var_3875_bool, var_3876_int, var_3877_int);
	if(var_3875_bool != 0) {
		int var_3878_int;
		var_3817_int = var_3878_int;
		func_509(var_3878_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3882_bool; int var_3883_int;
	var_3818_int = var_3883_int;
	func_1378(var_3882_bool, var_3883_int);
	if(var_3882_bool != 0) {
		int var_3884_int;
		var_3817_int = var_3884_int;
		func_509(var_3884_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_4694(int var_3401_int, int var_3402_int, object var_3403_object, object var_3404_object, object var_3405_object, object var_3406_object)
{
	if(var_3402_int == 0) {
		func_802(1, false);
		func_819(1, false, 1);
		int var_3415_int; object var_3416_object; object var_3417_object; object var_3418_object;
		var_3401_int = var_3415_int;
		var_3403_object = var_3416_object;
		var_3404_object = var_3417_object;
		var_3405_object = var_3418_object;
		func_726(1, var_3415_int, var_3416_object, var_3417_object, var_3418_object);
		object var_3419_object;
		var_3406_object = var_3419_object;
		func_311(var_3419_object, 2);
		func_876(1, false, 8);
		func_938(1, true, 8);
	}
	func_785(1, false);
	int var_3430_int; int var_3431_int;
	var_3401_int = var_3430_int;
	var_3402_int = var_3431_int;
	func_4216(1, var_3430_int, var_3431_int);
}


// @pe
void func_7768(object var_4418_object, object var_4419_object, int var_4420_int)
{
	object var_4422_object;
	var_4419_object = var_4422_object;
	object var_4421_object;
	func_7751(var_4421_object, var_4422_object, ("term" + var_4420_int), "pers_patrool", "guard_term.xml");
	var_4421_object = var_4418_object;
}


void func_604(string var_2057_string, object var_2058_object)
{
	object var_2071_object; bool var_2073_bool; cvector var_2074_cvector; cvector var_2075_cvector; object var_2076_object;
	@GetMainOutdoorScene(var_2071_object);
	int var_2072_int = 0;
	
	for(;;) {
		var_2071_object->GetLocator((var_2057_string + (var_2072_int + 1)), var_2073_bool, var_2074_cvector, var_2075_cvector);
		if(!var_2073_bool) //@nz
			break;
		var_2071_object->AddStationaryActorByType(var_2076_object, var_2074_cvector, var_2075_cvector, "fog", "fog_stat.xml");
		var_2058_object->add(var_2076_object);
		var_2076_object = null;
		var_2072_int += 1;
	}
}
EMIT "Stack[-7] = 0";


void func_1630(int var_1413_int, int var_1414_int, int var_1415_int)
{
	int var_1417_int;
	if((var_1414_int + 1) == 12)
		return 2;
	bool var_1422_bool = false;
	bool var_1423_bool = true;
	var_1425_bool = var_1415_int < 7;
	if(var_1425_bool != 1) {
		var_1427_bool = var_1415_int > 21;
		if(var_1427_bool != 1)
			var_1423_bool = false;
	}
	if(var_1423_bool != 0) {
		if(var_1414_int != 0)
			var_1422_bool = true;
	}
	if(var_1422_bool != 0) {
		float var_1431_float; int var_1432_int;
		var_1414_int = var_1432_int;
		func_1147(var_1431_float, var_1432_int);
		if((1 * var_1431_float) != 0) {
			int var_1434_int; int var_1437_int;
			var_1413_int = var_1434_int;
			var_1417_int = var_1437_int;
			func_509(var_1434_int, "pers_grabitel", "grabitel.xml", var_1437_int);
		}
	}
	bool var_1438_bool; int var_1439_int; int var_1440_int;
	var_1415_int = var_1440_int;
	func_1116(var_1438_bool, var_1439_int, var_1440_int);
	if(var_1438_bool != 0) {
		int var_1441_int;
		var_1413_int = var_1441_int;
		func_509(var_1441_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1445_int;
		var_1413_int = var_1445_int;
		func_509(var_1445_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1449_int;
		var_1413_int = var_1449_int;
		func_509(var_1449_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1453_int;
		var_1413_int = var_1453_int;
		func_509(var_1453_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1457_int;
		var_1413_int = var_1457_int;
		func_509(var_1457_int, "pers_woman", "woman.xml", 1);
		int var_1461_int;
		var_1413_int = var_1461_int;
		func_509(var_1461_int, "pers_alkash", "alkash.xml", 1);
		bool var_1465_bool = false;
		if(var_1415_int > 8) {
			if(var_1415_int < 21)
				var_1465_bool = true;
		}
		if(var_1465_bool != 0) {
			int var_1470_int;
			var_1413_int = var_1470_int;
			func_509(var_1470_int, "pers_boy", "boy.xml", 1);
			int var_1474_int;
			var_1413_int = var_1474_int;
			func_509(var_1474_int, "pers_girl", "girl.xml", 1);
			int var_1478_int;
			var_1413_int = var_1478_int;
			func_509(var_1478_int, "pers_girl", "girl2.xml", 1);
			int var_1482_int;
			var_1413_int = var_1482_int;
			func_509(var_1482_int, "pers_littleboy", "littleboy.xml", 1);
			int var_1486_int;
			var_1413_int = var_1486_int;
			func_509(var_1486_int, "pers_littlegirl", "littlegirl.xml", 1);
		}
	} else {
			bool var_1497_bool = false;
			if(var_1415_int > 8) {
				if(var_1415_int < 21)
					var_1497_bool = true;
			}
			if(var_1497_bool == 0) goto Label_1849;
			int var_1502_int;
			var_1413_int = var_1502_int;
			func_509(var_1502_int, "pers_woman", "woman.xml", 1);
			int var_1506_int;
			var_1413_int = var_1506_int;
			func_509(var_1506_int, "pers_unosha", "unosha.xml", 1);
			int var_1510_int;
			var_1413_int = var_1510_int;
			func_509(var_1510_int, "pers_unosha", "unosha2.xml", 1);
			int var_1514_int;
			var_1413_int = var_1514_int;
			func_509(var_1514_int, "pers_boy", "boy.xml", 1);
			int var_1518_int;
			var_1413_int = var_1518_int;
			func_509(var_1518_int, "pers_girl", "girl.xml", 1);
			int var_1522_int;
			var_1413_int = var_1522_int;
			func_509(var_1522_int, "pers_girl", "girl2.xml", 1);
			int var_1526_int;
			var_1413_int = var_1526_int;
			func_509(var_1526_int, "pers_littleboy", "littleboy.xml", 1);
			int var_1530_int;
			var_1413_int = var_1530_int;
			func_509(var_1530_int, "pers_littlegirl", "littlegirl.xml", 1);
			int var_1534_int;
			var_1413_int = var_1534_int;
			func_509(var_1534_int, "pers_alkash", "alkash.xml", 1);
			if((var_1439_int + 1) >= 3) {
				int var_1542_int;
				var_1413_int = var_1542_int;
				func_509(var_1542_int, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
	}
Label_1889:
	for(;;) {
		bool var_1490_bool; int var_1491_int; int var_1492_int;
		var_1414_int = var_1491_int;
		var_1415_int = var_1492_int;
		func_1351(var_1490_bool, var_1491_int, var_1492_int);
		if(var_1490_bool != 0) {
			int var_1493_int;
			var_1413_int = var_1493_int;
			func_509(var_1493_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		return 2;

	}
	
Label_1849:
	int var_1546_int;
	var_1413_int = var_1546_int;
	func_509(var_1546_int, "pers_woman", "woman.xml", 1);
	int var_1550_int;
	var_1413_int = var_1550_int;
	func_509(var_1550_int, "pers_unosha", "unosha.xml", 1);
	int var_1554_int;
	var_1413_int = var_1554_int;
	func_509(var_1554_int, "pers_unosha", "unosha2.xml", 1);
	int var_1558_int;
	var_1413_int = var_1558_int;
	func_509(var_1558_int, "pers_alkash", "alkash.xml", 1);
	if(!((var_1414_int + 1) >= 3)) goto Label_1889;
	int var_1566_int;
	var_1413_int = var_1566_int;
	func_509(var_1566_int, "pers_dohodyaga", "dohodyaga.xml", 1);
}


void func_7779(bool var_4462_bool)
{
	object var_4464_object;
	@FindActor(var_4464_object, "arena_light");
	var_4464_object->Switch(var_4462_bool);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9832(int var_5197_int, float var_5198_float)
{
	float var_5202_float;
	var_5198_float = var_5202_float;
	int var_5199_int;
	func_12495(var_5199_int, 530554, 530553, var_5202_float);
	var_5199_int = var_5197_int;
}


void func_7787(void)
{
	object var_4334_object; bool var_4335_bool; cvector var_4336_cvector; cvector var_4337_cvector; int var_4338_int; object var_4339_object;
	@Trace("Setting arena...");
	var_4341_object = GlobalVars[11];
	if(var_4341_object == null) {
		@GetMainOutdoorScene(var_4334_object);
		var_4334_object->GetLocator("pt_arena_manager", var_4335_bool, var_4336_cvector, var_4337_cvector);
		if(!var_4335_bool) { //@nz
			@Trace("Locator doesn't exist for arena manager");
		} else {
				var_4365_object = GlobalVars[11];
				object var_4366_object; object var_4367_object; cvector var_4368_cvector; cvector var_4369_cvector;
				var_4334_object = var_4367_object;
				var_4336_cvector = var_4368_cvector;
				var_4337_cvector = var_4369_cvector;
				func_14856(var_4366_object, var_4367_object, var_4368_cvector, var_4369_cvector);
				var_4366_object = var_4365_object;
				GlobalVars[11] = var_4365_object;
		}
		var_4338_int = 0;

		for(;;) {
			if(var_4338_int < 6) {
				var_4334_object->GetLocator(("pt_arena_torch" + (var_4338_int + 1)), var_4335_bool, var_4336_cvector, var_4337_cvector);
				if(!var_4335_bool) { //@nz
					@Trace("Locator doesn't exist for arena torch " + (var_4338_int + 1));
				} else {
				@AddActorByType(var_4339_object, "scripted", var_4334_object, var_4336_cvector, var_4337_cvector, "torch.xml");
				var_4360_object = GlobalVars[12];
				var_4360_object->add(var_4339_object);
				var_4339_object = null;
			}
			func_7779(true);
			var_4334_object = null;
	}
		return 12;

		}
		var_4338_int += 1;
	}
	
}


// @pe
void func_9841(int var_5422_int, float var_5423_float)
{
	float var_5427_float;
	var_5423_float = var_5427_float;
	int var_5424_int;
	func_12495(var_5424_int, 530556, 530555, var_5427_float);
	var_5424_int = var_5422_int;
}


// @pe
void func_628(int var_567_int, object var_569_object, object var_570_object, object var_571_object)
{
	int var_572_int;
	var_567_int = var_572_int;
	func_548(var_572_int, true);
	object var_600_object;
	var_569_object = var_600_object;
	func_269(var_600_object);
	object var_611_object;
	var_570_object = var_611_object;
	func_269(var_611_object);
	object var_612_object;
	var_571_object = var_612_object;
	func_269(var_612_object);
}


// @pe
void func_9850(int var_5268_int, float var_5269_float)
{
	float var_5273_float;
	var_5269_float = var_5273_float;
	int var_5270_int;
	func_12495(var_5270_int, 530558, 530557, var_5273_float);
	var_5270_int = var_5268_int;
}


// @pe
void func_13947(float var_4560_float)
{
	var_4564_object = GlobalVars[16];
	GlobalVars[16] = Obj();
	@SetTimeEvent(45268, 192.0);
	@SetTimeEvent(45261, 199.5);
	@SetTimeEvent(45230, 64.25);
	@SetTimeEvent(45218, 228.0);
	@SetTimeEvent(45269, 216.0);
	@SetTimeEvent(45231, 90.0);
	@SetTimeEvent(45227, 203.0);
	@SetTimeEvent(45271, 264.0);
	@SetTimeEvent(45282, 58.0);
	@SetTimeEvent(45270, 240.0);
	@SetTimeEvent(45229, 64.0);
	@SetTimeEvent(45222, 24.0);
	@SetTimeEvent(45260, 199.17);
	@SetTimeEvent(45226, 202.0);
	@SetTimeEvent(45224, 180.5);
	@SetTimeEvent(45221, 272.29);
	@SetTimeEvent(45239, 182.5);
	@SetTimeEvent(45220, 271.54);
	@SetTimeEvent(45228, 223.96);
	@SetTimeEvent(45219, 230.0);
	@SetTimeEvent(45232, 250.5);
	@SetTimeEvent(45267, 168.0);
	@SetTimeEvent(45223, 80.25);
	@SetTimeEvent(45225, 201.0);
	@SetTimeEvent(45214, 192.08);
	@SetTimeEvent(45215, 216.08);
	@SetTimeEvent(45216, 240.08);
	@SetTimeEvent(45217, 264.08);
	@SetTimeEvent(45174, 31.02);
	@SetTimeEvent(45178, 127.02);
	@SetTimeEvent(45179, 151.02);
	@SetTimeEvent(45200, 39.5);
	@SetTimeEvent(45180, 175.02);
	@SetTimeEvent(45182, 223.02);
	@SetTimeEvent(45176, 79.02);
	@SetTimeEvent(45063, 144.0);
	@SetTimeEvent(45177, 103.02);
	@SetTimeEvent(45183, 247.02);
	@SetTimeEvent(45202, 85.0);
	@SetTimeEvent(45205, 175.25);
	@SetTimeEvent(45209, 72.08);
	@SetTimeEvent(45207, 24.33);
	@SetTimeEvent(45208, 48.08);
	@SetTimeEvent(45181, 199.02);
	@SetTimeEvent(45210, 96.08);
	@SetTimeEvent(45211, 120.08);
	@SetTimeEvent(45064, 192.0);
	@SetTimeEvent(45212, 144.08);
	@SetTimeEvent(45213, 168.08);
	@SetTimeEvent(45203, 103.25);
	@SetTimeEvent(45175, 55.02);
	@SetTimeEvent(45054, 273.0);
	@SetTimeEvent(45199, 37.0);
	@SetTimeEvent(45201, 86.5);
	@SetTimeEvent(45184, 271.02);
	@SetTimeEvent(45206, 210.0);
	@SetTimeEvent(45050, 151.25);
	@SetTimeEvent(45051, 249.35);
	@SetTimeEvent(45042, 264.0);
	@SetTimeEvent(45040, 55.25);
	@SetTimeEvent(45039, 60.0);
	@SetTimeEvent(45038, 31.25);
	@SetTimeEvent(45041, 79.25);
	@SetTimeEvent(45045, 128.25);
	@SetTimeEvent(45047, 127.25);
	@SetTimeEvent(45036, 255.0);
	@SetTimeEvent(45043, 108.0);
	@SetTimeEvent(45046, 128.0);
	@SetTimeEvent(45044, 128.67);
	@SetTimeEvent(45048, 154.0);
	@SetTimeEvent(45049, 152.0);
	@SetTimeEvent(45018, 216.0);
	@SetTimeEvent(45005, 48.0);
	@SetTimeEvent(45007, 17.92);
	@SetTimeEvent(45009, 23.5);
	@SetTimeEvent(45016, 168.0);
	@SetTimeEvent(45017, 192.0);
	@SetTimeEvent(45015, 132.0);
	@SetTimeEvent(45031, 240.0);
	@SetTimeEvent(45011, 96.0);
	@SetTimeEvent(45032, 245.0);
	@SetTimeEvent(45008, 10.0);
	@SetTimeEvent(45003, 24.0);
	object var_4731_object; object var_4732_object;
	var_4733_object = GlobalVars[16];
	var_4733_object = var_4731_object;
	var_4734_object = GlobalVars[16];
	var_4734_object = var_4732_object;
	func_10813();
	object var_4745_object; object var_4746_object;
	var_4747_object = GlobalVars[16];
	var_4747_object = var_4745_object;
	var_4748_object = GlobalVars[16];
	var_4748_object = var_4746_object;
	func_10757();
	object var_4751_object; object var_4752_object;
	var_4753_object = GlobalVars[16];
	var_4753_object = var_4751_object;
	var_4754_object = GlobalVars[16];
	var_4754_object = var_4752_object;
	func_10771();
	object var_4778_object; object var_4779_object;
	var_4780_object = GlobalVars[16];
	var_4780_object = var_4778_object;
	var_4781_object = GlobalVars[16];
	var_4781_object = var_4779_object;
	func_10783();
	object var_4784_object; object var_4785_object;
	var_4786_object = GlobalVars[16];
	var_4786_object = var_4784_object;
	var_4787_object = GlobalVars[16];
	var_4787_object = var_4785_object;
	func_11773();
	object var_4790_object; object var_4791_object;
	var_4792_object = GlobalVars[16];
	var_4792_object = var_4790_object;
	var_4793_object = GlobalVars[16];
	var_4793_object = var_4791_object;
	func_10469();
	object var_4796_object; object var_4797_object;
	var_4798_object = GlobalVars[16];
	var_4798_object = var_4796_object;
	var_4799_object = GlobalVars[16];
	var_4799_object = var_4797_object;
	func_10572();
	object var_4802_object; object var_4803_object;
	var_4804_object = GlobalVars[16];
	var_4804_object = var_4802_object;
	var_4805_object = GlobalVars[16];
	var_4805_object = var_4803_object;
	func_10579();
	object var_4808_object; object var_4809_object;
	var_4810_object = GlobalVars[16];
	var_4810_object = var_4808_object;
	var_4811_object = GlobalVars[16];
	var_4811_object = var_4809_object;
	func_10462();
	int var_4814_int; float var_4815_float;
	var_4560_float = var_4815_float;
	func_10066(var_4814_int, var_4815_float);
	object var_4823_object;
	func_143(var_4823_object, "volonteers_danko");
	object var_4831_object;
	func_143(var_4831_object, "quest_d1_01");
	@SetTimeEvent(45006, 72.0);
	@SetTimeEvent(45012, 120.0);
	@SetTimeEvent(45013, 144.0);
	@SetTimeEvent(45035, 261.5);
	@SetTimeEvent(45010, 16.0);
}


void func_8829(void)
{
	object var_4530_object; object var_4533_object; bool var_4534_bool; cvector var_4535_cvector; cvector var_4536_cvector; string var_4537_string;
	@GetMainOutdoorScene(var_4530_object);
	var_4538_object = GlobalVars[7];
	int var_4531_int;
	var_4538_object->size(var_4531_int);
	int var_4532_int = 0;
	
	for(;;) {
		if(var_4532_int < var_4531_int) {
			var_4540_object = GlobalVars[7];
			var_4540_object->get(var_4533_object, var_4532_int);
			if(var_4533_object != 0) {
			} else {
			var_4530_object->GetLocator(("pt_grave_supply" + (var_4532_int + 1)), var_4534_bool, var_4535_cvector, var_4536_cvector);
			if(!var_4534_bool) { //@nz
				@Trace("Grave supply point not found");
				goto Label_8873;
			}
			@RandOneOf(var_4537_string, 1, 1, "bread", "milk");
			var_4530_object->AddStationaryActorByType(var_4533_object, var_4535_cvector, var_4536_cvector, "scripted", (("item_" + var_4537_string) + "_stat.xml"));
			var_4558_object = GlobalVars[7];
			var_4558_object->set(var_4532_int, var_4533_object);
			var_4533_object = null;
		}
		}
	Label_8873:
		var_4532_int += 1;
	}
	
}
EMIT "Stack[-8] = 0";


// @pe
void func_6785(int var_2934_int, int var_2935_int, object var_2936_object, object var_2937_object, object var_2938_object, object var_2939_object)
{
	if(var_2935_int == 0) {
		func_802(12, true);
		func_819(12, true, 1);
		int var_2948_int; object var_2949_object; object var_2950_object; object var_2951_object;
		var_2934_int = var_2948_int;
		var_2936_object = var_2949_object;
		var_2937_object = var_2950_object;
		var_2938_object = var_2951_object;
		func_647(12, var_2948_int, var_2949_object, var_2950_object, var_2951_object);
		object var_2952_object;
		var_2939_object = var_2952_object;
		func_311(var_2952_object, 1);
		func_876(12, true, 4);
		func_938(12, false, 4);
	}
	func_785(12, false);
	int var_2963_int; int var_2964_int;
	var_2934_int = var_2963_int;
	var_2935_int = var_2964_int;
	func_2770(12, var_2963_int, var_2964_int);
}


void func_11905(void)
{
	object var_5521_object;
	func_12503(var_5521_object);
	object var_5519_object;
	var_5521_object = var_5519_object;
	object var_5520_object;
	var_5519_object->FindMark(var_5520_object, "d11q01NudeGotoRastrel");
	if(var_5520_object != 0)
		var_5520_object->Remove();
	var_5519_object->FindMark(var_5520_object, "d11q01NudeGotoBlock");
	if(var_5520_object != 0)
		var_5520_object->Remove();
	bool var_5526_bool;
	func_12478(var_5526_bool, 192);
	bool var_5538_bool;
	func_12478(var_5538_bool, 197);
	bool var_5540_bool;
	func_12478(var_5540_bool, 682);
	bool var_5542_bool;
	func_12478(var_5542_bool, 686);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9859(int var_5282_int, float var_5283_float)
{
	float var_5287_float;
	var_5283_float = var_5287_float;
	int var_5284_int;
	func_12495(var_5284_int, 530560, 530559, var_5287_float);
	var_5284_int = var_5282_int;
}


// @pe
void func_5764(int var_2663_int, int var_2664_int, object var_2665_object, object var_2666_object, object var_2667_object, object var_2668_object)
{
	if(var_2664_int == 0) {
		func_802(7, true);
		func_819(7, true, 1);
		int var_2677_int; object var_2678_object; object var_2679_object; object var_2680_object;
		var_2663_int = var_2677_int;
		var_2665_object = var_2678_object;
		var_2666_object = var_2679_object;
		var_2667_object = var_2680_object;
		func_647(7, var_2677_int, var_2678_object, var_2679_object, var_2680_object);
		object var_2681_object;
		var_2668_object = var_2681_object;
		func_311(var_2681_object, 1);
		func_876(7, true, 6);
		func_938(7, false, 6);
	}
	func_785(7, false);
	int var_2692_int; int var_2693_int;
	var_2663_int = var_2692_int;
	var_2664_int = var_2693_int;
	func_2770(7, var_2692_int, var_2693_int);
}


// @pe
void func_647(int var_2019_int, int var_2020_int, object var_2021_object, object var_2022_object, object var_2023_object)
{
	int var_2024_int;
	var_2019_int = var_2024_int;
	func_548(var_2024_int, false);
	object var_2026_object;
	var_2021_object = var_2026_object;
	func_269(var_2026_object);
	object var_2027_object;
	var_2022_object = var_2027_object;
	func_269(var_2027_object);
	object var_2028_object;
	var_2023_object = var_2028_object;
	func_269(var_2028_object);
	if(var_2020_int < 8) {
		object var_2032_object;
		var_2021_object = var_2032_object;
		func_582((("pt_blockpost" + (var_2019_int + 1)) + "_1_"), var_2032_object, "pers_patrool", "patrol_stat.xml");
		object var_2058_object;
		var_2023_object = var_2058_object;
		func_604((("pt_fog" + (var_2019_int + 1)) + "_"), var_2058_object);
	} else {
		object var_2085_object;
		var_2021_object = var_2085_object;
		func_582((("pt_blockpost" + (var_2019_int + 1)) + "_1_"), var_2085_object, "pers_soldat", "soldier.xml");
		object var_2094_object;
		var_2022_object = var_2094_object;
		func_582((("pt_blockpost" + (var_2019_int + 1)) + "_2_"), var_2094_object, "pers_sanitar", "sanitar_stat.xml");
		object var_2103_object;
		var_2023_object = var_2103_object;
		func_604((("pt_fog" + (var_2019_int + 1)) + "_"), var_2103_object);
	}
	
}


// @pe
void func_4746(object var_79_object)
{
	var_79_object->add("dt_house1_union2_05l");
	var_79_object->add("dt_house1_union2_05r");
	var_79_object->add("dt_house2_01");
	var_79_object->add("dt_house2_02");
	var_79_object->add("dt_house2_03");
	var_79_object->add("dt_house2_04");
	var_79_object->add("dt_house2_05");
	var_79_object->add("dt_house3_10_i2");
	var_79_object->add("dt_house3_10");
	var_79_object->add("dt_house3_11_i2");
	var_79_object->add("dt_house3_11");
	var_79_object->add("dt_house3_12_i2");
	var_79_object->add("dt_house3_12");
	var_79_object->add("dt_house_1_06");
	var_79_object->add("dt_house3_07_i2");
	var_79_object->add("dt_house3_07");
}


// @pe
void func_9868(int var_5208_int, float var_5209_float)
{
	float var_5213_float;
	var_5209_float = var_5213_float;
	int var_5210_int;
	func_12495(var_5210_int, 530562, 530561, var_5213_float);
	var_5210_int = var_5208_int;
}


// @pe
void func_9877(int var_5219_int, float var_5220_float)
{
	float var_5224_float;
	var_5220_float = var_5224_float;
	int var_5221_int;
	func_12495(var_5221_int, 530564, 530563, var_5224_float);
	var_5221_int = var_5219_int;
}


// @pe
void func_9886(int var_5246_int, float var_5247_float)
{
	float var_5251_float;
	var_5247_float = var_5251_float;
	int var_5248_int;
	func_12495(var_5248_int, 530566, 530565, var_5251_float);
	var_5248_int = var_5246_int;
}


// @pe
void func_9895(int var_5360_int, float var_5361_float)
{
	float var_5365_float;
	var_5361_float = var_5365_float;
	int var_5362_int;
	func_12495(var_5362_int, 530568, 530567, var_5365_float);
	var_5362_int = var_5360_int;
}


// @pe
void func_11943(bool var_6367_bool)
{
	int var_6370_int;
	func_138(var_6370_int, "d1q01");
	if(var_6370_int == 1000)
		var_6367_bool = true;
	var_6367_bool = false;
}


void func_7850(void)
{
	int var_4613_int; int var_4614_int; object var_4615_object;
	@Trace("Cleaning arena...");
	var_4617_object = GlobalVars[11];
	if(var_4617_object != null) {
		var_4619_object = GlobalVars[11];
		var_4619_object->Remove();
		var_4620_object = GlobalVars[12];
		var_4620_object->size(var_4613_int);
		var_4614_int = 0;

		while(var_4614_int < var_4613_int) {
			var_4622_object = GlobalVars[12];
			var_4622_object->get(var_4615_object, var_4614_int);
			@Trigger(var_4615_object, "remove");
			var_4615_object = null;
			var_4614_int += 1;
		}

		var_4625_object = GlobalVars[12];
		var_4625_object->clear();
		func_7779(false);
	}
}


void func_8878(void)
{
	object var_4484_object;
	@GetMainOutdoorScene(var_4484_object);
	object var_4485_object;
	@AddScriptedActor(var_4485_object, "big_gun", "big_gun.bin", var_4484_object, [0.0, 0.0, 0.0]);
	@AddScriptedActor(var_4485_object, "vagon_martira", "big_gun.bin", var_4484_object, [0.0, 0.0, 0.0]);
	@AddScriptedActor(var_4485_object, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", var_4484_object, [0.0, 0.0, 0.0]);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9904(int var_5050_int, float var_5051_float)
{
	float var_5055_float;
	var_5051_float = var_5055_float;
	int var_5052_int;
	func_12495(var_5052_int, 536379, 536378, var_5055_float);
	var_5052_int = var_5050_int;
}


// @pe
void func_11955(bool var_6082_bool)
{
	int var_6085_int;
	func_138(var_6085_int, "d1q01");
	if(var_6085_int == 0) {
		var_6082_bool = true;
		return 0;
	}
	var_6082_bool = false;
}


// @pe
void func_6837(int var_4064_int, int var_4065_int, object var_4066_object, object var_4067_object, object var_4068_object, object var_4069_object)
{
	if(var_4065_int == 0) {
		func_802(12, false);
		func_819(12, false, 1);
		int var_4078_int; object var_4079_object; object var_4080_object; object var_4081_object;
		var_4064_int = var_4078_int;
		var_4066_object = var_4079_object;
		var_4067_object = var_4080_object;
		var_4068_object = var_4081_object;
		func_726(12, var_4078_int, var_4079_object, var_4080_object, var_4081_object);
		object var_4082_object;
		var_4069_object = var_4082_object;
		func_311(var_4082_object, 2);
		func_876(12, false, 4);
		func_938(12, true, 4);
	}
	func_785(12, false);
	int var_4093_int; int var_4094_int;
	var_4064_int = var_4093_int;
	var_4065_int = var_4094_int;
	func_3665(12, var_4093_int, var_4094_int);
}


// @pe
void func_5816(int var_3789_int, int var_3790_int, object var_3791_object, object var_3792_object, object var_3793_object, object var_3794_object)
{
	if(var_3790_int == 0) {
		func_802(7, false);
		func_819(7, false, 1);
		int var_3803_int; object var_3804_object; object var_3805_object; object var_3806_object;
		var_3789_int = var_3803_int;
		var_3791_object = var_3804_object;
		var_3792_object = var_3805_object;
		var_3793_object = var_3806_object;
		func_726(7, var_3803_int, var_3804_object, var_3805_object, var_3806_object);
		object var_3807_object;
		var_3794_object = var_3807_object;
		func_311(var_3807_object, 2);
		func_876(7, false, 6);
		func_938(7, true, 6);
	}
	func_785(7, false);
	int var_3818_int; int var_3819_int;
	var_3789_int = var_3818_int;
	var_3790_int = var_3819_int;
	func_3665(7, var_3818_int, var_3819_int);
}


// @pe
void func_9913(int var_5176_int, float var_5177_float)
{
	float var_5181_float;
	var_5177_float = var_5181_float;
	int var_5178_int;
	func_12495(var_5178_int, 522212, 522211, var_5181_float);
	var_5178_int = var_5176_int;
}


// @pe
void func_4796(int var_1030_int, int var_1031_int, object var_1032_object, object var_1033_object, object var_1034_object, object var_1035_object)
{
	if(var_1031_int == 0) {
		func_802(2, false);
		func_819(2, false, 1);
		int var_1043_int; int var_1044_int; object var_1045_object; object var_1046_object; object var_1047_object;
		var_1043_int = 2;
		var_1030_int = var_1044_int;
		var_1032_object = var_1045_object;
		var_1033_object = var_1046_object;
		var_1034_object = var_1047_object;
		func_628(var_1044_int, var_1045_object, var_1046_object, var_1047_object);
		object var_1048_object;
		var_1035_object = var_1048_object;
		func_311(var_1048_object, 0);
		func_876(2, false, 5);
		func_938(2, false, 5);
	}
	int var_1057_int;
	var_1031_int = var_1057_int;
	func_1056(2, var_1057_int);
	int var_1059_int; int var_1060_int;
	var_1030_int = var_1059_int;
	var_1031_int = var_1060_int;
	func_1903(2, var_1059_int, var_1060_int);
}


// @pe
void func_11967(bool var_4877_bool)
{
	int var_4880_int;
	func_138(var_4880_int, "resque_list");
	if(var_4880_int != 0) {
		var_4877_bool = true;
		return 0;
	}
	var_4877_bool = false;
}


// @pe
void func_9922(int var_4732_int, float var_4733_float)
{
	float var_4737_float;
	var_4733_float = var_4737_float;
	int var_4734_int;
	func_12495(var_4734_int, 534077, 534076, var_4737_float);
	var_4734_int = var_4732_int;
}


void func_8899(bool var_2_bool, int var_3_int)
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
		func_14563(var_23_int);
		var_2_bool = true;
		return 12;
	}
	bool var_205_bool = false;
	if(var_3_int > 32768) {
		if(var_3_int < 33056)
			var_205_bool = true;
	}
	if(var_205_bool != 0) {
		var_12_int = (var_3_int - 32768) / 24;
		var_13_int = (var_3_int - 32768) % 24;
		@GetGameTime(var_14_float);
		var_15_int = var_14_float / 24;
		var_14_float = var_16_int;
		var_16_int = var_16_int % 24;
		int var_218_int; int var_219_int; int var_220_int; int var_221_int;
		var_12_int = var_218_int;
		var_13_int = var_219_int;
		var_15_int = var_220_int;
		var_16_int = var_221_int;
		func_9037(var_218_int, var_219_int, var_220_int, var_221_int);
		var_2_bool = true;
		return 12;
	}
	var_2_bool = false;
}


// @pe
void func_9931(int var_5078_int, float var_5079_float)
{
	float var_5083_float;
	var_5079_float = var_5083_float;
	int var_5080_int;
	func_12495(var_5080_int, 534163, 534162, var_5083_float);
	var_5080_int = var_5078_int;
}


void func_7884(void)
{
	object var_325_object;
	@GetMainOutdoorScene(var_325_object);
	int var_326_int = 1;
	
	while(var_326_int <= 17) {
		var_329_object = GlobalVars[15];
		object var_330_object; object var_331_object;
		var_325_object = var_331_object;
		func_165(var_330_object, var_331_object, ("pt_bull" + var_326_int), "pers_bull", "bull.xml");
		var_329_object->add(var_330_object);
		var_326_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";


// @pe
void func_11979(bool var_5227_bool)
{
	int var_5230_int;
	func_138(var_5230_int, "d2EvaVisit");
	if(var_5230_int != 0) {
		var_5227_bool = true;
		return 0;
	}
	var_5227_bool = false;
}


void func_2770(int var_2691_int, int var_2692_int, int var_2693_int)
{
	int var_2696_int; int var_2697_int;
	bool var_2698_bool = false;
	if(var_2693_int > 8) {
		if(var_2693_int < 21)
			var_2698_bool = true;
	}
	if(var_2698_bool != 0) {
		int var_2703_int;
		var_2691_int = var_2703_int;
		func_509(var_2703_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_2707_int;
		var_2691_int = var_2707_int;
		func_509(var_2707_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2711_int;
		var_2691_int = var_2711_int;
		func_509(var_2711_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2715_int;
		var_2691_int = var_2715_int;
		func_535(var_2715_int, "fog", "fog.xml", 6);
		if(var_2692_int >= 5) {
			int var_2721_int;
			var_2691_int = var_2721_int;
			func_535(var_2721_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2726_float; int var_2727_int;
		func_1261(var_2726_float, var_2727_int);
		if((1 * var_2726_float) != 0) {
			int var_2729_int; int var_2732_int;
			var_2691_int = var_2729_int;
			var_2696_int = var_2732_int;
			func_509(var_2729_int, "pers_bomber", "bomber.xml", var_2732_int);
		}
	} else {
		int var_2770_int;
		var_2691_int = var_2770_int;
		func_509(var_2770_int, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		int var_2774_int;
		var_2691_int = var_2774_int;
		func_509(var_2774_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		int var_2778_int;
		var_2691_int = var_2778_int;
		func_509(var_2778_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2782_int;
		var_2691_int = var_2782_int;
		func_535(var_2782_int, "fog", "fog.xml", 6);
		if(var_2727_int >= 5) {
			int var_2788_int;
			var_2691_int = var_2788_int;
			func_535(var_2788_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2793_float; int var_2794_int;
		var_2692_int = var_2794_int;
		func_1261(var_2793_float, var_2794_int);
		if((1 * var_2793_float) == 0) goto Label_2888;
		int var_2796_int; int var_2799_int;
		var_2691_int = var_2796_int;
		var_2697_int = var_2799_int;
		func_509(var_2796_int, "pers_bomber", "bomber.xml", var_2799_int);
	}
Label_2888:
	int var_2733_int;
	var_2691_int = var_2733_int;
	func_522(var_2733_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2739_int;
	var_2691_int = var_2739_int;
	func_522(var_2739_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2745_int;
	var_2691_int = var_2745_int;
	func_522(var_2745_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2751_int;
	var_2691_int = var_2751_int;
	func_522(var_2751_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_2757_bool; int var_2758_int; int var_2759_int;
	var_2692_int = var_2758_int;
	var_2693_int = var_2759_int;
	func_1351(var_2757_bool, var_2758_int, var_2759_int);
	if(var_2757_bool != 0) {
		int var_2760_int;
		var_2691_int = var_2760_int;
		func_509(var_2760_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_2764_bool; int var_2765_int;
	var_2692_int = var_2765_int;
	func_1378(var_2764_bool, var_2765_int);
	if(var_2764_bool != 0) {
		int var_2766_int;
		var_2691_int = var_2766_int;
		func_509(var_2766_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_9940(int var_5257_int, float var_5258_float)
{
	float var_5262_float;
	var_5258_float = var_5262_float;
	int var_5259_int;
	func_12495(var_5259_int, 530570, 530569, var_5262_float);
	var_5259_int = var_5257_int;
}


// @pe
void func_726(int var_3200_int, int var_3201_int, object var_3202_object, object var_3203_object, object var_3204_object)
{
	int var_3205_int;
	var_3200_int = var_3205_int;
	func_548(var_3205_int, false);
	object var_3207_object;
	var_3202_object = var_3207_object;
	func_269(var_3207_object);
	object var_3208_object;
	var_3203_object = var_3208_object;
	func_269(var_3208_object);
	object var_3209_object;
	var_3204_object = var_3209_object;
	func_269(var_3209_object);
	if(var_3201_int < 8) {
		object var_3213_object;
		var_3202_object = var_3213_object;
		func_582((("pt_blockpost" + (var_3200_int + 1)) + "_1_"), var_3213_object, "pers_patrool", "patrol_stat.xml");
	} else {
		object var_3222_object;
		var_3202_object = var_3222_object;
		func_582((("pt_blockpost" + (var_3200_int + 1)) + "_1_"), var_3222_object, "pers_soldat", "soldier.xml");
		object var_3231_object;
		var_3203_object = var_3231_object;
		func_582((("pt_blockpost" + (var_3200_int + 1)) + "_2_"), var_3231_object, "pers_sanitar", "sanitar_stat.xml");
	}
	
}


// @pe
void func_11991(bool var_5438_bool)
{
	int var_5441_int;
	func_138(var_5441_int, "d2LaraVisit");
	if(var_5441_int != 0) {
		var_5438_bool = true;
		return 0;
	}
	var_5438_bool = false;
}


// @pe
void func_9949(int var_5505_int, float var_5506_float)
{
	float var_5510_float;
	var_5506_float = var_5510_float;
	int var_5507_int;
	func_12495(var_5507_int, 515484, 515483, var_5510_float);
	var_5507_int = var_5505_int;
}


void func_7907(void)
{
	var_4525_object = GlobalVars[15];
	object var_4524_object;
	var_4525_object = var_4524_object;
	func_269(var_4524_object);
}


void func_10980(void)
{
	object var_5805_object;
	func_12503(var_5805_object);
	object var_5803_object;
	var_5805_object = var_5803_object;
	object var_5804_object;
	var_5803_object->FindMark(var_5804_object, "d2q01AlexandrGotoAnna");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q01AlexandrGotoBigVlad");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q01AlexandrGotoGeorg");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q01AnnaGotoKapella");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q01KapellaGotoSpi4ka");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q01WomanDGotoAlexandr");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q02AndreiGotoGrif");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q02AndreiGotoPetr");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q02EvaGotoAndrei");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q02EvaGotoMaria");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q02MariaGotoPetr");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q02PetrGotoAndrei");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q03BirdmaskGotoLara");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q03LaraGotoJulia");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q03LaraGotoMaria");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q03LaraGotoMladVlad");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q03LaraGotoMoneyFoodSelf");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	var_5803_object->FindMark(var_5804_object, "d2q03LaraGotoSklad");
	if(var_5804_object != 0)
		var_5804_object->Remove();
	bool var_5842_bool;
	func_12478(var_5842_bool, 10);
	bool var_5844_bool;
	func_12478(var_5844_bool, 11);
	bool var_5846_bool;
	func_12478(var_5846_bool, 12);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_12003(bool var_5454_bool)
{
	int var_5457_int;
	func_138(var_5457_int, "d4MladVladVisit");
	if(var_5457_int != 0) {
		var_5454_bool = true;
		return 0;
	}
	var_5454_bool = false;
}


// @pe
void func_9958(int var_5184_int, float var_5185_float)
{
	float var_5189_float;
	var_5185_float = var_5189_float;
	int var_5186_int;
	func_12495(var_5186_int, 522214, 522213, var_5189_float);
	var_5186_int = var_5184_int;
}


// @pe
void func_6889(object var_281_object)
{
	var_281_object->add("r7_house2_01");
	var_281_object->add("r7_house2_02");
	var_281_object->add("r7_house2_03");
	var_281_object->add("r7_house2_04");
	var_281_object->add("r7_house3_03_i2");
	var_281_object->add("r7_house3_03");
	var_281_object->add("r7_house3_04_i2");
	var_281_object->add("r7_house3_04");
	var_281_object->add("r7_house3_05_i2");
	var_281_object->add("r7_house3_05");
	var_281_object->add("r7_house3_06_i2");
	var_281_object->add("r7_house3_01_i2");
	var_281_object->add("r7_house3_01");
	var_281_object->add("r7_house3_02_i2");
	var_281_object->add("r7_house3_02");
}


void func_7914(void)
{
	bool var_34_bool; int var_35_int; bool var_36_bool; int var_37_int; bool var_38_bool; object var_39_object;
	var_40_object = GlobalVars[15];
	object var_41_object;
	func_132(var_41_object);
	var_41_object = var_40_object;
	GlobalVars[15] = var_40_object;
	var_44_object = GlobalVars[13];
	object var_45_object;
	func_132(var_45_object);
	var_45_object = var_44_object;
	GlobalVars[13] = var_44_object;
	var_46_object = GlobalVars[8];
	object var_47_object;
	func_132(var_47_object);
	var_47_object = var_46_object;
	GlobalVars[8] = var_46_object;
	var_48_object = GlobalVars[9];
	object var_49_object;
	func_132(var_49_object);
	var_49_object = var_48_object;
	GlobalVars[9] = var_48_object;
	var_50_object = GlobalVars[10];
	object var_51_object;
	func_132(var_51_object);
	var_51_object = var_50_object;
	GlobalVars[10] = var_50_object;
	int var_30_int = 0;
	
	while(var_30_int < 16) {
		var_54_object = GlobalVars[8];
		object var_55_object;
		func_132(var_55_object);
		var_54_object->add(var_55_object);
		var_56_object = GlobalVars[9];
		object var_57_object;
		func_132(var_57_object);
		var_56_object->add(var_57_object);
		var_58_object = GlobalVars[10];
		object var_59_object;
		func_132(var_59_object);
		var_58_object->add(var_59_object);
		var_30_int += 1;
	}
	
	object var_31_object;
	@CreateStringVector(var_31_object);
	var_61_object = GlobalVars[13];
	var_61_object->add(var_31_object);
	object var_62_object;
	var_31_object = var_62_object;
	func_4391();
	@CreateStringVector(var_31_object);
	var_63_object = GlobalVars[13];
	var_63_object->add(var_31_object);
	object var_64_object;
	var_31_object = var_64_object;
	func_4549(var_64_object);
	@CreateStringVector(var_31_object);
	var_78_object = GlobalVars[13];
	var_78_object->add(var_31_object);
	object var_79_object;
	var_31_object = var_79_object;
	func_4746(var_79_object);
	@CreateStringVector(var_31_object);
	var_96_object = GlobalVars[13];
	var_96_object->add(var_31_object);
	object var_97_object;
	var_31_object = var_97_object;
	func_4952(var_97_object);
	@CreateStringVector(var_31_object);
	var_122_object = GlobalVars[13];
	var_122_object->add(var_31_object);
	object var_123_object;
	var_31_object = var_123_object;
	func_5182(var_123_object);
	@CreateStringVector(var_31_object);
	var_144_object = GlobalVars[13];
	var_144_object->add(var_31_object);
	object var_145_object;
	var_31_object = var_145_object;
	func_5400(var_145_object);
	@CreateStringVector(var_31_object);
	var_175_object = GlobalVars[13];
	var_175_object->add(var_31_object);
	object var_176_object;
	var_31_object = var_176_object;
	func_5645();
	@CreateStringVector(var_31_object);
	var_177_object = GlobalVars[13];
	var_177_object->add(var_31_object);
	object var_178_object;
	var_31_object = var_178_object;
	func_5668(var_178_object);
	@CreateStringVector(var_31_object);
	var_193_object = GlobalVars[13];
	var_193_object->add(var_31_object);
	object var_194_object;
	var_31_object = var_194_object;
	func_5868(var_194_object);
	@CreateStringVector(var_31_object);
	var_209_object = GlobalVars[13];
	var_209_object->add(var_31_object);
	object var_210_object;
	var_31_object = var_210_object;
	func_6068(var_210_object);
	@CreateStringVector(var_31_object);
	var_226_object = GlobalVars[13];
	var_226_object->add(var_31_object);
	object var_227_object;
	var_31_object = var_227_object;
	func_6271(var_227_object);
	@CreateStringVector(var_31_object);
	var_245_object = GlobalVars[13];
	var_245_object->add(var_31_object);
	object var_246_object;
	var_31_object = var_246_object;
	func_6480(var_246_object);
	@CreateStringVector(var_31_object);
	var_265_object = GlobalVars[13];
	var_265_object->add(var_31_object);
	object var_266_object;
	var_31_object = var_266_object;
	func_6692(var_266_object);
	@CreateStringVector(var_31_object);
	var_280_object = GlobalVars[13];
	var_280_object->add(var_31_object);
	object var_281_object;
	var_31_object = var_281_object;
	func_6889(var_281_object);
	@CreateStringVector(var_31_object);
	var_297_object = GlobalVars[13];
	var_297_object->add(var_31_object);
	object var_298_object;
	var_31_object = var_298_object;
	func_7092(var_298_object);
	@CreateStringVector(var_31_object);
	var_313_object = GlobalVars[13];
	var_313_object->add(var_31_object);
	object var_314_object;
	var_31_object = var_314_object;
	func_7292(var_314_object);
	func_7884();
	object var_32_object;
	@GetMainOutdoorScene(var_32_object);
	var_350_object = GlobalVars[6];
	object var_351_object;
	func_132(var_351_object);
	var_351_object = var_350_object;
	GlobalVars[6] = var_350_object;
	int var_33_int = 0;
	
	for(;;) {
		var_32_object->GetLocator(("pt_plant" + (var_33_int + 1)), var_34_bool);
		if(!var_34_bool) { //@nz
		} else {
			var_33_int += 1;
		}
		var_357_object = GlobalVars[6];
		var_357_object->resize(var_33_int);
		@Trace("Total plants: " + var_33_int);
		var_360_object = GlobalVars[7];
		object var_361_object;
		func_132(var_361_object);
		var_361_object = var_360_object;
		GlobalVars[7] = var_360_object;
		var_35_int = 0;

		for(;;) {
			var_32_object->GetLocator(("pt_grave_supply" + (var_35_int + 1)), var_36_bool);
			if(!var_36_bool) { //@nz
			} else {
				var_35_int += 1;
			}
			var_367_object = GlobalVars[7];
			var_367_object->resize(var_35_int);
			@Trace("Total grave supplies: " + var_35_int);
			var_370_object = GlobalVars[14];
			object var_371_object;
			func_132(var_371_object);
			var_371_object = var_370_object;
			GlobalVars[14] = var_370_object;

			for(;;) {
				var_32_object->GetLocator(("pt_bonfire" + (0 + 1)), var_38_bool);
				if(!var_38_bool) //@nz
					break;
				var_379_object = GlobalVars[14];
				var_379_object->add(Obj());
				int var_380_int;
				var_37_int = var_380_int;
				func_7691(var_380_int);
				var_39_object = null;
				var_37_int += 1;
			}
			@Trace("Total bonfires: " + var_37_int);

		}

	}
}
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


// @pe
void func_5868(object var_194_object)
{
	var_194_object->add("r2_house_2_01");
	var_194_object->add("r2_house_2_02");
	var_194_object->add("r2_house_2_03");
	var_194_object->add("r2_house7_02");
	var_194_object->add("r2_house01_01");
	var_194_object->add("r2_house7_01");
	var_194_object->add("r2_house3_01_i2");
	var_194_object->add("r2_house3_01");
	var_194_object->add("r2_house3_02_i2");
	var_194_object->add("r2_house3_02");
	var_194_object->add("r2_house3_03_i2");
	var_194_object->add("r2_house3_03");
	var_194_object->add("r3_house7_01");
	var_194_object->add("r3_house7_02");
}


// @pe
void func_12015(bool var_5301_bool)
{
	int var_5304_int;
	func_138(var_5304_int, "d4AlexandrVisit");
	if(var_5304_int != 0) {
		var_5301_bool = true;
		return 0;
	}
	var_5301_bool = false;
}


// @pe
void func_4848(int var_2408_int, int var_2409_int, object var_2410_object, object var_2411_object, object var_2412_object, object var_2413_object)
{
	if(var_2409_int == 0) {
		func_802(2, true);
		func_819(2, true, 1);
		int var_2422_int; object var_2423_object; object var_2424_object; object var_2425_object;
		var_2408_int = var_2422_int;
		var_2410_object = var_2423_object;
		var_2411_object = var_2424_object;
		var_2412_object = var_2425_object;
		func_647(2, var_2422_int, var_2423_object, var_2424_object, var_2425_object);
		object var_2426_object;
		var_2413_object = var_2426_object;
		func_311(var_2426_object, 1);
		func_876(2, true, 5);
		func_938(2, false, 5);
	}
	func_785(2, false);
	int var_2437_int; int var_2438_int;
	var_2408_int = var_2437_int;
	var_2409_int = var_2438_int;
	func_2950(2, var_2437_int, var_2438_int);
}


// @pe
void func_9967(int var_5681_int, float var_5682_float)
{
	float var_5686_float;
	var_5682_float = var_5686_float;
	int var_5683_int;
	func_12495(var_5683_int, 514529, 514528, var_5686_float);
	var_5683_int = var_5681_int;
}


// @pe
void func_9976(int var_6350_int, float var_6351_float)
{
	float var_6355_float;
	var_6351_float = var_6355_float;
	int var_6352_int;
	func_12495(var_6352_int, 514531, 514530, var_6355_float);
	var_6352_int = var_6350_int;
}


void func_8954(void)
{
	float var_425_float; int var_427_int; float var_428_float; int var_429_int; object var_430_object; object var_431_object;
	@GetGameTime(var_425_float);
	int var_426_int = 1;
	
	while(var_426_int < 12) {
		@SetTimeEvent((16384 + var_426_int), (24 * var_426_int));
		var_426_int += 1;
	}
	
	
	for(;;) {
		if(0 < 288) {
			var_427_int = var_428_float;
			if(var_428_float < var_425_float) {
			} else {
			@SetTimeEvent((32768 + var_427_int), var_428_float);
		}

		while(0 < 16) {
			string var_447_string; int var_448_int;
			var_429_int = var_448_int;
			func_305(var_447_string, var_448_int);
			@SetVariable(var_447_string, 0);
			int var_453_int;
			var_429_int = var_453_int;
			func_802(var_453_int, false);
			var_429_int += 1;
		}

		int var_466_int; int var_468_int;
		var_466_int = var_425_float % 24;
		var_468_int = var_425_float % 24;
		func_9037(0, var_466_int, 0, var_468_int);
		@FindActor(var_430_object, "dt_house_1_07");
		var_430_object->EnableSubset(200, false);
		@GetMainOutdoorScene(var_431_object);
		bool var_4393_bool = true;
		var_4395_bool = var_425_float < 7;
		if(var_4395_bool != 1) {
			var_4397_bool = var_425_float >= 20;
			if(var_4397_bool != 1)
				var_4393_bool = false;
		}
		var_431_object->SwitchLights(0, var_4393_bool);
		}
		var_427_int += 1;
	}
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_12027(bool var_5403_bool)
{
	int var_5406_int;
	func_138(var_5406_int, "d5AnnaVisit");
	if(var_5406_int != 0) {
		var_5403_bool = true;
		return 0;
	}
	var_5403_bool = false;
}


// @pe
void func_9985(int var_5094_int, float var_5095_float)
{
	float var_5099_float;
	var_5095_float = var_5099_float;
	int var_5096_int;
	func_12495(var_5096_int, 538404, 538403, var_5099_float);
	var_5096_int = var_5094_int;
}


// @pe
void func_12039(bool var_5317_bool)
{
	int var_5320_int;
	func_138(var_5320_int, "d8MladVladVisit");
	if(var_5320_int != 0) {
		var_5317_bool = true;
		return 0;
	}
	var_5317_bool = false;
}


// @pe
void func_9994(int var_5293_int, float var_5294_float)
{
	float var_5298_float;
	var_5294_float = var_5298_float;
	int var_5295_int;
	func_12495(var_5295_int, 530572, 530571, var_5298_float);
	var_5295_int = var_5293_int;
}


void func_3853(int var_3565_int, int var_3566_int, int var_3567_int)
{
	int var_3572_int; int var_3573_int; int var_3574_int; int var_3575_int;
	bool var_3576_bool = false;
	if(var_3567_int > 8) {
		if(var_3567_int < 21)
			var_3576_bool = true;
	}
	if(var_3576_bool != 0) {
		int var_3581_int;
		var_3565_int = var_3581_int;
		func_509(var_3581_int, "pers_rat", "rat.xml", 2);
		int var_3585_int;
		var_3565_int = var_3585_int;
		func_509(var_3585_int, "pers_alkash", "alkash.xml", 2);
		int var_3589_int;
		var_3565_int = var_3589_int;
		func_509(var_3589_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3594_float; int var_3595_int;
		func_1171(var_3594_float, var_3595_int);
		if((2 * var_3594_float) != 0) {
			int var_3597_int; int var_3600_int;
			var_3565_int = var_3597_int;
			var_3572_int = var_3600_int;
			func_509(var_3597_int, "pers_grabitel", "grabitel.xml", var_3600_int);
		}
		if((var_3595_int + 1) >= 2) {
			int var_3605_int;
			var_3565_int = var_3605_int;
			func_509(var_3605_int, "pers_patrool", "patrol.xml", 2);
			bool var_3609_bool; int var_3610_int;
			var_3566_int = var_3610_int;
			func_1378(var_3609_bool, var_3610_int);
			if(var_3609_bool != 0) {
				int var_3611_int;
				var_3565_int = var_3611_int;
				func_509(var_3611_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3616_float; int var_3617_int;
		var_3566_int = var_3617_int;
		func_1261(var_3616_float, var_3617_int);
		if((1 * var_3616_float) != 0) {
			int var_3619_int; int var_3622_int;
			var_3565_int = var_3619_int;
			var_3573_int = var_3622_int;
			func_509(var_3619_int, "pers_bomber", "bomber.xml", var_3622_int);
		}
	} else {
		int var_3636_int;
		var_3565_int = var_3636_int;
		func_509(var_3636_int, "pers_rat", "rat.xml", 4);
		int var_3640_int;
		var_3565_int = var_3640_int;
		func_509(var_3640_int, "pers_alkash", "alkash.xml", 1);
		int var_3644_int;
		var_3565_int = var_3644_int;
		func_509(var_3644_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3649_float; int var_3650_int;
		func_1171(var_3649_float, var_3650_int);
		if((3 * var_3649_float) != 0) {
			int var_3652_int; int var_3655_int;
			var_3565_int = var_3652_int;
			var_3574_int = var_3655_int;
			func_509(var_3652_int, "pers_grabitel", "grabitel.xml", var_3655_int);
		}
		if((var_3650_int + 1) >= 2) {
			int var_3660_int;
			var_3565_int = var_3660_int;
			func_509(var_3660_int, "pers_patrool", "patrol.xml", 1);
			bool var_3664_bool; int var_3665_int;
			var_3566_int = var_3665_int;
			func_1378(var_3664_bool, var_3665_int);
			if(var_3664_bool != 0) {
				int var_3666_int;
				var_3565_int = var_3666_int;
				func_509(var_3666_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3671_float; int var_3672_int;
		var_3566_int = var_3672_int;
		func_1261(var_3671_float, var_3672_int);
		if((1 * var_3671_float) == 0) goto Label_4015;
		int var_3674_int; int var_3677_int;
		var_3565_int = var_3674_int;
		var_3575_int = var_3677_int;
		func_509(var_3674_int, "pers_bomber", "bomber.xml", var_3677_int);
	}
Label_4015:
	bool var_3623_bool; int var_3624_int; int var_3625_int;
	var_3566_int = var_3624_int;
	var_3567_int = var_3625_int;
	func_1351(var_3623_bool, var_3624_int, var_3625_int);
	if(var_3623_bool != 0) {
		int var_3626_int;
		var_3565_int = var_3626_int;
		func_509(var_3626_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3630_bool; int var_3631_int;
	var_3566_int = var_3631_int;
	func_1378(var_3630_bool, var_3631_int);
	if(var_3630_bool != 0) {
		int var_3632_int;
		var_3565_int = var_3632_int;
		func_509(var_3632_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


void func_785(int var_738_int, bool var_739_bool)
{
	object var_742_object;
	@GetMainOutdoorScene(var_742_object);
	if(var_742_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_742_object->EnableSubsets((var_738_int + 1), 100, var_739_bool, true);
}
EMIT "Stack[-2] = 0";


// @pe
void func_12051(bool var_4952_bool)
{
	int var_4955_int;
	func_138(var_4955_int, "d9q03");
	if(var_4955_int == 1000)
		var_4952_bool = true;
	var_4952_bool = false;
}


// @pe
void func_10003(int var_5430_int, float var_5431_float)
{
	float var_5435_float;
	var_5431_float = var_5435_float;
	int var_5432_int;
	func_12495(var_5432_int, 515493, 515492, var_5435_float);
	var_5432_int = var_5430_int;
}


// @pe
void func_6936(int var_1737_int, int var_1738_int, object var_1739_object, object var_1740_object, object var_1741_object, object var_1742_object)
{
	if(var_1738_int == 0) {
		func_802(13, false);
		func_819(13, false, 1);
		int var_1750_int; int var_1751_int; object var_1752_object; object var_1753_object; object var_1754_object;
		var_1750_int = 13;
		var_1737_int = var_1751_int;
		var_1739_object = var_1752_object;
		var_1740_object = var_1753_object;
		var_1741_object = var_1754_object;
		func_628(var_1751_int, var_1752_object, var_1753_object, var_1754_object);
		object var_1755_object;
		var_1742_object = var_1755_object;
		func_311(var_1755_object, 0);
		func_876(13, false, 4);
		func_938(13, false, 4);
	}
	int var_1764_int;
	var_1738_int = var_1764_int;
	func_1056(13, var_1764_int);
	int var_1766_int; int var_1767_int;
	var_1737_int = var_1766_int;
	var_1738_int = var_1767_int;
	func_1630(13, var_1766_int, var_1767_int);
}


// @pe
void func_5912(int var_1572_int, int var_1573_int, object var_1574_object, object var_1575_object, object var_1576_object, object var_1577_object)
{
	if(var_1573_int == 0) {
		func_802(8, false);
		func_819(8, false, 1);
		int var_1585_int; int var_1586_int; object var_1587_object; object var_1588_object; object var_1589_object;
		var_1585_int = 8;
		var_1572_int = var_1586_int;
		var_1574_object = var_1587_object;
		var_1575_object = var_1588_object;
		var_1576_object = var_1589_object;
		func_628(var_1586_int, var_1587_object, var_1588_object, var_1589_object);
		object var_1590_object;
		var_1577_object = var_1590_object;
		func_311(var_1590_object, 0);
		func_876(8, false, 4);
		func_938(8, false, 4);
	}
	int var_1599_int;
	var_1573_int = var_1599_int;
	func_989(8, var_1599_int);
	int var_1601_int; int var_1602_int;
	var_1572_int = var_1601_int;
	var_1573_int = var_1602_int;
	func_1630(8, var_1601_int, var_1602_int);
}


// @pe
void func_10012(int var_5034_int, float var_5035_float)
{
	float var_5039_float;
	var_5035_float = var_5039_float;
	int var_5036_int;
	func_12495(var_5036_int, 535696, 535695, var_5039_float);
	var_5036_int = var_5034_int;
}


// @pe
void func_12063(bool var_4724_bool)
{
	int var_4727_int;
	func_138(var_4727_int, "d10KaterinaVisit");
	if(var_4727_int != 0) {
		var_4724_bool = true;
		return 0;
	}
	var_4724_bool = false;
}


void func_802(int var_453_int, bool var_454_bool)
{
	object var_457_object;
	@GetMainOutdoorScene(var_457_object);
	if(var_457_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_457_object->EnableSubsets((var_453_int + 1), 200, var_454_bool, false);
}
EMIT "Stack[-2] = 0";


// @pe
void func_4900(int var_3537_int, int var_3538_int, object var_3539_object, object var_3540_object, object var_3541_object, object var_3542_object)
{
	if(var_3538_int == 0) {
		func_802(2, false);
		func_819(2, false, 1);
		int var_3551_int; object var_3552_object; object var_3553_object; object var_3554_object;
		var_3537_int = var_3551_int;
		var_3539_object = var_3552_object;
		var_3540_object = var_3553_object;
		var_3541_object = var_3554_object;
		func_726(2, var_3551_int, var_3552_object, var_3553_object, var_3554_object);
		object var_3555_object;
		var_3542_object = var_3555_object;
		func_311(var_3555_object, 2);
		func_876(2, false, 5);
		func_938(2, true, 5);
	}
	func_785(2, false);
	int var_3566_int; int var_3567_int;
	var_3537_int = var_3566_int;
	var_3538_int = var_3567_int;
	func_3853(2, var_3566_int, var_3567_int);
}


// @pe
void func_10021(int var_5004_int, float var_5005_float)
{
	float var_5009_float;
	var_5005_float = var_5009_float;
	int var_5006_int;
	func_12495(var_5006_int, 535694, 535693, var_5009_float);
	var_5006_int = var_5004_int;
}


// @pe
void func_12075(bool var_5058_bool)
{
	int var_5061_int;
	func_138(var_5061_int, "d10MarkVisit");
	if(var_5061_int != 0) {
		var_5058_bool = true;
		return 0;
	}
	var_5058_bool = false;
}


// @pe
void func_10030(int var_5473_int, float var_5474_float)
{
	float var_5478_float;
	var_5474_float = var_5478_float;
	int var_5475_int;
	func_12495(var_5475_int, 530574, 530573, var_5478_float);
	var_5475_int = var_5473_int;
}


void func_819(int var_529_int, bool var_530_bool, int var_531_int)
{
	string var_539_string; object var_540_object; int var_541_int; string var_542_string; object var_543_object; int var_544_int; object var_545_object;
	var_539_string = "street_rags" + (var_529_int + 1);
	if(var_530_bool != 0) {
		@GetMainOutdoorScene(var_540_object);
		if(var_540_object == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return 14;
		}
		var_541_int = 1;

		for(;;) {
			if(var_541_int <= var_531_int) {
				var_542_string = (var_539_string + "_") + var_541_int;
				@FindActor(var_543_object, var_542_string);
				if(!var_543_object) //@nz
					@AddActor(var_543_object, var_542_string, var_540_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "do_invis.xml");
				else
					var_543_object->RemoveOnUnload(false);
			var_540_object = null;
	} else {
			var_544_int = 1;

			for(;;) {
				if(!(var_544_int <= var_531_int)) goto Label_875;
				@FindActor(var_545_object, ((var_539_string + "_") + var_544_int));
				if(var_545_object != 0)
					var_545_object->RemoveOnUnload();
				var_545_object = null;
				var_544_int += 1;
			}
	}
	Label_875:
		return 14;

		}
		var_543_object = null;
		var_541_int += 1;
	}
	
}


// @pe
void func_12087(bool var_5026_bool)
{
	int var_5029_int;
	func_138(var_5029_int, "d12q01BurahVisit");
	if(var_5029_int != 0) {
		var_5026_bool = true;
		return 0;
	}
	var_5026_bool = false;
}


// @pe
void func_10039(int var_6153_int, float var_6154_float)
{
	float var_6158_float;
	var_6154_float = var_6158_float;
	int var_6155_int;
	func_12495(var_6155_int, 501160, 501159, var_6158_float);
	var_6155_int = var_6153_int;
}


// @pe
void func_10048(int var_5863_int, float var_5864_float)
{
	float var_5868_float;
	var_5864_float = var_5868_float;
	int var_5865_int;
	func_12495(var_5865_int, 501158, 501157, var_5868_float);
	var_5865_int = var_5863_int;
}


// @pe
void func_12099(bool var_5116_bool)
{
	int var_5119_int;
	func_138(var_5119_int, "d4ViktorVisit");
	if(var_5119_int != 0) {
		var_5116_bool = true;
		return 0;
	}
	var_5116_bool = false;
}


// @pe
void func_10057(int var_6089_int, float var_6090_float)
{
	float var_6094_float;
	var_6090_float = var_6094_float;
	int var_6091_int;
	func_12495(var_6091_int, 501154, 501153, var_6094_float);
	var_6091_int = var_6089_int;
}


// @pe
void func_6988(int var_2967_int, int var_2968_int, object var_2969_object, object var_2970_object, object var_2971_object, object var_2972_object)
{
	if(var_2968_int == 0) {
		func_802(13, true);
		func_819(13, true, 1);
		int var_2981_int; object var_2982_object; object var_2983_object; object var_2984_object;
		var_2967_int = var_2981_int;
		var_2969_object = var_2982_object;
		var_2970_object = var_2983_object;
		var_2971_object = var_2984_object;
		func_647(13, var_2981_int, var_2982_object, var_2983_object, var_2984_object);
		object var_2985_object;
		var_2972_object = var_2985_object;
		func_311(var_2985_object, 1);
		func_876(13, true, 4);
		func_938(13, false, 4);
	}
	func_785(13, false);
	int var_2996_int; int var_2997_int;
	var_2967_int = var_2996_int;
	var_2968_int = var_2997_int;
	func_2770(13, var_2996_int, var_2997_int);
}


void func_9037(int var_465_int, int var_466_int, int var_467_int, int var_468_int)
{
	int var_476_int; object var_477_object; object var_478_object; object var_479_object; object var_480_object;
	@Trace("City update");
	bool var_482_bool = false;
	if(var_465_int == var_467_int) {
		if(var_466_int == var_468_int)
			var_482_bool = true;
	}
	if(var_482_bool != 0)
		@PlaySound("kolokol");
	
	for(;;) {
		if(0 < 16) {
			int var_488_int;
			var_476_int = var_488_int;
			func_496(var_488_int);
			bool var_493_bool; int var_494_int;
			var_476_int = var_494_int;
			func_406(var_493_bool, var_494_int);
			if(var_493_bool != 0) {
				int var_502_int; int var_503_int; int var_504_int;
				var_476_int = var_502_int;
				var_465_int = var_503_int;
				var_466_int = var_504_int;
				func_9157(var_502_int, var_503_int, var_504_int);
			} else {
			bool var_1980_bool; int var_1981_int;
			var_476_int = var_1981_int;
			func_436(var_1980_bool, var_1981_int);
			if(var_1980_bool != 0) {
				int var_1989_int; int var_1990_int; int var_1991_int;
				var_476_int = var_1989_int;
				var_465_int = var_1990_int;
				var_466_int = var_1991_int;
				func_9382(var_1989_int, var_1990_int, var_1991_int);
				goto Label_9090;
			}
			int var_3170_int; int var_3171_int; int var_3172_int;
			var_476_int = var_3170_int;
			var_465_int = var_3171_int;
			var_466_int = var_3172_int;
			func_9607(var_3170_int, var_3171_int, var_3172_int);
		}
		if(var_466_int == 0) {
			int var_4306_int;
			func_14735(var_4306_int);
			bool var_4368_bool = true;
			var_4370_bool = var_4306_int == 1;
			if(var_4370_bool != 1) {
				bool var_4371_bool;
				func_436(var_4371_bool, 5);
				if(var_4371_bool != 1)
					var_4368_bool = false;
			}
			if(var_4368_bool != 0) {
				@FindActor(var_477_object, "dt_house_1_07");
				var_477_object->EnableSubset(200, true);
				var_477_object = null;
			} else {
					@FindActor(var_478_object, "dt_house_1_07");
					var_478_object->EnableSubset(200, false);
					var_478_object = null;
			}
		}
		if(var_466_int == 7) {
			@Trace("day time");
			@GetMainOutdoorScene(var_479_object);
			var_479_object->SwitchLights(0, false);
			var_479_object = null;
		} else if(var_466_int == 20) {
			@Trace("night time");
			@GetMainOutdoorScene(var_480_object);
			var_480_object->SwitchLights(0, true);
			var_480_object = null;

		}
		}
	Label_9090:
		var_476_int += 1;
	}
	
}


// @pe
void func_5964(int var_2802_int, int var_2803_int, object var_2804_object, object var_2805_object, object var_2806_object, object var_2807_object)
{
	if(var_2803_int == 0) {
		func_802(8, true);
		func_819(8, true, 1);
		int var_2816_int; object var_2817_object; object var_2818_object; object var_2819_object;
		var_2802_int = var_2816_int;
		var_2804_object = var_2817_object;
		var_2805_object = var_2818_object;
		var_2806_object = var_2819_object;
		func_647(8, var_2816_int, var_2817_object, var_2818_object, var_2819_object);
		object var_2820_object;
		var_2807_object = var_2820_object;
		func_311(var_2820_object, 1);
		func_876(8, true, 4);
		func_938(8, false, 4);
	}
	func_785(8, false);
	int var_2831_int; int var_2832_int;
	var_2802_int = var_2831_int;
	var_2803_int = var_2832_int;
	func_2770(8, var_2831_int, var_2832_int);
}


// @pe
void func_12111(bool var_4980_bool)
{
	int var_4983_int;
	func_138(var_4983_int, "d8AglajaVisit");
	if(var_4983_int != 0) {
		var_4980_bool = true;
		return 0;
	}
	var_4980_bool = false;
}


// @pe
void func_10066(int var_4814_int, float var_4815_float)
{
	float var_4819_float;
	var_4815_float = var_4819_float;
	int var_4816_int;
	func_12495(var_4816_int, 501152, 501151, var_4819_float);
	var_4816_int = var_4814_int;
}


// @pe
void func_4952(object var_97_object)
{
	var_97_object->add("house5_02");
	var_97_object->add("dt_house1_union2_03l");
	var_97_object->add("dt_house1_union2_03r");
	var_97_object->add("dt_house1_union2_01l");
	var_97_object->add("dt_house1_union2_01r");
	var_97_object->add("house5_unoinl");
	var_97_object->add("house5_unoinr");
	var_97_object->add("dt_house_1_01");
	var_97_object->add("house5_05");
	var_97_object->add("house5_06");
	var_97_object->add("dt_house_1_02");
	var_97_object->add("house5_unoin_solid01l");
	var_97_object->add("house5_unoin_solid01r");
	var_97_object->add("house5_03");
	var_97_object->add("house5_04");
	var_97_object->add("house1_se_02l");
	var_97_object->add("house1_se_02r");
	var_97_object->add("dt_house3_01_i2");
	var_97_object->add("dt_house3_02_i2");
	var_97_object->add("dt_house3_02");
	var_97_object->add("dt_house3_03_i2");
	var_97_object->add("dt_house3_03");
	var_97_object->add("dt_house3_04_i2");
	var_97_object->add("house5_21");
}


// @pe
void func_12123(bool var_4944_bool)
{
	int var_4947_int;
	func_138(var_4947_int, "d9AnnaVisit");
	if(var_4947_int != 0) {
		var_4944_bool = true;
		return 0;
	}
	var_4944_bool = false;
}


// @pe
void func_10075(int var_6387_int, float var_6388_float)
{
	float var_6392_float;
	var_6388_float = var_6392_float;
	int var_6389_int;
	func_12495(var_6389_int, 501156, 501155, var_6392_float);
	var_6389_int = var_6387_int;
}


// @pe
void func_10084(int var_5341_int, float var_5342_float)
{
	float var_5346_float;
	var_5342_float = var_5346_float;
	int var_5343_int;
	func_12495(var_5343_int, 501413, 501412, var_5346_float);
	var_5343_int = var_5341_int;
}


// @pe
void func_12135(bool var_5132_bool)
{
	int var_5135_int;
	func_138(var_5135_int, "d9LaraVisit");
	if(var_5135_int != 0) {
		var_5132_bool = true;
		return 0;
	}
	var_5132_bool = false;
}


void func_876(int var_640_int, bool var_641_bool, int var_642_int)
{
	string var_651_string; object var_652_object; int var_653_int; string var_654_string; object var_655_object; int var_656_int; string var_657_string; object var_658_object;
	var_651_string = "dr_mark" + (var_640_int + 1);
	if(var_641_bool != 0) {
		@GetMainOutdoorScene(var_652_object);
		if(var_652_object == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return 16;
		}
		var_653_int = 1;

		for(;;) {
			if(var_653_int <= var_642_int) {
				var_654_string = (var_651_string + "_") + var_653_int;
				@FindActor(var_655_object, var_654_string);
				if(!var_655_object) { //@nz
					@AddActor(var_655_object, var_654_string, var_652_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "disease_object.xml");
				} else {
				bool var_673_bool; string var_674_string;
				var_654_string = var_674_string;
				func_245(var_673_bool, var_674_string, "restore");
			}
			var_652_object = null;
	} else {
			var_656_int = 1;

			for(;;) {
				if(!(var_656_int <= var_642_int)) goto Label_937;
				@FindActor(var_658_object, ((var_651_string + "_") + var_656_int));
				if(var_658_object != 0) {
					bool var_683_bool; string var_684_string;
					var_657_string = var_684_string;
					func_245(var_683_bool, var_684_string, "cleanup");
				}
				var_658_object = null;
				var_656_int += 1;
			}
	}
	Label_937:
		return 16;

		}
		var_655_object = null;
		var_653_int += 1;
	}
	
}


// @pe
void func_10093(int var_5349_int, float var_5350_float)
{
	float var_5354_float;
	var_5350_float = var_5354_float;
	int var_5351_int;
	func_12495(var_5351_int, 502662, 502661, var_5354_float);
	var_5351_int = var_5349_int;
}


void func_1903(int var_1058_int, int var_1059_int, int var_1060_int)
{
	int var_1062_int;
	if((var_1059_int + 1) == 12)
		return 2;
	bool var_1067_bool = false;
	bool var_1068_bool = true;
	var_1070_bool = var_1060_int < 7;
	if(var_1070_bool != 1) {
		var_1072_bool = var_1060_int > 21;
		if(var_1072_bool != 1)
			var_1068_bool = false;
	}
	if(var_1068_bool != 0) {
		if(var_1059_int != 0)
			var_1067_bool = true;
	}
	if(var_1067_bool != 0) {
		float var_1075_float; int var_1076_int;
		var_1059_int = var_1076_int;
		func_1147(var_1075_float, var_1076_int);
		var_1075_float = var_1062_int;
		if(var_1062_int != 0) {
			int var_1078_int; int var_1081_int;
			var_1058_int = var_1078_int;
			var_1062_int = var_1081_int;
			func_509(var_1078_int, "pers_grabitel", "grabitel.xml", var_1081_int);
		}
	}
	bool var_1082_bool; int var_1083_int; int var_1084_int;
	var_1059_int = var_1083_int;
	var_1060_int = var_1084_int;
	func_1116(var_1082_bool, var_1083_int, var_1084_int);
	if(var_1082_bool != 0) {
		int var_1085_int;
		var_1058_int = var_1085_int;
		func_509(var_1085_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1089_int;
		var_1058_int = var_1089_int;
		func_509(var_1089_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1093_int;
		var_1058_int = var_1093_int;
		func_509(var_1093_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1097_int;
		var_1058_int = var_1097_int;
		func_509(var_1097_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1101_int;
		var_1058_int = var_1101_int;
		func_509(var_1101_int, "pers_woman", "woman.xml", 1);
		int var_1105_int;
		var_1058_int = var_1105_int;
		func_509(var_1105_int, "pers_alkash", "alkash.xml", 1);
		int var_1109_int;
		var_1058_int = var_1109_int;
		func_509(var_1109_int, "pers_girl", "girl.xml", 1);
		int var_1113_int;
		var_1058_int = var_1113_int;
		func_509(var_1113_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_1154_bool = false;
			if(var_1060_int > 8) {
				if(var_1060_int < 21)
					var_1154_bool = true;
			}
			if(var_1154_bool == 0) goto Label_2095;
			int var_1159_int;
			var_1058_int = var_1159_int;
			func_509(var_1159_int, "pers_woman", "woman.xml", 1);
			int var_1163_int;
			var_1058_int = var_1163_int;
			func_509(var_1163_int, "pers_unosha", "unosha.xml", 1);
			int var_1167_int;
			var_1058_int = var_1167_int;
			func_509(var_1167_int, "pers_unosha", "unosha2.xml", 1);
			int var_1171_int;
			var_1058_int = var_1171_int;
			func_509(var_1171_int, "pers_worker", "worker.xml", 1);
			int var_1175_int;
			var_1058_int = var_1175_int;
			func_509(var_1175_int, "pers_worker", "worker2.xml", 1);
			int var_1179_int;
			var_1058_int = var_1179_int;
			func_509(var_1179_int, "pers_alkash", "alkash.xml", 1);
			int var_1183_int;
			var_1058_int = var_1183_int;
			func_509(var_1183_int, "pers_girl", "girl.xml", 1);
			int var_1187_int;
			var_1058_int = var_1187_int;
			func_509(var_1187_int, "pers_girl", "girl2.xml", 1);
			if((var_1059_int + 1) >= 3) {
				int var_1195_int;
				var_1058_int = var_1195_int;
				func_509(var_1195_int, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
			if((var_1059_int + 1) >= 7) {
				int var_1203_int;
				var_1058_int = var_1203_int;
				func_509(var_1203_int, "pers_butcher", "butcher.xml", 2);
			}
	}
Label_2161:
	for(;;) {
		bool var_1117_bool = false;
		bool var_1118_bool = false;
		if(var_1059_int == 0) {
			if(var_1060_int > 12)
				var_1118_bool = true;
		}
		if(var_1118_bool != 0) {
			if(var_1060_int < 22)
				var_1117_bool = true;
		}
		if(var_1117_bool != 0) {
			int var_1125_int;
			var_1058_int = var_1125_int;
			func_509(var_1125_int, "pers_woman", "woman_killme.xml", 1);
		}
		bool var_1129_bool; int var_1130_int; int var_1131_int;
		var_1059_int = var_1130_int;
		var_1060_int = var_1131_int;
		func_1351(var_1129_bool, var_1130_int, var_1131_int);
		if(var_1129_bool != 0) {
			int var_1136_int;
			var_1058_int = var_1136_int;
			func_509(var_1136_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		bool var_1140_bool; int var_1141_int; int var_1142_int;
		var_1059_int = var_1141_int;
		var_1060_int = var_1142_int;
		func_1361(var_1140_bool, var_1141_int, var_1142_int);
		if(var_1140_bool != 0) {
			int var_1150_int;
			var_1058_int = var_1150_int;
			func_509(var_1150_int, "pers_nudegirl", "nudegirl.xml", 1);
		}
		return 2;

	}
	
Label_2095:
	int var_1207_int;
	var_1058_int = var_1207_int;
	func_509(var_1207_int, "pers_woman", "woman.xml", 1);
	int var_1211_int;
	var_1058_int = var_1211_int;
	func_509(var_1211_int, "pers_unosha", "unosha.xml", 1);
	int var_1215_int;
	var_1058_int = var_1215_int;
	func_509(var_1215_int, "pers_unosha", "unosha2.xml", 1);
	int var_1219_int;
	var_1058_int = var_1219_int;
	func_509(var_1219_int, "pers_worker", "worker.xml", 1);
	int var_1223_int;
	var_1058_int = var_1223_int;
	func_509(var_1223_int, "pers_worker", "worker2.xml", 1);
	int var_1227_int;
	var_1058_int = var_1227_int;
	func_509(var_1227_int, "pers_alkash", "alkash.xml", 1);
	if((var_1059_int + 1) >= 3) {
		int var_1235_int;
		var_1058_int = var_1235_int;
		func_509(var_1235_int, "pers_dohodyaga", "dohodyaga.xml", 1);
	}
	if(!((var_1059_int + 1) >= 7)) goto Label_2161;
	int var_1243_int;
	var_1058_int = var_1243_int;
	func_509(var_1243_int, "pers_butcher", "butcher.xml", 3);
}


// @pe
void func_12147(bool var_4762_bool)
{
	int var_4765_int;
	func_138(var_4765_int, "d9JuliaVisit");
	if(var_4765_int != 0) {
		var_4762_bool = true;
		return 0;
	}
	var_4762_bool = false;
}


void func_11126(void)
{
	object var_6180_object;
	func_12503(var_6180_object);
	object var_6178_object;
	var_6180_object = var_6178_object;
	object var_6179_object;
	var_6178_object->FindMark(var_6179_object, "d3q01AlexandrGotoOspina");
	if(var_6179_object != 0)
		var_6179_object->Remove();
	var_6178_object->FindMark(var_6179_object, "d3q01BigVladAgreed");
	if(var_6179_object != 0)
		var_6179_object->Remove();
	var_6178_object->FindMark(var_6179_object, "d3q01OspinaGotoBigVlad");
	if(var_6179_object != 0)
		var_6179_object->Remove();
	var_6178_object->FindMark(var_6179_object, "d3q01RubinGotoAlexandr");
	if(var_6179_object != 0)
		var_6179_object->Remove();
	var_6178_object->FindMark(var_6179_object, "d3q02GeorgGotoViktor");
	if(var_6179_object != 0)
		var_6179_object->Remove();
	var_6178_object->FindMark(var_6179_object, "d3q02HanGotoMladVlad");
	if(var_6179_object != 0)
		var_6179_object->Remove();
	var_6178_object->FindMark(var_6179_object, "d3q02MishkaGotoMladVlad");
	if(var_6179_object != 0)
		var_6179_object->Remove();
	var_6178_object->FindMark(var_6179_object, "d3q02MladVladGotoButcher");
	if(var_6179_object != 0)
		var_6179_object->Remove();
	var_6178_object->FindMark(var_6179_object, "d3q02MladVladGotoViktor");
	if(var_6179_object != 0)
		var_6179_object->Remove();
	var_6178_object->FindMark(var_6179_object, "d3q02ViktorGotoHan");
	if(var_6179_object != 0)
		var_6179_object->Remove();
	var_6178_object->FindMark(var_6179_object, "d3q02ViktorGotoMladVlad");
	if(var_6179_object != 0)
		var_6179_object->Remove();
	var_6178_object->FindMark(var_6179_object, "d3q03KapellaBoyLocation");
	if(var_6179_object != 0)
		var_6179_object->Remove();
	bool var_6205_bool;
	func_12478(var_6205_bool, 25);
	bool var_6207_bool;
	func_12478(var_6207_bool, 26);
	bool var_6209_bool;
	func_12478(var_6209_bool, 27);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10102(int var_5235_int, float var_5236_float)
{
	float var_5240_float;
	var_5236_float = var_5240_float;
	int var_5237_int;
	func_12495(var_5237_int, 532770, 532769, var_5240_float);
	var_5237_int = var_5235_int;
}


// @pe
void func_12159(bool var_5042_bool)
{
	int var_5045_int;
	func_138(var_5045_int, "d10AglajaVisit");
	if(var_5045_int != 0) {
		var_5042_bool = true;
		return 0;
	}
	var_5042_bool = false;
}


// @pe
void func_7040(int var_4097_int, int var_4098_int, object var_4099_object, object var_4100_object, object var_4101_object, object var_4102_object)
{
	if(var_4098_int == 0) {
		func_802(13, false);
		func_819(13, false, 1);
		int var_4111_int; object var_4112_object; object var_4113_object; object var_4114_object;
		var_4097_int = var_4111_int;
		var_4099_object = var_4112_object;
		var_4100_object = var_4113_object;
		var_4101_object = var_4114_object;
		func_726(13, var_4111_int, var_4112_object, var_4113_object, var_4114_object);
		object var_4115_object;
		var_4102_object = var_4115_object;
		func_311(var_4115_object, 2);
		func_876(13, false, 4);
		func_938(13, true, 4);
	}
	func_785(13, false);
	int var_4126_int; int var_4127_int;
	var_4097_int = var_4126_int;
	var_4098_int = var_4127_int;
	func_3665(13, var_4126_int, var_4127_int);
}


// @pe
void func_6016(int var_3932_int, int var_3933_int, object var_3934_object, object var_3935_object, object var_3936_object, object var_3937_object)
{
	if(var_3933_int == 0) {
		func_802(8, false);
		func_819(8, false, 1);
		int var_3946_int; object var_3947_object; object var_3948_object; object var_3949_object;
		var_3932_int = var_3946_int;
		var_3934_object = var_3947_object;
		var_3935_object = var_3948_object;
		var_3936_object = var_3949_object;
		func_726(8, var_3946_int, var_3947_object, var_3948_object, var_3949_object);
		object var_3950_object;
		var_3937_object = var_3950_object;
		func_311(var_3950_object, 2);
		func_876(8, false, 4);
		func_938(8, true, 4);
	}
	func_785(8, false);
	int var_3961_int; int var_3962_int;
	var_3932_int = var_3961_int;
	var_3933_int = var_3962_int;
	func_3665(8, var_3961_int, var_3962_int);
}


// @pe
void func_10111(int var_5446_int, float var_5447_float)
{
	float var_5451_float;
	var_5447_float = var_5451_float;
	int var_5448_int;
	func_12495(var_5448_int, 532768, 532767, var_5451_float);
	var_5448_int = var_5446_int;
}


void func_2950(int var_2436_int, int var_2437_int, int var_2438_int)
{
	int var_2441_int; int var_2442_int;
	bool var_2443_bool = false;
	if(var_2438_int > 8) {
		if(var_2438_int < 21)
			var_2443_bool = true;
	}
	if(var_2443_bool != 0) {
		int var_2448_int;
		var_2436_int = var_2448_int;
		func_509(var_2448_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_2452_int;
		var_2436_int = var_2452_int;
		func_509(var_2452_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		int var_2456_int;
		var_2436_int = var_2456_int;
		func_509(var_2456_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2460_int;
		var_2436_int = var_2460_int;
		func_535(var_2460_int, "fog", "fog.xml", 6);
		if(var_2437_int >= 5) {
			int var_2466_int;
			var_2436_int = var_2466_int;
			func_535(var_2466_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2471_float; int var_2472_int;
		func_1261(var_2471_float, var_2472_int);
		if((1 * var_2471_float) != 0) {
			int var_2474_int; int var_2477_int;
			var_2436_int = var_2474_int;
			var_2441_int = var_2477_int;
			func_509(var_2474_int, "pers_bomber", "bomber.xml", var_2477_int);
		}
	} else {
		int var_2522_int;
		var_2436_int = var_2522_int;
		func_509(var_2522_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2526_int;
		var_2436_int = var_2526_int;
		func_509(var_2526_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2530_int;
		var_2436_int = var_2530_int;
		func_509(var_2530_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2534_int;
		var_2436_int = var_2534_int;
		func_535(var_2534_int, "fog", "fog.xml", 6);
		if(var_2472_int >= 5) {
			int var_2540_int;
			var_2436_int = var_2540_int;
			func_535(var_2540_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2545_float; int var_2546_int;
		var_2437_int = var_2546_int;
		func_1261(var_2545_float, var_2546_int);
		if((1 * var_2545_float) == 0) goto Label_3068;
		int var_2548_int; int var_2551_int;
		var_2436_int = var_2548_int;
		var_2442_int = var_2551_int;
		func_509(var_2548_int, "pers_bomber", "bomber.xml", var_2551_int);
	}
Label_3068:
	int var_2478_int;
	var_2436_int = var_2478_int;
	func_522(var_2478_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2484_int;
	var_2436_int = var_2484_int;
	func_522(var_2484_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2490_int;
	var_2436_int = var_2490_int;
	func_522(var_2490_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2496_int;
	var_2436_int = var_2496_int;
	func_522(var_2496_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_2502_bool; int var_2503_int; int var_2504_int;
	var_2437_int = var_2503_int;
	var_2438_int = var_2504_int;
	func_1351(var_2502_bool, var_2503_int, var_2504_int);
	if(var_2502_bool != 0) {
		int var_2505_int;
		var_2436_int = var_2505_int;
		func_509(var_2505_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_2509_bool; int var_2510_int; int var_2511_int;
	var_2437_int = var_2510_int;
	var_2438_int = var_2511_int;
	func_1361(var_2509_bool, var_2510_int, var_2511_int);
	if(var_2509_bool != 0) {
		int var_2512_int;
		var_2436_int = var_2512_int;
		func_509(var_2512_int, "pers_nudegirl", "nudegirl.xml", 1);
	}
	bool var_2516_bool; int var_2517_int;
	var_2437_int = var_2517_int;
	func_1378(var_2516_bool, var_2517_int);
	if(var_2516_bool != 0) {
		int var_2518_int;
		var_2436_int = var_2518_int;
		func_509(var_2518_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_10120(int var_4847_int, float var_4848_float)
{
	float var_4852_float;
	var_4848_float = var_4852_float;
	int var_4849_int;
	func_12495(var_4849_int, 541589, 541588, var_4852_float);
	var_4849_int = var_4847_int;
}


// @pe
void func_12171(bool var_5086_bool)
{
	int var_5089_int;
	func_138(var_5089_int, "d11ViktorVisit");
	if(var_5089_int != 0) {
		var_5086_bool = true;
		return 0;
	}
	var_5086_bool = false;
}


// @pe
void func_10129(int var_5611_int, float var_5612_float)
{
	float var_5616_float;
	var_5612_float = var_5616_float;
	int var_5613_int;
	func_12495(var_5613_int, 501175, 501174, var_5616_float);
	var_5613_int = var_5611_int;
}


// @pe
void func_12183(bool var_4927_bool)
{
	int var_4930_int;
	func_138(var_4930_int, "d9AglajaVisit");
	if(var_4930_int != 0) {
		var_4927_bool = true;
		return 0;
	}
	var_4927_bool = false;
}


// @pe
void func_10138(int var_5333_int, float var_5334_float)
{
	float var_5338_float;
	var_5334_float = var_5338_float;
	int var_5335_int;
	func_12495(var_5335_int, 522198, 522197, var_5338_float);
	var_5335_int = var_5333_int;
}


// @pe
void func_5026(int var_1249_int, int var_1250_int, object var_1251_object, object var_1252_object, object var_1253_object, object var_1254_object)
{
	if(var_1250_int == 0) {
		func_802(3, false);
		func_819(3, false, 1);
		int var_1262_int; int var_1263_int; object var_1264_object; object var_1265_object; object var_1266_object;
		var_1262_int = 3;
		var_1249_int = var_1263_int;
		var_1251_object = var_1264_object;
		var_1252_object = var_1265_object;
		var_1253_object = var_1266_object;
		func_628(var_1263_int, var_1264_object, var_1265_object, var_1266_object);
		object var_1267_object;
		var_1254_object = var_1267_object;
		func_311(var_1267_object, 0);
		func_876(3, false, 7);
		func_938(3, false, 7);
	}
	int var_1276_int;
	var_1250_int = var_1276_int;
	func_989(3, var_1276_int);
	int var_1293_int; int var_1294_int;
	var_1249_int = var_1293_int;
	var_1250_int = var_1294_int;
	func_1903(3, var_1293_int, var_1294_int);
}


// @pe
void func_12195(bool var_4677_bool)
{
	int var_4680_int;
	func_138(var_4680_int, "d9ViktorVisit");
	if(var_4680_int != 0) {
		var_4677_bool = true;
		return 0;
	}
	var_4677_bool = false;
}


// @pe
void func_10147(int var_4869_int, float var_4870_float)
{
	float var_4874_float;
	var_4870_float = var_4874_float;
	int var_4871_int;
	func_12495(var_4871_int, 538398, 538397, var_4874_float);
	var_4871_int = var_4869_int;
}


void func_938(int var_687_int, bool var_688_bool, int var_689_int)
{
	object var_697_object; object var_698_object; string var_700_string; object var_701_object;
	@FindActor(var_697_object, ("br_" + (var_687_int + 1)));
	if(var_688_bool != 0) {
		if(!var_697_object) { //@nz
			@GetMainOutdoorScene(var_698_object);
			@AddActor(var_697_object, ("br_" + (var_687_int + 1)), var_698_object, [0.0, 0.0, 0.0]);
			var_698_object = null;
		}
	} else if(var_697_object != 0) {
		@RemoveActor(var_697_object);
	}
	int var_699_int = 1;
	
	while(var_699_int <= var_689_int) {
		@FindActor(var_701_object, ((("dr_mark" + (var_687_int + 1)) + "_") + var_699_int));
		if(var_701_object != 0) {
			bool var_720_bool; string var_721_string;
			var_700_string = var_721_string;
			func_245(var_720_bool, var_721_string, "cleanup");
		}
		var_701_object = null;
		var_699_int += 1;
	}
	
	
}
EMIT "Stack[-5] = 0";


// @pe
void func_10156(int var_4716_int, float var_4717_float)
{
	float var_4721_float;
	var_4717_float = var_4721_float;
	int var_4718_int;
	func_12495(var_4718_int, 538400, 538399, var_4721_float);
	var_4718_int = var_4716_int;
}


// @pe
void func_12207(bool var_4804_bool)
{
	int var_4807_int;
	func_138(var_4807_int, "d2q03RepDown");
	if(var_4807_int != 0) {
		var_4804_bool = true;
		return 0;
	}
	var_4804_bool = false;
}


// @pe
void func_7092(object var_298_object)
{
	var_298_object->add("lc_house7_02");
	var_298_object->add("lc_house7_03");
	var_298_object->add("lc_house7_04");
	var_298_object->add("lc_house7_05");
	var_298_object->add("lc_house7_06");
	var_298_object->add("lc_house7_07");
	var_298_object->add("lc_House6_02");
	var_298_object->add("lc_house7_01");
	var_298_object->add("lc_house_2_02");
	var_298_object->add("lc_House6_01");
	var_298_object->add("lc_house3_03_i2");
	var_298_object->add("lc_house3_03");
	var_298_object->add("lc_House6_03");
	var_298_object->add("lc_House6_04");
}


// @pe
void func_6068(object var_210_object)
{
	var_210_object->add("r3_house_2_02");
	var_210_object->add("r3_house3_02_i2");
	var_210_object->add("r3_house3_02");
	var_210_object->add("r3_house4_05_i2");
	var_210_object->add("r3_house4_05");
	var_210_object->add("r3_house4_03_i2");
	var_210_object->add("r3_house4_04_i2");
	var_210_object->add("r3_house4_04");
	var_210_object->add("r3_house4_01_i2");
	var_210_object->add("r3_house4_01");
	var_210_object->add("r3_house_2_01");
	var_210_object->add("r3_house4_02_i2");
	var_210_object->add("r3_house4_02");
	var_210_object->add("r3_house3_01_i2");
	var_210_object->add("r3_house3_01");
}


// @pe
void func_10165(int var_5565_int, float var_5566_float)
{
	float var_5570_float;
	var_5566_float = var_5570_float;
	int var_5567_int;
	func_12495(var_5567_int, 515303, 515302, var_5570_float);
	var_5567_int = var_5565_int;
}


// @pe
void func_12219(bool var_5192_bool, object var_5193_object)
{
	object var_5196_object;
	var_5193_object = var_5196_object;
	func_12421(var_5196_object);
	bool var_5195_bool;
	if(var_5195_bool != 0) {
		var_5192_bool = true;
		return 0;
	}
	var_5192_bool = false;
}


// @pe
void func_10174(int var_5595_int, float var_5596_float)
{
	float var_5600_float;
	var_5596_float = var_5600_float;
	int var_5597_int;
	func_12495(var_5597_int, 502851, 502850, var_5600_float);
	var_5597_int = var_5595_int;
}


void func_9157(int var_502_int, int var_503_int, int var_504_int)
{
	var_513_object = GlobalVars[8];
	object var_509_object;
	var_513_object->get(var_509_object, var_502_int);
	var_514_object = GlobalVars[9];
	object var_510_object;
	var_514_object->get(var_510_object, var_502_int);
	var_515_object = GlobalVars[10];
	object var_511_object;
	var_515_object->get(var_511_object, var_502_int);
	var_516_object = GlobalVars[13];
	object var_512_object;
	var_516_object->get(var_512_object, var_502_int);
	if(var_502_int == 0) {
		int var_519_int; int var_520_int; object var_521_object; object var_522_object; object var_523_object; object var_524_object;
		var_503_int = var_519_int;
		var_504_int = var_520_int;
		var_509_object = var_521_object;
		var_510_object = var_522_object;
		var_511_object = var_523_object;
		var_512_object = var_524_object;
		func_4393(var_519_int, var_520_int, var_521_object, var_522_object, var_523_object, var_524_object);
	} else if(var_502_int == 1) {
			int var_887_int; int var_888_int; object var_889_object; object var_890_object; object var_891_object; object var_892_object;
			var_503_int = var_887_int;
			var_504_int = var_888_int;
			var_509_object = var_889_object;
			var_510_object = var_890_object;
			var_511_object = var_891_object;
			var_512_object = var_892_object;
			func_4590(var_887_int, var_888_int, var_889_object, var_890_object, var_891_object, var_892_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_502_int == 2) {
		int var_1030_int; int var_1031_int; object var_1032_object; object var_1033_object; object var_1034_object; object var_1035_object;
		var_503_int = var_1030_int;
		var_504_int = var_1031_int;
		var_509_object = var_1032_object;
		var_510_object = var_1033_object;
		var_511_object = var_1034_object;
		var_512_object = var_1035_object;
		func_4796(var_1030_int, var_1031_int, var_1032_object, var_1033_object, var_1034_object, var_1035_object);
	} else if(var_502_int == 3) {
		int var_1249_int; int var_1250_int; object var_1251_object; object var_1252_object; object var_1253_object; object var_1254_object;
		var_503_int = var_1249_int;
		var_504_int = var_1250_int;
		var_509_object = var_1251_object;
		var_510_object = var_1252_object;
		var_511_object = var_1253_object;
		var_512_object = var_1254_object;
		func_5026(var_1249_int, var_1250_int, var_1251_object, var_1252_object, var_1253_object, var_1254_object);
	} else if(var_502_int == 4) {
		int var_1297_int; int var_1298_int; object var_1299_object; object var_1300_object; object var_1301_object; object var_1302_object;
		var_503_int = var_1297_int;
		var_504_int = var_1298_int;
		var_509_object = var_1299_object;
		var_510_object = var_1300_object;
		var_511_object = var_1301_object;
		var_512_object = var_1302_object;
		func_5244(var_1297_int, var_1298_int, var_1299_object, var_1300_object, var_1301_object, var_1302_object);
	} else if(var_502_int == 5) {
		int var_1342_int; int var_1343_int; object var_1344_object; object var_1345_object; object var_1346_object; object var_1347_object;
		var_503_int = var_1342_int;
		var_504_int = var_1343_int;
		var_509_object = var_1344_object;
		var_510_object = var_1345_object;
		var_511_object = var_1346_object;
		var_512_object = var_1347_object;
		func_5489(var_1342_int, var_1343_int, var_1344_object, var_1345_object, var_1346_object, var_1347_object);
	} else if(var_502_int == 6) {
		int var_1375_int; int var_1376_int; object var_1377_object; object var_1378_object; object var_1379_object; object var_1380_object;
		var_503_int = var_1375_int;
		var_504_int = var_1376_int;
		var_509_object = var_1377_object;
		var_510_object = var_1378_object;
		var_511_object = var_1379_object;
		var_512_object = var_1380_object;
		func_5647(var_1380_object);
	} else if(var_502_int == 7) {
		int var_1385_int; int var_1386_int; object var_1387_object; object var_1388_object; object var_1389_object; object var_1390_object;
		var_503_int = var_1385_int;
		var_504_int = var_1386_int;
		var_509_object = var_1387_object;
		var_510_object = var_1388_object;
		var_511_object = var_1389_object;
		var_512_object = var_1390_object;
		func_5712(var_1385_int, var_1386_int, var_1387_object, var_1388_object, var_1389_object, var_1390_object);
	} else if(var_502_int == 8) {
		int var_1572_int; int var_1573_int; object var_1574_object; object var_1575_object; object var_1576_object; object var_1577_object;
		var_503_int = var_1572_int;
		var_504_int = var_1573_int;
		var_509_object = var_1574_object;
		var_510_object = var_1575_object;
		var_511_object = var_1576_object;
		var_512_object = var_1577_object;
		func_5912(var_1572_int, var_1573_int, var_1574_object, var_1575_object, var_1576_object, var_1577_object);
	} else if(var_502_int == 9) {
		int var_1605_int; int var_1606_int; object var_1607_object; object var_1608_object; object var_1609_object; object var_1610_object;
		var_503_int = var_1605_int;
		var_504_int = var_1606_int;
		var_509_object = var_1607_object;
		var_510_object = var_1608_object;
		var_511_object = var_1609_object;
		var_512_object = var_1610_object;
		func_6115(var_1605_int, var_1606_int, var_1607_object, var_1608_object, var_1609_object, var_1610_object);
	} else if(var_502_int == 10) {
		int var_1638_int; int var_1639_int; object var_1640_object; object var_1641_object; object var_1642_object; object var_1643_object;
		var_503_int = var_1638_int;
		var_504_int = var_1639_int;
		var_509_object = var_1640_object;
		var_510_object = var_1641_object;
		var_511_object = var_1642_object;
		var_512_object = var_1643_object;
		func_6324(var_1638_int, var_1639_int, var_1640_object, var_1641_object, var_1642_object, var_1643_object);
	} else if(var_502_int == 11) {
		int var_1671_int; int var_1672_int; object var_1673_object; object var_1674_object; object var_1675_object; object var_1676_object;
		var_503_int = var_1671_int;
		var_504_int = var_1672_int;
		var_509_object = var_1673_object;
		var_510_object = var_1674_object;
		var_511_object = var_1675_object;
		var_512_object = var_1676_object;
		func_6536(var_1671_int, var_1672_int, var_1673_object, var_1674_object, var_1675_object, var_1676_object);
	} else if(var_502_int == 12) {
		int var_1704_int; int var_1705_int; object var_1706_object; object var_1707_object; object var_1708_object; object var_1709_object;
		var_503_int = var_1704_int;
		var_504_int = var_1705_int;
		var_509_object = var_1706_object;
		var_510_object = var_1707_object;
		var_511_object = var_1708_object;
		var_512_object = var_1709_object;
		func_6733(var_1704_int, var_1705_int, var_1706_object, var_1707_object, var_1708_object, var_1709_object);
	} else if(var_502_int == 13) {
		int var_1737_int; int var_1738_int; object var_1739_object; object var_1740_object; object var_1741_object; object var_1742_object;
		var_503_int = var_1737_int;
		var_504_int = var_1738_int;
		var_509_object = var_1739_object;
		var_510_object = var_1740_object;
		var_511_object = var_1741_object;
		var_512_object = var_1742_object;
		func_6936(var_1737_int, var_1738_int, var_1739_object, var_1740_object, var_1741_object, var_1742_object);
	} else if(var_502_int == 14) {
		int var_1770_int; int var_1771_int; object var_1772_object; object var_1773_object; object var_1774_object; object var_1775_object;
		var_503_int = var_1770_int;
		var_504_int = var_1771_int;
		var_509_object = var_1772_object;
		var_510_object = var_1773_object;
		var_511_object = var_1774_object;
		var_512_object = var_1775_object;
		func_7136(var_1770_int, var_1771_int, var_1772_object, var_1773_object, var_1774_object, var_1775_object);
	} else if(var_502_int == 15) {
		int var_1948_int; int var_1949_int; object var_1950_object; object var_1951_object; object var_1952_object; object var_1953_object;
		var_503_int = var_1948_int;
		var_504_int = var_1949_int;
		var_509_object = var_1950_object;
		var_510_object = var_1951_object;
		var_511_object = var_1952_object;
		var_512_object = var_1953_object;
		func_7318(var_1948_int, var_1949_int, var_1950_object, var_1951_object, var_1952_object, var_1953_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_12229(bool var_6359_bool)
{
	int var_6362_int;
	func_138(var_6362_int, "d1q01KaterinaUHave1day");
	if(var_6362_int == 1)
		var_6359_bool = true;
	var_6359_bool = false;
}


// @pe
void func_10183(int var_5309_int, float var_5310_float)
{
	float var_5314_float;
	var_5310_float = var_5314_float;
	int var_5311_int;
	func_12495(var_5311_int, 532895, 532894, var_5314_float);
	var_5311_int = var_5309_int;
}


void func_4041(int var_3249_int, int var_3250_int, int var_3251_int)
{
	int var_3256_int; int var_3257_int; int var_3258_int; int var_3259_int;
	bool var_3260_bool = false;
	if(var_3251_int > 8) {
		if(var_3251_int < 21)
			var_3260_bool = true;
	}
	if(var_3260_bool != 0) {
		int var_3265_int;
		var_3249_int = var_3265_int;
		func_509(var_3265_int, "pers_rat", "rat.xml", 4);
		int var_3269_int;
		var_3249_int = var_3269_int;
		func_509(var_3269_int, "pers_alkash", "alkash.xml", 2);
		int var_3273_int;
		var_3249_int = var_3273_int;
		func_509(var_3273_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3278_float; int var_3279_int;
		func_1171(var_3278_float, var_3279_int);
		if((2 * var_3278_float) != 0) {
			int var_3325_int; int var_3328_int;
			var_3249_int = var_3325_int;
			var_3256_int = var_3328_int;
			func_509(var_3325_int, "pers_grabitel", "grabitel.xml", var_3328_int);
		}
		if((var_3279_int + 1) >= 2) {
			int var_3333_int;
			var_3249_int = var_3333_int;
			func_509(var_3333_int, "pers_patrool", "patrol.xml", 2);
			bool var_3337_bool; int var_3338_int;
			var_3250_int = var_3338_int;
			func_1378(var_3337_bool, var_3338_int);
			if(var_3337_bool != 0) {
				int var_3339_int;
				var_3249_int = var_3339_int;
				func_509(var_3339_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3344_float; int var_3345_int;
		var_3250_int = var_3345_int;
		func_1261(var_3344_float, var_3345_int);
		if((1 * var_3344_float) != 0) {
			int var_3347_int; int var_3350_int;
			var_3249_int = var_3347_int;
			var_3257_int = var_3350_int;
			func_509(var_3347_int, "pers_bomber", "bomber.xml", var_3350_int);
		}
	} else {
		int var_3357_int;
		var_3249_int = var_3357_int;
		func_509(var_3357_int, "pers_rat", "rat.xml", 7);
		int var_3361_int;
		var_3249_int = var_3361_int;
		func_509(var_3361_int, "pers_alkash", "alkash.xml", 1);
		int var_3365_int;
		var_3249_int = var_3365_int;
		func_509(var_3365_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3370_float; int var_3371_int;
		func_1171(var_3370_float, var_3371_int);
		if((2 * var_3370_float) != 0) {
			int var_3373_int; int var_3376_int;
			var_3249_int = var_3373_int;
			var_3258_int = var_3376_int;
			func_509(var_3373_int, "pers_grabitel", "grabitel.xml", var_3376_int);
		}
		if((var_3371_int + 1) >= 2) {
			int var_3381_int;
			var_3249_int = var_3381_int;
			func_509(var_3381_int, "pers_patrool", "patrol.xml", 1);
			bool var_3385_bool; int var_3386_int;
			var_3250_int = var_3386_int;
			func_1378(var_3385_bool, var_3386_int);
			if(var_3385_bool != 0) {
				int var_3387_int;
				var_3249_int = var_3387_int;
				func_509(var_3387_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3392_float; int var_3393_int;
		var_3250_int = var_3393_int;
		func_1261(var_3392_float, var_3393_int);
		if((1 * var_3392_float) == 0) goto Label_4203;
		int var_3395_int; int var_3398_int;
		var_3249_int = var_3395_int;
		var_3259_int = var_3398_int;
		func_509(var_3395_int, "pers_bomber", "bomber.xml", var_3398_int);
	}
Label_4203:
	bool var_3351_bool; int var_3352_int;
	var_3250_int = var_3352_int;
	func_1378(var_3351_bool, var_3352_int);
	if(var_3351_bool != 0) {
		int var_3353_int;
		var_3249_int = var_3353_int;
		func_509(var_3353_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_10192(int var_5368_int, float var_5369_float)
{
	float var_5373_float;
	var_5369_float = var_5373_float;
	int var_5370_int;
	func_12495(var_5370_int, 522200, 522199, var_5373_float);
	var_5370_int = var_5368_int;
}


// @pe
void func_12241(bool var_5959_bool)
{
	int var_5962_int;
	func_138(var_5962_int, "d6q03");
	if(var_5962_int == 0) {
		var_5959_bool = true;
		return 0;
	}
	var_5959_bool = false;
}


// @pe
void func_5078(int var_2554_int, int var_2555_int, object var_2556_object, object var_2557_object, object var_2558_object, object var_2559_object)
{
	if(var_2555_int == 0) {
		func_802(3, true);
		func_819(3, true, 1);
		int var_2568_int; object var_2569_object; object var_2570_object; object var_2571_object;
		var_2554_int = var_2568_int;
		var_2556_object = var_2569_object;
		var_2557_object = var_2570_object;
		var_2558_object = var_2571_object;
		func_647(3, var_2568_int, var_2569_object, var_2570_object, var_2571_object);
		object var_2572_object;
		var_2559_object = var_2572_object;
		func_311(var_2572_object, 1);
		func_876(3, true, 7);
		func_938(3, false, 7);
	}
	func_785(3, false);
	int var_2583_int; int var_2584_int;
	var_2554_int = var_2583_int;
	var_2555_int = var_2584_int;
	func_2950(3, var_2583_int, var_2584_int);
}


// @pe
void func_10201(int var_4754_int, float var_4755_float)
{
	float var_4759_float;
	var_4755_float = var_4759_float;
	int var_4756_int;
	func_12495(var_4756_int, 538402, 538401, var_4759_float);
	var_4756_int = var_4754_int;
}


// @pe
void func_989(int var_1275_int, int var_1276_int)
{
	bool var_1277_bool = true;
	bool var_1278_bool = true;
	var_1280_bool = var_1276_int >= 20;
	if(var_1280_bool != 1) {
		var_1282_bool = var_1276_int < 2;
		if(var_1282_bool != 1)
			var_1278_bool = false;
	}
	if(var_1278_bool != 1) {
		bool var_1283_bool = false;
		if(var_1276_int >= 6) {
			if(var_1276_int < 10)
				var_1283_bool = true;
		}
		if(var_1283_bool != 1)
			var_1277_bool = false;
	}
	if(var_1277_bool != 0) {
		int var_1288_int;
		var_1275_int = var_1288_int;
		func_785(var_1288_int, true);
	} else {
		int var_1290_int;
		var_1275_int = var_1290_int;
		func_785(var_1290_int, false);
	}
	
}


void func_11230(void)
{
	object var_6016_object;
	func_12503(var_6016_object);
	object var_6014_object;
	var_6016_object = var_6014_object;
	object var_6015_object;
	var_6014_object->FindMark(var_6015_object, "d4q01BigVladGotoLara");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q01BigVladGotoSklad");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q01BigVladGotoSobor");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q01BigVladGotoTheater");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q01LaraGotoMladVlad");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q01LaraGotoMladVladSelf");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q01LaraGotoOspina");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q01MladVladGotoBigVlad");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q01MladVladGotoOspina");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q01OspinaGotoLara");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q01WastedMale");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q01Whitemask");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q02BirdmaskNearHome");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q02MladVladGotoAnna");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q02MladVladGotoJulia");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q02MladVladGotoLara");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q03AlexandrAboutVolnica");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q03AlexandrGotoGrif");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q03GrifGotoAlexandr");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	var_6014_object->FindMark(var_6015_object, "d4q03GrifGotoAlexandrSelf");
	if(var_6015_object != 0)
		var_6015_object->Remove();
	bool var_6057_bool;
	func_12478(var_6057_bool, 20);
	bool var_6059_bool;
	func_12478(var_6059_bool, 21);
	bool var_6061_bool;
	func_12478(var_6061_bool, 22);
	bool var_6063_bool;
	func_12478(var_6063_bool, 710);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_12253(bool var_5667_bool)
{
	int var_5670_int;
	func_138(var_5670_int, "d11q03BurahVisit");
	if(var_5670_int != 0) {
		var_5667_bool = true;
		return 0;
	}
	var_5667_bool = false;
}


// @pe
void func_7136(int var_1770_int, int var_1771_int, object var_1772_object, object var_1773_object, object var_1774_object, object var_1775_object)
{
	if(var_1771_int == 0) {
		func_802(14, false);
		func_819(14, false, 1);
		int var_1783_int; int var_1784_int; object var_1785_object; object var_1786_object; object var_1787_object;
		var_1783_int = 14;
		var_1770_int = var_1784_int;
		var_1772_object = var_1785_object;
		var_1773_object = var_1786_object;
		var_1774_object = var_1787_object;
		func_628(var_1784_int, var_1785_object, var_1786_object, var_1787_object);
		object var_1788_object;
		var_1775_object = var_1788_object;
		func_311(var_1788_object, 0);
		func_876(14, false, 5);
		func_938(14, false, 5);
	}
	int var_1797_int;
	var_1771_int = var_1797_int;
	func_1093(14, var_1797_int);
	int var_1808_int; int var_1809_int;
	var_1770_int = var_1808_int;
	var_1771_int = var_1809_int;
	func_1382(14, var_1808_int, var_1809_int);
}


// @pe
void func_10210(int var_5462_int, float var_5463_float)
{
	float var_5467_float;
	var_5463_float = var_5467_float;
	int var_5464_int;
	func_12495(var_5464_int, 503307, 503306, var_5467_float);
	var_5464_int = var_5462_int;
}


// @pe
void func_6115(int var_1605_int, int var_1606_int, object var_1607_object, object var_1608_object, object var_1609_object, object var_1610_object)
{
	if(var_1606_int == 0) {
		func_802(9, false);
		func_819(9, false, 1);
		int var_1618_int; int var_1619_int; object var_1620_object; object var_1621_object; object var_1622_object;
		var_1618_int = 9;
		var_1605_int = var_1619_int;
		var_1607_object = var_1620_object;
		var_1608_object = var_1621_object;
		var_1609_object = var_1622_object;
		func_628(var_1619_int, var_1620_object, var_1621_object, var_1622_object);
		object var_1623_object;
		var_1610_object = var_1623_object;
		func_311(var_1623_object, 0);
		func_876(9, false, 7);
		func_938(9, false, 7);
	}
	int var_1632_int;
	var_1606_int = var_1632_int;
	func_1056(9, var_1632_int);
	int var_1634_int; int var_1635_int;
	var_1605_int = var_1634_int;
	var_1606_int = var_1635_int;
	func_1630(9, var_1634_int, var_1635_int);
}


// @pe
void func_12265(bool var_6338_bool)
{
	int var_6341_int;
	func_138(var_6341_int, "d11q04KlaraVisit");
	if(var_6341_int != 0) {
		var_6338_bool = true;
		return 0;
	}
	var_6338_bool = false;
}


// @pe
void func_10219(int var_5124_int, float var_5125_float)
{
	float var_5129_float;
	var_5125_float = var_5129_float;
	int var_5126_int;
	func_12495(var_5126_int, 536320, 536319, var_5129_float);
	var_5126_int = var_5124_int;
}


// @pe
void func_10228(int var_5627_int, float var_5628_float)
{
	float var_5632_float;
	var_5628_float = var_5632_float;
	int var_5629_int;
	func_12495(var_5629_int, 515334, 515333, var_5632_float);
	var_5629_int = var_5627_int;
}


// @pe
void func_12277(bool var_5603_bool)
{
	int var_5606_int;
	func_138(var_5606_int, "d2TalkToAlexandr");
	if(var_5606_int != 0) {
		var_5603_bool = true;
		return 0;
	}
	var_5603_bool = false;
}


// @pe
void func_10237(int var_5411_int, float var_5412_float)
{
	float var_5416_float;
	var_5412_float = var_5416_float;
	int var_5413_int;
	func_12495(var_5413_int, 533079, 533078, var_5416_float);
	var_5413_int = var_5411_int;
}


