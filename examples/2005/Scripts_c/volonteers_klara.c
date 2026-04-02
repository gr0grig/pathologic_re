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
				int var_446_int;
				int var_447_int; int var_448_int;
				int var_449_int; string var_450_string;
				var_13_string = var_450_string;
				func_1155(var_449_int, var_450_string);
				var_449_int = var_448_int;
				func_734(var_446_int, var_447_int, var_448_int);
				var_447_int = var_446_int;
				func_881(var_15_int, var_446_int);
		}
	Label_358:
		for(;;) {

		}
	
		if(var_12_string == "rescue_locked") {
			var_15_int = 0;

			for(;;) {
				int var_473_int;
				func_729(var_15_int, var_473_int);
				if(!(var_15_int < var_473_int)) goto Label_281;
				bool var_475_bool = false;
				bool var_476_bool; int var_477_int;
				var_15_int = var_477_int;
				func_775(var_476_bool, var_477_int);
				if(var_476_bool != 0) {
					bool var_485_bool; int var_486_int;
					int var_487_int; int var_488_int;
					var_15_int = var_488_int;
					func_752(var_486_int, var_487_int, var_488_int);
					var_487_int = var_486_int;
					func_26(var_485_bool, var_486_int);
					if(var_485_bool != 0)
						var_475_bool = true;
				}
				if(var_475_bool != 0) {
					int var_511_int;
					var_15_int = var_511_int;
					func_951(var_14_int, var_15_int, var_511_int);
				}
				var_15_int += 1;
			}

		Label_281:
			func_102(var_12_string, var_13_string, var_14_int, var_15_int);
		} else if(var_12_string == "kill") {
			int var_515_int;
			int var_516_int; int var_517_int;
			int var_518_int; string var_519_string;
			var_13_string = var_519_string;
			func_1155(var_518_int, var_519_string);
			var_518_int = var_517_int;
			func_734(var_515_int, var_516_int, var_517_int);
			var_516_int = var_515_int;
			func_1002(var_14_int, var_15_int, var_515_int);
		} else if(var_12_string == "disease") {
			int var_748_int;
			int var_749_int; int var_750_int;
			int var_751_int; string var_752_string;
			var_13_string = var_752_string;
			func_1155(var_751_int, var_752_string);
			var_751_int = var_750_int;
			func_734(var_748_int, var_749_int, var_750_int);
			var_749_int = var_748_int;
			func_811(var_14_int, var_15_int, var_748_int);
		} else if(var_12_string == "update") {
			func_433(var_14_int, var_15_int);
		} else if(var_12_string == "cleanup") {
			func_639(var_15_int);
		} else if(var_12_string == "childs_letter") {
			if(!var_8_bool) { //@nz
				float var_1014_float;
				float var_1015_float;
				func_1127(var_1015_float);
				var_1015_float = var_1014_float;
				func_6(var_1014_float);
				var_8_bool = true;
			}
		} else if(var_12_string == "theater_letter") {
			var_1018_bool = !var_7_bool; //@nz
			if(var_1018_bool == 0) goto Label_358;
			float var_1019_float;
			float var_1020_float;
			func_1127(var_1020_float);
			var_1020_float = var_1019_float;
			func_0(var_1019_float);
			var_7_bool = true;
		}
	}

}


// @pe
void func_0(float var_1019_float)
{
	float var_1022_float;
	var_1019_float = var_1022_float;
	int var_1021_int;
	func_2593(var_1021_int, var_1022_float);
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
	var_21_int = -1;
}


void func_2564(bool var_292_bool, int var_293_int)
{
	int var_295_int;
	@GetVariable(("vol_" + var_293_int), var_295_int);
	var_292_bool = (var_295_int & 4) != 0;
}


void func_2694(bool var_336_bool)
{
	object var_341_object; int var_344_int;
	@CreateIntVector(var_341_object);
	object var_345_object;
	var_341_object = var_345_object;
	func_1993(var_345_object, false, -1);
	int var_342_int;
	var_341_object->size(var_342_int);
	int var_343_int = 0;
	
	while(var_343_int < var_342_int) {
		var_341_object->get(var_344_int, var_343_int);
		bool var_361_bool = true;
		bool var_362_bool; int var_363_int;
		var_344_int = var_363_int;
		func_2574(var_362_bool, var_363_int);
		if(var_362_bool != 1) {
			bool var_364_bool; int var_365_int;
			var_344_int = var_365_int;
			func_2564(var_364_bool, var_365_int);
			if(var_364_bool != 1)
				var_361_bool = false;
		}
		if(var_361_bool != 0)
			var_336_bool = false;
		var_343_int += 1;
	}
	
	var_336_bool = true;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6(float var_376_float)
{
	float var_381_float;
	var_376_float = var_381_float;
	int var_380_int;
	func_2584(var_380_int, var_381_float);
	bool var_389_bool;
	func_1115(var_389_bool, "quest_k12_01", "init_hidden_room");
}


void func_775(bool var_476_bool, int var_477_int)
{
	int var_481_int;
	var_477_int = var_481_int;
	int var_479_int;
	string var_480_string;
	func_757(var_479_int, var_480_string, var_481_int);
	@GetVariable(var_480_string, var_479_int);
	var_476_bool = (var_479_int & 2) != 0;
}


// @pe
void func_2062(bool var_491_bool, int var_492_int)
{
	if(var_492_int == 7) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 23) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 21) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 9) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 3) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 1) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 11) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 13) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 25) {
		var_491_bool = true;
		return 0;
	}
	var_491_bool = false;
}


void func_2574(bool var_283_bool, int var_284_int)
{
	int var_286_int;
	@GetVariable(("vol_" + var_284_int), var_286_int);
	var_283_bool = (var_286_int & 16) != 0;
}


void func_639(object var_3_object)
{
	object var_1005_object;
	@Trace("Volonteers Cleanup...");
	int var_1004_int = 0;
	
	for(;;) {
		int var_1007_int;
		func_729(var_1005_object, var_1007_int);
		if(!(var_1004_int < var_1007_int)) goto Label_660;
		var_3_object->get(var_1005_object, var_1004_int); //@t
		if(var_1005_object != null)
			var_1005_object->Remove();
		var_1005_object = null;
		var_1004_int += 1;
	}
	
Label_660:
}


void func_17(void)
{
}


// @pe
void func_18(void)
{
	func_2615();
}


void func_787(bool var_936_bool, int var_937_int)
{
	int var_941_int;
	var_937_int = var_941_int;
	int var_939_int;
	string var_940_string;
	func_757(var_939_int, var_940_string, var_941_int);
	@GetVariable(var_940_string, var_939_int);
	var_936_bool = (var_939_int & 1) == 0;
}


void func_915(object var_4_object, int var_845_int)
{
	int var_857_int;
	var_845_int = var_857_int;
	string var_855_string;
	string var_856_string;
	func_757(var_855_string, var_856_string, var_857_int);
	int var_851_int;
	@GetVariable(var_856_string, var_851_int);
	string var_858_string; int var_859_int;
	func_757(var_855_string, var_858_string, var_859_int);
	@SetVariable(var_858_string, ((var_851_int | 32) - 32));
	object var_852_object;
	var_4_object->get(var_852_object, var_859_int); //@t
	int var_853_int;
	var_852_object->size(var_853_int);
	int var_854_int = 0;
	
	while(var_854_int < var_853_int) {
		var_852_object->get(var_855_string, var_854_int);
		string var_865_string;
		var_855_string = var_865_string;
		func_2677(var_865_string, 1);
		var_854_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


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
	func_2142(var_29_object, var_30_object, var_31_object);
	var_0_object = var_29_object;
	var_4_object = var_30_object;
	var_5_object = var_31_object;
	object var_23_object;
	@CreateObjectVector(var_23_object);
	object var_24_object;
	@CreateObjectVector(var_24_object);
	object var_157_object; object var_158_object;
	func_33(var_157_object, var_158_object);
	var_1_object = var_157_object;
	var_2_object = var_158_object;
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
void func_22(void)
{
	func_2602();
}


// @pe
void func_2584(int var_380_int, float var_381_float)
{
	float var_385_float;
	var_381_float = var_385_float;
	int var_382_int;
	func_2669(var_382_int, 539371, 539370, var_385_float);
	var_382_int = var_380_int;
}


// @pe
void func_26(bool var_485_bool, int var_486_int)
{
	int var_492_int;
	var_486_int = var_492_int;
	bool var_491_bool;
	func_2062(var_491_bool, var_492_int);
	var_491_bool = var_485_bool;
}


void func_799(bool var_869_bool, int var_870_int)
{
	int var_874_int;
	var_870_int = var_874_int;
	int var_872_int;
	string var_873_string;
	func_757(var_872_int, var_873_string, var_874_int);
	@GetVariable(var_873_string, var_872_int);
	var_869_bool = (var_872_int & 4) != 0;
}


// @pe
void func_2593(int var_1021_int, float var_1022_float)
{
	float var_1026_float;
	var_1022_float = var_1026_float;
	int var_1023_int;
	func_2669(var_1023_int, 539373, 539372, var_1026_float);
	var_1023_int = var_1021_int;
}


void func_33(object var_157_object, object var_158_object)
{
	object var_162_object;
	@CreateIntVector(var_162_object);
	object var_165_object;
	func_2110(true, 2);
	object var_163_object;
	@CreateIntVector(var_163_object);
	object var_179_object;
	var_163_object = var_179_object;
	func_1993(var_179_object, true, 2);
	object var_194_object;
	func_2026(var_194_object, true, 2);
	int var_164_int = 0;
	
	while(var_164_int < 12) {
		var_157_object->add(var_165_object);
		var_158_object->add(var_194_object);
		var_164_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1575(string var_550_string, int var_551_int)
{
	if(var_551_int == 1) {
		var_550_string = "alexandr";
		return 0;
	}
	if(var_551_int == 2) {
		var_550_string = "andrei";
		return 0;
	}
	if(var_551_int == 3) {
		var_550_string = "anna";
		return 0;
	}
	if(var_551_int == 4) {
		var_550_string = "bigvlad";
		return 0;
	}
	if(var_551_int == 5) {
		var_550_string = "eva";
		return 0;
	}
	if(var_551_int == 6) {
		var_550_string = "georg";
		return 0;
	}
	if(var_551_int == 7) {
		var_550_string = "grif";
		return 0;
	}
	if(var_551_int == 8) {
		var_550_string = "han";
		return 0;
	}
	if(var_551_int == 9) {
		var_550_string = "julia";
		return 0;
	}
	if(var_551_int == 10) {
		var_550_string = "kapella";
		return 0;
	}
	if(var_551_int == 11) {
		var_550_string = "katerina";
		return 0;
	}
	if(var_551_int == 12) {
		var_550_string = "klara";
		return 0;
	}
	if(var_551_int == 13) {
		var_550_string = "lara";
		return 0;
	}
	if(var_551_int == 14) {
		var_550_string = "laska";
		return 0;
	}
	if(var_551_int == 15) {
		var_550_string = "maria";
		return 0;
	}
	if(var_551_int == 16) {
		var_550_string = "mark";
		return 0;
	}
	if(var_551_int == 17) {
		var_550_string = "mat";
		return 0;
	}
	if(var_551_int == 18) {
		var_550_string = "mishka";
		return 0;
	}
	if(var_551_int == 19) {
		var_550_string = "mladvlad";
		return 0;
	}
	if(var_551_int == 20) {
		var_550_string = "notkin";
		return 0;
	}
	if(var_551_int == 21) {
		var_550_string = "ospina";
		return 0;
	}
	if(var_551_int == 22) {
		var_550_string = "petr";
		return 0;
	}
	if(var_551_int == 23) {
		var_550_string = "rubin";
		return 0;
	}
	if(var_551_int == 24) {
		var_550_string = "spi4ka";
		return 0;
	}
	if(var_551_int == 25) {
		var_550_string = "starshina";
		return 0;
	}
	if(var_551_int == 26) {
		var_550_string = "viktor";
		return 0;
	}
	if(var_551_int == 27) {
		var_550_string = "wasted_woman";
		return 0;
	}
	if(var_551_int == 28) {
		var_550_string = "wasted_male";
		return 0;
	}
	if(var_551_int == 29) {
		var_550_string = "alkash";
		return 0;
	}
	if(var_551_int == 30) {
		var_550_string = "boy";
		return 0;
	}
	if(var_551_int == 31) {
		var_550_string = "girl";
		return 0;
	}
	if(var_551_int == 32) {
		var_550_string = "littleboy";
		return 0;
	}
	if(var_551_int == 33) {
		var_550_string = "littlegirl";
		return 0;
	}
	if(var_551_int == 34) {
		var_550_string = "butcher";
		return 0;
	}
	if(var_551_int == 35) {
		var_550_string = "dohodyaga";
		return 0;
	}
	if(var_551_int == 36) {
		var_550_string = "unosha";
		return 0;
	}
	if(var_551_int == 37) {
		var_550_string = "vaxxabit";
		return 0;
	}
	if(var_551_int == 38) {
		var_550_string = "vaxxabitka";
		return 0;
	}
	if(var_551_int == 39) {
		var_550_string = "woman";
		return 0;
	}
	if(var_551_int == 40) {
		var_550_string = "worker";
		return 0;
	}
	if(var_551_int == 42) {
		var_550_string = "whitemask";
		return 0;
	}
	if(var_551_int == 43) {
		var_550_string = "birdmask";
		return 0;
	}
	if(var_551_int == 44) {
		var_550_string = "birdmask";
		return 0;
	}
	if(var_551_int == 46) {
		var_550_string = "patrol";
		return 0;
	}
	if(var_551_int == 47) {
		var_550_string = "danko";
		return 0;
	}
	if(var_551_int == 48) {
		var_550_string = "alkash_d";
		return 0;
	}
	if(var_551_int == 49) {
		var_550_string = "boy_d";
		return 0;
	}
	if(var_551_int == 50) {
		var_550_string = "butcher_d";
		return 0;
	}
	if(var_551_int == 51) {
		var_550_string = "dohodyaga_d";
		return 0;
	}
	if(var_551_int == 52) {
		var_550_string = "girl_d";
		return 0;
	}
	if(var_551_int == 53) {
		var_550_string = "littleboy_d";
		return 0;
	}
	if(var_551_int == 54) {
		var_550_string = "littlegirl_d";
		return 0;
	}
	if(var_551_int == 55) {
		var_550_string = "unosha2";
		return 0;
	}
	if(var_551_int == 56) {
		var_550_string = "unosha_d";
		return 0;
	}
	if(var_551_int == 57) {
		var_550_string = "unosha2_d";
		return 0;
	}
	if(var_551_int == 58) {
		var_550_string = "vaxxabit_d";
		return 0;
	}
	if(var_551_int == 59) {
		var_550_string = "vaxxabitka_d";
		return 0;
	}
	if(var_551_int == 60) {
		var_550_string = "wasted_male_d";
		return 0;
	}
	if(var_551_int == 61) {
		var_550_string = "wasted_woman_d";
		return 0;
	}
	if(var_551_int == 62) {
		var_550_string = "woman_d";
		return 0;
	}
	if(var_551_int == 63) {
		var_550_string = "worker2";
		return 0;
	}
	if(var_551_int == 64) {
		var_550_string = "worker_d";
		return 0;
	}
	if(var_551_int == 65) {
		var_550_string = "worker2_d";
		return 0;
	}
	if(var_551_int == 66) {
		var_550_string = "burah";
		return 0;
	}
	if(var_551_int == 67) {
		var_550_string = "gorbun_daughter";
		return 0;
	}
	if(var_551_int == 68) {
		var_550_string = "gorbun";
		return 0;
	}
	if(var_551_int == 69) {
		var_550_string = "albinos";
		return 0;
	}
	if(var_551_int == 70) {
		var_550_string = "aglaja";
		return 0;
	}
	if(var_551_int == 71) {
		var_550_string = "nude";
		return 0;
	}
	if(var_551_int == 72) {
		var_550_string = "block";
		return 0;
	}
	if(var_551_int == 73) {
		var_550_string = "officer";
		return 0;
	}
	if(var_551_int == 74) {
		var_550_string = "doberman";
		return 0;
	}
	if(var_551_int == 75) {
		var_550_string = "grabitel";
		return 0;
	}
	if(var_551_int == 76) {
		var_550_string = "gatherer_wife";
		return 0;
	}
	if(var_551_int == 77) {
		var_550_string = "rat_prophet";
		return 0;
	}
	if(var_551_int == 78) {
		var_550_string = "morlok";
		return 0;
	}
	if(var_551_int == 79) {
		var_550_string = "soldier";
		return 0;
	}
	if(var_551_int == 80) {
		var_550_string = "britva";
		return 0;
	}
	if(var_551_int == 81) {
		var_550_string = "kabaktchik";
		return 0;
	}
	if(var_551_int == 82) {
		var_550_string = "sanitar";
		return 0;
	}
	if(var_551_int == 83) {
		var_550_string = "salesman";
		return 0;
	}
	if(var_551_int == 84) {
		var_550_string = "ayyan";
		return 0;
	}
	if(var_551_int == 85) {
		var_550_string = "petrbirdmask";
		return 0;
	}
	var_550_string = "";
}


void func_1063(object var_5_object, object var_540_object, int var_541_int)
{
	string var_545_string; object var_546_object;
	var_5_object->get(var_545_string, var_541_int); //@t
	if(var_545_string == "outdoor") {
		@GetMainOutdoorScene(var_546_object);
		var_546_object = var_540_object;
	EMIT "Stack[-2] = 0";
	}
	object var_547_object;
	@GetSceneByName(var_547_object, var_545_string);
	var_547_object = var_540_object;
}
EMIT "Stack[-1] = 0";


void func_2602(void)
{
	object var_431_object;
	@CreateDiaryEntry(var_431_object, 739, 1, 539369);
	bool var_435_bool; object var_436_object;
	var_431_object = var_436_object;
	func_2641(var_435_bool, var_436_object, 738);
}
EMIT "Stack[-1] = 0";


void func_811(object var_3_object, object var_4_object, int var_748_int)
{
	object var_763_object; string var_764_string;
	int var_770_int;
	var_748_int = var_770_int;
	string var_768_string;
	string var_769_string;
	func_757(var_768_string, var_769_string, var_770_int);
	int var_761_int;
	@GetVariable(var_769_string, var_761_int);
	string var_771_string; int var_772_int;
	func_757(var_768_string, var_771_string, var_772_int);
	@SetVariable(var_771_string, ((var_761_int & 8) | 5));
	object var_762_object;
	var_3_object->get(var_762_object, var_772_int); //@t
	if(var_762_object == null) {
		object var_778_object; int var_779_int;
		var_748_int = var_779_int;
		func_1063(var_768_string, var_778_object, var_779_int);
		var_778_object = var_763_object;
		string var_780_string; int var_781_int;
		int var_782_int; int var_783_int;
		var_748_int = var_783_int;
		func_752(var_781_int, var_782_int, var_783_int);
		var_782_int = var_781_int;
		func_1575(var_780_string, var_781_int);
		var_780_string = var_764_string;
		object var_784_object; object var_785_object;
		var_763_object = var_785_object;
		func_1097(var_784_object, var_785_object, ("pt_volonteer_" + var_764_string), "pers_birdmask", (("vbirdmask_" + var_764_string) + ".xml"));
		var_784_object = var_762_object;
		var_3_object->set(var_748_int, var_762_object); //@t
		var_763_object = null;
	}
	object var_765_object;
	var_4_object->get(var_765_object, var_748_int); //@t
	int var_766_int;
	var_765_object->size(var_766_int);
	int var_767_int = 0;
	
	while(var_767_int < var_766_int) {
		var_765_object->get(var_768_string, var_767_int);
		string var_794_string;
		var_768_string = var_794_string;
		func_2677(var_794_string, 1);
		var_767_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_2732(bool var_303_bool)
{
	object var_308_object; int var_311_int;
	@CreateIntVector(var_308_object);
	object var_312_object;
	var_308_object = var_312_object;
	func_2026(var_312_object, false, -1);
	int var_309_int;
	var_308_object->size(var_309_int);
	int var_310_int = 0;
	
	while(var_310_int < var_309_int) {
		var_308_object->get(var_311_int, var_310_int);
		bool var_329_bool = true;
		bool var_330_bool; int var_331_int;
		var_311_int = var_331_int;
		func_2574(var_330_bool, var_331_int);
		if(var_330_bool != 1) {
			bool var_332_bool; int var_333_int;
			var_311_int = var_333_int;
			func_2564(var_332_bool, var_333_int);
			if(var_332_bool != 1)
				var_329_bool = false;
		}
		if(var_329_bool != 0)
			var_303_bool = false;
		var_310_int += 1;
	}
	
	var_303_bool = true;
}
EMIT "Stack[-4] = 0";


void func_433(object var_4_object, int var_6_int)
{
	int var_811_int; int var_812_int; object var_813_object; int var_814_int; int var_815_int; string var_816_string; int var_818_int; int var_819_int; int var_821_int; int var_822_int;
	@Trace(1);
	
	for(;;) {
		int var_824_int;
		func_729(var_822_int, var_824_int);
		if(!(0 < var_824_int)) goto Label_528;
		@Trace(2);
		int var_827_int; int var_828_int;
		var_811_int = var_828_int;
		func_752(var_822_int, var_827_int, var_828_int);
		var_827_int = var_812_int;
		@Trace(3);
		bool var_830_bool; int var_831_int;
		var_811_int = var_831_int;
		func_775(var_830_bool, var_831_int);
		if(var_830_bool != 0) {
			@Trace(4);
			int var_833_int;
			var_811_int = var_833_int;
			func_811(var_821_int, var_822_int, var_833_int);
		}
		@Trace(5);
		bool var_835_bool; int var_836_int;
		var_811_int = var_836_int;
		func_763(var_835_bool, var_836_int);
		if(var_835_bool != 0) {
			@Trace(6);
			int var_845_int;
			var_811_int = var_845_int;
			func_915(var_822_int, var_845_int);
		}
		@Trace(7);
		bool var_869_bool; int var_870_int;
		var_811_int = var_870_int;
		func_799(var_869_bool, var_870_int);
		if(var_869_bool != 0) {
			@Trace(8);
			var_4_object->get(var_813_object, var_811_int); //@t
			@Trace(9);
			var_813_object->size(var_814_int);
			@Trace(10);
			var_815_int = 0;

			while(var_815_int < var_814_int) {
				@Trace(11);
				var_813_object->get(var_816_string, var_815_int);
				string var_883_string;
				var_816_string = var_883_string;
				func_2677(var_883_string, 1);
				var_815_int += 1;
			}

			@Trace(12);
			var_813_object = null;
		}
		@Trace(13);
		var_811_int += 1;
	}
	
Label_528:
	@Trace(14);
	var_6_int += 1;
	int var_891_int; int var_892_int;
	int var_894_int;
	func_70(var_894_int, var_6_int);
	var_894_int = var_891_int;
	int var_901_int;
	func_85(var_901_int, var_6_int);
	var_901_int = var_892_int;
	func_359(var_891_int, var_892_int, var_6_int);
	@Trace(15);
	int var_817_int = 0;
	
	for(;;) {
		int var_964_int;
		func_729(var_822_int, var_964_int);
		if(!(0 < var_964_int)) goto Label_589;
		@Trace(16);
		int var_967_int; int var_968_int;
		var_818_int = var_968_int;
		func_752(var_822_int, var_967_int, var_968_int);
		var_967_int = var_819_int;
		@Trace(17);
		bool var_970_bool; int var_971_int;
		var_818_int = var_971_int;
		func_775(var_970_bool, var_971_int);
		if(var_970_bool != 0) {
			@Trace(18);
			string var_974_string; int var_975_int;
			var_819_int = var_975_int;
			func_1575(var_974_string, var_975_int);
			@Trace("Volonteer : " + var_974_string);
			var_817_int += 1;
		}
		var_818_int += 1;
	}
	
Label_589:
	@Trace(19);
	int var_820_int = 0;
	
	for(;;) {
		int var_980_int;
		func_729(var_822_int, var_980_int);
		if(!(0 < var_980_int)) goto Label_628;
		@Trace(20);
		int var_983_int; int var_984_int;
		var_821_int = var_984_int;
		func_752(var_822_int, var_983_int, var_984_int);
		var_983_int = var_822_int;
		bool var_985_bool; int var_986_int;
		var_821_int = var_986_int;
		func_799(var_985_bool, var_986_int);
		if(var_985_bool != 0) {
			@Trace(21);
			var_820_int += 1;
			string var_990_string; int var_991_int;
			var_822_int = var_991_int;
			func_1575(var_990_string, var_991_int);
			@Trace("Diseased volonteer : " + var_990_string);
		}
		var_821_int += 1;
	}
	
Label_628:
	@Trace(22);
	@Trace((("Today volonteers: " + var_817_int) + ", diseased: ") + var_820_int);
}


void func_2615(void)
{
	object var_402_object;
	@CreateDiaryEntry(var_402_object, 737, 1, 539367);
	bool var_406_bool; object var_407_object;
	var_402_object = var_407_object;
	func_2641(var_406_bool, var_407_object, 736);
}
EMIT "Stack[-1] = 0";


void func_951(object var_3_object, object var_4_object, int var_18_int)
{
	int var_212_int;
	var_18_int = var_212_int;
	string var_210_string;
	string var_211_string;
	func_757(var_210_string, var_211_string, var_212_int);
	int var_205_int;
	@GetVariable(var_211_string, var_205_int);
	string var_216_string; int var_217_int;
	var_18_int = var_217_int;
	func_757(var_210_string, var_216_string, var_217_int);
	@SetVariable(var_216_string, ((((((var_205_int | 4) | 1) | 2) - 4) - 1) - 2));
	object var_206_object;
	var_3_object->get(var_206_object, var_18_int); //@t
	if(var_206_object != null)
		var_206_object->Remove();
	object var_207_object;
	var_4_object->get(var_207_object, var_18_int); //@t
	int var_208_int;
	var_207_object->size(var_208_int);
	int var_209_int = 0;
	
	while(var_209_int < var_208_int) {
		var_207_object->get(var_210_string, var_209_int);
		string var_232_string;
		var_210_string = var_232_string;
		func_2677(var_232_string, 0);
		var_209_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


void func_1079(int var_945_int)
{
	int var_949_int;
	var_945_int = var_949_int;
	int var_947_int;
	string var_948_string;
	func_757(var_947_int, var_948_string, var_949_int);
	@GetVariable(var_948_string, var_947_int);
	string var_950_string; int var_951_int;
	var_945_int = var_951_int;
	func_757(var_947_int, var_950_string, var_951_int);
	@SetVariable(var_950_string, ((var_947_int & 8) | 3));
}


// @pe
void func_2110(object var_165_object, bool var_166_bool)
{
	var_165_object->add(7);
	var_165_object->add(23);
	var_165_object->add(21);
	var_165_object->add(9);
	var_165_object->add(3);
	var_165_object->add(1);
	var_165_object->add(11);
	var_165_object->add(13);
	if(var_166_bool == false)
		var_165_object->add(25);
}


void func_2628(object var_415_object)
{
	object var_417_object;
	@GetDiaryRoot(var_417_object);
	if(!var_417_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_415_object = false;
	}
	var_417_object = var_415_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_70(int var_894_int, int var_895_int)
{
	bool var_896_bool = true;
	var_898_bool = var_895_int < 1;
	if(var_898_bool != 1) {
		var_900_bool = var_895_int >= 11;
		if(var_900_bool != 1)
			var_896_bool = false;
	}
	if(var_896_bool != 0) {
		var_894_int = 0;
		return 0;
	}
	var_894_int = 1;
}


// @pe
void func_1993(object var_179_object, bool var_180_bool, int var_181_int)
{
	var_179_object->add(18);
	var_179_object->add(24);
	var_179_object->add(20);
	var_179_object->add(14);
	if(var_180_bool == false) {
		var_179_object->add(10);
		var_179_object->add(17);
		var_179_object->add(8);
	} else if(var_181_int != 1) {
		var_179_object->add(10);
	}
	
}


void func_1097(object var_720_object, object var_721_object, string var_722_string, string var_723_string, string var_724_string)
{
	bool var_733_bool; cvector var_734_cvector; cvector var_735_cvector;
	var_721_object->GetLocator(var_722_string, var_733_bool, var_734_cvector, var_735_cvector);
	if(!var_733_bool) //@nz
		@Trace(("Locator " + var_722_string) + " doesn't exist");
	else
		var_721_object->AddStationaryActor(Obj(), var_734_cvector, var_735_cvector, var_723_string, var_724_string);
	object var_736_object = var_720_object;
	
}
EMIT "Stack[-1] = 0";


void func_2641(bool var_406_bool, object var_407_object, int var_408_int)
{
	object var_415_object;
	func_2628(var_415_object);
	object var_412_object;
	var_415_object = var_412_object;
	object var_413_object;
	var_412_object->Find(var_408_int, var_413_object);
	if(!var_413_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_408_int);
		var_406_bool = false;
	}
	var_413_object->AddChild(var_407_object);
	@SendWorldWndMessage(7);
	int var_414_int;
	var_407_object->GetCategory(var_414_int);
	@SetDiarySection(var_414_int);
	var_406_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2770(bool var_258_bool)
{
	object var_263_object; int var_266_int;
	@CreateIntVector(var_263_object);
	object var_267_object;
	var_263_object = var_267_object;
	func_2110(false, -1);
	int var_264_int;
	var_263_object->size(var_264_int);
	int var_265_int = 0;
	
	while(var_265_int < var_264_int) {
		var_263_object->get(var_266_int, var_265_int);
		bool var_282_bool = true;
		bool var_283_bool; int var_284_int;
		var_266_int = var_284_int;
		func_2574(var_283_bool, var_284_int);
		if(var_283_bool != 1) {
			bool var_292_bool; int var_293_int;
			var_266_int = var_293_int;
			func_2564(var_292_bool, var_293_int);
			if(var_292_bool != 1)
				var_282_bool = false;
		}
		if(var_282_bool != 0)
			var_258_bool = false;
		var_265_int += 1;
	}
	
	var_258_bool = true;
}
EMIT "Stack[-4] = 0";


// @pe
void func_85(int var_901_int, int var_902_int)
{
	if(var_902_int < 5) {
		var_901_int = 0;
		return 0;
	}
	var_901_int = 1;
}


void func_729(object var_0_object, int var_213_int)
{
	int var_215_int;
	var_0_object->size(var_215_int); //@t
	var_215_int = var_213_int;
}


void func_1115(bool var_389_bool, string var_390_string, string var_391_string)
{
	object var_393_object;
	@FindActor(var_393_object, var_390_string);
	if(var_393_object == null)
		var_389_bool = false;
	@Trigger(var_393_object, var_391_string);
	var_389_bool = true;
}
EMIT "Stack[-1] = 0";


void func_734(object var_0_object, int var_19_int, int var_20_int)
{
	int var_191_int; int var_192_int;
	var_191_int = 0;
	
	for(;;) {
		int var_193_int;
		func_729(var_192_int, var_193_int);
		if(!(var_191_int < var_193_int)) goto Label_750;
		var_0_object->get(var_192_int, var_191_int); //@t
		if(var_20_int == var_192_int)
			var_191_int = var_19_int;
		var_191_int += 1;
	}
	
Label_750:
	var_19_int = -1;
}


void func_2142(object var_29_object, object var_30_object, object var_31_object)
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


void func_102(bool var_8_bool, bool var_9_bool, bool var_10_bool, bool var_11_bool)
{
	bool var_243_bool = false;
	bool var_244_bool = false;
	bool var_245_bool = false;
	if(!var_8_bool) { //@nz
		bool var_247_bool;
		func_1149(var_247_bool, 12);
		if(var_247_bool != 0)
			var_245_bool = true;
	}
	if(var_245_bool != 0) {
		bool var_255_bool;
		func_2808(var_255_bool);
		if(var_255_bool != 0)
			var_244_bool = true;
	}
	if(var_244_bool != 0) {
		int var_369_int;
		func_1141(var_369_int);
		if(var_369_int >= 8)
			var_243_bool = true;
	}
	if(var_243_bool != 0) {
		float var_376_float;
		float var_377_float;
		func_1127(var_377_float);
		var_377_float = var_376_float;
		func_6(var_376_float);
		var_8_bool = true;
	}
	bool var_395_bool = false;
	bool var_396_bool = false;
	if(!var_9_bool) { //@nz
		bool var_398_bool;
		func_1149(var_398_bool, 12);
		if(var_398_bool != 0)
			var_396_bool = true;
	}
	if(var_396_bool != 0) {
		bool var_400_bool;
		func_2732(var_400_bool);
		if(var_400_bool != 0)
			var_395_bool = true;
	}
	if(var_395_bool != 0) {
		var_9_bool = true;
		func_18();
	}
	bool var_424_bool = false;
	bool var_425_bool = false;
	if(!var_10_bool) { //@nz
		bool var_427_bool;
		func_1149(var_427_bool, 12);
		if(var_427_bool != 0)
			var_425_bool = true;
	}
	if(var_425_bool != 0) {
		bool var_429_bool;
		func_2694(var_429_bool);
		if(var_429_bool != 0)
			var_424_bool = true;
	}
	if(var_424_bool != 0) {
		var_10_bool = true;
		func_22();
	}
	bool var_438_bool = false;
	bool var_439_bool = false;
	if(!var_11_bool) { //@nz
		bool var_441_bool;
		func_1149(var_441_bool, 12);
		if(var_441_bool != 0)
			var_439_bool = true;
	}
	if(var_439_bool != 0) {
		bool var_443_bool;
		func_2770(var_443_bool);
		if(var_443_bool != 0)
			var_438_bool = true;
	}
	if(var_438_bool != 0) {
		var_11_bool = true;
		func_17();
	}
}


void func_1127(float var_377_float)
{
	float var_379_float;
	@GetGameTime(var_379_float);
	var_379_float = var_377_float;
}


void func_359(int var_891_int, int var_892_int, int var_893_int)
{
	int var_907_int; int var_908_int;
	var_907_int = 0;
	
	while(var_907_int < var_891_int) {
		int var_910_int; int var_911_int;
		var_893_int = var_911_int;
		func_383(var_907_int, var_908_int, var_910_int, var_911_int, true);
	}
	
	var_908_int = 0;
	
	while(var_908_int < var_892_int) {
		int var_959_int; int var_960_int;
		var_893_int = var_960_int;
		func_383((var_907_int + 1), var_908_int, var_959_int, var_960_int, false);
		var_908_int += 1;
	}
	
}


// @pe
void func_2026(object var_194_object, bool var_195_bool, int var_196_int)
{
	var_194_object->add(6);
	var_194_object->add(26);
	var_194_object->add(2);
	var_194_object->add(22);
	if(var_195_bool == false) {
		var_194_object->add(15);
		var_194_object->add(5);
		var_194_object->add(16);
		var_194_object->add(19);
	} else if(var_196_int != 0) {
		var_194_object->add(15);
	}
	
}


void func_1002(object var_3_object, object var_4_object, int var_515_int)
{
	object var_530_object; string var_531_string; string var_535_string;
	string var_536_string; int var_537_int;
	func_757(var_535_string, var_536_string, var_537_int);
	@SetVariable(var_536_string, 17);
	object var_529_object;
	var_3_object->get(var_529_object, var_537_int); //@t
	if(var_529_object == null) {
		object var_540_object; int var_541_int;
		var_515_int = var_541_int;
		func_1063(var_535_string, var_540_object, var_541_int);
		var_540_object = var_530_object;
		string var_550_string; int var_551_int;
		int var_552_int; int var_553_int;
		var_515_int = var_553_int;
		func_752(var_551_int, var_552_int, var_553_int);
		var_552_int = var_551_int;
		func_1575(var_550_string, var_551_int);
		var_550_string = var_531_string;
		object var_720_object; object var_721_object;
		var_530_object = var_721_object;
		func_1097(var_720_object, var_721_object, ("pt_volonteer_" + var_531_string), "pers_birdmask", (("vbirdmask_" + var_531_string) + ".xml"));
		var_720_object = var_529_object;
		var_3_object->set(var_515_int, var_529_object); //@t
		var_530_object = null;
	}
	object var_532_object;
	var_4_object->get(var_532_object, var_515_int); //@t
	int var_533_int;
	var_532_object->size(var_533_int);
	int var_534_int = 0;
	
	while(var_534_int < var_533_int) {
		var_532_object->get(var_535_string, var_534_int);
		string var_743_string;
		var_535_string = var_743_string;
		func_2677(var_743_string, 2);
		var_534_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_1132(int var_249_int)
{
	float var_251_float;
	@GetGameTime(var_251_float);
	var_249_int = 1 + (var_251_float / 24);
}


void func_2669(int var_382_int, int var_383_int, int var_384_int, float var_385_float)
{
	int var_387_int;
	@AddMessage(var_383_int, var_384_int, var_385_float, var_387_int);
	@SendWorldWndMessage(6);
	var_387_int = var_382_int;
}


void func_752(object var_0_object, int var_487_int, int var_488_int)
{
	int var_490_int;
	var_0_object->get(var_490_int, var_488_int); //@t
	var_490_int = var_487_int;
}


void func_881(object var_4_object, int var_446_int)
{
	int var_462_int;
	var_446_int = var_462_int;
	string var_460_string;
	string var_461_string;
	func_757(var_460_string, var_461_string, var_462_int);
	int var_456_int;
	@GetVariable(var_461_string, var_456_int);
	string var_463_string; int var_464_int;
	func_757(var_460_string, var_463_string, var_464_int);
	@SetVariable(var_463_string, (var_456_int | 32));
	object var_457_object;
	var_4_object->get(var_457_object, var_464_int); //@t
	int var_458_int;
	var_457_object->size(var_458_int);
	int var_459_int = 0;
	
	while(var_459_int < var_458_int) {
		var_457_object->get(var_460_string, var_459_int);
		string var_468_string;
		var_460_string = var_468_string;
		func_2677(var_468_string, 0);
		var_459_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


void func_1141(int var_369_int)
{
	float var_371_float;
	@GetGameTime(var_371_float);
	int var_372_int;
	var_371_float = var_372_int;
	var_369_int = var_372_int % 24;
}


void func_2677(string var_232_string, int var_233_int)
{
	object var_235_object;
	@FindActor(var_235_object, var_232_string);
	if(!var_235_object) //@nz
		@Trace(("Door " + var_232_string) + " not found");
	else
		var_235_object->SetProperty("dlocked", var_233_int);
	
}
EMIT "Stack[-1] = 0";


void func_757(object var_0_object, string var_217_string, int var_218_int)
{
	int var_220_int;
	var_0_object->get(var_220_int, var_218_int); //@t
	var_217_string = "vol_" + var_220_int;
}


void func_2808(bool var_255_bool)
{
	int var_257_int = 0;
	bool var_258_bool;
	func_2770(var_258_bool);
	if(var_258_bool != 0)
		var_257_int += 1;
	bool var_303_bool;
	func_2732(var_303_bool);
	if(var_303_bool != 0)
		var_257_int += 1;
	bool var_336_bool;
	func_2694(var_336_bool);
	if(var_336_bool != 0)
		var_257_int += 1;
	var_255_bool = var_257_int >= 2;
}


void func_763(bool var_835_bool, int var_836_int)
{
	int var_840_int;
	var_836_int = var_840_int;
	int var_838_int;
	string var_839_string;
	func_757(var_838_int, var_839_string, var_840_int);
	@GetVariable(var_839_string, var_838_int);
	var_835_bool = (var_838_int & 32) != 0;
}


// @pe
void func_1149(bool var_247_bool, int var_248_int)
{
	int var_249_int;
	func_1132(var_249_int);
	var_247_bool = var_249_int == var_248_int;
}


void func_383(object var_1_object, object var_2_object, int var_910_int, int var_911_int, bool var_912_bool)
{
	object var_920_object; int var_925_int; int var_926_int;
	if(var_912_bool != 0)
		var_1_object->get(var_920_object, var_911_int); //@t
	else
		var_2_object->get(var_920_object, var_911_int); //@t
	int var_921_int;
	var_920_object->size(var_921_int);
	if(var_921_int == 0)
		return 14;
	int var_922_int = 0;
	if(var_921_int > 1)
		@irand(var_922_int, var_921_int);
	int var_923_int = 0;
	
	while(var_923_int < var_921_int) {
		var_920_object->get(var_925_int, ((var_923_int + var_922_int) % var_921_int));
		int var_934_int; int var_935_int;
		var_925_int = var_935_int;
		func_734(var_926_int, var_934_int, var_935_int);
		var_934_int = var_926_int;
		bool var_936_bool; int var_937_int;
		var_926_int = var_937_int;
		func_787(var_936_bool, var_937_int);
		if(var_936_bool != 0) {
			int var_945_int;
			var_926_int = var_945_int;
			func_1079(var_945_int);
			var_926_int = -1;
			return 14;
		}
		var_923_int += 1;
	}
	
	var_910_int = -1;
	
}
EMIT "Stack[-7] = 0";


