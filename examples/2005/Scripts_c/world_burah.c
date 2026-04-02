// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:,7:object:,8:object:,9:object:,10:object:,11:object:,12:object:,13:object:,14:object:,15:object:,16:object:

maintask task_0
{
	void init(void)
	{
		@SetVariable("branch", 1);
		@SetSaveProperty(0, 1);
		func_59();
		func_7895();
		func_8670();
		func_12121();
		float var_4589_float;
		float var_4590_float;
		func_234(var_4590_float);
		var_4590_float = var_4589_float;
		func_13626(var_4589_float);
		object var_4997_object;
		func_111(var_4997_object, "quest_b1_02");
		@AdvanceGameTime(0.6666667);
	
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
		func_8615(var_3_int, var_4_float);
		bool var_2_bool;
		if(var_2_bool != 0)
			return 0;
		bool var_4111_bool; int var_4112_int; float var_4113_float;
		iID = var_4112_int;
		fTime = var_4113_float;
		func_12060(var_4112_int, var_4113_float);
		if(var_4111_bool != 0)
			return 0;
		int var_4547_int; float var_4548_float;
		iID = var_4547_int;
		fTime = var_4548_float;
		func_12156(var_4547_int, var_4548_float);
	}

}


void OnTrigger(string name, string var_1_string)
{
	int var_4_int;
	if(name == "playsound") {
		@PlaySound(var_1_string);
	} else if(name == "enable_bonfire") {
			@_strtoi(var_4_int, var_1_string);
			func_7595(var_4_int - 1);
	}
Label_7483:
	for(;;) {

	}
	
	if(!(name == "disable_bonfire")) goto Label_7483;
	int var_5_int;
	@_strtoi(var_5_int, var_1_string);
	func_7672(var_5_int - 1);
}


void OnConsole(string var_0_string, string var_1_string)
{
	int var_12_int; int var_13_int; object var_14_object; int var_15_int; int var_16_int; object var_17_object; object var_18_object; object var_19_object; cvector var_20_cvector; object var_21_object;
	if(var_0_string == "horror") {
		@_strtoi(var_12_int, var_1_string);
		int var_24_int;
		var_12_int = var_24_int;
		func_406(var_24_int);
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
			func_270(var_45_object, 1);
			@Trace("Replaced");
			var_14_object = null;
		} else {
				@Trace("Invalid region index");
	}
			if(var_0_string == "nail") {
				@_strtoi(var_15_int, var_1_string);
				int var_76_int;
				var_15_int = var_76_int;
				func_436(var_76_int);
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
					func_270(var_94_object, 2);
					@Trace("Replaced");
					var_17_object = null;
				} else {
				@Trace("Invalid region index");
			}
			if(var_0_string == "fogme") {
				object var_100_object;
				func_81(var_100_object);
				var_100_object = var_18_object;
				var_18_object->GetScene(var_19_object);
				var_18_object->GetPosition(var_20_cvector);
				@AddActorByType(var_21_object, "fog", var_19_object, var_20_cvector, [0.0, 0.0, 1.0], "fog_stat.xml");
				var_21_object = null;
				var_19_object = null;
				var_18_object = null;
			} else if(var_0_string == "sepia") {
				func_254();
			} else if(var_0_string == "nosepia") {
				func_259();
			}
			}
	}
	goto Label_7594;
	
Label_7594:
	for(;;) {

	}
	
}


// @pe
void func_10240(void)
{
	func_151("cot_alexandr@door1", false);
}


// @pe
void func_7169(int var_3008_int, int var_3009_int, object var_3010_object, object var_3011_object, object var_3012_object, object var_3013_object)
{
	if(var_3009_int == 0) {
		func_760(14, true);
		func_777(14, true, 1);
		int var_3022_int; object var_3023_object; object var_3024_object; object var_3025_object;
		var_3008_int = var_3022_int;
		var_3010_object = var_3023_object;
		var_3011_object = var_3024_object;
		var_3012_object = var_3025_object;
		func_605(14, var_3022_int, var_3023_object, var_3024_object, var_3025_object);
		object var_3026_object;
		var_3013_object = var_3026_object;
		func_270(var_3026_object, 1);
		func_834(14, true, 5);
		func_896(14, false, 5);
	}
	func_743(14, false);
	int var_3037_int; int var_3038_int;
	var_3008_int = var_3037_int;
	var_3009_int = var_3038_int;
	func_2577(14, var_3037_int, var_3038_int);
}


void func_11266(void)
{
	object var_5797_object;
	func_12037(var_5797_object);
	object var_5796_object;
	var_5797_object = var_5796_object;
	float var_5802_float;
	func_234(var_5802_float);
	var_5796_object->AddMark("b4Spi4kaMapMark", "pt_map_spi4ka", 3, 531086, var_5802_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6148(int var_2843_int, int var_2844_int, object var_2845_object, object var_2846_object, object var_2847_object, object var_2848_object)
{
	if(var_2844_int == 0) {
		func_760(9, true);
		func_777(9, true, 1);
		int var_2857_int; object var_2858_object; object var_2859_object; object var_2860_object;
		var_2843_int = var_2857_int;
		var_2845_object = var_2858_object;
		var_2846_object = var_2859_object;
		var_2847_object = var_2860_object;
		func_605(9, var_2857_int, var_2858_object, var_2859_object, var_2860_object);
		object var_2861_object;
		var_2848_object = var_2861_object;
		func_270(var_2861_object, 1);
		func_834(9, true, 7);
		func_896(9, false, 7);
	}
	func_743(9, false);
	int var_2872_int; int var_2873_int;
	var_2843_int = var_2872_int;
	var_2844_int = var_2873_int;
	func_2757(9, var_2872_int, var_2873_int);
}


// @pe
void func_10247(void)
{
	func_151("cot_katerina@door1", true);
}


// @pe
void func_10254(void)
{
	func_151("cot_katerina@door1", false);
}


void func_11282(void)
{
	object var_6115_object;
	func_12037(var_6115_object);
	object var_6114_object;
	var_6115_object = var_6114_object;
	float var_6120_float;
	func_234(var_6120_float);
	var_6114_object->AddMark("b9Block", "pt_map_uprava_admin", 3, 531551, var_6120_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10261(void)
{
}


// @pe
void func_10263(void)
{
}


// @pe
void func_10265(void)
{
	func_151("burah_home@door1", true);
}


// @pe
void func_1051(int var_1798_int, int var_1799_int)
{
	bool var_1800_bool = true;
	var_1802_bool = var_1799_int >= 22;
	if(var_1802_bool != 1) {
		var_1804_bool = var_1799_int < 6;
		if(var_1804_bool != 1)
			var_1800_bool = false;
	}
	if(var_1800_bool != 0) {
		int var_1805_int;
		var_1798_int = var_1805_int;
		func_743(var_1805_int, true);
	} else {
		int var_1807_int;
		var_1798_int = var_1807_int;
		func_743(var_1807_int, false);
	}
	
}


// @pe
void func_10272(void)
{
	func_151("burah_home@door1", false);
}


void func_11298(void)
{
	object var_5767_object;
	func_12037(var_5767_object);
	object var_5766_object;
	var_5767_object = var_5766_object;
	float var_5772_float;
	func_234(var_5772_float);
	var_5766_object->AddMark("b2AndreiKabak", "pt_map_andrei", 0, 531558, var_5772_float);
}
EMIT "Stack[-1] = 0";


void func_10279(void)
{
	object var_4671_object;
	func_12037(var_4671_object);
	object var_4670_object;
	var_4671_object = var_4670_object;
	float var_4682_float;
	func_234(var_4682_float);
	var_4670_object->AddMark("b1BigVlad", "pt_map_bigvlad", 3, 520525, var_4682_float);
}
EMIT "Stack[-1] = 0";


void func_14379(int var_4487_int, int var_4488_int)
{
	object var_4491_object;
	@Trace((("Updating game " + var_4487_int) + " ") + var_4488_int);
	bool var_4497_bool = false;
	if(var_4487_int == 8) {
		if(var_4488_int == 0)
			var_4497_bool = true;
	}
	if(var_4497_bool != 0) {
		@GetSceneByName(var_4491_object, "sobor");
		@Trigger(var_4491_object, "aglaja");
		var_4491_object = null;
	}
	bool var_4504_bool = false;
	if(var_4487_int == 9) {
		if(var_4488_int == 0)
			var_4504_bool = true;
	}
	if(var_4504_bool != 0) {
		func_7672(0);
		func_7672(1);
		func_7672(2);
		func_7672(3);
	}
}


// @pe
void func_5169(object var_122_object)
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
void func_1074(float var_766_float, int var_767_int)
{
	if((var_767_int + 1) == 7) {
		var_766_float = 2;
		return 0;
	}
	if((var_767_int + 1) == 8) {
		var_766_float = 0;
		return 0;
	}
	if((var_767_int + 1) == 1) {
		var_766_float = 0;
		return 0;
	}
	var_766_float = 1;
}


// @pe
void func_11314(void)
{
	func_151("vagon_army@door1", true);
}


// @pe
void func_7221(int var_4138_int, int var_4139_int, object var_4140_object, object var_4141_object, object var_4142_object, object var_4143_object)
{
	if(var_4139_int == 0) {
		func_760(14, false);
		func_777(14, false, 1);
		int var_4152_int; object var_4153_object; object var_4154_object; object var_4155_object;
		var_4138_int = var_4152_int;
		var_4140_object = var_4153_object;
		var_4141_object = var_4154_object;
		var_4142_object = var_4155_object;
		func_684(14, var_4152_int, var_4153_object, var_4154_object, var_4155_object);
		object var_4156_object;
		var_4143_object = var_4156_object;
		func_270(var_4156_object, 2);
		func_834(14, false, 5);
		func_896(14, true, 5);
	}
	func_743(14, false);
	int var_4167_int; int var_4168_int;
	var_4138_int = var_4167_int;
	var_4139_int = var_4168_int;
	func_3464(14, var_4167_int, var_4168_int);
}


// @pe
void func_10295(void)
{
	func_151("termitnik2@door1", true);
}


// @pe
void func_6200(int var_3973_int, int var_3974_int, object var_3975_object, object var_3976_object, object var_3977_object, object var_3978_object)
{
	if(var_3974_int == 0) {
		func_760(9, false);
		func_777(9, false, 1);
		int var_3987_int; object var_3988_object; object var_3989_object; object var_3990_object;
		var_3973_int = var_3987_int;
		var_3975_object = var_3988_object;
		var_3976_object = var_3989_object;
		var_3977_object = var_3990_object;
		func_684(9, var_3987_int, var_3988_object, var_3989_object, var_3990_object);
		object var_3991_object;
		var_3978_object = var_3991_object;
		func_270(var_3991_object, 2);
		func_834(9, false, 7);
		func_896(9, true, 7);
	}
	func_743(9, false);
	int var_4002_int; int var_4003_int;
	var_3973_int = var_4002_int;
	var_3974_int = var_4003_int;
	func_3652(9, var_4002_int, var_4003_int);
}


// @pe
void func_11321(void)
{
	func_151("house1_kabak@door1", true);
}


void func_3130(int var_2127_int, int var_2128_int, int var_2129_int)
{
	int var_2132_int; int var_2133_int;
	bool var_2134_bool = false;
	if(var_2129_int > 8) {
		if(var_2129_int < 21)
			var_2134_bool = true;
	}
	if(var_2134_bool != 0) {
		int var_2139_int;
		var_2127_int = var_2139_int;
		func_467(var_2139_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2143_int;
		var_2127_int = var_2143_int;
		func_467(var_2143_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2147_int;
		var_2127_int = var_2147_int;
		func_467(var_2147_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2151_int;
		var_2127_int = var_2151_int;
		func_493(var_2151_int, "fog", "fog.xml", 6);
		if(var_2128_int >= 5) {
			int var_2161_int;
			var_2127_int = var_2161_int;
			func_493(var_2161_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2166_float; int var_2167_int;
		func_1188(var_2166_float, var_2167_int);
		if((1 * var_2166_float) != 0) {
			int var_2213_int; int var_2216_int;
			var_2127_int = var_2213_int;
			var_2132_int = var_2216_int;
			func_467(var_2213_int, "pers_bomber", "bomber.xml", var_2216_int);
		}
	} else {
		int var_2252_int;
		var_2127_int = var_2252_int;
		func_467(var_2252_int, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		int var_2256_int;
		var_2127_int = var_2256_int;
		func_467(var_2256_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		int var_2260_int;
		var_2127_int = var_2260_int;
		func_467(var_2260_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2264_int;
		var_2127_int = var_2264_int;
		func_493(var_2264_int, "fog", "fog.xml", 6);
		if(var_2167_int >= 5) {
			int var_2270_int;
			var_2127_int = var_2270_int;
			func_493(var_2270_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2275_float; int var_2276_int;
		var_2128_int = var_2276_int;
		func_1188(var_2275_float, var_2276_int);
		if((2 * var_2275_float) == 0) goto Label_3248;
		int var_2278_int; int var_2281_int;
		var_2127_int = var_2278_int;
		var_2133_int = var_2281_int;
		func_467(var_2278_int, "pers_bomber", "bomber.xml", var_2281_int);
	}
Label_3248:
	bool var_2217_bool; int var_2218_int;
	var_2128_int = var_2218_int;
	func_1305(var_2217_bool, var_2218_int);
	if(var_2217_bool != 0) {
		int var_2220_int;
		var_2127_int = var_2220_int;
		func_467(var_2220_int, "pers_sanitar", "sanitar.xml", 2);
	}
	int var_2224_int;
	var_2127_int = var_2224_int;
	func_480(var_2224_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2234_int;
	var_2127_int = var_2234_int;
	func_480(var_2234_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2240_int;
	var_2127_int = var_2240_int;
	func_480(var_2240_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2246_int;
	var_2127_int = var_2246_int;
	func_480(var_2246_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	
}


void func_59(void)
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
	var_10_object->GetLocator("pt_birth_Burah", var_11_bool, var_12_cvector, var_13_cvector);
	if(var_11_bool != 0)
		@Teleport(var_9_object, var_10_object, var_12_cvector, var_13_cvector);
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


// @pe
void func_10302(void)
{
	func_151("cot_viktor@door1", false);
}


// @pe
void func_11328(void)
{
	func_151("mnogogrannik_han@door1", true);
}


void func_8259(int var_4133_int, int var_4134_int)
{
	int var_4138_int; int var_4139_int;
	if(var_4134_int == 0) {
		if(var_4133_int == 2) {
			int var_4144_int;
			func_12054(var_4144_int);
			if(var_4144_int == 0) {
				@GetVariable("d1q01", var_4138_int);
				if(var_4138_int != 1000)
					@GameOver("gameover_fail.xml");
			} else {
				int var_4153_int;
				func_12054(var_4153_int);
				if(!(var_4153_int == 1)) goto Label_8297;
				@GetVariable("b1q01", var_4139_int);
				if(!(var_4139_int != 1000)) goto Label_8297;
				@GameOver("gameover_fail.xml");
			}
		}
	Label_8297:
		@SendWorldWndMessage(101);
		@SetVariable("c_iWM_RealDayChange", var_4133_int);
	}
	
}


// @pe
void func_10309(void)
{
	func_151("cot_anna@door1", true);
}


// @pe
void func_11335(void)
{
	@SetVariable("b8DankoLetter2", 1);
}


// @pe
void func_1098(float var_3286_float, int var_3287_int)
{
	if((var_3287_int + 1) == 1) {
		var_3286_float = 0;
		return 0;
	EMIT "GOTO 0x4a2";
	}
	if((var_3287_int + 1) == 2) {
		var_3286_float = 0;
		return 0;
	EMIT "GOTO 0x4a2";
	}
	if((var_3287_int + 1) == 3) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4a2";
	}
	if((var_3287_int + 1) == 4) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4a2";
	}
	if((var_3287_int + 1) == 5) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4a2";
	}
	if((var_3287_int + 1) == 6) {
		var_3286_float = 2;
		return 0;
	EMIT "GOTO 0x4a2";
	}
	if((var_3287_int + 1) == 7) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4a2";
	}
	if((var_3287_int + 1) == 8) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4a2";
	}
	if((var_3287_int + 1) == 9) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4a2";
	}
	if((var_3287_int + 1) == 10) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4a2";
	}
	if((var_3287_int + 1) == 11) {
		var_3286_float = 1;
		return 0;
	}
	var_3286_float = 0;
}


// @pe
void func_10316(void)
{
	func_151("cot_anna@door1", false);
}


// @pe
void func_11341(void)
{
	@SetVariable("b9KlaraLetter", 1);
}


void func_81(object var_100_object)
{
	object var_102_object;
	@FindActor(var_102_object, "player");
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_10323(void)
{
	func_151("house_vlad@door2", true);
}


// @pe
void func_11347(void)
{
	int var_5447_int;
	func_106(var_5447_int, "map_chertez_state");
	if(var_5447_int <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_88(bool var_583_bool, object var_584_object, string var_585_string)
{
	var_590_bool = IsFuncExist(var_584_object, "HasProperty", 2);
	if(!var_590_bool) { //@nz
		var_583_bool = false;
		return 2;
	}
	bool var_587_bool;
	var_584_object->HasProperty(var_585_string, var_587_bool);
	var_587_bool = var_583_bool;
}


// @pe
void func_10330(void)
{
	func_151("cot_maria@door1", true);
}


void func_14431(int var_23_int)
{
	int var_31_int; int var_32_int; int var_34_int; int var_35_int;
	@Trace("Disease update");
	int var_30_int = 0;
	if(var_23_int == 0) {
		var_30_int = 0;
	} else if(var_23_int == 1) {
				var_30_int = 0;
	}

	for(;;) {
		if((var_23_int + 1) != 12) {
			@Trace("Diseased regions : " + var_30_int);

			for(;;) {
				if(0 < 16) {
					bool var_47_bool; int var_48_int;
					var_31_int = var_48_int;
					func_394(var_47_bool, var_48_int);
					if(var_47_bool != 0) {
						int var_59_int;
						var_31_int = var_59_int;
						func_436(var_59_int);
					} else {
					bool var_72_bool; int var_73_int;
					var_31_int = var_73_int;
					func_424(var_72_bool, var_73_int);
					if(var_72_bool != 0) {
						int var_81_int;
						var_31_int = var_81_int;
						func_376(var_81_int);
				}
					if(var_23_int == 2) {
						@Trace("Special diseased region: 1");
						func_406(1);
					}
					int var_108_int;
					func_308(var_108_int);
					var_108_int = var_32_int;
					if(var_32_int < var_30_int) {
						var_34_int = 0;

						for(;;) {
							if(!(var_34_int < (var_30_int - var_32_int))) goto Label_14556;
							func_326();
							var_34_int += 1;
						}
					}
				Label_14556:
				} else {
					var_31_int += 1;
				}
			Label_14582:
				return 12;
		}

			for(;;) {
				if(!(0 < 16)) goto Label_14582;
				bool var_173_bool = true;
				bool var_174_bool; int var_175_int;
				var_35_int = var_175_int;
				func_394(var_174_bool, var_175_int);
				if(var_174_bool != 1) {
					bool var_176_bool; int var_177_int;
					var_35_int = var_177_int;
					func_424(var_176_bool, var_177_int);
					if(var_176_bool != 1)
						var_173_bool = false;
				}
				if(var_173_bool != 0) {
					int var_178_int;
					var_35_int = var_178_int;
					func_376(var_178_int);
				}
				var_35_int += 1;
			}

			}
		}

	}
	
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


// @pe
void func_10337(void)
{
	func_151("warehouse_rubin@door1", true);
}


void func_100(object var_40_object)
{
	object var_42_object;
	@CreateObjectVector(var_42_object);
	var_42_object = var_40_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_11364(void)
{
	int var_5461_int;
	func_106(var_5461_int, "map_chertez_state");
	if(var_5461_int <= 3) {
		@SetVariable("map_chertez_state", 3);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_10344(void)
{
	object var_4561_object;
	func_12037(var_4561_object);
	object var_4559_object;
	var_4561_object = var_4559_object;
	object var_4560_object;
	var_4559_object->FindMark(var_4560_object, "b1BigVlad");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1BigVlad11Hours");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1KapellaGotoLaska");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1KapellaGotoNotkin");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1MladVladGotoGrif");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q01BakWillBeAt18");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q01BigVladGotoKapella");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q01BigVladGotoMladVlad");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q01GrifGotoDanko");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q01NotkinGotoGrif");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q02GrifGotoLaska");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q02LaskaGotoGorbin");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q02LaskaSelf");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q03GrifGotoDoberman");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q03NotkinGotoDoberman");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1GrifGotoNotkin");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q03NotkinGotoDobermanSelf");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1LaskaGotoMishka");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q05Spi4kaGotoLaska");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q05Spi4kaGotoMishka");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1q05PatrolGroup");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	var_4559_object->FindMark(var_4560_object, "b1BurahFatherHome");
	if(var_4560_object != 0)
		var_4560_object->Remove();
	bool var_4612_bool;
	func_12012(var_4612_bool, 200);
	bool var_4624_bool;
	func_12012(var_4624_bool, 205);
	bool var_4626_bool;
	func_12012(var_4626_bool, 209);
	bool var_4628_bool;
	func_12012(var_4628_bool, 242);
	bool var_4630_bool;
	func_12012(var_4630_bool, 582);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_7273(object var_311_object)
{
	var_311_object->add("lc_house3_05_i2");
	var_311_object->add("lc_house3_05");
	var_311_object->add("lc_house3_06_i2");
	var_311_object->add("lc_house3_06");
	var_311_object->add("lc_House6_06");
	var_311_object->add("lc_house3_04_i2");
	var_311_object->add("lc_house3_04");
	var_311_object->add("house3_plus_03_i2");
}


void func_106(int var_4820_int, string var_4821_string)
{
	int var_4823_int;
	@GetVariable(var_4821_string, var_4823_int);
	var_4823_int = var_4820_int;
}


void func_4203(int var_3437_int, int var_3438_int, int var_3439_int)
{
	int var_3444_int; int var_3445_int; int var_3446_int; int var_3447_int;
	bool var_3448_bool = false;
	if(var_3439_int > 8) {
		if(var_3439_int < 21)
			var_3448_bool = true;
	}
	if(var_3448_bool != 0) {
		int var_3453_int;
		var_3437_int = var_3453_int;
		func_467(var_3453_int, "pers_rat", "rat.xml", 4);
		int var_3457_int;
		var_3437_int = var_3457_int;
		func_467(var_3457_int, "pers_alkash", "alkash.xml", 2);
		int var_3461_int;
		var_3437_int = var_3461_int;
		func_467(var_3461_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3466_float; int var_3467_int;
		func_1098(var_3466_float, var_3467_int);
		if((2 * var_3466_float) != 0) {
			int var_3469_int; int var_3472_int;
			var_3437_int = var_3469_int;
			var_3444_int = var_3472_int;
			func_467(var_3469_int, "pers_grabitel", "grabitel.xml", var_3472_int);
		}
		if((var_3467_int + 1) >= 2) {
			int var_3477_int;
			var_3437_int = var_3477_int;
			func_467(var_3477_int, "pers_patrool", "patrol.xml", 2);
			bool var_3481_bool; int var_3482_int;
			var_3438_int = var_3482_int;
			func_1305(var_3481_bool, var_3482_int);
			if(var_3481_bool != 0) {
				int var_3483_int;
				var_3437_int = var_3483_int;
				func_467(var_3483_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3488_float; int var_3489_int;
		var_3438_int = var_3489_int;
		func_1188(var_3488_float, var_3489_int);
		if((1 * var_3488_float) != 0) {
			int var_3491_int; int var_3494_int;
			var_3437_int = var_3491_int;
			var_3445_int = var_3494_int;
			func_467(var_3491_int, "pers_bomber", "bomber.xml", var_3494_int);
		}
	} else {
		int var_3501_int;
		var_3437_int = var_3501_int;
		func_467(var_3501_int, "pers_rat", "rat.xml", 8);
		int var_3505_int;
		var_3437_int = var_3505_int;
		func_467(var_3505_int, "pers_alkash", "alkash.xml", 1);
		int var_3509_int;
		var_3437_int = var_3509_int;
		func_467(var_3509_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3514_float; int var_3515_int;
		func_1098(var_3514_float, var_3515_int);
		if((3 * var_3514_float) != 0) {
			int var_3517_int; int var_3520_int;
			var_3437_int = var_3517_int;
			var_3446_int = var_3520_int;
			func_467(var_3517_int, "pers_grabitel", "grabitel.xml", var_3520_int);
		}
		if((var_3515_int + 1) >= 2) {
			int var_3525_int;
			var_3437_int = var_3525_int;
			func_467(var_3525_int, "pers_patrool", "patrol.xml", 1);
			bool var_3529_bool; int var_3530_int;
			var_3438_int = var_3530_int;
			func_1305(var_3529_bool, var_3530_int);
			if(var_3529_bool != 0) {
				int var_3531_int;
				var_3437_int = var_3531_int;
				func_467(var_3531_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3536_float; int var_3537_int;
		var_3438_int = var_3537_int;
		func_1188(var_3536_float, var_3537_int);
		if((1 * var_3536_float) == 0) goto Label_4365;
		int var_3539_int; int var_3542_int;
		var_3437_int = var_3539_int;
		var_3447_int = var_3542_int;
		func_467(var_3539_int, "pers_bomber", "bomber.xml", var_3542_int);
	}
Label_4365:
	bool var_3495_bool; int var_3496_int;
	var_3438_int = var_3496_int;
	func_1305(var_3495_bool, var_3496_int);
	if(var_3495_bool != 0) {
		int var_3497_int;
		var_3437_int = var_3497_int;
		func_467(var_3497_int, "pers_sanitar", "sanitar.xml", 2);
	}
	
}


// @pe
void func_6252(object var_224_object)
{
	var_224_object->add("r4_house_2_02");
	var_224_object->add("r4_house3_03_i2");
	var_224_object->add("r4_house3_03");
	var_224_object->add("r4_house4_02_i2");
	var_224_object->add("r4_house4_02");
	var_224_object->add("r4_house4_01_i2");
	var_224_object->add("r4_house4_01");
	var_224_object->add("r4_house3_02_i2");
	var_224_object->add("r4_house3_02");
	var_224_object->add("r4_house_2_01");
	var_224_object->add("r4_house3_01_i2");
	var_224_object->add("r4_house3_01");
	var_224_object->add("r4_house7_01");
	var_224_object->add("r4_House6_01");
	var_224_object->add("r4_house_2_03");
	var_224_object->add("r4_House6_03");
	var_224_object->add("r4_house_2_04");
}


void func_9323(int var_3178_int, int var_3179_int, int var_3180_int)
{
	var_3189_object = GlobalVars[8];
	object var_3185_object;
	var_3189_object->get(var_3185_object, var_3178_int);
	var_3190_object = GlobalVars[9];
	object var_3186_object;
	var_3190_object->get(var_3186_object, var_3178_int);
	var_3191_object = GlobalVars[10];
	object var_3187_object;
	var_3191_object->get(var_3187_object, var_3178_int);
	var_3192_object = GlobalVars[13];
	object var_3188_object;
	var_3192_object->get(var_3188_object, var_3178_int);
	if(var_3178_int == 0) {
		int var_3195_int; int var_3196_int; object var_3197_object; object var_3198_object; object var_3199_object; object var_3200_object;
		var_3179_int = var_3195_int;
		var_3180_int = var_3196_int;
		var_3185_object = var_3197_object;
		var_3186_object = var_3198_object;
		var_3187_object = var_3199_object;
		var_3188_object = var_3200_object;
		func_4484(var_3195_int, var_3196_int, var_3197_object, var_3198_object, var_3199_object, var_3200_object);
	} else if(var_3178_int == 1) {
			int var_3409_int; int var_3410_int; object var_3411_object; object var_3412_object; object var_3413_object; object var_3414_object;
			var_3179_int = var_3409_int;
			var_3180_int = var_3410_int;
			var_3185_object = var_3411_object;
			var_3186_object = var_3412_object;
			var_3187_object = var_3413_object;
			var_3188_object = var_3414_object;
			func_4681(var_3409_int, var_3410_int, var_3411_object, var_3412_object, var_3413_object, var_3414_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_3178_int == 2) {
		int var_3545_int; int var_3546_int; object var_3547_object; object var_3548_object; object var_3549_object; object var_3550_object;
		var_3179_int = var_3545_int;
		var_3180_int = var_3546_int;
		var_3185_object = var_3547_object;
		var_3186_object = var_3548_object;
		var_3187_object = var_3549_object;
		var_3188_object = var_3550_object;
		func_4887(var_3545_int, var_3546_int, var_3547_object, var_3548_object, var_3549_object, var_3550_object);
	} else if(var_3178_int == 3) {
		int var_3688_int; int var_3689_int; object var_3690_object; object var_3691_object; object var_3692_object; object var_3693_object;
		var_3179_int = var_3688_int;
		var_3180_int = var_3689_int;
		var_3185_object = var_3690_object;
		var_3186_object = var_3691_object;
		var_3187_object = var_3692_object;
		var_3188_object = var_3693_object;
		func_5117(var_3688_int, var_3689_int, var_3690_object, var_3691_object, var_3692_object, var_3693_object);
	} else if(var_3178_int == 4) {
		int var_3721_int; int var_3722_int; object var_3723_object; object var_3724_object; object var_3725_object; object var_3726_object;
		var_3179_int = var_3721_int;
		var_3180_int = var_3722_int;
		var_3185_object = var_3723_object;
		var_3186_object = var_3724_object;
		var_3187_object = var_3725_object;
		var_3188_object = var_3726_object;
		func_5335(var_3721_int, var_3722_int, var_3723_object, var_3724_object, var_3725_object, var_3726_object);
	} else if(var_3178_int == 5) {
		int var_3754_int; int var_3755_int; object var_3756_object; object var_3757_object; object var_3758_object; object var_3759_object;
		var_3179_int = var_3754_int;
		var_3180_int = var_3755_int;
		var_3185_object = var_3756_object;
		var_3186_object = var_3757_object;
		var_3187_object = var_3758_object;
		var_3188_object = var_3759_object;
		func_5574(var_3754_int, var_3755_int, var_3756_object, var_3757_object, var_3758_object, var_3759_object);
	} else if(var_3178_int == 6) {
		int var_3787_int; int var_3788_int; object var_3789_object; object var_3790_object; object var_3791_object; object var_3792_object;
		var_3179_int = var_3787_int;
		var_3180_int = var_3788_int;
		var_3185_object = var_3789_object;
		var_3186_object = var_3790_object;
		var_3187_object = var_3791_object;
		var_3188_object = var_3792_object;
		func_5642();
	} else if(var_3178_int == 7) {
		int var_3797_int; int var_3798_int; object var_3799_object; object var_3800_object; object var_3801_object; object var_3802_object;
		var_3179_int = var_3797_int;
		var_3180_int = var_3798_int;
		var_3185_object = var_3799_object;
		var_3186_object = var_3800_object;
		var_3187_object = var_3801_object;
		var_3188_object = var_3802_object;
		func_5797(var_3797_int, var_3798_int, var_3799_object, var_3800_object, var_3801_object, var_3802_object);
	} else if(var_3178_int == 8) {
		int var_3940_int; int var_3941_int; object var_3942_object; object var_3943_object; object var_3944_object; object var_3945_object;
		var_3179_int = var_3940_int;
		var_3180_int = var_3941_int;
		var_3185_object = var_3942_object;
		var_3186_object = var_3943_object;
		var_3187_object = var_3944_object;
		var_3188_object = var_3945_object;
		func_5997(var_3940_int, var_3941_int, var_3942_object, var_3943_object, var_3944_object, var_3945_object);
	} else if(var_3178_int == 9) {
		int var_3973_int; int var_3974_int; object var_3975_object; object var_3976_object; object var_3977_object; object var_3978_object;
		var_3179_int = var_3973_int;
		var_3180_int = var_3974_int;
		var_3185_object = var_3975_object;
		var_3186_object = var_3976_object;
		var_3187_object = var_3977_object;
		var_3188_object = var_3978_object;
		func_6200(var_3973_int, var_3974_int, var_3975_object, var_3976_object, var_3977_object, var_3978_object);
	} else if(var_3178_int == 10) {
		int var_4006_int; int var_4007_int; object var_4008_object; object var_4009_object; object var_4010_object; object var_4011_object;
		var_3179_int = var_4006_int;
		var_3180_int = var_4007_int;
		var_3185_object = var_4008_object;
		var_3186_object = var_4009_object;
		var_3187_object = var_4010_object;
		var_3188_object = var_4011_object;
		func_6409(var_4006_int, var_4007_int, var_4008_object, var_4009_object, var_4010_object, var_4011_object);
	} else if(var_3178_int == 11) {
		int var_4039_int; int var_4040_int; object var_4041_object; object var_4042_object; object var_4043_object; object var_4044_object;
		var_3179_int = var_4039_int;
		var_3180_int = var_4040_int;
		var_3185_object = var_4041_object;
		var_3186_object = var_4042_object;
		var_3187_object = var_4043_object;
		var_3188_object = var_4044_object;
		func_6621(var_4039_int, var_4040_int, var_4041_object, var_4042_object, var_4043_object, var_4044_object);
	} else if(var_3178_int == 12) {
		int var_4072_int; int var_4073_int; object var_4074_object; object var_4075_object; object var_4076_object; object var_4077_object;
		var_3179_int = var_4072_int;
		var_3180_int = var_4073_int;
		var_3185_object = var_4074_object;
		var_3186_object = var_4075_object;
		var_3187_object = var_4076_object;
		var_3188_object = var_4077_object;
		func_6818(var_4072_int, var_4073_int, var_4074_object, var_4075_object, var_4076_object, var_4077_object);
	} else if(var_3178_int == 13) {
		int var_4105_int; int var_4106_int; object var_4107_object; object var_4108_object; object var_4109_object; object var_4110_object;
		var_3179_int = var_4105_int;
		var_3180_int = var_4106_int;
		var_3185_object = var_4107_object;
		var_3186_object = var_4108_object;
		var_3187_object = var_4109_object;
		var_3188_object = var_4110_object;
		func_7021(var_4105_int, var_4106_int, var_4107_object, var_4108_object, var_4109_object, var_4110_object);
	} else if(var_3178_int == 14) {
		int var_4138_int; int var_4139_int; object var_4140_object; object var_4141_object; object var_4142_object; object var_4143_object;
		var_3179_int = var_4138_int;
		var_3180_int = var_4139_int;
		var_3185_object = var_4140_object;
		var_3186_object = var_4141_object;
		var_3187_object = var_4142_object;
		var_3188_object = var_4143_object;
		func_7221(var_4138_int, var_4139_int, var_4140_object, var_4141_object, var_4142_object, var_4143_object);
	} else if(var_3178_int == 15) {
		int var_4281_int; int var_4282_int; object var_4283_object; object var_4284_object; object var_4285_object; object var_4286_object;
		var_3179_int = var_4281_int;
		var_3180_int = var_4282_int;
		var_3185_object = var_4283_object;
		var_3186_object = var_4284_object;
		var_3187_object = var_4285_object;
		var_3188_object = var_4286_object;
		func_7403(var_4281_int, var_4282_int, var_4283_object, var_4284_object, var_4285_object, var_4286_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


void func_111(object var_4773_object, string var_4774_string)
{
	object var_4777_object;
	@GetMainOutdoorScene(var_4777_object);
	object var_4778_object;
	@AddBlankActor(var_4778_object, var_4777_object, var_4774_string, (var_4774_string + ".bin"));
	var_4778_object = var_4773_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_8304(int var_4171_int, int var_4172_int)
{
	object var_4180_object; object var_4181_object; string var_4182_string; int var_4183_int; int var_4184_int; int var_4185_int;
	bool var_4186_bool = false;
	if(var_4172_int == 5) {
		if(var_4171_int >= 7)
			var_4186_bool = true;
	}
	if(var_4186_bool != 0) {
		func_7768();
	} else {
		bool var_4465_bool = false;
		if(var_4172_int == 22) {
			if(var_4171_int >= 7)
				var_4465_bool = true;
		}
		if(var_4465_bool == 0) goto Label_8332;
		func_7831();
	}
Label_8332:
	bool var_4237_bool = false;
	if(var_4172_int == 7) {
		if(var_4171_int != 1)
			var_4237_bool = true;
	}
	if(var_4237_bool != 0)
		@SendWorldWndMessage(100);
	if(var_4172_int == 0) {
		func_8470();
		func_8545();
		if(var_4171_int == 6) {
			@GetMainOutdoorScene(var_4180_object);
			@AddScriptedActor(var_4181_object, "shed_corpse", "splash_object_wo_pf.bin", var_4180_object, [0.0, 0.0, 0.0]);
			var_4181_object = null;
			var_4180_object = null;
		}
		if(var_4171_int == 9)
			func_8594();
		if(var_4171_int != 1) {
			int var_4360_int;
			func_12054(var_4360_int);
			if(var_4360_int == 1) {
				@GetVariable((("b" + (var_4171_int - 1)) + "q01"), var_4183_int);
				var_4182_string = "volonteers_burah";
			} else {
					int var_4450_int;
					func_12054(var_4450_int);
					if(!(var_4450_int == 0)) goto Label_8407;
					@GetVariable((("d" + (var_4171_int - 1)) + "q01"), var_4183_int);
					var_4182_string = "volonteers_danko";
			}
			for(;;) {
				@Trace(var_4182_string);
				if(var_4183_int == 1000) {
					bool var_4371_bool; string var_4372_string;
					var_4182_string = var_4372_string;
					func_201(var_4371_bool, var_4372_string, "rescue_locked", "");
				}
				bool var_4378_bool; string var_4379_string;
				var_4182_string = var_4379_string;
				func_201(var_4378_bool, var_4379_string, "update", "");
		}
	}
		bool var_4382_bool = false;
		if(var_4171_int == 6) {
			if(var_4172_int == 0)
				var_4382_bool = true;
		}
		if(var_4382_bool != 0)
			func_7888();
		bool var_4389_bool = false;
		if(var_4171_int == 7) {
			if(var_4172_int == 0)
				var_4389_bool = true;
		}
		if(var_4389_bool != 0) {
			var_4394_object = GlobalVars[14];
			var_4394_object->size(var_4184_int);

			for(;;) {
				if(!(0 < var_4184_int)) goto Label_8469;
				int var_4396_int;
				var_4185_int = var_4396_int;
				func_7595(var_4396_int);
				var_4185_int += 1;
			}
		}
	Label_8469:

	}
	
Label_8407:
	@GetVariable((("k" + (var_4171_int - 1)) + "q01"), var_4183_int);
	var_4182_string = "volonteers_klara";
	
}


// @pe
void func_5231(int var_1298_int, int var_1299_int, object var_1300_object, object var_1301_object, object var_1302_object, object var_1303_object)
{
	if(var_1299_int == 0) {
		func_760(4, false);
		func_777(4, false, 1);
		int var_1311_int; int var_1312_int; object var_1313_object; object var_1314_object; object var_1315_object;
		var_1311_int = 4;
		var_1298_int = var_1312_int;
		var_1300_object = var_1313_object;
		var_1301_object = var_1314_object;
		var_1302_object = var_1315_object;
		func_586(var_1312_int, var_1313_object, var_1314_object, var_1315_object);
		object var_1316_object;
		var_1303_object = var_1316_object;
		func_270(var_1316_object, 0);
		func_834(4, false, 4);
		func_896(4, false, 4);
	}
	int var_1325_int;
	var_1299_int = var_1325_int;
	func_984(4, var_1325_int);
	int var_1339_int; int var_1340_int;
	var_1298_int = var_1339_int;
	var_1299_int = var_1340_int;
	func_1848(4, var_1339_int, var_1340_int);
}


// @pe
void func_11381(void)
{
	int var_6235_int;
	func_106(var_6235_int, "map_chertez_state");
	if(var_6235_int <= 4) {
		@SetVariable("map_chertez_state", 4);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_122(object var_4787_object, string var_4788_string)
{
	object var_4791_object;
	@GetMainOutdoorScene(var_4791_object);
	object var_4792_object;
	@AddBlankActorFromXml(var_4792_object, var_4791_object, var_4788_string, (var_4788_string + ".xml"));
	var_4792_object = var_4787_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2171(int var_748_int, int var_749_int, int var_750_int)
{
	int var_752_int;
	if((var_749_int + 1) == 12)
		return 2;
	bool var_757_bool = false;
	bool var_758_bool = true;
	var_760_bool = var_750_int < 7;
	if(var_760_bool != 1) {
		var_762_bool = var_750_int > 21;
		if(var_762_bool != 1)
			var_758_bool = false;
	}
	if(var_758_bool != 0) {
		if(var_749_int != 0)
			var_757_bool = true;
	}
	if(var_757_bool != 0) {
		float var_766_float; int var_767_int;
		var_749_int = var_767_int;
		func_1074(var_766_float, var_767_int);
		if((1 * var_766_float) != 0) {
			int var_781_int; int var_784_int;
			var_748_int = var_781_int;
			var_752_int = var_784_int;
			func_467(var_781_int, "pers_grabitel", "grabitel.xml", var_784_int);
		}
	}
	bool var_789_bool = false;
	bool var_790_bool = false;
	if(var_749_int == 0) {
		if(var_750_int < 21)
			var_790_bool = true;
	}
	if(var_790_bool != 0) {
		int var_795_int;
		func_12054(var_795_int);
		if(var_795_int == 1)
			var_789_bool = true;
	}
	if(var_789_bool != 0) {
		int var_801_int;
		var_748_int = var_801_int;
		func_467(var_801_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_805_int;
		var_748_int = var_805_int;
		func_467(var_805_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_809_int;
		var_748_int = var_809_int;
		func_467(var_809_int, "pers_worker", "worker_attacker.xml", 1);
		int var_813_int;
		var_748_int = var_813_int;
		func_467(var_813_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_817_int;
		var_748_int = var_817_int;
		func_467(var_817_int, "pers_boy", "boy.xml", 1);
		int var_821_int;
		var_748_int = var_821_int;
		func_467(var_821_int, "pers_alkash", "alkash.xml", 1);
		int var_825_int;
		var_748_int = var_825_int;
		func_467(var_825_int, "pers_girl", "girl.xml", 1);
		int var_829_int;
		var_748_int = var_829_int;
		func_467(var_829_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_833_bool = false;
			if(var_750_int > 8) {
				if(var_750_int < 21)
					var_833_bool = true;
			}
			if(var_833_bool == 0) goto Label_2340;
			int var_838_int;
			var_748_int = var_838_int;
			func_467(var_838_int, "pers_boy", "boy.xml", 1);
			int var_842_int;
			var_748_int = var_842_int;
			func_467(var_842_int, "pers_alkash", "alkash.xml", 1);
			int var_846_int;
			var_748_int = var_846_int;
			func_467(var_846_int, "pers_girl", "girl.xml", 1);
			int var_850_int;
			var_748_int = var_850_int;
			func_467(var_850_int, "pers_girl", "girl2.xml", 1);
			int var_854_int;
			var_748_int = var_854_int;
			func_467(var_854_int, "pers_worker", "worker.xml", 2);
			int var_858_int;
			var_748_int = var_858_int;
			func_467(var_858_int, "pers_worker", "worker2.xml", 2);
	}
	for(;;) {
		return 2;

	}
	
Label_2340:
	int var_862_int;
	var_748_int = var_862_int;
	func_467(var_862_int, "pers_alkash", "alkash.xml", 1);
	int var_866_int;
	var_748_int = var_866_int;
	func_467(var_866_int, "pers_worker", "worker.xml", 1);
	int var_870_int;
	var_748_int = var_870_int;
	func_467(var_870_int, "pers_worker", "worker2.xml", 1);
}


// @pe
void func_7299(int var_1956_int, int var_1957_int, object var_1958_object, object var_1959_object, object var_1960_object, object var_1961_object)
{
	if(var_1957_int == 0) {
		func_760(15, false);
		func_777(15, false, 1);
		int var_1969_int; int var_1970_int; object var_1971_object; object var_1972_object; object var_1973_object;
		var_1969_int = 15;
		var_1956_int = var_1970_int;
		var_1958_object = var_1971_object;
		var_1959_object = var_1972_object;
		var_1960_object = var_1973_object;
		func_586(var_1970_int, var_1971_object, var_1972_object, var_1973_object);
		object var_1974_object;
		var_1961_object = var_1974_object;
		func_270(var_1974_object, 0);
		func_834(15, false, 5);
		func_896(15, false, 5);
	}
	int var_1983_int;
	var_1957_int = var_1983_int;
	func_1051(15, var_1983_int);
	int var_1985_int; int var_1986_int;
	var_1956_int = var_1985_int;
	var_1957_int = var_1986_int;
	func_1309(15, var_1985_int, var_1986_int);
}


void func_133(object var_327_object, object var_328_object, string var_329_string, string var_330_string, string var_331_string)
{
	bool var_337_bool; cvector var_338_cvector; cvector var_339_cvector;
	var_328_object->GetLocator(var_329_string, var_337_bool, var_338_cvector, var_339_cvector);
	if(!var_337_bool) //@nz
		@Trace(("Locator " + var_329_string) + " doesn't exist");
	else
		var_328_object->AddStationaryActor(Obj(), var_338_cvector, var_339_cvector, var_330_string, var_331_string);
	object var_340_object = var_327_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_11398(void)
{
	int var_6249_int;
	func_106(var_6249_int, "map_chertez_state");
	if(var_6249_int <= 5) {
		@SetVariable("map_chertez_state", 5);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_151(string var_4600_string, bool var_4601_bool)
{
	object var_4603_object;
	@FindActor(var_4603_object, var_4600_string);
	if(!var_4603_object) //@nz
		@Trace(("Door " + var_4600_string) + " not found");
	else
		var_4603_object->SetProperty("locked", var_4601_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_11415(void)
{
	int var_6263_int;
	func_106(var_6263_int, "map_chertez_state");
	if(var_6263_int <= 6) {
		@SetVariable("map_chertez_state", 6);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_6305(int var_1640_int, int var_1641_int, object var_1642_object, object var_1643_object, object var_1644_object, object var_1645_object)
{
	if(var_1641_int == 0) {
		func_760(10, false);
		func_777(10, false, 1);
		int var_1653_int; int var_1654_int; object var_1655_object; object var_1656_object; object var_1657_object;
		var_1653_int = 10;
		var_1640_int = var_1654_int;
		var_1642_object = var_1655_object;
		var_1643_object = var_1656_object;
		var_1644_object = var_1657_object;
		func_586(var_1654_int, var_1655_object, var_1656_object, var_1657_object);
		object var_1658_object;
		var_1645_object = var_1658_object;
		func_270(var_1658_object, 0);
		func_834(10, false, 7);
		func_896(10, false, 7);
	}
	int var_1667_int;
	var_1641_int = var_1667_int;
	func_947(10, var_1667_int);
	int var_1669_int; int var_1670_int;
	var_1640_int = var_1669_int;
	var_1641_int = var_1670_int;
	func_1571(10, var_1669_int, var_1670_int);
}


// @pe
void func_5283(int var_2595_int, int var_2596_int, object var_2597_object, object var_2598_object, object var_2599_object, object var_2600_object)
{
	if(var_2596_int == 0) {
		func_760(4, true);
		func_777(4, true, 1);
		int var_2609_int; object var_2610_object; object var_2611_object; object var_2612_object;
		var_2595_int = var_2609_int;
		var_2597_object = var_2610_object;
		var_2598_object = var_2611_object;
		var_2599_object = var_2612_object;
		func_605(4, var_2609_int, var_2610_object, var_2611_object, var_2612_object);
		object var_2613_object;
		var_2600_object = var_2613_object;
		func_270(var_2613_object, 1);
		func_834(4, true, 4);
		func_896(4, false, 4);
	}
	func_743(4, false);
	int var_2624_int; int var_2625_int;
	var_2595_int = var_2624_int;
	var_2596_int = var_2625_int;
	func_2937(4, var_2624_int, var_2625_int);
}


// @pe
void func_1188(float var_2166_float, int var_2167_int)
{
	if((var_2167_int + 1) == 1) {
		var_2166_float = 0;
		return 0;
	EMIT "GOTO 0x4fc";
	}
	if((var_2167_int + 1) == 2) {
		var_2166_float = 0;
		return 0;
	EMIT "GOTO 0x4fc";
	}
	if((var_2167_int + 1) == 3) {
		var_2166_float = 0;
		return 0;
	EMIT "GOTO 0x4fc";
	}
	if((var_2167_int + 1) == 4) {
		var_2166_float = 0;
		return 0;
	EMIT "GOTO 0x4fc";
	}
	if((var_2167_int + 1) == 5) {
		var_2166_float = 0;
		return 0;
	EMIT "GOTO 0x4fc";
	}
	if((var_2167_int + 1) == 6) {
		var_2166_float = 2;
		return 0;
	EMIT "GOTO 0x4fc";
	}
	if((var_2167_int + 1) == 7) {
		var_2166_float = 1;
		return 0;
	EMIT "GOTO 0x4fc";
	}
	if((var_2167_int + 1) == 8) {
		var_2166_float = 1;
		return 0;
	EMIT "GOTO 0x4fc";
	}
	if((var_2167_int + 1) == 9) {
		var_2166_float = 1;
		return 0;
	EMIT "GOTO 0x4fc";
	}
	if((var_2167_int + 1) == 10) {
		var_2166_float = 1;
		return 0;
	EMIT "GOTO 0x4fc";
	}
	if((var_2167_int + 1) == 11) {
		var_2166_float = 1;
		return 0;
	}
	var_2166_float = 0;
}


void func_168(string var_4632_string, bool var_4633_bool)
{
	object var_4635_object;
	@FindActor(var_4635_object, var_4632_string);
	if(!var_4635_object) { //@nz
		@Trace(("Door " + var_4632_string) + " not found");
	} else {
		if(var_4633_bool != 0)
			var_4635_object->Close();
		var_4635_object->SetProperty("locked", var_4633_bool);
	}
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_11432(void)
{
	func_151("termitnik@door1", true);
}


// @pe
void func_11439(void)
{
	func_151("termitnik@door1", false);
}


// @pe
void func_11446(void)
{
	@SetVariable("resque_list", 1);
	func_14325();
}


// @pe
void func_7351(int var_3147_int, int var_3148_int, object var_3149_object, object var_3150_object, object var_3151_object, object var_3152_object)
{
	if(var_3148_int == 0) {
		func_760(15, true);
		func_777(15, true, 1);
		int var_3161_int; object var_3162_object; object var_3163_object; object var_3164_object;
		var_3147_int = var_3161_int;
		var_3149_object = var_3162_object;
		var_3150_object = var_3163_object;
		var_3151_object = var_3164_object;
		func_605(15, var_3161_int, var_3162_object, var_3163_object, var_3164_object);
		object var_3165_object;
		var_3152_object = var_3165_object;
		func_270(var_3165_object, 1);
		func_834(15, true, 5);
		func_896(15, false, 5);
	}
	func_743(15, false);
	int var_3176_int; int var_3177_int;
	var_3147_int = var_3176_int;
	var_3148_int = var_3177_int;
	func_2577(15, var_3176_int, var_3177_int);
}


void func_189(bool var_670_bool, string var_671_string, string var_672_string)
{
	object var_674_object;
	@FindActor(var_674_object, var_671_string);
	if(var_674_object == null)
		var_670_bool = false;
	@Trigger(var_674_object, var_672_string);
	var_670_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_11455(void)
{
	func_151("mnogogrannik@door1", true);
}


// @pe
void func_11462(void)
{
	func_151("sobor@door1", true);
}


void func_201(bool var_4371_bool, string var_4372_string, string var_4373_string, string var_4374_string)
{
	object var_4376_object;
	@FindActor(var_4376_object, var_4372_string);
	if(var_4376_object == null)
		var_4371_bool = false;
	@Trigger(var_4376_object, var_4373_string, var_4374_string);
	var_4371_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_11469(void)
{
	func_151("sobor@door1", false);
}


// @pe
void func_11476(void)
{
	func_151("cot_bigvlad@door1", true);
}


void func_213(object var_597_object)
{
	int var_601_int; int var_602_int; object var_603_object;
	if(var_597_object != 0) {
		var_597_object->size(var_601_int);
		var_602_int = 0;

		while(var_602_int < var_601_int) {
			var_597_object->get(var_603_object, var_602_int);
			if(var_603_object != 0)
				var_603_object->Remove();
			var_603_object = null;
			var_602_int += 1;
		}

		var_597_object->clear();
	}
}


// @pe
void func_6357(int var_2876_int, int var_2877_int, object var_2878_object, object var_2879_object, object var_2880_object, object var_2881_object)
{
	if(var_2877_int == 0) {
		func_760(10, true);
		func_777(10, true, 1);
		int var_2890_int; object var_2891_object; object var_2892_object; object var_2893_object;
		var_2876_int = var_2890_int;
		var_2878_object = var_2891_object;
		var_2879_object = var_2892_object;
		var_2880_object = var_2893_object;
		func_605(10, var_2890_int, var_2891_object, var_2892_object, var_2893_object);
		object var_2894_object;
		var_2881_object = var_2894_object;
		func_270(var_2894_object, 1);
		func_834(10, true, 7);
		func_896(10, false, 7);
	}
	func_743(10, false);
	int var_2905_int; int var_2906_int;
	var_2876_int = var_2905_int;
	var_2877_int = var_2906_int;
	func_2757(10, var_2905_int, var_2906_int);
}


// @pe
void func_5335(int var_3721_int, int var_3722_int, object var_3723_object, object var_3724_object, object var_3725_object, object var_3726_object)
{
	if(var_3722_int == 0) {
		func_760(4, false);
		func_777(4, false, 1);
		int var_3735_int; object var_3736_object; object var_3737_object; object var_3738_object;
		var_3721_int = var_3735_int;
		var_3723_object = var_3736_object;
		var_3724_object = var_3737_object;
		var_3725_object = var_3738_object;
		func_684(4, var_3735_int, var_3736_object, var_3737_object, var_3738_object);
		object var_3739_object;
		var_3726_object = var_3739_object;
		func_270(var_3739_object, 2);
		func_834(4, false, 4);
		func_896(4, true, 4);
	}
	func_743(4, false);
	int var_3750_int; int var_3751_int;
	var_3721_int = var_3750_int;
	var_3722_int = var_3751_int;
	func_3840(4, var_3750_int, var_3751_int);
}


// @pe
void func_11483(void)
{
	func_151("cot_bigvlad@door1", false);
}


void func_3297(int var_2312_int, int var_2313_int, int var_2314_int)
{
	int var_2317_int; int var_2318_int;
	bool var_2319_bool = false;
	if(var_2314_int > 8) {
		if(var_2314_int < 21)
			var_2319_bool = true;
	}
	if(var_2319_bool != 0) {
		int var_2324_int;
		var_2312_int = var_2324_int;
		func_467(var_2324_int, "pers_vaxxabit", "vaxxabit_d.xml", 7);
		int var_2328_int;
		var_2312_int = var_2328_int;
		func_467(var_2328_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 7);
		int var_2332_int;
		var_2312_int = var_2332_int;
		func_467(var_2332_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2336_int;
		var_2312_int = var_2336_int;
		func_493(var_2336_int, "fog", "fog.xml", 7);
		if(var_2313_int >= 5) {
			int var_2342_int;
			var_2312_int = var_2342_int;
			func_493(var_2342_int, "fog", "fog_hunter.xml", 3);
		}
		float var_2347_float; int var_2348_int;
		func_1188(var_2347_float, var_2348_int);
		if((2 * var_2347_float) != 0) {
			int var_2350_int; int var_2353_int;
			var_2312_int = var_2350_int;
			var_2317_int = var_2353_int;
			func_467(var_2350_int, "pers_bomber", "bomber.xml", var_2353_int);
		}
	} else {
		int var_2384_int;
		var_2312_int = var_2384_int;
		func_467(var_2384_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2388_int;
		var_2312_int = var_2388_int;
		func_467(var_2388_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2392_int;
		var_2312_int = var_2392_int;
		func_467(var_2392_int, "pers_rat_big", "rat_big.xml", 4);
		int var_2396_int;
		var_2312_int = var_2396_int;
		func_493(var_2396_int, "fog", "fog.xml", 7);
		if(var_2348_int >= 5) {
			int var_2402_int;
			var_2312_int = var_2402_int;
			func_493(var_2402_int, "fog", "fog_hunter.xml", 3);
		}
		float var_2407_float; int var_2408_int;
		var_2313_int = var_2408_int;
		func_1188(var_2407_float, var_2408_int);
		if((2 * var_2407_float) == 0) goto Label_3415;
		int var_2410_int; int var_2413_int;
		var_2312_int = var_2410_int;
		var_2318_int = var_2413_int;
		func_467(var_2410_int, "pers_bomber", "bomber.xml", var_2413_int);
	}
Label_3415:
	bool var_2354_bool; int var_2355_int;
	var_2313_int = var_2355_int;
	func_1305(var_2354_bool, var_2355_int);
	if(var_2354_bool != 0) {
		int var_2356_int;
		var_2312_int = var_2356_int;
		func_467(var_2356_int, "pers_sanitar", "sanitar.xml", 2);
	}
	int var_2360_int;
	var_2312_int = var_2360_int;
	func_480(var_2360_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2366_int;
	var_2312_int = var_2366_int;
	func_480(var_2366_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2372_int;
	var_2312_int = var_2372_int;
	func_480(var_2372_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2378_int;
	var_2312_int = var_2378_int;
	func_480(var_2378_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	
}


// @pe
void func_11490(void)
{
	func_151("vagon_mishka@door1", true);
}


// @pe
void func_11497(void)
{
	func_151("warehouse_notkin@door1", true);
}


void func_234(float var_4590_float)
{
	float var_4592_float;
	@GetGameTime(var_4592_float);
	var_4592_float = var_4590_float;
}


// @pe
void func_7403(int var_4281_int, int var_4282_int, object var_4283_object, object var_4284_object, object var_4285_object, object var_4286_object)
{
	if(var_4282_int == 0) {
		func_760(15, false);
		func_777(15, false, 1);
		int var_4295_int; object var_4296_object; object var_4297_object; object var_4298_object;
		var_4281_int = var_4295_int;
		var_4283_object = var_4296_object;
		var_4284_object = var_4297_object;
		var_4285_object = var_4298_object;
		func_684(15, var_4295_int, var_4296_object, var_4297_object, var_4298_object);
		object var_4299_object;
		var_4286_object = var_4299_object;
		func_270(var_4299_object, 2);
		func_834(15, false, 5);
		func_896(15, true, 5);
	}
	func_743(15, false);
	int var_4310_int; int var_4311_int;
	var_4281_int = var_4310_int;
	var_4282_int = var_4311_int;
	func_3464(15, var_4310_int, var_4311_int);
}


void func_239(int var_148_int)
{
	float var_150_float;
	@GetGameTime(var_150_float);
	var_148_int = 1 + (var_150_float / 24);
}


// @pe
void func_11504(void)
{
	func_151("warehouse_notkin@door1", false);
}


void func_14583(int var_4314_int)
{
	object var_4319_object; object var_4320_object; object var_4321_object; object var_4322_object;
	if(var_4314_int == 3) {
		@Trace("Special diseased house: house5_unoin03l");
		@Trace("Special diseased house: house5_unoin03r");
		@GetSceneByName(var_4319_object, "house5_unoin03l");
		@ReplaceScene(var_4319_object, "s_house5_unoin03l.isc");
		@GetSceneByName(var_4319_object, "house5_unoin03r");
		@ReplaceScene(var_4319_object, "s_house5_unoin03r.isc");
		var_4319_object = null;
	} else if(var_4314_int == 4) {
			@GetSceneByName(var_4320_object, "theater");
			@ReplaceScene(var_4320_object, "dtheater_burah.isc");
			var_4320_object = null;
	}

	for(;;) {
		return 8;

	}
	
	if(var_4314_int == 8) {
		@Trace("Special replaced house: uprava_admin");
		@GetSceneByName(var_4321_object, "uprava_admin");
		@ReplaceScene(var_4321_object, "uprava_admin_army_burah.isc");
		var_4321_object = null;
	} else if(var_4314_int == 11) {
		@GetSceneByName(var_4322_object, "theater");
		@ReplaceScene(var_4322_object, "theater_burah.isc");
		var_4322_object = null;
	}
}


// @pe
void func_248(bool var_146_bool, int var_147_int)
{
	int var_148_int;
	func_239(var_148_int);
	var_146_bool = var_148_int == var_147_int;
}


// @pe
void func_11511(bool var_5305_bool)
{
	int var_5308_int;
	func_106(var_5308_int, "b7q02");
	if(var_5308_int == 0) {
		var_5305_bool = true;
		return 0;
	}
	var_5305_bool = false;
}


void func_254(void)
{
	@SetSepia(0.5, 0.886);
}


// @pe
void func_1278(bool var_1130_bool, int var_1131_int, int var_1132_int)
{
	var_1130_bool = false;
	if(var_1131_int >= 10) {
		if(var_1132_int < 6)
			var_1130_bool = true;
	}
}


void func_259(void)
{
	@SetSepia(0, 0);
}


// @pe
void func_11523(bool var_5328_bool)
{
	int var_5331_int;
	func_106(var_5331_int, "b7q01");
	if(var_5331_int == 1000)
		var_5328_bool = true;
	var_5328_bool = false;
}


// @pe
void func_264(string var_444_string, int var_445_int)
{
	var_444_string = ("Region" + var_445_int) + "State";
}


// @pe
void func_6409(int var_4006_int, int var_4007_int, object var_4008_object, object var_4009_object, object var_4010_object, object var_4011_object)
{
	if(var_4007_int == 0) {
		func_760(10, false);
		func_777(10, false, 1);
		int var_4020_int; object var_4021_object; object var_4022_object; object var_4023_object;
		var_4006_int = var_4020_int;
		var_4008_object = var_4021_object;
		var_4009_object = var_4022_object;
		var_4010_object = var_4023_object;
		func_684(10, var_4020_int, var_4021_object, var_4022_object, var_4023_object);
		object var_4024_object;
		var_4011_object = var_4024_object;
		func_270(var_4024_object, 2);
		func_834(10, false, 7);
		func_896(10, true, 7);
	}
	func_743(10, false);
	int var_4035_int; int var_4036_int;
	var_4006_int = var_4035_int;
	var_4007_int = var_4036_int;
	func_3652(10, var_4035_int, var_4036_int);
}


// @pe
void func_1288(bool var_1141_bool, int var_1142_int, int var_1143_int)
{
	var_1141_bool = false;
	if(var_1142_int >= 3) {
		bool var_1146_bool = true;
		var_1148_bool = var_1143_int > 22;
		if(var_1148_bool != 1) {
			var_1150_bool = var_1143_int < 5;
			if(var_1150_bool != 1)
				var_1146_bool = false;
		}
		if(var_1146_bool != 0)
			var_1141_bool = true;
	}
}


// @pe
void func_5387(object var_144_object)
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
	var_144_object->add("house1_se_05");
}


void func_270(object var_610_object, int var_611_int)
{
	int var_618_int; string var_619_string; string var_621_string; object var_623_object;
	var_610_object->size(var_618_int);
	if(var_611_int == 1) {
		var_619_string = "s_";
	} else if(var_611_int == 2) {
	}
	int var_620_int = 0;
	
	for(;;) {
		if(var_620_int < var_618_int) {
			var_610_object->get(var_621_string, var_620_int);
			@GetSceneByName(var_623_object, var_621_string);
			if(!var_623_object) //@nz
				@Trace(("City manager: can't replace indoor scene \"" + var_621_string) + "\" because it doesn't exist");
			else
				@ReplaceScene(var_623_object, (("n_" + var_621_string) + ".isc"));

		}
		var_623_object = null;
		var_620_int += 1;
	}
	
}


// @pe
void func_11535(bool var_5352_bool)
{
	int var_5355_int;
	func_106(var_5355_int, "b8q01");
	if(var_5355_int == 0) {
		var_5352_bool = true;
		return 0;
	}
	var_5352_bool = false;
}


void func_8470(void)
{
	object var_4453_object; bool var_4454_bool; cvector var_4455_cvector; cvector var_4456_cvector; string var_4457_string;
	int var_4458_int;
	func_12054(var_4458_int);
	if(var_4458_int != 1)
		return 16;
	var_4461_object = GlobalVars[6];
	int var_4450_int;
	var_4461_object->size(var_4450_int);
	object var_4451_object;
	@GetMainOutdoorScene(var_4451_object);
	int var_4452_int = 0;
	
	for(;;) {
		if(var_4452_int < var_4450_int) {
			var_4463_object = GlobalVars[6];
			var_4463_object->get(var_4453_object, var_4452_int);
			if(var_4453_object != 0) {
			} else {
			var_4451_object->GetLocator(("pt_plant" + (var_4452_int + 1)), var_4454_bool, var_4455_cvector, var_4456_cvector);
			if(!var_4454_bool) { //@nz
				@Trace("Plant point not found");
				goto Label_8540;
			}
			@RandOneOf(var_4457_string, 6, 3, 3, 3, 1, 1, "", "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
			if(var_4457_string != 0) {
				var_4451_object->AddStationaryActorByType(var_4453_object, var_4455_cvector, var_4456_cvector, "scripted", (("item_" + var_4457_string) + "_stat.xml"));
				var_4490_object = GlobalVars[6];
				var_4490_object->set(var_4452_int, var_4453_object);
				@Trace((("New plant: \"" + var_4457_string) + "\" at location #") + (var_4452_int + 1));
			}
			var_4453_object = null;
		}
		return 16;
		}
	Label_8540:
		var_4452_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


// @pe
void func_1305(bool var_2217_bool, int var_2218_int)
{
	var_2217_bool = var_2218_int >= 8;
}


// @pe
void func_4378(void)
{
}


// @pe
void func_11547(bool var_4860_bool)
{
	int var_4863_int;
	func_106(var_4863_int, "b10q01DankoTalk");
	if(var_4863_int == 1)
		var_4860_bool = true;
	var_4860_bool = false;
}


// @pe
void func_4380(int var_516_int, int var_517_int, object var_518_object, object var_519_object, object var_520_object, object var_521_object)
{
	if(var_517_int == 0) {
		func_760(0, false);
		func_777(0, false, 1);
		int var_564_int; int var_565_int; object var_566_object; object var_567_object; object var_568_object;
		var_564_int = 0;
		var_516_int = var_565_int;
		var_518_object = var_566_object;
		var_519_object = var_567_object;
		var_520_object = var_568_object;
		func_586(var_565_int, var_566_object, var_567_object, var_568_object);
		object var_610_object;
		var_521_object = var_610_object;
		func_270(var_610_object, 0);
		func_834(0, false, 4);
		func_896(0, false, 4);
	}
	int var_723_int;
	var_517_int = var_723_int;
	func_1014(0, var_723_int);
	int var_749_int; int var_750_int;
	var_516_int = var_749_int;
	var_517_int = var_750_int;
	func_2171(0, var_749_int, var_750_int);
}


void func_1309(int var_1809_int, int var_1810_int, int var_1811_int)
{
	int var_1813_int;
	if((var_1810_int + 1) == 12)
		return 2;
	bool var_1818_bool = false;
	bool var_1819_bool = true;
	var_1821_bool = var_1811_int < 7;
	if(var_1821_bool != 1) {
		var_1823_bool = var_1811_int > 21;
		if(var_1823_bool != 1)
			var_1819_bool = false;
	}
	if(var_1819_bool != 0) {
		if(var_1810_int != 0)
			var_1818_bool = true;
	}
	if(var_1818_bool != 0) {
		float var_1826_float; int var_1827_int;
		var_1810_int = var_1827_int;
		func_1074(var_1826_float, var_1827_int);
		var_1826_float = var_1813_int;
		if(var_1813_int != 0) {
			int var_1829_int; int var_1832_int;
			var_1809_int = var_1829_int;
			var_1813_int = var_1832_int;
			func_467(var_1829_int, "pers_grabitel", "grabitel.xml", var_1832_int);
		}
	}
	bool var_1833_bool = false;
	bool var_1834_bool = false;
	if(var_1810_int == 0) {
		if(var_1811_int < 21)
			var_1834_bool = true;
	}
	if(var_1834_bool != 0) {
		int var_1839_int;
		func_12054(var_1839_int);
		if(var_1839_int == 1)
			var_1833_bool = true;
	}
	if(var_1833_bool != 0) {
		int var_1842_int;
		var_1809_int = var_1842_int;
		func_467(var_1842_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1846_int;
		var_1809_int = var_1846_int;
		func_467(var_1846_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1850_int;
		var_1809_int = var_1850_int;
		func_467(var_1850_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1854_int;
		var_1809_int = var_1854_int;
		func_467(var_1854_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1858_int;
		var_1809_int = var_1858_int;
		func_467(var_1858_int, "pers_wasted_girl", "wasted_girl.xml", 2);
		int var_1862_int;
		var_1809_int = var_1862_int;
		func_467(var_1862_int, "pers_wasted_male", "wasted_male.xml", 3);
		int var_1866_int;
		var_1809_int = var_1866_int;
		func_467(var_1866_int, "pers_woman", "woman.xml", 3);
		int var_1870_int;
		var_1809_int = var_1870_int;
		func_467(var_1870_int, "pers_boy", "boy.xml", 1);
		int var_1874_int;
		var_1809_int = var_1874_int;
		func_467(var_1874_int, "pers_girl", "girl.xml", 1);
		int var_1878_int;
		var_1809_int = var_1878_int;
		func_467(var_1878_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_1901_bool = false;
			if(var_1811_int > 8) {
				if(var_1811_int < 21)
					var_1901_bool = true;
			}
			if(var_1901_bool == 0) goto Label_1505;
			int var_1906_int;
			var_1809_int = var_1906_int;
			func_467(var_1906_int, "pers_wasted_girl", "wasted_girl.xml", 2);
			int var_1910_int;
			var_1809_int = var_1910_int;
			func_467(var_1910_int, "pers_wasted_male", "wasted_male.xml", 3);
			int var_1914_int;
			var_1809_int = var_1914_int;
			func_467(var_1914_int, "pers_woman", "woman.xml", 3);
			int var_1918_int;
			var_1809_int = var_1918_int;
			func_467(var_1918_int, "pers_unosha", "unosha.xml", 2);
			int var_1922_int;
			var_1809_int = var_1922_int;
			func_467(var_1922_int, "pers_unosha", "unosha2.xml", 2);
			int var_1926_int;
			var_1809_int = var_1926_int;
			func_467(var_1926_int, "pers_boy", "boy.xml", 2);
			int var_1930_int;
			var_1809_int = var_1930_int;
			func_467(var_1930_int, "pers_girl", "girl.xml", 1);
			int var_1934_int;
			var_1809_int = var_1934_int;
			func_467(var_1934_int, "pers_girl", "girl2.xml", 1);
	}
	for(;;) {
		bool var_1882_bool = false;
		bool var_1883_bool = false;
		if(var_1810_int == 0) {
			if(var_1811_int > 12)
				var_1883_bool = true;
		}
		if(var_1883_bool != 0) {
			if(var_1811_int < 22)
				var_1882_bool = true;
		}
		if(var_1882_bool != 0) {
			int var_1890_int;
			var_1809_int = var_1890_int;
			func_467(var_1890_int, "pers_wasted_girl", "wasted_girl_killme.xml", 1);
		}
		bool var_1894_bool; int var_1895_int; int var_1896_int;
		var_1810_int = var_1895_int;
		var_1811_int = var_1896_int;
		func_1278(var_1894_bool, var_1895_int, var_1896_int);
		if(var_1894_bool != 0) {
			int var_1897_int;
			var_1809_int = var_1897_int;
			func_467(var_1897_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		return 2;

	}
	
Label_1505:
	int var_1938_int;
	var_1809_int = var_1938_int;
	func_467(var_1938_int, "pers_wasted_girl", "wasted_girl.xml", 1);
	int var_1942_int;
	var_1809_int = var_1942_int;
	func_467(var_1942_int, "pers_wasted_male", "wasted_male.xml", 2);
	int var_1946_int;
	var_1809_int = var_1946_int;
	func_467(var_1946_int, "pers_unosha", "unosha.xml", 1);
	int var_1950_int;
	var_1809_int = var_1950_int;
	func_467(var_1950_int, "pers_unosha", "unosha2.xml", 1);
}


void func_10526(void)
{
	object var_5943_object;
	func_12037(var_5943_object);
	object var_5941_object;
	var_5943_object = var_5941_object;
	object var_5942_object;
	var_5941_object->FindMark(var_5942_object, "b2BurahHome");
	if(var_5942_object != 0)
		var_5942_object->Remove();
	var_5941_object->FindMark(var_5942_object, "b2DankoGotoMladVlad");
	if(var_5942_object != 0)
		var_5942_object->Remove();
	var_5941_object->FindMark(var_5942_object, "b2q01AlexandrGotoOspina");
	if(var_5942_object != 0)
		var_5942_object->Remove();
	var_5941_object->FindMark(var_5942_object, "b2q01BigVladGotoAlexandr");
	if(var_5942_object != 0)
		var_5942_object->Remove();
	var_5941_object->FindMark(var_5942_object, "b2q01BigVladGotoKaterina");
	if(var_5942_object != 0)
		var_5942_object->Remove();
	var_5941_object->FindMark(var_5942_object, "b2q01BigVladGotoMladVlad");
	if(var_5942_object != 0)
		var_5942_object->Remove();
	var_5941_object->FindMark(var_5942_object, "b2Travnik1");
	if(var_5942_object != 0)
		var_5942_object->Remove();
	var_5941_object->FindMark(var_5942_object, "b2Travnik2");
	if(var_5942_object != 0)
		var_5942_object->Remove();
	var_5941_object->FindMark(var_5942_object, "b2Travnik3");
	if(var_5942_object != 0)
		var_5942_object->Remove();
	var_5941_object->FindMark(var_5942_object, "b2q01BigVladGotoDanko");
	if(var_5942_object != 0)
		var_5942_object->Remove();
	var_5941_object->FindMark(var_5942_object, "b2q03GoodShop");
	if(var_5942_object != 0)
		var_5942_object->Remove();
	var_5941_object->FindMark(var_5942_object, "b2AndreiKabak");
	if(var_5942_object != 0)
		var_5942_object->Remove();
	bool var_5968_bool;
	func_12012(var_5968_bool, 245);
	bool var_5970_bool;
	func_12012(var_5970_bool, 456);
	bool var_5972_bool;
	func_12012(var_5972_bool, 585);
	bool var_5974_bool;
	func_12012(var_5974_bool, 588);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10233(void)
{
	func_151("cot_alexandr@door1", true);
}


// @pe
void func_11559(bool var_4879_bool)
{
	int var_4882_int;
	func_106(var_4882_int, "b11q01");
	if(var_4882_int == 0) {
		var_4879_bool = true;
		return 0;
	}
	var_4879_bool = false;
}


void func_14643(object var_4229_object, object var_4230_object, cvector var_4231_cvector, cvector var_4232_cvector)
{
	object var_4234_object;
	var_4230_object->AddStationaryActor(var_4234_object, var_4231_cvector, var_4232_cvector, "pers_morlok", "Burah_arena_manager.xml");
	var_4234_object = var_4229_object;
}
EMIT "Stack[-1] = 0";


void func_308(int var_108_int)
{
	int var_111_int; int var_112_int;
	var_111_int = 0;
	
	while(0 < 16) {
		bool var_115_bool; int var_116_int;
		var_112_int = var_116_int;
		func_394(var_115_bool, var_116_int);
		if(var_115_bool != 0)
			var_111_int += 1;
		var_112_int += 1;
	}
	
	var_111_int = var_108_int;
}


// @pe
void func_11571(bool var_4894_bool)
{
	int var_4897_int;
	func_106(var_4897_int, "b12q01BlockVisit");
	if(var_4897_int != 0) {
		var_4894_bool = true;
		return 0;
	}
	var_4894_bool = false;
}


void func_2362(int var_904_int, int var_905_int, int var_906_int)
{
	int var_908_int;
	if((var_905_int + 1) == 12)
		return 2;
	bool var_913_bool = false;
	bool var_914_bool = true;
	var_916_bool = var_906_int < 7;
	if(var_916_bool != 1) {
		var_918_bool = var_906_int > 21;
		if(var_918_bool != 1)
			var_914_bool = false;
	}
	if(var_914_bool != 0) {
		if(var_905_int != 0)
			var_913_bool = true;
	}
	if(var_913_bool != 0) {
		float var_922_float; int var_923_int;
		var_905_int = var_923_int;
		func_1074(var_922_float, var_923_int);
		if((1 * var_922_float) != 0) {
			int var_925_int; int var_928_int;
			var_904_int = var_925_int;
			var_908_int = var_928_int;
			func_467(var_925_int, "pers_grabitel", "grabitel.xml", var_928_int);
		}
	}
	bool var_929_bool = false;
	bool var_930_bool = false;
	if(var_905_int == 0) {
		if(var_906_int < 21)
			var_930_bool = true;
	}
	if(var_930_bool != 0) {
		int var_935_int;
		func_12054(var_935_int);
		if(var_935_int == 1)
			var_929_bool = true;
	}
	if(var_929_bool != 0) {
		int var_938_int;
		var_904_int = var_938_int;
		func_467(var_938_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_942_int;
		var_904_int = var_942_int;
		func_467(var_942_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_946_int;
		var_904_int = var_946_int;
		func_467(var_946_int, "pers_worker", "worker_attacker.xml", 1);
		int var_950_int;
		var_904_int = var_950_int;
		func_467(var_950_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_954_int;
		var_904_int = var_954_int;
		func_467(var_954_int, "pers_alkash", "alkash.xml", 1);
		int var_958_int;
		var_904_int = var_958_int;
		func_467(var_958_int, "pers_woman", "woman.xml", 2);
	} else {
			bool var_974_bool = false;
			if(var_906_int > 8) {
				if(var_906_int < 21)
					var_974_bool = true;
			}
			if(var_974_bool == 0) goto Label_2517;
			int var_979_int;
			var_904_int = var_979_int;
			func_467(var_979_int, "pers_worker", "worker.xml", 2);
			int var_983_int;
			var_904_int = var_983_int;
			func_467(var_983_int, "pers_worker", "worker2.xml", 2);
			int var_987_int;
			var_904_int = var_987_int;
			func_467(var_987_int, "pers_alkash", "alkash.xml", 1);
			int var_991_int;
			var_904_int = var_991_int;
			func_467(var_991_int, "pers_woman", "woman.xml", 2);
			int var_995_int;
			var_904_int = var_995_int;
			func_467(var_995_int, "pers_unosha", "unosha.xml", 1);
			int var_999_int;
			var_904_int = var_999_int;
			func_467(var_999_int, "pers_unosha", "unosha2.xml", 1);
	}
	for(;;) {
		bool var_962_bool = false;
		bool var_963_bool = false;
		if(var_905_int == 0) {
			if(var_906_int > 12)
				var_963_bool = true;
		}
		if(var_963_bool != 0) {
			if(var_906_int < 22)
				var_962_bool = true;
		}
		if(var_962_bool != 0) {
			int var_970_int;
			var_904_int = var_970_int;
			func_467(var_970_int, "pers_woman", "woman_killme.xml", 1);
		}
		return 2;

	}
	
Label_2517:
	int var_1003_int;
	var_904_int = var_1003_int;
	func_467(var_1003_int, "pers_alkash", "alkash.xml", 1);
	int var_1007_int;
	var_904_int = var_1007_int;
	func_467(var_1007_int, "pers_worker", "worker.xml", 1);
	int var_1011_int;
	var_904_int = var_1011_int;
	func_467(var_1011_int, "pers_worker", "worker2.xml", 1);
	int var_1015_int;
	var_904_int = var_1015_int;
	func_467(var_1015_int, "pers_unosha", "unosha2.xml", 1);
	int var_1019_int;
	var_904_int = var_1019_int;
	func_467(var_1019_int, "pers_dog", "dog.xml", 1);
}


// @pe
void func_13626(float var_4589_float)
{
	var_4593_object = GlobalVars[16];
	GlobalVars[16] = Obj();
	@SetTimeEvent(45058, 24.0);
	object var_4596_object; object var_4597_object;
	var_4598_object = GlobalVars[16];
	var_4598_object = var_4596_object;
	var_4599_object = GlobalVars[16];
	var_4599_object = var_4597_object;
	func_11476();
	object var_4610_object; object var_4611_object;
	var_4612_object = GlobalVars[16];
	var_4612_object = var_4610_object;
	var_4613_object = GlobalVars[16];
	var_4613_object = var_4611_object;
	func_11490();
	object var_4616_object; object var_4617_object;
	var_4618_object = GlobalVars[16];
	var_4618_object = var_4616_object;
	var_4619_object = GlobalVars[16];
	var_4619_object = var_4617_object;
	func_10337();
	object var_4622_object; object var_4623_object;
	var_4624_object = GlobalVars[16];
	var_4624_object = var_4622_object;
	var_4625_object = GlobalVars[16];
	var_4625_object = var_4623_object;
	func_10205();
	object var_4628_object; object var_4629_object;
	var_4630_object = GlobalVars[16];
	var_4630_object = var_4628_object;
	var_4631_object = GlobalVars[16];
	var_4631_object = var_4629_object;
	func_10219();
	object var_4643_object; object var_4644_object;
	var_4645_object = GlobalVars[16];
	var_4645_object = var_4643_object;
	var_4646_object = GlobalVars[16];
	var_4646_object = var_4644_object;
	func_10233();
	object var_4649_object; object var_4650_object;
	var_4651_object = GlobalVars[16];
	var_4651_object = var_4649_object;
	var_4652_object = GlobalVars[16];
	var_4652_object = var_4650_object;
	func_10247();
	object var_4655_object; object var_4656_object;
	var_4657_object = GlobalVars[16];
	var_4657_object = var_4655_object;
	var_4658_object = GlobalVars[16];
	var_4658_object = var_4656_object;
	func_10261();
	object var_4659_object; object var_4660_object;
	var_4661_object = GlobalVars[16];
	var_4661_object = var_4659_object;
	var_4662_object = GlobalVars[16];
	var_4662_object = var_4660_object;
	func_10265();
	object var_4665_object; object var_4666_object;
	var_4667_object = GlobalVars[16];
	var_4667_object = var_4665_object;
	var_4668_object = GlobalVars[16];
	var_4668_object = var_4666_object;
	func_10279();
	object var_4683_object; object var_4684_object;
	var_4685_object = GlobalVars[16];
	var_4685_object = var_4683_object;
	var_4686_object = GlobalVars[16];
	var_4686_object = var_4684_object;
	func_10295();
	object var_4689_object; object var_4690_object;
	var_4691_object = GlobalVars[16];
	var_4691_object = var_4689_object;
	var_4692_object = GlobalVars[16];
	var_4692_object = var_4690_object;
	func_11432();
	object var_4695_object; object var_4696_object;
	var_4697_object = GlobalVars[16];
	var_4697_object = var_4695_object;
	var_4698_object = GlobalVars[16];
	var_4698_object = var_4696_object;
	func_11209();
	object var_4722_object; object var_4723_object;
	var_4724_object = GlobalVars[16];
	var_4724_object = var_4722_object;
	var_4725_object = GlobalVars[16];
	var_4725_object = var_4723_object;
	func_11462();
	object var_4728_object; object var_4729_object;
	var_4730_object = GlobalVars[16];
	var_4730_object = var_4728_object;
	var_4731_object = GlobalVars[16];
	var_4731_object = var_4729_object;
	func_10323();
	object var_4734_object; object var_4735_object;
	var_4736_object = GlobalVars[16];
	var_4736_object = var_4734_object;
	var_4737_object = GlobalVars[16];
	var_4737_object = var_4735_object;
	func_11314();
	object var_4740_object; object var_4741_object;
	var_4742_object = GlobalVars[16];
	var_4742_object = var_4740_object;
	var_4743_object = GlobalVars[16];
	var_4743_object = var_4741_object;
	func_10330();
	object var_4746_object; object var_4747_object;
	var_4748_object = GlobalVars[16];
	var_4748_object = var_4746_object;
	var_4749_object = GlobalVars[16];
	var_4749_object = var_4747_object;
	func_11321();
	object var_4752_object; object var_4753_object;
	var_4754_object = GlobalVars[16];
	var_4754_object = var_4752_object;
	var_4755_object = GlobalVars[16];
	var_4755_object = var_4753_object;
	func_11328();
	object var_4758_object; object var_4759_object;
	var_4760_object = GlobalVars[16];
	var_4760_object = var_4758_object;
	var_4761_object = GlobalVars[16];
	var_4761_object = var_4759_object;
	func_11455();
	int var_4764_int; float var_4765_float;
	var_4589_float = var_4765_float;
	func_9773(var_4764_int, var_4765_float);
	object var_4773_object;
	func_111(var_4773_object, "volonteers_burah");
	object var_4781_object;
	func_111(var_4781_object, "quest_b1_01");
	object var_4783_object;
	func_111(var_4783_object, "quest_b1_05");
	@SetTimeEvent(45079, 168.0);
	@SetTimeEvent(45080, 168.0);
	@SetTimeEvent(45070, 72.0);
	@SetTimeEvent(45071, 18.0);
	@SetTimeEvent(45068, 11.0);
	@SetTimeEvent(45069, 72.0);
	@SetTimeEvent(45086, 240.0);
	@SetTimeEvent(45087, 264.0);
	@SetTimeEvent(45088, 223.25);
	@SetTimeEvent(45089, 247.25);
	@SetTimeEvent(45090, 281.0);
	@SetTimeEvent(45091, 271.5);
	@SetTimeEvent(45092, 271.25);
	@SetTimeEvent(45093, 282.0);
	@SetTimeEvent(45111, 12.0);
	@SetTimeEvent(45112, 24.05);
	@SetTimeEvent(45113, 36.0);
	@SetTimeEvent(45067, 55.25);
	@SetTimeEvent(45066, 120.0);
	@SetTimeEvent(45065, 96.0);
	@SetTimeEvent(45081, 144.0);
	@SetTimeEvent(45082, 127.0);
	@SetTimeEvent(45062, 192.0);
	@SetTimeEvent(45061, 144.0);
	@SetTimeEvent(45060, 72.0);
	@SetTimeEvent(45074, 48.0);
	@SetTimeEvent(45075, 41.0);
	@SetTimeEvent(45072, 48.0);
	@SetTimeEvent(45073, 48.0);
	@SetTimeEvent(45076, 31.25);
	@SetTimeEvent(45077, 33.0);
	@SetTimeEvent(45078, 144.0);
	@SetTimeEvent(45125, 96.05);
	@SetTimeEvent(45126, 103.25);
	@SetTimeEvent(45127, 120.05);
	@SetTimeEvent(45128, 127.25);
	@SetTimeEvent(45129, 144.05);
	@SetTimeEvent(45130, 151.25);
	@SetTimeEvent(45131, 152.0);
	@SetTimeEvent(45132, 156.0);
	@SetTimeEvent(45133, 168.05);
	@SetTimeEvent(45134, 192.05);
	@SetTimeEvent(45135, 175.25);
	@SetTimeEvent(45136, 180.0);
	@SetTimeEvent(45137, 199.25);
	@SetTimeEvent(45138, 216.05);
	@SetTimeEvent(45139, 240.05);
	@SetTimeEvent(45140, 263.25);
	@SetTimeEvent(45141, 263.5);
	@SetTimeEvent(45142, 264.05);
	@SetTimeEvent(45143, 256.0);
	@SetTimeEvent(45144, 108.0);
	@SetTimeEvent(45262, 168.0);
	@SetTimeEvent(45263, 192.0);
	@SetTimeEvent(45147, 210.0);
	@SetTimeEvent(45148, 207.0);
	@SetTimeEvent(45149, 222.0);
	@SetTimeEvent(45150, 240.0);
	@SetTimeEvent(45151, 250.5);
	@SetTimeEvent(45152, 31.02);
	@SetTimeEvent(45153, 55.02);
	@SetTimeEvent(45154, 79.02);
	@SetTimeEvent(45155, 103.02);
	@SetTimeEvent(45156, 127.02);
	@SetTimeEvent(45157, 151.02);
	@SetTimeEvent(45158, 175.02);
	@SetTimeEvent(45159, 199.02);
	@SetTimeEvent(45160, 223.02);
	@SetTimeEvent(45161, 247.02);
	@SetTimeEvent(45162, 271.02);
	@SetTimeEvent(45185, 63.0);
	@SetTimeEvent(45186, 184.5);
	@SetTimeEvent(45187, 230.0);
	@SetTimeEvent(45188, 135.0);
	@SetTimeEvent(45189, 111.5);
	@SetTimeEvent(45190, 64.0);
	@SetTimeEvent(45191, 64.25);
	@SetTimeEvent(45192, 120.0);
	@SetTimeEvent(45193, 11.0);
	@SetTimeEvent(45194, 39.0);
	@SetTimeEvent(45195, 82.5);
	@SetTimeEvent(45196, 227.5);
	@SetTimeEvent(45083, 192.0);
	@SetTimeEvent(45084, 192.0);
	@SetTimeEvent(45085, 216.0);
	@SetTimeEvent(45059, 48.0);
	@SetTimeEvent(45114, 48.05);
	@SetTimeEvent(45115, 60.0);
	@SetTimeEvent(45116, 58.0);
	@SetTimeEvent(45117, 48.08);
	@SetTimeEvent(45118, 72.08);
	@SetTimeEvent(45119, 96.08);
	@SetTimeEvent(45120, 120.08);
	@SetTimeEvent(45121, 144.08);
	@SetTimeEvent(45122, 168.08);
	@SetTimeEvent(45123, 79.25);
	@SetTimeEvent(45124, 84.0);
	@SetTimeEvent(45197, 199.33);
	@SetTimeEvent(45198, 24.0);
	@SetTimeEvent(45234, 67.5);
	@SetTimeEvent(45235, 90.0);
	@SetTimeEvent(45237, 178.5);
	@SetTimeEvent(45238, 205.25);
	@SetTimeEvent(45264, 216.0);
	@SetTimeEvent(45265, 240.0);
	@SetTimeEvent(45266, 264.0);
}


// @pe
void func_6461(object var_243_object)
{
	var_243_object->add("r5_house2_01");
	var_243_object->add("r5_house2_02");
	var_243_object->add("r5_house2_03");
	var_243_object->add("r5_house3_01_i2");
	var_243_object->add("r5_house3_01");
	var_243_object->add("r5_house3_02_i2");
	var_243_object->add("r5_house3_02");
	var_243_object->add("r5_house3_03_i2");
	var_243_object->add("r5_house3_03");
	var_243_object->add("r5_house3_04_i2");
	var_243_object->add("r5_house3_04");
	var_243_object->add("r5_house3_05_i2");
	var_243_object->add("r5_house3_05");
	var_243_object->add("r5_house3_06_i2");
	var_243_object->add("r5_house3_06");
	var_243_object->add("r5_house3_07_i2");
	var_243_object->add("r5_house3_07");
	var_243_object->add("r5_House6_01");
}


// @pe
void func_11583(bool var_4910_bool)
{
	int var_4913_int;
	func_106(var_4913_int, "b12q01DankoVisit");
	if(var_4913_int != 0) {
		var_4910_bool = true;
		return 0;
	}
	var_4910_bool = false;
}


void func_326(void)
{
	int var_124_int; int var_126_int;
	@irand(var_124_int, 16);
	int var_125_int = 0;
	
	while(var_125_int < 16) {
		var_126_int = (var_125_int + var_124_int) % 16;
		bool var_132_bool = false;
		bool var_133_bool; int var_134_int;
		var_126_int = var_134_int;
		func_364(var_133_bool, var_134_int);
		if(var_133_bool != 0) {
			bool var_142_bool; int var_143_int;
			var_126_int = var_143_int;
			func_14334(var_142_bool, var_143_int);
			if(var_142_bool != 0)
				var_132_bool = true;
		}
		if(var_132_bool != 0) {
			int var_166_int;
			func_406(var_166_int);
			@Trace("Diseased Region: " + var_166_int);
		}
		var_125_int += 1;
	}
	
}


// @pe
void func_11595(bool var_4926_bool)
{
	int var_4929_int;
	func_106(var_4929_int, "b12q01KlaraVisit");
	if(var_4929_int != 0) {
		var_4926_bool = true;
		return 0;
	}
	var_4926_bool = false;
}


// @pe
void func_9548(int var_5819_int, float var_5820_float)
{
	float var_5824_float;
	var_5820_float = var_5824_float;
	int var_5821_int;
	func_12029(var_5821_int, 531503, 531502, var_5824_float);
	var_5821_int = var_5819_int;
}


// @pe
void func_4432(int var_2014_int, int var_2015_int, object var_2016_object, object var_2017_object, object var_2018_object, object var_2019_object)
{
	if(var_2015_int == 0) {
		func_760(0, true);
		func_777(0, true, 1);
		int var_2028_int; object var_2029_object; object var_2030_object; object var_2031_object;
		var_2014_int = var_2028_int;
		var_2016_object = var_2029_object;
		var_2017_object = var_2030_object;
		var_2018_object = var_2031_object;
		func_605(0, var_2028_int, var_2029_object, var_2030_object, var_2031_object);
		object var_2117_object;
		var_2019_object = var_2117_object;
		func_270(var_2117_object, 1);
		func_834(0, true, 4);
		func_896(0, false, 4);
	}
	func_743(0, false);
	int var_2128_int; int var_2129_int;
	var_2014_int = var_2128_int;
	var_2015_int = var_2129_int;
	func_3130(0, var_2128_int, var_2129_int);
}


// @pe
void func_9557(int var_5527_int, float var_5528_float)
{
	float var_5532_float;
	var_5528_float = var_5532_float;
	int var_5529_int;
	func_12029(var_5529_int, 530554, 530553, var_5532_float);
	var_5529_int = var_5527_int;
}


// @pe
void func_11607(bool var_6085_bool)
{
	int var_6088_int;
	func_106(var_6088_int, "b4NotkinMapVisit");
	if(var_6088_int != 0) {
		var_6085_bool = true;
		return 0;
	}
	var_6085_bool = false;
}


// @pe
void func_5470(int var_1343_int, int var_1344_int, object var_1345_object, object var_1346_object, object var_1347_object, object var_1348_object)
{
	if(var_1344_int == 0) {
		func_760(5, false);
		func_777(5, false, 1);
		int var_1356_int; int var_1357_int; object var_1358_object; object var_1359_object; object var_1360_object;
		var_1356_int = 5;
		var_1343_int = var_1357_int;
		var_1345_object = var_1358_object;
		var_1346_object = var_1359_object;
		var_1347_object = var_1360_object;
		func_586(var_1357_int, var_1358_object, var_1359_object, var_1360_object);
		object var_1361_object;
		var_1348_object = var_1361_object;
		func_270(var_1361_object, 0);
		func_834(5, false, 4);
		func_896(5, false, 4);
	}
	int var_1370_int;
	var_1344_int = var_1370_int;
	func_947(5, var_1370_int);
	int var_1372_int; int var_1373_int;
	var_1343_int = var_1372_int;
	var_1344_int = var_1373_int;
	func_1848(5, var_1372_int, var_1373_int);
}


// @pe
void func_9566(int var_5538_int, float var_5539_float)
{
	float var_5543_float;
	var_5539_float = var_5543_float;
	int var_5540_int;
	func_12029(var_5540_int, 530556, 530555, var_5543_float);
	var_5540_int = var_5538_int;
}


void func_8545(void)
{
	object var_4506_object; object var_4509_object; bool var_4510_bool; cvector var_4511_cvector; cvector var_4512_cvector; string var_4513_string;
	@GetMainOutdoorScene(var_4506_object);
	var_4514_object = GlobalVars[7];
	int var_4507_int;
	var_4514_object->size(var_4507_int);
	int var_4508_int = 0;
	
	for(;;) {
		if(var_4508_int < var_4507_int) {
			var_4516_object = GlobalVars[7];
			var_4516_object->get(var_4509_object, var_4508_int);
			if(var_4509_object != 0) {
			} else {
			var_4506_object->GetLocator(("pt_grave_supply" + (var_4508_int + 1)), var_4510_bool, var_4511_cvector, var_4512_cvector);
			if(!var_4510_bool) { //@nz
				@Trace("Grave supply point not found");
				goto Label_8589;
			}
			@RandOneOf(var_4513_string, 1, 1, "bread", "milk");
			var_4506_object->AddStationaryActorByType(var_4509_object, var_4511_cvector, var_4512_cvector, "scripted", (("item_" + var_4513_string) + "_stat.xml"));
			var_4534_object = GlobalVars[7];
			var_4534_object->set(var_4508_int, var_4509_object);
			var_4509_object = null;
		}
		}
	Label_8589:
		var_4508_int += 1;
	}
	
}
EMIT "Stack[-8] = 0";


// @pe
void func_11619(bool var_5267_bool)
{
	int var_5270_int;
	func_106(var_5270_int, "b6q01");
	if(var_5270_int == 0) {
		var_5267_bool = true;
		return 0;
	}
	var_5267_bool = false;
}


// @pe
void func_9575(int var_5549_int, float var_5550_float)
{
	float var_5554_float;
	var_5550_float = var_5554_float;
	int var_5551_int;
	func_12029(var_5551_int, 530558, 530557, var_5554_float);
	var_5551_int = var_5549_int;
}


void func_364(bool var_490_bool, int var_491_int)
{
	int var_495_int;
	var_491_int = var_495_int;
	string var_494_string;
	func_264(var_494_string, var_495_int);
	int var_493_int;
	@GetVariable(var_494_string, var_493_int);
	var_490_bool = (var_493_int & 3) == 0;
}


// @pe
void func_11631(bool var_5472_bool)
{
	int var_5475_int;
	func_106(var_5475_int, "b9q03AglajaTalk");
	if(var_5475_int != 0) {
		var_5472_bool = true;
		return 0;
	}
	var_5472_bool = false;
}


// @pe
void func_9584(int var_5560_int, float var_5561_float)
{
	float var_5565_float;
	var_5561_float = var_5565_float;
	int var_5562_int;
	func_12029(var_5562_int, 530560, 530559, var_5565_float);
	var_5562_int = var_5560_int;
}


// @pe
void func_6517(int var_1673_int, int var_1674_int, object var_1675_object, object var_1676_object, object var_1677_object, object var_1678_object)
{
	if(var_1674_int == 0) {
		func_760(11, false);
		func_777(11, false, 1);
		int var_1686_int; int var_1687_int; object var_1688_object; object var_1689_object; object var_1690_object;
		var_1686_int = 11;
		var_1673_int = var_1687_int;
		var_1675_object = var_1688_object;
		var_1676_object = var_1689_object;
		var_1677_object = var_1690_object;
		func_586(var_1687_int, var_1688_object, var_1689_object, var_1690_object);
		object var_1691_object;
		var_1678_object = var_1691_object;
		func_270(var_1691_object, 0);
		func_834(11, false, 5);
		func_896(11, false, 5);
	}
	int var_1700_int;
	var_1674_int = var_1700_int;
	func_947(11, var_1700_int);
	int var_1702_int; int var_1703_int;
	var_1673_int = var_1702_int;
	var_1674_int = var_1703_int;
	func_1571(11, var_1702_int, var_1703_int);
}


void func_376(int var_81_int)
{
	int var_87_int;
	var_81_int = var_87_int;
	string var_86_string;
	func_264(var_86_string, var_87_int);
	int var_84_int;
	@GetVariable(var_86_string, var_84_int);
	string var_91_string; int var_92_int;
	var_81_int = var_92_int;
	func_264(var_91_string, var_92_int);
	@SetVariable(var_91_string, ((var_84_int & 252) | 0));
}


// @pe
void func_9593(int var_5571_int, float var_5572_float)
{
	float var_5576_float;
	var_5572_float = var_5576_float;
	int var_5573_int;
	func_12029(var_5573_int, 530562, 530561, var_5576_float);
	var_5573_int = var_5571_int;
}


// @pe
void func_11643(bool var_5480_bool)
{
	int var_5483_int;
	func_106(var_5483_int, "b9q03");
	if(var_5483_int == 0) {
		var_5480_bool = true;
		return 0;
	}
	var_5480_bool = false;
}


// @pe
void func_9602(int var_5582_int, float var_5583_float)
{
	float var_5587_float;
	var_5583_float = var_5587_float;
	int var_5584_int;
	func_12029(var_5584_int, 530564, 530563, var_5587_float);
	var_5584_int = var_5582_int;
}


// @pe
void func_4484(int var_3195_int, int var_3196_int, object var_3197_object, object var_3198_object, object var_3199_object, object var_3200_object)
{
	if(var_3196_int == 0) {
		func_760(0, false);
		func_777(0, false, 1);
		int var_3209_int; object var_3210_object; object var_3211_object; object var_3212_object;
		var_3195_int = var_3209_int;
		var_3197_object = var_3210_object;
		var_3198_object = var_3211_object;
		var_3199_object = var_3212_object;
		func_684(0, var_3209_int, var_3210_object, var_3211_object, var_3212_object);
		object var_3247_object;
		var_3200_object = var_3247_object;
		func_270(var_3247_object, 2);
		func_834(0, false, 4);
		func_896(0, true, 4);
	}
	func_743(0, false);
	int var_3258_int; int var_3259_int;
	var_3195_int = var_3258_int;
	var_3196_int = var_3259_int;
	func_4028(0, var_3258_int, var_3259_int);
}


// @pe
void func_11655(bool var_5507_bool)
{
	int var_5510_int;
	func_106(var_5510_int, "b11q04");
	if(var_5510_int == 0) {
		var_5507_bool = true;
		return 0;
	}
	var_5507_bool = false;
}


void func_3464(int var_4166_int, int var_4167_int, int var_4168_int)
{
	int var_4173_int; int var_4174_int; int var_4175_int; int var_4176_int;
	bool var_4177_bool = false;
	if(var_4168_int > 8) {
		if(var_4168_int < 21)
			var_4177_bool = true;
	}
	if(var_4177_bool != 0) {
		int var_4182_int;
		var_4166_int = var_4182_int;
		func_467(var_4182_int, "pers_rat", "rat.xml", 3);
		int var_4186_int;
		var_4166_int = var_4186_int;
		func_467(var_4186_int, "pers_alkash", "alkash.xml", 2);
		int var_4190_int;
		var_4166_int = var_4190_int;
		func_467(var_4190_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_4195_float; int var_4196_int;
		func_1098(var_4195_float, var_4196_int);
		if((2 * var_4195_float) != 0) {
			int var_4198_int; int var_4201_int;
			var_4166_int = var_4198_int;
			var_4173_int = var_4201_int;
			func_467(var_4198_int, "pers_grabitel", "grabitel.xml", var_4201_int);
		}
		if((var_4196_int + 1) >= 2) {
			int var_4206_int;
			var_4166_int = var_4206_int;
			func_467(var_4206_int, "pers_patrool", "patrol.xml", 2);
			bool var_4210_bool; int var_4211_int;
			var_4167_int = var_4211_int;
			func_1305(var_4210_bool, var_4211_int);
			if(var_4210_bool != 0) {
				int var_4212_int;
				var_4166_int = var_4212_int;
				func_467(var_4212_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_4217_float; int var_4218_int;
		func_1188(var_4217_float, var_4218_int);
		if((1 * var_4217_float) != 0) {
			int var_4220_int; int var_4223_int;
			var_4166_int = var_4220_int;
			var_4174_int = var_4223_int;
			func_467(var_4220_int, "pers_bomber", "bomber.xml", var_4223_int);
		}
	} else {
		int var_4237_int;
		var_4166_int = var_4237_int;
		func_467(var_4237_int, "pers_rat", "rat.xml", 5);
		int var_4241_int;
		var_4166_int = var_4241_int;
		func_467(var_4241_int, "pers_alkash", "alkash.xml", 1);
		if((var_4218_int + 1) >= 2) {
			int var_4249_int;
			var_4166_int = var_4249_int;
			func_467(var_4249_int, "pers_patrool", "patrol.xml", 1);
			bool var_4253_bool; int var_4254_int;
			var_4167_int = var_4254_int;
			func_1305(var_4253_bool, var_4254_int);
			if(var_4253_bool != 0) {
				int var_4255_int;
				var_4166_int = var_4255_int;
				func_467(var_4255_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		int var_4259_int;
		var_4166_int = var_4259_int;
		func_467(var_4259_int, "pers_rat", "rat.xml", 2);
		float var_4264_float; int var_4265_int;
		var_4167_int = var_4265_int;
		func_1098(var_4264_float, var_4265_int);
		if((3 * var_4264_float) != 0) {
			int var_4267_int; int var_4270_int;
			var_4166_int = var_4267_int;
			var_4175_int = var_4270_int;
			func_467(var_4267_int, "pers_grabitel", "grabitel.xml", var_4270_int);
		}
		float var_4272_float; int var_4273_int;
		var_4167_int = var_4273_int;
		func_1188(var_4272_float, var_4273_int);
		if((1 * var_4272_float) == 0) goto Label_3626;
		int var_4275_int; int var_4278_int;
		var_4166_int = var_4275_int;
		var_4176_int = var_4278_int;
		func_467(var_4275_int, "pers_bomber", "bomber.xml", var_4278_int);
	}
Label_3626:
	bool var_4224_bool; int var_4225_int; int var_4226_int;
	var_4167_int = var_4225_int;
	var_4168_int = var_4226_int;
	func_1278(var_4224_bool, var_4225_int, var_4226_int);
	if(var_4224_bool != 0) {
		int var_4227_int;
		var_4166_int = var_4227_int;
		func_467(var_4227_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_4231_bool; int var_4232_int;
	var_4167_int = var_4232_int;
	func_1305(var_4231_bool, var_4232_int);
	if(var_4231_bool != 0) {
		int var_4233_int;
		var_4166_int = var_4233_int;
		func_467(var_4233_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


void func_394(bool var_1988_bool, int var_1989_int)
{
	int var_1993_int;
	var_1989_int = var_1993_int;
	string var_1992_string;
	func_264(var_1992_string, var_1993_int);
	int var_1991_int;
	@GetVariable(var_1992_string, var_1991_int);
	var_1988_bool = (var_1991_int & 3) == 1;
}


void func_10634(void)
{
	object var_5089_object;
	func_12037(var_5089_object);
	object var_5087_object;
	var_5089_object = var_5087_object;
	object var_5088_object;
	var_5087_object->FindMark(var_5088_object, "b3q01BigVladGotoOspina");
	if(var_5088_object != 0)
		var_5088_object->Remove();
	var_5087_object->FindMark(var_5088_object, "b3q01ButcherGotoBigVlad");
	if(var_5088_object != 0)
		var_5088_object->Remove();
	var_5087_object->FindMark(var_5088_object, "b3q01OspinaGotoButcher");
	if(var_5088_object != 0)
		var_5088_object->Remove();
	var_5087_object->FindMark(var_5088_object, "b3q02GrifGotoDanko");
	if(var_5088_object != 0)
		var_5088_object->Remove();
	var_5087_object->FindMark(var_5088_object, "b3q02GrifGotoNotkin");
	if(var_5088_object != 0)
		var_5088_object->Remove();
	var_5087_object->FindMark(var_5088_object, "b3q02KapellaGotoNotkin");
	if(var_5088_object != 0)
		var_5088_object->Remove();
	var_5087_object->FindMark(var_5088_object, "b3q02NotkinGotoKapella");
	if(var_5088_object != 0)
		var_5088_object->Remove();
	var_5087_object->FindMark(var_5088_object, "b3q03BurahHome");
	if(var_5088_object != 0)
		var_5088_object->Remove();
	bool var_5106_bool;
	func_12012(var_5106_bool, 221);
	bool var_5108_bool;
	func_12012(var_5108_bool, 227);
	bool var_5110_bool;
	func_12012(var_5110_bool, 235);
	bool var_5112_bool;
	func_12012(var_5112_bool, 631);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9611(int var_5593_int, float var_5594_float)
{
	float var_5598_float;
	var_5594_float = var_5598_float;
	int var_5595_int;
	func_12029(var_5595_int, 530566, 530565, var_5598_float);
	var_5595_int = var_5593_int;
}


void func_8594(void)
{
	object var_4347_object;
	@GetMainOutdoorScene(var_4347_object);
	object var_4348_object;
	@AddScriptedActor(var_4348_object, "big_gun", "big_gun.bin", var_4347_object, [0.0, 0.0, 0.0]);
	@AddScriptedActor(var_4348_object, "vagon_martira", "big_gun.bin", var_4347_object, [0.0, 0.0, 0.0]);
	@AddScriptedActor(var_4348_object, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", var_4347_object, [0.0, 0.0, 0.0]);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5522(int var_2628_int, int var_2629_int, object var_2630_object, object var_2631_object, object var_2632_object, object var_2633_object)
{
	if(var_2629_int == 0) {
		func_760(5, true);
		func_777(5, true, 1);
		int var_2642_int; object var_2643_object; object var_2644_object; object var_2645_object;
		var_2628_int = var_2642_int;
		var_2630_object = var_2643_object;
		var_2631_object = var_2644_object;
		var_2632_object = var_2645_object;
		func_605(5, var_2642_int, var_2643_object, var_2644_object, var_2645_object);
		object var_2646_object;
		var_2633_object = var_2646_object;
		func_270(var_2646_object, 1);
		func_834(5, true, 4);
		func_896(5, false, 4);
	}
	func_743(5, false);
	int var_2657_int; int var_2658_int;
	var_2628_int = var_2657_int;
	var_2629_int = var_2658_int;
	func_2937(5, var_2657_int, var_2658_int);
}


// @pe
void func_11667(bool var_5645_bool)
{
	int var_5648_int;
	func_106(var_5648_int, "b3KapellaVisit");
	if(var_5648_int != 0) {
		var_5645_bool = true;
		return 0;
	}
	var_5645_bool = false;
}


// @pe
void func_9620(int var_5604_int, float var_5605_float)
{
	float var_5609_float;
	var_5605_float = var_5609_float;
	int var_5606_int;
	func_12029(var_5606_int, 530568, 530567, var_5609_float);
	var_5606_int = var_5604_int;
}


void func_406(int var_24_int)
{
	int var_30_int;
	var_24_int = var_30_int;
	string var_29_string;
	func_264(var_29_string, var_30_int);
	int var_27_int;
	@GetVariable(var_29_string, var_27_int);
	string var_37_string; int var_38_int;
	var_24_int = var_38_int;
	func_264(var_37_string, var_38_int);
	@SetVariable(var_37_string, ((var_27_int & 252) | 1));
}


// @pe
void func_9629(int var_4868_int, float var_4869_float)
{
	float var_4873_float;
	var_4869_float = var_4873_float;
	int var_4870_int;
	func_12029(var_4870_int, 521908, 521907, var_4873_float);
	var_4870_int = var_4868_int;
}


// @pe
void func_11679(bool var_5661_bool)
{
	int var_5664_int;
	func_106(var_5664_int, "b8GeorgVisit");
	if(var_5664_int != 0) {
		var_5661_bool = true;
		return 0;
	}
	var_5661_bool = false;
}


// @pe
void func_9638(int var_5685_int, float var_5686_float)
{
	float var_5690_float;
	var_5686_float = var_5690_float;
	int var_5687_int;
	func_12029(var_5687_int, 530492, 530491, var_5690_float);
	var_5687_int = var_5685_int;
}


void func_8615(bool var_2_bool, int var_3_int)
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
		func_14431(var_23_int);
		var_2_bool = true;
		return 12;
	}
	bool var_202_bool = false;
	if(var_3_int > 32768) {
		if(var_3_int < 33056)
			var_202_bool = true;
	}
	if(var_202_bool != 0) {
		var_12_int = (var_3_int - 32768) / 24;
		var_13_int = (var_3_int - 32768) % 24;
		@GetGameTime(var_14_float);
		var_15_int = var_14_float / 24;
		var_14_float = var_16_int;
		var_16_int = var_16_int % 24;
		int var_215_int; int var_216_int; int var_217_int; int var_218_int;
		var_12_int = var_215_int;
		var_13_int = var_216_int;
		var_15_int = var_217_int;
		var_16_int = var_218_int;
		func_8753(var_215_int, var_216_int, var_217_int, var_218_int);
		var_2_bool = true;
		return 12;
	}
	var_2_bool = false;
}


void func_424(bool var_72_bool, int var_73_int)
{
	int var_77_int;
	var_73_int = var_77_int;
	string var_76_string;
	func_264(var_76_string, var_77_int);
	int var_75_int;
	@GetVariable(var_76_string, var_75_int);
	var_72_bool = (var_75_int & 3) == 2;
}


// @pe
void func_6569(int var_2909_int, int var_2910_int, object var_2911_object, object var_2912_object, object var_2913_object, object var_2914_object)
{
	if(var_2910_int == 0) {
		func_760(11, false);
		func_777(11, true, 1);
		int var_2923_int; object var_2924_object; object var_2925_object; object var_2926_object;
		var_2909_int = var_2923_int;
		var_2911_object = var_2924_object;
		var_2912_object = var_2925_object;
		var_2913_object = var_2926_object;
		func_605(11, var_2923_int, var_2924_object, var_2925_object, var_2926_object);
		object var_2927_object;
		var_2914_object = var_2927_object;
		func_270(var_2927_object, 1);
		func_834(11, true, 5);
		func_896(11, false, 5);
	}
	func_743(11, false);
	int var_2938_int; int var_2939_int;
	var_2909_int = var_2938_int;
	var_2910_int = var_2939_int;
	func_2757(11, var_2938_int, var_2939_int);
}


void func_7595(int var_4536_int)
{
	object var_4552_object;
	var_4553_object = GlobalVars[14];
	int var_4545_int;
	var_4553_object->size(var_4545_int);
	bool var_4554_bool = true;
	var_4555_bool = var_4536_int >= var_4545_int;
	if(var_4555_bool != 1) {
		var_4557_bool = var_4536_int == -1;
		if(var_4557_bool != 1)
			var_4554_bool = false;
	}
	if(var_4554_bool != 0) {
		@Trace("Wrong bonfire index " + var_4536_int);
		return 16;
	}
	var_4560_object = GlobalVars[14];
	object var_4546_object;
	var_4560_object->get(var_4546_object, var_4536_int);
	object var_4547_object;
	@FindActor(var_4547_object, ("bonfire_light" + (var_4536_int + 1)));
	if(!var_4547_object) //@nz
		@Trace(("Bofire  light " + (var_4536_int + 1)) + " not found");
	else
		var_4547_object->Switch(true);
	object var_4548_object;
	@GetMainOutdoorScene(var_4548_object);
	cvector var_4549_cvector;
	cvector var_4550_cvector;
	bool var_4551_bool;
	var_4548_object->GetLocator(("pt_bonfire" + (var_4536_int + 1)), var_4551_bool, var_4549_cvector, var_4550_cvector);
	if(!var_4551_bool) { //@nz
		@Trace("Locator for bonfire doesn't exist");
		return 16;
	}
	if(!var_4546_object) { //@nz
		@AddActorByType(var_4552_object, "scripted", var_4548_object, var_4549_cvector, var_4550_cvector, "bonfire_big.xml");
		var_4581_object = GlobalVars[14];
		var_4581_object->set(var_4536_int, var_4552_object);
		var_4552_object = null;
	}
	@Trace(("Setting bonfire " + (var_4536_int + 1)) + "... ok");
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


// @pe
void func_11691(bool var_5677_bool)
{
	int var_5680_int;
	func_106(var_5680_int, "b10MatVisit");
	if(var_5680_int != 0) {
		var_5677_bool = true;
		return 0;
	}
	var_5677_bool = false;
}


// @pe
void func_9647(int var_5615_int, float var_5616_float)
{
	float var_5620_float;
	var_5616_float = var_5620_float;
	int var_5617_int;
	func_12029(var_5617_int, 530570, 530569, var_5620_float);
	var_5617_int = var_5615_int;
}


void func_436(int var_76_int)
{
	int var_82_int;
	var_76_int = var_82_int;
	string var_81_string;
	func_264(var_81_string, var_82_int);
	int var_79_int;
	@GetVariable(var_81_string, var_79_int);
	string var_86_string; int var_87_int;
	var_76_int = var_87_int;
	func_264(var_86_string, var_87_int);
	@SetVariable(var_86_string, ((var_79_int & 252) | 2));
}


// @pe
void func_11703(bool var_5693_bool)
{
	int var_5696_int;
	func_106(var_5696_int, "b6ViktorVisit");
	if(var_5696_int != 0) {
		var_5693_bool = true;
		return 0;
	}
	var_5693_bool = false;
}


// @pe
void func_4536(object var_63_object)
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


// @pe
void func_9656(int var_5419_int, float var_5420_float)
{
	float var_5424_float;
	var_5420_float = var_5424_float;
	int var_5421_int;
	func_12029(var_5421_int, 529890, 529889, var_5424_float);
	var_5421_int = var_5419_int;
}


// @pe
void func_9665(int var_5403_int, float var_5404_float)
{
	float var_5408_float;
	var_5404_float = var_5408_float;
	int var_5405_int;
	func_12029(var_5405_int, 529894, 529893, var_5408_float);
	var_5405_int = var_5403_int;
}


// @pe
void func_11715(bool var_5753_bool)
{
	int var_5756_int;
	func_106(var_5756_int, "b2AndreiVisit");
	if(var_5756_int != 0) {
		var_5753_bool = true;
		return 0;
	}
	var_5753_bool = false;
}


void func_454(int var_485_int)
{
	object var_487_object;
	@GetMainOutdoorScene(var_487_object);
	if(var_487_object == null)
		@Trace("City manager: main outdoor scene not found");
	var_487_object->RemoveAllRegionActors(var_485_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5574(int var_3754_int, int var_3755_int, object var_3756_object, object var_3757_object, object var_3758_object, object var_3759_object)
{
	if(var_3755_int == 0) {
		func_760(5, false);
		func_777(5, false, 1);
		int var_3768_int; object var_3769_object; object var_3770_object; object var_3771_object;
		var_3754_int = var_3768_int;
		var_3756_object = var_3769_object;
		var_3757_object = var_3770_object;
		var_3758_object = var_3771_object;
		func_684(5, var_3768_int, var_3769_object, var_3770_object, var_3771_object);
		object var_3772_object;
		var_3759_object = var_3772_object;
		func_270(var_3772_object, 2);
		func_834(5, false, 4);
		func_896(5, true, 4);
	}
	func_743(5, false);
	int var_3783_int; int var_3784_int;
	var_3754_int = var_3783_int;
	var_3755_int = var_3784_int;
	func_3840(5, var_3783_int, var_3784_int);
}


// @pe
void func_9674(int var_5427_int, float var_5428_float)
{
	float var_5432_float;
	var_5428_float = var_5432_float;
	int var_5429_int;
	func_12029(var_5429_int, 529888, 529887, var_5432_float);
	var_5429_int = var_5427_int;
}


// @pe
void func_11727(bool var_5783_bool)
{
	int var_5786_int;
	func_106(var_5786_int, "b4Spi4kaVisit");
	if(var_5786_int != 0) {
		var_5783_bool = true;
		return 0;
	}
	var_5783_bool = false;
}


void func_467(int var_781_int, string var_782_string, string var_783_string, int var_784_int)
{
	object var_786_object;
	@GetMainOutdoorScene(var_786_object);
	if(var_786_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_786_object->SetRegionActorCount(var_781_int, var_782_string, var_783_string, var_784_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9683(int var_4886_int, float var_4887_float)
{
	float var_4891_float;
	var_4887_float = var_4891_float;
	int var_4888_int;
	func_12029(var_4888_int, 522099, 522098, var_4891_float);
	var_4888_int = var_4886_int;
}


void func_10714(void)
{
	object var_5026_object;
	func_12037(var_5026_object);
	object var_5024_object;
	var_5026_object = var_5024_object;
	object var_5025_object;
	var_5024_object->FindMark(var_5025_object, "b4q01DankoGotoLara");
	if(var_5025_object != 0)
		var_5025_object->Remove();
	var_5024_object->FindMark(var_5025_object, "b4q01DankoGotoLaraSelf");
	if(var_5025_object != 0)
		var_5025_object->Remove();
	var_5024_object->FindMark(var_5025_object, "b4q01LaraGotoRubin");
	if(var_5025_object != 0)
		var_5025_object->Remove();
	var_5024_object->FindMark(var_5025_object, "b4Spi4kaMapMark");
	if(var_5025_object != 0)
		var_5025_object->Remove();
	bool var_5035_bool;
	func_12012(var_5035_bool, 213);
	bool var_5037_bool;
	func_12012(var_5037_bool, 216);
	bool var_5039_bool;
	func_12012(var_5039_bool, 527);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_11739(bool var_5811_bool)
{
	int var_5814_int;
	func_106(var_5814_int, "b10KapellaVisit");
	if(var_5814_int != 0) {
		var_5811_bool = true;
		return 0;
	}
	var_5811_bool = false;
}


// @pe
void func_9692(int var_5411_int, float var_5412_float)
{
	float var_5416_float;
	var_5412_float = var_5416_float;
	int var_5413_int;
	func_12029(var_5413_int, 529892, 529891, var_5416_float);
	var_5413_int = var_5411_int;
}


// @pe
void func_6621(int var_4039_int, int var_4040_int, object var_4041_object, object var_4042_object, object var_4043_object, object var_4044_object)
{
	if(var_4040_int == 0) {
		func_760(11, true);
		func_777(11, false, 1);
		int var_4053_int; object var_4054_object; object var_4055_object; object var_4056_object;
		var_4039_int = var_4053_int;
		var_4041_object = var_4054_object;
		var_4042_object = var_4055_object;
		var_4043_object = var_4056_object;
		func_684(11, var_4053_int, var_4054_object, var_4055_object, var_4056_object);
		object var_4057_object;
		var_4044_object = var_4057_object;
		func_270(var_4057_object, 2);
		func_834(11, false, 5);
		func_896(11, true, 5);
	}
	func_743(11, false);
	int var_4068_int; int var_4069_int;
	var_4039_int = var_4068_int;
	var_4040_int = var_4069_int;
	func_3652(11, var_4068_int, var_4069_int);
}


void func_8670(void)
{
	float var_422_float; int var_424_int; float var_425_float; int var_426_int; object var_427_object; object var_428_object;
	@GetGameTime(var_422_float);
	int var_423_int = 1;
	
	while(var_423_int < 12) {
		@SetTimeEvent((16384 + var_423_int), (24 * var_423_int));
		var_423_int += 1;
	}
	
	
	for(;;) {
		if(0 < 288) {
			var_424_int = var_425_float;
			if(var_425_float < var_422_float) {
			} else {
			@SetTimeEvent((32768 + var_424_int), var_425_float);
		}

		while(0 < 16) {
			string var_444_string; int var_445_int;
			var_426_int = var_445_int;
			func_264(var_444_string, var_445_int);
			@SetVariable(var_444_string, 0);
			int var_450_int;
			var_426_int = var_450_int;
			func_760(var_450_int, false);
			var_426_int += 1;
		}

		int var_463_int; int var_465_int;
		var_463_int = var_422_float % 24;
		var_465_int = var_422_float % 24;
		func_8753(0, var_463_int, 0, var_465_int);
		@FindActor(var_427_object, "dt_house_1_07");
		var_427_object->EnableSubset(200, false);
		@GetMainOutdoorScene(var_428_object);
		bool var_4369_bool = true;
		var_4371_bool = var_422_float < 7;
		if(var_4371_bool != 1) {
			var_4373_bool = var_422_float >= 20;
			if(var_4373_bool != 1)
				var_4369_bool = false;
		}
		var_428_object->SwitchLights(0, var_4369_bool);
		}
		var_424_int += 1;
	}
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_480(int var_2224_int, string var_2225_string, string var_2226_string, int var_2227_int, int var_2228_int, int var_2229_int)
{
	object var_2231_object;
	@GetMainOutdoorScene(var_2231_object);
	if(var_2231_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_2231_object->SetRegionActorCount(var_2224_int, var_2225_string, var_2226_string, var_2227_int, var_2228_int, var_2229_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4577(int var_876_int, int var_877_int, object var_878_object, object var_879_object, object var_880_object, object var_881_object)
{
	if(var_877_int == 0) {
		func_760(1, false);
		func_777(1, false, 1);
		int var_889_int; int var_890_int; object var_891_object; object var_892_object; object var_893_object;
		var_889_int = 1;
		var_876_int = var_890_int;
		var_878_object = var_891_object;
		var_879_object = var_892_object;
		var_880_object = var_893_object;
		func_586(var_890_int, var_891_object, var_892_object, var_893_object);
		object var_894_object;
		var_881_object = var_894_object;
		func_270(var_894_object, 0);
		func_834(1, false, 8);
		func_896(1, false, 8);
	}
	int var_903_int;
	var_877_int = var_903_int;
	func_1014(1, var_903_int);
	int var_905_int; int var_906_int;
	var_876_int = var_905_int;
	var_877_int = var_906_int;
	func_2362(1, var_905_int, var_906_int);
}


// @pe
void func_9701(int var_5514_int, float var_5515_float)
{
	float var_5519_float;
	var_5515_float = var_5519_float;
	int var_5516_int;
	func_12029(var_5516_int, 530533, 530532, var_5519_float);
	var_5516_int = var_5514_int;
}


// @pe
void func_11751(bool var_6101_bool)
{
	int var_6104_int;
	func_106(var_6104_int, "b9BlockVisit");
	if(var_6104_int != 0) {
		var_6101_bool = true;
		return 0;
	}
	var_6101_bool = false;
}


void func_493(int var_2151_int, string var_2152_string, string var_2153_string, int var_2154_int)
{
	object var_2156_object;
	@GetMainOutdoorScene(var_2156_object);
	if(var_2156_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_2156_object->SetRegionActorCountByType(var_2151_int, var_2152_string, var_2153_string, var_2154_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9710(int var_5626_int, float var_5627_float)
{
	float var_5631_float;
	var_5627_float = var_5631_float;
	int var_5628_int;
	func_12029(var_5628_int, 530572, 530571, var_5631_float);
	var_5628_int = var_5626_int;
}


// @pe
void func_11763(bool var_5709_bool)
{
	int var_5712_int;
	func_106(var_5712_int, "b5MladVladVisit");
	if(var_5712_int != 0) {
		var_5709_bool = true;
		return 0;
	}
	var_5709_bool = false;
}


// @pe
void func_9719(int var_4942_int, float var_4943_float)
{
	float var_4947_float;
	var_4943_float = var_4947_float;
	int var_4944_int;
	func_12029(var_4944_int, 522713, 522712, var_4947_float);
	var_4944_int = var_4942_int;
}


void func_7672(int var_377_int)
{
	var_384_object = GlobalVars[14];
	int var_381_int;
	var_384_object->size(var_381_int);
	bool var_385_bool = true;
	var_386_bool = var_377_int >= var_381_int;
	if(var_386_bool != 1) {
		var_388_bool = var_377_int == -1;
		if(var_388_bool != 1)
			var_385_bool = false;
	}
	if(var_385_bool != 0)
		@Trace("Wrong bonfire index " + var_377_int);
	var_391_object = GlobalVars[14];
	object var_382_object;
	var_391_object->get(var_382_object, var_377_int);
	object var_383_object;
	@FindActor(var_383_object, ("bonfire_light" + (var_377_int + 1)));
	if(!var_383_object) //@nz
		@Trace(("Bofire  light " + (var_377_int + 1)) + " not found");
	else
		var_383_object->Switch(false);
	if(var_382_object != 0)
		@RemoveActor(var_382_object);
	var_404_object = GlobalVars[14];
	var_404_object->set(var_377_int, Obj());
	@Trace(("Cleanup bonfire " + (var_377_int + 1)) + "... ok");
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_506(int var_569_int, bool var_570_bool)
{
	object var_575_object; bool var_577_bool; object var_578_object;
	@GetMainOutdoorScene(var_575_object);
	object var_576_object;
	var_575_object->GetGroupActors(var_576_object, (101 + var_569_int));
	if(var_576_object != 0) {

		for(;;) {
			var_576_object->Next(var_577_bool, var_578_object);
			if(var_577_bool != 0) {
				bool var_583_bool; object var_584_object;
				var_578_object = var_584_object;
				func_88(var_583_bool, var_584_object, "locked");
				if(var_583_bool != 0)
					var_578_object->SetProperty("locked", var_570_bool);
				else
					@Trace(("Actor \"" + var_578_object) + "\" can't be locked");
			var_578_object = null;
	}
		}
	}
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_5626(void)
{
}


// @pe
void func_5628(int var_1377_int)
{
	int var_1383_int;
	var_1377_int = var_1383_int;
	func_1014(6, var_1383_int);
}


// @pe
void func_11775(bool var_6129_bool)
{
	int var_6132_int;
	func_106(var_6132_int, "resque_list");
	if(var_6132_int != 0) {
		var_6129_bool = true;
		return 0;
	}
	var_6129_bool = false;
}


// @pe
void func_9728(int var_4902_int, float var_4903_float)
{
	float var_4907_float;
	var_4903_float = var_4907_float;
	int var_4904_int;
	func_12029(var_4904_int, 522715, 522714, var_4907_float);
	var_4904_int = var_4902_int;
}


// @pe
void func_5635(void)
{
	func_743(6, false);
}


// @pe
void func_9737(int var_4918_int, float var_4919_float)
{
	float var_4923_float;
	var_4919_float = var_4923_float;
	int var_4920_int;
	func_12029(var_4920_int, 522719, 522718, var_4923_float);
	var_4920_int = var_4918_int;
}


void func_10762(void)
{
	object var_4998_object;
	func_12037(var_4998_object);
	object var_4996_object;
	var_4998_object = var_4996_object;
	object var_4997_object;
	var_4996_object->FindMark(var_4997_object, "b5q01DankoGotoAndrei");
	if(var_4997_object != 0)
		var_4997_object->Remove();
	var_4996_object->FindMark(var_4997_object, "b5q01DankoGotoOspina");
	if(var_4997_object != 0)
		var_4997_object->Remove();
	var_4996_object->FindMark(var_4997_object, "b5q01VeraGotoStvorki");
	if(var_4997_object != 0)
		var_4997_object->Remove();
	var_4996_object->FindMark(var_4997_object, "b5q01GathererWife");
	if(var_4997_object != 0)
		var_4997_object->Remove();
	bool var_5007_bool;
	func_12012(var_5007_bool, 238);
	bool var_5009_bool;
	func_12012(var_5009_bool, 249);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5642(void)
{
	func_743(6, false);
}


// @pe
void func_11787(bool var_4974_bool)
{
	int var_4977_int;
	func_106(var_4977_int, "b3BigVladVisit");
	if(var_4977_int != 0) {
		var_4974_bool = true;
		return 0;
	}
	var_4974_bool = false;
}


void func_2577(int var_3036_int, int var_3037_int, int var_3038_int)
{
	int var_3041_int; int var_3042_int;
	bool var_3043_bool = false;
	if(var_3038_int > 8) {
		if(var_3038_int < 21)
			var_3043_bool = true;
	}
	if(var_3043_bool != 0) {
		int var_3048_int;
		var_3036_int = var_3048_int;
		func_467(var_3048_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_3052_int;
		var_3036_int = var_3052_int;
		func_467(var_3052_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		int var_3056_int;
		var_3036_int = var_3056_int;
		func_467(var_3056_int, "pers_rat_big", "rat_big.xml", 3);
		int var_3060_int;
		var_3036_int = var_3060_int;
		func_493(var_3060_int, "fog", "fog.xml", 8);
		if(var_3037_int >= 5) {
			int var_3066_int;
			var_3036_int = var_3066_int;
			func_493(var_3066_int, "fog", "fog_hunter.xml", 3);
		}
		float var_3071_float; int var_3072_int;
		func_1188(var_3071_float, var_3072_int);
		if((1 * var_3071_float) != 0) {
			int var_3074_int; int var_3077_int;
			var_3036_int = var_3074_int;
			var_3041_int = var_3077_int;
			func_467(var_3074_int, "pers_bomber", "bomber.xml", var_3077_int);
		}
	} else {
		int var_3115_int;
		var_3036_int = var_3115_int;
		func_467(var_3115_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_3119_int;
		var_3036_int = var_3119_int;
		func_467(var_3119_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_3123_int;
		var_3036_int = var_3123_int;
		func_467(var_3123_int, "pers_rat_big", "rat_big.xml", 4);
		int var_3127_int;
		var_3036_int = var_3127_int;
		func_493(var_3127_int, "fog", "fog.xml", 6);
		if(var_3072_int >= 5) {
			int var_3133_int;
			var_3036_int = var_3133_int;
			func_493(var_3133_int, "fog", "fog_hunter.xml", 2);
		}
		float var_3138_float; int var_3139_int;
		var_3037_int = var_3139_int;
		func_1188(var_3138_float, var_3139_int);
		if((1 * var_3138_float) == 0) goto Label_2695;
		int var_3141_int; int var_3144_int;
		var_3036_int = var_3141_int;
		var_3042_int = var_3144_int;
		func_467(var_3141_int, "pers_bomber", "bomber.xml", var_3144_int);
	}
Label_2695:
	int var_3078_int;
	var_3036_int = var_3078_int;
	func_480(var_3078_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_3084_int;
	var_3036_int = var_3084_int;
	func_480(var_3084_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_3090_int;
	var_3036_int = var_3090_int;
	func_480(var_3090_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_3096_int;
	var_3036_int = var_3096_int;
	func_480(var_3096_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_3102_bool; int var_3103_int; int var_3104_int;
	var_3037_int = var_3103_int;
	var_3038_int = var_3104_int;
	func_1278(var_3102_bool, var_3103_int, var_3104_int);
	if(var_3102_bool != 0) {
		int var_3105_int;
		var_3036_int = var_3105_int;
		func_467(var_3105_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3109_bool; int var_3110_int;
	var_3037_int = var_3110_int;
	func_1305(var_3109_bool, var_3110_int);
	if(var_3109_bool != 0) {
		int var_3111_int;
		var_3036_int = var_3111_int;
		func_467(var_3111_int, "pers_sanitar", "sanitar.xml", 2);
	}
	
}


// @pe
void func_6673(object var_263_object)
{
	var_263_object->add("r6_house2_03");
	var_263_object->add("r6_house4_01_i2");
	var_263_object->add("r6_house4_02_i2");
	var_263_object->add("r6_house4_02");
	var_263_object->add("r6_house3_02_i2");
	var_263_object->add("r6_house3_02");
	var_263_object->add("r6_house3_01_i2");
	var_263_object->add("r6_house3_01");
	var_263_object->add("r6_house2_01");
	var_263_object->add("r6_house7_01");
	var_263_object->add("r6_house7_02");
	var_263_object->add("r6_House6_01");
	var_263_object->add("r6_house2_02");
}


// @pe
void func_5649(object var_175_object)
{
	var_175_object->add("House6_02");
	var_175_object->add("House6_01");
	var_175_object->add("house_2_01");
	var_175_object->add("house7_03");
	var_175_object->add("house7_02");
	var_175_object->add("house3_01_i2");
	var_175_object->add("house3_01");
	var_175_object->add("house_2_03");
	var_175_object->add("house_2_02");
	var_175_object->add("house4_01_i2");
	var_175_object->add("house4_01");
	var_175_object->add("House6_05");
	var_175_object->add("House6_04");
	var_175_object->add("House6_03");
}


// @pe
void func_9746(int var_4934_int, float var_4935_float)
{
	float var_4939_float;
	var_4935_float = var_4939_float;
	int var_4936_int;
	func_12029(var_4936_int, 522717, 522716, var_4939_float);
	var_4936_int = var_4934_int;
}


// @pe
void func_4629(int var_2284_int, int var_2285_int, object var_2286_object, object var_2287_object, object var_2288_object, object var_2289_object)
{
	if(var_2285_int == 0) {
		func_760(1, true);
		func_777(1, true, 1);
		int var_2298_int; object var_2299_object; object var_2300_object; object var_2301_object;
		var_2284_int = var_2298_int;
		var_2286_object = var_2299_object;
		var_2287_object = var_2300_object;
		var_2288_object = var_2301_object;
		func_605(1, var_2298_int, var_2299_object, var_2300_object, var_2301_object);
		object var_2302_object;
		var_2289_object = var_2302_object;
		func_270(var_2302_object, 1);
		func_834(1, true, 8);
		func_896(1, false, 8);
	}
	func_743(1, false);
	int var_2313_int; int var_2314_int;
	var_2284_int = var_2313_int;
	var_2285_int = var_2314_int;
	func_3297(1, var_2313_int, var_2314_int);
}


// @pe
void func_11799(bool var_6006_bool)
{
	int var_6009_int;
	func_106(var_6009_int, "b3DankoVisit");
	if(var_6009_int != 0) {
		var_6006_bool = true;
		return 0;
	}
	var_6006_bool = false;
}


// @pe
void func_9755(int var_5637_int, float var_5638_float)
{
	float var_5642_float;
	var_5638_float = var_5642_float;
	int var_5639_int;
	func_12029(var_5639_int, 530574, 530573, var_5642_float);
	var_5639_int = var_5637_int;
}


void func_540(string var_2039_string, object var_2040_object, string var_2041_string, string var_2042_string)
{
	object var_2054_object; bool var_2056_bool; cvector var_2057_cvector; cvector var_2058_cvector; object var_2059_object;
	@GetMainOutdoorScene(var_2054_object);
	int var_2055_int = 0;
	
	for(;;) {
		var_2054_object->GetLocator((var_2039_string + (var_2055_int + 1)), var_2056_bool, var_2057_cvector, var_2058_cvector);
		if(!var_2056_bool) //@nz
			break;
		var_2054_object->AddStationaryActor(var_2059_object, var_2057_cvector, var_2058_cvector, var_2041_string, var_2042_string);
		var_2040_object->add(var_2059_object);
		var_2059_object = null;
		var_2055_int += 1;
	}
}
EMIT "Stack[-6] = 0";


void func_1571(int var_1414_int, int var_1415_int, int var_1416_int)
{
	int var_1418_int;
	if((var_1415_int + 1) == 12)
		return 2;
	bool var_1423_bool = false;
	bool var_1424_bool = true;
	var_1426_bool = var_1416_int < 7;
	if(var_1426_bool != 1) {
		var_1428_bool = var_1416_int > 21;
		if(var_1428_bool != 1)
			var_1424_bool = false;
	}
	if(var_1424_bool != 0) {
		if(var_1415_int != 0)
			var_1423_bool = true;
	}
	if(var_1423_bool != 0) {
		float var_1432_float; int var_1433_int;
		var_1415_int = var_1433_int;
		func_1074(var_1432_float, var_1433_int);
		if((1 * var_1432_float) != 0) {
			int var_1435_int; int var_1438_int;
			var_1414_int = var_1435_int;
			var_1418_int = var_1438_int;
			func_467(var_1435_int, "pers_grabitel", "grabitel.xml", var_1438_int);
		}
	}
	bool var_1439_bool = false;
	bool var_1440_bool = false;
	if(var_1415_int == 0) {
		if(var_1416_int < 21)
			var_1440_bool = true;
	}
	if(var_1440_bool != 0) {
		int var_1445_int;
		func_12054(var_1445_int);
		if(var_1445_int == 1)
			var_1439_bool = true;
	}
	if(var_1439_bool != 0) {
		int var_1448_int;
		var_1414_int = var_1448_int;
		func_467(var_1448_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1452_int;
		var_1414_int = var_1452_int;
		func_467(var_1452_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1456_int;
		var_1414_int = var_1456_int;
		func_467(var_1456_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1460_int;
		var_1414_int = var_1460_int;
		func_467(var_1460_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1464_int;
		var_1414_int = var_1464_int;
		func_467(var_1464_int, "pers_woman", "woman.xml", 1);
		int var_1468_int;
		var_1414_int = var_1468_int;
		func_467(var_1468_int, "pers_boy", "boy.xml", 1);
		int var_1472_int;
		var_1414_int = var_1472_int;
		func_467(var_1472_int, "pers_girl", "girl.xml", 1);
		int var_1476_int;
		var_1414_int = var_1476_int;
		func_467(var_1476_int, "pers_girl", "girl2.xml", 1);
		int var_1480_int;
		var_1414_int = var_1480_int;
		func_467(var_1480_int, "pers_littleboy", "littleboy.xml", 1);
		int var_1484_int;
		var_1414_int = var_1484_int;
		func_467(var_1484_int, "pers_littlegirl", "littlegirl.xml", 1);
		int var_1488_int;
		var_1414_int = var_1488_int;
		func_467(var_1488_int, "pers_alkash", "alkash.xml", 1);
	} else {
			bool var_1499_bool = false;
			if(var_1416_int > 8) {
				if(var_1416_int < 21)
					var_1499_bool = true;
			}
			if(var_1499_bool == 0) goto Label_1794;
			int var_1504_int;
			var_1414_int = var_1504_int;
			func_467(var_1504_int, "pers_woman", "woman.xml", 1);
			int var_1508_int;
			var_1414_int = var_1508_int;
			func_467(var_1508_int, "pers_unosha", "unosha.xml", 1);
			int var_1512_int;
			var_1414_int = var_1512_int;
			func_467(var_1512_int, "pers_unosha", "unosha2.xml", 1);
			int var_1516_int;
			var_1414_int = var_1516_int;
			func_467(var_1516_int, "pers_boy", "boy.xml", 1);
			int var_1520_int;
			var_1414_int = var_1520_int;
			func_467(var_1520_int, "pers_girl", "girl.xml", 1);
			int var_1524_int;
			var_1414_int = var_1524_int;
			func_467(var_1524_int, "pers_girl", "girl2.xml", 1);
			int var_1528_int;
			var_1414_int = var_1528_int;
			func_467(var_1528_int, "pers_littleboy", "littleboy.xml", 1);
			int var_1532_int;
			var_1414_int = var_1532_int;
			func_467(var_1532_int, "pers_littlegirl", "littlegirl.xml", 1);
			int var_1536_int;
			var_1414_int = var_1536_int;
			func_467(var_1536_int, "pers_alkash", "alkash.xml", 1);
			if((var_1415_int + 1) >= 3) {
				int var_1544_int;
				var_1414_int = var_1544_int;
				func_467(var_1544_int, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
	}
Label_1834:
	for(;;) {
		bool var_1492_bool; int var_1493_int; int var_1494_int;
		var_1415_int = var_1493_int;
		var_1416_int = var_1494_int;
		func_1278(var_1492_bool, var_1493_int, var_1494_int);
		if(var_1492_bool != 0) {
			int var_1495_int;
			var_1414_int = var_1495_int;
			func_467(var_1495_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		return 2;

	}
	
Label_1794:
	int var_1548_int;
	var_1414_int = var_1548_int;
	func_467(var_1548_int, "pers_woman", "woman.xml", 1);
	int var_1552_int;
	var_1414_int = var_1552_int;
	func_467(var_1552_int, "pers_unosha", "unosha.xml", 1);
	int var_1556_int;
	var_1414_int = var_1556_int;
	func_467(var_1556_int, "pers_unosha", "unosha2.xml", 1);
	int var_1560_int;
	var_1414_int = var_1560_int;
	func_467(var_1560_int, "pers_alkash", "alkash.xml", 1);
	if(!((var_1415_int + 1) >= 3)) goto Label_1834;
	int var_1568_int;
	var_1414_int = var_1568_int;
	func_467(var_1568_int, "pers_dohodyaga", "dohodyaga.xml", 1);
}


// @pe
void func_9764(int var_4958_int, float var_4959_float)
{
	float var_4963_float;
	var_4959_float = var_4963_float;
	int var_4960_int;
	func_12029(var_4960_int, 529840, 529839, var_4963_float);
	var_4960_int = var_4958_int;
}


// @pe
void func_11811(bool var_6179_bool)
{
	int var_6182_int;
	func_106(var_6182_int, "b3NotkinVisit");
	if(var_6182_int != 0) {
		var_6179_bool = true;
		return 0;
	}
	var_6179_bool = false;
}


// @pe
void func_9773(int var_4764_int, float var_4765_float)
{
	float var_4769_float;
	var_4765_float = var_4769_float;
	int var_4766_int;
	func_12029(var_4766_int, 518132, 518131, var_4769_float);
	var_4766_int = var_4764_int;
}


// @pe
void func_11823(bool var_5359_bool)
{
	int var_5362_int;
	func_106(var_5362_int, "b8DankoVisit");
	if(var_5362_int != 0) {
		var_5359_bool = true;
		return 0;
	}
	var_5359_bool = false;
}


void func_8753(int var_462_int, int var_463_int, int var_464_int, int var_465_int)
{
	int var_473_int; object var_474_object; object var_475_object; object var_476_object; object var_477_object;
	@Trace("City update");
	bool var_479_bool = false;
	if(var_462_int == var_464_int) {
		if(var_463_int == var_465_int)
			var_479_bool = true;
	}
	if(var_479_bool != 0)
		@PlaySound("kolokol");
	
	for(;;) {
		if(0 < 16) {
			int var_485_int;
			var_473_int = var_485_int;
			func_454(var_485_int);
			bool var_490_bool; int var_491_int;
			var_473_int = var_491_int;
			func_364(var_490_bool, var_491_int);
			if(var_490_bool != 0) {
				int var_499_int; int var_500_int; int var_501_int;
				var_473_int = var_499_int;
				var_462_int = var_500_int;
				var_463_int = var_501_int;
				func_8873(var_499_int, var_500_int, var_501_int);
			} else {
			bool var_1988_bool; int var_1989_int;
			var_473_int = var_1989_int;
			func_394(var_1988_bool, var_1989_int);
			if(var_1988_bool != 0) {
				int var_1997_int; int var_1998_int; int var_1999_int;
				var_473_int = var_1997_int;
				var_462_int = var_1998_int;
				var_463_int = var_1999_int;
				func_9098(var_1997_int, var_1998_int, var_1999_int);
				goto Label_8806;
			}
			int var_3178_int; int var_3179_int; int var_3180_int;
			var_473_int = var_3178_int;
			var_462_int = var_3179_int;
			var_463_int = var_3180_int;
			func_9323(var_3178_int, var_3179_int, var_3180_int);
		}
		if(var_463_int == 0) {
			int var_4314_int;
			func_14583(var_4314_int);
			bool var_4344_bool = true;
			var_4346_bool = var_4314_int == 1;
			if(var_4346_bool != 1) {
				bool var_4347_bool;
				func_394(var_4347_bool, 5);
				if(var_4347_bool != 1)
					var_4344_bool = false;
			}
			if(var_4344_bool != 0) {
				@FindActor(var_474_object, "dt_house_1_07");
				var_474_object->EnableSubset(200, true);
				var_474_object = null;
			} else {
					@FindActor(var_475_object, "dt_house_1_07");
					var_475_object->EnableSubset(200, false);
					var_475_object = null;
			}
		}
		if(var_463_int == 7) {
			@Trace("day time");
			@GetMainOutdoorScene(var_476_object);
			var_476_object->SwitchLights(0, false);
			var_476_object = null;
		} else if(var_463_int == 20) {
			@Trace("night time");
			@GetMainOutdoorScene(var_477_object);
			var_477_object->SwitchLights(0, true);
			var_477_object = null;

		}
		}
	Label_8806:
		var_473_int += 1;
	}
	
}


void func_562(string var_2065_string, object var_2066_object)
{
	object var_2079_object; bool var_2081_bool; cvector var_2082_cvector; cvector var_2083_cvector; object var_2084_object;
	@GetMainOutdoorScene(var_2079_object);
	int var_2080_int = 0;
	
	for(;;) {
		var_2079_object->GetLocator((var_2065_string + (var_2080_int + 1)), var_2081_bool, var_2082_cvector, var_2083_cvector);
		if(!var_2081_bool) //@nz
			break;
		var_2079_object->AddStationaryActorByType(var_2084_object, var_2082_cvector, var_2083_cvector, "fog", "fog_stat.xml");
		var_2066_object->add(var_2084_object);
		var_2084_object = null;
		var_2080_int += 1;
	}
}
EMIT "Stack[-7] = 0";


void func_7732(object var_4397_object, object var_4398_object, string var_4399_string, string var_4400_string, string var_4401_string)
{
	bool var_4407_bool; cvector var_4408_cvector; cvector var_4409_cvector; object var_4410_object;
	var_4398_object->GetLocator(("pt_guard_" + var_4399_string), var_4407_bool, var_4408_cvector, var_4409_cvector);
	if(!var_4407_bool) //@nz
		@Trace("Locator doesn't exist for guard " + var_4399_string);
	else
		var_4398_object->AddStationaryActor(var_4410_object, var_4408_cvector, var_4409_cvector, var_4400_string, var_4401_string);
	var_4410_object = var_4397_object;
	
}
EMIT "Stack[-1] = 0";


void func_10806(void)
{
	object var_5210_object;
	func_12037(var_5210_object);
	object var_5208_object;
	var_5210_object = var_5208_object;
	object var_5209_object;
	var_5208_object->FindMark(var_5209_object, "b6q01KlaraGotoTermitnik2");
	if(var_5209_object != 0)
		var_5209_object->Remove();
	var_5208_object->FindMark(var_5209_object, "b6q02KlaraGotoRat");
	if(var_5209_object != 0)
		var_5209_object->Remove();
	var_5208_object->FindMark(var_5209_object, "b6q03MariaGotoNina");
	if(var_5209_object != 0)
		var_5209_object->Remove();
	var_5208_object->FindMark(var_5209_object, "b6q03ViktorGotoMaria");
	if(var_5209_object != 0)
		var_5209_object->Remove();
	var_5208_object->FindMark(var_5209_object, "b6q02LetterGotoAnna");
	if(var_5209_object != 0)
		var_5209_object->Remove();
	var_5208_object->FindMark(var_5209_object, "b6q01MatGotoByk");
	if(var_5209_object != 0)
		var_5209_object->Remove();
	bool var_5223_bool;
	func_12012(var_5223_bool, 265);
	bool var_5225_bool;
	func_12012(var_5225_bool, 266);
	bool var_5227_bool;
	func_12012(var_5227_bool, 276);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9782(int var_4950_int, float var_4951_float)
{
	float var_4955_float;
	var_4951_float = var_4955_float;
	int var_4952_int;
	func_12029(var_4952_int, 529838, 529837, var_4955_float);
	var_4952_int = var_4950_int;
}


// @pe
void func_6714(int var_1706_int, int var_1707_int, object var_1708_object, object var_1709_object, object var_1710_object, object var_1711_object)
{
	if(var_1707_int == 0) {
		func_760(12, false);
		func_777(12, false, 1);
		int var_1719_int; int var_1720_int; object var_1721_object; object var_1722_object; object var_1723_object;
		var_1719_int = 12;
		var_1706_int = var_1720_int;
		var_1708_object = var_1721_object;
		var_1709_object = var_1722_object;
		var_1710_object = var_1723_object;
		func_586(var_1720_int, var_1721_object, var_1722_object, var_1723_object);
		object var_1724_object;
		var_1711_object = var_1724_object;
		func_270(var_1724_object, 0);
		func_834(12, false, 4);
		func_896(12, false, 4);
	}
	int var_1733_int;
	var_1707_int = var_1733_int;
	func_984(12, var_1733_int);
	int var_1735_int; int var_1736_int;
	var_1706_int = var_1735_int;
	var_1707_int = var_1736_int;
	func_1571(12, var_1735_int, var_1736_int);
}


// @pe
void func_11835(bool var_5522_bool, object var_5523_object)
{
	object var_5526_object;
	var_5523_object = var_5526_object;
	func_11929(var_5526_object);
	bool var_5525_bool;
	if(var_5525_bool != 0) {
		var_5522_bool = true;
		return 0;
	}
	var_5522_bool = false;
}


// @pe
void func_5693(int var_1386_int, int var_1387_int, object var_1388_object, object var_1389_object, object var_1390_object, object var_1391_object)
{
	if(var_1387_int == 0) {
		func_760(7, false);
		func_777(7, false, 1);
		int var_1399_int; int var_1400_int; object var_1401_object; object var_1402_object; object var_1403_object;
		var_1399_int = 7;
		var_1386_int = var_1400_int;
		var_1388_object = var_1401_object;
		var_1389_object = var_1402_object;
		var_1390_object = var_1403_object;
		func_586(var_1400_int, var_1401_object, var_1402_object, var_1403_object);
		object var_1404_object;
		var_1391_object = var_1404_object;
		func_270(var_1404_object, 0);
		func_834(7, false, 6);
		func_896(7, false, 6);
	}
	int var_1413_int;
	var_1387_int = var_1413_int;
	func_984(7, var_1413_int);
	int var_1415_int; int var_1416_int;
	var_1386_int = var_1415_int;
	var_1387_int = var_1416_int;
	func_1571(7, var_1415_int, var_1416_int);
}


// @pe
void func_9791(int var_5775_int, float var_5776_float)
{
	float var_5780_float;
	var_5776_float = var_5780_float;
	int var_5777_int;
	func_12029(var_5777_int, 531053, 531052, var_5780_float);
	var_5777_int = var_5775_int;
}


void func_3652(int var_3825_int, int var_3826_int, int var_3827_int)
{
	int var_3832_int; int var_3833_int; int var_3834_int; int var_3835_int;
	bool var_3836_bool = false;
	if(var_3827_int > 8) {
		if(var_3827_int < 21)
			var_3836_bool = true;
	}
	if(var_3836_bool != 0) {
		int var_3841_int;
		var_3825_int = var_3841_int;
		func_467(var_3841_int, "pers_rat", "rat.xml", 1);
		int var_3845_int;
		var_3825_int = var_3845_int;
		func_467(var_3845_int, "pers_alkash", "alkash.xml", 2);
		int var_3849_int;
		var_3825_int = var_3849_int;
		func_467(var_3849_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3854_float; int var_3855_int;
		func_1098(var_3854_float, var_3855_int);
		if((2 * var_3854_float) != 0) {
			int var_3857_int; int var_3860_int;
			var_3825_int = var_3857_int;
			var_3832_int = var_3860_int;
			func_467(var_3857_int, "pers_grabitel", "grabitel.xml", var_3860_int);
		}
		if((var_3855_int + 1) >= 2) {
			int var_3865_int;
			var_3825_int = var_3865_int;
			func_467(var_3865_int, "pers_patrool", "patrol.xml", 1);
			bool var_3869_bool; int var_3870_int;
			var_3826_int = var_3870_int;
			func_1305(var_3869_bool, var_3870_int);
			if(var_3869_bool != 0) {
				int var_3871_int;
				var_3825_int = var_3871_int;
				func_467(var_3871_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3876_float; int var_3877_int;
		var_3826_int = var_3877_int;
		func_1188(var_3876_float, var_3877_int);
		if((1 * var_3876_float) != 0) {
			int var_3879_int; int var_3882_int;
			var_3825_int = var_3879_int;
			var_3833_int = var_3882_int;
			func_467(var_3879_int, "pers_bomber", "bomber.xml", var_3882_int);
		}
	} else {
		int var_3896_int;
		var_3825_int = var_3896_int;
		func_467(var_3896_int, "pers_rat", "rat.xml", 3);
		int var_3900_int;
		var_3825_int = var_3900_int;
		func_467(var_3900_int, "pers_alkash", "alkash.xml", 1);
		int var_3904_int;
		var_3825_int = var_3904_int;
		func_467(var_3904_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3909_float; int var_3910_int;
		func_1098(var_3909_float, var_3910_int);
		if((3 * var_3909_float) != 0) {
			int var_3912_int; int var_3915_int;
			var_3825_int = var_3912_int;
			var_3834_int = var_3915_int;
			func_467(var_3912_int, "pers_grabitel", "grabitel.xml", var_3915_int);
		}
		if((var_3910_int + 1) >= 2) {
			int var_3920_int;
			var_3825_int = var_3920_int;
			func_467(var_3920_int, "pers_patrool", "patrol.xml", 1);
			bool var_3924_bool; int var_3925_int;
			var_3826_int = var_3925_int;
			func_1305(var_3924_bool, var_3925_int);
			if(var_3924_bool != 0) {
				int var_3926_int;
				var_3825_int = var_3926_int;
				func_467(var_3926_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3931_float; int var_3932_int;
		var_3826_int = var_3932_int;
		func_1188(var_3931_float, var_3932_int);
		if((1 * var_3931_float) == 0) goto Label_3814;
		int var_3934_int; int var_3937_int;
		var_3825_int = var_3934_int;
		var_3835_int = var_3937_int;
		func_467(var_3934_int, "pers_bomber", "bomber.xml", var_3937_int);
	}
Label_3814:
	bool var_3883_bool; int var_3884_int; int var_3885_int;
	var_3826_int = var_3884_int;
	var_3827_int = var_3885_int;
	func_1278(var_3883_bool, var_3884_int, var_3885_int);
	if(var_3883_bool != 0) {
		int var_3886_int;
		var_3825_int = var_3886_int;
		func_467(var_3886_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3890_bool; int var_3891_int;
	var_3826_int = var_3891_int;
	func_1305(var_3890_bool, var_3891_int);
	if(var_3890_bool != 0) {
		int var_3892_int;
		var_3825_int = var_3892_int;
		func_467(var_3892_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_7749(object var_4394_object, object var_4395_object, int var_4396_int)
{
	object var_4398_object;
	var_4395_object = var_4398_object;
	object var_4397_object;
	func_7732(var_4397_object, var_4398_object, ("term" + var_4396_int), "pers_patrool", "guard_term.xml");
	var_4397_object = var_4394_object;
}


// @pe
void func_11845(bool var_6070_bool)
{
	int var_6073_int;
	func_106(var_6073_int, "b4q01");
	if(var_6073_int == 0) {
		var_6070_bool = true;
		return 0;
	}
	var_6070_bool = false;
}


// @pe
void func_9800(int var_5990_int, float var_5991_float)
{
	float var_5995_float;
	var_5991_float = var_5995_float;
	int var_5992_int;
	func_12029(var_5992_int, 529844, 529843, var_5995_float);
	var_5992_int = var_5990_int;
}


// @pe
void func_4681(int var_3409_int, int var_3410_int, object var_3411_object, object var_3412_object, object var_3413_object, object var_3414_object)
{
	if(var_3410_int == 0) {
		func_760(1, false);
		func_777(1, false, 1);
		int var_3423_int; object var_3424_object; object var_3425_object; object var_3426_object;
		var_3409_int = var_3423_int;
		var_3411_object = var_3424_object;
		var_3412_object = var_3425_object;
		var_3413_object = var_3426_object;
		func_684(1, var_3423_int, var_3424_object, var_3425_object, var_3426_object);
		object var_3427_object;
		var_3414_object = var_3427_object;
		func_270(var_3427_object, 2);
		func_834(1, false, 8);
		func_896(1, true, 8);
	}
	func_743(1, false);
	int var_3438_int; int var_3439_int;
	var_3409_int = var_3438_int;
	var_3410_int = var_3439_int;
	func_4203(1, var_3438_int, var_3439_int);
}


// @pe
void func_586(int var_564_int, object var_566_object, object var_567_object, object var_568_object)
{
	int var_569_int;
	var_564_int = var_569_int;
	func_506(var_569_int, true);
	object var_597_object;
	var_566_object = var_597_object;
	func_213(var_597_object);
	object var_608_object;
	var_567_object = var_608_object;
	func_213(var_608_object);
	object var_609_object;
	var_568_object = var_609_object;
	func_213(var_609_object);
}


void func_7760(bool var_4438_bool)
{
	object var_4440_object;
	@FindActor(var_4440_object, "arena_light");
	var_4440_object->Switch(var_4438_bool);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9809(int var_5172_int, float var_5173_float)
{
	float var_5177_float;
	var_5173_float = var_5177_float;
	int var_5174_int;
	func_12029(var_5174_int, 518218, 518217, var_5177_float);
	var_5174_int = var_5172_int;
}


// @pe
void func_11857(bool var_5244_bool)
{
	int var_5247_int;
	func_106(var_5247_int, "b5q01");
	if(var_5247_int == 0) {
		var_5244_bool = true;
		return 0;
	}
	var_5244_bool = false;
}


void func_7768(void)
{
	object var_4197_object; bool var_4198_bool; cvector var_4199_cvector; cvector var_4200_cvector; int var_4201_int; object var_4202_object;
	@Trace("Setting arena...");
	var_4204_object = GlobalVars[11];
	if(var_4204_object == null) {
		@GetMainOutdoorScene(var_4197_object);
		var_4197_object->GetLocator("pt_arena_manager", var_4198_bool, var_4199_cvector, var_4200_cvector);
		if(!var_4198_bool) { //@nz
			@Trace("Locator doesn't exist for arena manager");
		} else {
				var_4228_object = GlobalVars[11];
				object var_4229_object; object var_4230_object; cvector var_4231_cvector; cvector var_4232_cvector;
				var_4197_object = var_4230_object;
				var_4199_cvector = var_4231_cvector;
				var_4200_cvector = var_4232_cvector;
				func_14643(var_4229_object, var_4230_object, var_4231_cvector, var_4232_cvector);
				var_4229_object = var_4228_object;
				GlobalVars[11] = var_4228_object;
		}
		var_4201_int = 0;

		for(;;) {
			if(var_4201_int < 6) {
				var_4197_object->GetLocator(("pt_arena_torch" + (var_4201_int + 1)), var_4198_bool, var_4199_cvector, var_4200_cvector);
				if(!var_4198_bool) { //@nz
					@Trace("Locator doesn't exist for arena torch " + (var_4201_int + 1));
				} else {
				@AddActorByType(var_4202_object, "scripted", var_4197_object, var_4199_cvector, var_4200_cvector, "torch.xml");
				var_4223_object = GlobalVars[12];
				var_4223_object->add(var_4202_object);
				var_4202_object = null;
			}
			func_7760(true);
			var_4197_object = null;
	}
		return 12;

		}
		var_4201_int += 1;
	}
	
}


// @pe
void func_9818(int var_5188_int, float var_5189_float)
{
	float var_5193_float;
	var_5189_float = var_5193_float;
	int var_5190_int;
	func_12029(var_5190_int, 518220, 518219, var_5193_float);
	var_5190_int = var_5188_int;
}


// @pe
void func_605(int var_2027_int, int var_2028_int, object var_2029_object, object var_2030_object, object var_2031_object)
{
	int var_2032_int;
	var_2027_int = var_2032_int;
	func_506(var_2032_int, false);
	object var_2034_object;
	var_2029_object = var_2034_object;
	func_213(var_2034_object);
	object var_2035_object;
	var_2030_object = var_2035_object;
	func_213(var_2035_object);
	object var_2036_object;
	var_2031_object = var_2036_object;
	func_213(var_2036_object);
	if(var_2028_int < 8) {
		object var_2040_object;
		var_2029_object = var_2040_object;
		func_540((("pt_blockpost" + (var_2027_int + 1)) + "_1_"), var_2040_object, "pers_patrool", "patrol_stat.xml");
		object var_2066_object;
		var_2031_object = var_2066_object;
		func_562((("pt_fog" + (var_2027_int + 1)) + "_"), var_2066_object);
	} else {
		object var_2093_object;
		var_2029_object = var_2093_object;
		func_540((("pt_blockpost" + (var_2027_int + 1)) + "_1_"), var_2093_object, "pers_soldat", "soldier.xml");
		object var_2102_object;
		var_2030_object = var_2102_object;
		func_540((("pt_blockpost" + (var_2027_int + 1)) + "_2_"), var_2102_object, "pers_sanitar", "sanitar_stat.xml");
		object var_2111_object;
		var_2031_object = var_2111_object;
		func_562((("pt_fog" + (var_2027_int + 1)) + "_"), var_2111_object);
	}
	
}


// @pe
void func_11869(bool var_5165_bool)
{
	int var_5168_int;
	func_106(var_5168_int, "b2q01");
	if(var_5168_int == 0) {
		var_5165_bool = true;
		return 0;
	}
	var_5165_bool = false;
}


// @pe
void func_9827(int var_6022_int, float var_6023_float)
{
	float var_6027_float;
	var_6023_float = var_6027_float;
	int var_6024_int;
	func_12029(var_6024_int, 529846, 529845, var_6027_float);
	var_6024_int = var_6022_int;
}


// @pe
void func_11881(bool var_5129_bool)
{
	int var_5132_int;
	func_106(var_5132_int, "b2MladVladBurahHomeTalk");
	if(var_5132_int == 1)
		var_5129_bool = true;
	var_5129_bool = false;
}


// @pe
void func_9836(int var_5137_int, float var_5138_float)
{
	float var_5142_float;
	var_5138_float = var_5142_float;
	int var_5139_int;
	func_12029(var_5139_int, 520462, 520461, var_5142_float);
	var_5139_int = var_5137_int;
}


// @pe
void func_6766(int var_2942_int, int var_2943_int, object var_2944_object, object var_2945_object, object var_2946_object, object var_2947_object)
{
	if(var_2943_int == 0) {
		func_760(12, true);
		func_777(12, true, 1);
		int var_2956_int; object var_2957_object; object var_2958_object; object var_2959_object;
		var_2942_int = var_2956_int;
		var_2944_object = var_2957_object;
		var_2945_object = var_2958_object;
		var_2946_object = var_2959_object;
		func_605(12, var_2956_int, var_2957_object, var_2958_object, var_2959_object);
		object var_2960_object;
		var_2947_object = var_2960_object;
		func_270(var_2960_object, 1);
		func_834(12, true, 4);
		func_896(12, false, 4);
	}
	func_743(12, false);
	int var_2971_int; int var_2972_int;
	var_2942_int = var_2971_int;
	var_2943_int = var_2972_int;
	func_2757(12, var_2971_int, var_2972_int);
}


// @pe
void func_5745(int var_2671_int, int var_2672_int, object var_2673_object, object var_2674_object, object var_2675_object, object var_2676_object)
{
	if(var_2672_int == 0) {
		func_760(7, true);
		func_777(7, true, 1);
		int var_2685_int; object var_2686_object; object var_2687_object; object var_2688_object;
		var_2671_int = var_2685_int;
		var_2673_object = var_2686_object;
		var_2674_object = var_2687_object;
		var_2675_object = var_2688_object;
		func_605(7, var_2685_int, var_2686_object, var_2687_object, var_2688_object);
		object var_2689_object;
		var_2676_object = var_2689_object;
		func_270(var_2689_object, 1);
		func_834(7, true, 6);
		func_896(7, false, 6);
	}
	func_743(7, false);
	int var_2700_int; int var_2701_int;
	var_2671_int = var_2700_int;
	var_2672_int = var_2701_int;
	func_2757(7, var_2700_int, var_2701_int);
}


void func_10868(void)
{
	object var_4671_object;
	func_12037(var_4671_object);
	object var_4669_object;
	var_4671_object = var_4669_object;
	object var_4670_object;
	var_4669_object->FindMark(var_4670_object, "b7q01AglajaGotoStarshina");
	if(var_4670_object != 0)
		var_4670_object->Remove();
	var_4669_object->FindMark(var_4670_object, "b7q01BirdmaskGotoMat");
	if(var_4670_object != 0)
		var_4670_object->Remove();
	var_4669_object->FindMark(var_4670_object, "b7q01DankoGotoSobor");
	if(var_4670_object != 0)
		var_4670_object->Remove();
	var_4669_object->FindMark(var_4670_object, "b7q01MatGotoPrison");
	if(var_4670_object != 0)
		var_4670_object->Remove();
	var_4669_object->FindMark(var_4670_object, "b7q01PatrolGotoGorbun");
	if(var_4670_object != 0)
		var_4670_object->Remove();
	var_4669_object->FindMark(var_4670_object, "b7q01ViktorGotoSobor");
	if(var_4670_object != 0)
		var_4670_object->Remove();
	var_4669_object->FindMark(var_4670_object, "b7q01WastedGotoViktor");
	if(var_4670_object != 0)
		var_4670_object->Remove();
	var_4669_object->FindMark(var_4670_object, "b7q03AglajaGotoTheater");
	if(var_4670_object != 0)
		var_4670_object->Remove();
	bool var_4688_bool;
	func_12012(var_4688_bool, 253);
	bool var_4690_bool;
	func_12012(var_4690_bool, 270);
	bool var_4692_bool;
	func_12012(var_4692_bool, 280);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9845(int var_4966_int, float var_4967_float)
{
	float var_4971_float;
	var_4967_float = var_4971_float;
	int var_4968_int;
	func_12029(var_4968_int, 529842, 529841, var_4971_float);
	var_4968_int = var_4966_int;
}


// @pe
void func_11893(bool var_5983_bool)
{
	int var_5986_int;
	func_106(var_5986_int, "b2q01");
	if(var_5986_int == 1000)
		var_5983_bool = true;
	var_5983_bool = false;
}


// @pe
void func_4733(object var_78_object)
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
void func_9854(int var_4982_int, float var_4983_float)
{
	float var_4987_float;
	var_4983_float = var_4987_float;
	int var_4984_int;
	func_12029(var_4984_int, 519684, 519683, var_4987_float);
	var_4984_int = var_4982_int;
}


// @pe
void func_11905(bool var_5180_bool)
{
	int var_5183_int;
	func_106(var_5183_int, "b2DankoTalk");
	if(var_5183_int == 1)
		var_5180_bool = true;
	var_5180_bool = false;
}


// @pe
void func_9863(int var_6014_int, float var_6015_float)
{
	float var_6019_float;
	var_6015_float = var_6019_float;
	int var_6016_int;
	func_12029(var_6016_int, 529848, 529847, var_6019_float);
	var_6016_int = var_6014_int;
}


// @pe
void func_11917(bool var_5290_bool)
{
	int var_5293_int;
	func_106(var_5293_int, "b7q01");
	if(var_5293_int == 0) {
		var_5290_bool = true;
		return 0;
	}
	var_5290_bool = false;
}


// @pe
void func_9872(int var_5725_int, float var_5726_float)
{
	float var_5730_float;
	var_5726_float = var_5730_float;
	int var_5727_int;
	func_12029(var_5727_int, 530678, 530677, var_5730_float);
	var_5727_int = var_5725_int;
}


void func_7831(void)
{
	int var_4473_int; int var_4474_int; object var_4475_object;
	@Trace("Cleaning arena...");
	var_4477_object = GlobalVars[11];
	if(var_4477_object != null) {
		var_4479_object = GlobalVars[11];
		var_4479_object->Remove();
		var_4480_object = GlobalVars[12];
		var_4480_object->size(var_4473_int);
		var_4474_int = 0;

		while(var_4474_int < var_4473_int) {
			var_4482_object = GlobalVars[12];
			var_4482_object->get(var_4475_object, var_4474_int);
			@Trigger(var_4475_object, "remove");
			var_4475_object = null;
			var_4474_int += 1;
		}

		var_4485_object = GlobalVars[12];
		var_4485_object->clear();
		func_7760(false);
	}
}


// @pe
void func_11929(bool var_5525_bool)
{
	var_5525_bool = false;
}


// @pe
void func_9881(int var_5733_int, float var_5734_float)
{
	float var_5738_float;
	var_5734_float = var_5738_float;
	int var_5735_int;
	func_12029(var_5735_int, 530680, 530679, var_5738_float);
	var_5735_int = var_5733_int;
}


void func_11932(void)
{
	object var_4700_object;
	@CreateDiaryEntry(var_4700_object, 562, 0, 530576);
	bool var_4704_bool; object var_4705_object;
	var_4700_object = var_4705_object;
	func_11984(var_4704_bool, var_4705_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6818(int var_4072_int, int var_4073_int, object var_4074_object, object var_4075_object, object var_4076_object, object var_4077_object)
{
	if(var_4073_int == 0) {
		func_760(12, false);
		func_777(12, false, 1);
		int var_4086_int; object var_4087_object; object var_4088_object; object var_4089_object;
		var_4072_int = var_4086_int;
		var_4074_object = var_4087_object;
		var_4075_object = var_4088_object;
		var_4076_object = var_4089_object;
		func_684(12, var_4086_int, var_4087_object, var_4088_object, var_4089_object);
		object var_4090_object;
		var_4077_object = var_4090_object;
		func_270(var_4090_object, 2);
		func_834(12, false, 4);
		func_896(12, true, 4);
	}
	func_743(12, false);
	int var_4101_int; int var_4102_int;
	var_4072_int = var_4101_int;
	var_4073_int = var_4102_int;
	func_3652(12, var_4101_int, var_4102_int);
}


// @pe
void func_9890(int var_6030_int, float var_6031_float)
{
	float var_6035_float;
	var_6031_float = var_6035_float;
	int var_6032_int;
	func_12029(var_6032_int, 529852, 529851, var_6035_float);
	var_6032_int = var_6030_int;
}


// @pe
void func_5797(int var_3797_int, int var_3798_int, object var_3799_object, object var_3800_object, object var_3801_object, object var_3802_object)
{
	if(var_3798_int == 0) {
		func_760(7, false);
		func_777(7, false, 1);
		int var_3811_int; object var_3812_object; object var_3813_object; object var_3814_object;
		var_3797_int = var_3811_int;
		var_3799_object = var_3812_object;
		var_3800_object = var_3813_object;
		var_3801_object = var_3814_object;
		func_684(7, var_3811_int, var_3812_object, var_3813_object, var_3814_object);
		object var_3815_object;
		var_3802_object = var_3815_object;
		func_270(var_3815_object, 2);
		func_834(7, false, 6);
		func_896(7, true, 6);
	}
	func_743(7, false);
	int var_3826_int; int var_3827_int;
	var_3797_int = var_3826_int;
	var_3798_int = var_3827_int;
	func_3652(7, var_3826_int, var_3827_int);
}


void func_8873(int var_499_int, int var_500_int, int var_501_int)
{
	var_510_object = GlobalVars[8];
	object var_506_object;
	var_510_object->get(var_506_object, var_499_int);
	var_511_object = GlobalVars[9];
	object var_507_object;
	var_511_object->get(var_507_object, var_499_int);
	var_512_object = GlobalVars[10];
	object var_508_object;
	var_512_object->get(var_508_object, var_499_int);
	var_513_object = GlobalVars[13];
	object var_509_object;
	var_513_object->get(var_509_object, var_499_int);
	if(var_499_int == 0) {
		int var_516_int; int var_517_int; object var_518_object; object var_519_object; object var_520_object; object var_521_object;
		var_500_int = var_516_int;
		var_501_int = var_517_int;
		var_506_object = var_518_object;
		var_507_object = var_519_object;
		var_508_object = var_520_object;
		var_509_object = var_521_object;
		func_4380(var_516_int, var_517_int, var_518_object, var_519_object, var_520_object, var_521_object);
	} else if(var_499_int == 1) {
			int var_876_int; int var_877_int; object var_878_object; object var_879_object; object var_880_object; object var_881_object;
			var_500_int = var_876_int;
			var_501_int = var_877_int;
			var_506_object = var_878_object;
			var_507_object = var_879_object;
			var_508_object = var_880_object;
			var_509_object = var_881_object;
			func_4577(var_876_int, var_877_int, var_878_object, var_879_object, var_880_object, var_881_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_499_int == 2) {
		int var_1025_int; int var_1026_int; object var_1027_object; object var_1028_object; object var_1029_object; object var_1030_object;
		var_500_int = var_1025_int;
		var_501_int = var_1026_int;
		var_506_object = var_1027_object;
		var_507_object = var_1028_object;
		var_508_object = var_1029_object;
		var_509_object = var_1030_object;
		func_4783(var_1025_int, var_1026_int, var_1027_object, var_1028_object, var_1029_object, var_1030_object);
	} else if(var_499_int == 3) {
		int var_1250_int; int var_1251_int; object var_1252_object; object var_1253_object; object var_1254_object; object var_1255_object;
		var_500_int = var_1250_int;
		var_501_int = var_1251_int;
		var_506_object = var_1252_object;
		var_507_object = var_1253_object;
		var_508_object = var_1254_object;
		var_509_object = var_1255_object;
		func_5013(var_1250_int, var_1251_int, var_1252_object, var_1253_object, var_1254_object, var_1255_object);
	} else if(var_499_int == 4) {
		int var_1298_int; int var_1299_int; object var_1300_object; object var_1301_object; object var_1302_object; object var_1303_object;
		var_500_int = var_1298_int;
		var_501_int = var_1299_int;
		var_506_object = var_1300_object;
		var_507_object = var_1301_object;
		var_508_object = var_1302_object;
		var_509_object = var_1303_object;
		func_5231(var_1298_int, var_1299_int, var_1300_object, var_1301_object, var_1302_object, var_1303_object);
	} else if(var_499_int == 5) {
		int var_1343_int; int var_1344_int; object var_1345_object; object var_1346_object; object var_1347_object; object var_1348_object;
		var_500_int = var_1343_int;
		var_501_int = var_1344_int;
		var_506_object = var_1345_object;
		var_507_object = var_1346_object;
		var_508_object = var_1347_object;
		var_509_object = var_1348_object;
		func_5470(var_1343_int, var_1344_int, var_1345_object, var_1346_object, var_1347_object, var_1348_object);
	} else if(var_499_int == 6) {
		int var_1376_int; int var_1377_int; object var_1378_object; object var_1379_object; object var_1380_object; object var_1381_object;
		var_500_int = var_1376_int;
		var_501_int = var_1377_int;
		var_506_object = var_1378_object;
		var_507_object = var_1379_object;
		var_508_object = var_1380_object;
		var_509_object = var_1381_object;
		func_5628(var_1381_object);
	} else if(var_499_int == 7) {
		int var_1386_int; int var_1387_int; object var_1388_object; object var_1389_object; object var_1390_object; object var_1391_object;
		var_500_int = var_1386_int;
		var_501_int = var_1387_int;
		var_506_object = var_1388_object;
		var_507_object = var_1389_object;
		var_508_object = var_1390_object;
		var_509_object = var_1391_object;
		func_5693(var_1386_int, var_1387_int, var_1388_object, var_1389_object, var_1390_object, var_1391_object);
	} else if(var_499_int == 8) {
		int var_1574_int; int var_1575_int; object var_1576_object; object var_1577_object; object var_1578_object; object var_1579_object;
		var_500_int = var_1574_int;
		var_501_int = var_1575_int;
		var_506_object = var_1576_object;
		var_507_object = var_1577_object;
		var_508_object = var_1578_object;
		var_509_object = var_1579_object;
		func_5893(var_1574_int, var_1575_int, var_1576_object, var_1577_object, var_1578_object, var_1579_object);
	} else if(var_499_int == 9) {
		int var_1607_int; int var_1608_int; object var_1609_object; object var_1610_object; object var_1611_object; object var_1612_object;
		var_500_int = var_1607_int;
		var_501_int = var_1608_int;
		var_506_object = var_1609_object;
		var_507_object = var_1610_object;
		var_508_object = var_1611_object;
		var_509_object = var_1612_object;
		func_6096(var_1607_int, var_1608_int, var_1609_object, var_1610_object, var_1611_object, var_1612_object);
	} else if(var_499_int == 10) {
		int var_1640_int; int var_1641_int; object var_1642_object; object var_1643_object; object var_1644_object; object var_1645_object;
		var_500_int = var_1640_int;
		var_501_int = var_1641_int;
		var_506_object = var_1642_object;
		var_507_object = var_1643_object;
		var_508_object = var_1644_object;
		var_509_object = var_1645_object;
		func_6305(var_1640_int, var_1641_int, var_1642_object, var_1643_object, var_1644_object, var_1645_object);
	} else if(var_499_int == 11) {
		int var_1673_int; int var_1674_int; object var_1675_object; object var_1676_object; object var_1677_object; object var_1678_object;
		var_500_int = var_1673_int;
		var_501_int = var_1674_int;
		var_506_object = var_1675_object;
		var_507_object = var_1676_object;
		var_508_object = var_1677_object;
		var_509_object = var_1678_object;
		func_6517(var_1673_int, var_1674_int, var_1675_object, var_1676_object, var_1677_object, var_1678_object);
	} else if(var_499_int == 12) {
		int var_1706_int; int var_1707_int; object var_1708_object; object var_1709_object; object var_1710_object; object var_1711_object;
		var_500_int = var_1706_int;
		var_501_int = var_1707_int;
		var_506_object = var_1708_object;
		var_507_object = var_1709_object;
		var_508_object = var_1710_object;
		var_509_object = var_1711_object;
		func_6714(var_1706_int, var_1707_int, var_1708_object, var_1709_object, var_1710_object, var_1711_object);
	} else if(var_499_int == 13) {
		int var_1739_int; int var_1740_int; object var_1741_object; object var_1742_object; object var_1743_object; object var_1744_object;
		var_500_int = var_1739_int;
		var_501_int = var_1740_int;
		var_506_object = var_1741_object;
		var_507_object = var_1742_object;
		var_508_object = var_1743_object;
		var_509_object = var_1744_object;
		func_6917(var_1739_int, var_1740_int, var_1741_object, var_1742_object, var_1743_object, var_1744_object);
	} else if(var_499_int == 14) {
		int var_1772_int; int var_1773_int; object var_1774_object; object var_1775_object; object var_1776_object; object var_1777_object;
		var_500_int = var_1772_int;
		var_501_int = var_1773_int;
		var_506_object = var_1774_object;
		var_507_object = var_1775_object;
		var_508_object = var_1776_object;
		var_509_object = var_1777_object;
		func_7117(var_1772_int, var_1773_int, var_1774_object, var_1775_object, var_1776_object, var_1777_object);
	} else if(var_499_int == 15) {
		int var_1956_int; int var_1957_int; object var_1958_object; object var_1959_object; object var_1960_object; object var_1961_object;
		var_500_int = var_1956_int;
		var_501_int = var_1957_int;
		var_506_object = var_1958_object;
		var_507_object = var_1959_object;
		var_508_object = var_1960_object;
		var_509_object = var_1961_object;
		func_7299(var_1956_int, var_1957_int, var_1958_object, var_1959_object, var_1960_object, var_1961_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


void func_11945(void)
{
	object var_5838_object;
	@CreateDiaryEntry(var_5838_object, 564, 0, 530578);
	bool var_5842_bool; object var_5843_object;
	var_5838_object = var_5843_object;
	func_11984(var_5842_bool, var_5843_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9899(int var_5653_int, float var_5654_float)
{
	float var_5658_float;
	var_5654_float = var_5658_float;
	int var_5655_int;
	func_12029(var_5655_int, 530601, 530600, var_5658_float);
	var_5655_int = var_5653_int;
}


// @pe
void func_684(int var_3208_int, int var_3209_int, object var_3210_object, object var_3211_object, object var_3212_object)
{
	int var_3213_int;
	var_3208_int = var_3213_int;
	func_506(var_3213_int, false);
	object var_3215_object;
	var_3210_object = var_3215_object;
	func_213(var_3215_object);
	object var_3216_object;
	var_3211_object = var_3216_object;
	func_213(var_3216_object);
	object var_3217_object;
	var_3212_object = var_3217_object;
	func_213(var_3217_object);
	if(var_3209_int < 8) {
		object var_3221_object;
		var_3210_object = var_3221_object;
		func_540((("pt_blockpost" + (var_3208_int + 1)) + "_1_"), var_3221_object, "pers_patrool", "patrol_stat.xml");
	} else {
		object var_3230_object;
		var_3210_object = var_3230_object;
		func_540((("pt_blockpost" + (var_3208_int + 1)) + "_1_"), var_3230_object, "pers_soldat", "soldier.xml");
		object var_3239_object;
		var_3211_object = var_3239_object;
		func_540((("pt_blockpost" + (var_3208_int + 1)) + "_2_"), var_3239_object, "pers_sanitar", "sanitar_stat.xml");
	}
	
}


// @pe
void func_4783(int var_1025_int, int var_1026_int, object var_1027_object, object var_1028_object, object var_1029_object, object var_1030_object)
{
	if(var_1026_int == 0) {
		func_760(2, false);
		func_777(2, false, 1);
		int var_1038_int; int var_1039_int; object var_1040_object; object var_1041_object; object var_1042_object;
		var_1038_int = 2;
		var_1025_int = var_1039_int;
		var_1027_object = var_1040_object;
		var_1028_object = var_1041_object;
		var_1029_object = var_1042_object;
		func_586(var_1039_int, var_1040_object, var_1041_object, var_1042_object);
		object var_1043_object;
		var_1030_object = var_1043_object;
		func_270(var_1043_object, 0);
		func_834(2, false, 5);
		func_896(2, false, 5);
	}
	int var_1052_int;
	var_1026_int = var_1052_int;
	func_1014(2, var_1052_int);
	int var_1054_int; int var_1055_int;
	var_1025_int = var_1054_int;
	var_1026_int = var_1055_int;
	func_1848(2, var_1054_int, var_1055_int);
}


// @pe
void func_9908(int var_6187_int, float var_6188_float)
{
	float var_6192_float;
	var_6188_float = var_6192_float;
	int var_6189_int;
	func_12029(var_6189_int, 533050, 533049, var_6192_float);
	var_6189_int = var_6187_int;
}


void func_11958(void)
{
	object var_4829_object;
	@CreateDiaryEntry(var_4829_object, 565, 0, 530579);
	bool var_4833_bool; object var_4834_object;
	var_4829_object = var_4834_object;
	func_11984(var_4833_bool, var_4834_object, -1);
}
EMIT "Stack[-1] = 0";


void func_7865(void)
{
	object var_322_object;
	@GetMainOutdoorScene(var_322_object);
	int var_323_int = 1;
	
	while(var_323_int <= 17) {
		var_326_object = GlobalVars[15];
		object var_327_object; object var_328_object;
		var_322_object = var_328_object;
		func_133(var_327_object, var_328_object, ("pt_bull" + var_323_int), "pers_bull", "bull.xml");
		var_326_object->add(var_327_object);
		var_323_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";


// @pe
void func_9917(int var_5998_int, float var_5999_float)
{
	float var_6003_float;
	var_5999_float = var_6003_float;
	int var_6000_int;
	func_12029(var_6000_int, 529850, 529849, var_6003_float);
	var_6000_int = var_5998_int;
}


void func_10944(void)
{
	object var_5857_object;
	func_12037(var_5857_object);
	object var_5855_object;
	var_5857_object = var_5855_object;
	object var_5856_object;
	var_5855_object->FindMark(var_5856_object, "b8q01GrifGotoKlara");
	if(var_5856_object != 0)
		var_5856_object->Remove();
	var_5855_object->FindMark(var_5856_object, "b8q01KapellaGotoKlara");
	if(var_5856_object != 0)
		var_5856_object->Remove();
	var_5855_object->FindMark(var_5856_object, "b8q01NotkinGotoKlara");
	if(var_5856_object != 0)
		var_5856_object->Remove();
	var_5855_object->FindMark(var_5856_object, "b8q03GeorgGotoKaterina");
	if(var_5856_object != 0)
		var_5856_object->Remove();
	var_5855_object->FindMark(var_5856_object, "b8q03KaterinaGotoMat");
	if(var_5856_object != 0)
		var_5856_object->Remove();
	bool var_5868_bool;
	func_12012(var_5868_bool, 293);
	bool var_5870_bool;
	func_12012(var_5870_bool, 284);
	bool var_5872_bool;
	func_12012(var_5872_bool, 575);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_11971(object var_4713_object)
{
	object var_4715_object;
	@GetDiaryRoot(var_4715_object);
	if(!var_4715_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_4713_object = false;
	}
	var_4715_object = var_4713_object;
}
EMIT "Stack[-1] = 0";


void func_2757(int var_2699_int, int var_2700_int, int var_2701_int)
{
	int var_2704_int; int var_2705_int;
	bool var_2706_bool = false;
	if(var_2701_int > 8) {
		if(var_2701_int < 21)
			var_2706_bool = true;
	}
	if(var_2706_bool != 0) {
		int var_2711_int;
		var_2699_int = var_2711_int;
		func_467(var_2711_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_2715_int;
		var_2699_int = var_2715_int;
		func_467(var_2715_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2719_int;
		var_2699_int = var_2719_int;
		func_467(var_2719_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2723_int;
		var_2699_int = var_2723_int;
		func_493(var_2723_int, "fog", "fog.xml", 6);
		if(var_2700_int >= 5) {
			int var_2729_int;
			var_2699_int = var_2729_int;
			func_493(var_2729_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2734_float; int var_2735_int;
		func_1188(var_2734_float, var_2735_int);
		if((1 * var_2734_float) != 0) {
			int var_2737_int; int var_2740_int;
			var_2699_int = var_2737_int;
			var_2704_int = var_2740_int;
			func_467(var_2737_int, "pers_bomber", "bomber.xml", var_2740_int);
		}
	} else {
		int var_2778_int;
		var_2699_int = var_2778_int;
		func_467(var_2778_int, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		int var_2782_int;
		var_2699_int = var_2782_int;
		func_467(var_2782_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		int var_2786_int;
		var_2699_int = var_2786_int;
		func_467(var_2786_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2790_int;
		var_2699_int = var_2790_int;
		func_493(var_2790_int, "fog", "fog.xml", 6);
		if(var_2735_int >= 5) {
			int var_2796_int;
			var_2699_int = var_2796_int;
			func_493(var_2796_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2801_float; int var_2802_int;
		var_2700_int = var_2802_int;
		func_1188(var_2801_float, var_2802_int);
		if((1 * var_2801_float) == 0) goto Label_2875;
		int var_2804_int; int var_2807_int;
		var_2699_int = var_2804_int;
		var_2705_int = var_2807_int;
		func_467(var_2804_int, "pers_bomber", "bomber.xml", var_2807_int);
	}
Label_2875:
	int var_2741_int;
	var_2699_int = var_2741_int;
	func_480(var_2741_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2747_int;
	var_2699_int = var_2747_int;
	func_480(var_2747_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2753_int;
	var_2699_int = var_2753_int;
	func_480(var_2753_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2759_int;
	var_2699_int = var_2759_int;
	func_480(var_2759_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_2765_bool; int var_2766_int; int var_2767_int;
	var_2700_int = var_2766_int;
	var_2701_int = var_2767_int;
	func_1278(var_2765_bool, var_2766_int, var_2767_int);
	if(var_2765_bool != 0) {
		int var_2768_int;
		var_2699_int = var_2768_int;
		func_467(var_2768_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_2772_bool; int var_2773_int;
	var_2700_int = var_2773_int;
	func_1305(var_2772_bool, var_2773_int);
	if(var_2772_bool != 0) {
		int var_2774_int;
		var_2699_int = var_2774_int;
		func_467(var_2774_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_9926(int var_6077_int, float var_6078_float)
{
	float var_6082_float;
	var_6078_float = var_6082_float;
	int var_6079_int;
	func_12029(var_6079_int, 529862, 529861, var_6082_float);
	var_6079_int = var_6077_int;
}


// @pe
void func_9935(int var_5236_int, float var_5237_float)
{
	float var_5241_float;
	var_5237_float = var_5241_float;
	int var_5238_int;
	func_12029(var_5238_int, 529866, 529865, var_5241_float);
	var_5238_int = var_5236_int;
}


void func_7888(void)
{
	var_4388_object = GlobalVars[15];
	object var_4387_object;
	var_4388_object = var_4387_object;
	func_213(var_4387_object);
}


void func_11984(bool var_4704_bool, object var_4705_object, int var_4706_int)
{
	object var_4713_object;
	func_11971(var_4713_object);
	object var_4710_object;
	var_4713_object = var_4710_object;
	object var_4711_object;
	var_4710_object->Find(var_4706_int, var_4711_object);
	if(!var_4711_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_4706_int);
		var_4704_bool = false;
	}
	var_4711_object->AddChild(var_4705_object);
	@SendWorldWndMessage(7);
	int var_4712_int;
	var_4705_object->GetCategory(var_4712_int);
	@SetDiarySection(var_4712_int);
	var_4704_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_6870(object var_278_object)
{
	var_278_object->add("r7_house2_01");
	var_278_object->add("r7_house2_02");
	var_278_object->add("r7_house2_03");
	var_278_object->add("r7_house2_04");
	var_278_object->add("r7_house3_03_i2");
	var_278_object->add("r7_house3_03");
	var_278_object->add("r7_house3_04_i2");
	var_278_object->add("r7_house3_04");
	var_278_object->add("r7_house3_05_i2");
	var_278_object->add("r7_house3_05");
	var_278_object->add("r7_house3_06_i2");
	var_278_object->add("r7_house3_01_i2");
	var_278_object->add("r7_house3_01");
	var_278_object->add("r7_house3_02_i2");
	var_278_object->add("r7_house3_02");
}


void func_7895(void)
{
	bool var_33_bool; int var_34_int; bool var_35_bool; int var_36_int; bool var_37_bool; object var_38_object;
	var_39_object = GlobalVars[15];
	object var_40_object;
	func_100(var_40_object);
	var_40_object = var_39_object;
	GlobalVars[15] = var_39_object;
	var_43_object = GlobalVars[13];
	object var_44_object;
	func_100(var_44_object);
	var_44_object = var_43_object;
	GlobalVars[13] = var_43_object;
	var_45_object = GlobalVars[8];
	object var_46_object;
	func_100(var_46_object);
	var_46_object = var_45_object;
	GlobalVars[8] = var_45_object;
	var_47_object = GlobalVars[9];
	object var_48_object;
	func_100(var_48_object);
	var_48_object = var_47_object;
	GlobalVars[9] = var_47_object;
	var_49_object = GlobalVars[10];
	object var_50_object;
	func_100(var_50_object);
	var_50_object = var_49_object;
	GlobalVars[10] = var_49_object;
	int var_29_int = 0;
	
	while(var_29_int < 16) {
		var_53_object = GlobalVars[8];
		object var_54_object;
		func_100(var_54_object);
		var_53_object->add(var_54_object);
		var_55_object = GlobalVars[9];
		object var_56_object;
		func_100(var_56_object);
		var_55_object->add(var_56_object);
		var_57_object = GlobalVars[10];
		object var_58_object;
		func_100(var_58_object);
		var_57_object->add(var_58_object);
		var_29_int += 1;
	}
	
	object var_30_object;
	@CreateStringVector(var_30_object);
	var_60_object = GlobalVars[13];
	var_60_object->add(var_30_object);
	object var_61_object;
	var_30_object = var_61_object;
	func_4378();
	@CreateStringVector(var_30_object);
	var_62_object = GlobalVars[13];
	var_62_object->add(var_30_object);
	object var_63_object;
	var_30_object = var_63_object;
	func_4536(var_63_object);
	@CreateStringVector(var_30_object);
	var_77_object = GlobalVars[13];
	var_77_object->add(var_30_object);
	object var_78_object;
	var_30_object = var_78_object;
	func_4733(var_78_object);
	@CreateStringVector(var_30_object);
	var_95_object = GlobalVars[13];
	var_95_object->add(var_30_object);
	object var_96_object;
	var_30_object = var_96_object;
	func_4939(var_96_object);
	@CreateStringVector(var_30_object);
	var_121_object = GlobalVars[13];
	var_121_object->add(var_30_object);
	object var_122_object;
	var_30_object = var_122_object;
	func_5169(var_122_object);
	@CreateStringVector(var_30_object);
	var_143_object = GlobalVars[13];
	var_143_object->add(var_30_object);
	object var_144_object;
	var_30_object = var_144_object;
	func_5387(var_144_object);
	@CreateStringVector(var_30_object);
	var_172_object = GlobalVars[13];
	var_172_object->add(var_30_object);
	object var_173_object;
	var_30_object = var_173_object;
	func_5626();
	@CreateStringVector(var_30_object);
	var_174_object = GlobalVars[13];
	var_174_object->add(var_30_object);
	object var_175_object;
	var_30_object = var_175_object;
	func_5649(var_175_object);
	@CreateStringVector(var_30_object);
	var_190_object = GlobalVars[13];
	var_190_object->add(var_30_object);
	object var_191_object;
	var_30_object = var_191_object;
	func_5849(var_191_object);
	@CreateStringVector(var_30_object);
	var_206_object = GlobalVars[13];
	var_206_object->add(var_30_object);
	object var_207_object;
	var_30_object = var_207_object;
	func_6049(var_207_object);
	@CreateStringVector(var_30_object);
	var_223_object = GlobalVars[13];
	var_223_object->add(var_30_object);
	object var_224_object;
	var_30_object = var_224_object;
	func_6252(var_224_object);
	@CreateStringVector(var_30_object);
	var_242_object = GlobalVars[13];
	var_242_object->add(var_30_object);
	object var_243_object;
	var_30_object = var_243_object;
	func_6461(var_243_object);
	@CreateStringVector(var_30_object);
	var_262_object = GlobalVars[13];
	var_262_object->add(var_30_object);
	object var_263_object;
	var_30_object = var_263_object;
	func_6673(var_263_object);
	@CreateStringVector(var_30_object);
	var_277_object = GlobalVars[13];
	var_277_object->add(var_30_object);
	object var_278_object;
	var_30_object = var_278_object;
	func_6870(var_278_object);
	@CreateStringVector(var_30_object);
	var_294_object = GlobalVars[13];
	var_294_object->add(var_30_object);
	object var_295_object;
	var_30_object = var_295_object;
	func_7073(var_295_object);
	@CreateStringVector(var_30_object);
	var_310_object = GlobalVars[13];
	var_310_object->add(var_30_object);
	object var_311_object;
	var_30_object = var_311_object;
	func_7273(var_311_object);
	func_7865();
	object var_31_object;
	@GetMainOutdoorScene(var_31_object);
	var_347_object = GlobalVars[6];
	object var_348_object;
	func_100(var_348_object);
	var_348_object = var_347_object;
	GlobalVars[6] = var_347_object;
	int var_32_int = 0;
	
	for(;;) {
		var_31_object->GetLocator(("pt_plant" + (var_32_int + 1)), var_33_bool);
		if(!var_33_bool) { //@nz
		} else {
			var_32_int += 1;
		}
		var_354_object = GlobalVars[6];
		var_354_object->resize(var_32_int);
		@Trace("Total plants: " + var_32_int);
		var_357_object = GlobalVars[7];
		object var_358_object;
		func_100(var_358_object);
		var_358_object = var_357_object;
		GlobalVars[7] = var_357_object;
		var_34_int = 0;

		for(;;) {
			var_31_object->GetLocator(("pt_grave_supply" + (var_34_int + 1)), var_35_bool);
			if(!var_35_bool) { //@nz
			} else {
				var_34_int += 1;
			}
			var_364_object = GlobalVars[7];
			var_364_object->resize(var_34_int);
			@Trace("Total grave supplies: " + var_34_int);
			var_367_object = GlobalVars[14];
			object var_368_object;
			func_100(var_368_object);
			var_368_object = var_367_object;
			GlobalVars[14] = var_367_object;

			for(;;) {
				var_31_object->GetLocator(("pt_bonfire" + (0 + 1)), var_37_bool);
				if(!var_37_bool) //@nz
					break;
				var_376_object = GlobalVars[14];
				var_376_object->add(Obj());
				int var_377_int;
				var_36_int = var_377_int;
				func_7672(var_377_int);
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
void func_9944(int var_6038_int, float var_6039_float)
{
	float var_6043_float;
	var_6039_float = var_6043_float;
	int var_6040_int;
	func_12029(var_6040_int, 529854, 529853, var_6043_float);
	var_6040_int = var_6038_int;
}


// @pe
void func_5849(object var_191_object)
{
	var_191_object->add("r2_house_2_01");
	var_191_object->add("r2_house_2_02");
	var_191_object->add("r2_house_2_03");
	var_191_object->add("r2_house7_02");
	var_191_object->add("r2_house01_01");
	var_191_object->add("r2_house7_01");
	var_191_object->add("r2_house3_01_i2");
	var_191_object->add("r2_house3_01");
	var_191_object->add("r2_house3_02_i2");
	var_191_object->add("r2_house3_02");
	var_191_object->add("r2_house3_03_i2");
	var_191_object->add("r2_house3_03");
	var_191_object->add("r3_house7_01");
	var_191_object->add("r3_house7_02");
}


// @pe
void func_9953(int var_6093_int, float var_6094_float)
{
	float var_6098_float;
	var_6094_float = var_6098_float;
	int var_6095_int;
	func_12029(var_6095_int, 529864, 529863, var_6098_float);
	var_6095_int = var_6093_int;
}


// @pe
void func_4835(int var_2416_int, int var_2417_int, object var_2418_object, object var_2419_object, object var_2420_object, object var_2421_object)
{
	if(var_2417_int == 0) {
		func_760(2, true);
		func_777(2, true, 1);
		int var_2430_int; object var_2431_object; object var_2432_object; object var_2433_object;
		var_2416_int = var_2430_int;
		var_2418_object = var_2431_object;
		var_2419_object = var_2432_object;
		var_2420_object = var_2433_object;
		func_605(2, var_2430_int, var_2431_object, var_2432_object, var_2433_object);
		object var_2434_object;
		var_2421_object = var_2434_object;
		func_270(var_2434_object, 1);
		func_834(2, true, 5);
		func_896(2, false, 5);
	}
	func_743(2, false);
	int var_2445_int; int var_2446_int;
	var_2416_int = var_2445_int;
	var_2417_int = var_2446_int;
	func_2937(2, var_2445_int, var_2446_int);
}


void func_743(int var_735_int, bool var_736_bool)
{
	object var_739_object;
	@GetMainOutdoorScene(var_739_object);
	if(var_739_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_739_object->EnableSubsets((var_735_int + 1), 100, var_736_bool, true);
}
EMIT "Stack[-2] = 0";


// @pe
void func_9962(int var_5803_int, float var_5804_float)
{
	float var_5808_float;
	var_5804_float = var_5808_float;
	int var_5805_int;
	func_12029(var_5805_int, 531085, 531084, var_5808_float);
	var_5805_int = var_5803_int;
}


void func_12012(bool var_4612_bool, int var_4613_int)
{
	object var_4618_object;
	func_11971(var_4618_object);
	object var_4616_object;
	var_4618_object = var_4616_object;
	object var_4617_object;
	var_4616_object->Find(var_4613_int, var_4617_object);
	if(!var_4617_object) //@nz
		var_4612_bool = false;
	var_4617_object->Remove();
	var_4612_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9971(int var_6195_int, float var_6196_float)
{
	float var_6200_float;
	var_6196_float = var_6200_float;
	int var_6197_int;
	func_12029(var_6197_int, 538402, 538401, var_6200_float);
	var_6197_int = var_6195_int;
}


void func_10999(void)
{
	object var_5899_object;
	func_12037(var_5899_object);
	object var_5897_object;
	var_5899_object = var_5897_object;
	object var_5898_object;
	var_5897_object->FindMark(var_5898_object, "b9q01MDobermanGotoFactory");
	if(var_5898_object != 0)
		var_5898_object->Remove();
	var_5897_object->FindMark(var_5898_object, "b9q03Bonfire1");
	if(var_5898_object != 0)
		var_5898_object->Remove();
	var_5897_object->FindMark(var_5898_object, "b9q03Bonfire2");
	if(var_5898_object != 0)
		var_5898_object->Remove();
	var_5897_object->FindMark(var_5898_object, "b9q03Bonfire3");
	if(var_5898_object != 0)
		var_5898_object->Remove();
	var_5897_object->FindMark(var_5898_object, "b9q03Bonfire4");
	if(var_5898_object != 0)
		var_5898_object->Remove();
	var_5897_object->FindMark(var_5898_object, "b9q03DobermanGotoFollower");
	if(var_5898_object != 0)
		var_5898_object->Remove();
	var_5897_object->FindMark(var_5898_object, "b9q03KapellaGotoSpi4ka");
	if(var_5898_object != 0)
		var_5898_object->Remove();
	var_5897_object->FindMark(var_5898_object, "b9q01BlockGotoBoiny");
	if(var_5898_object != 0)
		var_5898_object->Remove();
	var_5897_object->FindMark(var_5898_object, "b9Block");
	if(var_5898_object != 0)
		var_5898_object->Remove();
	bool var_5918_bool;
	func_12012(var_5918_bool, 297);
	bool var_5920_bool;
	func_12012(var_5920_bool, 532);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_760(int var_450_int, bool var_451_bool)
{
	object var_454_object;
	@GetMainOutdoorScene(var_454_object);
	if(var_454_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_454_object->EnableSubsets((var_450_int + 1), 200, var_451_bool, false);
}
EMIT "Stack[-2] = 0";


// @pe
void func_9980(int var_5251_int, float var_5252_float)
{
	float var_5256_float;
	var_5252_float = var_5256_float;
	int var_5253_int;
	func_12029(var_5253_int, 529868, 529867, var_5256_float);
	var_5253_int = var_5251_int;
}


void func_12029(int var_4766_int, int var_4767_int, int var_4768_int, float var_4769_float)
{
	int var_4771_int;
	@AddMessage(var_4767_int, var_4768_int, var_4769_float, var_4771_int);
	@SendWorldWndMessage(6);
	var_4771_int = var_4766_int;
}


void func_3840(int var_3573_int, int var_3574_int, int var_3575_int)
{
	int var_3580_int; int var_3581_int; int var_3582_int; int var_3583_int;
	bool var_3584_bool = false;
	if(var_3575_int > 8) {
		if(var_3575_int < 21)
			var_3584_bool = true;
	}
	if(var_3584_bool != 0) {
		int var_3589_int;
		var_3573_int = var_3589_int;
		func_467(var_3589_int, "pers_rat", "rat.xml", 2);
		int var_3593_int;
		var_3573_int = var_3593_int;
		func_467(var_3593_int, "pers_alkash", "alkash.xml", 2);
		int var_3597_int;
		var_3573_int = var_3597_int;
		func_467(var_3597_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3602_float; int var_3603_int;
		func_1098(var_3602_float, var_3603_int);
		if((2 * var_3602_float) != 0) {
			int var_3605_int; int var_3608_int;
			var_3573_int = var_3605_int;
			var_3580_int = var_3608_int;
			func_467(var_3605_int, "pers_grabitel", "grabitel.xml", var_3608_int);
		}
		if((var_3603_int + 1) >= 2) {
			int var_3613_int;
			var_3573_int = var_3613_int;
			func_467(var_3613_int, "pers_patrool", "patrol.xml", 2);
			bool var_3617_bool; int var_3618_int;
			var_3574_int = var_3618_int;
			func_1305(var_3617_bool, var_3618_int);
			if(var_3617_bool != 0) {
				int var_3619_int;
				var_3573_int = var_3619_int;
				func_467(var_3619_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3624_float; int var_3625_int;
		var_3574_int = var_3625_int;
		func_1188(var_3624_float, var_3625_int);
		if((1 * var_3624_float) != 0) {
			int var_3627_int; int var_3630_int;
			var_3573_int = var_3627_int;
			var_3581_int = var_3630_int;
			func_467(var_3627_int, "pers_bomber", "bomber.xml", var_3630_int);
		}
	} else {
		int var_3644_int;
		var_3573_int = var_3644_int;
		func_467(var_3644_int, "pers_rat", "rat.xml", 4);
		int var_3648_int;
		var_3573_int = var_3648_int;
		func_467(var_3648_int, "pers_alkash", "alkash.xml", 1);
		int var_3652_int;
		var_3573_int = var_3652_int;
		func_467(var_3652_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3657_float; int var_3658_int;
		func_1098(var_3657_float, var_3658_int);
		if((3 * var_3657_float) != 0) {
			int var_3660_int; int var_3663_int;
			var_3573_int = var_3660_int;
			var_3582_int = var_3663_int;
			func_467(var_3660_int, "pers_grabitel", "grabitel.xml", var_3663_int);
		}
		if((var_3658_int + 1) >= 2) {
			int var_3668_int;
			var_3573_int = var_3668_int;
			func_467(var_3668_int, "pers_patrool", "patrol.xml", 1);
			bool var_3672_bool; int var_3673_int;
			var_3574_int = var_3673_int;
			func_1305(var_3672_bool, var_3673_int);
			if(var_3672_bool != 0) {
				int var_3674_int;
				var_3573_int = var_3674_int;
				func_467(var_3674_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3679_float; int var_3680_int;
		var_3574_int = var_3680_int;
		func_1188(var_3679_float, var_3680_int);
		if((1 * var_3679_float) == 0) goto Label_4002;
		int var_3682_int; int var_3685_int;
		var_3573_int = var_3682_int;
		var_3583_int = var_3685_int;
		func_467(var_3682_int, "pers_bomber", "bomber.xml", var_3685_int);
	}
Label_4002:
	bool var_3631_bool; int var_3632_int; int var_3633_int;
	var_3574_int = var_3632_int;
	var_3575_int = var_3633_int;
	func_1278(var_3631_bool, var_3632_int, var_3633_int);
	if(var_3631_bool != 0) {
		int var_3634_int;
		var_3573_int = var_3634_int;
		func_467(var_3634_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3638_bool; int var_3639_int;
	var_3574_int = var_3639_int;
	func_1305(var_3638_bool, var_3639_int);
	if(var_3638_bool != 0) {
		int var_3640_int;
		var_3573_int = var_3640_int;
		func_467(var_3640_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_6917(int var_1739_int, int var_1740_int, object var_1741_object, object var_1742_object, object var_1743_object, object var_1744_object)
{
	if(var_1740_int == 0) {
		func_760(13, false);
		func_777(13, false, 1);
		int var_1752_int; int var_1753_int; object var_1754_object; object var_1755_object; object var_1756_object;
		var_1752_int = 13;
		var_1739_int = var_1753_int;
		var_1741_object = var_1754_object;
		var_1742_object = var_1755_object;
		var_1743_object = var_1756_object;
		func_586(var_1753_int, var_1754_object, var_1755_object, var_1756_object);
		object var_1757_object;
		var_1744_object = var_1757_object;
		func_270(var_1757_object, 0);
		func_834(13, false, 4);
		func_896(13, false, 4);
	}
	int var_1766_int;
	var_1740_int = var_1766_int;
	func_1014(13, var_1766_int);
	int var_1768_int; int var_1769_int;
	var_1739_int = var_1768_int;
	var_1740_int = var_1769_int;
	func_1571(13, var_1768_int, var_1769_int);
}


// @pe
void func_5893(int var_1574_int, int var_1575_int, object var_1576_object, object var_1577_object, object var_1578_object, object var_1579_object)
{
	if(var_1575_int == 0) {
		func_760(8, false);
		func_777(8, false, 1);
		int var_1587_int; int var_1588_int; object var_1589_object; object var_1590_object; object var_1591_object;
		var_1587_int = 8;
		var_1574_int = var_1588_int;
		var_1576_object = var_1589_object;
		var_1577_object = var_1590_object;
		var_1578_object = var_1591_object;
		func_586(var_1588_int, var_1589_object, var_1590_object, var_1591_object);
		object var_1592_object;
		var_1579_object = var_1592_object;
		func_270(var_1592_object, 0);
		func_834(8, false, 4);
		func_896(8, false, 4);
	}
	int var_1601_int;
	var_1575_int = var_1601_int;
	func_947(8, var_1601_int);
	int var_1603_int; int var_1604_int;
	var_1574_int = var_1603_int;
	var_1575_int = var_1604_int;
	func_1571(8, var_1603_int, var_1604_int);
}


void func_12037(object var_4671_object)
{
	object var_4674_object; object var_4675_object;
	@GetMainOutdoorScene(var_4674_object);
	if(var_4674_object == null) {
		@Trace("Can't find main outdoor scene");
		var_4675_object = null;
		var_4675_object = var_4671_object;
	}
	var_4674_object->GetMap(var_4675_object);
	var_4675_object = var_4671_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9989(int var_5259_int, float var_5260_float)
{
	float var_5264_float;
	var_5260_float = var_5264_float;
	int var_5261_int;
	func_12029(var_5261_int, 529870, 529869, var_5264_float);
	var_5261_int = var_5259_int;
}


void func_777(int var_526_int, bool var_527_bool, int var_528_int)
{
	string var_536_string; object var_537_object; int var_538_int; string var_539_string; object var_540_object; int var_541_int; object var_542_object;
	var_536_string = "street_rags" + (var_526_int + 1);
	if(var_527_bool != 0) {
		@GetMainOutdoorScene(var_537_object);
		if(var_537_object == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return 14;
		}
		var_538_int = 1;

		for(;;) {
			if(var_538_int <= var_528_int) {
				var_539_string = (var_536_string + "_") + var_538_int;
				@FindActor(var_540_object, var_539_string);
				if(!var_540_object) //@nz
					@AddActor(var_540_object, var_539_string, var_537_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "do_invis.xml");
				else
					var_540_object->RemoveOnUnload(false);
			var_537_object = null;
	} else {
			var_541_int = 1;

			for(;;) {
				if(!(var_541_int <= var_528_int)) goto Label_833;
				@FindActor(var_542_object, ((var_536_string + "_") + var_541_int));
				if(var_542_object != 0)
					var_542_object->RemoveOnUnload();
				var_542_object = null;
				var_541_int += 1;
			}
	}
	Label_833:
		return 14;

		}
		var_540_object = null;
		var_538_int += 1;
	}
	
}


// @pe
void func_9998(int var_6046_int, float var_6047_float)
{
	float var_6051_float;
	var_6047_float = var_6051_float;
	int var_6048_int;
	func_12029(var_6048_int, 529856, 529855, var_6051_float);
	var_6048_int = var_6046_int;
}


void func_12054(int var_795_int)
{
	int var_797_int;
	@GetVariable("branch", var_797_int);
	var_797_int = var_795_int;
}


// @pe
void func_4887(int var_3545_int, int var_3546_int, object var_3547_object, object var_3548_object, object var_3549_object, object var_3550_object)
{
	if(var_3546_int == 0) {
		func_760(2, false);
		func_777(2, false, 1);
		int var_3559_int; object var_3560_object; object var_3561_object; object var_3562_object;
		var_3545_int = var_3559_int;
		var_3547_object = var_3560_object;
		var_3548_object = var_3561_object;
		var_3549_object = var_3562_object;
		func_684(2, var_3559_int, var_3560_object, var_3561_object, var_3562_object);
		object var_3563_object;
		var_3550_object = var_3563_object;
		func_270(var_3563_object, 2);
		func_834(2, false, 5);
		func_896(2, true, 5);
	}
	func_743(2, false);
	int var_3574_int; int var_3575_int;
	var_3545_int = var_3574_int;
	var_3546_int = var_3575_int;
	func_3840(2, var_3574_int, var_3575_int);
}


// @pe
void func_10007(int var_5717_int, float var_5718_float)
{
	float var_5722_float;
	var_5718_float = var_5722_float;
	int var_5719_int;
	func_12029(var_5719_int, 530813, 530812, var_5722_float);
	var_5719_int = var_5717_int;
}


void func_12060(bool var_4111_bool, int var_4112_int)
{
	int var_4119_int; int var_4120_int; int var_4121_int;
	bool var_4122_bool = false;
	if(var_4112_int > 42000) {
		if(var_4112_int < 42288)
			var_4122_bool = true;
	}
	if(var_4122_bool != 0) {
		var_4119_int = (var_4112_int - 42000) % 24;
		int var_4134_int;
		var_4119_int = var_4134_int;
		func_8259((((var_4112_int - 42000) / 24) + 1), var_4134_int);
		var_4111_bool = true;
		return 8;
	}
	bool var_4160_bool = false;
	if(var_4112_int > 40000) {
		if(var_4112_int < 40288)
			var_4160_bool = true;
	}
	if(var_4160_bool != 0) {
		var_4120_int = (var_4112_int - 40000) / 24;
		var_4121_int = (var_4112_int - 40000) % 24;
		int var_4172_int;
		var_4121_int = var_4172_int;
		func_8304((var_4120_int + 1), var_4172_int);
		int var_4488_int;
		var_4121_int = var_4488_int;
		func_14379((var_4120_int + 1), var_4488_int);
		var_4111_bool = true;
		return 8;
	}
	var_4111_bool = false;
}


// @pe
void func_10016(int var_5435_int, float var_5436_float)
{
	float var_5440_float;
	var_5436_float = var_5440_float;
	int var_5437_int;
	func_12029(var_5437_int, 530183, 530182, var_5440_float);
	var_5437_int = var_5435_int;
}


// @pe
void func_10025(int var_5062_int, float var_5063_float)
{
	float var_5067_float;
	var_5063_float = var_5067_float;
	int var_5064_int;
	func_12029(var_5064_int, 530855, 530854, var_5067_float);
	var_5064_int = var_5062_int;
}


// @pe
void func_10034(int var_5274_int, float var_5275_float)
{
	float var_5279_float;
	var_5275_float = var_5279_float;
	int var_5276_int;
	func_12029(var_5276_int, 529874, 529873, var_5279_float);
	var_5276_int = var_5274_int;
}


void func_1848(int var_1053_int, int var_1054_int, int var_1055_int)
{
	int var_1057_int;
	if((var_1054_int + 1) == 12)
		return 2;
	bool var_1062_bool = false;
	bool var_1063_bool = true;
	var_1065_bool = var_1055_int < 7;
	if(var_1065_bool != 1) {
		var_1067_bool = var_1055_int > 21;
		if(var_1067_bool != 1)
			var_1063_bool = false;
	}
	if(var_1063_bool != 0) {
		if(var_1054_int != 0)
			var_1062_bool = true;
	}
	if(var_1062_bool != 0) {
		float var_1070_float; int var_1071_int;
		var_1054_int = var_1071_int;
		func_1074(var_1070_float, var_1071_int);
		var_1070_float = var_1057_int;
		if(var_1057_int != 0) {
			int var_1073_int; int var_1076_int;
			var_1053_int = var_1073_int;
			var_1057_int = var_1076_int;
			func_467(var_1073_int, "pers_grabitel", "grabitel.xml", var_1076_int);
		}
	}
	bool var_1077_bool = false;
	bool var_1078_bool = false;
	if(var_1054_int == 0) {
		if(var_1055_int < 21)
			var_1078_bool = true;
	}
	if(var_1078_bool != 0) {
		int var_1083_int;
		func_12054(var_1083_int);
		if(var_1083_int == 1)
			var_1077_bool = true;
	}
	if(var_1077_bool != 0) {
		int var_1086_int;
		var_1053_int = var_1086_int;
		func_467(var_1086_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1090_int;
		var_1053_int = var_1090_int;
		func_467(var_1090_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1094_int;
		var_1053_int = var_1094_int;
		func_467(var_1094_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1098_int;
		var_1053_int = var_1098_int;
		func_467(var_1098_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1102_int;
		var_1053_int = var_1102_int;
		func_467(var_1102_int, "pers_woman", "woman.xml", 1);
		int var_1106_int;
		var_1053_int = var_1106_int;
		func_467(var_1106_int, "pers_alkash", "alkash.xml", 1);
		int var_1110_int;
		var_1053_int = var_1110_int;
		func_467(var_1110_int, "pers_girl", "girl.xml", 1);
		int var_1114_int;
		var_1053_int = var_1114_int;
		func_467(var_1114_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_1155_bool = false;
			if(var_1055_int > 8) {
				if(var_1055_int < 21)
					var_1155_bool = true;
			}
			if(var_1155_bool == 0) goto Label_2054;
			int var_1160_int;
			var_1053_int = var_1160_int;
			func_467(var_1160_int, "pers_woman", "woman.xml", 1);
			int var_1164_int;
			var_1053_int = var_1164_int;
			func_467(var_1164_int, "pers_unosha", "unosha.xml", 1);
			int var_1168_int;
			var_1053_int = var_1168_int;
			func_467(var_1168_int, "pers_unosha", "unosha2.xml", 1);
			int var_1172_int;
			var_1053_int = var_1172_int;
			func_467(var_1172_int, "pers_worker", "worker.xml", 1);
			int var_1176_int;
			var_1053_int = var_1176_int;
			func_467(var_1176_int, "pers_worker", "worker2.xml", 1);
			int var_1180_int;
			var_1053_int = var_1180_int;
			func_467(var_1180_int, "pers_alkash", "alkash.xml", 1);
			int var_1184_int;
			var_1053_int = var_1184_int;
			func_467(var_1184_int, "pers_girl", "girl.xml", 1);
			int var_1188_int;
			var_1053_int = var_1188_int;
			func_467(var_1188_int, "pers_girl", "girl2.xml", 1);
			if((var_1054_int + 1) >= 3) {
				int var_1196_int;
				var_1053_int = var_1196_int;
				func_467(var_1196_int, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
			if((var_1054_int + 1) >= 7) {
				int var_1204_int;
				var_1053_int = var_1204_int;
				func_467(var_1204_int, "pers_butcher", "butcher.xml", 2);
			}
	}
Label_2120:
	for(;;) {
		bool var_1118_bool = false;
		bool var_1119_bool = false;
		if(var_1054_int == 0) {
			if(var_1055_int > 12)
				var_1119_bool = true;
		}
		if(var_1119_bool != 0) {
			if(var_1055_int < 22)
				var_1118_bool = true;
		}
		if(var_1118_bool != 0) {
			int var_1126_int;
			var_1053_int = var_1126_int;
			func_467(var_1126_int, "pers_woman", "woman_killme.xml", 1);
		}
		bool var_1130_bool; int var_1131_int; int var_1132_int;
		var_1054_int = var_1131_int;
		var_1055_int = var_1132_int;
		func_1278(var_1130_bool, var_1131_int, var_1132_int);
		if(var_1130_bool != 0) {
			int var_1137_int;
			var_1053_int = var_1137_int;
			func_467(var_1137_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		bool var_1141_bool; int var_1142_int; int var_1143_int;
		var_1054_int = var_1142_int;
		var_1055_int = var_1143_int;
		func_1288(var_1141_bool, var_1142_int, var_1143_int);
		if(var_1141_bool != 0) {
			int var_1151_int;
			var_1053_int = var_1151_int;
			func_467(var_1151_int, "pers_nudegirl", "nudegirl.xml", 1);
		}
		return 2;

	}
	
Label_2054:
	int var_1208_int;
	var_1053_int = var_1208_int;
	func_467(var_1208_int, "pers_woman", "woman.xml", 1);
	int var_1212_int;
	var_1053_int = var_1212_int;
	func_467(var_1212_int, "pers_unosha", "unosha.xml", 1);
	int var_1216_int;
	var_1053_int = var_1216_int;
	func_467(var_1216_int, "pers_unosha", "unosha2.xml", 1);
	int var_1220_int;
	var_1053_int = var_1220_int;
	func_467(var_1220_int, "pers_worker", "worker.xml", 1);
	int var_1224_int;
	var_1053_int = var_1224_int;
	func_467(var_1224_int, "pers_worker", "worker2.xml", 1);
	int var_1228_int;
	var_1053_int = var_1228_int;
	func_467(var_1228_int, "pers_alkash", "alkash.xml", 1);
	if((var_1054_int + 1) >= 3) {
		int var_1236_int;
		var_1053_int = var_1236_int;
		func_467(var_1236_int, "pers_dohodyaga", "dohodyaga.xml", 1);
	}
	if(!((var_1054_int + 1) >= 7)) goto Label_2120;
	int var_1244_int;
	var_1053_int = var_1244_int;
	func_467(var_1244_int, "pers_butcher", "butcher.xml", 3);
}


// @pe
void func_6969(int var_2975_int, int var_2976_int, object var_2977_object, object var_2978_object, object var_2979_object, object var_2980_object)
{
	if(var_2976_int == 0) {
		func_760(13, true);
		func_777(13, true, 1);
		int var_2989_int; object var_2990_object; object var_2991_object; object var_2992_object;
		var_2975_int = var_2989_int;
		var_2977_object = var_2990_object;
		var_2978_object = var_2991_object;
		var_2979_object = var_2992_object;
		func_605(13, var_2989_int, var_2990_object, var_2991_object, var_2992_object);
		object var_2993_object;
		var_2980_object = var_2993_object;
		func_270(var_2993_object, 1);
		func_834(13, true, 4);
		func_896(13, false, 4);
	}
	func_743(13, false);
	int var_3004_int; int var_3005_int;
	var_2975_int = var_3004_int;
	var_2976_int = var_3005_int;
	func_2757(13, var_3004_int, var_3005_int);
}


// @pe
void func_5945(int var_2810_int, int var_2811_int, object var_2812_object, object var_2813_object, object var_2814_object, object var_2815_object)
{
	if(var_2811_int == 0) {
		func_760(8, true);
		func_777(8, true, 1);
		int var_2824_int; object var_2825_object; object var_2826_object; object var_2827_object;
		var_2810_int = var_2824_int;
		var_2812_object = var_2825_object;
		var_2813_object = var_2826_object;
		var_2814_object = var_2827_object;
		func_605(8, var_2824_int, var_2825_object, var_2826_object, var_2827_object);
		object var_2828_object;
		var_2815_object = var_2828_object;
		func_270(var_2828_object, 1);
		func_834(8, true, 4);
		func_896(8, false, 4);
	}
	func_743(8, false);
	int var_2839_int; int var_2840_int;
	var_2810_int = var_2839_int;
	var_2811_int = var_2840_int;
	func_2757(8, var_2839_int, var_2840_int);
}


// @pe
void func_10043(int var_5282_int, float var_5283_float)
{
	float var_5287_float;
	var_5283_float = var_5287_float;
	int var_5284_int;
	func_12029(var_5284_int, 529872, 529871, var_5287_float);
	var_5284_int = var_5282_int;
}


void func_834(int var_637_int, bool var_638_bool, int var_639_int)
{
	string var_648_string; object var_649_object; int var_650_int; string var_651_string; object var_652_object; int var_653_int; string var_654_string; object var_655_object;
	var_648_string = "dr_mark" + (var_637_int + 1);
	if(var_638_bool != 0) {
		@GetMainOutdoorScene(var_649_object);
		if(var_649_object == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return 16;
		}
		var_650_int = 1;

		for(;;) {
			if(var_650_int <= var_639_int) {
				var_651_string = (var_648_string + "_") + var_650_int;
				@FindActor(var_652_object, var_651_string);
				if(!var_652_object) { //@nz
					@AddActor(var_652_object, var_651_string, var_649_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "disease_object.xml");
				} else {
				bool var_670_bool; string var_671_string;
				var_651_string = var_671_string;
				func_189(var_670_bool, var_671_string, "restore");
			}
			var_649_object = null;
	} else {
			var_653_int = 1;

			for(;;) {
				if(!(var_653_int <= var_639_int)) goto Label_895;
				@FindActor(var_655_object, ((var_648_string + "_") + var_653_int));
				if(var_655_object != 0) {
					bool var_680_bool; string var_681_string;
					var_654_string = var_681_string;
					func_189(var_680_bool, var_681_string, "cleanup");
				}
				var_655_object = null;
				var_653_int += 1;
			}
	}
	Label_895:
		return 16;

		}
		var_652_object = null;
		var_650_int += 1;
	}
	
}


// @pe
void func_10052(int var_6054_int, float var_6055_float)
{
	float var_6059_float;
	var_6055_float = var_6059_float;
	int var_6056_int;
	func_12029(var_6056_int, 529858, 529857, var_6059_float);
	var_6056_int = var_6054_int;
}


void func_11078(void)
{
	object var_4755_object;
	func_12037(var_4755_object);
	object var_4753_object;
	var_4755_object = var_4753_object;
	object var_4754_object;
	var_4753_object->FindMark(var_4754_object, "b10q04GirlGotoKapella");
	if(var_4754_object != 0)
		var_4754_object->Remove();
	var_4753_object->FindMark(var_4754_object, "b10q04MatGotoMorlok");
	if(var_4754_object != 0)
		var_4754_object->Remove();
	var_4753_object->FindMark(var_4754_object, "b10q04BlockGotoOfficer");
	if(var_4754_object != 0)
		var_4754_object->Remove();
	var_4753_object->FindMark(var_4754_object, "b10q04KapellaGotoBlock");
	if(var_4754_object != 0)
		var_4754_object->Remove();
	var_4753_object->FindMark(var_4754_object, "b10q04MorlokGotoLaska");
	if(var_4754_object != 0)
		var_4754_object->Remove();
	var_4753_object->FindMark(var_4754_object, "b10q04MorlokGotoMishka");
	if(var_4754_object != 0)
		var_4754_object->Remove();
	var_4753_object->FindMark(var_4754_object, "b10q04MorlokGotoNotkin");
	if(var_4754_object != 0)
		var_4754_object->Remove();
	var_4753_object->FindMark(var_4754_object, "b10q04MorlokGotoSpi4ka");
	if(var_4754_object != 0)
		var_4754_object->Remove();
	var_4753_object->FindMark(var_4754_object, "b10q03KapellaGotoMishka");
	if(var_4754_object != 0)
		var_4754_object->Remove();
	var_4753_object->FindMark(var_4754_object, "b10q03MishkaGotoDoll");
	if(var_4754_object != 0)
		var_4754_object->Remove();
	var_4753_object->FindMark(var_4754_object, "b10q01StarshinaGotoKurgan");
	if(var_4754_object != 0)
		var_4754_object->Remove();
	bool var_4778_bool;
	func_12012(var_4778_bool, 305);
	bool var_4780_bool;
	func_12012(var_4780_bool, 545);
	bool var_4782_bool;
	func_12012(var_4782_bool, 594);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4939(object var_96_object)
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
void func_10061(int var_5701_int, float var_5702_float)
{
	float var_5706_float;
	var_5702_float = var_5706_float;
	int var_5703_int;
	func_12029(var_5703_int, 530666, 530665, var_5706_float);
	var_5703_int = var_5701_int;
}


// @pe
void func_10070(int var_5335_int, float var_5336_float)
{
	float var_5340_float;
	var_5336_float = var_5340_float;
	int var_5337_int;
	func_12029(var_5337_int, 529878, 529877, var_5340_float);
	var_5337_int = var_5335_int;
}


void func_12121(void)
{
	float var_4377_float; float var_4379_float;
	@GetGameTime(var_4377_float);
	int var_4378_int = 1;
	
	for(;;) {
		if(var_4378_int < 288) {
			var_4379_float = 1.0 * var_4378_int;
			if(var_4379_float < var_4377_float) {
			} else {
			@SetTimeEvent((40000 + var_4378_int), var_4379_float);
			var_4379_float -= 0.0033333334;
			if(var_4379_float < var_4377_float) {
				goto Label_12146;
			}
			@SetTimeEvent((42000 + var_4378_int), var_4379_float);
		}
		func_8187();
		func_14329();
		}
	Label_12146:
		var_4378_int += 1;
	}
	
}


// @pe
void func_10079(int var_5297_int, float var_5298_float)
{
	float var_5302_float;
	var_5298_float = var_5302_float;
	int var_5299_int;
	func_12029(var_5299_int, 520962, 520961, var_5302_float);
	var_5299_int = var_5297_int;
}


// @pe
void func_10088(int var_6062_int, float var_6063_float)
{
	float var_6067_float;
	var_6063_float = var_6067_float;
	int var_6064_int;
	func_12029(var_6064_int, 529860, 529859, var_6067_float);
	var_6064_int = var_6062_int;
}


// @pe
void func_7021(int var_4105_int, int var_4106_int, object var_4107_object, object var_4108_object, object var_4109_object, object var_4110_object)
{
	if(var_4106_int == 0) {
		func_760(13, false);
		func_777(13, false, 1);
		int var_4119_int; object var_4120_object; object var_4121_object; object var_4122_object;
		var_4105_int = var_4119_int;
		var_4107_object = var_4120_object;
		var_4108_object = var_4121_object;
		var_4109_object = var_4122_object;
		func_684(13, var_4119_int, var_4120_object, var_4121_object, var_4122_object);
		object var_4123_object;
		var_4110_object = var_4123_object;
		func_270(var_4123_object, 2);
		func_834(13, false, 4);
		func_896(13, true, 4);
	}
	func_743(13, false);
	int var_4134_int; int var_4135_int;
	var_4105_int = var_4134_int;
	var_4106_int = var_4135_int;
	func_3652(13, var_4134_int, var_4135_int);
}


// @pe
void func_5997(int var_3940_int, int var_3941_int, object var_3942_object, object var_3943_object, object var_3944_object, object var_3945_object)
{
	if(var_3941_int == 0) {
		func_760(8, false);
		func_777(8, false, 1);
		int var_3954_int; object var_3955_object; object var_3956_object; object var_3957_object;
		var_3940_int = var_3954_int;
		var_3942_object = var_3955_object;
		var_3943_object = var_3956_object;
		var_3944_object = var_3957_object;
		func_684(8, var_3954_int, var_3955_object, var_3956_object, var_3957_object);
		object var_3958_object;
		var_3945_object = var_3958_object;
		func_270(var_3958_object, 2);
		func_834(8, false, 4);
		func_896(8, true, 4);
	}
	func_743(8, false);
	int var_3969_int; int var_3970_int;
	var_3940_int = var_3969_int;
	var_3941_int = var_3970_int;
	func_3652(8, var_3969_int, var_3970_int);
}


// @pe
void func_10097(int var_5312_int, float var_5313_float)
{
	float var_5317_float;
	var_5313_float = var_5317_float;
	int var_5314_int;
	func_12029(var_5314_int, 520964, 520963, var_5317_float);
	var_5314_int = var_5312_int;
}


void func_2937(int var_2444_int, int var_2445_int, int var_2446_int)
{
	int var_2449_int; int var_2450_int;
	bool var_2451_bool = false;
	if(var_2446_int > 8) {
		if(var_2446_int < 21)
			var_2451_bool = true;
	}
	if(var_2451_bool != 0) {
		int var_2456_int;
		var_2444_int = var_2456_int;
		func_467(var_2456_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_2460_int;
		var_2444_int = var_2460_int;
		func_467(var_2460_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		int var_2464_int;
		var_2444_int = var_2464_int;
		func_467(var_2464_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2468_int;
		var_2444_int = var_2468_int;
		func_493(var_2468_int, "fog", "fog.xml", 6);
		if(var_2445_int >= 5) {
			int var_2474_int;
			var_2444_int = var_2474_int;
			func_493(var_2474_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2479_float; int var_2480_int;
		func_1188(var_2479_float, var_2480_int);
		if((1 * var_2479_float) != 0) {
			int var_2482_int; int var_2485_int;
			var_2444_int = var_2482_int;
			var_2449_int = var_2485_int;
			func_467(var_2482_int, "pers_bomber", "bomber.xml", var_2485_int);
		}
	} else {
		int var_2530_int;
		var_2444_int = var_2530_int;
		func_467(var_2530_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2534_int;
		var_2444_int = var_2534_int;
		func_467(var_2534_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2538_int;
		var_2444_int = var_2538_int;
		func_467(var_2538_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2542_int;
		var_2444_int = var_2542_int;
		func_493(var_2542_int, "fog", "fog.xml", 6);
		if(var_2480_int >= 5) {
			int var_2548_int;
			var_2444_int = var_2548_int;
			func_493(var_2548_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2553_float; int var_2554_int;
		var_2445_int = var_2554_int;
		func_1188(var_2553_float, var_2554_int);
		if((1 * var_2553_float) == 0) goto Label_3055;
		int var_2556_int; int var_2559_int;
		var_2444_int = var_2556_int;
		var_2450_int = var_2559_int;
		func_467(var_2556_int, "pers_bomber", "bomber.xml", var_2559_int);
	}
Label_3055:
	int var_2486_int;
	var_2444_int = var_2486_int;
	func_480(var_2486_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2492_int;
	var_2444_int = var_2492_int;
	func_480(var_2492_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2498_int;
	var_2444_int = var_2498_int;
	func_480(var_2498_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2504_int;
	var_2444_int = var_2504_int;
	func_480(var_2504_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_2510_bool; int var_2511_int; int var_2512_int;
	var_2445_int = var_2511_int;
	var_2446_int = var_2512_int;
	func_1278(var_2510_bool, var_2511_int, var_2512_int);
	if(var_2510_bool != 0) {
		int var_2513_int;
		var_2444_int = var_2513_int;
		func_467(var_2513_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_2517_bool; int var_2518_int; int var_2519_int;
	var_2445_int = var_2518_int;
	var_2446_int = var_2519_int;
	func_1288(var_2517_bool, var_2518_int, var_2519_int);
	if(var_2517_bool != 0) {
		int var_2520_int;
		var_2444_int = var_2520_int;
		func_467(var_2520_int, "pers_nudegirl", "nudegirl.xml", 1);
	}
	bool var_2524_bool; int var_2525_int;
	var_2445_int = var_2525_int;
	func_1305(var_2524_bool, var_2525_int);
	if(var_2524_bool != 0) {
		int var_2526_int;
		var_2444_int = var_2526_int;
		func_467(var_2526_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_10106(int var_5320_int, float var_5321_float)
{
	float var_5325_float;
	var_5321_float = var_5325_float;
	int var_5322_int;
	func_12029(var_5322_int, 529876, 529875, var_5325_float);
	var_5322_int = var_5320_int;
}


void func_12156(int var_4547_int, float var_4548_float)
{
	int var_4550_int;
	if(var_4547_int == 45058) {
		object var_4553_object; object var_4554_object;
		var_4555_object = GlobalVars[16];
		var_4555_object = var_4553_object;
		var_4556_object = GlobalVars[16];
		var_4556_object = var_4554_object;
		func_10344();
		bool var_4632_bool;
		func_189(var_4632_bool, "quest_b1_01", "cleanup");
		object var_4635_object;
		func_111(var_4635_object, "quest_b2_01");
		object var_4643_object;
		func_111(var_4643_object, "quest_b2_03");
	}
	if(var_4547_int == 45079) {
		object var_4647_object; object var_4648_object;
		var_4649_object = GlobalVars[16];
		var_4649_object = var_4647_object;
		var_4650_object = GlobalVars[16];
		var_4650_object = var_4648_object;
		func_11469();
	}
	if(var_4547_int == 45080) {
		object var_4663_object; object var_4664_object;
		var_4665_object = GlobalVars[16];
		var_4665_object = var_4663_object;
		var_4666_object = GlobalVars[16];
		var_4666_object = var_4664_object;
		func_10868();
		bool var_4694_bool;
		func_189(var_4694_bool, "quest_b7_01", "cleanup");
		object var_4697_object;
		func_111(var_4697_object, "quest_b8_01");
		object var_4699_object;
		func_111(var_4699_object, "quest_b8_03");
	}
	if(var_4547_int == 45070) {
		object var_4703_object; object var_4704_object;
		var_4705_object = GlobalVars[16];
		var_4705_object = var_4703_object;
		var_4706_object = GlobalVars[16];
		var_4706_object = var_4704_object;
		func_10212();
	}
	if(var_4547_int == 45071) {
		object var_4711_object; object var_4712_object;
		var_4713_object = GlobalVars[16];
		var_4713_object = var_4711_object;
		var_4714_object = GlobalVars[16];
		var_4714_object = var_4712_object;
		func_10226();
	}
	if(var_4547_int == 45068) {
		object var_4728_object; object var_4729_object;
		var_4730_object = GlobalVars[16];
		var_4730_object = var_4728_object;
		var_4731_object = GlobalVars[16];
		var_4731_object = var_4729_object;
		func_11483();
		bool var_4734_bool;
		func_189(var_4734_bool, "quest_b1_01", "remove_whitemask");
	}
	if(var_4547_int == 45069) {
		object var_4739_object; object var_4740_object;
		var_4741_object = GlobalVars[16];
		var_4741_object = var_4739_object;
		var_4742_object = GlobalVars[16];
		var_4742_object = var_4740_object;
		func_11504();
	}
	if(var_4547_int == 45086) {
		object var_4747_object; object var_4748_object;
		var_4749_object = GlobalVars[16];
		var_4749_object = var_4747_object;
		var_4750_object = GlobalVars[16];
		var_4750_object = var_4748_object;
		func_11078();
		bool var_4784_bool;
		func_189(var_4784_bool, "quest_b10_01", "cleanup");
		object var_4787_object;
		func_122(var_4787_object, "quest_b11_01");
	}
	if(var_4547_int == 45087) {
		object var_4797_object; object var_4798_object;
		var_4799_object = GlobalVars[16];
		var_4799_object = var_4797_object;
		var_4800_object = GlobalVars[16];
		var_4800_object = var_4798_object;
		func_11175();
		object var_4816_object; object var_4817_object;
		var_4818_object = GlobalVars[16];
		var_4818_object = var_4816_object;
		var_4819_object = GlobalVars[16];
		var_4819_object = var_4817_object;
		func_11238();
		bool var_4853_bool;
		func_189(var_4853_bool, "quest_b11_01", "cleanup");
		object var_4856_object;
		func_111(var_4856_object, "quest_b12_01");
	}
	if(var_4547_int == 45088) {
		bool var_4860_bool; object var_4861_object;
		var_4862_object = GlobalVars[16];
		var_4862_object = var_4861_object;
		func_11547(var_4861_object);
		if(!var_4860_bool) { //@nz
			int var_4868_int; float var_4869_float;
			var_4548_float = var_4869_float;
			func_9629(var_4868_int, var_4869_float);
		}
	}
	if(var_4547_int == 45089) {
		bool var_4879_bool; object var_4880_object;
		var_4881_object = GlobalVars[16];
		var_4881_object = var_4880_object;
		func_11559(var_4880_object);
		if(var_4879_bool != 0) {
			int var_4886_int; float var_4887_float;
			var_4548_float = var_4887_float;
			func_9683(var_4886_int, var_4887_float);
		}
	}
	if(var_4547_int == 45090) {
		bool var_4894_bool; object var_4895_object;
		var_4896_object = GlobalVars[16];
		var_4896_object = var_4895_object;
		func_11571(var_4895_object);
		if(!var_4894_bool) { //@nz
			int var_4902_int; float var_4903_float;
			var_4548_float = var_4903_float;
			func_9728(var_4902_int, var_4903_float);
		}
	}
	if(var_4547_int == 45091) {
		bool var_4910_bool; object var_4911_object;
		var_4912_object = GlobalVars[16];
		var_4912_object = var_4911_object;
		func_11583(var_4911_object);
		if(!var_4910_bool) { //@nz
			int var_4918_int; float var_4919_float;
			var_4548_float = var_4919_float;
			func_9737(var_4918_int, var_4919_float);
		}
	}
	if(var_4547_int == 45092) {
		bool var_4926_bool; object var_4927_object;
		var_4928_object = GlobalVars[16];
		var_4928_object = var_4927_object;
		func_11595(var_4927_object);
		if(!var_4926_bool) { //@nz
			int var_4934_int; float var_4935_float;
			var_4548_float = var_4935_float;
			func_9746(var_4934_int, var_4935_float);
		}
	}
	if(var_4547_int == 45093) {
		int var_4942_int; float var_4943_float;
		var_4548_float = var_4943_float;
		func_9719(var_4942_int, var_4943_float);
	}
	if(var_4547_int == 45111) {
		int var_4950_int; float var_4951_float;
		var_4548_float = var_4951_float;
		func_9782(var_4950_int, var_4951_float);
	}
	if(var_4547_int == 45112) {
		int var_4958_int; float var_4959_float;
		var_4548_float = var_4959_float;
		func_9764(var_4958_int, var_4959_float);
	}
	if(var_4547_int == 45113) {
		int var_4966_int; float var_4967_float;
		var_4548_float = var_4967_float;
		func_9845(var_4966_int, var_4967_float);
	}
	if(var_4547_int == 45067) {
		bool var_4974_bool; object var_4975_object;
		var_4976_object = GlobalVars[16];
		var_4976_object = var_4975_object;
		func_11787(var_4975_object);
		if(!var_4974_bool) { //@nz
			int var_4982_int; float var_4983_float;
			var_4548_float = var_4983_float;
			func_9854(var_4982_int, var_4983_float);
		}
	}
	if(var_4547_int == 45066) {
		object var_4990_object; object var_4991_object;
		var_4992_object = GlobalVars[16];
		var_4992_object = var_4990_object;
		var_4993_object = GlobalVars[16];
		var_4993_object = var_4991_object;
		func_10762();
		bool var_5011_bool;
		func_189(var_5011_bool, "quest_b5_01", "cleanup");
		object var_5014_object;
		func_111(var_5014_object, "quest_b6_01");
	}
	if(var_4547_int == 45065) {
		object var_5018_object; object var_5019_object;
		var_5020_object = GlobalVars[16];
		var_5020_object = var_5018_object;
		var_5021_object = GlobalVars[16];
		var_5021_object = var_5019_object;
		func_10714();
		bool var_5041_bool;
		func_189(var_5041_bool, "quest_b4_01", "cleanup");
		object var_5044_object;
		func_111(var_5044_object, "quest_b5_01");
	}
	if(var_4547_int == 45081) {
		object var_5048_object; object var_5049_object;
		var_5050_object = GlobalVars[16];
		var_5050_object = var_5048_object;
		var_5051_object = GlobalVars[16];
		var_5051_object = var_5049_object;
		func_10302();
	}
	if(var_4547_int == 45082) {
		object var_5056_object; object var_5057_object;
		var_5058_object = GlobalVars[16];
		var_5058_object = var_5056_object;
		var_5059_object = GlobalVars[16];
		var_5059_object = var_5057_object;
		func_10316();
		int var_5062_int; float var_5063_float;
		var_4548_float = var_5063_float;
		func_10025(var_5062_int, var_5063_float);
		object var_5068_object;
		func_111(var_5068_object, "quest_b6_02");
		bool var_5070_bool;
		func_189(var_5070_bool, "quest_b6_02", "place_klara");
	}
	if(var_4547_int == 45062)
		@QueuePlayMovie("army.wmv");
	if(var_4547_int == 45061)
		@QueuePlayMovie("aglaja.wmv");
	if(var_4547_int == 45060) {
		object var_5081_object; object var_5082_object;
		var_5083_object = GlobalVars[16];
		var_5083_object = var_5081_object;
		var_5084_object = GlobalVars[16];
		var_5084_object = var_5082_object;
		func_10634();
		bool var_5114_bool;
		func_189(var_5114_bool, "quest_b3_01", "cleanup");
		object var_5117_object;
		func_122(var_5117_object, "quest_b4_01");
	}
	if(var_4547_int == 45074) {
		object var_5121_object; object var_5122_object;
		var_5123_object = GlobalVars[16];
		var_5123_object = var_5121_object;
		var_5124_object = GlobalVars[16];
		var_5124_object = var_5122_object;
		func_10272();
	}
	if(var_4547_int == 45075) {
		bool var_5129_bool; object var_5130_object;
		var_5131_object = GlobalVars[16];
		var_5131_object = var_5130_object;
		func_11881(var_5130_object);
		if(!var_5129_bool) { //@nz
			int var_5137_int; float var_5138_float;
			var_4548_float = var_5138_float;
			func_9836(var_5137_int, var_5138_float);
		}
	}
	if(var_4547_int == 45072) {
		object var_5145_object; object var_5146_object;
		var_5147_object = GlobalVars[16];
		var_5147_object = var_5145_object;
		var_5148_object = GlobalVars[16];
		var_5148_object = var_5146_object;
		func_10240();
		object var_5151_object; object var_5152_object;
		var_5153_object = GlobalVars[16];
		var_5153_object = var_5151_object;
		var_5154_object = GlobalVars[16];
		var_5154_object = var_5152_object;
		func_10254();
	}
	if(var_4547_int == 45073) {
		object var_5159_object; object var_5160_object;
		var_5161_object = GlobalVars[16];
		var_5161_object = var_5159_object;
		var_5162_object = GlobalVars[16];
		var_5162_object = var_5160_object;
		func_10263();
	}
	if(var_4547_int == 45076) {
		bool var_5165_bool; object var_5166_object;
		var_5167_object = GlobalVars[16];
		var_5167_object = var_5166_object;
		func_11869(var_5166_object);
		if(var_5165_bool != 0) {
			int var_5172_int; float var_5173_float;
			var_4548_float = var_5173_float;
			func_9809(var_5172_int, var_5173_float);
		}
	}
	if(var_4547_int == 45077) {
		bool var_5180_bool; object var_5181_object;
		var_5182_object = GlobalVars[16];
		var_5182_object = var_5181_object;
		func_11905(var_5181_object);
		if(!var_5180_bool) { //@nz
			int var_5188_int; float var_5189_float;
			var_4548_float = var_5189_float;
			func_9818(var_5188_int, var_5189_float);
		}
	}
	if(var_4547_int == 45078) {
		object var_5196_object; object var_5197_object;
		var_5198_object = GlobalVars[16];
		var_5198_object = var_5196_object;
		var_5199_object = GlobalVars[16];
		var_5199_object = var_5197_object;
		func_11439();
		object var_5202_object; object var_5203_object;
		var_5204_object = GlobalVars[16];
		var_5204_object = var_5202_object;
		var_5205_object = GlobalVars[16];
		var_5205_object = var_5203_object;
		func_10806();
		bool var_5229_bool;
		func_189(var_5229_bool, "quest_b6_01", "cleanup");
		object var_5232_object;
		func_111(var_5232_object, "quest_b7_01");
	}
	if(var_4547_int == 45125) {
		int var_5236_int; float var_5237_float;
		var_4548_float = var_5237_float;
		func_9935(var_5236_int, var_5237_float);
	}
	if(var_4547_int == 45126) {
		bool var_5244_bool; object var_5245_object;
		var_5246_object = GlobalVars[16];
		var_5246_object = var_5245_object;
		func_11857(var_5245_object);
		if(var_5244_bool != 0) {
			int var_5251_int; float var_5252_float;
			var_4548_float = var_5252_float;
			func_9980(var_5251_int, var_5252_float);
		}
	}
	if(var_4547_int == 45127) {
		int var_5259_int; float var_5260_float;
		var_4548_float = var_5260_float;
		func_9989(var_5259_int, var_5260_float);
	}
	if(var_4547_int == 45128) {
		bool var_5267_bool; object var_5268_object;
		var_5269_object = GlobalVars[16];
		var_5269_object = var_5268_object;
		func_11619(var_5268_object);
		if(var_5267_bool != 0) {
			int var_5274_int; float var_5275_float;
			var_4548_float = var_5275_float;
			func_10034(var_5274_int, var_5275_float);
		}
	}
	if(var_4547_int == 45129) {
		int var_5282_int; float var_5283_float;
		var_4548_float = var_5283_float;
		func_10043(var_5282_int, var_5283_float);
	}
	if(var_4547_int == 45130) {
		bool var_5290_bool; object var_5291_object;
		var_5292_object = GlobalVars[16];
		var_5292_object = var_5291_object;
		func_11917(var_5291_object);
		if(var_5290_bool != 0) {
			int var_5297_int; float var_5298_float;
			var_4548_float = var_5298_float;
			func_10079(var_5297_int, var_5298_float);
		}
	}
	if(var_4547_int == 45131) {
		bool var_5305_bool; object var_5306_object;
		var_5307_object = GlobalVars[16];
		var_5307_object = var_5306_object;
		func_11511(var_5306_object);
		if(var_5305_bool != 0) {
			int var_5312_int; float var_5313_float;
			var_4548_float = var_5313_float;
			func_10097(var_5312_int, var_5313_float);
		}
	}
	if(var_4547_int == 45132) {
		int var_5320_int; float var_5321_float;
		var_4548_float = var_5321_float;
		func_10106(var_5320_int, var_5321_float);
	}
	if(var_4547_int == 45133) {
		bool var_5328_bool; object var_5329_object;
		var_5330_object = GlobalVars[16];
		var_5330_object = var_5329_object;
		func_11523(var_5329_object);
		if(var_5328_bool != 0) {
			int var_5335_int; float var_5336_float;
			var_4548_float = var_5336_float;
			func_10070(var_5335_int, var_5336_float);
		}
	}
	if(var_4547_int == 45134) {
		int var_5343_int; float var_5344_float;
		var_4548_float = var_5344_float;
		func_10115(var_5343_int, var_5344_float);
	}
	if(var_4547_int == 45135) {
		bool var_5351_bool = false;
		bool var_5352_bool; object var_5353_object;
		var_5354_object = GlobalVars[16];
		var_5354_object = var_5353_object;
		func_11535(var_5353_object);
		if(var_5352_bool != 0) {
			bool var_5359_bool; object var_5360_object;
			var_5361_object = GlobalVars[16];
			var_5361_object = var_5360_object;
			func_11823(var_5360_object);
			if(!var_5359_bool) //@nz
				var_5351_bool = true;
		}
		if(var_5351_bool != 0) {
			int var_5367_int; float var_5368_float;
			var_4548_float = var_5368_float;
			func_10124(var_5367_int, var_5368_float);
		}
	}
	if(var_4547_int == 45136) {
		int var_5375_int; float var_5376_float;
		var_4548_float = var_5376_float;
		func_10151(var_5375_int, var_5376_float);
	}
	if(var_4547_int == 45137) {
		int var_5383_int; float var_5384_float;
		var_4548_float = var_5384_float;
		func_10178(var_5383_int, var_5384_float);
	}
	if(var_4547_int == 45138) {
		int var_5391_int; float var_5392_float;
		var_4548_float = var_5392_float;
		func_10160(var_5391_int, var_5392_float);
	}
	if(var_4547_int == 45139) {
		int var_5399_int; float var_5400_float;
		var_4548_float = var_5400_float;
		func_10160(var_5399_int, var_5400_float);
	}
	if(var_4547_int == 45140) {
		int var_5403_int; float var_5404_float;
		var_4548_float = var_5404_float;
		func_9665(var_5403_int, var_5404_float);
	}
	if(var_4547_int == 45141) {
		int var_5411_int; float var_5412_float;
		var_4548_float = var_5412_float;
		func_9692(var_5411_int, var_5412_float);
	}
	if(var_4547_int == 45142) {
		int var_5419_int; float var_5420_float;
		var_4548_float = var_5420_float;
		func_9656(var_5419_int, var_5420_float);
	}
	if(var_4547_int == 45143) {
		int var_5427_int; float var_5428_float;
		var_4548_float = var_5428_float;
		func_9674(var_5427_int, var_5428_float);
	}
	if(var_4547_int == 45144) {
		int var_5435_int; float var_5436_float;
		var_4548_float = var_5436_float;
		func_10016(var_5435_int, var_5436_float);
	}
	if(var_4547_int == 45262) {
		object var_5443_object; object var_5444_object;
		var_5445_object = GlobalVars[16];
		var_5445_object = var_5443_object;
		var_5446_object = GlobalVars[16];
		var_5446_object = var_5444_object;
		func_11347();
	}
	if(var_4547_int == 45263) {
		object var_5457_object; object var_5458_object;
		var_5459_object = GlobalVars[16];
		var_5459_object = var_5457_object;
		var_5460_object = GlobalVars[16];
		var_5460_object = var_5458_object;
		func_11364();
	}
	if(var_4547_int == 45147) {
		bool var_5471_bool = false;
		bool var_5472_bool; object var_5473_object;
		var_5474_object = GlobalVars[16];
		var_5474_object = var_5473_object;
		func_11631(var_5473_object);
		if(!var_5472_bool) { //@nz
			bool var_5480_bool; object var_5481_object;
			var_5482_object = GlobalVars[16];
			var_5482_object = var_5481_object;
			func_11643(var_5481_object);
			if(var_5480_bool != 0)
				var_5471_bool = true;
		}
		if(var_5471_bool != 0) {
			int var_5487_int; float var_5488_float;
			var_4548_float = var_5488_float;
			func_10187(var_5487_int, var_5488_float);
		}
	}
	if(var_4547_int == 45148) {
		object var_5495_object;
		func_122(var_5495_object, "quest_b9_03");
	}
	if(var_4547_int == 45149) {
		object var_5499_object;
		func_111(var_5499_object, "quest_b10_04");
	}
	if(var_4547_int == 45150) {
		object var_5503_object;
		func_111(var_5503_object, "quest_b11_04");
	}
	if(var_4547_int == 45151) {
		bool var_5507_bool; object var_5508_object;
		var_5509_object = GlobalVars[16];
		var_5509_object = var_5508_object;
		func_11655(var_5508_object);
		if(var_5507_bool != 0) {
			int var_5514_int; float var_5515_float;
			var_4548_float = var_5515_float;
			func_9701(var_5514_int, var_5515_float);
		}
	}
	if(var_4547_int == 45152) {
		bool var_5522_bool; object var_5523_object;
		var_5524_object = GlobalVars[16];
		var_5524_object = var_5523_object;
		func_11835(var_5522_bool, var_5523_object);
		if(var_5522_bool != 0) {
			int var_5527_int; float var_5528_float;
			var_4548_float = var_5528_float;
			func_9557(var_5527_int, var_5528_float);
		}
	}
	if(var_4547_int == 45153) {
		bool var_5535_bool; object var_5536_object;
		var_5537_object = GlobalVars[16];
		var_5537_object = var_5536_object;
		func_11835(var_5535_bool, var_5536_object);
		if(var_5535_bool != 0) {
			int var_5538_int; float var_5539_float;
			var_4548_float = var_5539_float;
			func_9566(var_5538_int, var_5539_float);
		}
	}
	if(var_4547_int == 45154) {
		bool var_5546_bool; object var_5547_object;
		var_5548_object = GlobalVars[16];
		var_5548_object = var_5547_object;
		func_11835(var_5546_bool, var_5547_object);
		if(var_5546_bool != 0) {
			int var_5549_int; float var_5550_float;
			var_4548_float = var_5550_float;
			func_9575(var_5549_int, var_5550_float);
		}
	}
	if(var_4547_int == 45155) {
		bool var_5557_bool; object var_5558_object;
		var_5559_object = GlobalVars[16];
		var_5559_object = var_5558_object;
		func_11835(var_5557_bool, var_5558_object);
		if(var_5557_bool != 0) {
			int var_5560_int; float var_5561_float;
			var_4548_float = var_5561_float;
			func_9584(var_5560_int, var_5561_float);
		}
	}
	if(var_4547_int == 45156) {
		bool var_5568_bool; object var_5569_object;
		var_5570_object = GlobalVars[16];
		var_5570_object = var_5569_object;
		func_11835(var_5568_bool, var_5569_object);
		if(var_5568_bool != 0) {
			int var_5571_int; float var_5572_float;
			var_4548_float = var_5572_float;
			func_9593(var_5571_int, var_5572_float);
		}
	}
	if(var_4547_int == 45157) {
		bool var_5579_bool; object var_5580_object;
		var_5581_object = GlobalVars[16];
		var_5581_object = var_5580_object;
		func_11835(var_5579_bool, var_5580_object);
		if(var_5579_bool != 0) {
			int var_5582_int; float var_5583_float;
			var_4548_float = var_5583_float;
			func_9602(var_5582_int, var_5583_float);
		}
	}
	if(var_4547_int == 45158) {
		bool var_5590_bool; object var_5591_object;
		var_5592_object = GlobalVars[16];
		var_5592_object = var_5591_object;
		func_11835(var_5590_bool, var_5591_object);
		if(var_5590_bool != 0) {
			int var_5593_int; float var_5594_float;
			var_4548_float = var_5594_float;
			func_9611(var_5593_int, var_5594_float);
		}
	}
	if(var_4547_int == 45159) {
		bool var_5601_bool; object var_5602_object;
		var_5603_object = GlobalVars[16];
		var_5603_object = var_5602_object;
		func_11835(var_5601_bool, var_5602_object);
		if(var_5601_bool != 0) {
			int var_5604_int; float var_5605_float;
			var_4548_float = var_5605_float;
			func_9620(var_5604_int, var_5605_float);
		}
	}
	if(var_4547_int == 45160) {
		bool var_5612_bool; object var_5613_object;
		var_5614_object = GlobalVars[16];
		var_5614_object = var_5613_object;
		func_11835(var_5612_bool, var_5613_object);
		if(var_5612_bool != 0) {
			int var_5615_int; float var_5616_float;
			var_4548_float = var_5616_float;
			func_9647(var_5615_int, var_5616_float);
		}
	}
	if(var_4547_int == 45161) {
		bool var_5623_bool; object var_5624_object;
		var_5625_object = GlobalVars[16];
		var_5625_object = var_5624_object;
		func_11835(var_5623_bool, var_5624_object);
		if(var_5623_bool != 0) {
			int var_5626_int; float var_5627_float;
			var_4548_float = var_5627_float;
			func_9710(var_5626_int, var_5627_float);
		}
	}
	if(var_4547_int == 45162) {
		bool var_5634_bool; object var_5635_object;
		var_5636_object = GlobalVars[16];
		var_5636_object = var_5635_object;
		func_11835(var_5634_bool, var_5635_object);
		if(var_5634_bool != 0) {
			int var_5637_int; float var_5638_float;
			var_4548_float = var_5638_float;
			func_9755(var_5637_int, var_5638_float);
		}
	}
	if(var_4547_int == 45185) {
		bool var_5645_bool; object var_5646_object;
		var_5647_object = GlobalVars[16];
		var_5647_object = var_5646_object;
		func_11667(var_5646_object);
		if(!var_5645_bool) { //@nz
			int var_5653_int; float var_5654_float;
			var_4548_float = var_5654_float;
			func_9899(var_5653_int, var_5654_float);
		}
	}
	if(var_4547_int == 45186) {
		bool var_5661_bool; object var_5662_object;
		var_5663_object = GlobalVars[16];
		var_5663_object = var_5662_object;
		func_11679(var_5662_object);
		if(!var_5661_bool) { //@nz
			int var_5669_int; float var_5670_float;
			var_4548_float = var_5670_float;
			func_10142(var_5669_int, var_5670_float);
		}
	}
	if(var_4547_int == 45187) {
		bool var_5677_bool; object var_5678_object;
		var_5679_object = GlobalVars[16];
		var_5679_object = var_5678_object;
		func_11691(var_5678_object);
		if(!var_5677_bool) { //@nz
			int var_5685_int; float var_5686_float;
			var_4548_float = var_5686_float;
			func_9638(var_5685_int, var_5686_float);
		}
	}
	if(var_4547_int == 45188) {
		bool var_5693_bool; object var_5694_object;
		var_5695_object = GlobalVars[16];
		var_5695_object = var_5694_object;
		func_11703(var_5694_object);
		if(!var_5693_bool) { //@nz
			int var_5701_int; float var_5702_float;
			var_4548_float = var_5702_float;
			func_10061(var_5701_int, var_5702_float);
		}
	}
	if(var_4547_int == 45189) {
		bool var_5709_bool; object var_5710_object;
		var_5711_object = GlobalVars[16];
		var_5711_object = var_5710_object;
		func_11763(var_5710_object);
		if(!var_5709_bool) { //@nz
			int var_5717_int; float var_5718_float;
			var_4548_float = var_5718_float;
			func_10007(var_5717_int, var_5718_float);
		}
	}
	if(var_4547_int == 45190) {
		int var_5725_int; float var_5726_float;
		var_4548_float = var_5726_float;
		func_9872(var_5725_int, var_5726_float);
	}
	if(var_4547_int == 45191) {
		int var_5733_int; float var_5734_float;
		var_4548_float = var_5734_float;
		func_9881(var_5733_int, var_5734_float);
	}
	if(var_4547_int == 45192) {
		object var_5741_object; object var_5742_object;
		var_5743_object = GlobalVars[16];
		var_5743_object = var_5741_object;
		var_5744_object = GlobalVars[16];
		var_5744_object = var_5742_object;
		func_10309();
	}
	if(var_4547_int == 45193) {
		object var_5749_object;
		func_111(var_5749_object, "quest_b1_05");
	}
	if(var_4547_int == 45194) {
		bool var_5753_bool; object var_5754_object;
		var_5755_object = GlobalVars[16];
		var_5755_object = var_5754_object;
		func_11715(var_5754_object);
		if(!var_5753_bool) { //@nz
			object var_5761_object; object var_5762_object;
			var_5763_object = GlobalVars[16];
			var_5763_object = var_5761_object;
			var_5764_object = GlobalVars[16];
			var_5764_object = var_5762_object;
			func_11298();
			int var_5775_int; float var_5776_float;
			var_4548_float = var_5776_float;
			func_9791(var_5775_int, var_5776_float);
		}
	}
	if(var_4547_int == 45195) {
		bool var_5783_bool; object var_5784_object;
		var_5785_object = GlobalVars[16];
		var_5785_object = var_5784_object;
		func_11727(var_5784_object);
		if(!var_5783_bool) { //@nz
			object var_5791_object; object var_5792_object;
			var_5793_object = GlobalVars[16];
			var_5793_object = var_5791_object;
			var_5794_object = GlobalVars[16];
			var_5794_object = var_5792_object;
			func_11266();
			int var_5803_int; float var_5804_float;
			var_4548_float = var_5804_float;
			func_9962(var_5803_int, var_5804_float);
		}
	}
	if(var_4547_int == 45196) {
		bool var_5811_bool; object var_5812_object;
		var_5813_object = GlobalVars[16];
		var_5813_object = var_5812_object;
		func_11739(var_5812_object);
		if(!var_5811_bool) { //@nz
			int var_5819_int; float var_5820_float;
			var_4548_float = var_5820_float;
			func_9548(var_5819_int, var_5820_float);
		}
	}
	if(var_4547_int == 45083) {
		object var_5827_object; object var_5828_object;
		var_5829_object = GlobalVars[16];
		var_5829_object = var_5827_object;
		var_5830_object = GlobalVars[16];
		var_5830_object = var_5828_object;
		func_11214();
		object var_5849_object; object var_5850_object;
		var_5851_object = GlobalVars[16];
		var_5851_object = var_5849_object;
		var_5852_object = GlobalVars[16];
		var_5852_object = var_5850_object;
		func_10944();
		bool var_5874_bool;
		func_189(var_5874_bool, "quest_b8_01", "cleanup");
		object var_5877_object;
		func_122(var_5877_object, "quest_b9_01");
	}
	if(var_4547_int == 45084) {
		@GetVariable("b8q03MladVladIsVictim", var_4550_int);
		if(var_4550_int != 0) {
			bool var_5884_bool;
			func_201(var_5884_bool, "volonteers_danko", "kill", "mladvlad");
			@Trace("Mlad Vlad is dead");
		} else {
			bool var_6271_bool;
			func_201(var_6271_bool, "volonteers_danko", "kill", "bigvlad");
			@Trace("Big Vlad is dead");
		}
	}
	if(var_4547_int == 45085) {
		object var_5891_object; object var_5892_object;
		var_5893_object = GlobalVars[16];
		var_5893_object = var_5891_object;
		var_5894_object = GlobalVars[16];
		var_5894_object = var_5892_object;
		func_10999();
		bool var_5922_bool;
		func_189(var_5922_bool, "quest_b9_01", "cleanup");
		object var_5925_object;
		func_111(var_5925_object, "quest_b10_01");
	}
	if(var_4547_int == 45059) {
		object var_5929_object; object var_5930_object;
		var_5931_object = GlobalVars[16];
		var_5931_object = var_5929_object;
		var_5932_object = GlobalVars[16];
		var_5932_object = var_5930_object;
		func_11497();
		object var_5935_object; object var_5936_object;
		var_5937_object = GlobalVars[16];
		var_5937_object = var_5935_object;
		var_5938_object = GlobalVars[16];
		var_5938_object = var_5936_object;
		func_10526();
		bool var_5976_bool;
		func_189(var_5976_bool, "quest_b2_01", "cleanup");
		object var_5979_object;
		func_111(var_5979_object, "quest_b3_01");
	}
	if(var_4547_int == 45114) {
		bool var_5983_bool; object var_5984_object;
		var_5985_object = GlobalVars[16];
		var_5985_object = var_5984_object;
		func_11893(var_5984_object);
		if(var_5983_bool != 0) {
			int var_5990_int; float var_5991_float;
			var_4548_float = var_5991_float;
			func_9800(var_5990_int, var_5991_float);
		}
	}
	if(var_4547_int == 45115) {
		int var_5998_int; float var_5999_float;
		var_4548_float = var_5999_float;
		func_9917(var_5998_int, var_5999_float);
	}
	if(var_4547_int == 45116) {
		bool var_6006_bool; object var_6007_object;
		var_6008_object = GlobalVars[16];
		var_6008_object = var_6007_object;
		func_11799(var_6007_object);
		if(!var_6006_bool) { //@nz
			int var_6014_int; float var_6015_float;
			var_4548_float = var_6015_float;
			func_9863(var_6014_int, var_6015_float);
		}
	}
	if(var_4547_int == 45117) {
		int var_6022_int; float var_6023_float;
		var_4548_float = var_6023_float;
		func_9827(var_6022_int, var_6023_float);
	}
	if(var_4547_int == 45118) {
		int var_6030_int; float var_6031_float;
		var_4548_float = var_6031_float;
		func_9890(var_6030_int, var_6031_float);
	}
	if(var_4547_int == 45119) {
		int var_6038_int; float var_6039_float;
		var_4548_float = var_6039_float;
		func_9944(var_6038_int, var_6039_float);
	}
	if(var_4547_int == 45120) {
		int var_6046_int; float var_6047_float;
		var_4548_float = var_6047_float;
		func_9998(var_6046_int, var_6047_float);
	}
	if(var_4547_int == 45121) {
		int var_6054_int; float var_6055_float;
		var_4548_float = var_6055_float;
		func_10052(var_6054_int, var_6055_float);
	}
	if(var_4547_int == 45122) {
		int var_6062_int; float var_6063_float;
		var_4548_float = var_6063_float;
		func_10088(var_6062_int, var_6063_float);
	}
	if(var_4547_int == 45123) {
		bool var_6070_bool; object var_6071_object;
		var_6072_object = GlobalVars[16];
		var_6072_object = var_6071_object;
		func_11845(var_6071_object);
		if(var_6070_bool != 0) {
			int var_6077_int; float var_6078_float;
			var_4548_float = var_6078_float;
			func_9926(var_6077_int, var_6078_float);
		}
	}
	if(var_4547_int == 45124) {
		bool var_6085_bool; object var_6086_object;
		var_6087_object = GlobalVars[16];
		var_6087_object = var_6086_object;
		func_11607(var_6086_object);
		if(!var_6085_bool) { //@nz
			int var_6093_int; float var_6094_float;
			var_4548_float = var_6094_float;
			func_9953(var_6093_int, var_6094_float);
		}
	}
	if(var_4547_int == 45197) {
		bool var_6101_bool; object var_6102_object;
		var_6103_object = GlobalVars[16];
		var_6103_object = var_6102_object;
		func_11751(var_6102_object);
		if(!var_6101_bool) { //@nz
			object var_6109_object; object var_6110_object;
			var_6111_object = GlobalVars[16];
			var_6111_object = var_6109_object;
			var_6112_object = GlobalVars[16];
			var_6112_object = var_6110_object;
			func_11282();
			int var_6121_int; float var_6122_float;
			var_4548_float = var_6122_float;
			func_10169(var_6121_int, var_6122_float);
		}
	}
	if(var_4547_int == 45198) {
		bool var_6129_bool; object var_6130_object;
		var_6131_object = GlobalVars[16];
		var_6131_object = var_6130_object;
		func_11775(var_6130_object);
		if(!var_6129_bool) { //@nz
			object var_6137_object; object var_6138_object;
			var_6139_object = GlobalVars[16];
			var_6139_object = var_6137_object;
			var_6140_object = GlobalVars[16];
			var_6140_object = var_6138_object;
			func_11446();
		}
	}
	if(var_4547_int == 45234) {
		bool var_6179_bool; object var_6180_object;
		var_6181_object = GlobalVars[16];
		var_6181_object = var_6180_object;
		func_11811(var_6180_object);
		if(!var_6179_bool) { //@nz
			int var_6187_int; float var_6188_float;
			var_4548_float = var_6188_float;
			func_9908(var_6187_int, var_6188_float);
		}
	}
	if(var_4547_int == 45235) {
		int var_6195_int; float var_6196_float;
		var_4548_float = var_6196_float;
		func_9971(var_6195_int, var_6196_float);
	}
	if(var_4547_int == 45237) {
		object var_6203_object; object var_6204_object;
		var_6205_object = GlobalVars[16];
		var_6205_object = var_6203_object;
		var_6206_object = GlobalVars[16];
		var_6206_object = var_6204_object;
		func_11335();
		int var_6209_int; float var_6210_float;
		var_4548_float = var_6210_float;
		func_10133(var_6209_int, var_6210_float);
	}
	if(var_4547_int == 45238) {
		object var_6217_object; object var_6218_object;
		var_6219_object = GlobalVars[16];
		var_6219_object = var_6217_object;
		var_6220_object = GlobalVars[16];
		var_6220_object = var_6218_object;
		func_11341();
		int var_6223_int; float var_6224_float;
		var_4548_float = var_6224_float;
		func_10196(var_6223_int, var_6224_float);
	}
	if(var_4547_int == 45264) {
		object var_6231_object; object var_6232_object;
		var_6233_object = GlobalVars[16];
		var_6233_object = var_6231_object;
		var_6234_object = GlobalVars[16];
		var_6234_object = var_6232_object;
		func_11381();
	}
	if(var_4547_int == 45265) {
		object var_6245_object; object var_6246_object;
		var_6247_object = GlobalVars[16];
		var_6247_object = var_6245_object;
		var_6248_object = GlobalVars[16];
		var_6248_object = var_6246_object;
		func_11398();
	}
	if(var_4547_int == 45266) {
		object var_6259_object; object var_6260_object;
		var_6261_object = GlobalVars[16];
		var_6261_object = var_6259_object;
		var_6262_object = GlobalVars[16];
		var_6262_object = var_6260_object;
		func_11415();
	}
	
}


void func_896(int var_684_int, bool var_685_bool, int var_686_int)
{
	object var_694_object; object var_695_object; string var_697_string; object var_698_object;
	@FindActor(var_694_object, ("br_" + (var_684_int + 1)));
	if(var_685_bool != 0) {
		if(!var_694_object) { //@nz
			@GetMainOutdoorScene(var_695_object);
			@AddActor(var_694_object, ("br_" + (var_684_int + 1)), var_695_object, [0.0, 0.0, 0.0]);
			var_695_object = null;
		}
	} else if(var_694_object != 0) {
		@RemoveActor(var_694_object);
	}
	int var_696_int = 1;
	
	while(var_696_int <= var_686_int) {
		@FindActor(var_698_object, ((("dr_mark" + (var_684_int + 1)) + "_") + var_696_int));
		if(var_698_object != 0) {
			bool var_717_bool; string var_718_string;
			var_697_string = var_718_string;
			func_189(var_717_bool, var_718_string, "cleanup");
		}
		var_698_object = null;
		var_696_int += 1;
	}
	
	
}
EMIT "Stack[-5] = 0";


// @pe
void func_10115(int var_5343_int, float var_5344_float)
{
	float var_5348_float;
	var_5344_float = var_5348_float;
	int var_5345_int;
	func_12029(var_5345_int, 521369, 521368, var_5348_float);
	var_5345_int = var_5343_int;
}


void func_9098(int var_1997_int, int var_1998_int, int var_1999_int)
{
	var_2008_object = GlobalVars[8];
	object var_2004_object;
	var_2008_object->get(var_2004_object, var_1997_int);
	var_2009_object = GlobalVars[9];
	object var_2005_object;
	var_2009_object->get(var_2005_object, var_1997_int);
	var_2010_object = GlobalVars[10];
	object var_2006_object;
	var_2010_object->get(var_2006_object, var_1997_int);
	var_2011_object = GlobalVars[13];
	object var_2007_object;
	var_2011_object->get(var_2007_object, var_1997_int);
	if(var_1997_int == 0) {
		int var_2014_int; int var_2015_int; object var_2016_object; object var_2017_object; object var_2018_object; object var_2019_object;
		var_1998_int = var_2014_int;
		var_1999_int = var_2015_int;
		var_2004_object = var_2016_object;
		var_2005_object = var_2017_object;
		var_2006_object = var_2018_object;
		var_2007_object = var_2019_object;
		func_4432(var_2014_int, var_2015_int, var_2016_object, var_2017_object, var_2018_object, var_2019_object);
	} else if(var_1997_int == 1) {
			int var_2284_int; int var_2285_int; object var_2286_object; object var_2287_object; object var_2288_object; object var_2289_object;
			var_1998_int = var_2284_int;
			var_1999_int = var_2285_int;
			var_2004_object = var_2286_object;
			var_2005_object = var_2287_object;
			var_2006_object = var_2288_object;
			var_2007_object = var_2289_object;
			func_4629(var_2284_int, var_2285_int, var_2286_object, var_2287_object, var_2288_object, var_2289_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_1997_int == 2) {
		int var_2416_int; int var_2417_int; object var_2418_object; object var_2419_object; object var_2420_object; object var_2421_object;
		var_1998_int = var_2416_int;
		var_1999_int = var_2417_int;
		var_2004_object = var_2418_object;
		var_2005_object = var_2419_object;
		var_2006_object = var_2420_object;
		var_2007_object = var_2421_object;
		func_4835(var_2416_int, var_2417_int, var_2418_object, var_2419_object, var_2420_object, var_2421_object);
	} else if(var_1997_int == 3) {
		int var_2562_int; int var_2563_int; object var_2564_object; object var_2565_object; object var_2566_object; object var_2567_object;
		var_1998_int = var_2562_int;
		var_1999_int = var_2563_int;
		var_2004_object = var_2564_object;
		var_2005_object = var_2565_object;
		var_2006_object = var_2566_object;
		var_2007_object = var_2567_object;
		func_5065(var_2562_int, var_2563_int, var_2564_object, var_2565_object, var_2566_object, var_2567_object);
	} else if(var_1997_int == 4) {
		int var_2595_int; int var_2596_int; object var_2597_object; object var_2598_object; object var_2599_object; object var_2600_object;
		var_1998_int = var_2595_int;
		var_1999_int = var_2596_int;
		var_2004_object = var_2597_object;
		var_2005_object = var_2598_object;
		var_2006_object = var_2599_object;
		var_2007_object = var_2600_object;
		func_5283(var_2595_int, var_2596_int, var_2597_object, var_2598_object, var_2599_object, var_2600_object);
	} else if(var_1997_int == 5) {
		int var_2628_int; int var_2629_int; object var_2630_object; object var_2631_object; object var_2632_object; object var_2633_object;
		var_1998_int = var_2628_int;
		var_1999_int = var_2629_int;
		var_2004_object = var_2630_object;
		var_2005_object = var_2631_object;
		var_2006_object = var_2632_object;
		var_2007_object = var_2633_object;
		func_5522(var_2628_int, var_2629_int, var_2630_object, var_2631_object, var_2632_object, var_2633_object);
	} else if(var_1997_int == 6) {
		int var_2661_int; int var_2662_int; object var_2663_object; object var_2664_object; object var_2665_object; object var_2666_object;
		var_1998_int = var_2661_int;
		var_1999_int = var_2662_int;
		var_2004_object = var_2663_object;
		var_2005_object = var_2664_object;
		var_2006_object = var_2665_object;
		var_2007_object = var_2666_object;
		func_5635();
	} else if(var_1997_int == 7) {
		int var_2671_int; int var_2672_int; object var_2673_object; object var_2674_object; object var_2675_object; object var_2676_object;
		var_1998_int = var_2671_int;
		var_1999_int = var_2672_int;
		var_2004_object = var_2673_object;
		var_2005_object = var_2674_object;
		var_2006_object = var_2675_object;
		var_2007_object = var_2676_object;
		func_5745(var_2671_int, var_2672_int, var_2673_object, var_2674_object, var_2675_object, var_2676_object);
	} else if(var_1997_int == 8) {
		int var_2810_int; int var_2811_int; object var_2812_object; object var_2813_object; object var_2814_object; object var_2815_object;
		var_1998_int = var_2810_int;
		var_1999_int = var_2811_int;
		var_2004_object = var_2812_object;
		var_2005_object = var_2813_object;
		var_2006_object = var_2814_object;
		var_2007_object = var_2815_object;
		func_5945(var_2810_int, var_2811_int, var_2812_object, var_2813_object, var_2814_object, var_2815_object);
	} else if(var_1997_int == 9) {
		int var_2843_int; int var_2844_int; object var_2845_object; object var_2846_object; object var_2847_object; object var_2848_object;
		var_1998_int = var_2843_int;
		var_1999_int = var_2844_int;
		var_2004_object = var_2845_object;
		var_2005_object = var_2846_object;
		var_2006_object = var_2847_object;
		var_2007_object = var_2848_object;
		func_6148(var_2843_int, var_2844_int, var_2845_object, var_2846_object, var_2847_object, var_2848_object);
	} else if(var_1997_int == 10) {
		int var_2876_int; int var_2877_int; object var_2878_object; object var_2879_object; object var_2880_object; object var_2881_object;
		var_1998_int = var_2876_int;
		var_1999_int = var_2877_int;
		var_2004_object = var_2878_object;
		var_2005_object = var_2879_object;
		var_2006_object = var_2880_object;
		var_2007_object = var_2881_object;
		func_6357(var_2876_int, var_2877_int, var_2878_object, var_2879_object, var_2880_object, var_2881_object);
	} else if(var_1997_int == 11) {
		int var_2909_int; int var_2910_int; object var_2911_object; object var_2912_object; object var_2913_object; object var_2914_object;
		var_1998_int = var_2909_int;
		var_1999_int = var_2910_int;
		var_2004_object = var_2911_object;
		var_2005_object = var_2912_object;
		var_2006_object = var_2913_object;
		var_2007_object = var_2914_object;
		func_6569(var_2909_int, var_2910_int, var_2911_object, var_2912_object, var_2913_object, var_2914_object);
	} else if(var_1997_int == 12) {
		int var_2942_int; int var_2943_int; object var_2944_object; object var_2945_object; object var_2946_object; object var_2947_object;
		var_1998_int = var_2942_int;
		var_1999_int = var_2943_int;
		var_2004_object = var_2944_object;
		var_2005_object = var_2945_object;
		var_2006_object = var_2946_object;
		var_2007_object = var_2947_object;
		func_6766(var_2942_int, var_2943_int, var_2944_object, var_2945_object, var_2946_object, var_2947_object);
	} else if(var_1997_int == 13) {
		int var_2975_int; int var_2976_int; object var_2977_object; object var_2978_object; object var_2979_object; object var_2980_object;
		var_1998_int = var_2975_int;
		var_1999_int = var_2976_int;
		var_2004_object = var_2977_object;
		var_2005_object = var_2978_object;
		var_2006_object = var_2979_object;
		var_2007_object = var_2980_object;
		func_6969(var_2975_int, var_2976_int, var_2977_object, var_2978_object, var_2979_object, var_2980_object);
	} else if(var_1997_int == 14) {
		int var_3008_int; int var_3009_int; object var_3010_object; object var_3011_object; object var_3012_object; object var_3013_object;
		var_1998_int = var_3008_int;
		var_1999_int = var_3009_int;
		var_2004_object = var_3010_object;
		var_2005_object = var_3011_object;
		var_2006_object = var_3012_object;
		var_2007_object = var_3013_object;
		func_7169(var_3008_int, var_3009_int, var_3010_object, var_3011_object, var_3012_object, var_3013_object);
	} else if(var_1997_int == 15) {
		int var_3147_int; int var_3148_int; object var_3149_object; object var_3150_object; object var_3151_object; object var_3152_object;
		var_1998_int = var_3147_int;
		var_1999_int = var_3148_int;
		var_2004_object = var_3149_object;
		var_2005_object = var_3150_object;
		var_2006_object = var_3151_object;
		var_2007_object = var_3152_object;
		func_7351(var_3147_int, var_3148_int, var_3149_object, var_3150_object, var_3151_object, var_3152_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_10124(int var_5367_int, float var_5368_float)
{
	float var_5372_float;
	var_5368_float = var_5372_float;
	int var_5369_int;
	func_12029(var_5369_int, 521371, 521370, var_5372_float);
	var_5369_int = var_5367_int;
}


// @pe
void func_5013(int var_1250_int, int var_1251_int, object var_1252_object, object var_1253_object, object var_1254_object, object var_1255_object)
{
	if(var_1251_int == 0) {
		func_760(3, false);
		func_777(3, false, 1);
		int var_1263_int; int var_1264_int; object var_1265_object; object var_1266_object; object var_1267_object;
		var_1263_int = 3;
		var_1250_int = var_1264_int;
		var_1252_object = var_1265_object;
		var_1253_object = var_1266_object;
		var_1254_object = var_1267_object;
		func_586(var_1264_int, var_1265_object, var_1266_object, var_1267_object);
		object var_1268_object;
		var_1255_object = var_1268_object;
		func_270(var_1268_object, 0);
		func_834(3, false, 7);
		func_896(3, false, 7);
	}
	int var_1277_int;
	var_1251_int = var_1277_int;
	func_947(3, var_1277_int);
	int var_1294_int; int var_1295_int;
	var_1250_int = var_1294_int;
	var_1251_int = var_1295_int;
	func_1848(3, var_1294_int, var_1295_int);
}


// @pe
void func_10133(int var_6209_int, float var_6210_float)
{
	float var_6214_float;
	var_6210_float = var_6214_float;
	int var_6211_int;
	func_12029(var_6211_int, 533052, 533051, var_6214_float);
	var_6211_int = var_6209_int;
}


// @pe
void func_10142(int var_5669_int, float var_5670_float)
{
	float var_5674_float;
	var_5670_float = var_5674_float;
	int var_5671_int;
	func_12029(var_5671_int, 530654, 530653, var_5674_float);
	var_5671_int = var_5669_int;
}


// @pe
void func_7073(object var_295_object)
{
	var_295_object->add("lc_house7_02");
	var_295_object->add("lc_house7_03");
	var_295_object->add("lc_house7_04");
	var_295_object->add("lc_house7_05");
	var_295_object->add("lc_house7_06");
	var_295_object->add("lc_house7_07");
	var_295_object->add("lc_House6_02");
	var_295_object->add("lc_house7_01");
	var_295_object->add("lc_house_2_02");
	var_295_object->add("lc_House6_01");
	var_295_object->add("lc_house3_03_i2");
	var_295_object->add("lc_house3_03");
	var_295_object->add("lc_House6_03");
	var_295_object->add("lc_House6_04");
}


// @pe
void func_6049(object var_207_object)
{
	var_207_object->add("r3_house_2_02");
	var_207_object->add("r3_house3_02_i2");
	var_207_object->add("r3_house3_02");
	var_207_object->add("r3_house4_05_i2");
	var_207_object->add("r3_house4_05");
	var_207_object->add("r3_house4_03_i2");
	var_207_object->add("r3_house4_04_i2");
	var_207_object->add("r3_house4_04");
	var_207_object->add("r3_house4_01_i2");
	var_207_object->add("r3_house4_01");
	var_207_object->add("r3_house_2_01");
	var_207_object->add("r3_house4_02_i2");
	var_207_object->add("r3_house4_02");
	var_207_object->add("r3_house3_01_i2");
	var_207_object->add("r3_house3_01");
}


void func_11175(void)
{
	object var_4805_object;
	func_12037(var_4805_object);
	object var_4803_object;
	var_4805_object = var_4803_object;
	object var_4804_object;
	var_4803_object->FindMark(var_4804_object, "b11q04NotkinGotoSanitar");
	if(var_4804_object != 0)
		var_4804_object->Remove();
	var_4803_object->FindMark(var_4804_object, "b11q04SanitarGotoOfficer");
	if(var_4804_object != 0)
		var_4804_object->Remove();
	bool var_4810_bool;
	func_12012(var_4810_bool, 313);
	bool var_4812_bool;
	func_12012(var_4812_bool, 551);
	bool var_4814_bool;
	func_12012(var_4814_bool, 598);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10151(int var_5375_int, float var_5376_float)
{
	float var_5380_float;
	var_5376_float = var_5380_float;
	int var_5377_int;
	func_12029(var_5377_int, 529880, 529879, var_5380_float);
	var_5377_int = var_5375_int;
}


// @pe
void func_14255(object var_6151_object, bool var_6152_bool, int var_6153_int)
{
	var_6151_object->add(18);
	var_6151_object->add(24);
	var_6151_object->add(20);
	var_6151_object->add(14);
	if(var_6152_bool == false) {
		var_6151_object->add(10);
		var_6151_object->add(17);
		var_6151_object->add(8);
	} else if(var_6153_int != 1) {
		var_6151_object->add(10);
	}
	
}


// @pe
void func_10160(int var_5391_int, float var_5392_float)
{
	float var_5396_float;
	var_5392_float = var_5396_float;
	int var_5393_int;
	func_12029(var_5393_int, 529882, 529881, var_5396_float);
	var_5393_int = var_5391_int;
}


// @pe
void func_947(int var_1276_int, int var_1277_int)
{
	bool var_1278_bool = true;
	bool var_1279_bool = true;
	var_1281_bool = var_1277_int >= 20;
	if(var_1281_bool != 1) {
		var_1283_bool = var_1277_int < 2;
		if(var_1283_bool != 1)
			var_1279_bool = false;
	}
	if(var_1279_bool != 1) {
		bool var_1284_bool = false;
		if(var_1277_int >= 6) {
			if(var_1277_int < 10)
				var_1284_bool = true;
		}
		if(var_1284_bool != 1)
			var_1278_bool = false;
	}
	if(var_1278_bool != 0) {
		int var_1289_int;
		var_1276_int = var_1289_int;
		func_743(var_1289_int, true);
	} else {
		int var_1291_int;
		var_1276_int = var_1291_int;
		func_743(var_1291_int, false);
	}
	
}


// @pe
void func_10169(int var_6121_int, float var_6122_float)
{
	float var_6126_float;
	var_6122_float = var_6126_float;
	int var_6123_int;
	func_12029(var_6123_int, 531549, 531548, var_6126_float);
	var_6123_int = var_6121_int;
}


void func_4028(int var_3257_int, int var_3258_int, int var_3259_int)
{
	int var_3264_int; int var_3265_int; int var_3266_int; int var_3267_int;
	bool var_3268_bool = false;
	if(var_3259_int > 8) {
		if(var_3259_int < 21)
			var_3268_bool = true;
	}
	if(var_3268_bool != 0) {
		int var_3273_int;
		var_3257_int = var_3273_int;
		func_467(var_3273_int, "pers_rat", "rat.xml", 4);
		int var_3277_int;
		var_3257_int = var_3277_int;
		func_467(var_3277_int, "pers_alkash", "alkash.xml", 2);
		int var_3281_int;
		var_3257_int = var_3281_int;
		func_467(var_3281_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3286_float; int var_3287_int;
		func_1098(var_3286_float, var_3287_int);
		if((2 * var_3286_float) != 0) {
			int var_3333_int; int var_3336_int;
			var_3257_int = var_3333_int;
			var_3264_int = var_3336_int;
			func_467(var_3333_int, "pers_grabitel", "grabitel.xml", var_3336_int);
		}
		if((var_3287_int + 1) >= 2) {
			int var_3341_int;
			var_3257_int = var_3341_int;
			func_467(var_3341_int, "pers_patrool", "patrol.xml", 2);
			bool var_3345_bool; int var_3346_int;
			var_3258_int = var_3346_int;
			func_1305(var_3345_bool, var_3346_int);
			if(var_3345_bool != 0) {
				int var_3347_int;
				var_3257_int = var_3347_int;
				func_467(var_3347_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3352_float; int var_3353_int;
		var_3258_int = var_3353_int;
		func_1188(var_3352_float, var_3353_int);
		if((1 * var_3352_float) != 0) {
			int var_3355_int; int var_3358_int;
			var_3257_int = var_3355_int;
			var_3265_int = var_3358_int;
			func_467(var_3355_int, "pers_bomber", "bomber.xml", var_3358_int);
		}
	} else {
		int var_3365_int;
		var_3257_int = var_3365_int;
		func_467(var_3365_int, "pers_rat", "rat.xml", 7);
		int var_3369_int;
		var_3257_int = var_3369_int;
		func_467(var_3369_int, "pers_alkash", "alkash.xml", 1);
		int var_3373_int;
		var_3257_int = var_3373_int;
		func_467(var_3373_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3378_float; int var_3379_int;
		func_1098(var_3378_float, var_3379_int);
		if((2 * var_3378_float) != 0) {
			int var_3381_int; int var_3384_int;
			var_3257_int = var_3381_int;
			var_3266_int = var_3384_int;
			func_467(var_3381_int, "pers_grabitel", "grabitel.xml", var_3384_int);
		}
		if((var_3379_int + 1) >= 2) {
			int var_3389_int;
			var_3257_int = var_3389_int;
			func_467(var_3389_int, "pers_patrool", "patrol.xml", 1);
			bool var_3393_bool; int var_3394_int;
			var_3258_int = var_3394_int;
			func_1305(var_3393_bool, var_3394_int);
			if(var_3393_bool != 0) {
				int var_3395_int;
				var_3257_int = var_3395_int;
				func_467(var_3395_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3400_float; int var_3401_int;
		var_3258_int = var_3401_int;
		func_1188(var_3400_float, var_3401_int);
		if((1 * var_3400_float) == 0) goto Label_4190;
		int var_3403_int; int var_3406_int;
		var_3257_int = var_3403_int;
		var_3267_int = var_3406_int;
		func_467(var_3403_int, "pers_bomber", "bomber.xml", var_3406_int);
	}
Label_4190:
	bool var_3359_bool; int var_3360_int;
	var_3258_int = var_3360_int;
	func_1305(var_3359_bool, var_3360_int);
	if(var_3359_bool != 0) {
		int var_3361_int;
		var_3257_int = var_3361_int;
		func_467(var_3361_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_10178(int var_5383_int, float var_5384_float)
{
	float var_5388_float;
	var_5384_float = var_5388_float;
	int var_5385_int;
	func_12029(var_5385_int, 529884, 529883, var_5388_float);
	var_5385_int = var_5383_int;
}


// @pe
void func_5065(int var_2562_int, int var_2563_int, object var_2564_object, object var_2565_object, object var_2566_object, object var_2567_object)
{
	if(var_2563_int == 0) {
		func_760(3, true);
		func_777(3, true, 1);
		int var_2576_int; object var_2577_object; object var_2578_object; object var_2579_object;
		var_2562_int = var_2576_int;
		var_2564_object = var_2577_object;
		var_2565_object = var_2578_object;
		var_2566_object = var_2579_object;
		func_605(3, var_2576_int, var_2577_object, var_2578_object, var_2579_object);
		object var_2580_object;
		var_2567_object = var_2580_object;
		func_270(var_2580_object, 1);
		func_834(3, true, 7);
		func_896(3, false, 7);
	}
	func_743(3, false);
	int var_2591_int; int var_2592_int;
	var_2562_int = var_2591_int;
	var_2563_int = var_2592_int;
	func_2937(3, var_2591_int, var_2592_int);
}


// @pe
void func_11209(void)
{
	func_11932();
}


// @pe
void func_10187(int var_5487_int, float var_5488_float)
{
	float var_5492_float;
	var_5488_float = var_5492_float;
	int var_5489_int;
	func_12029(var_5489_int, 530276, 530275, var_5492_float);
	var_5489_int = var_5487_int;
}


// @pe
void func_7117(int var_1772_int, int var_1773_int, object var_1774_object, object var_1775_object, object var_1776_object, object var_1777_object)
{
	if(var_1773_int == 0) {
		func_760(14, false);
		func_777(14, false, 1);
		int var_1785_int; int var_1786_int; object var_1787_object; object var_1788_object; object var_1789_object;
		var_1785_int = 14;
		var_1772_int = var_1786_int;
		var_1774_object = var_1787_object;
		var_1775_object = var_1788_object;
		var_1776_object = var_1789_object;
		func_586(var_1786_int, var_1787_object, var_1788_object, var_1789_object);
		object var_1790_object;
		var_1777_object = var_1790_object;
		func_270(var_1790_object, 0);
		func_834(14, false, 5);
		func_896(14, false, 5);
	}
	int var_1799_int;
	var_1773_int = var_1799_int;
	func_1051(14, var_1799_int);
	int var_1810_int; int var_1811_int;
	var_1772_int = var_1810_int;
	var_1773_int = var_1811_int;
	func_1309(14, var_1810_int, var_1811_int);
}


// @pe
void func_11214(void)
{
	int var_5831_int;
	func_106(var_5831_int, "B_Mission3");
	if(var_5831_int == 0) {
		@SetVariable("B_Mission3", 1);
		func_11945();
		bool var_5845_bool;
		func_12012(var_5845_bool, 562);
		bool var_5847_bool;
		func_12012(var_5847_bool, 563);
	}
}


// @pe
void func_6096(int var_1607_int, int var_1608_int, object var_1609_object, object var_1610_object, object var_1611_object, object var_1612_object)
{
	if(var_1608_int == 0) {
		func_760(9, false);
		func_777(9, false, 1);
		int var_1620_int; int var_1621_int; object var_1622_object; object var_1623_object; object var_1624_object;
		var_1620_int = 9;
		var_1607_int = var_1621_int;
		var_1609_object = var_1622_object;
		var_1610_object = var_1623_object;
		var_1611_object = var_1624_object;
		func_586(var_1621_int, var_1622_object, var_1623_object, var_1624_object);
		object var_1625_object;
		var_1612_object = var_1625_object;
		func_270(var_1625_object, 0);
		func_834(9, false, 7);
		func_896(9, false, 7);
	}
	int var_1634_int;
	var_1608_int = var_1634_int;
	func_1014(9, var_1634_int);
	int var_1636_int; int var_1637_int;
	var_1607_int = var_1636_int;
	var_1608_int = var_1637_int;
	func_1571(9, var_1636_int, var_1637_int);
}


void func_14288(int var_6167_int)
{
	int var_6169_int;
	@GetVariable(("vol_" + var_6167_int), var_6169_int);
	@SetVariable(("vol_" + var_6167_int), (var_6169_int | 8));
}


// @pe
void func_10196(int var_6223_int, float var_6224_float)
{
	float var_6228_float;
	var_6224_float = var_6228_float;
	int var_6225_int;
	func_12029(var_6225_int, 533054, 533053, var_6228_float);
	var_6225_int = var_6223_int;
}


// @pe
void func_984(int var_1324_int, int var_1325_int)
{
	bool var_1326_bool = true;
	var_1328_bool = var_1325_int >= 20;
	if(var_1328_bool != 1) {
		bool var_1329_bool = false;
		if(var_1325_int >= 6) {
			if(var_1325_int < 10)
				var_1329_bool = true;
		}
		if(var_1329_bool != 1)
			var_1326_bool = false;
	}
	if(var_1326_bool != 0) {
		int var_1334_int;
		var_1324_int = var_1334_int;
		func_743(var_1334_int, true);
	} else {
		int var_1336_int;
		var_1324_int = var_1336_int;
		func_743(var_1336_int, false);
	}
	
}


void func_14300(void)
{
	object var_6147_object; int var_6150_int;
	@CreateIntVector(var_6147_object);
	object var_6151_object;
	var_6147_object = var_6151_object;
	func_14255(var_6151_object, false, -1);
	int var_6148_int;
	var_6147_object->size(var_6148_int);
	int var_6149_int = 0;
	
	while(var_6149_int < var_6148_int) {
		var_6147_object->get(var_6150_int, var_6149_int);
		int var_6167_int;
		var_6150_int = var_6167_int;
		func_14288(var_6167_int);
		var_6149_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


// @pe
void func_10205(void)
{
	func_151("cot_lara@door1", true);
}


// @pe
void func_10212(void)
{
	func_151("cot_lara@door1", false);
}


// @pe
void func_11238(void)
{
	int var_4820_int;
	func_106(var_4820_int, "B_Mission4");
	if(var_4820_int == 0) {
		@SetVariable("B_Mission4", 1);
		func_11958();
		bool var_4847_bool;
		func_12012(var_4847_bool, 562);
		bool var_4849_bool;
		func_12012(var_4849_bool, 563);
		bool var_4851_bool;
		func_12012(var_4851_bool, 564);
	}
}


// @pe
void func_10219(void)
{
	func_168("icot_eva_door", true);
}


// @pe
void func_10226(void)
{
	func_168("icot_eva_door", false);
}


// @pe
void func_14325(void)
{
	func_14300();
}


// @pe
void func_1014(int var_722_int, int var_723_int)
{
	bool var_724_bool = true;
	bool var_725_bool = true;
	var_727_bool = var_723_int >= 22;
	if(var_727_bool != 1) {
		var_729_bool = var_723_int < 4;
		if(var_729_bool != 1)
			var_725_bool = false;
	}
	if(var_725_bool != 1) {
		bool var_730_bool = false;
		if(var_723_int >= 6) {
			if(var_723_int < 8)
				var_730_bool = true;
		}
		if(var_730_bool != 1)
			var_724_bool = false;
	}
	if(var_724_bool != 0) {
		int var_735_int;
		var_722_int = var_735_int;
		func_743(var_735_int, true);
	} else {
		int var_746_int;
		var_722_int = var_746_int;
		func_743(var_746_int, false);
	}
	
}


void func_14329(void)
{
	func_7595(7);
}


void func_8187(void)
{
	object var_4392_object;
	@GetMainOutdoorScene(var_4392_object);
	var_4393_object = GlobalVars[0];
	object var_4394_object; object var_4395_object;
	var_4392_object = var_4395_object;
	func_7749(var_4394_object, var_4395_object, 1);
	var_4394_object = var_4393_object;
	GlobalVars[0] = var_4393_object;
	var_4416_object = GlobalVars[1];
	object var_4417_object; object var_4418_object;
	var_4392_object = var_4418_object;
	func_7749(var_4417_object, var_4418_object, 2);
	var_4417_object = var_4416_object;
	GlobalVars[1] = var_4416_object;
	var_4420_object = GlobalVars[2];
	object var_4421_object; object var_4422_object;
	var_4392_object = var_4422_object;
	func_7749(var_4421_object, var_4422_object, 3);
	var_4421_object = var_4420_object;
	GlobalVars[2] = var_4420_object;
	var_4424_object = GlobalVars[3];
	object var_4425_object; object var_4426_object;
	var_4392_object = var_4426_object;
	func_7749(var_4425_object, var_4426_object, 4);
	var_4425_object = var_4424_object;
	GlobalVars[3] = var_4424_object;
	var_4428_object = GlobalVars[4];
	object var_4429_object; object var_4430_object;
	var_4392_object = var_4430_object;
	func_7749(var_4429_object, var_4430_object, 5);
	var_4429_object = var_4428_object;
	GlobalVars[4] = var_4428_object;
	var_4432_object = GlobalVars[5];
	object var_4433_object; object var_4434_object;
	var_4392_object = var_4434_object;
	func_7749(var_4433_object, var_4434_object, 6);
	var_4433_object = var_4432_object;
	GlobalVars[5] = var_4432_object;
	var_4436_object = GlobalVars[12];
	object var_4437_object;
	func_100(var_4437_object);
	var_4437_object = var_4436_object;
	GlobalVars[12] = var_4436_object;
	func_7760(false);
	func_8470();
	func_8545();
	@SendWorldWndMessage(100);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5117(int var_3688_int, int var_3689_int, object var_3690_object, object var_3691_object, object var_3692_object, object var_3693_object)
{
	if(var_3689_int == 0) {
		func_760(3, false);
		func_777(3, false, 1);
		int var_3702_int; object var_3703_object; object var_3704_object; object var_3705_object;
		var_3688_int = var_3702_int;
		var_3690_object = var_3703_object;
		var_3691_object = var_3704_object;
		var_3692_object = var_3705_object;
		func_684(3, var_3702_int, var_3703_object, var_3704_object, var_3705_object);
		object var_3706_object;
		var_3693_object = var_3706_object;
		func_270(var_3706_object, 2);
		func_834(3, false, 7);
		func_896(3, true, 7);
	}
	func_743(3, false);
	int var_3717_int; int var_3718_int;
	var_3688_int = var_3717_int;
	var_3689_int = var_3718_int;
	func_3840(3, var_3717_int, var_3718_int);
}


// @pe
void func_14334(bool var_142_bool, int var_143_int)
{
	if(var_143_int == 6) {
		var_142_bool = false;
		return 0;
	}
	bool var_146_bool;
	func_248(var_146_bool, 4);
	if(var_146_bool != 0) {
		if(var_143_int == 15) {
			var_142_bool = false;
			return 0;
		}
		if(var_143_int == 9) {
			var_142_bool = false;
			return 0;
		}
	} else {
			bool var_158_bool;
			func_248(var_158_bool, 5);
			if(var_158_bool == 0) goto Label_14367;
			if(var_143_int == 15) {
				var_142_bool = false;
				return 0;
			}
	}
Label_14377:
	for(;;) {
		var_142_bool = true;
		return 0;

	}
	
Label_14367:
	bool var_162_bool;
	func_248(var_162_bool, 6);
	if(var_162_bool == 0) goto Label_14377;
	if(!(var_143_int == 15)) goto Label_14377;
	var_142_bool = false;
}


