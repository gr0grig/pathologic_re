maintask task_0
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, bool var_7_bool, bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
	{
		func_661(var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool);
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
			func_1155(var_21_int, var_22_string);
			var_21_int = var_20_int;
			func_734(var_18_int, var_19_int, var_20_int);
			var_19_int = var_18_int;
			func_951(var_14_int, var_15_int, var_18_int);
			func_102(var_12_string, var_22_string, var_14_int, var_15_int);
		} else if(var_12_string == "rescue_oneday") {
				int var_453_int;
				int var_454_int; int var_455_int;
				int var_456_int; string var_457_string;
				var_13_string = var_457_string;
				func_1155(var_456_int, var_457_string);
				var_456_int = var_455_int;
				func_734(var_453_int, var_454_int, var_455_int);
				var_454_int = var_453_int;
				func_881(var_15_int, var_453_int);
		}
	Label_358:
		for(;;) {

		}
	
		if(var_12_string == "rescue_locked") {
			var_15_int = 0;

			for(;;) {
				int var_480_int;
				func_729(var_15_int, var_480_int);
				if(!(var_15_int < var_480_int)) goto Label_281;
				bool var_482_bool = false;
				bool var_483_bool; int var_484_int;
				var_15_int = var_484_int;
				func_775(var_483_bool, var_484_int);
				if(var_483_bool != 0) {
					bool var_492_bool; int var_493_int;
					int var_494_int; int var_495_int;
					var_15_int = var_495_int;
					func_752(var_493_int, var_494_int, var_495_int);
					var_494_int = var_493_int;
					func_26(var_492_bool, var_493_int);
					if(var_492_bool != 0)
						var_482_bool = true;
				}
				if(var_482_bool != 0) {
					int var_514_int;
					var_15_int = var_514_int;
					func_951(var_14_int, var_15_int, var_514_int);
				}
				var_15_int += 1;
			}

		Label_281:
			func_102(var_12_string, var_13_string, var_14_int, var_15_int);
		} else if(var_12_string == "kill") {
			int var_518_int;
			int var_519_int; int var_520_int;
			int var_521_int; string var_522_string;
			var_13_string = var_522_string;
			func_1155(var_521_int, var_522_string);
			var_521_int = var_520_int;
			func_734(var_518_int, var_519_int, var_520_int);
			var_519_int = var_518_int;
			func_1002(var_14_int, var_15_int, var_518_int);
		} else if(var_12_string == "disease") {
			int var_759_int;
			int var_760_int; int var_761_int;
			int var_762_int; string var_763_string;
			var_13_string = var_763_string;
			func_1155(var_762_int, var_763_string);
			var_762_int = var_761_int;
			func_734(var_759_int, var_760_int, var_761_int);
			var_760_int = var_759_int;
			func_811(var_14_int, var_15_int, var_759_int);
		} else if(var_12_string == "update") {
			func_433(var_14_int, var_15_int);
		} else if(var_12_string == "cleanup") {
			func_639(var_15_int);
		} else if(var_12_string == "childs_letter") {
			if(!var_8_bool) { //@nz
				float var_1025_float;
				float var_1026_float;
				func_1127(var_1026_float);
				var_1026_float = var_1025_float;
				func_6(var_1025_float);
				var_8_bool = true;
			}
		} else if(var_12_string == "theater_letter") {
			var_1029_bool = !var_7_bool; //@nz
			if(var_1029_bool == 0) goto Label_358;
			float var_1030_float;
			float var_1031_float;
			func_1127(var_1031_float);
			var_1031_float = var_1030_float;
			func_0(var_1030_float);
			var_7_bool = true;
		}
	}

}


// @pe
void func_0(float var_1030_float)
{
	float var_1033_float;
	var_1030_float = var_1033_float;
	int var_1032_int;
	func_2623(var_1032_int, var_1033_float);
}


// @pe
void func_1155(int var_21_int, string var_22_string)
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


// @pe
void func_6(float var_383_float)
{
	float var_388_float;
	var_383_float = var_388_float;
	int var_387_int;
	func_2614(var_387_int, var_388_float);
	bool var_396_bool;
	func_1115(var_396_bool, "quest_b12_01", "init_hidden_room");
}


void func_775(bool var_483_bool, int var_484_int)
{
	int var_488_int;
	var_484_int = var_488_int;
	int var_486_int;
	string var_487_string;
	func_757(var_486_int, var_487_string, var_488_int);
	@GetVariable(var_487_string, var_486_int);
	var_483_bool = (var_486_int & 2) != 0;
}


void func_2699(int var_389_int, int var_390_int, int var_391_int, float var_392_float)
{
	int var_394_int;
	@AddMessage(var_390_int, var_391_int, var_392_float, var_394_int);
	@SendWorldWndMessage(6);
	var_394_int = var_389_int;
}


void func_639(object var_3_object)
{
	object var_1016_object;
	@Trace("Volonteers Cleanup...");
	int var_1015_int = 0;
	
	for(;;) {
		int var_1018_int;
		func_729(var_1016_object, var_1018_int);
		if(!(var_1015_int < var_1018_int)) goto Label_660;
		var_3_object->get(var_1016_object, var_1015_int); //@t
		if(var_1016_object != null)
			var_1016_object->Remove();
		var_1016_object = null;
		var_1015_int += 1;
	}
	
Label_660:
}


// @pe
void func_17(void)
{
	func_2645();
}


void func_787(bool var_947_bool, int var_948_int)
{
	int var_952_int;
	var_948_int = var_952_int;
	int var_950_int;
	string var_951_string;
	func_757(var_950_int, var_951_string, var_952_int);
	@GetVariable(var_951_string, var_950_int);
	var_947_bool = (var_950_int & 1) == 0;
}


void func_915(object var_4_object, int var_856_int)
{
	int var_868_int;
	var_856_int = var_868_int;
	string var_866_string;
	string var_867_string;
	func_757(var_866_string, var_867_string, var_868_int);
	int var_862_int;
	@GetVariable(var_867_string, var_862_int);
	string var_869_string; int var_870_int;
	func_757(var_866_string, var_869_string, var_870_int);
	@SetVariable(var_869_string, ((var_862_int | 32) - 32));
	object var_863_object;
	var_4_object->get(var_863_object, var_870_int); //@t
	int var_864_int;
	var_863_object->size(var_864_int);
	int var_865_int = 0;
	
	while(var_865_int < var_864_int) {
		var_863_object->get(var_866_string, var_865_int);
		string var_876_string;
		var_866_string = var_876_string;
		func_2707(var_876_string, 1);
		var_865_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


// @pe
void func_21(void)
{
	func_2632();
}


void func_661(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int)
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
	func_2169(var_29_object, var_30_object, var_31_object);
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
		func_729(var_27_object, var_213_int);
		if(!(0 < var_213_int)) goto Label_714;
		string var_217_string; int var_218_int;
		var_26_int = var_218_int;
		func_757(var_27_object, var_217_string, var_218_int);
		@SetVariable(var_217_string, 0);
		var_25_object->add(Obj()); //@t
		var_27_object = null;
		var_26_int += 1;
	}
	
Label_714:
	var_6_int = 0;
	var_224_string = "Volonteers count: ";
	int var_225_int;
	func_729(var_224_string, var_225_int);
	@Trace(var_224_string + var_225_int);
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";


// @pe
void func_2071(object var_166_object, bool var_167_bool, int var_168_int)
{
	var_166_object->add(18);
	var_166_object->add(24);
	var_166_object->add(20);
	var_166_object->add(14);
	if(var_167_bool == false) {
		var_166_object->add(10);
		var_166_object->add(17);
		var_166_object->add(8);
	} else if(var_168_int != 1) {
		var_166_object->add(10);
	}
	
}


void func_2838(bool var_263_bool)
{
	int var_265_int = 0;
	bool var_266_bool;
	func_2800(var_266_bool);
	if(var_266_bool != 0)
		var_265_int += 1;
	bool var_311_bool;
	func_2762(var_311_bool);
	if(var_311_bool != 0)
		var_265_int += 1;
	bool var_343_bool;
	func_2724(var_343_bool);
	if(var_343_bool != 0)
		var_265_int += 1;
	var_263_bool = var_265_int >= 2;
}


void func_25(void)
{
}


// @pe
void func_26(bool var_492_bool, int var_493_int)
{
	int var_499_int;
	var_493_int = var_499_int;
	bool var_498_bool;
	func_2033(var_498_bool, var_499_int);
	var_498_bool = var_492_bool;
}


void func_2707(string var_240_string, int var_241_int)
{
	object var_243_object;
	@FindActor(var_243_object, var_240_string);
	if(!var_243_object) //@nz
		@Trace(("Door " + var_240_string) + " not found");
	else
		var_243_object->SetProperty("dlocked", var_241_int);
	
}
EMIT "Stack[-1] = 0";


void func_799(bool var_880_bool, int var_881_int)
{
	int var_885_int;
	var_881_int = var_885_int;
	int var_883_int;
	string var_884_string;
	func_757(var_883_int, var_884_string, var_885_int);
	@GetVariable(var_884_string, var_883_int);
	var_880_bool = (var_883_int & 4) != 0;
}


void func_33(object var_158_object, object var_159_object)
{
	object var_163_object;
	@CreateIntVector(var_163_object);
	object var_166_object;
	func_2071(var_166_object, true, 1);
	object var_164_object;
	@CreateIntVector(var_164_object);
	object var_181_object;
	var_164_object = var_181_object;
	func_2104(var_181_object, true, 1);
	object var_196_object;
	func_2137(true, 1);
	int var_165_int = 0;
	
	while(var_165_int < 12) {
		var_158_object->add(var_166_object);
		var_159_object->add(var_196_object);
		var_165_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2594(bool var_300_bool, int var_301_int)
{
	int var_303_int;
	@GetVariable(("vol_" + var_301_int), var_303_int);
	var_300_bool = (var_303_int & 4) != 0;
}


void func_2724(bool var_343_bool)
{
	object var_348_object; int var_351_int;
	@CreateIntVector(var_348_object);
	object var_352_object;
	var_348_object = var_352_object;
	func_2071(var_352_object, false, -1);
	int var_349_int;
	var_348_object->size(var_349_int);
	int var_350_int = 0;
	
	while(var_350_int < var_349_int) {
		var_348_object->get(var_351_int, var_350_int);
		bool var_368_bool = true;
		bool var_369_bool; int var_370_int;
		var_351_int = var_370_int;
		func_2604(var_369_bool, var_370_int);
		if(var_369_bool != 1) {
			bool var_371_bool; int var_372_int;
			var_351_int = var_372_int;
			func_2594(var_371_bool, var_372_int);
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


void func_1063(object var_5_object, object var_543_object, int var_544_int)
{
	string var_548_string; object var_549_object;
	var_5_object->get(var_548_string, var_544_int); //@t
	if(var_548_string == "outdoor") {
		@GetMainOutdoorScene(var_549_object);
		var_549_object = var_543_object;
	EMIT "Stack[-2] = 0";
	}
	object var_550_object;
	@GetSceneByName(var_550_object, var_548_string);
	var_550_object = var_543_object;
}
EMIT "Stack[-1] = 0";


void func_811(object var_3_object, object var_4_object, int var_759_int)
{
	object var_774_object; string var_775_string;
	int var_781_int;
	var_759_int = var_781_int;
	string var_779_string;
	string var_780_string;
	func_757(var_779_string, var_780_string, var_781_int);
	int var_772_int;
	@GetVariable(var_780_string, var_772_int);
	string var_782_string; int var_783_int;
	func_757(var_779_string, var_782_string, var_783_int);
	@SetVariable(var_782_string, ((var_772_int & 8) | 5));
	object var_773_object;
	var_3_object->get(var_773_object, var_783_int); //@t
	if(var_773_object == null) {
		object var_789_object; int var_790_int;
		var_759_int = var_790_int;
		func_1063(var_779_string, var_789_object, var_790_int);
		var_789_object = var_774_object;
		string var_791_string; int var_792_int;
		int var_793_int; int var_794_int;
		var_759_int = var_794_int;
		func_752(var_792_int, var_793_int, var_794_int);
		var_793_int = var_792_int;
		func_1595(var_791_string, var_792_int);
		var_791_string = var_775_string;
		object var_795_object; object var_796_object;
		var_774_object = var_796_object;
		func_1097(var_795_object, var_796_object, ("pt_volonteer_" + var_775_string), "pers_birdmask", (("vbirdmask_" + var_775_string) + ".xml"));
		var_795_object = var_773_object;
		var_3_object->set(var_759_int, var_773_object); //@t
		var_774_object = null;
	}
	object var_776_object;
	var_4_object->get(var_776_object, var_759_int); //@t
	int var_777_int;
	var_776_object->size(var_777_int);
	int var_778_int = 0;
	
	while(var_778_int < var_777_int) {
		var_776_object->get(var_779_string, var_778_int);
		string var_805_string;
		var_779_string = var_805_string;
		func_2707(var_805_string, 1);
		var_778_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_2604(bool var_291_bool, int var_292_int)
{
	int var_294_int;
	@GetVariable(("vol_" + var_292_int), var_294_int);
	var_291_bool = (var_294_int & 16) != 0;
}


void func_433(object var_4_object, int var_6_int)
{
	int var_822_int; int var_823_int; object var_824_object; int var_825_int; int var_826_int; string var_827_string; int var_829_int; int var_830_int; int var_832_int; int var_833_int;
	@Trace(1);
	
	for(;;) {
		int var_835_int;
		func_729(var_833_int, var_835_int);
		if(!(0 < var_835_int)) goto Label_528;
		@Trace(2);
		int var_838_int; int var_839_int;
		var_822_int = var_839_int;
		func_752(var_833_int, var_838_int, var_839_int);
		var_838_int = var_823_int;
		@Trace(3);
		bool var_841_bool; int var_842_int;
		var_822_int = var_842_int;
		func_775(var_841_bool, var_842_int);
		if(var_841_bool != 0) {
			@Trace(4);
			int var_844_int;
			var_822_int = var_844_int;
			func_811(var_832_int, var_833_int, var_844_int);
		}
		@Trace(5);
		bool var_846_bool; int var_847_int;
		var_822_int = var_847_int;
		func_763(var_846_bool, var_847_int);
		if(var_846_bool != 0) {
			@Trace(6);
			int var_856_int;
			var_822_int = var_856_int;
			func_915(var_833_int, var_856_int);
		}
		@Trace(7);
		bool var_880_bool; int var_881_int;
		var_822_int = var_881_int;
		func_799(var_880_bool, var_881_int);
		if(var_880_bool != 0) {
			@Trace(8);
			var_4_object->get(var_824_object, var_822_int); //@t
			@Trace(9);
			var_824_object->size(var_825_int);
			@Trace(10);
			var_826_int = 0;

			while(var_826_int < var_825_int) {
				@Trace(11);
				var_824_object->get(var_827_string, var_826_int);
				string var_894_string;
				var_827_string = var_894_string;
				func_2707(var_894_string, 1);
				var_826_int += 1;
			}

			@Trace(12);
			var_824_object = null;
		}
		@Trace(13);
		var_822_int += 1;
	}
	
Label_528:
	@Trace(14);
	var_6_int += 1;
	int var_902_int; int var_903_int;
	int var_905_int;
	func_70(var_905_int, var_6_int);
	var_905_int = var_902_int;
	int var_912_int;
	func_85(var_912_int, var_6_int);
	var_912_int = var_903_int;
	func_359(var_902_int, var_903_int, var_6_int);
	@Trace(15);
	int var_828_int = 0;
	
	for(;;) {
		int var_975_int;
		func_729(var_833_int, var_975_int);
		if(!(0 < var_975_int)) goto Label_589;
		@Trace(16);
		int var_978_int; int var_979_int;
		var_829_int = var_979_int;
		func_752(var_833_int, var_978_int, var_979_int);
		var_978_int = var_830_int;
		@Trace(17);
		bool var_981_bool; int var_982_int;
		var_829_int = var_982_int;
		func_775(var_981_bool, var_982_int);
		if(var_981_bool != 0) {
			@Trace(18);
			string var_985_string; int var_986_int;
			var_830_int = var_986_int;
			func_1595(var_985_string, var_986_int);
			@Trace("Volonteer : " + var_985_string);
			var_828_int += 1;
		}
		var_829_int += 1;
	}
	
Label_589:
	@Trace(19);
	int var_831_int = 0;
	
	for(;;) {
		int var_991_int;
		func_729(var_833_int, var_991_int);
		if(!(0 < var_991_int)) goto Label_628;
		@Trace(20);
		int var_994_int; int var_995_int;
		var_832_int = var_995_int;
		func_752(var_833_int, var_994_int, var_995_int);
		var_994_int = var_833_int;
		bool var_996_bool; int var_997_int;
		var_832_int = var_997_int;
		func_799(var_996_bool, var_997_int);
		if(var_996_bool != 0) {
			@Trace(21);
			var_831_int += 1;
			string var_1001_string; int var_1002_int;
			var_833_int = var_1002_int;
			func_1595(var_1001_string, var_1002_int);
			@Trace("Diseased volonteer : " + var_1001_string);
		}
		var_832_int += 1;
	}
	
Label_628:
	@Trace(22);
	@Trace((("Today volonteers: " + var_828_int) + ", diseased: ") + var_831_int);
}


// @pe
void func_2614(int var_387_int, float var_388_float)
{
	float var_392_float;
	var_388_float = var_392_float;
	int var_389_int;
	func_2699(var_389_int, 522709, 522708, var_392_float);
	var_389_int = var_387_int;
}


void func_951(object var_3_object, object var_4_object, int var_18_int)
{
	int var_220_int;
	var_18_int = var_220_int;
	string var_218_string;
	string var_219_string;
	func_757(var_218_string, var_219_string, var_220_int);
	int var_213_int;
	@GetVariable(var_219_string, var_213_int);
	string var_224_string; int var_225_int;
	var_18_int = var_225_int;
	func_757(var_218_string, var_224_string, var_225_int);
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
		func_2707(var_240_string, 0);
		var_217_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


// @pe
void func_2104(object var_181_object, bool var_182_bool, int var_183_int)
{
	var_181_object->add(6);
	var_181_object->add(26);
	var_181_object->add(2);
	var_181_object->add(22);
	if(var_182_bool == false) {
		var_181_object->add(15);
		var_181_object->add(5);
		var_181_object->add(16);
	} else if(var_183_int != 0) {
		var_181_object->add(15);
	}
	
}


void func_1079(int var_956_int)
{
	int var_960_int;
	var_956_int = var_960_int;
	int var_958_int;
	string var_959_string;
	func_757(var_958_int, var_959_string, var_960_int);
	@GetVariable(var_959_string, var_958_int);
	string var_961_string; int var_962_int;
	var_956_int = var_962_int;
	func_757(var_958_int, var_961_string, var_962_int);
	@SetVariable(var_961_string, ((var_958_int & 8) | 3));
}


// @pe
void func_1595(string var_553_string, int var_554_int)
{
	if(var_554_int == 1) {
		var_553_string = "alexandr";
		return 0;
	}
	if(var_554_int == 2) {
		var_553_string = "andrei";
		return 0;
	}
	if(var_554_int == 3) {
		var_553_string = "anna";
		return 0;
	}
	if(var_554_int == 4) {
		var_553_string = "bigvlad";
		return 0;
	}
	if(var_554_int == 5) {
		var_553_string = "eva";
		return 0;
	}
	if(var_554_int == 6) {
		var_553_string = "georg";
		return 0;
	}
	if(var_554_int == 7) {
		var_553_string = "grif";
		return 0;
	}
	if(var_554_int == 8) {
		var_553_string = "han";
		return 0;
	}
	if(var_554_int == 9) {
		var_553_string = "julia";
		return 0;
	}
	if(var_554_int == 10) {
		var_553_string = "kapella";
		return 0;
	}
	if(var_554_int == 11) {
		var_553_string = "katerina";
		return 0;
	}
	if(var_554_int == 12) {
		var_553_string = "klara";
		return 0;
	}
	if(var_554_int == 13) {
		var_553_string = "lara";
		return 0;
	}
	if(var_554_int == 14) {
		var_553_string = "laska";
		return 0;
	}
	if(var_554_int == 15) {
		var_553_string = "maria";
		return 0;
	}
	if(var_554_int == 16) {
		var_553_string = "mark";
		return 0;
	}
	if(var_554_int == 17) {
		var_553_string = "mat";
		return 0;
	}
	if(var_554_int == 18) {
		var_553_string = "mishka";
		return 0;
	}
	if(var_554_int == 19) {
		var_553_string = "mladvlad";
		return 0;
	}
	if(var_554_int == 20) {
		var_553_string = "notkin";
		return 0;
	}
	if(var_554_int == 21) {
		var_553_string = "ospina";
		return 0;
	}
	if(var_554_int == 22) {
		var_553_string = "petr";
		return 0;
	}
	if(var_554_int == 23) {
		var_553_string = "rubin";
		return 0;
	}
	if(var_554_int == 24) {
		var_553_string = "spi4ka";
		return 0;
	}
	if(var_554_int == 25) {
		var_553_string = "starshina";
		return 0;
	}
	if(var_554_int == 26) {
		var_553_string = "viktor";
		return 0;
	}
	if(var_554_int == 27) {
		var_553_string = "wasted_woman";
		return 0;
	}
	if(var_554_int == 28) {
		var_553_string = "wasted_male";
		return 0;
	}
	if(var_554_int == 29) {
		var_553_string = "alkash";
		return 0;
	}
	if(var_554_int == 30) {
		var_553_string = "boy";
		return 0;
	}
	if(var_554_int == 31) {
		var_553_string = "girl";
		return 0;
	}
	if(var_554_int == 32) {
		var_553_string = "littleboy";
		return 0;
	}
	if(var_554_int == 33) {
		var_553_string = "littlegirl";
		return 0;
	}
	if(var_554_int == 34) {
		var_553_string = "butcher";
		return 0;
	}
	if(var_554_int == 35) {
		var_553_string = "dohodyaga";
		return 0;
	}
	if(var_554_int == 36) {
		var_553_string = "unosha";
		return 0;
	}
	if(var_554_int == 37) {
		var_553_string = "vaxxabit";
		return 0;
	}
	if(var_554_int == 38) {
		var_553_string = "vaxxabitka";
		return 0;
	}
	if(var_554_int == 39) {
		var_553_string = "woman";
		return 0;
	}
	if(var_554_int == 40) {
		var_553_string = "worker";
		return 0;
	}
	if(var_554_int == 42) {
		var_553_string = "whitemask";
		return 0;
	}
	if(var_554_int == 43) {
		var_553_string = "birdmask";
		return 0;
	}
	if(var_554_int == 44) {
		var_553_string = "birdmask";
		return 0;
	}
	if(var_554_int == 46) {
		var_553_string = "patrol";
		return 0;
	}
	if(var_554_int == 47) {
		var_553_string = "danko";
		return 0;
	}
	if(var_554_int == 48) {
		var_553_string = "alkash_d";
		return 0;
	}
	if(var_554_int == 49) {
		var_553_string = "boy_d";
		return 0;
	}
	if(var_554_int == 50) {
		var_553_string = "butcher_d";
		return 0;
	}
	if(var_554_int == 51) {
		var_553_string = "dohodyaga_d";
		return 0;
	}
	if(var_554_int == 52) {
		var_553_string = "girl_d";
		return 0;
	}
	if(var_554_int == 53) {
		var_553_string = "littleboy_d";
		return 0;
	}
	if(var_554_int == 54) {
		var_553_string = "littlegirl_d";
		return 0;
	}
	if(var_554_int == 55) {
		var_553_string = "unosha2";
		return 0;
	}
	if(var_554_int == 56) {
		var_553_string = "unosha_d";
		return 0;
	}
	if(var_554_int == 57) {
		var_553_string = "unosha2_d";
		return 0;
	}
	if(var_554_int == 58) {
		var_553_string = "vaxxabit_d";
		return 0;
	}
	if(var_554_int == 59) {
		var_553_string = "vaxxabitka_d";
		return 0;
	}
	if(var_554_int == 60) {
		var_553_string = "wasted_male_d";
		return 0;
	}
	if(var_554_int == 61) {
		var_553_string = "wasted_woman_d";
		return 0;
	}
	if(var_554_int == 62) {
		var_553_string = "woman_d";
		return 0;
	}
	if(var_554_int == 63) {
		var_553_string = "worker2";
		return 0;
	}
	if(var_554_int == 64) {
		var_553_string = "worker_d";
		return 0;
	}
	if(var_554_int == 65) {
		var_553_string = "worker2_d";
		return 0;
	}
	if(var_554_int == 66) {
		var_553_string = "burah";
		return 0;
	}
	if(var_554_int == 67) {
		var_553_string = "gorbun_daughter";
		return 0;
	}
	if(var_554_int == 68) {
		var_553_string = "gorbun";
		return 0;
	}
	if(var_554_int == 69) {
		var_553_string = "albinos";
		return 0;
	}
	if(var_554_int == 70) {
		var_553_string = "aglaja";
		return 0;
	}
	if(var_554_int == 71) {
		var_553_string = "nude";
		return 0;
	}
	if(var_554_int == 72) {
		var_553_string = "block";
		return 0;
	}
	if(var_554_int == 73) {
		var_553_string = "officer";
		return 0;
	}
	if(var_554_int == 74) {
		var_553_string = "doberman";
		return 0;
	}
	if(var_554_int == 75) {
		var_553_string = "grabitel";
		return 0;
	}
	if(var_554_int == 76) {
		var_553_string = "gatherer_wife";
		return 0;
	}
	if(var_554_int == 77) {
		var_553_string = "rat_prophet";
		return 0;
	}
	if(var_554_int == 78) {
		var_553_string = "morlok";
		return 0;
	}
	if(var_554_int == 79) {
		var_553_string = "soldier";
		return 0;
	}
	if(var_554_int == 80) {
		var_553_string = "britva";
		return 0;
	}
	if(var_554_int == 81) {
		var_553_string = "kabaktchik";
		return 0;
	}
	if(var_554_int == 82) {
		var_553_string = "sanitar";
		return 0;
	}
	if(var_554_int == 83) {
		var_553_string = "salesman";
		return 0;
	}
	if(var_554_int == 84) {
		var_553_string = "ayyan";
		return 0;
	}
	if(var_554_int == 85) {
		var_553_string = "petrbirdmask";
		return 0;
	}
	if(var_554_int == 86) {
		var_553_string = "mogila";
		return 0;
	}
	if(var_554_int == 87) {
		var_553_string = "klikusha";
		return 0;
	}
	if(var_554_int == 88) {
		var_553_string = "karlik";
		return 0;
	}
	if(var_554_int == 89) {
		var_553_string = "lisa";
		return 0;
	}
	var_553_string = "";
}


// @pe
void func_2623(int var_1032_int, float var_1033_float)
{
	float var_1037_float;
	var_1033_float = var_1037_float;
	int var_1034_int;
	func_2699(var_1034_int, 522711, 522710, var_1037_float);
	var_1034_int = var_1032_int;
}


// @pe
void func_70(int var_905_int, int var_906_int)
{
	bool var_907_bool = true;
	var_909_bool = var_906_int < 1;
	if(var_909_bool != 1) {
		var_911_bool = var_906_int >= 11;
		if(var_911_bool != 1)
			var_907_bool = false;
	}
	if(var_907_bool != 0) {
		var_905_int = 0;
		return 0;
	}
	var_905_int = 1;
}


void func_2632(void)
{
	object var_409_object;
	@CreateDiaryEntry(var_409_object, 697, 1, 535405);
	bool var_413_bool; object var_414_object;
	var_409_object = var_414_object;
	func_2671(var_413_bool, var_414_object, 695);
}
EMIT "Stack[-1] = 0";


void func_1097(object var_731_object, object var_732_object, string var_733_string, string var_734_string, string var_735_string)
{
	bool var_744_bool; cvector var_745_cvector; cvector var_746_cvector;
	var_732_object->GetLocator(var_733_string, var_744_bool, var_745_cvector, var_746_cvector);
	if(!var_744_bool) //@nz
		@Trace(("Locator " + var_733_string) + " doesn't exist");
	else
		var_732_object->AddStationaryActor(Obj(), var_745_cvector, var_746_cvector, var_734_string, var_735_string);
	object var_747_object = var_731_object;
	
}
EMIT "Stack[-1] = 0";


void func_2762(bool var_311_bool)
{
	object var_316_object; int var_319_int;
	@CreateIntVector(var_316_object);
	object var_320_object;
	var_316_object = var_320_object;
	func_2104(var_320_object, false, -1);
	int var_317_int;
	var_316_object->size(var_317_int);
	int var_318_int = 0;
	
	while(var_318_int < var_317_int) {
		var_316_object->get(var_319_int, var_318_int);
		bool var_336_bool = true;
		bool var_337_bool; int var_338_int;
		var_319_int = var_338_int;
		func_2604(var_337_bool, var_338_int);
		if(var_337_bool != 1) {
			bool var_339_bool; int var_340_int;
			var_319_int = var_340_int;
			func_2594(var_339_bool, var_340_int);
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


void func_2645(void)
{
	object var_444_object;
	@CreateDiaryEntry(var_444_object, 698, 1, 535406);
	bool var_448_bool; object var_449_object;
	var_444_object = var_449_object;
	func_2671(var_448_bool, var_449_object, 696);
}
EMIT "Stack[-1] = 0";


// @pe
void func_85(int var_912_int, int var_913_int)
{
	if(var_913_int < 5) {
		var_912_int = 0;
		return 0;
	}
	var_912_int = 1;
}


// @pe
void func_2137(object var_196_object, bool var_197_bool)
{
	var_196_object->add(7);
	var_196_object->add(23);
	var_196_object->add(21);
	var_196_object->add(9);
	var_196_object->add(3);
	var_196_object->add(1);
	var_196_object->add(11);
	var_196_object->add(13);
	if(var_197_bool == false)
		var_196_object->add(25);
}


void func_729(object var_0_object, int var_213_int)
{
	int var_215_int;
	var_0_object->size(var_215_int); //@t
	var_215_int = var_213_int;
}


void func_1115(bool var_396_bool, string var_397_string, string var_398_string)
{
	object var_400_object;
	@FindActor(var_400_object, var_397_string);
	if(var_400_object == null)
		var_396_bool = false;
	@Trigger(var_400_object, var_398_string);
	var_396_bool = true;
}
EMIT "Stack[-1] = 0";


void func_734(object var_0_object, int var_19_int, int var_20_int)
{
	int var_199_int; int var_200_int;
	var_199_int = 0;
	
	for(;;) {
		int var_201_int;
		func_729(var_200_int, var_201_int);
		if(!(var_199_int < var_201_int)) goto Label_750;
		var_0_object->get(var_200_int, var_199_int); //@t
		if(var_20_int == var_200_int)
			var_199_int = var_19_int;
		var_199_int += 1;
	}
	
Label_750:
	var_19_int = -1;
}


void func_2658(object var_422_object)
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


void func_102(bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
{
	bool var_251_bool = false;
	bool var_252_bool = false;
	bool var_253_bool = false;
	if(!var_8_bool) { //@nz
		bool var_255_bool;
		func_1149(var_255_bool, 12);
		if(var_255_bool != 0)
			var_253_bool = true;
	}
	if(var_253_bool != 0) {
		bool var_263_bool;
		func_2838(var_263_bool);
		if(var_263_bool != 0)
			var_252_bool = true;
	}
	if(var_252_bool != 0) {
		int var_376_int;
		func_1141(var_376_int);
		if(var_376_int >= 8)
			var_251_bool = true;
	}
	if(var_251_bool != 0) {
		float var_383_float;
		float var_384_float;
		func_1127(var_384_float);
		var_384_float = var_383_float;
		func_6(var_383_float);
		var_8_bool = true;
	}
	bool var_402_bool = false;
	bool var_403_bool = false;
	if(!var_9_bool) { //@nz
		bool var_405_bool;
		func_1149(var_405_bool, 12);
		if(var_405_bool != 0)
			var_403_bool = true;
	}
	if(var_403_bool != 0) {
		bool var_407_bool;
		func_2762(var_407_bool);
		if(var_407_bool != 0)
			var_402_bool = true;
	}
	if(var_402_bool != 0) {
		var_9_bool = true;
		func_21();
	}
	bool var_431_bool = false;
	bool var_432_bool = false;
	if(!var_10_bool) { //@nz
		bool var_434_bool;
		func_1149(var_434_bool, 12);
		if(var_434_bool != 0)
			var_432_bool = true;
	}
	if(var_432_bool != 0) {
		bool var_436_bool;
		func_2724(var_436_bool);
		if(var_436_bool != 0)
			var_431_bool = true;
	}
	if(var_431_bool != 0) {
		var_10_bool = true;
		func_25();
	}
	bool var_437_bool = false;
	bool var_438_bool = false;
	if(!var_11_bool) { //@nz
		bool var_440_bool;
		func_1149(var_440_bool, 12);
		if(var_440_bool != 0)
			var_438_bool = true;
	}
	if(var_438_bool != 0) {
		bool var_442_bool;
		func_2800(var_442_bool);
		if(var_442_bool != 0)
			var_437_bool = true;
	}
	if(var_437_bool != 0) {
		var_11_bool = true;
		func_17();
	}
}


void func_1127(float var_384_float)
{
	float var_386_float;
	@GetGameTime(var_386_float);
	var_386_float = var_384_float;
}


void func_359(int var_902_int, int var_903_int, int var_904_int)
{
	int var_918_int; int var_919_int;
	var_918_int = 0;
	
	while(var_918_int < var_902_int) {
		int var_921_int; int var_922_int;
		var_904_int = var_922_int;
		func_383(var_918_int, var_919_int, var_921_int, var_922_int, true);
	}
	
	var_919_int = 0;
	
	while(var_919_int < var_903_int) {
		int var_970_int; int var_971_int;
		var_904_int = var_971_int;
		func_383((var_918_int + 1), var_919_int, var_970_int, var_971_int, false);
		var_919_int += 1;
	}
	
}


void func_1002(object var_3_object, object var_4_object, int var_518_int)
{
	object var_533_object; string var_534_string; string var_538_string;
	string var_539_string; int var_540_int;
	func_757(var_538_string, var_539_string, var_540_int);
	@SetVariable(var_539_string, 17);
	object var_532_object;
	var_3_object->get(var_532_object, var_540_int); //@t
	if(var_532_object == null) {
		object var_543_object; int var_544_int;
		var_518_int = var_544_int;
		func_1063(var_538_string, var_543_object, var_544_int);
		var_543_object = var_533_object;
		string var_553_string; int var_554_int;
		int var_555_int; int var_556_int;
		var_518_int = var_556_int;
		func_752(var_554_int, var_555_int, var_556_int);
		var_555_int = var_554_int;
		func_1595(var_553_string, var_554_int);
		var_553_string = var_534_string;
		object var_731_object; object var_732_object;
		var_533_object = var_732_object;
		func_1097(var_731_object, var_732_object, ("pt_volonteer_" + var_534_string), "pers_birdmask", (("vbirdmask_" + var_534_string) + ".xml"));
		var_731_object = var_532_object;
		var_3_object->set(var_518_int, var_532_object); //@t
		var_533_object = null;
	}
	object var_535_object;
	var_4_object->get(var_535_object, var_518_int); //@t
	int var_536_int;
	var_535_object->size(var_536_int);
	int var_537_int = 0;
	
	while(var_537_int < var_536_int) {
		var_535_object->get(var_538_string, var_537_int);
		string var_754_string;
		var_538_string = var_754_string;
		func_2707(var_754_string, 2);
		var_537_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_1132(int var_257_int)
{
	float var_259_float;
	@GetGameTime(var_259_float);
	var_257_int = 1 + (var_259_float / 24);
}


void func_2671(bool var_413_bool, object var_414_object, int var_415_int)
{
	object var_422_object;
	func_2658(var_422_object);
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


void func_2800(bool var_266_bool)
{
	object var_271_object; int var_274_int;
	@CreateIntVector(var_271_object);
	object var_275_object;
	var_271_object = var_275_object;
	func_2137(false, -1);
	int var_272_int;
	var_271_object->size(var_272_int);
	int var_273_int = 0;
	
	while(var_273_int < var_272_int) {
		var_271_object->get(var_274_int, var_273_int);
		bool var_290_bool = true;
		bool var_291_bool; int var_292_int;
		var_274_int = var_292_int;
		func_2604(var_291_bool, var_292_int);
		if(var_291_bool != 1) {
			bool var_300_bool; int var_301_int;
			var_274_int = var_301_int;
			func_2594(var_300_bool, var_301_int);
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


// @pe
void func_2033(bool var_498_bool, int var_499_int)
{
	if(var_499_int == 18) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 24) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 20) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 14) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 10) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 17) {
		var_498_bool = true;
		return 0;
	}
	if(var_499_int == 8) {
		var_498_bool = true;
		return 0;
	}
	var_498_bool = false;
}


void func_881(object var_4_object, int var_453_int)
{
	int var_469_int;
	var_453_int = var_469_int;
	string var_467_string;
	string var_468_string;
	func_757(var_467_string, var_468_string, var_469_int);
	int var_463_int;
	@GetVariable(var_468_string, var_463_int);
	string var_470_string; int var_471_int;
	func_757(var_467_string, var_470_string, var_471_int);
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
		func_2707(var_475_string, 0);
		var_466_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


void func_752(object var_0_object, int var_494_int, int var_495_int)
{
	int var_497_int;
	var_0_object->get(var_497_int, var_495_int); //@t
	var_497_int = var_494_int;
}


void func_1141(int var_376_int)
{
	float var_378_float;
	@GetGameTime(var_378_float);
	int var_379_int;
	var_378_float = var_379_int;
	var_376_int = var_379_int % 24;
}


void func_757(object var_0_object, string var_217_string, int var_218_int)
{
	int var_220_int;
	var_0_object->get(var_220_int, var_218_int); //@t
	var_217_string = "vol_" + var_220_int;
}


void func_2169(object var_29_object, object var_30_object, object var_31_object)
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


void func_763(bool var_846_bool, int var_847_int)
{
	int var_851_int;
	var_847_int = var_851_int;
	int var_849_int;
	string var_850_string;
	func_757(var_849_int, var_850_string, var_851_int);
	@GetVariable(var_850_string, var_849_int);
	var_846_bool = (var_849_int & 32) != 0;
}


// @pe
void func_1149(bool var_255_bool, int var_256_int)
{
	int var_257_int;
	func_1132(var_257_int);
	var_255_bool = var_257_int == var_256_int;
}


void func_383(object var_1_object, object var_2_object, int var_921_int, int var_922_int, bool var_923_bool)
{
	object var_931_object; int var_936_int; int var_937_int;
	if(var_923_bool != 0)
		var_1_object->get(var_931_object, var_922_int); //@t
	else
		var_2_object->get(var_931_object, var_922_int); //@t
	int var_932_int;
	var_931_object->size(var_932_int);
	if(var_932_int == 0)
		return 14;
	int var_933_int = 0;
	if(var_932_int > 1)
		@irand(var_933_int, var_932_int);
	int var_934_int = 0;
	
	while(var_934_int < var_932_int) {
		var_931_object->get(var_936_int, ((var_934_int + var_933_int) % var_932_int));
		int var_945_int; int var_946_int;
		var_936_int = var_946_int;
		func_734(var_937_int, var_945_int, var_946_int);
		var_945_int = var_937_int;
		bool var_947_bool; int var_948_int;
		var_937_int = var_948_int;
		func_787(var_947_bool, var_948_int);
		if(var_947_bool != 0) {
			int var_956_int;
			var_937_int = var_956_int;
			func_1079(var_956_int);
			var_937_int = -1;
			return 14;
		}
		var_934_int += 1;
	}
	
	var_921_int = -1;
	
}
EMIT "Stack[-7] = 0";


