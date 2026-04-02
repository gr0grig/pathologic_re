// @GLOBALS: 0:bool:

task task_0
{
	void OnLoad(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		@StopGroup0();
		@sync();
	}

}


maintask task_1
{
	void init(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		var_2_bool = false;
		@SensePlayerOnly(true);
		func_2345();
		func_28();
	
		for(;;) {
			func_226(var_10_object, var_11_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_16_object;
		var_12_bool = var_16_object;
		func_2306(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_187();
			object var_23_object;
			var_12_bool = var_23_object;
			func_2309(var_23_object);
		}
	}

	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_15_object;
		var_12_bool = var_15_object;
		func_1975(var_15_object);
		int var_24_int; object var_25_object;
		var_12_bool = var_25_object;
		func_2269(var_24_int, var_25_object);
		int var_14_int;
		var_24_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_187();
			object var_66_object;
			var_12_bool = var_66_object;
			func_2279(var_66_object);
		}
	}

	void OnPlayerDamage(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		int var_16_int;
		object var_18_object;
		var_12_bool = var_18_object;
		object var_19_object;
		var_13_object = var_19_object;
		bool var_20_bool;
		var_14_bool = var_20_bool;
		func_2358(var_18_object, var_19_object, var_20_bool);
		bool var_17_bool;
		if(var_17_bool != 0) {
			int var_50_int; object var_51_object; bool var_52_bool;
			var_12_bool = var_51_object;
			var_14_bool = var_52_bool;
			func_2287(var_51_object, var_52_bool);
			var_50_int = var_16_int;
			if(var_16_int > 0) {
				if(var_16_int > 1)
					func_187();
				object var_89_object;
				var_12_bool = var_89_object;
				func_2294(var_89_object);
			}
		}
	}

	void OnSteal(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_16_object;
		var_12_bool = var_16_object;
		func_2315(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_187();
			object var_23_object;
			var_12_bool = var_23_object;
			func_2318();
		}
	}

	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		int var_15_int;
		object var_17_object;
		var_12_object = var_17_object;
		string var_18_string;
		var_13_bool = var_18_string;
		bool var_16_bool;
		func_1889(var_16_bool, var_17_object, var_18_string);
		if(var_16_bool != 0) {
			func_187();
			object var_33_object; string var_34_string;
			var_12_object = var_33_object;
			var_13_bool = var_34_string;
			func_1921(var_33_object, var_34_string);
		} else {
			int var_44_int; string var_45_string; object var_46_object;
			var_13_bool = var_45_string;
			var_12_object = var_46_object;
			func_2320(var_46_object);
			var_44_int = var_15_int;
			if(!(var_15_int > 0)) goto Label_165;
			if(var_15_int > 1)
				func_187();
			string var_51_string; object var_52_object;
			var_13_bool = var_51_string;
			var_12_object = var_52_object;
			func_2323();
		}
	Label_165:
	
	}

	// @pe
	void OnTrigger(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, string var_3_string, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		string var_14_string;
		var_12_bool = var_14_string;
		bool var_13_bool;
		func_1988(var_13_bool, var_14_string);
		if(var_13_bool != 0) {
			func_187();
			string var_24_string;
			var_12_bool = var_24_string;
			func_2004(var_24_string);
		}
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		func_187();
		func_2300();
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		func_187();
		object var_15_object;
		var_12_bool = var_15_object;
		func_2174();
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_12_bool = var_14_object;
		bool var_13_bool;
		func_1946(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_187();
			object var_27_object;
			var_12_bool = var_27_object;
			func_1969(var_27_object);
		}
	}

}


task task_2
{
	void OnUse(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_16_object;
		var_12_bool = var_16_object;
		func_2306(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			object var_19_object;
			var_12_bool = var_19_object;
			func_2309(var_19_object);
		}
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		func_2300();
	}

	// @pe
	void OnHit(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, float var_5_float, float var_6_float, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
	}

	// @pe
	void OnPropertyChange(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		func_1218(var_11_bool);
		func_2300();
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 1) {
			func_1869(var_1_cvector);
		} else {
			int var_20_int;
			func_1362(var_11_bool, var_20_int, var_20_int);
		}
	
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
	{
		bool var_13_bool = false;
		if(var_1_cvector == var_12_object) {
			if(!var_2_bool) //@nz
				var_13_bool = true;
		}
		if(var_13_bool != 0) {
			var_2_bool = true;
			object var_16_object;
			var_12_object = var_16_object;
			func_1737(var_16_object);
		}
	}

	// @pe
	void OnStopSee(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
	{
		bool var_13_bool = false;
		if(var_1_cvector == var_12_object) {
			if(var_2_bool != 0)
				var_13_bool = true;
		}
		if(var_13_bool != 0) {
			var_2_bool = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
	{
		@RequestClearPath(var_12_object);
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
	{
		func_1218(var_12_object);
		object var_17_object;
		var_12_object = var_17_object;
		func_2174();
	}

}


void OnPropertyChange(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, string var_13_string)
{
	float var_15_float;
	if(var_13_string == "health") {
		@GetProperty("health", var_15_float);
		if(var_15_float <= 0)
			@SignalDeath(var_12_object);
	}
}


// @pe
void OnDeath(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_2153(var_13_object);
}


// @pe
void OnHit(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, float var_14_float, float var_15_float)
{
	object var_16_object;
	var_12_object = var_16_object;
	int var_17_int;
	var_13_int = var_17_int;
	float var_18_float;
	var_14_float = var_18_float;
	func_1639(var_16_object, var_17_int, var_18_float);
}


// @pe
void OnHit2(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, float var_14_float, float var_15_float, cvector var_16_cvector, cvector var_17_cvector)
{
	object var_18_object;
	var_12_object = var_18_object;
	int var_19_int;
	var_13_int = var_19_int;
	float var_20_float;
	var_14_float = var_20_float;
	cvector var_21_cvector;
	var_16_cvector = var_21_cvector;
	cvector var_22_cvector;
	var_17_cvector = var_22_cvector;
	func_1707(var_20_float, var_21_cvector, var_22_cvector);
}


void func_1024(bool var_339_bool)
{
	bool var_340_bool = false;
	bool var_341_bool;
	func_996(var_340_bool, var_341_bool);
	if(var_341_bool != 0) {
		bool var_358_bool;
		func_1040(var_339_bool, var_340_bool, var_358_bool);
		if(var_358_bool != 0)
			var_340_bool = true;
	}
	if(var_340_bool != 0) {
		var_339_bool = true;
		return 0;
	}
	var_339_bool = false;
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_18_bool;
	func_1732(var_18_bool);
	if(!var_18_bool) goto Label_0; //@nz
}


// @pe
void func_2306(int var_15_int)
{
	var_15_int = 2;
}


// @pe
void func_2309(object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	func_2349(var_20_object);
}


void func_1800(object var_123_object)
{
	object var_125_object;
	@self(var_125_object);
	var_125_object = var_123_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2315(int var_15_int)
{
	var_15_int = 0;
}


// @pe
void func_2318(void)
{
}


void func_1806(cvector var_44_cvector, cvector var_45_cvector)
{
	float var_53_float = sqrt(var_45_cvector | var_45_cvector);
	if(var_53_float < 0.000001)
		var_44_cvector = [0.0, 0.0, 0.0];
	var_44_cvector = var_45_cvector / var_53_float;
}


void func_1040(cvector var_0_cvector, object var_4_object, bool var_358_bool)
{
	object var_364_object; float var_366_float; cvector var_367_cvector; cvector var_368_cvector;
	@GetScene(var_364_object);
	bool var_365_bool = false;
	
	for(;;) {
		cvector var_369_cvector;
		func_1425(var_369_cvector, var_0_cvector);
		var_375_int = -var_369_cvector;
		@FindDirLength(var_366_float, var_375_int, var_4_object);
		if(var_366_float < var_4_object) {
		} else {
				@Face(var_0_cvector);
				@PlayAnimation("all", "bjump");
				var_0_cvector->GetPFPosition(var_367_cvector); //@t
				@GetPFPosition(var_368_cvector);
				@WaitForAnimEnd();
				func_1128(var_368_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_365_bool = true;
				bool var_380_bool;
				func_996(var_368_cvector, var_380_bool);
				var_381_bool = !var_380_bool; //@nz
				if(var_381_bool == 0) goto Label_1081;
		}
		for(;;) {
			var_365_bool = var_358_bool;

		}

	Label_1081:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_2320(int var_44_int)
{
	var_44_int = 0;
}


void func_2067(string var_105_string)
{
	object var_109_object;
	@CreateInvItem(var_109_object);
	var_109_object->SetItemName(var_105_string);
	var_109_object->SetProperty("Organ", 1);
	int var_110_int;
	var_109_object->GetItemID(var_110_int);
	bool var_111_bool;
	@AddItem(var_111_bool, var_109_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_2323(void)
{
}


void func_789(cvector var_0_cvector, cvector var_1_cvector, bool var_387_bool, float var_388_float)
{
	string var_396_string;
	func_1128(var_396_string);
	int var_393_int;
	@irand(var_393_int, var_1_cvector);
	@Face(var_0_cvector);
	@SetAttackState(true);
	func_1878();
	@PlayAnimation("all", ("attack_begin" + (var_393_int + 1)));
	@WaitForAnimEnd();
	int var_395_int;
	func_1096(var_395_int, var_396_string);
	bool var_421_bool;
	func_1571(var_421_bool, var_0_cvector);
	if(!var_421_bool) { //@nz
		@StopAsync();
		var_387_bool = false;
		return 8;
	}
	float var_424_float; int var_425_int;
	var_388_float = var_424_float;
	var_393_int = var_425_int;
	func_750(var_396_string, var_424_float, var_425_int);
	bool var_394_bool;
	@HasAnimation(var_394_bool, "all", ("attack_middle" + var_393_int));
	if(var_394_bool != 0) {
		func_1878();
		@PlayAnimation("all", ("attack_middle" + var_393_int));
		@WaitForAnimEnd();
		func_1128(var_396_string);
		bool var_513_bool;
		func_1571(var_513_bool, var_0_cvector);
		if(!var_513_bool) { //@nz
			@StopAsync();
			var_387_bool = false;
			return 8;
		}
		float var_516_float; int var_517_int;
		var_388_float = var_516_float;
		func_750(var_396_string, var_516_float, var_517_int);
		var_395_int = 1;

		for(;;) {
			var_396_string = (("attack_middle" + var_517_int) + "_") + var_395_int;
			@HasAnimation(var_394_bool, "all", var_396_string);
			if(!var_394_bool) { //@nz
			} else {
				func_1878();
				@PlayAnimation("all", var_396_string);
				@WaitForAnimEnd();
				func_1128(var_396_string);
				bool var_539_bool;
				func_1571(var_539_bool, var_0_cvector);
				if(!var_539_bool) { //@nz
					@StopAsync();
					var_387_bool = false;
					return 8;
				}
				float var_542_float; int var_543_int;
				var_388_float = var_542_float;
				var_393_int = var_543_int;
				func_750(var_396_string, var_542_float, var_543_int);
				var_395_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_393_int));
		bool var_528_bool;
		func_1142(var_528_bool);
		if(var_528_bool != 0) {
			bool var_529_bool;
			func_926(var_529_bool, 0.75);
			@StopAsync();
		}
		var_387_bool = true;
		return 8;

	}
}


// @pe
void func_2325(bool var_18_bool)
{
	var_18_bool = false;
}


void func_1816(float var_77_float, cvector var_78_cvector, cvector var_79_cvector)
{
	var_77_float = (var_79_cvector - var_78_cvector) | (var_79_cvector - var_78_cvector);
}


// @pe
void func_2328(void)
{
}


// @pe
void func_2330(bool var_25_bool)
{
	var_25_bool = false;
}


void func_28(void)
{
	bool var_14_bool;
	func_1732(var_14_bool);
	if(!var_14_bool) //@nz
		func_2300();
}


// @pe
void func_1820(float var_476_float, float var_477_float, float var_478_float)
{
	if(var_477_float < var_478_float)
		var_477_float = var_476_float;
	else
		var_478_float = var_476_float;
	
}


// @pe
void func_2333(void)
{
}


// @pe
void func_2335(bool var_29_bool)
{
	var_29_bool = false;
}


// @pe
void func_2338(void)
{
}


void func_1571(bool var_25_bool, object var_26_object)
{
	object var_30_object;
	var_26_object = var_30_object;
	bool var_29_bool;
	func_1535(var_29_bool, var_30_object);
	if(!var_29_bool) { //@nz
		var_25_bool = false;
		return 2;
	}
	bool var_47_bool; object var_48_object;
	func_1445(var_47_bool, var_48_object, "noaccess");
	if(!var_47_bool) { //@nz
		var_25_bool = true;
		return 2;
	}
	int var_28_int;
	var_48_object->GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == 0;
}


void func_2084(void)
{
	int var_99_int;
	func_2017(var_99_int);
	if(var_99_int != 1) {
	}
	func_2067("liver");
	func_2067("kidney");
	func_2067("heart");
	func_2067("blood");
}


// @pe
void func_1827(float var_486_float, float var_487_float, float var_488_float, float var_489_float)
{
	if(var_487_float < var_488_float) {
		var_488_float = var_486_float;
		return 0;
	}
	if(var_487_float > var_489_float) {
		var_489_float = var_486_float;
		return 0;
	}
	var_487_float = var_486_float;
}


// @pe
void func_2340(bool var_20_bool)
{
	var_20_bool = false;
}


// @pe
void func_2343(void)
{
}


void func_2345(void)
{
	var_13_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


// @pe
void func_2349(object var_20_object)
{
	var_21_bool = GlobalVars[0];
	if(var_21_bool != 0) {
		object var_22_object;
		var_20_object = var_22_object;
		func_2023(var_22_object);
		return 0;
	}
}


void func_1838(bool var_164_bool, int var_165_int, int var_166_int)
{
	int var_168_int;
	@irand(var_168_int, var_166_int);
	var_164_bool = var_168_int < var_165_int;
}


void func_1843(float var_494_float)
{
	object var_496_object;
	@CreateFloatVector(var_496_object);
	var_496_object->add(var_494_float);
	if(var_494_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_496_object);
}
EMIT "Stack[-1] = 0";


void func_2358(bool var_17_bool, object var_18_object, object var_19_object)
{
	bool var_25_bool; object var_26_object;
	func_1445(var_25_bool, var_26_object, "class");
	if(!var_25_bool) { //@nz
		var_17_bool = false;
		return 4;
	}
	string var_23_string;
	var_26_object->GetProperty("class", var_23_string);
	if(var_23_string != "guard") {
		var_17_bool = false;
		return 4;
	}
	bool var_24_bool;
	@CanSee(var_24_bool, var_18_object);
	bool var_38_bool = true;
	if(var_24_bool != 1) {
		float var_40_float; object var_41_object;
		var_18_object = var_41_object;
		func_1432(var_40_float, var_41_object);
		var_49_bool = var_40_float <= 1000000.0;
		if(var_49_bool != 1)
			var_38_bool = false;
	}
	if(var_38_bool != 0) {
		var_17_bool = true;
		return 4;
	}
	var_17_bool = false;
}


void func_310(void)
{
	@StopGroup0();
	@Stop();
}


void func_1595(object var_29_object)
{
	string var_43_string;
	if(var_29_object == null)
		return 14;
	bool var_37_bool;
	@IsDead(var_37_bool);
	if(var_37_bool != 0)
		return 14;
	int var_38_int;
	@GetSecondaryAnimationType(var_38_int);
	if(var_38_int < 0)
		return 14;
	cvector var_39_cvector;
	var_29_object->GetPosition(var_39_cvector);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	cvector var_41_cvector;
	@GetDirection(var_41_cvector);
	cvector var_42_cvector = var_40_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_42_cvector, 0);
	var_49_float = GetByIndex(var_41_cvector, 0);
	var_51_float = GetByIndex(var_42_cvector, 2);
	var_52_float = GetByIndex(var_41_cvector, 2);
	if(((var_48_float * var_49_float) + (var_51_float * var_52_float)) >= 0)
		var_43_string = "fhit";
	else
		var_43_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_43_string + "1"), (var_43_string + "2"), -10);
	
}


void func_2108(void)
{
	@ClearSubContainer(0);
	int var_134_int;
	func_1860(var_134_int);
	func_2036(30, (50 + (var_134_int * 40)));
	func_1748("tourniquet", 1, 10);
	func_1748("bandage", 1, 10);
	func_1748("bottle_empty", 1, 2);
	func_1748("tvirin", 1, 8);
}


void func_1085(cvector var_0_cvector, bool var_289_bool)
{
	bool var_291_bool;
	var_294_bool = IsFuncExist(var_0_cvector, "IsAttacking", 1);
	if(var_294_bool != 0) {
		var_0_cvector->IsAttacking(var_291_bool); //@t
		var_291_bool = var_289_bool;
	}
	var_289_bool = false;
}


void func_315(void)
{
}


// @pe
void func_316(object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	func_349(var_15_object);
	object var_95_object;
	var_14_object = var_95_object;
	func_2395(var_95_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1860(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


void func_1096(bool var_2_bool, bool var_5_bool)
{
	int var_409_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_408_float;
	@rand(var_408_float);
	float var_415_float;
	func_1146(var_415_float);
	if(var_408_float < var_415_float) {
		@irand(var_409_int, var_2_bool);
		@Speak("attack" + (var_409_int + 1));
		int var_420_int;
		func_1144(var_420_int);
		var_5_bool = var_420_int;
	}
}


void func_1869(object var_15_object)
{
	bool var_17_bool;
	@IsPlayerActor(var_15_object, var_17_bool);
	if(var_17_bool != 0)
		@PlayGlobalMusic("attack");
}


// @pe
void func_1362(cvector var_0_cvector, cvector var_1_cvector, int var_20_int)
{
	if(var_20_int != 0)
		return 0;
	bool var_23_bool;
	func_1400(var_23_bool, var_1_cvector);
	if(!var_23_bool) //@nz
		var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_1878(void)
{
	object var_400_object;
	@GetScene(var_400_object);
	object var_402_object;
	func_1800(var_402_object);
	@BroadcastMessage("battle", var_402_object, var_400_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2395(object var_95_object)
{
	var_96_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
	func_2084();
	bool var_119_bool; object var_120_object;
	func_1440(var_119_bool, var_120_object);
	if(var_119_bool != 0) {
		object var_123_object;
		func_1800(var_123_object);
		@ReportReputationChange(var_120_object, var_123_object, -0.03, true);
		func_2108();
	}
}


void func_349(object var_15_object)
{
	cvector var_26_cvector; cvector var_27_cvector; cvector var_28_cvector; cvector var_29_cvector; string var_30_string; object var_31_object; bool var_32_bool; bool var_33_bool; float var_34_float; cvector var_35_cvector;
	if(var_15_object == null) {
		func_440("fdie");
	} else {
		var_15_object->GetPosition(var_26_cvector);
		@GetPosition(var_27_cvector);
		@GetDirection(var_28_cvector);
		var_29_cvector = var_27_cvector - var_26_cvector;
		var_69_float = GetByIndex(var_29_cvector, 0);
		var_70_float = GetByIndex(var_28_cvector, 0);
		var_72_float = GetByIndex(var_29_cvector, 2);
		var_73_float = GetByIndex(var_28_cvector, 2);
		if(((var_69_float * var_70_float) + (var_72_float * var_73_float)) >= 0)
			var_30_string = "fdie";
		else
			var_30_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_15_object = var_31_object;
		var_80_bool = IsFuncExist(var_15_object, "GetScriptProperty", 2);
		if(var_80_bool != 0) {
			var_15_object->HasScriptProperty(var_32_bool, "Owner");
			if(var_32_bool != 0) {
				var_15_object->GetScriptProperty(var_31_object, "Owner");
				if(var_31_object == null)
					var_15_object = var_31_object;
			}
		}
		var_87_bool = IsFuncExist(var_31_object, "@GetEyesHeight", 1);
		if(var_87_bool != 0) {
			var_31_object->GetEyesHeight(var_34_float);
			var_35_cvector = [0.0, 0.0, 0.0];
			var_88_float = GetByIndex(var_35_cvector, 1);
			var_34_float = var_88_float;
			SetByIndex(var_35_cvector, 1) = var_88_float;
			@LookAsync(var_15_object, "head", var_35_cvector);
			var_33_bool = true;
		} else {
			var_33_bool = false;

		}
		string var_90_string;
		var_30_string = var_90_string;
		func_1759(var_90_string);
		@PlayAnimation("all", var_30_string);
		@WaitForAnimEnd();
		if(var_33_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_30_string);
		@RemoveEnvelope();
		var_31_object = null;
	}
	
}


// @pe
void func_1889(bool var_16_bool, object var_17_object, string var_18_string)
{
	if(var_18_string == "unholster") {
		bool var_21_bool; object var_22_object;
		var_17_object = var_22_object;
		func_2325(var_22_object);
		var_21_bool = var_16_bool;
		return 0;
	EMIT "GOTO 0x77f";
	}
	if(var_18_string == "player_shot") {
		bool var_25_bool; object var_26_object;
		var_17_object = var_26_object;
		func_2330(var_26_object);
		var_25_bool = var_16_bool;
		return 0;
	EMIT "GOTO 0x77f";
	}
	if(var_18_string == "battle") {
		bool var_29_bool; object var_30_object;
		var_17_object = var_30_object;
		func_2335(var_30_object);
		var_29_bool = var_16_bool;
		return 0;
	}
	var_16_bool = false;
}


void func_2148(int var_152_int, string var_153_string)
{
	int var_155_int;
	@GetInvItemByName(var_155_int, var_153_string);
	var_155_int = var_152_int;
}


void func_1639(object var_16_object, int var_17_int, float var_18_float)
{
	cvector var_28_cvector; object var_29_object; int var_30_int; bool var_31_bool; cvector var_32_cvector; cvector var_33_cvector;
	bool var_37_bool = false;
	bool var_38_bool = false;
	if(var_16_object != 0) {
		if(var_17_int != 4)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		if(var_17_int != 5)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		cvector var_44_cvector; cvector var_45_cvector;
		cvector var_46_cvector; object var_47_object;
		var_16_object = var_47_object;
		func_1425(var_46_cvector, var_47_object);
		var_46_cvector = var_45_cvector;
		func_1806(var_44_cvector, var_45_cvector);
		var_44_cvector = var_28_cvector;
		@CreateVectorVector(var_29_object);
		var_30_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_30_int), var_31_bool, var_32_cvector, var_33_cvector);
			if(!var_31_bool) { //@nz
				break;
			Label_1701:
				var_29_object = null;
	}
			object var_106_object;
			var_16_object = var_106_object;
			func_1595(var_106_object);
		}
		if((var_33_cvector | var_28_cvector) >= 0.70710677)
			var_29_object->add(var_32_cvector);
		var_30_int += 1;
	}
	int var_34_int;
	var_29_object->size(var_34_int);
	if(var_34_int == 0) goto Label_1701;
	int var_35_int;
	@irand(var_35_int, var_34_int);
	cvector var_36_cvector;
	var_29_object->get(var_36_cvector, var_35_int);
	object var_61_object; int var_62_int; float var_63_float; cvector var_64_cvector; cvector var_65_cvector;
	var_16_object = var_61_object;
	var_17_int = var_62_int;
	var_18_float = var_63_float;
	var_36_cvector = var_64_cvector;
	var_65_cvector = -var_28_cvector;
	func_1707(var_63_float, var_64_cvector, var_65_cvector);
}


void func_1128(cvector var_0_cvector)
{
	func_1869(var_0_cvector);
}


// @pe
void func_2153(object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	TaskCall(2);
	func_316(var_14_object);
	TaskReturn();
}


void func_1384(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_1133(int var_503_int)
{
	var_503_int = 0;
}


void func_1135(void)
{
	func_1759("attack_stay");
}


// @pe
void func_1140(void)
{
}


void func_1142(bool var_528_bool)
{
	var_528_bool = true;
}


void func_1144(int var_420_int)
{
	var_420_int = 1;
}


// @pe
void func_1400(bool var_23_bool, object var_24_object)
{
	object var_26_object;
	var_24_object = var_26_object;
	bool var_25_bool;
	func_1571(var_25_bool, var_26_object);
	var_25_bool = var_23_bool;
}


void func_1146(float var_415_float)
{
	var_415_float = 0.5;
}


void func_1407(string var_238_string)
{
	var_238_string = "walk";
}


// @pe
void func_1921(object var_33_object, string var_34_string)
{
	if(var_34_string == "unholster") {
		object var_37_object;
		var_33_object = var_37_object;
		func_2328();
	} else if(var_34_string == "player_shot") {
			object var_40_object;
			var_33_object = var_40_object;
			func_2333();
	}
Label_1945:
	for(;;) {

	}
	
	if(!(var_34_string == "battle")) goto Label_1945;
	object var_43_object;
	var_33_object = var_43_object;
	func_2338();
}


void func_1409(string var_239_string)
{
	var_239_string = "run";
}


void func_1155(bool var_2_bool, bool var_169_bool, object var_170_object, float var_171_float, float var_172_float, bool var_173_bool, bool var_174_bool)
{
	object var_182_object;
	func_1869(var_182_object);
	@SetTimer(1, 5);
	bool var_180_bool;
	@CanSee(var_180_bool, var_182_object);
	if(var_180_bool != 0) {
		var_2_bool = true;
		object var_186_object;
		var_170_object = var_186_object;
		func_1737(var_186_object);
	} else {
		var_2_bool = false;
	}
	bool var_193_bool; object var_194_object;
	func_1440(var_193_bool, var_194_object);
	if(var_193_bool != 0) {
		object var_197_object;
		func_1800(var_197_object);
		@SendPlayerEnemy(var_194_object, var_197_object);
	}
	bool var_198_bool; object var_199_object; float var_200_float; float var_201_float; bool var_202_bool; bool var_203_bool;
	var_170_object = var_199_object;
	var_171_float = var_200_float;
	var_172_float = var_201_float;
	var_173_bool = var_202_bool;
	var_174_bool = var_203_bool;
	bool var_181_bool;
	func_1260(var_180_bool, var_181_bool, var_198_bool, var_199_object, var_200_float, var_201_float, var_202_bool, var_203_bool);
	var_198_bool = var_181_bool;
	if(var_2_bool != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_181_bool = var_169_bool;
	
}


// @pe
void func_1411(string var_466_string, int var_467_int)
{
	if(var_467_int == 2) {
		var_466_string = "fire";
		return 0;
	EMIT "GOTO 0x58f";
	}
	if(var_467_int == 1) {
		var_466_string = "bullet";
		return 0;
	}
	var_466_string = "phys";
}


void func_1425(cvector var_46_cvector, object var_47_object)
{
	cvector var_50_cvector;
	@GetPosition(var_50_cvector);
	cvector var_51_cvector;
	var_47_object->GetPosition(var_51_cvector);
	var_46_cvector = var_51_cvector - var_50_cvector;
}


void func_2198(string var_65_string, int var_66_int)
{
	string var_68_string = "idle";
	if(var_66_int != 0)
		var_68_string += var_66_int;
	var_68_string = var_65_string;
}


void func_1432(float var_42_float, object var_43_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_43_object->GetPosition(var_48_cvector);
	var_42_float = (var_48_cvector - var_47_cvector) | (var_48_cvector - var_47_cvector);
}


void func_1946(bool var_13_bool, object var_14_object)
{
	bool var_16_bool;
	bool var_17_bool = false;
	bool var_18_bool; object var_19_object;
	var_14_object = var_19_object;
	func_2325(var_19_object);
	if(var_18_bool != 0) {
		bool var_20_bool; object var_21_object;
		func_1440(var_20_bool, var_21_object);
		if(var_20_bool != 0)
			var_17_bool = true;
	}
	if(var_17_bool != 0) {
		var_21_object->IsWeaponHolstered(var_16_bool);
		if(!var_16_bool) //@nz
			var_13_bool = true;
	}
	var_13_bool = false;
}


void func_2205(int var_59_int)
{
	int var_62_int; bool var_63_bool;
	var_62_int = 0;
	
	for(;;) {
		string var_65_string; int var_66_int;
		var_62_int = var_66_int;
		func_2198(var_65_string, var_66_int);
		@HasAnimation(var_63_bool, "all", var_65_string);
		if(!var_63_bool) //@nz
			break;
		var_62_int += 1;
	}
	var_62_int = var_59_int;
}


void func_926(bool var_529_bool, float var_530_float)
{
	float var_533_float; bool var_534_bool;
	@rand(var_533_float);
	if(var_533_float < var_530_float) {

		for(;;) {
			@IsAnimationPlaying(var_534_bool);
			if(!var_534_bool) { //@nz
			} else {
				bool var_537_bool;
				func_1024(var_537_bool);
				if(var_537_bool != 0) {
					var_529_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_529_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1128(var_534_bool);
}


void func_1440(bool var_119_bool, object var_120_object)
{
	bool var_122_bool;
	@IsPlayerActor(var_120_object, var_122_bool);
	var_122_bool = var_119_bool;
}


void func_1445(bool var_47_bool, object var_48_object, string var_49_string)
{
	var_54_bool = IsFuncExist(var_48_object, "HasProperty", 2);
	if(!var_54_bool) { //@nz
		var_47_bool = false;
		return 2;
	}
	bool var_51_bool;
	var_48_object->HasProperty(var_49_string, var_51_bool);
	var_51_bool = var_47_bool;
}


void func_1707(object var_18_object, cvector var_21_cvector, cvector var_22_cvector)
{
	object var_25_object;
	@GetScene(var_25_object);
	object var_26_object;
	@AddActorByType(var_26_object, "scripted", var_25_object, var_21_cvector, var_22_cvector, "blood_dir.xml");
	object var_29_object;
	var_18_object = var_29_object;
	func_1595(var_29_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2222(void)
{
	@UnlookAsync("head");
	@StopAnimation();
}


// @pe
void func_1969(object var_27_object)
{
	object var_28_object;
	var_27_object = var_28_object;
	func_2328();
}


void func_1457(float var_438_float, object var_439_object, float var_440_float, int var_441_int)
{
	int var_451_int; int var_453_int;
	object var_458_object;
	var_439_object = var_458_object;
	bool var_457_bool;
	func_1445(var_457_bool, var_458_object, "health");
	if(!var_457_bool) //@nz
		var_438_float = 0.0;
	bool var_461_bool; object var_462_object;
	func_1445(var_461_bool, var_462_object, "armor");
	if(!var_461_bool) //@nz
		var_451_int = 0;
	else
		var_462_object->GetProperty("armor", var_451_int);
	string var_466_string; int var_467_int;
	var_441_int = var_467_int;
	func_1411(var_466_string, var_467_int);
	string var_452_string = "armor_" + var_466_string;
	bool var_472_bool; object var_473_object; string var_474_string;
	var_439_object = var_473_object;
	func_1445(var_472_bool, var_473_object, var_474_string);
	if(!var_472_bool) //@nz
		var_453_int = 0;
	else
		var_439_object->GetProperty(var_474_string, var_453_int);

	float var_476_float;
	func_1820(var_476_float, ((var_451_int + var_453_int) / 100.0), (float)1);
	float var_454_float;
	var_476_float = var_454_float;
	float var_455_float;
	var_439_object->GetProperty("health", var_455_float);
	float var_456_float = var_440_float * (1 - var_454_float);
	float var_486_float;
	func_1827(var_486_float, (var_455_float - var_456_float), (float)0, (float)1);
	var_439_object->SetProperty("health", var_486_float);
	bool var_492_bool; object var_493_object;
	var_439_object = var_493_object;
	func_1440(var_492_bool, var_493_object);
	if(var_492_bool != 0) {
		float var_494_float = -var_456_float;
		func_1843(var_494_float);
	}
	var_456_float = var_438_float;
	
}


void func_2228(void)
{
	object var_36_object; float var_37_float;
	@FindActor(var_36_object, "player");
	if(var_36_object != 0) {
		float var_42_float; object var_43_object;
		var_36_object = var_43_object;
		func_1432(var_42_float, var_43_object);
		var_37_float = sqrt(var_42_float);
		if(var_37_float < 350) {
			object var_52_object;
			var_36_object = var_52_object;
			func_1737(var_52_object);
		}
	}
	int var_59_int;
	func_2205(var_59_int);
	int var_38_int;
	var_59_int = var_38_int;
	if(!var_38_int) { //@nz
	}
	int var_39_int;
	@irand(var_39_int, var_38_int);
	string var_74_string; int var_75_int;
	var_39_int = var_75_int;
	func_2198(var_74_string, var_75_int);
	@PlayAnimation("all", var_74_string);
	@WaitForAnimEnd();
	@UnlookAsync("head");
}
EMIT "Stack[-4] = 0";


// @pe
void func_1975(object var_15_object)
{
	bool var_16_bool; object var_17_object;
	func_1440(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		object var_20_object;
		func_1800(var_20_object);
		@ReportReputationChange(var_17_object, var_20_object, -0.05);
	}
}


// @pe
void func_440(string var_37_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_38_string;
	var_37_string = var_38_string;
	func_1759(var_38_string);
	@PlayAnimation("all", var_37_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_37_string);
	@RemoveEnvelope();
}


void func_1721(object var_272_object)
{
	cvector var_276_cvector;
	var_272_object->GetPosition(var_276_cvector);
	cvector var_277_cvector;
	@GetPosition(var_277_cvector);
	cvector var_278_cvector = var_276_cvector - var_277_cvector;
	var_279_float = GetByIndex(var_278_cvector, 0);
	var_280_float = GetByIndex(var_278_cvector, 2);
	@RotateAsync(var_279_float, var_280_float);
}


void func_953(cvector var_0_cvector, bool var_326_bool, float var_327_float)
{
	bool var_333_bool; cvector var_334_cvector; cvector var_335_cvector; cvector var_336_cvector; float var_337_float;
	
	for(;;) {
		@IsAnimationPlaying(var_333_bool);
		if(!var_333_bool) //@nz
			break;
		bool var_339_bool;
		func_1024(var_339_bool);
		if(var_339_bool != 0) {
			var_326_bool = true;
			return 10;
		}
		bool var_382_bool;
		func_1571(var_382_bool, var_0_cvector);
		if(!var_382_bool) { //@nz
			var_326_bool = false;
			return 10;
		}
		var_0_cvector->GetPFPosition(var_334_cvector); //@t
		@GetPFPosition(var_335_cvector);
		var_336_cvector = var_334_cvector - var_335_cvector;
		var_337_float = var_336_cvector | var_336_cvector;
		if(var_337_float < (var_327_float * var_327_float)) {
			bool var_387_bool; float var_388_float;
			var_327_float = var_388_float;
			func_789(var_336_cvector, var_337_float, var_387_bool, var_388_float);
			var_326_bool = true;
			return 10;
		}
		@sync();
	}
	func_1128(var_337_float);
	var_326_bool = false;
}


void func_187(void)
{
	if(var_2_bool != 0)
		func_2222();
	else
		func_310();
	
}


void func_1218(bool var_2_bool)
{
	@KillTimer(1);
	if(var_2_bool != 0) {
		var_2_bool = false;
		@UnlookAsync("head");
	}
	func_1384(var_12_object);
}


void func_1732(bool var_14_bool)
{
	bool var_16_bool;
	@IsLoaded(var_16_bool);
	var_16_bool = var_14_bool;
}


void func_1988(bool var_13_bool, string var_14_string)
{
	object var_16_object;
	if(var_14_string == "heal") {
		@FindActor(var_16_object, "player");
		bool var_20_bool; object var_21_object;
		var_16_object = var_21_object;
		func_2340(var_21_object);
		var_20_bool = var_13_bool;
	EMIT "Stack[-1] = 0";
	}
	var_13_bool = false;
}


void func_1737(object var_52_object)
{
	float var_55_float;
	var_52_object->GetEyesHeight(var_55_float);
	cvector var_56_cvector = [0.0, 0.0, 0.0];
	var_57_float = GetByIndex(var_56_cvector, 1);
	var_55_float = var_57_float;
	SetByIndex(var_56_cvector, 1) = var_57_float;
	@LookAsync(var_52_object, "head", var_56_cvector);
}


void func_715(cvector var_1_cvector, bool var_2_bool, object var_4_object)
{
	bool var_126_bool; bool var_127_bool; cvector var_128_cvector;
	var_1_cvector = 0;
	
	for(;;) {
		@HasAnimation(var_126_bool, "all", ("attack_begin" + (var_1_cvector + 1)));
		if(!var_126_bool) { //@nz
		} else {
			var_1_cvector += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_127_bool, ("attack" + (var_2_bool + 1)));
			if(!var_127_bool) //@nz
				break;
			var_2_bool += 1;
		}
		@GetAnimationOffset(var_128_cvector, "all", "bjump");
		var_142_float = GetByIndex(var_128_cvector, 2);
		var_4_object = -var_142_float;

	}
}


void func_1748(string var_159_string, int var_160_int, int var_161_int)
{
	bool var_163_bool;
	int var_165_int;
	var_160_int = var_165_int;
	int var_166_int;
	var_161_int = var_166_int;
	bool var_164_bool;
	func_1838(var_164_bool, var_165_int, var_166_int);
	if(var_164_bool != 0)
		@AddItem(var_163_bool, var_159_string, 0);
}


void func_2004(string var_24_string)
{
	object var_26_object;
	if(var_24_string == "heal") {
		@FindActor(var_26_object, "player");
		object var_30_object;
		var_26_object = var_30_object;
		func_2343();
		var_26_object = null;
	}
}


// @pe
void func_472(object var_91_object)
{
	object var_98_object;
	func_486(var_94_int, var_95_bool, var_96_float, var_97_int, var_98_object, var_98_object, true, 180.0);
}


void func_220(bool var_2_bool)
{
	var_2_bool = true;
	func_2228();
	var_2_bool = false;
}


// @pe
void func_2269(int var_53_int, object var_54_object)
{
	object var_56_object;
	var_54_object = var_56_object;
	bool var_55_bool;
	func_1571(var_55_bool, var_56_object);
	if(var_55_bool != 0)
		var_53_int = 2;
	else
		var_53_int = 0;
	
}


void func_1759(string var_38_string)
{
	bool var_47_bool; int var_48_int; bool var_49_bool; int var_50_int; bool var_51_bool; float var_52_float; cvector var_53_cvector; cvector var_54_cvector;
	@IsExisting3DSound(var_47_bool, var_38_string);
	if(!var_47_bool) { //@nz
		var_48_int = 0;

		for(;;) {
			@IsExisting3DSound(var_49_bool, (var_38_string + (var_48_int + 1)));
			if(!var_49_bool) { //@nz
				break;
			Label_1779:
				@irand(var_50_int, var_48_int);
				var_38_string += (var_50_int + 1);
	}
			@Is3DSoundLoaded(var_51_bool, var_38_string);
			if(var_51_bool != 0) {
				@GetEyesHeight(var_52_float);
				@GetDirection(var_53_cvector);
				var_54_cvector = var_53_cvector * 50;
				var_65_float = GetByIndex(var_54_cvector, 1);
				SetByIndex(var_54_cvector, 1) = (var_65_float + var_52_float);
				@PlayGlobalSound(var_38_string, var_54_cvector);
			}
		}
		var_48_int += 1;
	}
	var_60_bool = !var_48_int; //@nz
	if(var_60_bool == 0) goto Label_1779;
}


// @pe
void func_480(float var_435_float)
{
	var_435_float = 0.05;
}


void func_2017(int var_99_int)
{
	int var_101_int;
	@GetVariable("branch", var_101_int);
	var_101_int = var_99_int;
}


void func_226(cvector var_0_cvector, cvector var_1_cvector)
{
	int var_24_int; bool var_25_bool; cvector var_26_cvector; object var_27_object;
	@GetPFPosition(var_1_cvector);
	@GetDirection(var_0_cvector);
	
	for(;;) {
		func_315();
		@irand(var_24_int, 10);
		@Sleep((var_24_int + 5), var_25_bool);
		if(var_25_bool != 0) {
			func_220(var_27_object);
		} else {
		for(;;) {
			func_315();
			@GetPFPosition(var_26_cvector);
			float var_77_float; cvector var_79_cvector;
			var_26_cvector = var_79_cvector;
			func_1816(var_77_float, var_1_cvector, var_79_cvector);
			if(var_77_float > 40000) {
				@FindPathTo(var_27_object, var_1_cvector);
				if(var_27_object != null) {
					@RotatePath(var_27_object, var_25_bool);
					if(!var_25_bool) { //@nz
					} else {
					@FollowPath(var_27_object, false, var_25_bool);
					if(!var_25_bool) { //@nz
						goto Label_307;
					}
					var_88_float = GetByIndex(var_0_cvector, 0);
					var_89_float = GetByIndex(var_0_cvector, 2);
					@Rotate(var_88_float, var_89_float, var_25_bool);
					if(!var_25_bool) { //@nz
						goto Label_307;
					}
					@WaitForAnimEnd(var_25_bool);
					if(!var_25_bool) { //@nz
						goto Label_307;
					}
					goto Label_308;
				EMIT "GOTO 0x124";
				}
				@Sleep(1);
				var_27_object = null;
				goto Label_307;
			}
			var_93_float = GetByIndex(var_0_cvector, 0);
			var_94_float = GetByIndex(var_0_cvector, 2);
			@Rotate(var_93_float, var_94_float, var_25_bool);
			if(!var_25_bool) { //@nz
				goto Label_307;
			}
			@WaitForAnimEnd(var_25_bool);
			if(!var_25_bool) { //@nz
				goto Label_307;
			}
			goto Label_308;
			}
		Label_307:
		}
		}
	Label_308:
	}
	
}
EMIT "Return(); Pop(8)";


// @pe
void func_483(int var_442_int)
{
	var_442_int = 0;
}


void func_996(cvector var_0_cvector, bool var_341_bool)
{
	cvector var_347_cvector; cvector var_348_cvector;
	bool var_352_bool;
	func_1571(var_352_bool, var_0_cvector);
	if(!var_352_bool) { //@nz
		var_341_bool = false;
		return 10;
	}
	bool var_355_bool;
	float var_351_float;
	func_1085(var_351_float, var_355_bool);
	if(var_355_bool != 0) {
		var_0_cvector->GetPFPosition(var_347_cvector); //@t
		@GetPFPosition(var_348_cvector);
		var_0_cvector->GetAttackDistance(var_351_float); //@t
		var_341_bool = ((var_347_cvector - var_348_cvector) | (var_347_cvector - var_348_cvector)) <= ((var_351_float + 50) * (var_351_float + 50));
		return 10;
	}
	var_341_bool = false;
}


void func_486(cvector var_0_cvector, object var_3_object, bool var_5_bool, object var_98_object, bool var_99_bool, float var_100_float, bool var_175_bool, bool var_267_bool)
{
	float var_112_float; cvector var_113_cvector; cvector var_114_cvector; bool var_116_bool; float var_119_float; cvector var_120_cvector; bool var_121_bool; float var_122_float;
	func_715(var_120_cvector, var_121_bool, var_122_float);
	var_5_bool = 0;
	var_147_bool = IsFuncExist(var_98_object, "@GetAttackDistance", 1);
	if(var_147_bool != 0) {
		var_98_object->GetAttackDistance(var_112_float);
		var_112_float += 50;
	} else {
						var_100_float = var_112_float;
	}
	if(var_112_float >= 150)
		var_112_float = 150;
	var_3_object = false;
	var_0_cvector = var_98_object;
	bool var_115_bool;
	@IsPlayerActor(var_0_cvector, var_115_bool);
	if(var_115_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_153_object;
		func_1800(var_153_object);
		@SendPlayerEnemy(var_98_object, var_153_object);
	}
	if(var_99_bool != 0)
		var_116_bool = false;
	else
		var_116_bool = true;

	
Label_526:
	for(;;) {
		bool var_158_bool = false;
		bool var_159_bool;
		func_1571(var_159_bool, var_0_cvector);
		if(var_159_bool != 0) {
			if(!var_3_object) //@nz
				var_158_bool = true;
		}
		if(var_158_bool != 0) {
			func_1128(var_122_float);
			var_0_cvector->GetPFPosition(var_113_cvector); //@t
			@GetPFPosition(var_114_cvector);
			var_119_float = (var_113_cvector - var_114_cvector) | (var_113_cvector - var_114_cvector);
			if(var_119_float >= ((400.0 + var_112_float) * (400.0 + var_112_float))) {
				bool var_169_bool; float var_171_float;
				var_112_float = var_171_float;
				TaskCall(4);
				func_1155(var_177_bool, var_169_bool, var_0_cvector, var_171_float, 3000.0, true, false);
				TaskReturn();
				if(!var_175_bool) { //@nz
				} else {
					var_116_bool = false;
			} else {
			if(var_119_float >= (var_100_float * var_100_float)) {
				var_0_cvector->GetPFPosition(var_120_cvector); //@t
				@CanReachByPF(var_121_bool, var_120_cvector);
				if(!var_121_bool) { //@nz
					bool var_261_bool; float var_263_float;
					var_112_float = var_263_float;
					TaskCall(4);
					func_1155(var_269_bool, var_261_bool, var_0_cvector, var_263_float, 3000.0, true, false);
					TaskReturn();
					if(!var_267_bool) { //@nz
						goto Label_698;
					}
					var_116_bool = false;
					goto Label_526;
				}
				if(!var_116_bool) { //@nz
					func_1721(var_0_cvector);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1128(var_122_float);
					@StopAsync();
					var_116_bool = true;
					bool var_283_bool;
					func_1571(var_283_bool, var_0_cvector);
					if(!var_283_bool) { //@nz
						goto Label_698;
					}
				}
				@rand(var_122_float);
				bool var_286_bool;
				var_288_bool = var_122_float < 0.25;
				if(var_288_bool != 1) {
					bool var_289_bool;
					func_1085(true, var_289_bool);
					if(var_289_bool != 1)
						var_286_bool = false;
				}
				if(var_286_bool != 0) {
					@Face(var_0_cvector);
					func_1135();
					@PlayAnimation("all", "attack_stay");
					bool var_326_bool; float var_327_float;
					func_953(var_122_float, var_326_bool, var_327_float);
					@StopAsync();
				} else {
					@Face(var_0_cvector);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1128(var_122_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_548_bool;
					func_1085(var_122_float, var_548_bool);
					var_549_bool = !var_548_bool; //@nz
					if(var_549_bool == 0) goto Label_688;
					bool var_550_bool;
					func_1571(var_550_bool, var_0_cvector);
					if(!var_550_bool) { //@nz
						goto Label_698;
					}
					var_0_cvector->GetPFPosition(var_113_cvector); //@t
					@GetPFPosition(var_114_cvector);
					if(!(((var_113_cvector - var_114_cvector) | (var_113_cvector - var_114_cvector)) < (var_327_float * var_327_float))) goto Label_688;
					bool var_555_bool; float var_556_float;
					var_100_float = var_556_float;
					func_789(var_121_bool, var_122_float, var_555_bool, var_556_float);
					var_557_bool = !var_555_bool; //@nz
					if(var_557_bool == 0) goto Label_688;
					goto Label_698;
			}
				bool var_558_bool; float var_559_float;
				var_100_float = var_559_float;
				func_789(var_121_bool, var_122_float, var_558_bool, var_559_float);
				if(!var_558_bool) { //@nz
					goto Label_698;
				}
				var_116_bool = true;

			}
		Label_688:
			goto Label_697;
			}
			Label_697:
			}
		}
	Label_698:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_115_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_2279(object var_90_object)
{
	object var_91_object;
	var_90_object = var_91_object;
	TaskCall(3);
	func_472(var_91_object);
	TaskReturn();
}


// @pe
void func_2023(object var_22_object)
{
	int var_23_int;
	func_2017(var_23_int);
	if(var_23_int == 1)
		@WorkWithCorpse(var_22_object);
	else
		@Barter(var_22_object);
	
}


void func_1260(cvector var_0_cvector, cvector var_1_cvector, bool var_198_bool, object var_199_object, float var_200_float, float var_201_float, bool var_202_bool, bool var_203_bool)
{
	bool var_212_bool; object var_214_object; cvector var_215_cvector; cvector var_216_cvector; float var_218_float; object var_219_object;
	var_0_cvector = false;
	var_1_cvector = var_199_object;
	bool var_213_bool;
	var_203_bool = var_213_bool;
	
	for(;;) {
		bool var_220_bool; object var_221_object;
		var_199_object = var_221_object;
		func_1400(var_220_bool, var_221_object);
		if(!var_220_bool) { //@nz
			var_198_bool = false;
			return 16;
		}
		var_199_object->GetPosition(var_215_cvector);
		@GetPosition(var_216_cvector);
		var_218_float = (var_215_cvector - var_216_cvector) | (var_215_cvector - var_216_cvector);
		bool var_225_bool = false;
		if(var_201_float > 0) {
			if(var_218_float > (var_201_float * var_201_float))
				var_225_bool = true;
		}
		if(var_225_bool != 0) {
			@Stop();
			var_198_bool = false;
			return 16;
		}
		if(var_218_float > (var_200_float * var_200_float)) {
			var_199_object->GetPFPosition(var_215_cvector);
			@FindPathTo(var_219_object, var_215_cvector);
			if(var_219_object != null) {
				var_219_object = var_214_object;
				var_219_object = null;
			}
			if(var_214_object != null) {
				if(var_213_bool == 0) goto Label_1313;
				var_213_bool = false;
				@RotatePath(var_214_object, var_212_bool);
				if(!var_212_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_238_string;
						func_1407(var_238_string);
						string var_239_string;
						func_1409(var_239_string);
						@FollowPath(var_214_object, var_202_bool, var_212_bool, var_238_string, var_239_string);
						if(!var_212_bool) { //@nz
							if(var_0_cvector == 0) goto Label_1332;
							var_214_object = null;
						}
					EMIT "GOTO 0x535";

					Label_1332:
						} else {
					var_214_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_212_bool);
					if(!var_212_bool) { //@nz
						if(var_0_cvector != 0) {
							var_214_object = null;
							goto Label_1360;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1360;
		}
			var_219_object = null;
			goto Label_1358;

		Label_1358:
			var_214_object = null;

		}
	Label_1360:
		for(;;) {
			var_198_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


void func_750(cvector var_0_cvector, float var_424_float, int var_425_int)
{
	object var_429_object; float var_430_float; float var_431_float;
	@GetVictim((var_424_float * 0.9), var_429_object);
	@ReportAttack(var_0_cvector);
	if(var_429_object == var_0_cvector) {
		float var_435_float; object var_436_object; int var_437_int;
		var_429_object = var_436_object;
		var_425_int = var_437_int;
		func_480(var_437_int);
		var_435_float = var_430_float;
		float var_438_float; object var_439_object; float var_440_float; int var_441_int;
		var_429_object = var_439_object;
		int var_442_int; object var_443_object; int var_444_int;
		var_429_object = var_443_object;
		var_425_int = var_444_int;
		func_483(var_444_int);
		var_442_int = var_441_int;
		func_1457(var_438_float, var_439_object, var_440_float, var_441_int);
		var_438_float = var_431_float;
		int var_503_int;
		func_1133(var_503_int);
		@ReportHit(var_0_cvector, var_503_int, var_431_float, var_440_float);
		object var_504_object; float var_505_float;
		var_429_object = var_504_object;
		var_431_float = var_505_float;
		func_1140();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_2287(int var_50_int, object var_51_object)
{
	object var_54_object;
	var_51_object = var_54_object;
	int var_53_int;
	func_2269(var_53_int, var_54_object);
	var_53_int = var_50_int;
}


void func_2036(int var_131_int, int var_132_int)
{
	if(var_131_int > var_132_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_144_int = 0;
	if(var_131_int != var_132_int) {
		@irand(var_144_int, (var_132_int - var_131_int));
	} else if(var_131_int == 0) {
		return 4;
	}
	var_144_int += var_131_int;
	if(var_144_int == 0)
		return 4;
	int var_152_int;
	func_2148(var_152_int, "Money");
	bool var_145_bool;
	@AddItem(var_145_bool, var_152_int, 0, var_144_int);
	
}


// @pe
void func_2294(object var_89_object)
{
	object var_90_object;
	var_89_object = var_90_object;
	func_2279(var_90_object);
}


void func_1530(bool var_40_bool, object var_41_object)
{
	bool var_43_bool;
	var_41_object->IsDead(var_43_bool);
	var_43_bool = var_40_bool;
}


void func_2300(void)
{
	TaskCall(0);
	func_0();
	TaskReturn();
}


void func_1535(bool var_29_bool, object var_30_object)
{
	if(var_30_object == null) {
		var_29_bool = false;
		return 4;
	}
	bool var_36_bool = false;
	var_39_bool = IsFuncExist(var_30_object, "IsDead", 1);
	if(var_39_bool != 0) {
		bool var_40_bool; object var_41_object;
		var_30_object = var_41_object;
		func_1530(var_40_bool, var_41_object);
		if(var_40_bool != 0)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		var_29_bool = false;
		return 4;
	}
	object var_33_object;
	@GetScene(var_33_object);
	if(var_33_object == null) {
		var_29_bool = false;
		return 4;
	}
	object var_34_object;
	var_30_object->GetScene(var_34_object);
	if(var_33_object != var_34_object) {
		var_29_bool = false;
		return 4;
	}
	var_29_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


