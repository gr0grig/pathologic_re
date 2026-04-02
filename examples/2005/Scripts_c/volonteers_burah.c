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
					int var_507_int;
					var_15_int = var_507_int;
					func_951(var_14_int, var_15_int, var_507_int);
				}
				var_15_int += 1;
			}

		Label_281:
			func_102(var_12_string, var_13_string, var_14_int, var_15_int);
		} else if(var_12_string == "kill") {
			int var_511_int;
			int var_512_int; int var_513_int;
			int var_514_int; string var_515_string;
			var_13_string = var_515_string;
			func_1155(var_514_int, var_515_string);
			var_514_int = var_513_int;
			func_734(var_511_int, var_512_int, var_513_int);
			var_512_int = var_511_int;
			func_1002(var_14_int, var_15_int, var_511_int);
		} else if(var_12_string == "disease") {
			int var_744_int;
			int var_745_int; int var_746_int;
			int var_747_int; string var_748_string;
			var_13_string = var_748_string;
			func_1155(var_747_int, var_748_string);
			var_747_int = var_746_int;
			func_734(var_744_int, var_745_int, var_746_int);
			var_745_int = var_744_int;
			func_811(var_14_int, var_15_int, var_744_int);
		} else if(var_12_string == "update") {
			func_433(var_14_int, var_15_int);
		} else if(var_12_string == "cleanup") {
			func_639(var_15_int);
		} else if(var_12_string == "childs_letter") {
			if(!var_8_bool) { //@nz
				float var_1010_float;
				float var_1011_float;
				func_1127(var_1011_float);
				var_1011_float = var_1010_float;
				func_6(var_1010_float);
				var_8_bool = true;
			}
		} else if(var_12_string == "theater_letter") {
			var_1014_bool = !var_7_bool; //@nz
			if(var_1014_bool == 0) goto Label_358;
			float var_1015_float;
			float var_1016_float;
			func_1127(var_1016_float);
			var_1016_float = var_1015_float;
			func_0(var_1015_float);
			var_7_bool = true;
		}
	}

}


// @pe
void func_0(float var_1015_float)
{
	float var_1018_float;
	var_1015_float = var_1018_float;
	int var_1017_int;
	func_2583(var_1017_int, var_1018_float);
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


void func_2564(bool var_283_bool, int var_284_int)
{
	int var_286_int;
	@GetVariable(("vol_" + var_284_int), var_286_int);
	var_283_bool = (var_286_int & 16) != 0;
}


// @pe
void func_6(float var_376_float)
{
	float var_381_float;
	var_376_float = var_381_float;
	int var_380_int;
	func_2574(var_380_int, var_381_float);
	bool var_389_bool;
	func_1115(var_389_bool, "quest_b12_01", "init_hidden_room");
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
void func_2574(int var_380_int, float var_381_float)
{
	float var_385_float;
	var_381_float = var_385_float;
	int var_382_int;
	func_2659(var_382_int, 522709, 522708, var_385_float);
	var_382_int = var_380_int;
}


void func_639(object var_3_object)
{
	object var_1001_object;
	@Trace("Volonteers Cleanup...");
	int var_1000_int = 0;
	
	for(;;) {
		int var_1003_int;
		func_729(var_1001_object, var_1003_int);
		if(!(var_1000_int < var_1003_int)) goto Label_660;
		var_3_object->get(var_1001_object, var_1000_int); //@t
		if(var_1001_object != null)
			var_1001_object->Remove();
		var_1001_object = null;
		var_1000_int += 1;
	}
	
Label_660:
}


// @pe
void func_2064(object var_180_object, bool var_181_bool, int var_182_int)
{
	var_180_object->add(6);
	var_180_object->add(26);
	var_180_object->add(2);
	var_180_object->add(22);
	if(var_181_bool == false) {
		var_180_object->add(15);
		var_180_object->add(5);
		var_180_object->add(16);
		var_180_object->add(19);
	} else if(var_182_int != 0) {
		var_180_object->add(15);
	}
	
}


// @pe
void func_17(void)
{
	func_2605();
}


void func_787(bool var_932_bool, int var_933_int)
{
	int var_937_int;
	var_933_int = var_937_int;
	int var_935_int;
	string var_936_string;
	func_757(var_935_int, var_936_string, var_937_int);
	@GetVariable(var_936_string, var_935_int);
	var_932_bool = (var_935_int & 1) == 0;
}


void func_915(object var_4_object, int var_841_int)
{
	int var_853_int;
	var_841_int = var_853_int;
	string var_851_string;
	string var_852_string;
	func_757(var_851_string, var_852_string, var_853_int);
	int var_847_int;
	@GetVariable(var_852_string, var_847_int);
	string var_854_string; int var_855_int;
	func_757(var_851_string, var_854_string, var_855_int);
	@SetVariable(var_854_string, ((var_847_int | 32) - 32));
	object var_848_object;
	var_4_object->get(var_848_object, var_855_int); //@t
	int var_849_int;
	var_848_object->size(var_849_int);
	int var_850_int = 0;
	
	while(var_850_int < var_849_int) {
		var_848_object->get(var_851_string, var_850_int);
		string var_861_string;
		var_851_string = var_861_string;
		func_2667(var_861_string, 1);
		var_850_int += 1;
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
	func_2132(var_29_object, var_30_object, var_31_object);
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
void func_21(void)
{
	func_2592();
}


// @pe
void func_2583(int var_1017_int, float var_1018_float)
{
	float var_1022_float;
	var_1018_float = var_1022_float;
	int var_1019_int;
	func_2659(var_1019_int, 522711, 522710, var_1022_float);
	var_1019_int = var_1017_int;
}


void func_25(void)
{
}


// @pe
void func_26(bool var_485_bool, int var_486_int)
{
	int var_492_int;
	var_486_int = var_492_int;
	bool var_491_bool;
	func_1993(var_491_bool, var_492_int);
	var_491_bool = var_485_bool;
}


void func_799(bool var_865_bool, int var_866_int)
{
	int var_870_int;
	var_866_int = var_870_int;
	int var_868_int;
	string var_869_string;
	func_757(var_868_int, var_869_string, var_870_int);
	@GetVariable(var_869_string, var_868_int);
	var_865_bool = (var_868_int & 4) != 0;
}


void func_2592(void)
{
	object var_402_object;
	@CreateDiaryEntry(var_402_object, 697, 1, 535405);
	bool var_406_bool; object var_407_object;
	var_402_object = var_407_object;
	func_2631(var_406_bool, var_407_object, 695);
}
EMIT "Stack[-1] = 0";


void func_33(object var_157_object, object var_158_object)
{
	object var_162_object;
	@CreateIntVector(var_162_object);
	object var_165_object;
	func_2031(var_165_object, true, 1);
	object var_163_object;
	@CreateIntVector(var_163_object);
	object var_180_object;
	var_163_object = var_180_object;
	func_2064(var_180_object, true, 1);
	object var_196_object;
	func_2100(true, 1);
	int var_164_int = 0;
	
	while(var_164_int < 12) {
		var_157_object->add(var_165_object);
		var_158_object->add(var_196_object);
		var_164_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2722(bool var_303_bool)
{
	object var_308_object; int var_311_int;
	@CreateIntVector(var_308_object);
	object var_312_object;
	var_308_object = var_312_object;
	func_2064(var_312_object, false, -1);
	int var_309_int;
	var_308_object->size(var_309_int);
	int var_310_int = 0;
	
	while(var_310_int < var_309_int) {
		var_308_object->get(var_311_int, var_310_int);
		bool var_329_bool = true;
		bool var_330_bool; int var_331_int;
		var_311_int = var_331_int;
		func_2564(var_330_bool, var_331_int);
		if(var_330_bool != 1) {
			bool var_332_bool; int var_333_int;
			var_311_int = var_333_int;
			func_2554(var_332_bool, var_333_int);
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
void func_1575(string var_546_string, int var_547_int)
{
	if(var_547_int == 1) {
		var_546_string = "alexandr";
		return 0;
	}
	if(var_547_int == 2) {
		var_546_string = "andrei";
		return 0;
	}
	if(var_547_int == 3) {
		var_546_string = "anna";
		return 0;
	}
	if(var_547_int == 4) {
		var_546_string = "bigvlad";
		return 0;
	}
	if(var_547_int == 5) {
		var_546_string = "eva";
		return 0;
	}
	if(var_547_int == 6) {
		var_546_string = "georg";
		return 0;
	}
	if(var_547_int == 7) {
		var_546_string = "grif";
		return 0;
	}
	if(var_547_int == 8) {
		var_546_string = "han";
		return 0;
	}
	if(var_547_int == 9) {
		var_546_string = "julia";
		return 0;
	}
	if(var_547_int == 10) {
		var_546_string = "kapella";
		return 0;
	}
	if(var_547_int == 11) {
		var_546_string = "katerina";
		return 0;
	}
	if(var_547_int == 12) {
		var_546_string = "klara";
		return 0;
	}
	if(var_547_int == 13) {
		var_546_string = "lara";
		return 0;
	}
	if(var_547_int == 14) {
		var_546_string = "laska";
		return 0;
	}
	if(var_547_int == 15) {
		var_546_string = "maria";
		return 0;
	}
	if(var_547_int == 16) {
		var_546_string = "mark";
		return 0;
	}
	if(var_547_int == 17) {
		var_546_string = "mat";
		return 0;
	}
	if(var_547_int == 18) {
		var_546_string = "mishka";
		return 0;
	}
	if(var_547_int == 19) {
		var_546_string = "mladvlad";
		return 0;
	}
	if(var_547_int == 20) {
		var_546_string = "notkin";
		return 0;
	}
	if(var_547_int == 21) {
		var_546_string = "ospina";
		return 0;
	}
	if(var_547_int == 22) {
		var_546_string = "petr";
		return 0;
	}
	if(var_547_int == 23) {
		var_546_string = "rubin";
		return 0;
	}
	if(var_547_int == 24) {
		var_546_string = "spi4ka";
		return 0;
	}
	if(var_547_int == 25) {
		var_546_string = "starshina";
		return 0;
	}
	if(var_547_int == 26) {
		var_546_string = "viktor";
		return 0;
	}
	if(var_547_int == 27) {
		var_546_string = "wasted_woman";
		return 0;
	}
	if(var_547_int == 28) {
		var_546_string = "wasted_male";
		return 0;
	}
	if(var_547_int == 29) {
		var_546_string = "alkash";
		return 0;
	}
	if(var_547_int == 30) {
		var_546_string = "boy";
		return 0;
	}
	if(var_547_int == 31) {
		var_546_string = "girl";
		return 0;
	}
	if(var_547_int == 32) {
		var_546_string = "littleboy";
		return 0;
	}
	if(var_547_int == 33) {
		var_546_string = "littlegirl";
		return 0;
	}
	if(var_547_int == 34) {
		var_546_string = "butcher";
		return 0;
	}
	if(var_547_int == 35) {
		var_546_string = "dohodyaga";
		return 0;
	}
	if(var_547_int == 36) {
		var_546_string = "unosha";
		return 0;
	}
	if(var_547_int == 37) {
		var_546_string = "vaxxabit";
		return 0;
	}
	if(var_547_int == 38) {
		var_546_string = "vaxxabitka";
		return 0;
	}
	if(var_547_int == 39) {
		var_546_string = "woman";
		return 0;
	}
	if(var_547_int == 40) {
		var_546_string = "worker";
		return 0;
	}
	if(var_547_int == 42) {
		var_546_string = "whitemask";
		return 0;
	}
	if(var_547_int == 43) {
		var_546_string = "birdmask";
		return 0;
	}
	if(var_547_int == 44) {
		var_546_string = "birdmask";
		return 0;
	}
	if(var_547_int == 46) {
		var_546_string = "patrol";
		return 0;
	}
	if(var_547_int == 47) {
		var_546_string = "danko";
		return 0;
	}
	if(var_547_int == 48) {
		var_546_string = "alkash_d";
		return 0;
	}
	if(var_547_int == 49) {
		var_546_string = "boy_d";
		return 0;
	}
	if(var_547_int == 50) {
		var_546_string = "butcher_d";
		return 0;
	}
	if(var_547_int == 51) {
		var_546_string = "dohodyaga_d";
		return 0;
	}
	if(var_547_int == 52) {
		var_546_string = "girl_d";
		return 0;
	}
	if(var_547_int == 53) {
		var_546_string = "littleboy_d";
		return 0;
	}
	if(var_547_int == 54) {
		var_546_string = "littlegirl_d";
		return 0;
	}
	if(var_547_int == 55) {
		var_546_string = "unosha2";
		return 0;
	}
	if(var_547_int == 56) {
		var_546_string = "unosha_d";
		return 0;
	}
	if(var_547_int == 57) {
		var_546_string = "unosha2_d";
		return 0;
	}
	if(var_547_int == 58) {
		var_546_string = "vaxxabit_d";
		return 0;
	}
	if(var_547_int == 59) {
		var_546_string = "vaxxabitka_d";
		return 0;
	}
	if(var_547_int == 60) {
		var_546_string = "wasted_male_d";
		return 0;
	}
	if(var_547_int == 61) {
		var_546_string = "wasted_woman_d";
		return 0;
	}
	if(var_547_int == 62) {
		var_546_string = "woman_d";
		return 0;
	}
	if(var_547_int == 63) {
		var_546_string = "worker2";
		return 0;
	}
	if(var_547_int == 64) {
		var_546_string = "worker_d";
		return 0;
	}
	if(var_547_int == 65) {
		var_546_string = "worker2_d";
		return 0;
	}
	if(var_547_int == 66) {
		var_546_string = "burah";
		return 0;
	}
	if(var_547_int == 67) {
		var_546_string = "gorbun_daughter";
		return 0;
	}
	if(var_547_int == 68) {
		var_546_string = "gorbun";
		return 0;
	}
	if(var_547_int == 69) {
		var_546_string = "albinos";
		return 0;
	}
	if(var_547_int == 70) {
		var_546_string = "aglaja";
		return 0;
	}
	if(var_547_int == 71) {
		var_546_string = "nude";
		return 0;
	}
	if(var_547_int == 72) {
		var_546_string = "block";
		return 0;
	}
	if(var_547_int == 73) {
		var_546_string = "officer";
		return 0;
	}
	if(var_547_int == 74) {
		var_546_string = "doberman";
		return 0;
	}
	if(var_547_int == 75) {
		var_546_string = "grabitel";
		return 0;
	}
	if(var_547_int == 76) {
		var_546_string = "gatherer_wife";
		return 0;
	}
	if(var_547_int == 77) {
		var_546_string = "rat_prophet";
		return 0;
	}
	if(var_547_int == 78) {
		var_546_string = "morlok";
		return 0;
	}
	if(var_547_int == 79) {
		var_546_string = "soldier";
		return 0;
	}
	if(var_547_int == 80) {
		var_546_string = "britva";
		return 0;
	}
	if(var_547_int == 81) {
		var_546_string = "kabaktchik";
		return 0;
	}
	if(var_547_int == 82) {
		var_546_string = "sanitar";
		return 0;
	}
	if(var_547_int == 83) {
		var_546_string = "salesman";
		return 0;
	}
	if(var_547_int == 84) {
		var_546_string = "ayyan";
		return 0;
	}
	if(var_547_int == 85) {
		var_546_string = "petrbirdmask";
		return 0;
	}
	var_546_string = "";
}


void func_1063(object var_5_object, object var_536_object, int var_537_int)
{
	string var_541_string; object var_542_object;
	var_5_object->get(var_541_string, var_537_int); //@t
	if(var_541_string == "outdoor") {
		@GetMainOutdoorScene(var_542_object);
		var_542_object = var_536_object;
	EMIT "Stack[-2] = 0";
	}
	object var_543_object;
	@GetSceneByName(var_543_object, var_541_string);
	var_543_object = var_536_object;
}
EMIT "Stack[-1] = 0";


void func_811(object var_3_object, object var_4_object, int var_744_int)
{
	object var_759_object; string var_760_string;
	int var_766_int;
	var_744_int = var_766_int;
	string var_764_string;
	string var_765_string;
	func_757(var_764_string, var_765_string, var_766_int);
	int var_757_int;
	@GetVariable(var_765_string, var_757_int);
	string var_767_string; int var_768_int;
	func_757(var_764_string, var_767_string, var_768_int);
	@SetVariable(var_767_string, ((var_757_int & 8) | 5));
	object var_758_object;
	var_3_object->get(var_758_object, var_768_int); //@t
	if(var_758_object == null) {
		object var_774_object; int var_775_int;
		var_744_int = var_775_int;
		func_1063(var_764_string, var_774_object, var_775_int);
		var_774_object = var_759_object;
		string var_776_string; int var_777_int;
		int var_778_int; int var_779_int;
		var_744_int = var_779_int;
		func_752(var_777_int, var_778_int, var_779_int);
		var_778_int = var_777_int;
		func_1575(var_776_string, var_777_int);
		var_776_string = var_760_string;
		object var_780_object; object var_781_object;
		var_759_object = var_781_object;
		func_1097(var_780_object, var_781_object, ("pt_volonteer_" + var_760_string), "pers_birdmask", (("vbirdmask_" + var_760_string) + ".xml"));
		var_780_object = var_758_object;
		var_3_object->set(var_744_int, var_758_object); //@t
		var_759_object = null;
	}
	object var_761_object;
	var_4_object->get(var_761_object, var_744_int); //@t
	int var_762_int;
	var_761_object->size(var_762_int);
	int var_763_int = 0;
	
	while(var_763_int < var_762_int) {
		var_761_object->get(var_764_string, var_763_int);
		string var_790_string;
		var_764_string = var_790_string;
		func_2667(var_790_string, 1);
		var_763_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_2605(void)
{
	object var_437_object;
	@CreateDiaryEntry(var_437_object, 698, 1, 535406);
	bool var_441_bool; object var_442_object;
	var_437_object = var_442_object;
	func_2631(var_441_bool, var_442_object, 696);
}
EMIT "Stack[-1] = 0";


void func_433(object var_4_object, int var_6_int)
{
	int var_807_int; int var_808_int; object var_809_object; int var_810_int; int var_811_int; string var_812_string; int var_814_int; int var_815_int; int var_817_int; int var_818_int;
	@Trace(1);
	
	for(;;) {
		int var_820_int;
		func_729(var_818_int, var_820_int);
		if(!(0 < var_820_int)) goto Label_528;
		@Trace(2);
		int var_823_int; int var_824_int;
		var_807_int = var_824_int;
		func_752(var_818_int, var_823_int, var_824_int);
		var_823_int = var_808_int;
		@Trace(3);
		bool var_826_bool; int var_827_int;
		var_807_int = var_827_int;
		func_775(var_826_bool, var_827_int);
		if(var_826_bool != 0) {
			@Trace(4);
			int var_829_int;
			var_807_int = var_829_int;
			func_811(var_817_int, var_818_int, var_829_int);
		}
		@Trace(5);
		bool var_831_bool; int var_832_int;
		var_807_int = var_832_int;
		func_763(var_831_bool, var_832_int);
		if(var_831_bool != 0) {
			@Trace(6);
			int var_841_int;
			var_807_int = var_841_int;
			func_915(var_818_int, var_841_int);
		}
		@Trace(7);
		bool var_865_bool; int var_866_int;
		var_807_int = var_866_int;
		func_799(var_865_bool, var_866_int);
		if(var_865_bool != 0) {
			@Trace(8);
			var_4_object->get(var_809_object, var_807_int); //@t
			@Trace(9);
			var_809_object->size(var_810_int);
			@Trace(10);
			var_811_int = 0;

			while(var_811_int < var_810_int) {
				@Trace(11);
				var_809_object->get(var_812_string, var_811_int);
				string var_879_string;
				var_812_string = var_879_string;
				func_2667(var_879_string, 1);
				var_811_int += 1;
			}

			@Trace(12);
			var_809_object = null;
		}
		@Trace(13);
		var_807_int += 1;
	}
	
Label_528:
	@Trace(14);
	var_6_int += 1;
	int var_887_int; int var_888_int;
	int var_890_int;
	func_70(var_890_int, var_6_int);
	var_890_int = var_887_int;
	int var_897_int;
	func_85(var_897_int, var_6_int);
	var_897_int = var_888_int;
	func_359(var_887_int, var_888_int, var_6_int);
	@Trace(15);
	int var_813_int = 0;
	
	for(;;) {
		int var_960_int;
		func_729(var_818_int, var_960_int);
		if(!(0 < var_960_int)) goto Label_589;
		@Trace(16);
		int var_963_int; int var_964_int;
		var_814_int = var_964_int;
		func_752(var_818_int, var_963_int, var_964_int);
		var_963_int = var_815_int;
		@Trace(17);
		bool var_966_bool; int var_967_int;
		var_814_int = var_967_int;
		func_775(var_966_bool, var_967_int);
		if(var_966_bool != 0) {
			@Trace(18);
			string var_970_string; int var_971_int;
			var_815_int = var_971_int;
			func_1575(var_970_string, var_971_int);
			@Trace("Volonteer : " + var_970_string);
			var_813_int += 1;
		}
		var_814_int += 1;
	}
	
Label_589:
	@Trace(19);
	int var_816_int = 0;
	
	for(;;) {
		int var_976_int;
		func_729(var_818_int, var_976_int);
		if(!(0 < var_976_int)) goto Label_628;
		@Trace(20);
		int var_979_int; int var_980_int;
		var_817_int = var_980_int;
		func_752(var_818_int, var_979_int, var_980_int);
		var_979_int = var_818_int;
		bool var_981_bool; int var_982_int;
		var_817_int = var_982_int;
		func_799(var_981_bool, var_982_int);
		if(var_981_bool != 0) {
			@Trace(21);
			var_816_int += 1;
			string var_986_string; int var_987_int;
			var_818_int = var_987_int;
			func_1575(var_986_string, var_987_int);
			@Trace("Diseased volonteer : " + var_986_string);
		}
		var_817_int += 1;
	}
	
Label_628:
	@Trace(22);
	@Trace((("Today volonteers: " + var_813_int) + ", diseased: ") + var_816_int);
}


// @pe
void func_2100(object var_196_object, bool var_197_bool)
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
		func_2667(var_232_string, 0);
		var_209_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


void func_1079(int var_941_int)
{
	int var_945_int;
	var_941_int = var_945_int;
	int var_943_int;
	string var_944_string;
	func_757(var_943_int, var_944_string, var_945_int);
	@GetVariable(var_944_string, var_943_int);
	string var_946_string; int var_947_int;
	var_941_int = var_947_int;
	func_757(var_943_int, var_946_string, var_947_int);
	@SetVariable(var_946_string, ((var_943_int & 8) | 3));
}


void func_2618(object var_415_object)
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
void func_70(int var_890_int, int var_891_int)
{
	bool var_892_bool = true;
	var_894_bool = var_891_int < 1;
	if(var_894_bool != 1) {
		var_896_bool = var_891_int >= 11;
		if(var_896_bool != 1)
			var_892_bool = false;
	}
	if(var_892_bool != 0) {
		var_890_int = 0;
		return 0;
	}
	var_890_int = 1;
}


void func_2631(bool var_406_bool, object var_407_object, int var_408_int)
{
	object var_415_object;
	func_2618(var_415_object);
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


void func_2760(bool var_258_bool)
{
	object var_263_object; int var_266_int;
	@CreateIntVector(var_263_object);
	object var_267_object;
	var_263_object = var_267_object;
	func_2100(false, -1);
	int var_264_int;
	var_263_object->size(var_264_int);
	int var_265_int = 0;
	
	while(var_265_int < var_264_int) {
		var_263_object->get(var_266_int, var_265_int);
		bool var_282_bool = true;
		bool var_283_bool; int var_284_int;
		var_266_int = var_284_int;
		func_2564(var_283_bool, var_284_int);
		if(var_283_bool != 1) {
			bool var_292_bool; int var_293_int;
			var_266_int = var_293_int;
			func_2554(var_292_bool, var_293_int);
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
void func_1993(bool var_491_bool, int var_492_int)
{
	if(var_492_int == 18) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 24) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 20) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 14) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 10) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 17) {
		var_491_bool = true;
		return 0;
	}
	if(var_492_int == 8) {
		var_491_bool = true;
		return 0;
	}
	var_491_bool = false;
}


void func_1097(object var_716_object, object var_717_object, string var_718_string, string var_719_string, string var_720_string)
{
	bool var_729_bool; cvector var_730_cvector; cvector var_731_cvector;
	var_717_object->GetLocator(var_718_string, var_729_bool, var_730_cvector, var_731_cvector);
	if(!var_729_bool) //@nz
		@Trace(("Locator " + var_718_string) + " doesn't exist");
	else
		var_717_object->AddStationaryActor(Obj(), var_730_cvector, var_731_cvector, var_719_string, var_720_string);
	object var_732_object = var_716_object;
	
}
EMIT "Stack[-1] = 0";


void func_2132(object var_29_object, object var_30_object, object var_31_object)
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


// @pe
void func_85(int var_897_int, int var_898_int)
{
	if(var_898_int < 5) {
		var_897_int = 0;
		return 0;
	}
	var_897_int = 1;
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


void func_2659(int var_382_int, int var_383_int, int var_384_int, float var_385_float)
{
	int var_387_int;
	@AddMessage(var_383_int, var_384_int, var_385_float, var_387_int);
	@SendWorldWndMessage(6);
	var_387_int = var_382_int;
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
		func_2798(var_255_bool);
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
		func_2722(var_400_bool);
		if(var_400_bool != 0)
			var_395_bool = true;
	}
	if(var_395_bool != 0) {
		var_9_bool = true;
		func_21();
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
		func_2684(var_429_bool);
		if(var_429_bool != 0)
			var_424_bool = true;
	}
	if(var_424_bool != 0) {
		var_10_bool = true;
		func_25();
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
		func_2760(var_435_bool);
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


void func_359(int var_887_int, int var_888_int, int var_889_int)
{
	int var_903_int; int var_904_int;
	var_903_int = 0;
	
	while(var_903_int < var_887_int) {
		int var_906_int; int var_907_int;
		var_889_int = var_907_int;
		func_383(var_903_int, var_904_int, var_906_int, var_907_int, true);
	}
	
	var_904_int = 0;
	
	while(var_904_int < var_888_int) {
		int var_955_int; int var_956_int;
		var_889_int = var_956_int;
		func_383((var_903_int + 1), var_904_int, var_955_int, var_956_int, false);
		var_904_int += 1;
	}
	
}


void func_1002(object var_3_object, object var_4_object, int var_511_int)
{
	object var_526_object; string var_527_string; string var_531_string;
	string var_532_string; int var_533_int;
	func_757(var_531_string, var_532_string, var_533_int);
	@SetVariable(var_532_string, 17);
	object var_525_object;
	var_3_object->get(var_525_object, var_533_int); //@t
	if(var_525_object == null) {
		object var_536_object; int var_537_int;
		var_511_int = var_537_int;
		func_1063(var_531_string, var_536_object, var_537_int);
		var_536_object = var_526_object;
		string var_546_string; int var_547_int;
		int var_548_int; int var_549_int;
		var_511_int = var_549_int;
		func_752(var_547_int, var_548_int, var_549_int);
		var_548_int = var_547_int;
		func_1575(var_546_string, var_547_int);
		var_546_string = var_527_string;
		object var_716_object; object var_717_object;
		var_526_object = var_717_object;
		func_1097(var_716_object, var_717_object, ("pt_volonteer_" + var_527_string), "pers_birdmask", (("vbirdmask_" + var_527_string) + ".xml"));
		var_716_object = var_525_object;
		var_3_object->set(var_511_int, var_525_object); //@t
		var_526_object = null;
	}
	object var_528_object;
	var_4_object->get(var_528_object, var_511_int); //@t
	int var_529_int;
	var_528_object->size(var_529_int);
	int var_530_int = 0;
	
	while(var_530_int < var_529_int) {
		var_528_object->get(var_531_string, var_530_int);
		string var_739_string;
		var_531_string = var_739_string;
		func_2667(var_739_string, 2);
		var_530_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_2667(string var_232_string, int var_233_int)
{
	object var_235_object;
	@FindActor(var_235_object, var_232_string);
	if(!var_235_object) //@nz
		@Trace(("Door " + var_232_string) + " not found");
	else
		var_235_object->SetProperty("dlocked", var_233_int);
	
}
EMIT "Stack[-1] = 0";


void func_1132(int var_249_int)
{
	float var_251_float;
	@GetGameTime(var_251_float);
	var_249_int = 1 + (var_251_float / 24);
}


void func_2798(bool var_255_bool)
{
	int var_257_int = 0;
	bool var_258_bool;
	func_2760(var_258_bool);
	if(var_258_bool != 0)
		var_257_int += 1;
	bool var_303_bool;
	func_2722(var_303_bool);
	if(var_303_bool != 0)
		var_257_int += 1;
	bool var_336_bool;
	func_2684(var_336_bool);
	if(var_336_bool != 0)
		var_257_int += 1;
	var_255_bool = var_257_int >= 2;
}


// @pe
void func_2031(object var_165_object, bool var_166_bool, int var_167_int)
{
	var_165_object->add(18);
	var_165_object->add(24);
	var_165_object->add(20);
	var_165_object->add(14);
	if(var_166_bool == false) {
		var_165_object->add(10);
		var_165_object->add(17);
		var_165_object->add(8);
	} else if(var_167_int != 1) {
		var_165_object->add(10);
	}
	
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
		func_2667(var_468_string, 0);
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


void func_757(object var_0_object, string var_217_string, int var_218_int)
{
	int var_220_int;
	var_0_object->get(var_220_int, var_218_int); //@t
	var_217_string = "vol_" + var_220_int;
}


void func_2554(bool var_292_bool, int var_293_int)
{
	int var_295_int;
	@GetVariable(("vol_" + var_293_int), var_295_int);
	var_292_bool = (var_295_int & 4) != 0;
}


void func_763(bool var_831_bool, int var_832_int)
{
	int var_836_int;
	var_832_int = var_836_int;
	int var_834_int;
	string var_835_string;
	func_757(var_834_int, var_835_string, var_836_int);
	@GetVariable(var_835_string, var_834_int);
	var_831_bool = (var_834_int & 32) != 0;
}


void func_2684(bool var_336_bool)
{
	object var_341_object; int var_344_int;
	@CreateIntVector(var_341_object);
	object var_345_object;
	var_341_object = var_345_object;
	func_2031(var_345_object, false, -1);
	int var_342_int;
	var_341_object->size(var_342_int);
	int var_343_int = 0;
	
	while(var_343_int < var_342_int) {
		var_341_object->get(var_344_int, var_343_int);
		bool var_361_bool = true;
		bool var_362_bool; int var_363_int;
		var_344_int = var_363_int;
		func_2564(var_362_bool, var_363_int);
		if(var_362_bool != 1) {
			bool var_364_bool; int var_365_int;
			var_344_int = var_365_int;
			func_2554(var_364_bool, var_365_int);
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
void func_1149(bool var_247_bool, int var_248_int)
{
	int var_249_int;
	func_1132(var_249_int);
	var_247_bool = var_249_int == var_248_int;
}


void func_383(object var_1_object, object var_2_object, int var_906_int, int var_907_int, bool var_908_bool)
{
	object var_916_object; int var_921_int; int var_922_int;
	if(var_908_bool != 0)
		var_1_object->get(var_916_object, var_907_int); //@t
	else
		var_2_object->get(var_916_object, var_907_int); //@t
	int var_917_int;
	var_916_object->size(var_917_int);
	if(var_917_int == 0)
		return 14;
	int var_918_int = 0;
	if(var_917_int > 1)
		@irand(var_918_int, var_917_int);
	int var_919_int = 0;
	
	while(var_919_int < var_917_int) {
		var_916_object->get(var_921_int, ((var_919_int + var_918_int) % var_917_int));
		int var_930_int; int var_931_int;
		var_921_int = var_931_int;
		func_734(var_922_int, var_930_int, var_931_int);
		var_930_int = var_922_int;
		bool var_932_bool; int var_933_int;
		var_922_int = var_933_int;
		func_787(var_932_bool, var_933_int);
		if(var_932_bool != 0) {
			int var_941_int;
			var_922_int = var_941_int;
			func_1079(var_941_int);
			var_922_int = -1;
			return 14;
		}
		var_919_int += 1;
	}
	
	var_906_int = -1;
	
}
EMIT "Stack[-7] = 0";


