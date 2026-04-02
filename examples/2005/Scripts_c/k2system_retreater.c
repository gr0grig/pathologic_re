maintask task_0
{
	void init(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
	
		for(;;) {
			@Sleep(3);
			func_28(var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		object var_19_object;
		if(var_17_bool == "wonder") {
			@Sleep(1);
			@FindActor(var_19_object, "player");
			object var_24_object;
			var_19_object = var_24_object;
			TaskCall(1);
			func_174(var_24_object);
			TaskReturn();
			var_19_object = null;
		}
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		if(var_17_bool == 10) {
			bool var_20_bool;
			func_55(var_15_bool, var_16_object, var_17_bool, var_20_bool);
			if(var_20_bool != 0) {
				if(!var_2_bool) { //@nz
					func_1835(var_4_object);
					var_2_bool = true;
				}
			} else if(var_2_bool != 0) {
				@UnlookAsync("head");
				var_2_bool = false;
			}
		}
	
	}

}


task task_1
{
	// @pe
	void OnAttacked(int var_0_int, int iDamageType, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		bool var_18_bool; object var_19_object;
		func_2104(var_18_bool, var_19_object);
		if(var_18_bool != 0) {
			func_352(var_19_object);
			object var_55_object;
			var_17_bool = var_55_object;
			func_2111(var_55_object);
		}
	}

	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, int var_8_int, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		cvector var_22_cvector; float var_23_float; cvector var_24_cvector; float var_25_float;
		if(var_17_bool != 120) {
		}
		if(iID == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_22_cvector);
			@FindDirLength(var_23_float, var_22_cvector, 7000.0);
			cvector var_31_cvector;
			func_197(var_25_float, var_31_cvector, 1.7453294);
			var_31_cvector = var_24_cvector;
			var_25_float = var_24_cvector | var_24_cvector;
			bool var_61_bool = false;
			if(var_25_float >= 2500.0) {
				bool var_64_bool;
				var_68_bool = var_25_float >= ((var_23_float * var_23_float) * 2.25);
				if(var_68_bool != 1) {
					bool var_69_bool;
					func_368(true, var_69_bool);
					if(var_69_bool != 1)
						var_64_bool = false;
				}
				if(var_64_bool != 0)
					var_61_bool = true;
			}
			if(var_61_bool == 0) goto Label_351;
			@Stop();
			cvector var_89_cvector;
			func_1496(var_89_cvector);
			var_1_int = var_89_cvector + var_24_cvector;
		}
	Label_351:
	
	}

	// @pe
	void OnDeath(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_352(var_17_bool);
		object var_19_object;
		var_17_bool = var_19_object;
		func_2098();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int)
	{
		if(var_17_int == 1) {
			func_1984(var_1_int);
		} else {
			int var_25_int;
			func_1279(var_16_bool, var_25_int, var_25_int);
		}
	
	}

	// @pe
	void OnSee(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
	{
		bool var_18_bool = false;
		if(var_1_int == var_17_object) {
			if(!var_2_bool) //@nz
				var_18_bool = true;
		}
		if(var_18_bool != 0) {
			var_2_bool = true;
			object var_21_object;
			var_17_object = var_21_object;
			func_1835(var_21_object);
		}
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
	{
		bool var_18_bool = false;
		if(var_1_int == var_17_object) {
			if(var_2_bool != 0)
				var_18_bool = true;
		}
		if(var_18_bool != 0) {
			var_2_bool = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
	{
		@RequestClearPath(var_17_object);
	}

	// @pe
	void OnDeath(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
	{
		func_1135(var_17_object);
		object var_22_object;
		var_17_object = var_22_object;
		func_2098();
	}

}


task task_4
{
	void OnUse(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
	{
		bool var_19_bool;
		@IsOverrideActive(var_19_bool);
		if(!var_19_bool) { //@nz
			object var_21_object;
			var_17_object = var_21_object;
			func_2034(var_21_object);
		}
	}

	// @pe
	void OnHit(int var_0_int, int iHitType, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, int var_18_int, float var_19_float, float var_20_float)
	{
	}

	// @pe
	void OnPropertyChange(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, string var_18_string)
	{
	}

	// @pe
	void OnDeath(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
	{
	}

}


// @pe
void OnHit(int var_0_int, int iHitType, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, int var_18_int, float var_19_float, float var_20_float)
{
	object var_21_object;
	var_17_object = var_21_object;
	int var_22_int;
	var_18_int = var_22_int;
	float var_23_float;
	var_19_float = var_23_float;
	func_1737(var_21_object, var_22_int, var_23_float);
}


// @pe
void OnHit2(int var_0_int, int iHitType, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, int var_18_int, float var_19_float, float var_20_float, cvector var_21_cvector, cvector var_22_cvector)
{
	object var_23_object;
	var_17_object = var_23_object;
	int var_24_int;
	var_18_int = var_24_int;
	float var_25_float;
	var_19_float = var_25_float;
	cvector var_26_cvector;
	var_21_cvector = var_26_cvector;
	cvector var_27_cvector;
	var_22_cvector = var_27_cvector;
	func_1805(var_25_float, var_26_cvector, var_27_cvector);
}


// @pe
void OnPropertyChange(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, string var_18_string)
{
}


// @pe
void OnDeath(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_2057(var_18_object);
}


// @pe
void func_2057(object var_18_object)
{
	object var_20_object;
	var_18_object = var_20_object;
	bool var_19_bool;
	func_1516(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		bool var_23_bool; object var_24_object;
		var_18_object = var_24_object;
		func_1929(var_23_bool, var_24_object, -0.1);
	}
	func_2047();
	object var_66_object;
	var_18_object = var_66_object;
	TaskCall(4);
	func_1328(var_66_object);
	TaskReturn();
}


void func_1555(float var_407_float, object var_408_object, float var_409_float, int var_410_int)
{
	int var_420_int; int var_422_int;
	object var_427_object;
	var_408_object = var_427_object;
	bool var_426_bool;
	func_1521(var_426_bool, var_427_object, "health");
	if(!var_426_bool) //@nz
		var_407_float = 0.0;
	bool var_430_bool; object var_431_object;
	func_1521(var_430_bool, var_431_object, "armor");
	if(!var_430_bool) //@nz
		var_420_int = 0;
	else
		var_431_object->GetProperty("armor", var_420_int);
	string var_435_string; int var_436_int;
	var_410_int = var_436_int;
	func_1482(var_435_string, var_436_int);
	string var_421_string = "armor_" + var_435_string;
	bool var_441_bool; object var_442_object; string var_443_string;
	var_408_object = var_442_object;
	func_1521(var_441_bool, var_442_object, var_443_string);
	if(!var_441_bool) //@nz
		var_422_int = 0;
	else
		var_408_object->GetProperty(var_443_string, var_422_int);

	float var_445_float;
	func_1903(var_445_float, ((var_420_int + var_422_int) / 100.0), (float)1);
	float var_423_float;
	var_445_float = var_423_float;
	float var_424_float;
	var_408_object->GetProperty("health", var_424_float);
	float var_425_float = var_409_float * (1 - var_423_float);
	float var_455_float;
	func_1910(var_455_float, (var_424_float - var_425_float), (float)0, (float)1);
	var_408_object->SetProperty("health", var_455_float);
	bool var_461_bool; object var_462_object;
	var_408_object = var_462_object;
	func_1516(var_461_bool, var_462_object);
	if(var_461_bool != 0) {
		float var_463_float = -var_425_float;
		func_1964(var_463_float);
	}
	var_425_float = var_407_float;
	
}


// @pe
void func_28(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_18_float, float var_19_float)
{
	bool var_20_bool;
	func_1830(var_20_bool);
	if(!var_20_bool) //@nz
		return 0;
	@FindActor(var_4_object, "player");
	var_2_bool = false;
	var_0_int = var_18_float;
	var_1_int = var_19_float;
	@SetTimer(10, 1.0);
	func_93();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1052(int var_0_int)
{
	func_1984(var_0_int);
}


void func_1057(int var_468_int)
{
	var_468_int = 0;
}


void func_1059(void)
{
	func_1846("attack_stay");
}


// @pe
void func_1064(void)
{
}


void func_1066(bool var_493_bool)
{
	var_493_bool = true;
}


void func_1068(int var_389_int)
{
	var_389_int = 1;
}


void func_1070(float var_384_float)
{
	var_384_float = 0.5;
}


void func_1072(bool var_2_bool, bool var_138_bool, object var_139_object, float var_140_float, float var_141_float, bool var_142_bool, bool var_143_bool)
{
	object var_151_object;
	func_1984(var_151_object);
	@SetTimer(1, 5);
	bool var_149_bool;
	@CanSee(var_149_bool, var_151_object);
	if(var_149_bool != 0) {
		var_2_bool = true;
		object var_155_object;
		var_139_object = var_155_object;
		func_1835(var_155_object);
	} else {
		var_2_bool = false;
	}
	bool var_162_bool; object var_163_object;
	func_1516(var_162_bool, var_163_object);
	if(var_162_bool != 0) {
		object var_166_object;
		func_1887(var_166_object);
		@SendPlayerEnemy(var_163_object, var_166_object);
	}
	bool var_167_bool; object var_168_object; float var_169_float; float var_170_float; bool var_171_bool; bool var_172_bool;
	var_139_object = var_168_object;
	var_140_float = var_169_float;
	var_141_float = var_170_float;
	var_142_bool = var_171_bool;
	var_143_bool = var_172_bool;
	bool var_150_bool;
	func_1177(var_149_bool, var_150_bool, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool);
	var_167_bool = var_150_bool;
	if(var_2_bool != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_150_bool = var_138_bool;
	
}


void func_55(int var_0_int, int var_1_int, object var_4_object, bool var_20_bool)
{
	if(var_4_object == null)
		var_20_bool = false;
	float var_24_float;
	func_1508(var_24_float, var_4_object);
	float var_22_float = sqrt(var_24_float);
	if(var_2_bool != 0)
		var_22_float -= var_1_int;
	var_20_bool = var_22_float < var_0_int;
}


// @pe
void func_2104(bool var_18_bool, object var_19_object)
{
	object var_21_object;
	var_19_object = var_21_object;
	bool var_20_bool;
	func_1669(var_20_bool, var_21_object);
	var_20_bool = var_18_bool;
}


// @pe
void func_2111(object var_55_object)
{
	object var_56_object;
	var_55_object = var_56_object;
	TaskCall(2);
	func_384(var_56_object, true);
	TaskReturn();
}


void func_1628(bool var_45_bool, object var_46_object)
{
	bool var_48_bool;
	var_46_object->IsDead(var_48_bool);
	var_48_bool = var_45_bool;
}


void func_93(void)
{
	int var_36_int; int var_37_int; bool var_38_bool; float var_39_float; bool var_40_bool;
	@WaitForAnimEnd();
	bool var_41_bool;
	func_1830(var_41_bool);
	if(!var_41_bool) //@nz
		return 14;
	int var_43_int;
	func_2011(var_43_int);
	int var_34_int;
	var_43_int = var_34_int;
	int var_35_int = 0;
	
	for(;;) {
		bool var_56_bool = false;
		if(var_35_int < 5) {
			bool var_59_bool;
			func_1830(var_59_bool);
			if(var_59_bool != 0)
				var_56_bool = true;
		}
		if(var_56_bool != 0) {
			@irand(var_36_int, 3);
			if(var_36_int == 0) {
				if(var_34_int == 0) goto Label_140;
				@irand(var_37_int, var_34_int);
				string var_65_string; int var_66_int;
				var_37_int = var_66_int;
				func_2004(var_65_string, var_66_int);
				@PlayAnimation("all", var_65_string);
				@WaitForAnimEnd(var_38_bool);
				if(!var_38_bool) { //@nz
				} else {
			} else {
			if(var_36_int == 1) {
				@rand(var_39_float, 4);
				@Sleep((var_39_float + 1), var_40_bool);
				if(!var_40_bool) { //@nz
					goto Label_169;
				}
			} else if(var_35_int != 0) {
				goto Label_169;
			}
			}
					bool var_68_bool;
					func_172(var_68_bool);
					var_69_bool = !var_68_bool; //@nz
					if(var_69_bool == 0) goto Label_164;
			}
		}
	Label_169:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_164:
		@ResetAAS();
		var_35_int += 1;
	}
	
}


void func_1633(bool var_34_bool, object var_35_object)
{
	if(var_35_object == null) {
		var_34_bool = false;
		return 4;
	}
	bool var_41_bool = false;
	var_44_bool = IsFuncExist(var_35_object, "IsDead", 1);
	if(var_44_bool != 0) {
		bool var_45_bool; object var_46_object;
		var_35_object = var_46_object;
		func_1628(var_45_bool, var_46_object);
		if(var_45_bool != 0)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		var_34_bool = false;
		return 4;
	}
	object var_38_object;
	@GetScene(var_38_object);
	if(var_38_object == null) {
		var_34_bool = false;
		return 4;
	}
	object var_39_object;
	var_35_object->GetScene(var_39_object);
	if(var_38_object != var_39_object) {
		var_34_bool = false;
		return 4;
	}
	var_34_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1135(bool var_2_bool)
{
	@KillTimer(1);
	if(var_2_bool != 0) {
		var_2_bool = false;
		@UnlookAsync("head");
	}
	func_1301(var_17_object);
}


void func_639(int var_1_int, bool var_2_bool, object var_4_object)
{
	bool var_97_bool; bool var_98_bool; cvector var_99_cvector;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_97_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_97_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_98_bool, ("attack" + (var_2_bool + 1)));
			if(!var_98_bool) //@nz
				break;
			var_2_bool += 1;
		}
		@GetAnimationOffset(var_99_cvector, "all", "bjump");
		var_113_float = GetByIndex(var_99_cvector, 2);
		var_4_object = -var_113_float;

	}
}


void func_1669(bool var_30_bool, object var_31_object)
{
	object var_35_object;
	var_31_object = var_35_object;
	bool var_34_bool;
	func_1633(var_34_bool, var_35_object);
	if(!var_34_bool) { //@nz
		var_30_bool = false;
		return 2;
	}
	bool var_52_bool; object var_53_object;
	func_1521(var_52_bool, var_53_object, "noaccess");
	if(!var_52_bool) { //@nz
		var_30_bool = true;
		return 2;
	}
	int var_33_int;
	var_53_object->GetProperty("noaccess", var_33_int);
	var_30_bool = var_33_int == 0;
}


void func_1177(int var_0_int, int var_1_int, bool var_167_bool, object var_168_object, float var_169_float, float var_170_float, bool var_171_bool, bool var_172_bool)
{
	bool var_181_bool; object var_183_object; cvector var_184_cvector; cvector var_185_cvector; float var_187_float; object var_188_object;
	var_0_int = false;
	var_1_int = var_168_object;
	bool var_182_bool;
	var_172_bool = var_182_bool;
	
	for(;;) {
		bool var_189_bool; object var_190_object;
		var_168_object = var_190_object;
		func_1317(var_189_bool, var_190_object);
		if(!var_189_bool) { //@nz
			var_167_bool = false;
			return 16;
		}
		var_168_object->GetPosition(var_184_cvector);
		@GetPosition(var_185_cvector);
		var_187_float = (var_184_cvector - var_185_cvector) | (var_184_cvector - var_185_cvector);
		bool var_194_bool = false;
		if(var_170_float > 0) {
			if(var_187_float > (var_170_float * var_170_float))
				var_194_bool = true;
		}
		if(var_194_bool != 0) {
			@Stop();
			var_167_bool = false;
			return 16;
		}
		if(var_187_float > (var_169_float * var_169_float)) {
			var_168_object->GetPFPosition(var_184_cvector);
			@FindPathTo(var_188_object, var_184_cvector);
			if(var_188_object != null) {
				var_188_object = var_183_object;
				var_188_object = null;
			}
			if(var_183_object != null) {
				if(var_182_bool == 0) goto Label_1230;
				var_182_bool = false;
				@RotatePath(var_183_object, var_181_bool);
				if(!var_181_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_207_string;
						func_1324(var_207_string);
						string var_208_string;
						func_1326(var_208_string);
						@FollowPath(var_183_object, var_171_bool, var_181_bool, var_207_string, var_208_string);
						if(!var_181_bool) { //@nz
							if(var_0_int == 0) goto Label_1249;
							var_183_object = null;
						}
					EMIT "GOTO 0x4e2";

					Label_1249:
						} else {
					var_183_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_181_bool);
					if(!var_181_bool) { //@nz
						if(var_0_int != 0) {
							var_183_object = null;
							goto Label_1277;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1277;
		}
			var_188_object = null;
			goto Label_1275;

		Label_1275:
			var_183_object = null;

		}
	Label_1277:
		for(;;) {
			var_167_bool = !var_0_int;
			return 16;

			}
	}
	
}


void func_1693(object var_34_object)
{
	string var_48_string;
	if(var_34_object == null)
		return 14;
	bool var_42_bool;
	@IsDead(var_42_bool);
	if(var_42_bool != 0)
		return 14;
	int var_43_int;
	@GetSecondaryAnimationType(var_43_int);
	if(var_43_int < 0)
		return 14;
	cvector var_44_cvector;
	var_34_object->GetPosition(var_44_cvector);
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	cvector var_46_cvector;
	@GetDirection(var_46_cvector);
	cvector var_47_cvector = var_45_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_47_cvector, 0);
	var_54_float = GetByIndex(var_46_cvector, 0);
	var_56_float = GetByIndex(var_47_cvector, 2);
	var_57_float = GetByIndex(var_46_cvector, 2);
	if(((var_53_float * var_54_float) + (var_56_float * var_57_float)) >= 0)
		var_48_string = "fhit";
	else
		var_48_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_48_string + "1"), (var_48_string + "2"), -10);
	
}


void func_674(int var_0_int, float var_393_float, int var_394_int)
{
	object var_398_object; float var_399_float; float var_400_float;
	@GetVictim((var_393_float * 0.9), var_398_object);
	@ReportAttack(var_0_int);
	if(var_398_object == var_0_int) {
		float var_404_float; object var_405_object; int var_406_int;
		var_398_object = var_405_object;
		var_394_int = var_406_int;
		func_404(var_406_int);
		var_404_float = var_399_float;
		float var_407_float; object var_408_object; float var_409_float; int var_410_int;
		var_398_object = var_408_object;
		int var_411_int; object var_412_object; int var_413_int;
		var_398_object = var_412_object;
		var_394_int = var_413_int;
		func_407(var_413_int);
		var_411_int = var_410_int;
		func_1555(var_407_float, var_408_object, var_409_float, var_410_int);
		var_407_float = var_400_float;
		int var_468_int;
		func_1057(var_468_int);
		@ReportHit(var_0_int, var_468_int, var_400_float, var_409_float);
		object var_469_object; float var_470_float;
		var_398_object = var_469_object;
		var_400_float = var_470_float;
		func_1064();
	}
}
EMIT "Stack[-3] = 0";


void func_172(bool var_68_bool)
{
	var_68_bool = true;
}


// @pe
void func_174(object var_24_object)
{
	func_2047();
	object var_33_object;
	func_227(var_26_cvector, var_27_bool, var_33_object, var_33_object);
}


void func_197(int var_0_int, cvector var_31_cvector, float var_32_float)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector;
	var_0_int->GetPosition(var_40_cvector); //@t
	cvector var_41_cvector;
	@GetDirection(var_41_cvector);
	cvector var_45_cvector;
	cvector var_47_cvector;
	func_1893(var_47_cvector, (var_39_cvector - var_40_cvector));
	func_1893(var_45_cvector, (var_47_cvector + (var_41_cvector * 0.75)));
	cvector var_42_cvector;
	var_45_cvector = var_42_cvector;
	cvector var_43_cvector;
	float var_44_float;
	@FindLongestDir(var_43_cvector, var_44_float, var_42_cvector, var_32_float, 32, 7000.0);
	if((var_44_float - 100) < 0)
		var_44_float = 0;
	var_31_cvector = var_43_cvector * var_44_float;
}


void func_713(int var_0_int, int var_1_int, bool var_356_bool, float var_357_float)
{
	string var_365_string;
	func_1052(var_365_string);
	int var_362_int;
	@irand(var_362_int, var_1_int);
	@Face(var_0_int);
	@SetAttackState(true);
	func_1993();
	@PlayAnimation("all", ("attack_begin" + (var_362_int + 1)));
	@WaitForAnimEnd();
	int var_364_int;
	func_1020(var_364_int, var_365_string);
	bool var_390_bool;
	func_1669(var_390_bool, var_0_int);
	if(!var_390_bool) { //@nz
		@StopAsync();
		var_356_bool = false;
		return 8;
	}
	float var_393_float; int var_394_int;
	var_357_float = var_393_float;
	var_362_int = var_394_int;
	func_674(var_365_string, var_393_float, var_394_int);
	bool var_363_bool;
	@HasAnimation(var_363_bool, "all", ("attack_middle" + var_362_int));
	if(var_363_bool != 0) {
		func_1993();
		@PlayAnimation("all", ("attack_middle" + var_362_int));
		@WaitForAnimEnd();
		func_1052(var_365_string);
		bool var_478_bool;
		func_1669(var_478_bool, var_0_int);
		if(!var_478_bool) { //@nz
			@StopAsync();
			var_356_bool = false;
			return 8;
		}
		float var_481_float; int var_482_int;
		var_357_float = var_481_float;
		func_674(var_365_string, var_481_float, var_482_int);
		var_364_int = 1;

		for(;;) {
			var_365_string = (("attack_middle" + var_482_int) + "_") + var_364_int;
			@HasAnimation(var_363_bool, "all", var_365_string);
			if(!var_363_bool) { //@nz
			} else {
				func_1993();
				@PlayAnimation("all", var_365_string);
				@WaitForAnimEnd();
				func_1052(var_365_string);
				bool var_504_bool;
				func_1669(var_504_bool, var_0_int);
				if(!var_504_bool) { //@nz
					@StopAsync();
					var_356_bool = false;
					return 8;
				}
				float var_507_float; int var_508_int;
				var_357_float = var_507_float;
				var_362_int = var_508_int;
				func_674(var_365_string, var_507_float, var_508_int);
				var_364_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_362_int));
		bool var_493_bool;
		func_1066(var_493_bool);
		if(var_493_bool != 0) {
			bool var_494_bool;
			func_850(var_494_bool, 0.75);
			@StopAsync();
		}
		var_356_bool = true;
		return 8;

	}
}


void func_1737(object var_21_object, int var_22_int, float var_23_float)
{
	cvector var_33_cvector; object var_34_object; int var_35_int; bool var_36_bool; cvector var_37_cvector; cvector var_38_cvector;
	bool var_42_bool = false;
	bool var_43_bool = false;
	if(var_21_object != 0) {
		if(var_22_int != 4)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		if(var_22_int != 5)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		cvector var_49_cvector; cvector var_50_cvector;
		cvector var_51_cvector; object var_52_object;
		var_21_object = var_52_object;
		func_1501(var_51_cvector, var_52_object);
		var_51_cvector = var_50_cvector;
		func_1893(var_49_cvector, var_50_cvector);
		var_49_cvector = var_33_cvector;
		@CreateVectorVector(var_34_object);
		var_35_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_35_int), var_36_bool, var_37_cvector, var_38_cvector);
			if(!var_36_bool) { //@nz
				break;
			Label_1799:
				var_34_object = null;
	}
			object var_111_object;
			var_21_object = var_111_object;
			func_1693(var_111_object);
		}
		if((var_38_cvector | var_33_cvector) >= 0.70710677)
			var_34_object->add(var_37_cvector);
		var_35_int += 1;
	}
	int var_39_int;
	var_34_object->size(var_39_int);
	if(var_39_int == 0) goto Label_1799;
	int var_40_int;
	@irand(var_40_int, var_39_int);
	cvector var_41_cvector;
	var_34_object->get(var_41_cvector, var_40_int);
	object var_66_object; int var_67_int; float var_68_float; cvector var_69_cvector; cvector var_70_cvector;
	var_21_object = var_66_object;
	var_22_int = var_67_int;
	var_23_float = var_68_float;
	var_41_cvector = var_69_cvector;
	var_70_cvector = -var_33_cvector;
	func_1805(var_68_float, var_69_cvector, var_70_cvector);
}


void func_227(int var_0_int, int var_1_int, bool var_2_bool, object var_33_object)
{
	float var_40_float; cvector var_42_cvector; float var_43_float;
	cvector var_44_cvector;
	func_197(var_43_float, var_44_cvector, 1.7453294);
	cvector var_39_cvector;
	var_44_cvector = var_39_cvector;
	if((var_39_cvector | var_39_cvector) < 2500.0) {
		cvector var_76_cvector;
		func_197(var_43_float, var_76_cvector, 2.6179938);
		var_76_cvector = var_39_cvector;
		var_40_float = var_39_cvector | var_39_cvector;
		if(var_40_float < 2500.0) {
			var_81_float = sqrt(var_40_float);
			@Trace("Can't retreat, distance: " + var_81_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_84_float = GetByIndex(var_39_cvector, 0);
	var_85_float = GetByIndex(var_39_cvector, 2);
	@Rotate(var_84_float, var_85_float);
	cvector var_86_cvector;
	func_1496(var_86_cvector);
	@SetTimer(120, 0.5);
	
Label_269:
	bool var_41_bool;
	@MovePoint((var_86_cvector + var_39_cvector), 1, var_41_bool);
	if(var_41_bool != 0) {
		if(var_33_object == null) {
			goto Label_299;
		EMIT "GOTO 0x129";

		Label_299:
			for(;;) {
				return 10;
		}
			cvector var_94_cvector;
			func_197(var_43_float, var_94_cvector, 2.6179938);
			var_94_cvector = var_42_cvector;
			if((var_42_cvector | var_42_cvector) >= 2500.0) {
				cvector var_98_cvector;
				func_1496(var_98_cvector);
				var_1_int = var_98_cvector + var_42_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_269; //@nz

	}
}


// @pe
void func_1279(int var_0_int, int var_1_int, int var_25_int)
{
	if(var_25_int != 0)
		return 0;
	bool var_28_bool;
	func_1317(var_28_bool, var_1_int);
	if(!var_28_bool) //@nz
		var_0_int = true;
	@KillTimer(0);
	@Stop();
}


void func_1805(object var_23_object, cvector var_26_cvector, cvector var_27_cvector)
{
	object var_30_object;
	@GetScene(var_30_object);
	object var_31_object;
	@AddActorByType(var_31_object, "scripted", var_30_object, var_26_cvector, var_27_cvector, "blood_dir.xml");
	object var_34_object;
	var_23_object = var_34_object;
	func_1693(var_34_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1301(int var_0_int)
{
	var_0_int = true;
	@KillTimer(0);
	@Stop();
}


void func_1819(object var_241_object)
{
	cvector var_245_cvector;
	var_241_object->GetPosition(var_245_cvector);
	cvector var_246_cvector;
	@GetPosition(var_246_cvector);
	cvector var_247_cvector = var_245_cvector - var_246_cvector;
	var_248_float = GetByIndex(var_247_cvector, 0);
	var_249_float = GetByIndex(var_247_cvector, 2);
	@RotateAsync(var_248_float, var_249_float);
}


// @pe
void func_1317(bool var_28_bool, object var_29_object)
{
	object var_31_object;
	var_29_object = var_31_object;
	bool var_30_bool;
	func_1669(var_30_bool, var_31_object);
	var_30_bool = var_28_bool;
}


void func_1830(bool var_20_bool)
{
	bool var_22_bool;
	@IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
}


void func_1835(object var_21_object)
{
	float var_24_float;
	var_21_object->GetEyesHeight(var_24_float);
	cvector var_25_cvector = [0.0, 0.0, 0.0];
	var_26_float = GetByIndex(var_25_cvector, 1);
	var_24_float = var_26_float;
	SetByIndex(var_25_cvector, 1) = var_26_float;
	@LookAsync(var_21_object, "head", var_25_cvector);
}


void func_1324(string var_207_string)
{
	var_207_string = "walk";
}


void func_1326(string var_208_string)
{
	var_208_string = "run";
}


// @pe
void func_1328(object var_66_object)
{
	object var_67_object;
	var_66_object = var_67_object;
	func_1334(var_67_object);
}


void func_1846(string var_91_string)
{
	bool var_100_bool; int var_101_int; bool var_102_bool; int var_103_int; bool var_104_bool; float var_105_float; cvector var_106_cvector; cvector var_107_cvector;
	@IsExisting3DSound(var_100_bool, var_91_string);
	if(!var_100_bool) { //@nz
		var_101_int = 0;

		for(;;) {
			@IsExisting3DSound(var_102_bool, (var_91_string + (var_101_int + 1)));
			if(!var_102_bool) { //@nz
				break;
			Label_1866:
				@irand(var_103_int, var_101_int);
				var_91_string += (var_103_int + 1);
	}
			@Is3DSoundLoaded(var_104_bool, var_91_string);
			if(var_104_bool != 0) {
				@GetEyesHeight(var_105_float);
				@GetDirection(var_106_cvector);
				var_107_cvector = var_106_cvector * 50;
				var_118_float = GetByIndex(var_107_cvector, 1);
				SetByIndex(var_107_cvector, 1) = (var_118_float + var_105_float);
				@PlayGlobalSound(var_91_string, var_107_cvector);
			}
		}
		var_101_int += 1;
	}
	var_113_bool = !var_101_int; //@nz
	if(var_113_bool == 0) goto Label_1866;
}


// @pe
void func_1334(object var_67_object)
{
	object var_68_object;
	var_67_object = var_68_object;
	func_1359(var_68_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1359(object var_68_object)
{
	cvector var_79_cvector; cvector var_80_cvector; cvector var_81_cvector; cvector var_82_cvector; string var_83_string; object var_84_object; bool var_85_bool; bool var_86_bool; float var_87_float; cvector var_88_cvector;
	if(var_68_object == null) {
		func_1450("fdie");
	} else {
		var_68_object->GetPosition(var_79_cvector);
		@GetPosition(var_80_cvector);
		@GetDirection(var_81_cvector);
		var_82_cvector = var_80_cvector - var_79_cvector;
		var_122_float = GetByIndex(var_82_cvector, 0);
		var_123_float = GetByIndex(var_81_cvector, 0);
		var_125_float = GetByIndex(var_82_cvector, 2);
		var_126_float = GetByIndex(var_81_cvector, 2);
		if(((var_122_float * var_123_float) + (var_125_float * var_126_float)) >= 0)
			var_83_string = "fdie";
		else
			var_83_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_68_object = var_84_object;
		var_133_bool = IsFuncExist(var_68_object, "GetScriptProperty", 2);
		if(var_133_bool != 0) {
			var_68_object->HasScriptProperty(var_85_bool, "Owner");
			if(var_85_bool != 0) {
				var_68_object->GetScriptProperty(var_84_object, "Owner");
				if(var_84_object == null)
					var_68_object = var_84_object;
			}
		}
		var_140_bool = IsFuncExist(var_84_object, "@GetEyesHeight", 1);
		if(var_140_bool != 0) {
			var_84_object->GetEyesHeight(var_87_float);
			var_88_cvector = [0.0, 0.0, 0.0];
			var_141_float = GetByIndex(var_88_cvector, 1);
			var_87_float = var_141_float;
			SetByIndex(var_88_cvector, 1) = var_141_float;
			@LookAsync(var_68_object, "head", var_88_cvector);
			var_86_bool = true;
		} else {
			var_86_bool = false;

		}
		string var_143_string;
		var_83_string = var_143_string;
		func_1846(var_143_string);
		@PlayAnimation("all", var_83_string);
		@WaitForAnimEnd();
		if(var_86_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_83_string);
		@RemoveEnvelope();
		var_84_object = null;
	}
	
}


void func_850(bool var_494_bool, float var_495_float)
{
	float var_498_float; bool var_499_bool;
	@rand(var_498_float);
	if(var_498_float < var_495_float) {

		for(;;) {
			@IsAnimationPlaying(var_499_bool);
			if(!var_499_bool) { //@nz
			} else {
				bool var_502_bool;
				func_948(var_502_bool);
				if(var_502_bool != 0) {
					var_494_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_494_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1052(var_499_bool);
}


void func_1887(object var_63_object)
{
	object var_65_object;
	@self(var_65_object);
	var_65_object = var_63_object;
}
EMIT "Stack[-1] = 0";


void func_352(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1893(cvector var_49_cvector, cvector var_50_cvector)
{
	float var_58_float = sqrt(var_50_cvector | var_50_cvector);
	if(var_58_float < 0.000001)
		var_49_cvector = [0.0, 0.0, 0.0];
	var_49_cvector = var_50_cvector / var_58_float;
}


void func_877(int var_0_int, bool var_295_bool, float var_296_float)
{
	bool var_302_bool; cvector var_303_cvector; cvector var_304_cvector; cvector var_305_cvector; float var_306_float;
	
	for(;;) {
		@IsAnimationPlaying(var_302_bool);
		if(!var_302_bool) //@nz
			break;
		bool var_308_bool;
		func_948(var_308_bool);
		if(var_308_bool != 0) {
			var_295_bool = true;
			return 10;
		}
		bool var_351_bool;
		func_1669(var_351_bool, var_0_int);
		if(!var_351_bool) { //@nz
			var_295_bool = false;
			return 10;
		}
		var_0_int->GetPFPosition(var_303_cvector); //@t
		@GetPFPosition(var_304_cvector);
		var_305_cvector = var_303_cvector - var_304_cvector;
		var_306_float = var_305_cvector | var_305_cvector;
		if(var_306_float < (var_296_float * var_296_float)) {
			bool var_356_bool; float var_357_float;
			var_296_float = var_357_float;
			func_713(var_305_cvector, var_306_float, var_356_bool, var_357_float);
			var_295_bool = true;
			return 10;
		}
		@sync();
	}
	func_1052(var_306_float);
	var_295_bool = false;
}


// @pe
void func_1903(float var_445_float, float var_446_float, float var_447_float)
{
	if(var_446_float < var_447_float)
		var_446_float = var_445_float;
	else
		var_447_float = var_445_float;
	
}


void func_368(int var_0_int, bool var_69_bool)
{
	cvector var_72_cvector;
	@GetDirection(var_72_cvector);
	cvector var_74_cvector;
	func_1501(var_74_cvector, var_0_int);
	cvector var_73_cvector;
	var_74_cvector = var_73_cvector;
	float var_80_float; cvector var_81_cvector; cvector var_82_cvector;
	var_72_cvector = var_81_cvector;
	var_73_cvector = var_82_cvector;
	func_1921(var_80_float, var_81_cvector, var_82_cvector);
	var_69_bool = var_80_float >= -0.34202012;
}


// @pe
void func_1910(float var_52_float, float var_53_float, float var_54_float, float var_55_float)
{
	if(var_53_float < var_54_float) {
		var_54_float = var_52_float;
		return 0;
	}
	if(var_53_float > var_55_float) {
		var_55_float = var_52_float;
		return 0;
	}
	var_53_float = var_52_float;
}


void func_384(object var_56_object, bool var_57_bool)
{
	object var_64_object; object var_65_object;
	@GetScene(var_65_object);
	object var_66_object;
	func_1887(var_66_object);
	var_65_object->RemoveStationaryActor(var_66_object);
	
	for(;;) {
		object var_69_object; bool var_70_bool;
		func_410(var_63_int, var_69_object, var_70_bool, var_64_object, var_65_object, var_69_object, var_70_bool, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


// @pe
void func_1921(float var_80_float, cvector var_81_cvector, cvector var_82_cvector)
{
	var_87_float = sqrt((var_81_cvector | var_81_cvector) * (var_82_cvector | var_82_cvector));
	var_80_float = (var_81_cvector | var_82_cvector) / var_87_float;
}


// @pe
void func_1929(bool var_23_bool, object var_24_object, float var_25_float)
{
	if(!var_24_object) { //@nz
		var_23_bool = false;
		return 0;
	}
	if(var_25_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_25_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_30_float;
		var_25_float = var_30_float;
		func_1974(var_30_float);
		bool var_34_bool; object var_35_object; float var_37_float;
		var_24_object = var_35_object;
		var_25_float = var_37_float;
		func_1533(var_34_bool, var_35_object, "reputation", var_37_float, (float)0, (float)1);
		var_23_bool = true;
		return 0;

	}
	
	var_23_bool = false;
}


// @pe
void func_404(float var_404_float)
{
	var_404_float = 0.03;
}


// @pe
void func_407(int var_411_int)
{
	var_411_int = 0;
}


void func_920(int var_0_int, bool var_310_bool)
{
	cvector var_316_cvector; cvector var_317_cvector;
	bool var_321_bool;
	func_1669(var_321_bool, var_0_int);
	if(!var_321_bool) { //@nz
		var_310_bool = false;
		return 10;
	}
	bool var_324_bool;
	float var_320_float;
	func_1009(var_320_float, var_324_bool);
	if(var_324_bool != 0) {
		var_0_int->GetPFPosition(var_316_cvector); //@t
		@GetPFPosition(var_317_cvector);
		var_0_int->GetAttackDistance(var_320_float); //@t
		var_310_bool = ((var_316_cvector - var_317_cvector) | (var_316_cvector - var_317_cvector)) <= ((var_320_float + 50) * (var_320_float + 50));
		return 10;
	}
	var_310_bool = false;
}


void func_410(int var_0_int, bool var_3_bool, object var_5_object, object var_69_object, bool var_70_bool, float var_71_float, bool var_144_bool, bool var_236_bool)
{
	float var_83_float; cvector var_84_cvector; cvector var_85_cvector; bool var_87_bool; float var_90_float; cvector var_91_cvector; bool var_92_bool; float var_93_float;
	func_639(var_91_cvector, var_92_bool, var_93_float);
	var_5_object = 0;
	var_118_bool = IsFuncExist(var_69_object, "@GetAttackDistance", 1);
	if(var_118_bool != 0) {
		var_69_object->GetAttackDistance(var_83_float);
		var_83_float += 50;
	} else {
						var_71_float = var_83_float;
	}
	if(var_83_float >= 150)
		var_83_float = 150;
	var_3_bool = false;
	var_0_int = var_69_object;
	bool var_86_bool;
	@IsPlayerActor(var_0_int, var_86_bool);
	if(var_86_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_124_object;
		func_1887(var_124_object);
		@SendPlayerEnemy(var_69_object, var_124_object);
	}
	if(var_70_bool != 0)
		var_87_bool = false;
	else
		var_87_bool = true;

	
Label_450:
	for(;;) {
		bool var_127_bool = false;
		bool var_128_bool;
		func_1669(var_128_bool, var_0_int);
		if(var_128_bool != 0) {
			if(!var_3_bool) //@nz
				var_127_bool = true;
		}
		if(var_127_bool != 0) {
			func_1052(var_93_float);
			var_0_int->GetPFPosition(var_84_cvector); //@t
			@GetPFPosition(var_85_cvector);
			var_90_float = (var_84_cvector - var_85_cvector) | (var_84_cvector - var_85_cvector);
			if(var_90_float >= ((400.0 + var_83_float) * (400.0 + var_83_float))) {
				bool var_138_bool; float var_140_float;
				var_83_float = var_140_float;
				TaskCall(3);
				func_1072(var_146_bool, var_138_bool, var_0_int, var_140_float, 10000.0, true, false);
				TaskReturn();
				if(!var_144_bool) { //@nz
				} else {
					var_87_bool = false;
			} else {
			if(var_90_float >= (var_71_float * var_71_float)) {
				var_0_int->GetPFPosition(var_91_cvector); //@t
				@CanReachByPF(var_92_bool, var_91_cvector);
				if(!var_92_bool) { //@nz
					bool var_230_bool; float var_232_float;
					var_83_float = var_232_float;
					TaskCall(3);
					func_1072(var_238_bool, var_230_bool, var_0_int, var_232_float, 10000.0, true, false);
					TaskReturn();
					if(!var_236_bool) { //@nz
						goto Label_622;
					}
					var_87_bool = false;
					goto Label_450;
				}
				if(!var_87_bool) { //@nz
					func_1819(var_0_int);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1052(var_93_float);
					@StopAsync();
					var_87_bool = true;
					bool var_252_bool;
					func_1669(var_252_bool, var_0_int);
					if(!var_252_bool) { //@nz
						goto Label_622;
					}
				}
				@rand(var_93_float);
				bool var_255_bool;
				var_257_bool = var_93_float < 0.25;
				if(var_257_bool != 1) {
					bool var_258_bool;
					func_1009(true, var_258_bool);
					if(var_258_bool != 1)
						var_255_bool = false;
				}
				if(var_255_bool != 0) {
					@Face(var_0_int);
					func_1059();
					@PlayAnimation("all", "attack_stay");
					bool var_295_bool; float var_296_float;
					func_877(var_93_float, var_295_bool, var_296_float);
					@StopAsync();
				} else {
					@Face(var_0_int);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1052(var_93_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_513_bool;
					func_1009(var_93_float, var_513_bool);
					var_514_bool = !var_513_bool; //@nz
					if(var_514_bool == 0) goto Label_612;
					bool var_515_bool;
					func_1669(var_515_bool, var_0_int);
					if(!var_515_bool) { //@nz
						goto Label_622;
					}
					var_0_int->GetPFPosition(var_84_cvector); //@t
					@GetPFPosition(var_85_cvector);
					if(!(((var_84_cvector - var_85_cvector) | (var_84_cvector - var_85_cvector)) < (var_296_float * var_296_float))) goto Label_612;
					bool var_520_bool; float var_521_float;
					var_71_float = var_521_float;
					func_713(var_92_bool, var_93_float, var_520_bool, var_521_float);
					var_522_bool = !var_520_bool; //@nz
					if(var_522_bool == 0) goto Label_612;
					goto Label_622;
			}
				bool var_523_bool; float var_524_float;
				var_71_float = var_524_float;
				func_713(var_92_bool, var_93_float, var_523_bool, var_524_float);
				if(!var_523_bool) { //@nz
					goto Label_622;
				}
				var_87_bool = true;

			}
		Label_612:
			goto Label_621;
			}
			Label_621:
			}
		}
	Label_622:
		@WaitForAnimEnd();
		if(var_3_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_86_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_1450(string var_90_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_91_string;
	var_90_string = var_91_string;
	func_1846(var_91_string);
	@PlayAnimation("all", var_90_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_90_string);
	@RemoveEnvelope();
}


void func_1964(float var_463_float)
{
	object var_465_object;
	@CreateFloatVector(var_465_object);
	var_465_object->add(var_463_float);
	@SendWorldWndMessage(15, var_465_object);
}
EMIT "Stack[-1] = 0";


void func_948(bool var_308_bool)
{
	bool var_309_bool = false;
	bool var_310_bool;
	func_920(var_309_bool, var_310_bool);
	if(var_310_bool != 0) {
		bool var_327_bool;
		func_964(var_308_bool, var_309_bool, var_327_bool);
		if(var_327_bool != 0)
			var_309_bool = true;
	}
	if(var_309_bool != 0) {
		var_308_bool = true;
		return 0;
	}
	var_308_bool = false;
}


void func_1974(float var_30_float)
{
	object var_32_object;
	@CreateFloatVector(var_32_object);
	var_32_object->add(var_30_float);
	@SendWorldWndMessage(16, var_32_object);
}
EMIT "Stack[-1] = 0";


void func_1984(object var_20_object)
{
	bool var_22_bool;
	@IsPlayerActor(var_20_object, var_22_bool);
	if(var_22_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_964(int var_0_int, object var_4_object, bool var_327_bool)
{
	object var_333_object; float var_335_float; cvector var_336_cvector; cvector var_337_cvector;
	@GetScene(var_333_object);
	bool var_334_bool = false;
	
	for(;;) {
		cvector var_338_cvector;
		func_1501(var_338_cvector, var_0_int);
		var_344_int = -var_338_cvector;
		@FindDirLength(var_335_float, var_344_int, var_4_object);
		if(var_335_float < var_4_object) {
		} else {
				@Face(var_0_int);
				@PlayAnimation("all", "bjump");
				var_0_int->GetPFPosition(var_336_cvector); //@t
				@GetPFPosition(var_337_cvector);
				@WaitForAnimEnd();
				func_1052(var_337_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_334_bool = true;
				bool var_349_bool;
				func_920(var_337_cvector, var_349_bool);
				var_350_bool = !var_349_bool; //@nz
				if(var_350_bool == 0) goto Label_1005;
		}
		for(;;) {
			var_334_bool = var_327_bool;

		}

	Label_1005:
	}
}
EMIT "Stack[-5] = 0";


void func_1993(void)
{
	object var_369_object;
	@GetScene(var_369_object);
	object var_371_object;
	func_1887(var_371_object);
	@BroadcastMessage("battle", var_371_object, var_369_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1482(string var_435_string, int var_436_int)
{
	if(var_436_int == 2) {
		var_435_string = "fire";
		return 0;
	EMIT "GOTO 0x5d6";
	}
	if(var_436_int == 1) {
		var_435_string = "bullet";
		return 0;
	}
	var_435_string = "phys";
}


void func_2004(string var_49_string, int var_50_int)
{
	string var_52_string = "idle";
	if(var_50_int != 0)
		var_52_string += var_50_int;
	var_52_string = var_49_string;
}


void func_1496(cvector var_89_cvector)
{
	cvector var_91_cvector;
	@GetPosition(var_91_cvector);
	var_91_cvector = var_89_cvector;
}


void func_2011(int var_43_int)
{
	int var_46_int; bool var_47_bool;
	var_46_int = 0;
	
	for(;;) {
		string var_49_string; int var_50_int;
		var_46_int = var_50_int;
		func_2004(var_49_string, var_50_int);
		@HasAnimation(var_47_bool, "all", var_49_string);
		if(!var_47_bool) //@nz
			break;
		var_46_int += 1;
	}
	var_46_int = var_43_int;
}


void func_1501(cvector var_51_cvector, object var_52_object)
{
	cvector var_55_cvector;
	@GetPosition(var_55_cvector);
	cvector var_56_cvector;
	var_52_object->GetPosition(var_56_cvector);
	var_51_cvector = var_56_cvector - var_55_cvector;
}


void func_1508(float var_24_float, object var_25_object)
{
	cvector var_29_cvector;
	@GetPosition(var_29_cvector);
	cvector var_30_cvector;
	var_25_object->GetPosition(var_30_cvector);
	var_24_float = (var_30_cvector - var_29_cvector) | (var_30_cvector - var_29_cvector);
}


void func_1516(bool var_19_bool, object var_20_object)
{
	bool var_22_bool;
	@IsPlayerActor(var_20_object, var_22_bool);
	var_22_bool = var_19_bool;
}


void func_2028(int var_22_int)
{
	int var_24_int;
	@GetVariable("branch", var_24_int);
	var_24_int = var_22_int;
}


void func_1009(int var_0_int, bool var_258_bool)
{
	bool var_260_bool;
	var_263_bool = IsFuncExist(var_0_int, "IsAttacking", 1);
	if(var_263_bool != 0) {
		var_0_int->IsAttacking(var_260_bool); //@t
		var_260_bool = var_258_bool;
	}
	var_258_bool = false;
}


// @pe
void func_2034(object var_21_object)
{
	int var_22_int;
	func_2028(var_22_int);
	if(var_22_int == 1)
		@WorkWithCorpse(var_21_object);
	else
		@Barter(var_21_object);
	
}


void func_1521(bool var_42_bool, object var_43_object, string var_44_string)
{
	var_49_bool = IsFuncExist(var_43_object, "HasProperty", 2);
	if(!var_49_bool) { //@nz
		var_42_bool = false;
		return 2;
	}
	bool var_46_bool;
	var_43_object->HasProperty(var_44_string, var_46_bool);
	var_46_bool = var_42_bool;
}


void func_1020(bool var_2_bool, object var_5_object)
{
	int var_378_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_5_object != 0) {
		if((var_5_object + -1) > 0)
			return 4;
	}
	float var_377_float;
	@rand(var_377_float);
	float var_384_float;
	func_1070(var_384_float);
	if(var_377_float < var_384_float) {
		@irand(var_378_int, var_2_bool);
		@Speak("attack" + (var_378_int + 1));
		int var_389_int;
		func_1068(var_389_int);
		var_5_object = var_389_int;
	}
}


void func_1533(bool var_34_bool, object var_35_object, string var_36_string, float var_37_float, float var_38_float, float var_39_float)
{
	object var_43_object;
	var_35_object = var_43_object;
	string var_44_string;
	var_36_string = var_44_string;
	bool var_42_bool;
	func_1521(var_42_bool, var_43_object, var_44_string);
	if(!var_42_bool) //@nz
		var_34_bool = false;
	float var_41_float;
	var_35_object->GetProperty(var_36_string, var_41_float);
	float var_52_float; float var_54_float; float var_55_float;
	var_38_float = var_54_float;
	var_39_float = var_55_float;
	func_1910(var_52_float, (var_41_float + var_37_float), var_54_float, var_55_float);
	var_35_object->SetProperty(var_36_string, var_52_float);
	var_34_bool = true;
}


void func_2047(void)
{
	object var_62_object;
	@GetScene(var_62_object);
	object var_63_object;
	func_1887(var_63_object);
	var_62_object->RemoveStationaryActor(var_63_object);
}
EMIT "Stack[-1] = 0";


