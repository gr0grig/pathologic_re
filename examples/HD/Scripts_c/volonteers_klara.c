maintask task_0
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		func_654(var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool);
		var_7_bool = false;
		var_8_bool = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool, string var_12_string, string var_13_string)
	{
		int var_14_int; int var_15_int;
		@Trace(var_12_string);
		if(var_12_string == "rescue") {
			int var_18_int;
			int var_19_int; int var_20_int;
			int var_21_int; string var_22_string;
			func_1148(var_21_int, var_22_string);
			var_21_int = var_20_int;
			func_727(var_18_int, var_19_int, var_20_int);
			var_19_int = var_18_int;
			func_944(var_14_int, var_15_int, var_18_int);
			func_95(var_12_string, var_22_string, var_14_int, var_15_int);
		} else if(var_12_string == "rescue_oneday") {
				int var_453_int;
				int var_454_int; int var_455_int;
				int var_456_int; string var_457_string;
				var_13_string = var_457_string;
				func_1148(var_456_int, var_457_string);
				var_456_int = var_455_int;
				func_727(var_453_int, var_454_int, var_455_int);
				var_454_int = var_453_int;
				func_874(var_15_int, var_453_int);
		}
	Label_351:
		for(;;) {

		}
	
		if(var_12_string == "rescue_locked") {
			var_15_int = 0;

			for(;;) {
				int var_480_int;
				func_722(var_15_int, var_480_int);
				if(!(var_15_int < var_480_int)) goto Label_274;
				bool var_482_bool = false;
				bool var_483_bool; int var_484_int;
				var_15_int = var_484_int;
				func_768(var_483_bool, var_484_int);
				if(var_483_bool != 0) {
					bool var_492_bool; int var_493_int;
					int var_494_int; int var_495_int;
					var_15_int = var_495_int;
					func_745(var_493_int, var_494_int, var_495_int);
					var_494_int = var_493_int;
					func_26(var_492_bool, var_493_int);
					if(var_492_bool != 0)
						var_482_bool = true;
				}
				if(var_482_bool != 0) {
					int var_518_int;
					var_15_int = var_518_int;
					func_944(var_14_int, var_15_int, var_518_int);
				}
				var_15_int += 1;
			}

		Label_274:
			func_95(var_12_string, var_13_string, var_14_int, var_15_int);
		} else if(var_12_string == "kill") {
			int var_522_int;
			int var_523_int; int var_524_int;
			int var_525_int; string var_526_string;
			var_13_string = var_526_string;
			func_1148(var_525_int, var_526_string);
			var_525_int = var_524_int;
			func_727(var_522_int, var_523_int, var_524_int);
			var_523_int = var_522_int;
			func_995(var_14_int, var_15_int, var_522_int);
		} else if(var_12_string == "disease") {
			int var_763_int;
			int var_764_int; int var_765_int;
			int var_766_int; string var_767_string;
			var_13_string = var_767_string;
			func_1148(var_766_int, var_767_string);
			var_766_int = var_765_int;
			func_727(var_763_int, var_764_int, var_765_int);
			var_764_int = var_763_int;
			func_804(var_14_int, var_15_int, var_763_int);
		} else if(var_12_string == "update") {
			func_426(var_14_int, var_15_int);
		} else if(var_12_string == "cleanup") {
			func_632(var_15_int);
		} else if(var_12_string == "childs_letter") {
			if(!var_8_bool) { //@nz
				float var_1026_float;
				float var_1027_float;
				func_1120(var_1027_float);
				var_1027_float = var_1026_float;
				func_6(var_1026_float);
				var_8_bool = true;
			}
		} else if(var_12_string == "theater_letter") {
			var_1030_bool = !var_7_bool; //@nz
			if(var_1030_bool == 0) goto Label_351;
			float var_1031_float;
			float var_1032_float;
			func_1120(var_1032_float);
			var_1032_float = var_1031_float;
			func_0(var_1031_float);
			var_7_bool = true;
		}
	}

}


void func_768(bool var_483_bool, int var_484_int)
{
	int var_488_int;
	var_484_int = var_488_int;
	int var_486_int;
	string var_487_string;
	func_750(var_486_int, var_487_string, var_488_int);
	@GetVariable(var_487_string, var_486_int);
	var_483_bool = (var_486_int & 2) != 0;
}


// @pe
void func_0(float var_1031_float)
{
	float var_1034_float;
	var_1031_float = var_1034_float;
	int var_1033_int;
	func_2626(var_1033_int, var_1034_float);
}


// @pe
void func_6(float var_383_float)
{
	float var_388_float;
	var_383_float = var_388_float;
	int var_387_int;
	func_2617(var_387_int, var_388_float);
	bool var_396_bool;
	func_1108(var_396_bool, "quest_k12_01", "init_hidden_room");
}


// @pe
void func_2059(object var_195_object, bool var_196_bool, int var_197_int)
{
	var_195_object->add(6);
	var_195_object->add(26);
	var_195_object->add(2);
	var_195_object->add(22);
	if(var_196_bool == false) {
		var_195_object->add(15);
		var_195_object->add(5);
		var_195_object->add(16);
	} else if(var_197_int != 0) {
		var_195_object->add(15);
	}
	
}


void func_780(bool var_948_bool, int var_949_int)
{
	int var_953_int;
	var_949_int = var_953_int;
	int var_951_int;
	string var_952_string;
	func_750(var_951_int, var_952_string, var_953_int);
	@GetVariable(var_952_string, var_951_int);
	var_948_bool = (var_951_int & 1) == 0;
}


void func_908(object var_4_object, int var_860_int)
{
	int var_872_int;
	var_860_int = var_872_int;
	string var_870_string;
	string var_871_string;
	func_750(var_870_string, var_871_string, var_872_int);
	int var_866_int;
	@GetVariable(var_871_string, var_866_int);
	string var_873_string; int var_874_int;
	func_750(var_870_string, var_873_string, var_874_int);
	@SetVariable(var_873_string, ((var_866_int | 32) - 32));
	object var_867_object;
	var_4_object->get(var_867_object, var_874_int); //@t
	int var_868_int;
	var_867_object->size(var_868_int);
	int var_869_int = 0;
	
	while(var_869_int < var_868_int) {
		var_867_object->get(var_870_string, var_869_int);
		string var_880_string;
		var_870_string = var_880_string;
		func_2710(var_880_string, 1);
		var_869_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


void func_654(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int)
{
	int var_26_int; object var_27_object;
	@Trace("Volonteers Init...");
	object var_20_object;
	@CreateIntVector(var_20_object);
	object var_21_object;
	@CreateObjectVector(var_21_object);
	object var_22_object;
	@CreateStringVector(var_22_object);
	object var_29_object; object var_30_object; object var_31_object;
	func_2172(var_29_object, var_30_object, var_31_object);
	var_0_object = var_29_object;
	var_4_object = var_30_object;
	var_5_object = var_31_object;
	object var_23_object;
	@CreateObjectVector(var_23_object);
	object var_24_object;
	@CreateObjectVector(var_24_object);
	object var_158_object; object var_159_object;
	func_33(var_158_object, var_159_object);
	var_1_object = var_158_object;
	var_2_object = var_159_object;
	object var_25_object;
	@CreateObjectVector(var_25_object);
	
	for(;;) {
		int var_213_int;
		func_722(var_27_object, var_213_int);
		if(!(0 < var_213_int)) goto Label_707;
		string var_217_string; int var_218_int;
		var_26_int = var_218_int;
		func_750(var_27_object, var_217_string, var_218_int);
		@SetVariable(var_217_string, 0);
		var_25_object->add(Obj()); //@t
		var_27_object = null;
		var_26_int += 1;
	}
	
Label_707:
	var_6_int = 0;
	var_224_string = "Volonteers count: ";
	int var_225_int;
	func_722(var_224_string, var_225_int);
	@Trace(var_224_string + var_225_int);
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";


void func_2702(int var_389_int, int var_390_int, int var_391_int, float var_392_float)
{
	int var_394_int;
	@AddMessage(var_390_int, var_391_int, var_392_float, var_394_int);
	@SendWorldWndMessage(6);
	var_394_int = var_389_int;
}


// @pe
void func_1148(int var_21_int, string var_22_string)
{
	@_strlwr(var_22_string);
	if(var_22_string == "alexandr") {
		var_21_int = 1;
		return 0;
	}
	if(var_22_string == "andrei") {
		var_21_int = 2;
		return 0;
	}
	if(var_22_string == "anna") {
		var_21_int = 3;
		return 0;
	}
	if(var_22_string == "bigvlad") {
		var_21_int = 4;
		return 0;
	}
	if(var_22_string == "eva") {
		var_21_int = 5;
		return 0;
	}
	if(var_22_string == "georg") {
		var_21_int = 6;
		return 0;
	}
	if(var_22_string == "grif") {
		var_21_int = 7;
		return 0;
	}
	if(var_22_string == "han") {
		var_21_int = 8;
		return 0;
	}
	if(var_22_string == "julia") {
		var_21_int = 9;
		return 0;
	}
	if(var_22_string == "kapella") {
		var_21_int = 10;
		return 0;
	}
	if(var_22_string == "katerina") {
		var_21_int = 11;
		return 0;
	}
	if(var_22_string == "klara") {
		var_21_int = 12;
		return 0;
	}
	if(var_22_string == "lara") {
		var_21_int = 13;
		return 0;
	}
	if(var_22_string == "laska") {
		var_21_int = 14;
		return 0;
	}
	if(var_22_string == "maria") {
		var_21_int = 15;
		return 0;
	}
	if(var_22_string == "mark") {
		var_21_int = 16;
		return 0;
	}
	if(var_22_string == "mat") {
		var_21_int = 17;
		return 0;
	}
	if(var_22_string == "mishka") {
		var_21_int = 18;
		return 0;
	}
	if(var_22_string == "mladvlad") {
		var_21_int = 19;
		return 0;
	}
	if(var_22_string == "notkin") {
		var_21_int = 20;
		return 0;
	}
	if(var_22_string == "ospina") {
		var_21_int = 21;
		return 0;
	}
	if(var_22_string == "petr") {
		var_21_int = 22;
		return 0;
	}
	if(var_22_string == "rubin") {
		var_21_int = 23;
		return 0;
	}
	if(var_22_string == "spi4ka") {
		var_21_int = 24;
		return 0;
	}
	if(var_22_string == "starshina") {
		var_21_int = 25;
		return 0;
	}
	if(var_22_string == "viktor") {
		var_21_int = 26;
		return 0;
	}
	if(var_22_string == "wasted_woman") {
		var_21_int = 27;
		return 0;
	}
	if(var_22_string == "wasted_male") {
		var_21_int = 28;
		return 0;
	}
	if(var_22_string == "alkash") {
		var_21_int = 29;
		return 0;
	}
	if(var_22_string == "boy") {
		var_21_int = 30;
		return 0;
	}
	if(var_22_string == "girl") {
		var_21_int = 31;
		return 0;
	}
	if(var_22_string == "littleboy") {
		var_21_int = 32;
		return 0;
	}
	if(var_22_string == "littlegirl") {
		var_21_int = 33;
		return 0;
	}
	if(var_22_string == "butcher") {
		var_21_int = 34;
		return 0;
	}
	if(var_22_string == "dohodyaga") {
		var_21_int = 35;
		return 0;
	}
	if(var_22_string == "unosha") {
		var_21_int = 36;
		return 0;
	}
	if(var_22_string == "vaxxabit") {
		var_21_int = 37;
		return 0;
	}
	if(var_22_string == "vaxxabitka") {
		var_21_int = 38;
		return 0;
	}
	if(var_22_string == "woman") {
		var_21_int = 39;
		return 0;
	}
	if(var_22_string == "worker") {
		var_21_int = 40;
		return 0;
	}
	if(var_22_string == "whitemask") {
		var_21_int = 42;
		return 0;
	}
	if(var_22_string == "birdmask") {
		var_21_int = 43;
		return 0;
	}
	if(var_22_string == "birdmask") {
		var_21_int = 44;
		return 0;
	}
	if(var_22_string == "patrol") {
		var_21_int = 46;
		return 0;
	}
	if(var_22_string == "danko") {
		var_21_int = 47;
		return 0;
	}
	if(var_22_string == "alkash_d") {
		var_21_int = 48;
		return 0;
	}
	if(var_22_string == "boy_d") {
		var_21_int = 49;
		return 0;
	}
	if(var_22_string == "butcher_d") {
		var_21_int = 50;
		return 0;
	}
	if(var_22_string == "dohodyaga_d") {
		var_21_int = 51;
		return 0;
	}
	if(var_22_string == "girl_d") {
		var_21_int = 52;
		return 0;
	}
	if(var_22_string == "littleboy_d") {
		var_21_int = 53;
		return 0;
	}
	if(var_22_string == "littlegirl_d") {
		var_21_int = 54;
		return 0;
	}
	if(var_22_string == "unosha2") {
		var_21_int = 55;
		return 0;
	}
	if(var_22_string == "unosha_d") {
		var_21_int = 56;
		return 0;
	}
	if(var_22_string == "unosha2_d") {
		var_21_int = 57;
		return 0;
	}
	if(var_22_string == "vaxxabit_d") {
		var_21_int = 58;
		return 0;
	}
	if(var_22_string == "vaxxabitka_d") {
		var_21_int = 59;
		return 0;
	}
	if(var_22_string == "wasted_male_d") {
		var_21_int = 60;
		return 0;
	}
	if(var_22_string == "wasted_woman_d") {
		var_21_int = 61;
		return 0;
	}
	if(var_22_string == "woman_d") {
		var_21_int = 62;
		return 0;
	}
	if(var_22_string == "worker2") {
		var_21_int = 63;
		return 0;
	}
	if(var_22_string == "worker_d") {
		var_21_int = 64;
		return 0;
	}
	if(var_22_string == "worker2_d") {
		var_21_int = 65;
		return 0;
	}
	if(var_22_string == "burah") {
		var_21_int = 66;
		return 0;
	}
	if(var_22_string == "gorbun_daughter") {
		var_21_int = 67;
		return 0;
	}
	if(var_22_string == "gorbun") {
		var_21_int = 68;
		return 0;
	}
	if(var_22_string == "albinos") {
		var_21_int = 69;
		return 0;
	}
	if(var_22_string == "aglaja") {
		var_21_int = 70;
		return 0;
	}
	if(var_22_string == "nude") {
		var_21_int = 71;
		return 0;
	}
	if(var_22_string == "block") {
		var_21_int = 72;
		return 0;
	}
	if(var_22_string == "officer") {
		var_21_int = 73;
		return 0;
	}
	if(var_22_string == "doberman") {
		var_21_int = 74;
		return 0;
	}
	if(var_22_string == "grabitel") {
		var_21_int = 75;
		return 0;
	}
	if(var_22_string == "gatherer_wife") {
		var_21_int = 76;
		return 0;
	}
	if(var_22_string == "rat_prophet") {
		var_21_int = 77;
		return 0;
	}
	if(var_22_string == "morlok") {
		var_21_int = 78;
		return 0;
	}
	if(var_22_string == "soldier") {
		var_21_int = 79;
		return 0;
	}
	if(var_22_string == "britva") {
		var_21_int = 80;
		return 0;
	}
	if(var_22_string == "kabaktchik") {
		var_21_int = 81;
		return 0;
	}
	if(var_22_string == "sanitar") {
		var_21_int = 82;
		return 0;
	}
	if(var_22_string == "salesman") {
		var_21_int = 83;
		return 0;
	}
	if(var_22_string == "ayyan") {
		var_21_int = 84;
		return 0;
	}
	if(var_22_string == "petrbirdmask") {
		var_21_int = 85;
		return 0;
	}
	if(var_22_string == "mogila") {
		var_21_int = 86;
		return 0;
	}
	if(var_22_string == "klikusha") {
		var_21_int = 87;
		return 0;
	}
	if(var_22_string == "karlik") {
		var_21_int = 88;
		return 0;
	}
	if(var_22_string == "lisa") {
		var_21_int = 89;
		return 0;
	}
	var_21_int = -1;
}


void func_17(void)
{
}


// @pe
void func_18(void)
{
	func_2648();
}


// @pe
void func_22(void)
{
	func_2635();
}


void func_2710(string var_240_string, int var_241_int)
{
	object var_243_object;
	@FindActor(var_243_object, var_240_string);
	if(!var_243_object) //@nz
		@Trace(("Door " + var_240_string) + " not found");
	else
		var_243_object->SetProperty("dlocked", var_241_int);
	
}
EMIT "Stack[-1] = 0";


void func_792(bool var_884_bool, int var_885_int)
{
	int var_889_int;
	var_885_int = var_889_int;
	int var_887_int;
	string var_888_string;
	func_750(var_887_int, var_888_string, var_889_int);
	@GetVariable(var_888_string, var_887_int);
	var_884_bool = (var_887_int & 4) != 0;
}


void func_2841(bool var_263_bool)
{
	int var_265_int = 0;
	bool var_266_bool;
	func_2803(var_266_bool);
	if(var_266_bool != 0)
		var_265_int += 1;
	bool var_311_bool;
	func_2765(var_311_bool);
	if(var_311_bool != 0)
		var_265_int += 1;
	bool var_343_bool;
	func_2727(var_343_bool);
	if(var_343_bool != 0)
		var_265_int += 1;
	var_263_bool = var_265_int >= 2;
}


// @pe
void func_26(bool var_492_bool, int var_493_int)
{
	int var_499_int;
	var_493_int = var_499_int;
	bool var_498_bool;
	func_2092(var_498_bool, var_499_int);
	var_498_bool = var_492_bool;
}


void func_1056(object var_5_object, object var_547_object, int var_548_int)
{
	string var_552_string; object var_553_object;
	var_5_object->get(var_552_string, var_548_int); //@t
	if(var_552_string == "outdoor") {
		@GetMainOutdoorScene(var_553_object);
		var_553_object = var_547_object;
	EMIT "Stack[-2] = 0";
	}
	object var_554_object;
	@GetSceneByName(var_554_object, var_552_string);
	var_554_object = var_547_object;
}
EMIT "Stack[-1] = 0";


void func_33(object var_158_object, object var_159_object)
{
	object var_163_object;
	@CreateIntVector(var_163_object);
	object var_166_object;
	func_2140(true, 2);
	object var_164_object;
	@CreateIntVector(var_164_object);
	object var_180_object;
	var_164_object = var_180_object;
	func_2026(var_180_object, true, 2);
	object var_195_object;
	func_2059(var_195_object, true, 2);
	int var_165_int = 0;
	
	while(var_165_int < 12) {
		var_158_object->add(var_166_object);
		var_159_object->add(var_195_object);
		var_165_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_804(object var_3_object, object var_4_object, int var_763_int)
{
	object var_778_object; string var_779_string;
	int var_785_int;
	var_763_int = var_785_int;
	string var_783_string;
	string var_784_string;
	func_750(var_783_string, var_784_string, var_785_int);
	int var_776_int;
	@GetVariable(var_784_string, var_776_int);
	string var_786_string; int var_787_int;
	func_750(var_783_string, var_786_string, var_787_int);
	@SetVariable(var_786_string, ((var_776_int & 8) | 5));
	object var_777_object;
	var_3_object->get(var_777_object, var_787_int); //@t
	if(var_777_object == null) {
		object var_793_object; int var_794_int;
		var_763_int = var_794_int;
		func_1056(var_783_string, var_793_object, var_794_int);
		var_793_object = var_778_object;
		string var_795_string; int var_796_int;
		int var_797_int; int var_798_int;
		var_763_int = var_798_int;
		func_745(var_796_int, var_797_int, var_798_int);
		var_797_int = var_796_int;
		func_1588(var_795_string, var_796_int);
		var_795_string = var_779_string;
		object var_799_object; object var_800_object;
		var_778_object = var_800_object;
		func_1090(var_799_object, var_800_object, ("pt_volonteer_" + var_779_string), "pers_birdmask", (("vbirdmask_" + var_779_string) + ".xml"));
		var_799_object = var_777_object;
		var_3_object->set(var_763_int, var_777_object); //@t
		var_778_object = null;
	}
	object var_780_object;
	var_4_object->get(var_780_object, var_763_int); //@t
	int var_781_int;
	var_780_object->size(var_781_int);
	int var_782_int = 0;
	
	while(var_782_int < var_781_int) {
		var_780_object->get(var_783_string, var_782_int);
		string var_809_string;
		var_783_string = var_809_string;
		func_2710(var_809_string, 1);
		var_782_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_2597(bool var_300_bool, int var_301_int)
{
	int var_303_int;
	@GetVariable(("vol_" + var_301_int), var_303_int);
	var_300_bool = (var_303_int & 4) != 0;
}


void func_2727(bool var_343_bool)
{
	object var_348_object; int var_351_int;
	@CreateIntVector(var_348_object);
	object var_352_object;
	var_348_object = var_352_object;
	func_2026(var_352_object, false, -1);
	int var_349_int;
	var_348_object->size(var_349_int);
	int var_350_int = 0;
	
	while(var_350_int < var_349_int) {
		var_348_object->get(var_351_int, var_350_int);
		bool var_368_bool = true;
		bool var_369_bool; int var_370_int;
		var_351_int = var_370_int;
		func_2607(var_369_bool, var_370_int);
		if(var_369_bool != 1) {
			bool var_371_bool; int var_372_int;
			var_351_int = var_372_int;
			func_2597(var_371_bool, var_372_int);
			if(var_371_bool != 1)
				var_368_bool = false;
		}
		if(var_368_bool != 0)
			var_343_bool = false;
		var_350_int += 1;
	}
	
	var_343_bool = true;
}
EMIT "Stack[-4] = 0";


void func_426(object var_4_object, int var_6_int)
{
	int var_826_int; int var_827_int; object var_828_object; int var_829_int; int var_830_int; string var_831_string; int var_833_int; int var_834_int; int var_836_int; int var_837_int;
	@Trace(1);
	
	for(;;) {
		int var_839_int;
		func_722(var_837_int, var_839_int);
		if(!(0 < var_839_int)) goto Label_521;
		@Trace(2);
		int var_842_int; int var_843_int;
		var_826_int = var_843_int;
		func_745(var_837_int, var_842_int, var_843_int);
		var_842_int = var_827_int;
		@Trace(3);
		bool var_845_bool; int var_846_int;
		var_826_int = var_846_int;
		func_768(var_845_bool, var_846_int);
		if(var_845_bool != 0) {
			@Trace(4);
			int var_848_int;
			var_826_int = var_848_int;
			func_804(var_836_int, var_837_int, var_848_int);
		}
		@Trace(5);
		bool var_850_bool; int var_851_int;
		var_826_int = var_851_int;
		func_756(var_850_bool, var_851_int);
		if(var_850_bool != 0) {
			@Trace(6);
			int var_860_int;
			var_826_int = var_860_int;
			func_908(var_837_int, var_860_int);
		}
		@Trace(7);
		bool var_884_bool; int var_885_int;
		var_826_int = var_885_int;
		func_792(var_884_bool, var_885_int);
		if(var_884_bool != 0) {
			@Trace(8);
			var_4_object->get(var_828_object, var_826_int); //@t
			@Trace(9);
			var_828_object->size(var_829_int);
			@Trace(10);
			var_830_int = 0;

			while(var_830_int < var_829_int) {
				@Trace(11);
				var_828_object->get(var_831_string, var_830_int);
				string var_898_string;
				var_831_string = var_898_string;
				func_2710(var_898_string, 1);
				var_830_int += 1;
			}

			@Trace(12);
			var_828_object = null;
		}
		@Trace(13);
		var_826_int += 1;
	}
	
Label_521:
	@Trace(14);
	var_6_int += 1;
	int var_906_int; int var_907_int;
	int var_909_int;
	func_70(var_909_int, var_6_int);
	var_909_int = var_906_int;
	int var_913_int;
	func_78(var_913_int, var_6_int);
	var_913_int = var_907_int;
	func_352(var_906_int, var_907_int, var_6_int);
	@Trace(15);
	int var_832_int = 0;
	
	for(;;) {
		int var_976_int;
		func_722(var_837_int, var_976_int);
		if(!(0 < var_976_int)) goto Label_582;
		@Trace(16);
		int var_979_int; int var_980_int;
		var_833_int = var_980_int;
		func_745(var_837_int, var_979_int, var_980_int);
		var_979_int = var_834_int;
		@Trace(17);
		bool var_982_bool; int var_983_int;
		var_833_int = var_983_int;
		func_768(var_982_bool, var_983_int);
		if(var_982_bool != 0) {
			@Trace(18);
			string var_986_string; int var_987_int;
			var_834_int = var_987_int;
			func_1588(var_986_string, var_987_int);
			@Trace("Volonteer : " + var_986_string);
			var_832_int += 1;
		}
		var_833_int += 1;
	}
	
Label_582:
	@Trace(19);
	int var_835_int = 0;
	
	for(;;) {
		int var_992_int;
		func_722(var_837_int, var_992_int);
		if(!(0 < var_992_int)) goto Label_621;
		@Trace(20);
		int var_995_int; int var_996_int;
		var_836_int = var_996_int;
		func_745(var_837_int, var_995_int, var_996_int);
		var_995_int = var_837_int;
		bool var_997_bool; int var_998_int;
		var_836_int = var_998_int;
		func_792(var_997_bool, var_998_int);
		if(var_997_bool != 0) {
			@Trace(21);
			var_835_int += 1;
			string var_1002_string; int var_1003_int;
			var_837_int = var_1003_int;
			func_1588(var_1002_string, var_1003_int);
			@Trace("Diseased volonteer : " + var_1002_string);
		}
		var_836_int += 1;
	}
	
Label_621:
	@Trace(22);
	@Trace((("Today volonteers: " + var_832_int) + ", diseased: ") + var_835_int);
}


// @pe
void func_2092(bool var_498_bool, int var_499_int)
{
	if(var_499_int == 7) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 23) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 21) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 9) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 3) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 1) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 11) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 13) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 25) {
		var_498_bool = true;
		return 0;
	}
	var_498_bool = false;
}


void func_2607(bool var_291_bool, int var_292_int)
{
	int var_294_int;
	@GetVariable(("vol_" + var_292_int), var_294_int);
	var_291_bool = (var_294_int & 16) != 0;
}


void func_944(object var_3_object, object var_4_object, int var_18_int)
{
	int var_220_int;
	var_18_int = var_220_int;
	string var_218_string;
	string var_219_string;
	func_750(var_218_string, var_219_string, var_220_int);
	int var_213_int;
	@GetVariable(var_219_string, var_213_int);
	string var_224_string; int var_225_int;
	var_18_int = var_225_int;
	func_750(var_218_string, var_224_string, var_225_int);
	@SetVariable(var_224_string, ((((((var_213_int | 4) | 1) | 2) - 4) - 1) - 2));
	object var_214_object;
	var_3_object->get(var_214_object, var_18_int); //@t
	if(var_214_object != null)
		var_214_object->Remove();
	object var_215_object;
	var_4_object->get(var_215_object, var_18_int); //@t
	int var_216_int;
	var_215_object->size(var_216_int);
	int var_217_int = 0;
	
	while(var_217_int < var_216_int) {
		var_215_object->get(var_218_string, var_217_int);
		string var_240_string;
		var_218_string = var_240_string;
		func_2710(var_240_string, 0);
		var_217_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


void func_1072(int var_957_int)
{
	int var_961_int;
	var_957_int = var_961_int;
	int var_959_int;
	string var_960_string;
	func_750(var_959_int, var_960_string, var_961_int);
	@GetVariable(var_960_string, var_959_int);
	string var_962_string; int var_963_int;
	var_957_int = var_963_int;
	func_750(var_959_int, var_962_string, var_963_int);
	@SetVariable(var_962_string, ((var_959_int & 8) | 3));
}


// @pe
void func_1588(string var_557_string, int var_558_int)
{
	if(var_558_int == 1) {
		var_557_string = "alexandr";
		return 0;
	}
	if(var_558_int == 2) {
		var_557_string = "andrei";
		return 0;
	}
	if(var_558_int == 3) {
		var_557_string = "anna";
		return 0;
	}
	if(var_558_int == 4) {
		var_557_string = "bigvlad";
		return 0;
	}
	if(var_558_int == 5) {
		var_557_string = "eva";
		return 0;
	}
	if(var_558_int == 6) {
		var_557_string = "georg";
		return 0;
	}
	if(var_558_int == 7) {
		var_557_string = "grif";
		return 0;
	}
	if(var_558_int == 8) {
		var_557_string = "han";
		return 0;
	}
	if(var_558_int == 9) {
		var_557_string = "julia";
		return 0;
	}
	if(var_558_int == 10) {
		var_557_string = "kapella";
		return 0;
	}
	if(var_558_int == 11) {
		var_557_string = "katerina";
		return 0;
	}
	if(var_558_int == 12) {
		var_557_string = "klara";
		return 0;
	}
	if(var_558_int == 13) {
		var_557_string = "lara";
		return 0;
	}
	if(var_558_int == 14) {
		var_557_string = "laska";
		return 0;
	}
	if(var_558_int == 15) {
		var_557_string = "maria";
		return 0;
	}
	if(var_558_int == 16) {
		var_557_string = "mark";
		return 0;
	}
	if(var_558_int == 17) {
		var_557_string = "mat";
		return 0;
	}
	if(var_558_int == 18) {
		var_557_string = "mishka";
		return 0;
	}
	if(var_558_int == 19) {
		var_557_string = "mladvlad";
		return 0;
	}
	if(var_558_int == 20) {
		var_557_string = "notkin";
		return 0;
	}
	if(var_558_int == 21) {
		var_557_string = "ospina";
		return 0;
	}
	if(var_558_int == 22) {
		var_557_string = "petr";
		return 0;
	}
	if(var_558_int == 23) {
		var_557_string = "rubin";
		return 0;
	}
	if(var_558_int == 24) {
		var_557_string = "spi4ka";
		return 0;
	}
	if(var_558_int == 25) {
		var_557_string = "starshina";
		return 0;
	}
	if(var_558_int == 26) {
		var_557_string = "viktor";
		return 0;
	}
	if(var_558_int == 27) {
		var_557_string = "wasted_woman";
		return 0;
	}
	if(var_558_int == 28) {
		var_557_string = "wasted_male";
		return 0;
	}
	if(var_558_int == 29) {
		var_557_string = "alkash";
		return 0;
	}
	if(var_558_int == 30) {
		var_557_string = "boy";
		return 0;
	}
	if(var_558_int == 31) {
		var_557_string = "girl";
		return 0;
	}
	if(var_558_int == 32) {
		var_557_string = "littleboy";
		return 0;
	}
	if(var_558_int == 33) {
		var_557_string = "littlegirl";
		return 0;
	}
	if(var_558_int == 34) {
		var_557_string = "butcher";
		return 0;
	}
	if(var_558_int == 35) {
		var_557_string = "dohodyaga";
		return 0;
	}
	if(var_558_int == 36) {
		var_557_string = "unosha";
		return 0;
	}
	if(var_558_int == 37) {
		var_557_string = "vaxxabit";
		return 0;
	}
	if(var_558_int == 38) {
		var_557_string = "vaxxabitka";
		return 0;
	}
	if(var_558_int == 39) {
		var_557_string = "woman";
		return 0;
	}
	if(var_558_int == 40) {
		var_557_string = "worker";
		return 0;
	}
	if(var_558_int == 42) {
		var_557_string = "whitemask";
		return 0;
	}
	if(var_558_int == 43) {
		var_557_string = "birdmask";
		return 0;
	}
	if(var_558_int == 44) {
		var_557_string = "birdmask";
		return 0;
	}
	if(var_558_int == 46) {
		var_557_string = "patrol";
		return 0;
	}
	if(var_558_int == 47) {
		var_557_string = "danko";
		return 0;
	}
	if(var_558_int == 48) {
		var_557_string = "alkash_d";
		return 0;
	}
	if(var_558_int == 49) {
		var_557_string = "boy_d";
		return 0;
	}
	if(var_558_int == 50) {
		var_557_string = "butcher_d";
		return 0;
	}
	if(var_558_int == 51) {
		var_557_string = "dohodyaga_d";
		return 0;
	}
	if(var_558_int == 52) {
		var_557_string = "girl_d";
		return 0;
	}
	if(var_558_int == 53) {
		var_557_string = "littleboy_d";
		return 0;
	}
	if(var_558_int == 54) {
		var_557_string = "littlegirl_d";
		return 0;
	}
	if(var_558_int == 55) {
		var_557_string = "unosha2";
		return 0;
	}
	if(var_558_int == 56) {
		var_557_string = "unosha_d";
		return 0;
	}
	if(var_558_int == 57) {
		var_557_string = "unosha2_d";
		return 0;
	}
	if(var_558_int == 58) {
		var_557_string = "vaxxabit_d";
		return 0;
	}
	if(var_558_int == 59) {
		var_557_string = "vaxxabitka_d";
		return 0;
	}
	if(var_558_int == 60) {
		var_557_string = "wasted_male_d";
		return 0;
	}
	if(var_558_int == 61) {
		var_557_string = "wasted_woman_d";
		return 0;
	}
	if(var_558_int == 62) {
		var_557_string = "woman_d";
		return 0;
	}
	if(var_558_int == 63) {
		var_557_string = "worker2";
		return 0;
	}
	if(var_558_int == 64) {
		var_557_string = "worker_d";
		return 0;
	}
	if(var_558_int == 65) {
		var_557_string = "worker2_d";
		return 0;
	}
	if(var_558_int == 66) {
		var_557_string = "burah";
		return 0;
	}
	if(var_558_int == 67) {
		var_557_string = "gorbun_daughter";
		return 0;
	}
	if(var_558_int == 68) {
		var_557_string = "gorbun";
		return 0;
	}
	if(var_558_int == 69) {
		var_557_string = "albinos";
		return 0;
	}
	if(var_558_int == 70) {
		var_557_string = "aglaja";
		return 0;
	}
	if(var_558_int == 71) {
		var_557_string = "nude";
		return 0;
	}
	if(var_558_int == 72) {
		var_557_string = "block";
		return 0;
	}
	if(var_558_int == 73) {
		var_557_string = "officer";
		return 0;
	}
	if(var_558_int == 74) {
		var_557_string = "doberman";
		return 0;
	}
	if(var_558_int == 75) {
		var_557_string = "grabitel";
		return 0;
	}
	if(var_558_int == 76) {
		var_557_string = "gatherer_wife";
		return 0;
	}
	if(var_558_int == 77) {
		var_557_string = "rat_prophet";
		return 0;
	}
	if(var_558_int == 78) {
		var_557_string = "morlok";
		return 0;
	}
	if(var_558_int == 79) {
		var_557_string = "soldier";
		return 0;
	}
	if(var_558_int == 80) {
		var_557_string = "britva";
		return 0;
	}
	if(var_558_int == 81) {
		var_557_string = "kabaktchik";
		return 0;
	}
	if(var_558_int == 82) {
		var_557_string = "sanitar";
		return 0;
	}
	if(var_558_int == 83) {
		var_557_string = "salesman";
		return 0;
	}
	if(var_558_int == 84) {
		var_557_string = "ayyan";
		return 0;
	}
	if(var_558_int == 85) {
		var_557_string = "petrbirdmask";
		return 0;
	}
	if(var_558_int == 86) {
		var_557_string = "mogila";
		return 0;
	}
	if(var_558_int == 87) {
		var_557_string = "klikusha";
		return 0;
	}
	if(var_558_int == 88) {
		var_557_string = "karlik";
		return 0;
	}
	if(var_558_int == 89) {
		var_557_string = "lisa";
		return 0;
	}
	var_557_string = "";
}


// @pe
void func_2617(int var_387_int, float var_388_float)
{
	float var_392_float;
	var_388_float = var_392_float;
	int var_389_int;
	func_2702(var_389_int, 539371, 539370, var_392_float);
	var_389_int = var_387_int;
}


// @pe
void func_2626(int var_1033_int, float var_1034_float)
{
	float var_1038_float;
	var_1034_float = var_1038_float;
	int var_1035_int;
	func_2702(var_1035_int, 539373, 539372, var_1038_float);
	var_1035_int = var_1033_int;
}


void func_1090(object var_735_object, object var_736_object, string var_737_string, string var_738_string, string var_739_string)
{
	bool var_748_bool; cvector var_749_cvector; cvector var_750_cvector;
	var_736_object->GetLocator(var_737_string, var_748_bool, var_749_cvector, var_750_cvector);
	if(!var_748_bool) //@nz
		@Trace(("Locator " + var_737_string) + " doesn't exist");
	else
		var_736_object->AddStationaryActor(Obj(), var_749_cvector, var_750_cvector, var_738_string, var_739_string);
	object var_751_object = var_735_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_70(int var_909_int, int var_910_int)
{
	if(var_910_int >= 11) {
		var_909_int = 0;
		return 0;
	}
	var_909_int = 1;
}


void func_2635(void)
{
	object var_438_object;
	@CreateDiaryEntry(var_438_object, 739, 1, 539369);
	bool var_442_bool; object var_443_object;
	var_438_object = var_443_object;
	func_2674(var_442_bool, var_443_object, 738);
}
EMIT "Stack[-1] = 0";


void func_2765(bool var_311_bool)
{
	object var_316_object; int var_319_int;
	@CreateIntVector(var_316_object);
	object var_320_object;
	var_316_object = var_320_object;
	func_2059(var_320_object, false, -1);
	int var_317_int;
	var_316_object->size(var_317_int);
	int var_318_int = 0;
	
	while(var_318_int < var_317_int) {
		var_316_object->get(var_319_int, var_318_int);
		bool var_336_bool = true;
		bool var_337_bool; int var_338_int;
		var_319_int = var_338_int;
		func_2607(var_337_bool, var_338_int);
		if(var_337_bool != 1) {
			bool var_339_bool; int var_340_int;
			var_319_int = var_340_int;
			func_2597(var_339_bool, var_340_int);
			if(var_339_bool != 1)
				var_336_bool = false;
		}
		if(var_336_bool != 0)
			var_311_bool = false;
		var_318_int += 1;
	}
	
	var_311_bool = true;
}
EMIT "Stack[-4] = 0";


// @pe
void func_78(int var_913_int, int var_914_int)
{
	if(var_914_int < 5) {
		var_913_int = 0;
		return 0;
	}
	var_913_int = 1;
}


void func_722(object var_0_object, int var_213_int)
{
	int var_215_int;
	var_0_object->size(var_215_int); //@t
	var_215_int = var_213_int;
}


void func_1108(bool var_396_bool, string var_397_string, string var_398_string)
{
	object var_400_object;
	@FindActor(var_400_object, var_397_string);
	if(var_400_object == null)
		var_396_bool = false;
	@Trigger(var_400_object, var_398_string);
	var_396_bool = true;
}
EMIT "Stack[-1] = 0";


void func_727(object var_0_object, int var_19_int, int var_20_int)
{
	int var_199_int; int var_200_int;
	var_199_int = 0;
	
	for(;;) {
		int var_201_int;
		func_722(var_200_int, var_201_int);
		if(!(var_199_int < var_201_int)) goto Label_743;
		var_0_object->get(var_200_int, var_199_int); //@t
		if(var_20_int == var_200_int)
			var_199_int = var_19_int;
		var_199_int += 1;
	}
	
Label_743:
	var_19_int = -1;
}


void func_2648(void)
{
	object var_409_object;
	@CreateDiaryEntry(var_409_object, 737, 1, 539367);
	bool var_413_bool; object var_414_object;
	var_409_object = var_414_object;
	func_2674(var_413_bool, var_414_object, 736);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2140(object var_166_object, bool var_167_bool)
{
	var_166_object->add(7);
	var_166_object->add(23);
	var_166_object->add(21);
	var_166_object->add(9);
	var_166_object->add(3);
	var_166_object->add(1);
	var_166_object->add(11);
	var_166_object->add(13);
	if(var_167_bool == false)
		var_166_object->add(25);
}


void func_95(bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
{
	bool var_251_bool = false;
	bool var_252_bool = false;
	bool var_253_bool = false;
	if(!var_8_bool) { //@nz
		bool var_255_bool;
		func_1142(var_255_bool, 12);
		if(var_255_bool != 0)
			var_253_bool = true;
	}
	if(var_253_bool != 0) {
		bool var_263_bool;
		func_2841(var_263_bool);
		if(var_263_bool != 0)
			var_252_bool = true;
	}
	if(var_252_bool != 0) {
		int var_376_int;
		func_1134(var_376_int);
		if(var_376_int >= 8)
			var_251_bool = true;
	}
	if(var_251_bool != 0) {
		float var_383_float;
		float var_384_float;
		func_1120(var_384_float);
		var_384_float = var_383_float;
		func_6(var_383_float);
		var_8_bool = true;
	}
	bool var_402_bool = false;
	bool var_403_bool = false;
	if(!var_9_bool) { //@nz
		bool var_405_bool;
		func_1142(var_405_bool, 12);
		if(var_405_bool != 0)
			var_403_bool = true;
	}
	if(var_403_bool != 0) {
		bool var_407_bool;
		func_2765(var_407_bool);
		if(var_407_bool != 0)
			var_402_bool = true;
	}
	if(var_402_bool != 0) {
		var_9_bool = true;
		func_18();
	}
	bool var_431_bool = false;
	bool var_432_bool = false;
	if(!var_10_bool) { //@nz
		bool var_434_bool;
		func_1142(var_434_bool, 12);
		if(var_434_bool != 0)
			var_432_bool = true;
	}
	if(var_432_bool != 0) {
		bool var_436_bool;
		func_2727(var_436_bool);
		if(var_436_bool != 0)
			var_431_bool = true;
	}
	if(var_431_bool != 0) {
		var_10_bool = true;
		func_22();
	}
	bool var_445_bool = false;
	bool var_446_bool = false;
	if(!var_11_bool) { //@nz
		bool var_448_bool;
		func_1142(var_448_bool, 12);
		if(var_448_bool != 0)
			var_446_bool = true;
	}
	if(var_446_bool != 0) {
		bool var_450_bool;
		func_2803(var_450_bool);
		if(var_450_bool != 0)
			var_445_bool = true;
	}
	if(var_445_bool != 0) {
		var_11_bool = true;
		func_17();
	}
}


void func_1120(float var_384_float)
{
	float var_386_float;
	@GetGameTime(var_386_float);
	var_386_float = var_384_float;
}


void func_352(int var_906_int, int var_907_int, int var_908_int)
{
	int var_919_int; int var_920_int;
	var_919_int = 0;
	
	while(var_919_int < var_906_int) {
		int var_922_int; int var_923_int;
		var_908_int = var_923_int;
		func_376(var_919_int, var_920_int, var_922_int, var_923_int, true);
	}
	
	var_920_int = 0;
	
	while(var_920_int < var_907_int) {
		int var_971_int; int var_972_int;
		var_908_int = var_972_int;
		func_376((var_919_int + 1), var_920_int, var_971_int, var_972_int, false);
		var_920_int += 1;
	}
	
}


void func_995(object var_3_object, object var_4_object, int var_522_int)
{
	object var_537_object; string var_538_string; string var_542_string;
	string var_543_string; int var_544_int;
	func_750(var_542_string, var_543_string, var_544_int);
	@SetVariable(var_543_string, 17);
	object var_536_object;
	var_3_object->get(var_536_object, var_544_int); //@t
	if(var_536_object == null) {
		object var_547_object; int var_548_int;
		var_522_int = var_548_int;
		func_1056(var_542_string, var_547_object, var_548_int);
		var_547_object = var_537_object;
		string var_557_string; int var_558_int;
		int var_559_int; int var_560_int;
		var_522_int = var_560_int;
		func_745(var_558_int, var_559_int, var_560_int);
		var_559_int = var_558_int;
		func_1588(var_557_string, var_558_int);
		var_557_string = var_538_string;
		object var_735_object; object var_736_object;
		var_537_object = var_736_object;
		func_1090(var_735_object, var_736_object, ("pt_volonteer_" + var_538_string), "pers_birdmask", (("vbirdmask_" + var_538_string) + ".xml"));
		var_735_object = var_536_object;
		var_3_object->set(var_522_int, var_536_object); //@t
		var_537_object = null;
	}
	object var_539_object;
	var_4_object->get(var_539_object, var_522_int); //@t
	int var_540_int;
	var_539_object->size(var_540_int);
	int var_541_int = 0;
	
	while(var_541_int < var_540_int) {
		var_539_object->get(var_542_string, var_541_int);
		string var_758_string;
		var_542_string = var_758_string;
		func_2710(var_758_string, 2);
		var_541_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_1125(int var_257_int)
{
	float var_259_float;
	@GetGameTime(var_259_float);
	var_257_int = 1 + (var_259_float / 24);
}


void func_2661(object var_422_object)
{
	object var_424_object;
	@GetDiaryRoot(var_424_object);
	if(!var_424_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_422_object = false;
	}
	var_424_object = var_422_object;
}
EMIT "Stack[-1] = 0";


void func_745(object var_0_object, int var_494_int, int var_495_int)
{
	int var_497_int;
	var_0_object->get(var_497_int, var_495_int); //@t
	var_497_int = var_494_int;
}


// @pe
void func_2026(object var_180_object, bool var_181_bool, int var_182_int)
{
	var_180_object->add(18);
	var_180_object->add(24);
	var_180_object->add(20);
	var_180_object->add(14);
	if(var_181_bool == false) {
		var_180_object->add(10);
		var_180_object->add(17);
		var_180_object->add(8);
	} else if(var_182_int != 1) {
		var_180_object->add(10);
	}
	
}


void func_874(object var_4_object, int var_453_int)
{
	int var_469_int;
	var_453_int = var_469_int;
	string var_467_string;
	string var_468_string;
	func_750(var_467_string, var_468_string, var_469_int);
	int var_463_int;
	@GetVariable(var_468_string, var_463_int);
	string var_470_string; int var_471_int;
	func_750(var_467_string, var_470_string, var_471_int);
	@SetVariable(var_470_string, (var_463_int | 32));
	object var_464_object;
	var_4_object->get(var_464_object, var_471_int); //@t
	int var_465_int;
	var_464_object->size(var_465_int);
	int var_466_int = 0;
	
	while(var_466_int < var_465_int) {
		var_464_object->get(var_467_string, var_466_int);
		string var_475_string;
		var_467_string = var_475_string;
		func_2710(var_475_string, 0);
		var_466_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


void func_632(object var_3_object)
{
	object var_1017_object;
	@Trace("Volonteers Cleanup...");
	int var_1016_int = 0;
	
	for(;;) {
		int var_1019_int;
		func_722(var_1017_object, var_1019_int);
		if(!(var_1016_int < var_1019_int)) goto Label_653;
		var_3_object->get(var_1017_object, var_1016_int); //@t
		if(var_1017_object != null)
			var_1017_object->Remove();
		var_1017_object = null;
		var_1016_int += 1;
	}
	
Label_653:
}


void func_1134(int var_376_int)
{
	float var_378_float;
	@GetGameTime(var_378_float);
	int var_379_int;
	var_378_float = var_379_int;
	var_376_int = var_379_int % 24;
}


void func_750(object var_0_object, string var_217_string, int var_218_int)
{
	int var_220_int;
	var_0_object->get(var_220_int, var_218_int); //@t
	var_217_string = "vol_" + var_220_int;
}


void func_2674(bool var_413_bool, object var_414_object, int var_415_int)
{
	object var_422_object;
	func_2661(var_422_object);
	object var_419_object;
	var_422_object = var_419_object;
	object var_420_object;
	var_419_object->Find(var_415_int, var_420_object);
	if(!var_420_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_415_int);
		var_413_bool = false;
	}
	var_420_object->AddChild(var_414_object);
	@SendWorldWndMessage(7);
	int var_421_int;
	var_414_object->GetCategory(var_421_int);
	@SetDiarySection(var_421_int);
	var_413_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2803(bool var_266_bool)
{
	object var_271_object; int var_274_int;
	@CreateIntVector(var_271_object);
	object var_275_object;
	var_271_object = var_275_object;
	func_2140(false, -1);
	int var_272_int;
	var_271_object->size(var_272_int);
	int var_273_int = 0;
	
	while(var_273_int < var_272_int) {
		var_271_object->get(var_274_int, var_273_int);
		bool var_290_bool = true;
		bool var_291_bool; int var_292_int;
		var_274_int = var_292_int;
		func_2607(var_291_bool, var_292_int);
		if(var_291_bool != 1) {
			bool var_300_bool; int var_301_int;
			var_274_int = var_301_int;
			func_2597(var_300_bool, var_301_int);
			if(var_300_bool != 1)
				var_290_bool = false;
		}
		if(var_290_bool != 0)
			var_266_bool = false;
		var_273_int += 1;
	}
	
	var_266_bool = true;
}
EMIT "Stack[-4] = 0";


void func_756(bool var_850_bool, int var_851_int)
{
	int var_855_int;
	var_851_int = var_855_int;
	int var_853_int;
	string var_854_string;
	func_750(var_853_int, var_854_string, var_855_int);
	@GetVariable(var_854_string, var_853_int);
	var_850_bool = (var_853_int & 32) != 0;
}


// @pe
void func_1142(bool var_255_bool, int var_256_int)
{
	int var_257_int;
	func_1125(var_257_int);
	var_255_bool = var_257_int == var_256_int;
}


void func_376(object var_1_object, object var_2_object, int var_922_int, int var_923_int, bool var_924_bool)
{
	object var_932_object; int var_937_int; int var_938_int;
	if(var_924_bool != 0)
		var_1_object->get(var_932_object, var_923_int); //@t
	else
		var_2_object->get(var_932_object, var_923_int); //@t
	int var_933_int;
	var_932_object->size(var_933_int);
	if(var_933_int == 0)
		return 14;
	int var_934_int = 0;
	if(var_933_int > 1)
		@irand(var_934_int, var_933_int);
	int var_935_int = 0;
	
	while(var_935_int < var_933_int) {
		var_932_object->get(var_937_int, ((var_935_int + var_934_int) % var_933_int));
		int var_946_int; int var_947_int;
		var_937_int = var_947_int;
		func_727(var_938_int, var_946_int, var_947_int);
		var_946_int = var_938_int;
		bool var_948_bool; int var_949_int;
		var_938_int = var_949_int;
		func_780(var_948_bool, var_949_int);
		if(var_948_bool != 0) {
			int var_957_int;
			var_938_int = var_957_int;
			func_1072(var_957_int);
			var_938_int = -1;
			return 14;
		}
		var_935_int += 1;
	}
	
	var_922_int = -1;
	
}
EMIT "Stack[-7] = 0";


void func_2172(object var_29_object, object var_30_object, object var_31_object)
{
	object var_33_object;
	var_29_object->add(1);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("cot_alexandr@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(2);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("shouse1_kabak@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(3);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("cot_anna@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(4);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("cot_bigvlad@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(6);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("cot_georg@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(15);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("cot_maria@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(9);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("cot_julia@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(10);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("cot_kapella@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(11);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("cot_katerina@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(13);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("cot_lara@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(18);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("vagon_mishka@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(19);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("house_vlad@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(20);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("warehouse_notkin@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(21);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("dt_house_1_04@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(22);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("house_petr@door1");
		var_33_object->add("house_petr@door2");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(24);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("house_spi4ka@door1");
		var_33_object->add("house_spi4ka@door2");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(26);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("cot_viktor@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(8);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(14);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("storojka@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(17);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("termitnik_mat@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("termitnik");
	var_29_object->add(16);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(7);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("warehouse_grif@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(23);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("warehouse_rubin@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(5);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_33_object->add("cot_eva@door1");
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
	var_29_object->add(25);
	if(var_30_object != 0) {
		@CreateStringVector(var_33_object);
		var_30_object->add(var_33_object);
	}
	if(var_31_object != 0)
		var_31_object->add("outdoor");
}
EMIT "Stack[-1] = 0";


