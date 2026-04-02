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
					int var_509_int;
					var_15_int = var_509_int;
					func_951(var_14_int, var_15_int, var_509_int);
				}
				var_15_int += 1;
			}

		Label_281:
			func_102(var_12_string, var_13_string, var_14_int, var_15_int);
		} else if(var_12_string == "kill") {
			int var_513_int;
			int var_514_int; int var_515_int;
			int var_516_int; string var_517_string;
			var_13_string = var_517_string;
			func_1155(var_516_int, var_517_string);
			var_516_int = var_515_int;
			func_734(var_513_int, var_514_int, var_515_int);
			var_514_int = var_513_int;
			func_1002(var_14_int, var_15_int, var_513_int);
		} else if(var_12_string == "disease") {
			int var_746_int;
			int var_747_int; int var_748_int;
			int var_749_int; string var_750_string;
			var_13_string = var_750_string;
			func_1155(var_749_int, var_750_string);
			var_749_int = var_748_int;
			func_734(var_746_int, var_747_int, var_748_int);
			var_747_int = var_746_int;
			func_811(var_14_int, var_15_int, var_746_int);
		} else if(var_12_string == "update") {
			func_433(var_14_int, var_15_int);
		} else if(var_12_string == "cleanup") {
			func_639(var_15_int);
		} else if(var_12_string == "childs_letter") {
			if(!var_8_bool) { //@nz
				float var_1012_float;
				float var_1013_float;
				func_1127(var_1013_float);
				var_1013_float = var_1012_float;
				func_6(var_1012_float);
				var_8_bool = true;
			}
		} else if(var_12_string == "theater_letter") {
			var_1016_bool = !var_7_bool; //@nz
			if(var_1016_bool == 0) goto Label_358;
			float var_1017_float;
			float var_1018_float;
			func_1127(var_1018_float);
			var_1018_float = var_1017_float;
			func_0(var_1017_float);
			var_7_bool = true;
		}
	}

}


// @pe
void func_0(float var_1017_float)
{
	float var_1020_float;
	var_1017_float = var_1020_float;
	int var_1019_int;
	func_2588(var_1019_int, var_1020_float);
}


void func_2689(bool var_336_bool)
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
		func_2569(var_362_bool, var_363_int);
		if(var_362_bool != 1) {
			bool var_364_bool; int var_365_int;
			var_344_int = var_365_int;
			func_2559(var_364_bool, var_365_int);
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


// @pe
void func_6(float var_376_float)
{
	float var_381_float;
	var_376_float = var_381_float;
	int var_380_int;
	func_2579(var_380_int, var_381_float);
	bool var_389_bool;
	func_1115(var_389_bool, "quest_d12_01", "init_hidden_room");
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


void func_2569(bool var_283_bool, int var_284_int)
{
	int var_286_int;
	@GetVariable(("vol_" + var_284_int), var_286_int);
	var_283_bool = (var_286_int & 16) != 0;
}


void func_639(object var_3_object)
{
	object var_1003_object;
	@Trace("Volonteers Cleanup...");
	int var_1002_int = 0;
	
	for(;;) {
		int var_1005_int;
		func_729(var_1003_object, var_1005_int);
		if(!(var_1002_int < var_1005_int)) goto Label_660;
		var_3_object->get(var_1003_object, var_1002_int); //@t
		if(var_1003_object != null)
			var_1003_object->Remove();
		var_1003_object = null;
		var_1002_int += 1;
	}
	
Label_660:
}


// @pe
void func_17(void)
{
	func_2610();
}


// @pe
void func_2579(int var_380_int, float var_381_float)
{
	float var_385_float;
	var_381_float = var_385_float;
	int var_382_int;
	func_2664(var_382_int, 515489, 515488, var_385_float);
	var_382_int = var_380_int;
}


void func_787(bool var_934_bool, int var_935_int)
{
	int var_939_int;
	var_935_int = var_939_int;
	int var_937_int;
	string var_938_string;
	func_757(var_937_int, var_938_string, var_939_int);
	@GetVariable(var_938_string, var_937_int);
	var_934_bool = (var_937_int & 1) == 0;
}


// @pe
void func_2069(object var_165_object, bool var_166_bool, int var_167_int)
{
	var_165_object->add(6);
	var_165_object->add(26);
	var_165_object->add(2);
	var_165_object->add(22);
	if(var_166_bool == false) {
		var_165_object->add(15);
		var_165_object->add(5);
		var_165_object->add(16);
		var_165_object->add(19);
	} else if(var_167_int != 0) {
		var_165_object->add(15);
	}
	
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
	func_2137(var_29_object, var_30_object, var_31_object);
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


void func_21(void)
{
}


// @pe
void func_22(void)
{
	func_2597();
}


void func_915(object var_4_object, int var_843_int)
{
	int var_855_int;
	var_843_int = var_855_int;
	string var_853_string;
	string var_854_string;
	func_757(var_853_string, var_854_string, var_855_int);
	int var_849_int;
	@GetVariable(var_854_string, var_849_int);
	string var_856_string; int var_857_int;
	func_757(var_853_string, var_856_string, var_857_int);
	@SetVariable(var_856_string, ((var_849_int | 32) - 32));
	object var_850_object;
	var_4_object->get(var_850_object, var_857_int); //@t
	int var_851_int;
	var_850_object->size(var_851_int);
	int var_852_int = 0;
	
	while(var_852_int < var_851_int) {
		var_850_object->get(var_853_string, var_852_int);
		string var_863_string;
		var_853_string = var_863_string;
		func_2672(var_863_string, 1);
		var_852_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


// @pe
void func_26(bool var_485_bool, int var_486_int)
{
	int var_492_int;
	var_486_int = var_492_int;
	bool var_491_bool;
	func_2026(var_491_bool, var_492_int);
	var_491_bool = var_485_bool;
}


// @pe
void func_2588(int var_1019_int, float var_1020_float)
{
	float var_1024_float;
	var_1020_float = var_1024_float;
	int var_1021_int;
	func_2664(var_1021_int, 515491, 515490, var_1024_float);
	var_1021_int = var_1019_int;
}


void func_799(bool var_867_bool, int var_868_int)
{
	int var_872_int;
	var_868_int = var_872_int;
	int var_870_int;
	string var_871_string;
	func_757(var_870_int, var_871_string, var_872_int);
	@GetVariable(var_871_string, var_870_int);
	var_867_bool = (var_870_int & 4) != 0;
}


void func_33(object var_157_object, object var_158_object)
{
	object var_162_object;
	@CreateIntVector(var_162_object);
	object var_165_object;
	func_2069(var_165_object, true, 0);
	object var_163_object;
	@CreateIntVector(var_163_object);
	object var_181_object;
	var_163_object = var_181_object;
	func_1993(var_181_object, true, 0);
	object var_196_object;
	func_2105(true, 0);
	int var_164_int = 0;
	
	while(var_164_int < 12) {
		var_157_object->add(var_165_object);
		var_158_object->add(var_196_object);
		var_164_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2597(void)
{
	object var_408_object;
	@CreateDiaryEntry(var_408_object, 708, 1, 535691);
	bool var_412_bool; object var_413_object;
	var_408_object = var_413_object;
	func_2636(var_412_bool, var_413_object, 706);
}
EMIT "Stack[-1] = 0";


void func_2727(bool var_303_bool)
{
	object var_308_object; int var_311_int;
	@CreateIntVector(var_308_object);
	object var_312_object;
	var_308_object = var_312_object;
	func_2069(var_312_object, false, -1);
	int var_309_int;
	var_308_object->size(var_309_int);
	int var_310_int = 0;
	
	while(var_310_int < var_309_int) {
		var_308_object->get(var_311_int, var_310_int);
		bool var_329_bool = true;
		bool var_330_bool; int var_331_int;
		var_311_int = var_331_int;
		func_2569(var_330_bool, var_331_int);
		if(var_330_bool != 1) {
			bool var_332_bool; int var_333_int;
			var_311_int = var_333_int;
			func_2559(var_332_bool, var_333_int);
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


// @pe
void func_1575(string var_548_string, int var_549_int)
{
	if(var_549_int == 1) {
		var_548_string = "alexandr";
		return 0;
	}
	if(var_549_int == 2) {
		var_548_string = "andrei";
		return 0;
	}
	if(var_549_int == 3) {
		var_548_string = "anna";
		return 0;
	}
	if(var_549_int == 4) {
		var_548_string = "bigvlad";
		return 0;
	}
	if(var_549_int == 5) {
		var_548_string = "eva";
		return 0;
	}
	if(var_549_int == 6) {
		var_548_string = "georg";
		return 0;
	}
	if(var_549_int == 7) {
		var_548_string = "grif";
		return 0;
	}
	if(var_549_int == 8) {
		var_548_string = "han";
		return 0;
	}
	if(var_549_int == 9) {
		var_548_string = "julia";
		return 0;
	}
	if(var_549_int == 10) {
		var_548_string = "kapella";
		return 0;
	}
	if(var_549_int == 11) {
		var_548_string = "katerina";
		return 0;
	}
	if(var_549_int == 12) {
		var_548_string = "klara";
		return 0;
	}
	if(var_549_int == 13) {
		var_548_string = "lara";
		return 0;
	}
	if(var_549_int == 14) {
		var_548_string = "laska";
		return 0;
	}
	if(var_549_int == 15) {
		var_548_string = "maria";
		return 0;
	}
	if(var_549_int == 16) {
		var_548_string = "mark";
		return 0;
	}
	if(var_549_int == 17) {
		var_548_string = "mat";
		return 0;
	}
	if(var_549_int == 18) {
		var_548_string = "mishka";
		return 0;
	}
	if(var_549_int == 19) {
		var_548_string = "mladvlad";
		return 0;
	}
	if(var_549_int == 20) {
		var_548_string = "notkin";
		return 0;
	}
	if(var_549_int == 21) {
		var_548_string = "ospina";
		return 0;
	}
	if(var_549_int == 22) {
		var_548_string = "petr";
		return 0;
	}
	if(var_549_int == 23) {
		var_548_string = "rubin";
		return 0;
	}
	if(var_549_int == 24) {
		var_548_string = "spi4ka";
		return 0;
	}
	if(var_549_int == 25) {
		var_548_string = "starshina";
		return 0;
	}
	if(var_549_int == 26) {
		var_548_string = "viktor";
		return 0;
	}
	if(var_549_int == 27) {
		var_548_string = "wasted_woman";
		return 0;
	}
	if(var_549_int == 28) {
		var_548_string = "wasted_male";
		return 0;
	}
	if(var_549_int == 29) {
		var_548_string = "alkash";
		return 0;
	}
	if(var_549_int == 30) {
		var_548_string = "boy";
		return 0;
	}
	if(var_549_int == 31) {
		var_548_string = "girl";
		return 0;
	}
	if(var_549_int == 32) {
		var_548_string = "littleboy";
		return 0;
	}
	if(var_549_int == 33) {
		var_548_string = "littlegirl";
		return 0;
	}
	if(var_549_int == 34) {
		var_548_string = "butcher";
		return 0;
	}
	if(var_549_int == 35) {
		var_548_string = "dohodyaga";
		return 0;
	}
	if(var_549_int == 36) {
		var_548_string = "unosha";
		return 0;
	}
	if(var_549_int == 37) {
		var_548_string = "vaxxabit";
		return 0;
	}
	if(var_549_int == 38) {
		var_548_string = "vaxxabitka";
		return 0;
	}
	if(var_549_int == 39) {
		var_548_string = "woman";
		return 0;
	}
	if(var_549_int == 40) {
		var_548_string = "worker";
		return 0;
	}
	if(var_549_int == 42) {
		var_548_string = "whitemask";
		return 0;
	}
	if(var_549_int == 43) {
		var_548_string = "birdmask";
		return 0;
	}
	if(var_549_int == 44) {
		var_548_string = "birdmask";
		return 0;
	}
	if(var_549_int == 46) {
		var_548_string = "patrol";
		return 0;
	}
	if(var_549_int == 47) {
		var_548_string = "danko";
		return 0;
	}
	if(var_549_int == 48) {
		var_548_string = "alkash_d";
		return 0;
	}
	if(var_549_int == 49) {
		var_548_string = "boy_d";
		return 0;
	}
	if(var_549_int == 50) {
		var_548_string = "butcher_d";
		return 0;
	}
	if(var_549_int == 51) {
		var_548_string = "dohodyaga_d";
		return 0;
	}
	if(var_549_int == 52) {
		var_548_string = "girl_d";
		return 0;
	}
	if(var_549_int == 53) {
		var_548_string = "littleboy_d";
		return 0;
	}
	if(var_549_int == 54) {
		var_548_string = "littlegirl_d";
		return 0;
	}
	if(var_549_int == 55) {
		var_548_string = "unosha2";
		return 0;
	}
	if(var_549_int == 56) {
		var_548_string = "unosha_d";
		return 0;
	}
	if(var_549_int == 57) {
		var_548_string = "unosha2_d";
		return 0;
	}
	if(var_549_int == 58) {
		var_548_string = "vaxxabit_d";
		return 0;
	}
	if(var_549_int == 59) {
		var_548_string = "vaxxabitka_d";
		return 0;
	}
	if(var_549_int == 60) {
		var_548_string = "wasted_male_d";
		return 0;
	}
	if(var_549_int == 61) {
		var_548_string = "wasted_woman_d";
		return 0;
	}
	if(var_549_int == 62) {
		var_548_string = "woman_d";
		return 0;
	}
	if(var_549_int == 63) {
		var_548_string = "worker2";
		return 0;
	}
	if(var_549_int == 64) {
		var_548_string = "worker_d";
		return 0;
	}
	if(var_549_int == 65) {
		var_548_string = "worker2_d";
		return 0;
	}
	if(var_549_int == 66) {
		var_548_string = "burah";
		return 0;
	}
	if(var_549_int == 67) {
		var_548_string = "gorbun_daughter";
		return 0;
	}
	if(var_549_int == 68) {
		var_548_string = "gorbun";
		return 0;
	}
	if(var_549_int == 69) {
		var_548_string = "albinos";
		return 0;
	}
	if(var_549_int == 70) {
		var_548_string = "aglaja";
		return 0;
	}
	if(var_549_int == 71) {
		var_548_string = "nude";
		return 0;
	}
	if(var_549_int == 72) {
		var_548_string = "block";
		return 0;
	}
	if(var_549_int == 73) {
		var_548_string = "officer";
		return 0;
	}
	if(var_549_int == 74) {
		var_548_string = "doberman";
		return 0;
	}
	if(var_549_int == 75) {
		var_548_string = "grabitel";
		return 0;
	}
	if(var_549_int == 76) {
		var_548_string = "gatherer_wife";
		return 0;
	}
	if(var_549_int == 77) {
		var_548_string = "rat_prophet";
		return 0;
	}
	if(var_549_int == 78) {
		var_548_string = "morlok";
		return 0;
	}
	if(var_549_int == 79) {
		var_548_string = "soldier";
		return 0;
	}
	if(var_549_int == 80) {
		var_548_string = "britva";
		return 0;
	}
	if(var_549_int == 81) {
		var_548_string = "kabaktchik";
		return 0;
	}
	if(var_549_int == 82) {
		var_548_string = "sanitar";
		return 0;
	}
	if(var_549_int == 83) {
		var_548_string = "salesman";
		return 0;
	}
	if(var_549_int == 84) {
		var_548_string = "ayyan";
		return 0;
	}
	if(var_549_int == 85) {
		var_548_string = "petrbirdmask";
		return 0;
	}
	var_548_string = "";
}


void func_1063(object var_5_object, object var_538_object, int var_539_int)
{
	string var_543_string; object var_544_object;
	var_5_object->get(var_543_string, var_539_int); //@t
	if(var_543_string == "outdoor") {
		@GetMainOutdoorScene(var_544_object);
		var_544_object = var_538_object;
	EMIT "Stack[-2] = 0";
	}
	object var_545_object;
	@GetSceneByName(var_545_object, var_543_string);
	var_545_object = var_538_object;
}
EMIT "Stack[-1] = 0";


void func_811(object var_3_object, object var_4_object, int var_746_int)
{
	object var_761_object; string var_762_string;
	int var_768_int;
	var_746_int = var_768_int;
	string var_766_string;
	string var_767_string;
	func_757(var_766_string, var_767_string, var_768_int);
	int var_759_int;
	@GetVariable(var_767_string, var_759_int);
	string var_769_string; int var_770_int;
	func_757(var_766_string, var_769_string, var_770_int);
	@SetVariable(var_769_string, ((var_759_int & 8) | 5));
	object var_760_object;
	var_3_object->get(var_760_object, var_770_int); //@t
	if(var_760_object == null) {
		object var_776_object; int var_777_int;
		var_746_int = var_777_int;
		func_1063(var_766_string, var_776_object, var_777_int);
		var_776_object = var_761_object;
		string var_778_string; int var_779_int;
		int var_780_int; int var_781_int;
		var_746_int = var_781_int;
		func_752(var_779_int, var_780_int, var_781_int);
		var_780_int = var_779_int;
		func_1575(var_778_string, var_779_int);
		var_778_string = var_762_string;
		object var_782_object; object var_783_object;
		var_761_object = var_783_object;
		func_1097(var_782_object, var_783_object, ("pt_volonteer_" + var_762_string), "pers_birdmask", (("vbirdmask_" + var_762_string) + ".xml"));
		var_782_object = var_760_object;
		var_3_object->set(var_746_int, var_760_object); //@t
		var_761_object = null;
	}
	object var_763_object;
	var_4_object->get(var_763_object, var_746_int); //@t
	int var_764_int;
	var_763_object->size(var_764_int);
	int var_765_int = 0;
	
	while(var_765_int < var_764_int) {
		var_763_object->get(var_766_string, var_765_int);
		string var_792_string;
		var_766_string = var_792_string;
		func_2672(var_792_string, 1);
		var_765_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_433(object var_4_object, int var_6_int)
{
	int var_809_int; int var_810_int; object var_811_object; int var_812_int; int var_813_int; string var_814_string; int var_816_int; int var_817_int; int var_819_int; int var_820_int;
	@Trace(1);
	
	for(;;) {
		int var_822_int;
		func_729(var_820_int, var_822_int);
		if(!(0 < var_822_int)) goto Label_528;
		@Trace(2);
		int var_825_int; int var_826_int;
		var_809_int = var_826_int;
		func_752(var_820_int, var_825_int, var_826_int);
		var_825_int = var_810_int;
		@Trace(3);
		bool var_828_bool; int var_829_int;
		var_809_int = var_829_int;
		func_775(var_828_bool, var_829_int);
		if(var_828_bool != 0) {
			@Trace(4);
			int var_831_int;
			var_809_int = var_831_int;
			func_811(var_819_int, var_820_int, var_831_int);
		}
		@Trace(5);
		bool var_833_bool; int var_834_int;
		var_809_int = var_834_int;
		func_763(var_833_bool, var_834_int);
		if(var_833_bool != 0) {
			@Trace(6);
			int var_843_int;
			var_809_int = var_843_int;
			func_915(var_820_int, var_843_int);
		}
		@Trace(7);
		bool var_867_bool; int var_868_int;
		var_809_int = var_868_int;
		func_799(var_867_bool, var_868_int);
		if(var_867_bool != 0) {
			@Trace(8);
			var_4_object->get(var_811_object, var_809_int); //@t
			@Trace(9);
			var_811_object->size(var_812_int);
			@Trace(10);
			var_813_int = 0;

			while(var_813_int < var_812_int) {
				@Trace(11);
				var_811_object->get(var_814_string, var_813_int);
				string var_881_string;
				var_814_string = var_881_string;
				func_2672(var_881_string, 1);
				var_813_int += 1;
			}

			@Trace(12);
			var_811_object = null;
		}
		@Trace(13);
		var_809_int += 1;
	}
	
Label_528:
	@Trace(14);
	var_6_int += 1;
	int var_889_int; int var_890_int;
	int var_892_int;
	func_70(var_892_int, var_6_int);
	var_892_int = var_889_int;
	int var_899_int;
	func_85(var_899_int, var_6_int);
	var_899_int = var_890_int;
	func_359(var_889_int, var_890_int, var_6_int);
	@Trace(15);
	int var_815_int = 0;
	
	for(;;) {
		int var_962_int;
		func_729(var_820_int, var_962_int);
		if(!(0 < var_962_int)) goto Label_589;
		@Trace(16);
		int var_965_int; int var_966_int;
		var_816_int = var_966_int;
		func_752(var_820_int, var_965_int, var_966_int);
		var_965_int = var_817_int;
		@Trace(17);
		bool var_968_bool; int var_969_int;
		var_816_int = var_969_int;
		func_775(var_968_bool, var_969_int);
		if(var_968_bool != 0) {
			@Trace(18);
			string var_972_string; int var_973_int;
			var_817_int = var_973_int;
			func_1575(var_972_string, var_973_int);
			@Trace("Volonteer : " + var_972_string);
			var_815_int += 1;
		}
		var_816_int += 1;
	}
	
Label_589:
	@Trace(19);
	int var_818_int = 0;
	
	for(;;) {
		int var_978_int;
		func_729(var_820_int, var_978_int);
		if(!(0 < var_978_int)) goto Label_628;
		@Trace(20);
		int var_981_int; int var_982_int;
		var_819_int = var_982_int;
		func_752(var_820_int, var_981_int, var_982_int);
		var_981_int = var_820_int;
		bool var_983_bool; int var_984_int;
		var_819_int = var_984_int;
		func_799(var_983_bool, var_984_int);
		if(var_983_bool != 0) {
			@Trace(21);
			var_818_int += 1;
			string var_988_string; int var_989_int;
			var_820_int = var_989_int;
			func_1575(var_988_string, var_989_int);
			@Trace("Diseased volonteer : " + var_988_string);
		}
		var_819_int += 1;
	}
	
Label_628:
	@Trace(22);
	@Trace((("Today volonteers: " + var_815_int) + ", diseased: ") + var_818_int);
}


void func_2610(void)
{
	object var_437_object;
	@CreateDiaryEntry(var_437_object, 709, 1, 535692);
	bool var_441_bool; object var_442_object;
	var_437_object = var_442_object;
	func_2636(var_441_bool, var_442_object, 707);
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
		func_2672(var_232_string, 0);
		var_209_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


void func_1079(int var_943_int)
{
	int var_947_int;
	var_943_int = var_947_int;
	int var_945_int;
	string var_946_string;
	func_757(var_945_int, var_946_string, var_947_int);
	@GetVariable(var_946_string, var_945_int);
	string var_948_string; int var_949_int;
	var_943_int = var_949_int;
	func_757(var_945_int, var_948_string, var_949_int);
	@SetVariable(var_948_string, ((var_945_int & 8) | 3));
}


// @pe
void func_2105(object var_196_object, bool var_197_bool)
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


void func_2623(object var_421_object)
{
	object var_423_object;
	@GetDiaryRoot(var_423_object);
	if(!var_423_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_421_object = false;
	}
	var_423_object = var_421_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_70(int var_892_int, int var_893_int)
{
	bool var_894_bool = true;
	var_896_bool = var_893_int < 1;
	if(var_896_bool != 1) {
		var_898_bool = var_893_int >= 11;
		if(var_898_bool != 1)
			var_894_bool = false;
	}
	if(var_894_bool != 0) {
		var_892_int = 0;
		return 0;
	}
	var_892_int = 1;
}


// @pe
void func_1993(object var_181_object, bool var_182_bool, int var_183_int)
{
	var_181_object->add(18);
	var_181_object->add(24);
	var_181_object->add(20);
	var_181_object->add(14);
	if(var_182_bool == false) {
		var_181_object->add(10);
		var_181_object->add(17);
		var_181_object->add(8);
	} else if(var_183_int != 1) {
		var_181_object->add(10);
	}
	
}


void func_1097(object var_718_object, object var_719_object, string var_720_string, string var_721_string, string var_722_string)
{
	bool var_731_bool; cvector var_732_cvector; cvector var_733_cvector;
	var_719_object->GetLocator(var_720_string, var_731_bool, var_732_cvector, var_733_cvector);
	if(!var_731_bool) //@nz
		@Trace(("Locator " + var_720_string) + " doesn't exist");
	else
		var_719_object->AddStationaryActor(Obj(), var_732_cvector, var_733_cvector, var_721_string, var_722_string);
	object var_734_object = var_718_object;
	
}
EMIT "Stack[-1] = 0";


void func_2559(bool var_292_bool, int var_293_int)
{
	int var_295_int;
	@GetVariable(("vol_" + var_293_int), var_295_int);
	var_292_bool = (var_295_int & 4) != 0;
}


void func_2636(bool var_412_bool, object var_413_object, int var_414_int)
{
	object var_421_object;
	func_2623(var_421_object);
	object var_418_object;
	var_421_object = var_418_object;
	object var_419_object;
	var_418_object->Find(var_414_int, var_419_object);
	if(!var_419_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_414_int);
		var_412_bool = false;
	}
	var_419_object->AddChild(var_413_object);
	@SendWorldWndMessage(7);
	int var_420_int;
	var_413_object->GetCategory(var_420_int);
	@SetDiarySection(var_420_int);
	var_412_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2765(bool var_258_bool)
{
	object var_263_object; int var_266_int;
	@CreateIntVector(var_263_object);
	object var_267_object;
	var_263_object = var_267_object;
	func_2105(false, -1);
	int var_264_int;
	var_263_object->size(var_264_int);
	int var_265_int = 0;
	
	while(var_265_int < var_264_int) {
		var_263_object->get(var_266_int, var_265_int);
		bool var_282_bool = true;
		bool var_283_bool; int var_284_int;
		var_266_int = var_284_int;
		func_2569(var_283_bool, var_284_int);
		if(var_283_bool != 1) {
			bool var_292_bool; int var_293_int;
			var_266_int = var_293_int;
			func_2559(var_292_bool, var_293_int);
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
void func_85(int var_899_int, int var_900_int)
{
	if(var_900_int < 5) {
		var_899_int = 0;
		return 0;
	}
	var_899_int = 1;
}


void func_729(object var_0_object, int var_213_int)
{
	int var_215_int;
	var_0_object->size(var_215_int); //@t
	var_215_int = var_213_int;
}


void func_2137(object var_29_object, object var_30_object, object var_31_object)
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
		func_2803(var_255_bool);
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
		func_2727(var_400_bool);
		if(var_400_bool != 0)
			var_395_bool = true;
	}
	if(var_395_bool != 0) {
		var_9_bool = true;
		func_21();
	}
	bool var_401_bool = false;
	bool var_402_bool = false;
	if(!var_10_bool) { //@nz
		bool var_404_bool;
		func_1149(var_404_bool, 12);
		if(var_404_bool != 0)
			var_402_bool = true;
	}
	if(var_402_bool != 0) {
		bool var_406_bool;
		func_2689(var_406_bool);
		if(var_406_bool != 0)
			var_401_bool = true;
	}
	if(var_401_bool != 0) {
		var_10_bool = true;
		func_22();
	}
	bool var_430_bool = false;
	bool var_431_bool = false;
	if(!var_11_bool) { //@nz
		bool var_433_bool;
		func_1149(var_433_bool, 12);
		if(var_433_bool != 0)
			var_431_bool = true;
	}
	if(var_431_bool != 0) {
		bool var_435_bool;
		func_2765(var_435_bool);
		if(var_435_bool != 0)
			var_430_bool = true;
	}
	if(var_430_bool != 0) {
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


void func_359(int var_889_int, int var_890_int, int var_891_int)
{
	int var_905_int; int var_906_int;
	var_905_int = 0;
	
	while(var_905_int < var_889_int) {
		int var_908_int; int var_909_int;
		var_891_int = var_909_int;
		func_383(var_905_int, var_906_int, var_908_int, var_909_int, true);
	}
	
	var_906_int = 0;
	
	while(var_906_int < var_890_int) {
		int var_957_int; int var_958_int;
		var_891_int = var_958_int;
		func_383((var_905_int + 1), var_906_int, var_957_int, var_958_int, false);
		var_906_int += 1;
	}
	
}


void func_2664(int var_382_int, int var_383_int, int var_384_int, float var_385_float)
{
	int var_387_int;
	@AddMessage(var_383_int, var_384_int, var_385_float, var_387_int);
	@SendWorldWndMessage(6);
	var_387_int = var_382_int;
}


// @pe
void func_2026(bool var_491_bool, int var_492_int)
{
	if(var_492_int == 6) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 26) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 2) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 22) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 15) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 5) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 16) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 19) {
		var_491_bool = true;
		return 0;
	}
	var_491_bool = false;
}


void func_1002(object var_3_object, object var_4_object, int var_513_int)
{
	object var_528_object; string var_529_string; string var_533_string;
	string var_534_string; int var_535_int;
	func_757(var_533_string, var_534_string, var_535_int);
	@SetVariable(var_534_string, 17);
	object var_527_object;
	var_3_object->get(var_527_object, var_535_int); //@t
	if(var_527_object == null) {
		object var_538_object; int var_539_int;
		var_513_int = var_539_int;
		func_1063(var_533_string, var_538_object, var_539_int);
		var_538_object = var_528_object;
		string var_548_string; int var_549_int;
		int var_550_int; int var_551_int;
		var_513_int = var_551_int;
		func_752(var_549_int, var_550_int, var_551_int);
		var_550_int = var_549_int;
		func_1575(var_548_string, var_549_int);
		var_548_string = var_529_string;
		object var_718_object; object var_719_object;
		var_528_object = var_719_object;
		func_1097(var_718_object, var_719_object, ("pt_volonteer_" + var_529_string), "pers_birdmask", (("vbirdmask_" + var_529_string) + ".xml"));
		var_718_object = var_527_object;
		var_3_object->set(var_513_int, var_527_object); //@t
		var_528_object = null;
	}
	object var_530_object;
	var_4_object->get(var_530_object, var_513_int); //@t
	int var_531_int;
	var_530_object->size(var_531_int);
	int var_532_int = 0;
	
	while(var_532_int < var_531_int) {
		var_530_object->get(var_533_string, var_532_int);
		string var_741_string;
		var_533_string = var_741_string;
		func_2672(var_741_string, 2);
		var_532_int += 1;
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
		func_2672(var_468_string, 0);
		var_459_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


void func_2672(string var_232_string, int var_233_int)
{
	object var_235_object;
	@FindActor(var_235_object, var_232_string);
	if(!var_235_object) //@nz
		@Trace(("Door " + var_232_string) + " not found");
	else
		var_235_object->SetProperty("dlocked", var_233_int);
	
}
EMIT "Stack[-1] = 0";


void func_2803(bool var_255_bool)
{
	int var_257_int = 0;
	bool var_258_bool;
	func_2765(var_258_bool);
	if(var_258_bool != 0)
		var_257_int += 1;
	bool var_303_bool;
	func_2727(var_303_bool);
	if(var_303_bool != 0)
		var_257_int += 1;
	bool var_336_bool;
	func_2689(var_336_bool);
	if(var_336_bool != 0)
		var_257_int += 1;
	var_255_bool = var_257_int >= 2;
}


void func_1141(int var_369_int)
{
	float var_371_float;
	@GetGameTime(var_371_float);
	int var_372_int;
	var_371_float = var_372_int;
	var_369_int = var_372_int % 24;
}


void func_757(object var_0_object, string var_217_string, int var_218_int)
{
	int var_220_int;
	var_0_object->get(var_220_int, var_218_int); //@t
	var_217_string = "vol_" + var_220_int;
}


void func_763(bool var_833_bool, int var_834_int)
{
	int var_838_int;
	var_834_int = var_838_int;
	int var_836_int;
	string var_837_string;
	func_757(var_836_int, var_837_string, var_838_int);
	@GetVariable(var_837_string, var_836_int);
	var_833_bool = (var_836_int & 32) != 0;
}


// @pe
void func_1149(bool var_247_bool, int var_248_int)
{
	int var_249_int;
	func_1132(var_249_int);
	var_247_bool = var_249_int == var_248_int;
}


void func_383(object var_1_object, object var_2_object, int var_908_int, int var_909_int, bool var_910_bool)
{
	object var_918_object; int var_923_int; int var_924_int;
	if(var_910_bool != 0)
		var_1_object->get(var_918_object, var_909_int); //@t
	else
		var_2_object->get(var_918_object, var_909_int); //@t
	int var_919_int;
	var_918_object->size(var_919_int);
	if(var_919_int == 0)
		return 14;
	int var_920_int = 0;
	if(var_919_int > 1)
		@irand(var_920_int, var_919_int);
	int var_921_int = 0;
	
	while(var_921_int < var_919_int) {
		var_918_object->get(var_923_int, ((var_921_int + var_920_int) % var_919_int));
		int var_932_int; int var_933_int;
		var_923_int = var_933_int;
		func_734(var_924_int, var_932_int, var_933_int);
		var_932_int = var_924_int;
		bool var_934_bool; int var_935_int;
		var_924_int = var_935_int;
		func_787(var_934_bool, var_935_int);
		if(var_934_bool != 0) {
			int var_943_int;
			var_924_int = var_943_int;
			func_1079(var_943_int);
			var_924_int = -1;
			return 14;
		}
		var_921_int += 1;
	}
	
	var_908_int = -1;
	
}
EMIT "Stack[-7] = 0";


