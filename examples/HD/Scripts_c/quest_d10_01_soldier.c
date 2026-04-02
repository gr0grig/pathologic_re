// @GLOBALS: 0:object:

task task_0
{
	// @pe
	void OnTrigger(string name, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, bool var_7_bool)
	{
		if(var_7_bool == "cleanup") {
			object var_10_object;
			func_1342(var_10_object);
			@RemoveActor(var_10_object);
			@Hold();
		}
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, bool var_6_bool)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, bool var_7_bool)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			object var_11_object;
			var_7_bool = var_11_object;
			func_1482(var_11_object);
		}
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, bool var_7_bool)
	{
	}

}


task task_2
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, bool var_7_bool)
	{
		func_214();
		object var_9_object;
		var_7_bool = var_9_object;
		func_1647();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, bool var_7_bool)
	{
		if(var_7_bool == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, bool var_7_bool)
	{
		if(var_7_bool == actor) {
			@SetTimer(100, 3.0);
			func_1165(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, object var_96_object)
		{
		object var_98_object;
		var_96_object = var_98_object;
			bool var_97_bool;
		func_1015(var_97_bool, var_98_object);
		if(!var_97_bool) { //@nz
			object var_126_object;
			var_96_object = var_126_object;
			func_1819(var_126_object);
		}
		func_214();
		object var_142_object;
		var_96_object = var_142_object;
		func_1843(var_142_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool)
	{
		object var_11_object;
		var_7_cvector = var_11_object;
		object var_12_object;
		var_8_cvector = var_12_object;
		bool var_13_bool;
		var_9_bool = var_13_bool;
		bool var_10_bool;
		func_1962(var_10_bool, var_11_object, var_12_object, var_13_bool);
		if(var_10_bool != 0) {
			object var_96_object;
			var_7_cvector = var_96_object;
			func_252();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, bool var_7_bool)
	{
		object var_9_object;
		var_7_bool = var_9_object;
		bool var_8_bool;
		func_1934(var_8_bool, var_9_object);
		if(var_8_bool != 0) {
			func_214();
			object var_128_object;
			var_7_bool = var_128_object;
			func_1956(var_128_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, int var_1_int, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector, bool var_7_bool)
	{
		if(var_7_bool != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_3
{
	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, cvector var_5_cvector, cvector var_6_cvector, bool var_7_bool)
	{
		bool var_8_bool = false;
		if(var_2_object != 0) {
			if(var_7_bool == actor)
				var_8_bool = true;
		}
		if(var_8_bool != 0)
			func_1165(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, cvector var_5_cvector, cvector var_6_cvector, bool var_7_bool)
	{
		bool var_8_bool = false;
		if(var_2_object != 0) {
			if(var_7_bool == actor)
				var_8_bool = true;
		}
		if(var_8_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, object var_96_object)
		{
		object var_98_object;
		var_96_object = var_98_object;
			bool var_97_bool;
		func_1015(var_97_bool, var_98_object);
		if(!var_97_bool) //@nz
			return 0;
		object var_126_object;
		var_96_object = var_126_object;
		func_1819(var_126_object);
		if(var_96_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_96_object;
			if(var_2_object == 0) goto Label_637;
			@StopAnimation();
			@StopGroup0();
		}
	Label_637:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool)
	{
		object var_11_object;
		var_7_cvector = var_11_object;
		object var_12_object;
		var_8_cvector = var_12_object;
		bool var_13_bool;
		var_9_bool = var_13_bool;
		bool var_10_bool;
		func_1962(var_10_bool, var_11_object, var_12_object, var_13_bool);
		if(var_10_bool != 0) {
			object var_96_object;
			var_7_cvector = var_96_object;
			func_614();
		}
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, bool var_6_bool)
	{
		bool var_7_bool;
		func_1183(var_7_bool);
		if(!var_7_bool) { //@nz
			TaskCall(0);
			func_12();
			TaskReturn();
		}
		func_735();
	}

	void OnUse(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		var_10_object = GlobalVars[0];
		bool var_9_bool;
		var_10_object->in(var_9_bool, var_7_object);
		if(!var_9_bool) { //@nz
			object var_12_object;
			var_7_object = var_12_object;
			func_651();
		}
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		object var_9_object;
		if(var_7_string == "attack") {
			object var_12_object;
			func_877(var_12_object);
			var_12_object = var_9_object;
			func_842();
			object var_16_object;
			var_9_object = var_16_object;
			func_1843(var_16_object);
			var_9_object = null;
		} else if(var_7_string == "cleanup") {
			var_2_object = true;
		}
	
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_8_bool;
		func_1444(var_8_bool, "quest_d10_01", "soldier_fight");
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, bool var_6_bool, object var_7_object, object var_8_object, bool var_9_bool)
	{
	}

	void OnHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_10_bool; object var_11_object;
		func_1015(var_10_bool, var_11_object);
		if(!var_10_bool) //@nz
			return 2;
		var_45_object = GlobalVars[0];
		bool var_9_bool;
		var_45_object->in(var_9_bool, var_11_object);
		if(var_9_bool != 0) {
			func_842();
			object var_47_object;
			var_7_object = var_47_object;
			TaskCall(2);
			func_190(var_48_object, var_47_object);
			TaskReturn();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		object var_9_object;
		var_7_object = var_9_object;
		bool var_8_bool;
		func_1934(var_8_bool, var_9_object);
		if(var_8_bool != 0) {
			func_842();
			object var_127_object;
			var_7_object = var_127_object;
			func_1988(var_127_object);
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, bool var_6_bool, object var_7_object, int var_8_int, float var_9_float, float var_10_float)
{
	object var_11_object;
	var_7_object = var_11_object;
	int var_12_int;
	var_8_int = var_12_int;
	float var_13_float;
	var_9_float = var_13_float;
	func_1083(var_11_object, var_12_int, var_13_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, bool var_6_bool, object var_7_object, int var_8_int, float var_9_float, float var_10_float, cvector var_11_cvector, cvector var_12_cvector)
{
	object var_13_object;
	var_7_object = var_13_object;
	int var_14_int;
	var_8_int = var_14_int;
	float var_15_float;
	var_9_float = var_15_float;
	cvector var_16_cvector;
	var_11_cvector = var_16_cvector;
	cvector var_17_cvector;
	var_12_cvector = var_17_cvector;
	func_1151(var_15_float, var_16_cvector, var_17_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, bool var_6_bool, object var_7_object, string var_8_string)
{
	float var_10_float;
	if(var_8_string == "health") {
		@GetProperty("health", var_10_float);
		if(var_10_float <= 0)
			@SignalDeath(var_7_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, bool var_6_bool, object var_7_object)
{
	bool var_8_bool; object var_9_object;
	func_884(var_8_bool, var_9_object);
	if(var_8_bool != 0) {
		object var_12_object;
		func_1342(var_12_object);
		@ReportReputationChange(var_9_object, var_12_object, 0.0, true);
	}
	object var_17_object;
	var_7_object = var_17_object;
	func_2008(var_17_object);
}


void OnUnload(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, bool var_6_bool)
{
	object var_7_object;
	func_1342(var_7_object);
	@RemoveActor(var_7_object);
	@Hold();
}


void func_1665(bool var_16_bool, object var_17_object, bool var_18_bool)
{
	bool var_21_bool; object var_22_object;
	func_889(var_21_bool, var_22_object, "class");
	if(!var_21_bool) { //@nz
		var_16_bool = false;
		return 2;
	}
	string var_20_string;
	var_22_object->GetProperty("class", var_20_string);
	bool var_32_bool = true;
	bool var_33_bool = true;
	bool var_34_bool = true;
	bool var_35_bool = true;
	bool var_36_bool = true;
	bool var_37_bool = true;
	bool var_38_bool = true;
	bool var_39_bool = true;
	bool var_40_bool = true;
	bool var_41_bool = true;
	var_43_bool = var_20_string == "patrol";
	if(var_43_bool != 1) {
		var_45_bool = var_20_string == "sanitar";
		if(var_45_bool != 1)
			var_41_bool = false;
	}
	if(var_41_bool != 1) {
		var_47_bool = var_20_string == "soldier";
		if(var_47_bool != 1)
			var_40_bool = false;
	}
	if(var_40_bool != 1) {
		var_49_bool = var_20_string == "woman";
		if(var_49_bool != 1)
			var_39_bool = false;
	}
	if(var_39_bool != 1) {
		var_51_bool = var_20_string == "wasted_girl";
		if(var_51_bool != 1)
			var_38_bool = false;
	}
	if(var_38_bool != 1) {
		var_53_bool = var_20_string == "vaxxabitka";
		if(var_53_bool != 1)
			var_37_bool = false;
	}
	if(var_37_bool != 1) {
		var_55_bool = var_20_string == "vaxxabit";
		if(var_55_bool != 1)
			var_36_bool = false;
	}
	if(var_36_bool != 1) {
		var_57_bool = var_20_string == "little_girl";
		if(var_57_bool != 1)
			var_35_bool = false;
	}
	if(var_35_bool != 1) {
		var_59_bool = var_20_string == "girl";
		if(var_59_bool != 1)
			var_34_bool = false;
	}
	if(var_34_bool != 1) {
		var_61_bool = var_20_string == "dohodyaga";
		if(var_61_bool != 1)
			var_33_bool = false;
	}
	if(var_33_bool != 1) {
		var_63_bool = var_20_string == "nudegirl";
		if(var_63_bool != 1)
			var_32_bool = false;
	}
	if(var_32_bool != 0) {
		var_16_bool = true;
		return 2;
	}
	if(var_18_bool != 0) {
		var_16_bool = false;
		return 2;
	}
	var_16_bool = true;
	bool var_65_bool = true;
	bool var_66_bool = true;
	bool var_67_bool = true;
	bool var_68_bool = true;
	bool var_69_bool = true;
	var_71_bool = var_20_string == "worker";
	if(var_71_bool != 1) {
		var_73_bool = var_20_string == "butcher";
		if(var_73_bool != 1)
			var_69_bool = false;
	}
	if(var_69_bool != 1) {
		var_75_bool = var_20_string == "boy";
		if(var_75_bool != 1)
			var_68_bool = false;
	}
	if(var_68_bool != 1) {
		var_77_bool = var_20_string == "unosha";
		if(var_77_bool != 1)
			var_67_bool = false;
	}
	if(var_67_bool != 1) {
		var_79_bool = var_20_string == "wasted_male";
		if(var_79_bool != 1)
			var_66_bool = false;
	}
	if(var_66_bool != 1) {
		var_81_bool = var_20_string == "alkash";
		if(var_81_bool != 1)
			var_65_bool = false;
	}
	if(var_65_bool != 1) {
		var_83_bool = var_20_string == "morlok";
		if(var_83_bool != 1)
			var_16_bool = false;
	}
}


// @pe
void func_1410(float var_202_float, cvector var_203_cvector, cvector var_204_cvector)
{
	cvector var_206_cvector;
	var_203_cvector = var_206_cvector;
	cvector var_207_cvector;
	var_204_cvector = var_207_cvector;
	float var_205_float;
	func_1391(var_205_float, var_206_cvector, var_207_cvector);
	float var_214_float; cvector var_215_cvector;
	var_203_cvector = var_215_cvector;
	func_1400(var_214_float, var_215_cvector);
	float var_223_float; cvector var_224_cvector;
	var_204_cvector = var_224_cvector;
	func_1400(var_223_float, var_224_cvector);
	var_202_float = var_205_float / (var_214_float * var_223_float);
}


void func_901(float var_250_float, object var_251_object, float var_252_float, int var_253_int)
{
	int var_260_int; int var_262_int;
	object var_267_object;
	var_251_object = var_267_object;
	bool var_266_bool;
	func_889(var_266_bool, var_267_object, "health");
	if(!var_266_bool) //@nz
		var_250_float = 0.0;
	bool var_270_bool; object var_271_object;
	func_889(var_270_bool, var_271_object, "armor");
	if(!var_270_bool) //@nz
		var_260_int = 0;
	else
		var_271_object->GetProperty("armor", var_260_int);
	string var_275_string; int var_276_int;
	var_253_int = var_276_int;
	func_848(var_275_string, var_276_int);
	string var_261_string = "armor_" + var_275_string;
	bool var_281_bool; object var_282_object; string var_283_string;
	var_251_object = var_282_object;
	func_889(var_281_bool, var_282_object, var_283_string);
	if(!var_281_bool) //@nz
		var_262_int = 0;
	else
		var_251_object->GetProperty(var_283_string, var_262_int);

	float var_285_float;
	func_1362(var_285_float, ((var_260_int + var_262_int) / 100.0), (float)1);
	float var_263_float;
	var_285_float = var_263_float;
	float var_264_float;
	var_251_object->GetProperty("health", var_264_float);
	float var_265_float = var_252_float * (1 - var_263_float);
	float var_295_float;
	func_1369(var_295_float, (var_264_float - var_265_float), (float)0, (float)1);
	var_251_object->SetProperty("health", var_295_float);
	bool var_301_bool; object var_302_object;
	var_251_object = var_302_object;
	func_884(var_301_bool, var_302_object);
	if(var_301_bool != 0) {
		float var_303_float = -var_265_float;
		func_1427(var_303_float);
	}
	var_265_float = var_250_float;
	
}


void func_1543(void)
{
	int var_78_int;
	func_1476(var_78_int);
	if(var_78_int != 1) {
	}
	func_1526("liver");
	func_1526("kidney");
	func_1526("heart");
	func_1526("blood");
}


void func_1801(void)
{
	var_13_object = GlobalVars[0];
	object var_14_object;
	func_1385(var_14_object);
	var_14_object = var_13_object;
	GlobalVars[0] = var_13_object;
}


// @pe
void func_651(void)
{
	func_842();
}


void func_12(void)
{
	
Label_12:
	@Hold();
	bool var_11_bool;
	func_1183(var_11_bool);
	if(!var_11_bool) goto Label_12; //@nz
}


void func_1165(object var_326_object)
{
	cvector var_330_cvector;
	var_326_object->GetPosition(var_330_cvector);
	cvector var_331_cvector;
	@GetPosition(var_331_cvector);
	cvector var_332_cvector = var_330_cvector - var_331_cvector;
	var_333_float = GetByIndex(var_332_cvector, 0);
	var_334_float = GetByIndex(var_332_cvector, 2);
	@RotateAsync(var_333_float, var_334_float);
}


void func_1934(bool var_8_bool, object var_9_object)
{
	bool var_12_bool; object var_13_object;
	func_1015(var_12_bool, var_13_object);
	if(!var_12_bool) { //@nz
		var_8_bool = false;
		return 2;
	}
	var_47_object = GlobalVars[0];
	bool var_11_bool;
	var_47_object->in(var_11_bool, var_13_object);
	if(var_11_bool != 0) {
		var_8_bool = true;
		return 2;
	}
	bool var_49_bool; object var_50_object;
	var_9_object = var_50_object;
	func_1854(var_49_bool, var_50_object);
	var_49_bool = var_8_bool;
}


void func_1039(object var_24_object)
{
	string var_38_string;
	if(var_24_object == null)
		return 14;
	bool var_32_bool;
	@IsDead(var_32_bool);
	if(var_32_bool != 0)
		return 14;
	int var_33_int;
	@GetSecondaryAnimationType(var_33_int);
	if(var_33_int < 0)
		return 14;
	cvector var_34_cvector;
	var_24_object->GetPosition(var_34_cvector);
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	@GetDirection(var_36_cvector);
	cvector var_37_cvector = var_35_cvector - var_34_cvector;
	var_43_float = GetByIndex(var_37_cvector, 0);
	var_44_float = GetByIndex(var_36_cvector, 0);
	var_46_float = GetByIndex(var_37_cvector, 2);
	var_47_float = GetByIndex(var_36_cvector, 2);
	if(((var_43_float * var_44_float) + (var_46_float * var_47_float)) >= 0)
		var_38_string = "fhit";
	else
		var_38_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_38_string + "1"), (var_38_string + "2"), -10);
	
}


// @pe
void func_1808(object var_132_object, bool var_133_bool)
{
	object var_134_object;
	var_132_object = var_134_object;
	bool var_135_bool;
	var_133_bool = var_135_bool;
	TaskCall(3);
	func_310(var_136_object, var_137_object, var_138_bool, var_134_object, var_135_bool);
	TaskReturn();
	@ResetAAS();
}


void func_1427(float var_303_float)
{
	object var_305_object;
	@CreateFloatVector(var_305_object);
	var_305_object->add(var_303_float);
	if(var_303_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_305_object);
}
EMIT "Stack[-1] = 0";


void func_1176(float var_241_float, object var_242_object)
{
	float var_245_float;
	@GetEyesHeight(var_245_float);
	float var_246_float;
	var_242_object->GetEyesHeight(var_246_float);
	var_241_float = var_246_float - var_245_float;
}


// @pe
void func_25(object var_19_object)
{
	object var_21_object;
	var_19_object = var_21_object;
	bool var_20_bool;
	func_884(var_20_bool, var_21_object);
	if(var_20_bool != 0)
		func_1567();
	func_1543();
	object var_98_object;
	var_19_object = var_98_object;
	func_42(var_98_object);
}


void func_1819(object var_17_object)
{
	if(var_17_object == null) {
	}
	var_21_object = GlobalVars[0];
	bool var_19_bool;
	var_21_object->in(var_19_bool, var_17_object);
	if(!var_19_bool) { //@nz
		var_23_object = GlobalVars[0];
		var_23_object->add(var_17_object);
	}
	bool var_24_bool; object var_25_object;
	func_884(var_24_bool, var_25_object);
	if(var_24_bool != 0) {
		object var_28_object;
		func_1342(var_28_object);
		@ReportReputationChange(var_25_object, var_28_object, 0.0);
	}
}


// @pe
void func_158(string var_121_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_122_string;
	var_121_string = var_122_string;
	func_1214(var_122_string);
	@PlayAnimation("all", var_121_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_121_string);
	@RemoveEnvelope();
}


void func_1183(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1567(void)
{
	@ClearSubContainer(0);
	func_1495(500, 1000);
	func_1199("rifle_ammo", 1, 3, 3);
	func_1199("rusk", 1, 3, 2);
	func_1188("bandage", 1, 6);
	func_1188("tourniquet", 1, 6);
}


// @pe
void func_1956(object var_128_object)
{
	object var_129_object;
	var_128_object = var_129_object;
	func_1988(var_129_object);
}


void func_1444(bool var_8_bool, string var_9_string, string var_10_string)
{
	object var_12_object;
	@FindActor(var_12_object, var_9_string);
	if(var_12_object == null)
		var_8_bool = false;
	@Trigger(var_12_object, var_10_string);
	var_8_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1188(string var_66_string, int var_67_int, int var_68_int)
{
	bool var_70_bool;
	int var_72_int;
	var_67_int = var_72_int;
	int var_73_int;
	var_68_int = var_73_int;
	bool var_71_bool;
	func_1380(var_71_bool, var_72_int, var_73_int);
	if(var_71_bool != 0)
		@AddItem(var_70_bool, var_66_string, 0);
}


// @pe
void func_42(object var_98_object)
{
	object var_99_object;
	var_98_object = var_99_object;
	func_67(var_99_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1962(bool var_10_bool, object var_11_object, object var_12_object, bool var_13_bool)
{
	bool var_15_bool;
	object var_17_object;
	var_12_object = var_17_object;
	bool var_16_bool;
	func_1665(var_16_bool, var_17_object, !var_13_bool);
	if(var_16_bool != 0) {
		@CanSee(var_15_bool, var_11_object);
		bool var_84_bool = true;
		if(var_15_bool != 1) {
			float var_86_float; object var_87_object;
			var_11_object = var_87_object;
			func_869(var_86_float, var_87_object);
			var_95_bool = var_86_float <= 490000.0;
			if(var_95_bool != 1)
				var_84_bool = false;
		}
		if(var_84_bool != 0)
			var_10_bool = true;
	}
	var_10_bool = false;
}


void func_1199(string var_46_string, int var_47_int, int var_48_int, int var_49_int)
{
	int var_52_int; bool var_53_bool;
	int var_55_int;
	var_47_int = var_55_int;
	int var_56_int;
	var_48_int = var_56_int;
	bool var_54_bool;
	func_1380(var_54_bool, var_55_int, var_56_int);
	if(var_54_bool != 0) {
		@irand(var_52_int, var_49_int);
		@AddItem(var_53_bool, var_46_string, 0, (var_52_int + 1));
	}
}


void func_1456(object var_143_object)
{
	bool var_145_bool;
	@IsPlayerActor(var_143_object, var_145_bool);
	if(var_145_bool != 0)
		@PlayGlobalMusic("attack");
}


// @pe
void func_1843(object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_1819(var_17_object);
	object var_32_object;
	var_16_object = var_32_object;
	func_1808(var_32_object, true);
}


void func_310(object var_0_object, object var_1_object, object var_2_object, object var_134_object, bool var_135_bool)
{
	bool var_141_bool; bool var_142_bool;
	var_0_object = var_134_object;
	func_1456(var_0_object);
	func_1465();
	@Face(var_0_object);
	if(var_135_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_336:
	for(;;) {
		bool var_160_bool;
		func_1015(var_160_bool, var_0_object);
		if(var_160_bool != 0) {
			@CanSee(var_142_bool, var_0_object);
			if(var_142_bool != 0) {
				func_1456(var_0_object);
				func_490(var_142_bool);
			} else {
				func_1165(var_0_object);
				var_2_object = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_141_bool);
				if(!var_141_bool) { //@nz
					if(var_1_object != null)
						func_485(var_141_bool, var_142_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_336;
				}
				bool var_341_bool;
				func_1015(var_341_bool, var_0_object);
				if(!var_341_bool) { //@nz
				} else {
						@CanSee(var_142_bool, var_0_object);
						if(var_142_bool != 0) {
							var_2_object = false;
							@Face(var_0_object);
							func_490(var_142_bool);
							goto Label_432;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_141_bool);
						if(!var_141_bool) { //@nz
							if(var_1_object != null)
								func_485(var_141_bool, var_142_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_336;
						}
						bool var_355_bool;
						func_1015(var_355_bool, var_0_object);
						var_357_bool = !var_355_bool; //@nz
						if(var_357_bool == 0) goto Label_420;
				}
		}
		Label_442:
			for(;;) {
				@SetAttackState(false);
				@StopAsync();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();

			}

		Label_420:
			var_2_object = false;
			@CanSee(var_142_bool, var_0_object);
			if(var_142_bool != 0) {
				@Face(var_0_object);
				func_490(var_142_bool);
				goto Label_432;
			}
			goto Label_442;
		}
	Label_432:
		if(var_1_object != null)
			func_485(var_141_bool, var_142_bool);
		else
			@Sleep(2);

	}
	
}


void func_1465(void)
{
	object var_149_object;
	@GetScene(var_149_object);
	object var_151_object;
	func_1342(var_151_object);
	@BroadcastMessage("battle", var_151_object, var_149_object);
}
EMIT "Stack[-1] = 0";


void func_1083(object var_11_object, int var_12_int, float var_13_float)
{
	cvector var_23_cvector; object var_24_object; int var_25_int; bool var_26_bool; cvector var_27_cvector; cvector var_28_cvector;
	bool var_32_bool = false;
	bool var_33_bool = false;
	if(var_11_object != 0) {
		if(var_12_int != 4)
			var_33_bool = true;
	}
	if(var_33_bool != 0) {
		if(var_12_int != 5)
			var_32_bool = true;
	}
	if(var_32_bool != 0) {
		cvector var_39_cvector; cvector var_40_cvector;
		cvector var_41_cvector; object var_42_object;
		var_11_object = var_42_object;
		func_862(var_41_cvector, var_42_object);
		var_41_cvector = var_40_cvector;
		func_1348(var_39_cvector, var_40_cvector);
		var_39_cvector = var_23_cvector;
		@CreateVectorVector(var_24_object);
		var_25_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_25_int), var_26_bool, var_27_cvector, var_28_cvector);
			if(!var_26_bool) { //@nz
				break;
			Label_1145:
				var_24_object = null;
	}
			object var_101_object;
			var_11_object = var_101_object;
			func_1039(var_101_object);
		}
		if((var_28_cvector | var_23_cvector) >= 0.70710677)
			var_24_object->add(var_27_cvector);
		var_25_int += 1;
	}
	int var_29_int;
	var_24_object->size(var_29_int);
	if(var_29_int == 0) goto Label_1145;
	int var_30_int;
	@irand(var_30_int, var_29_int);
	cvector var_31_cvector;
	var_24_object->get(var_31_cvector, var_30_int);
	object var_56_object; int var_57_int; float var_58_float; cvector var_59_cvector; cvector var_60_cvector;
	var_11_object = var_56_object;
	var_12_int = var_57_int;
	var_13_float = var_58_float;
	var_31_cvector = var_59_cvector;
	var_60_cvector = -var_23_cvector;
	func_1151(var_58_float, var_59_cvector, var_60_cvector);
}


void func_1214(string var_122_string)
{
	bool var_131_bool; int var_132_int; bool var_133_bool; int var_134_int; bool var_135_bool; float var_136_float; cvector var_137_cvector; cvector var_138_cvector;
	@IsExisting3DSound(var_131_bool, var_122_string);
	if(!var_131_bool) { //@nz
		var_132_int = 0;

		for(;;) {
			@IsExisting3DSound(var_133_bool, (var_122_string + (var_132_int + 1)));
			if(!var_133_bool) { //@nz
				break;
			Label_1234:
				@irand(var_134_int, var_132_int);
				var_122_string += (var_134_int + 1);
	}
			@Is3DSoundLoaded(var_135_bool, var_122_string);
			if(var_135_bool != 0) {
				@GetEyesHeight(var_136_float);
				@GetDirection(var_137_cvector);
				var_138_cvector = var_137_cvector * 50;
				var_149_float = GetByIndex(var_138_cvector, 1);
				SetByIndex(var_138_cvector, 1) = (var_149_float + var_136_float);
				@PlayGlobalSound(var_122_string, var_138_cvector);
			}
		}
		var_132_int += 1;
	}
	var_144_bool = !var_132_int; //@nz
	if(var_144_bool == 0) goto Label_1234;
}


void func_1342(object var_7_object)
{
	object var_9_object;
	@self(var_9_object);
	var_9_object = var_7_object;
}
EMIT "Stack[-1] = 0";


void func_190(object var_0_object, object var_47_object)
{
	bool var_50_bool;
	@Face(var_47_object);
	
	for(;;) {
		@Sleep(0.5, var_50_bool);
		bool var_52_bool = true;
		var_53_bool = !var_50_bool; //@nz
		if(var_53_bool != 1) {
			bool var_54_bool;
			func_1015(var_54_bool, var_47_object);
			var_56_bool = !var_54_bool; //@nz
			if(var_56_bool != 1)
				var_52_bool = false;
		}
		if(var_52_bool != 0)
			break;
	}
	@StopAsync();
}


void func_1854(bool var_49_bool, object var_50_object)
{
	float var_54_float; float var_56_float;
	object var_58_object;
	var_50_object = var_58_object;
	bool var_57_bool;
	func_1015(var_57_bool, var_58_object);
	if(!var_57_bool) { //@nz
		var_49_bool = false;
		return 6;
	}
	bool var_60_bool; object var_61_object;
	func_884(var_60_bool, var_61_object);
	if(var_60_bool != 0) {
		var_61_object->GetProperty("reputation", var_54_float);
		var_49_bool = var_54_float < 0.33;
		return 6;
	}
	bool var_66_bool; object var_67_object;
	func_889(var_66_bool, var_67_object, "class");
	if(!var_66_bool) { //@nz
		var_49_bool = false;
		return 6;
	}
	string var_55_string;
	var_67_object->GetProperty("class", var_55_string);
	bool var_71_bool = true;
	bool var_72_bool = true;
	var_74_bool = var_55_string == "bomber";
	if(var_74_bool != 1) {
		var_76_bool = var_55_string == "hunter";
		if(var_76_bool != 1)
			var_72_bool = false;
	}
	if(var_72_bool != 1) {
		var_78_bool = var_55_string == "grabitel";
		if(var_78_bool != 1)
			var_71_bool = false;
	}
	if(var_71_bool != 0) {
		var_49_bool = true;
		return 6;
	}
	bool var_79_bool; object var_80_object;
	func_889(var_79_bool, var_80_object, "disease");
	if(!var_79_bool) { //@nz
		var_49_bool = false;
		return 6;
	}
	bool var_83_bool = true;
	bool var_84_bool; string var_85_string;
	func_1255(var_84_bool, var_85_string);
	if(var_84_bool != 1) {
		var_124_bool = var_85_string == "dog";
		if(var_124_bool != 1)
			var_83_bool = false;
	}
	if(var_83_bool != 0) {
		var_80_object->GetProperty("disease", var_56_float);
		var_49_bool = var_56_float > 0;
		return 6;
	}
	var_49_bool = false;
}


void func_67(object var_99_object)
{
	cvector var_110_cvector; cvector var_111_cvector; cvector var_112_cvector; cvector var_113_cvector; string var_114_string; object var_115_object; bool var_116_bool; bool var_117_bool; float var_118_float; cvector var_119_cvector;
	if(var_99_object == null) {
		func_158("fdie");
	} else {
		var_99_object->GetPosition(var_110_cvector);
		@GetPosition(var_111_cvector);
		@GetDirection(var_112_cvector);
		var_113_cvector = var_111_cvector - var_110_cvector;
		var_153_float = GetByIndex(var_113_cvector, 0);
		var_154_float = GetByIndex(var_112_cvector, 0);
		var_156_float = GetByIndex(var_113_cvector, 2);
		var_157_float = GetByIndex(var_112_cvector, 2);
		if(((var_153_float * var_154_float) + (var_156_float * var_157_float)) >= 0)
			var_114_string = "fdie";
		else
			var_114_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_99_object = var_115_object;
		var_164_bool = IsFuncExist(var_99_object, "GetScriptProperty", 2);
		if(var_164_bool != 0) {
			var_99_object->HasScriptProperty(var_116_bool, "Owner");
			if(var_116_bool != 0) {
				var_99_object->GetScriptProperty(var_115_object, "Owner");
				if(var_115_object == null)
					var_99_object = var_115_object;
			}
		}
		var_171_bool = IsFuncExist(var_115_object, "@GetEyesHeight", 1);
		if(var_171_bool != 0) {
			var_115_object->GetEyesHeight(var_118_float);
			var_119_cvector = [0.0, 0.0, 0.0];
			var_172_float = GetByIndex(var_119_cvector, 1);
			var_118_float = var_172_float;
			SetByIndex(var_119_cvector, 1) = var_172_float;
			@LookAsync(var_99_object, "head", var_119_cvector);
			var_117_bool = true;
		} else {
			var_117_bool = false;

		}
		string var_174_string;
		var_114_string = var_174_string;
		func_1214(var_174_string);
		@PlayAnimation("all", var_114_string);
		@WaitForAnimEnd();
		if(var_117_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_114_string);
		@RemoveEnvelope();
		var_115_object = null;
	}
	
}


void func_1988(object var_127_object)
{
	var_130_object = GlobalVars[0];
	bool var_129_bool;
	var_130_object->in(var_129_bool, var_127_object);
	if(var_129_bool != 0) {
		object var_132_object;
		var_127_object = var_132_object;
		func_1808(var_132_object, true);
	}
}


void func_1348(cvector var_39_cvector, cvector var_40_cvector)
{
	float var_48_float = sqrt(var_40_cvector | var_40_cvector);
	if(var_48_float < 0.000001)
		var_39_cvector = [0.0, 0.0, 0.0];
	var_39_cvector = var_40_cvector / var_48_float;
}


void func_1476(int var_78_int)
{
	int var_80_int;
	@GetVariable("branch", var_80_int);
	var_80_int = var_78_int;
}


void func_1603(int var_39_int, string var_40_string)
{
	int var_42_int;
	@GetInvItemByName(var_42_int, var_40_string);
	var_42_int = var_39_int;
}


// @pe
void func_1608(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	TaskCall(1);
	func_25(var_19_object);
	TaskReturn();
}


// @pe
void func_1482(object var_11_object)
{
	int var_12_int;
	func_1476(var_12_int);
	if(var_12_int == 1)
		@WorkWithCorpse(var_11_object);
	else
		@Barter(var_11_object);
	
}


void func_842(void)
{
	@StopGroup0();
	@Stop();
}


void func_1358(float var_29_float, cvector var_30_cvector, cvector var_31_cvector)
{
	var_29_float = (var_31_cvector - var_30_cvector) | (var_31_cvector - var_30_cvector);
}


void func_847(void)
{
}


// @pe
void func_848(string var_275_string, int var_276_int)
{
	if(var_276_int == 2) {
		var_275_string = "fire";
		return 0;
	EMIT "GOTO 0x35c";
	}
	if(var_276_int == 1) {
		var_275_string = "bullet";
		return 0;
	}
	var_275_string = "phys";
}


void func_974(bool var_27_bool, object var_28_object)
{
	bool var_30_bool;
	var_28_object->IsDead(var_30_bool);
	var_30_bool = var_27_bool;
}


// @pe
void func_1362(float var_285_float, float var_286_float, float var_287_float)
{
	if(var_286_float < var_287_float)
		var_286_float = var_285_float;
	else
		var_287_float = var_285_float;
	
}


void func_979(bool var_16_bool, object var_17_object)
{
	if(var_17_object == null) {
		var_16_bool = false;
		return 4;
	}
	bool var_23_bool = false;
	var_26_bool = IsFuncExist(var_17_object, "IsDead", 1);
	if(var_26_bool != 0) {
		bool var_27_bool; object var_28_object;
		var_17_object = var_28_object;
		func_974(var_27_bool, var_28_object);
		if(var_27_bool != 0)
			var_23_bool = true;
	}
	if(var_23_bool != 0) {
		var_16_bool = false;
		return 4;
	}
	object var_20_object;
	@GetScene(var_20_object);
	if(var_20_object == null) {
		var_16_bool = false;
		return 4;
	}
	object var_21_object;
	var_17_object->GetScene(var_21_object);
	if(var_20_object != var_21_object) {
		var_16_bool = false;
		return 4;
	}
	var_16_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_214(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


void func_1495(int var_27_int, int var_28_int)
{
	if(var_27_int > var_28_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_31_int = 0;
	if(var_27_int != var_28_int) {
		@irand(var_31_int, (var_28_int - var_27_int));
	} else if(var_27_int == 0) {
		return 4;
	}
	var_31_int += var_27_int;
	if(var_31_int == 0)
		return 4;
	int var_39_int;
	func_1603(var_39_int, "Money");
	bool var_32_bool;
	@AddItem(var_32_bool, var_39_int, 0, var_31_int);
	
}


// @pe
void func_2008(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_1608(var_18_object);
}


// @pe
void func_1369(float var_295_float, float var_296_float, float var_297_float, float var_298_float)
{
	if(var_296_float < var_297_float) {
		var_297_float = var_295_float;
		return 0;
	}
	if(var_296_float > var_298_float) {
		var_298_float = var_295_float;
		return 0;
	}
	var_296_float = var_295_float;
}


void func_862(cvector var_41_cvector, object var_42_object)
{
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	cvector var_46_cvector;
	var_42_object->GetPosition(var_46_cvector);
	var_41_cvector = var_46_cvector - var_45_cvector;
}


// @pe
void func_735(void)
{
	func_1801();
	
	for(;;) {
		func_758(var_5_cvector, var_6_bool);
	}
}
EMIT "Return(); Pop(0)";


void func_1380(bool var_54_bool, int var_55_int, int var_56_int)
{
	int var_58_int;
	@irand(var_58_int, var_56_int);
	var_54_bool = var_58_int < var_55_int;
}


void func_485(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


void func_869(float var_86_float, object var_87_object)
{
	cvector var_91_cvector;
	@GetPosition(var_91_cvector);
	cvector var_92_cvector;
	var_87_object->GetPosition(var_92_cvector);
	var_86_float = (var_92_cvector - var_91_cvector) | (var_92_cvector - var_91_cvector);
}


void func_743(void)
{
}


// @pe
void func_1255(bool var_84_bool, string var_85_string)
{
	var_84_bool = true;
	bool var_86_bool = true;
	bool var_87_bool = true;
	bool var_88_bool = true;
	bool var_89_bool = true;
	bool var_90_bool = true;
	bool var_91_bool = true;
	bool var_92_bool = true;
	bool var_93_bool = true;
	bool var_94_bool = true;
	bool var_95_bool = true;
	bool var_96_bool = true;
	var_98_bool = var_85_string == "woman";
	if(var_98_bool != 1) {
		var_100_bool = var_85_string == "worker";
		if(var_100_bool != 1)
			var_96_bool = false;
	}
	if(var_96_bool != 1) {
		var_102_bool = var_85_string == "butcher";
		if(var_102_bool != 1)
			var_95_bool = false;
	}
	if(var_95_bool != 1) {
		var_104_bool = var_85_string == "wasted_girl";
		if(var_104_bool != 1)
			var_94_bool = false;
	}
	if(var_94_bool != 1) {
		var_106_bool = var_85_string == "boy";
		if(var_106_bool != 1)
			var_93_bool = false;
	}
	if(var_93_bool != 1) {
		var_108_bool = var_85_string == "vaxxabitka";
		if(var_108_bool != 1)
			var_92_bool = false;
	}
	if(var_92_bool != 1) {
		var_110_bool = var_85_string == "unosha";
		if(var_110_bool != 1)
			var_91_bool = false;
	}
	if(var_91_bool != 1) {
		var_112_bool = var_85_string == "wasted_male";
		if(var_112_bool != 1)
			var_90_bool = false;
	}
	if(var_90_bool != 1) {
		var_114_bool = var_85_string == "alkash";
		if(var_114_bool != 1)
			var_89_bool = false;
	}
	if(var_89_bool != 1) {
		var_116_bool = var_85_string == "dohodyaga";
		if(var_116_bool != 1)
			var_88_bool = false;
	}
	if(var_88_bool != 1) {
		var_118_bool = var_85_string == "vaxxabit";
		if(var_118_bool != 1)
			var_87_bool = false;
	}
	if(var_87_bool != 1) {
		var_120_bool = var_85_string == "nudegirl";
		if(var_120_bool != 1)
			var_86_bool = false;
	}
	if(var_86_bool != 1) {
		var_122_bool = var_85_string == "morlok";
		if(var_122_bool != 1)
			var_84_bool = false;
	}
}


void func_1385(object var_14_object)
{
	object var_16_object;
	@CreateObjectSet(var_16_object);
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


void func_490(object var_0_object)
{
	object var_183_object; object var_184_object; float var_189_float; object var_190_object; object var_191_object;
	func_1456(var_0_object);
	@ReportAttack(var_0_object);
	bool var_193_bool;
	func_884(var_193_bool, var_0_object);
	if(var_193_bool != 0) {
		object var_195_object;
		func_1342(var_195_object);
		@SendPlayerEnemy(var_0_object, var_195_object);
	}
	cvector var_178_cvector;
	@GetDirection(var_178_cvector);
	cvector var_196_cvector;
	func_862(var_196_cvector, var_0_object);
	cvector var_179_cvector;
	var_196_cvector = var_179_cvector;
	float var_202_float; cvector var_203_cvector; cvector var_204_cvector;
	var_179_cvector = var_204_cvector;
	func_1410(var_202_float, var_203_cvector, var_204_cvector);
	if(var_202_float < 0.99939084) {
	}
	func_1465();
	@PlayAnimation("all", "attack_begin1");
	bool var_180_bool;
	cvector var_181_cvector;
	cvector var_182_cvector;
	@GetGeometryLocator("attack", var_180_bool, var_181_cvector, var_182_cvector);
	if(var_180_bool != 0) {
		@GetScene(var_184_object);
		@AddActorByType(var_183_object, "light-dynamic", var_184_object, var_181_cvector, var_182_cvector, "soldier_fire.xml");
		var_184_object = null;
		var_183_object = null;
	} else {
				@WaitForAnimEnd();
	}
	@PlayGlobalSound("shot", [0.0, 150.0, 0.0], 800, 100000);
	@GetDirection(var_203_cvector);
	cvector var_238_cvector;
	func_862(var_238_cvector, var_0_object);
	var_238_cvector = var_179_cvector;
	var_240_float = GetByIndex(var_179_cvector, 1);
	float var_241_float;
	func_1176(var_241_float, var_0_object);
	SetByIndex(var_179_cvector, 1) = (var_240_float + var_241_float);
	cvector var_185_cvector;
	@RandVecCone3D(var_185_cvector, var_179_cvector, 0.034906585);
	object var_186_object;
	int var_187_int;
	cvector var_188_cvector;
	@GetVictimMaterial(var_185_cvector, var_186_object, var_187_int, var_188_cvector);
	if(var_186_object != null) {
		if(var_186_object == var_0_object) {
			float var_250_float;
			func_901(var_250_float, var_0_object, 1.5, 1);
			var_250_float = var_189_float;
			@ReportHit(var_0_object, 2, var_189_float, 1.5);
		} else if(var_187_int != -1) {
			@GetScene(var_190_object);
			@AddActorByType(var_191_object, "scripted", var_190_object, var_188_cvector, [0.0, 0.0, 1.0], "richochet.xml");
			var_191_object->SetScriptProperty("Material", var_187_int);
			var_191_object = null;
			var_190_object = null;

		}
	}
	@PlayAnimation("all", "attack_end1");
	@WaitForAnimEnd();
	@LockAnimationEnd("all", "attack_on");
	
}
EMIT "Stack[-6] = 0";


void func_877(object var_12_object)
{
	object var_14_object;
	@FindActor(var_14_object, "player");
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1391(float var_205_float, cvector var_206_cvector, cvector var_207_cvector)
{
	var_208_float = GetByIndex(var_206_cvector, 0);
	var_209_float = GetByIndex(var_207_cvector, 0);
	var_211_float = GetByIndex(var_206_cvector, 2);
	var_212_float = GetByIndex(var_207_cvector, 2);
	var_205_float = (var_208_float * var_209_float) + (var_211_float * var_212_float);
}


void func_884(bool var_8_bool, object var_9_object)
{
	bool var_11_bool;
	@IsPlayerActor(var_9_object, var_11_bool);
	var_11_bool = var_8_bool;
}


void func_758(object var_0_object, object var_1_object)
{
	int var_21_int; bool var_22_bool; cvector var_23_cvector; object var_24_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		func_847();
		@irand(var_21_int, 10);
		@Sleep((var_21_int + 5), var_22_bool);
		if(var_22_bool != 0) {
			func_743();
		} else {
		for(;;) {
			func_847();
			@GetPFPosition(var_23_cvector);
			float var_29_float; cvector var_31_cvector;
			var_23_cvector = var_31_cvector;
			func_1358(var_29_float, var_1_object, var_31_cvector);
			if(var_29_float > 40000) {
				@FindPathTo(var_24_object, var_1_object);
				if(var_24_object != null) {
					@RotatePath(var_24_object, var_22_bool);
					if(!var_22_bool) { //@nz
					} else {
					@FollowPath(var_24_object, false, var_22_bool);
					if(!var_22_bool) { //@nz
						goto Label_839;
					}
					var_40_float = GetByIndex(var_0_object, 0);
					var_41_float = GetByIndex(var_0_object, 2);
					@Rotate(var_40_float, var_41_float, var_22_bool);
					if(!var_22_bool) { //@nz
						goto Label_839;
					}
					@WaitForAnimEnd(var_22_bool);
					if(!var_22_bool) { //@nz
						goto Label_839;
					}
					goto Label_840;
				EMIT "GOTO 0x338";
				}
				@Sleep(1);
				var_24_object = null;
				goto Label_839;
			}
			var_45_float = GetByIndex(var_0_object, 0);
			var_46_float = GetByIndex(var_0_object, 2);
			@Rotate(var_45_float, var_46_float, var_22_bool);
			if(!var_22_bool) { //@nz
				goto Label_839;
			}
			@WaitForAnimEnd(var_22_bool);
			if(!var_22_bool) { //@nz
				goto Label_839;
			}
			goto Label_840;
			}
		Label_839:
		}
		}
	Label_840:
	}
	
}
EMIT "Return(); Pop(8)";


void func_1015(bool var_12_bool, object var_13_object)
{
	object var_17_object;
	var_13_object = var_17_object;
	bool var_16_bool;
	func_979(var_16_bool, var_17_object);
	if(!var_16_bool) { //@nz
		var_12_bool = false;
		return 2;
	}
	bool var_34_bool; object var_35_object;
	func_889(var_34_bool, var_35_object, "noaccess");
	if(!var_34_bool) { //@nz
		var_12_bool = true;
		return 2;
	}
	int var_15_int;
	var_35_object->GetProperty("noaccess", var_15_int);
	var_12_bool = var_15_int == 0;
}


// @pe
void func_1400(float var_214_float, cvector var_215_cvector)
{
	var_216_float = GetByIndex(var_215_cvector, 0);
	var_217_float = GetByIndex(var_215_cvector, 0);
	var_219_float = GetByIndex(var_215_cvector, 2);
	var_220_float = GetByIndex(var_215_cvector, 2);
	var_214_float = sqrt((var_216_float * var_217_float) + (var_219_float * var_220_float));
}


void func_889(bool var_34_bool, object var_35_object, string var_36_string)
{
	var_41_bool = IsFuncExist(var_35_object, "HasProperty", 2);
	if(!var_41_bool) { //@nz
		var_34_bool = false;
		return 2;
	}
	bool var_38_bool;
	var_35_object->HasProperty(var_36_string, var_38_bool);
	var_38_bool = var_34_bool;
}


void func_1526(string var_84_string)
{
	object var_88_object;
	@CreateInvItem(var_88_object);
	var_88_object->SetItemName(var_84_string);
	var_88_object->SetProperty("Organ", 1);
	int var_89_int;
	var_88_object->GetItemID(var_89_int);
	bool var_90_bool;
	@AddItem(var_90_bool, var_88_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1151(object var_13_object, cvector var_16_cvector, cvector var_17_cvector)
{
	object var_20_object;
	@GetScene(var_20_object);
	object var_21_object;
	@AddActorByType(var_21_object, "scripted", var_20_object, var_16_cvector, var_17_cvector, "blood_dir.xml");
	object var_24_object;
	var_13_object = var_24_object;
	func_1039(var_24_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


