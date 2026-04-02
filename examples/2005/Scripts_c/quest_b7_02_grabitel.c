// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		object var_11_object;
		var_10_bool = var_11_object;
		func_2165();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2167(var_15_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		if(var_10_bool == "kill")
			var_0_bool = true;
	}

}


task task_1
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		object var_11_object;
		var_10_bool = var_11_object;
		func_2165();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2167(var_15_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, string var_7_string, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		if(var_10_bool == "kill") {
			var_13_bool = GlobalVars[0];
			GlobalVars[0] = true;
		}
	}

}


task task_2
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		object var_11_object;
		var_10_object = var_11_object;
		func_2165();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_object = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2167(var_15_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, string var_10_string)
	{
		if(var_10_string == "kill") {
			var_13_bool = GlobalVars[0];
			GlobalVars[0] = true;
			func_950(var_10_string);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, int var_10_int)
	{
		if(var_10_int == 1) {
			func_1946(var_1_object);
		} else {
			int var_18_int;
			func_1094(var_9_bool, var_18_int, var_18_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_11_bool = false;
		if(var_1_object == var_10_object) {
			if(!var_2_int) //@nz
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			var_2_int = true;
			object var_14_object;
			var_10_object = var_14_object;
			func_1757(var_14_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_11_bool = false;
		if(var_1_object == var_10_object) {
			if(var_2_int != 0)
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			var_2_int = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		@RequestClearPath(var_10_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		func_950(var_10_object);
		object var_15_object;
		var_10_object = var_15_object;
		func_2201();
	}

}


maintask task_3
{
	void init(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		@Hold();
	}

	void OnLoad(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		TaskCall(4);
		func_1162();
		TaskReturn();
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, string var_10_string)
	{
		if(var_10_string == "cleanup") {
			object var_13_object;
			func_1820(var_13_object);
			@RemoveActor(var_13_object);
		}
	}

}


task task_4
{
}


task task_5
{
	void OnUse(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_12_bool;
		@IsOverrideActive(var_12_bool);
		if(!var_12_bool) { //@nz
			object var_14_object;
			var_10_object = var_14_object;
			func_2013(var_14_object);
		}
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, string var_11_string)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
	}

}


void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
{
	object var_10_object;
	func_1820(var_10_object);
	@RemoveActor(var_10_object);
	@Hold();
}


// @pe
void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_1664(var_14_object, var_15_int, var_16_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float, cvector var_14_cvector, cvector var_15_cvector)
{
	object var_16_object;
	var_10_object = var_16_object;
	int var_17_int;
	var_11_int = var_17_int;
	float var_18_float;
	var_12_float = var_18_float;
	cvector var_19_cvector;
	var_14_cvector = var_19_cvector;
	cvector var_20_cvector;
	var_15_cvector = var_20_cvector;
	func_1732(var_18_float, var_19_cvector, var_20_cvector);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_2141(var_11_object);
}


void func_0(bool var_0_bool, bool var_67_bool, object var_68_object, object var_187_object)
{
	object var_84_object;
	var_68_object = var_84_object;
	func_1946(var_84_object);
	bool var_89_bool; object var_90_object;
	var_68_object = var_90_object;
	func_1611(var_89_bool, var_90_object);
	bool var_103_bool; object var_104_object;
	func_1577(var_103_bool, var_104_object);
	if(!var_103_bool) { //@nz
		var_67_bool = false;
		return 14;
	}
	func_1955();
	@Face(var_104_object);
	@PlayAnimation("all", "aattack_begin1");
	@WaitForAnimEnd();
	bool var_114_bool; object var_115_object;
	var_68_object = var_115_object;
	func_1577(var_114_bool, var_115_object);
	if(!var_114_bool) { //@nz
		@StopAsync();
		var_67_bool = false;
		return 14;
	}
	@PlayAnimation("all", "aattack_end1");
	object var_77_object;
	@GetScene(var_77_object);
	cvector var_78_cvector;
	bool var_79_bool;
	@GetGeometryLocator("knife", var_79_bool, var_78_cvector);
	object var_80_object;
	@AddActorByType(var_80_object, "scripted", var_77_object, var_78_cvector, [0.0, 0.0, 1.0], "grabitel_knife.xml");
	object var_124_object;
	func_1820(var_124_object);
	var_80_object->SetScriptProperty("Owner", var_124_object);
	var_80_object->SetScriptProperty("Target", var_68_object);
	cvector var_81_cvector;
	var_68_object->GetPosition(var_81_cvector);
	float var_82_float;
	var_68_object->GetEyesHeight(var_82_float);
	var_126_float = GetByIndex(var_81_cvector, 1);
	SetByIndex(var_81_cvector, 1) = (var_126_float + (var_82_float - 10));
	cvector var_129_cvector; cvector var_130_cvector; cvector var_131_cvector;
	var_78_cvector = var_130_cvector;
	var_81_cvector = var_131_cvector;
	func_1972(var_129_cvector, var_130_cvector, var_131_cvector, 2000.0);
	cvector var_83_cvector;
	var_129_cvector = var_83_cvector;
	var_80_object->SetScriptProperty("StartDirection", var_83_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	if(false != 0) {
		var_67_bool = true;
		return 14;
	}
	bool var_182_bool; object var_183_object;
	var_68_object = var_183_object;
	func_1577(var_182_bool, var_183_object);
	if(!var_182_bool) { //@nz
		var_67_bool = false;
		return 14;
	}
	bool var_185_bool; object var_186_object;
	var_68_object = var_186_object;
	TaskCall(1);
	func_126(var_185_bool, var_186_object);
	TaskReturn();
	var_187_object = var_67_bool;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_1536(bool var_33_bool, object var_34_object)
{
	bool var_36_bool;
	var_34_object->IsDead(var_36_bool);
	var_36_bool = var_33_bool;
}


void func_1541(bool var_22_bool, object var_23_object)
{
	if(var_23_object == null) {
		var_22_bool = false;
		return 4;
	}
	bool var_29_bool = false;
	var_32_bool = IsFuncExist(var_23_object, "IsDead", 1);
	if(var_32_bool != 0) {
		bool var_33_bool; object var_34_object;
		var_23_object = var_34_object;
		func_1536(var_33_bool, var_34_object);
		if(var_33_bool != 0)
			var_29_bool = true;
	}
	if(var_29_bool != 0) {
		var_22_bool = false;
		return 4;
	}
	object var_26_object;
	@GetScene(var_26_object);
	if(var_26_object == null) {
		var_22_bool = false;
		return 4;
	}
	object var_27_object;
	var_23_object->GetScene(var_27_object);
	if(var_26_object != var_27_object) {
		var_22_bool = false;
		return 4;
	}
	var_22_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2057(string var_102_string)
{
	object var_106_object;
	@CreateInvItem(var_106_object);
	var_106_object->SetItemName(var_102_string);
	var_106_object->SetProperty("Organ", 1);
	int var_107_int;
	var_106_object->GetItemID(var_107_int);
	bool var_108_bool;
	@AddItem(var_108_bool, var_106_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_2074(void)
{
	int var_96_int;
	func_2007(var_96_int);
	if(var_96_int != 1) {
	}
	func_2057("liver");
	func_2057("kidney");
	func_2057("heart");
	func_2057("blood");
}


void func_1577(bool var_18_bool, object var_19_object)
{
	object var_23_object;
	var_19_object = var_23_object;
	bool var_22_bool;
	func_1541(var_22_bool, var_23_object);
	if(!var_22_bool) { //@nz
		var_18_bool = false;
		return 2;
	}
	bool var_40_bool; object var_41_object;
	func_1398(var_40_bool, var_41_object, "noaccess");
	if(!var_40_bool) { //@nz
		var_18_bool = true;
		return 2;
	}
	int var_21_int;
	var_41_object->GetProperty("noaccess", var_21_int);
	var_18_bool = var_21_int == 0;
}


void func_2098(void)
{
	@ClearSubContainer(0);
	func_2026(300, 750);
	func_1768("Knife", 1, 8);
	func_1768("lockpick", 1, 6);
	int var_54_int;
	func_2128(var_54_int, "grabitel_mark");
	bool var_19_bool;
	@AddItem(var_19_bool, var_54_int, 0, 1);
}


void func_1601(bool var_93_bool, cvector var_94_cvector)
{
	cvector var_98_cvector;
	@GetPosition(var_98_cvector);
	cvector var_99_cvector = var_94_cvector - var_98_cvector;
	var_101_float = GetByIndex(var_99_cvector, 0);
	var_102_float = GetByIndex(var_99_cvector, 2);
	bool var_100_bool;
	@Rotate(var_101_float, var_102_float, var_100_bool);
	var_100_bool = var_93_bool;
}


// @pe
void func_1094(bool var_0_bool, object var_1_object, int var_18_int)
{
	if(var_18_int != 0)
		return 0;
	bool var_21_bool;
	func_1132(var_21_bool, var_1_object);
	if(!var_21_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1611(bool var_89_bool, object var_90_object)
{
	cvector var_92_cvector;
	var_90_object->GetPosition(var_92_cvector);
	bool var_93_bool; cvector var_94_cvector;
	var_92_cvector = var_94_cvector;
	func_1601(var_93_bool, var_94_cvector);
	var_93_bool = var_89_bool;
}


void func_2128(int var_33_int, string var_34_string)
{
	int var_36_int;
	@GetInvItemByName(var_36_int, var_34_string);
	var_36_int = var_33_int;
}


void func_1620(object var_27_object)
{
	string var_41_string;
	if(var_27_object == null)
		return 14;
	bool var_35_bool;
	@IsDead(var_35_bool);
	if(var_35_bool != 0)
		return 14;
	int var_36_int;
	@GetSecondaryAnimationType(var_36_int);
	if(var_36_int < 0)
		return 14;
	cvector var_37_cvector;
	var_27_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	if(((var_46_float * var_47_float) + (var_49_float * var_50_float)) >= 0)
		var_41_string = "fhit";
	else
		var_41_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_41_string + "1"), (var_41_string + "2"), -10);
	
}


void func_1116(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_2141(object var_11_object)
{
	object var_13_object;
	var_11_object = var_13_object;
	bool var_12_bool;
	func_1393(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_2098();
		bool var_58_bool; object var_59_object;
		var_11_object = var_59_object;
		func_1891(var_58_bool, var_59_object, 0.03);
	}
	func_2074();
	object var_116_object;
	var_11_object = var_116_object;
	TaskCall(5);
	func_1216(var_116_object);
	TaskReturn();
}


// @pe
void func_1132(bool var_310_bool, object var_311_object)
{
	object var_313_object;
	var_311_object = var_313_object;
	bool var_312_bool;
	func_1577(var_312_bool, var_313_object);
	var_312_bool = var_310_bool;
}


void func_1139(string var_328_string)
{
	var_328_string = "walk";
}


// @pe
void func_2165(void)
{
}


void func_1141(string var_329_string)
{
	var_329_string = "run";
}


// @pe
void func_2167(bool var_13_bool)
{
	var_13_bool = false;
}


// @pe
void func_126(bool var_185_bool, object var_186_object)
{
	var_193_bool = GlobalVars[0];
	GlobalVars[0] = false;
	object var_194_object;
	func_203(var_190_bool, var_191_float, var_192_int, var_185_bool, var_194_object, var_194_object, true, 200.0);
	bool var_664_bool = false;
	var_665_bool = GlobalVars[0];
	if(var_665_bool != 0) {
		if(var_3_int != 0)
			var_664_bool = true;
	}
	if(var_664_bool != 0) {
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}
	var_669_bool = GlobalVars[0];
	var_669_bool = var_185_bool;
}


void func_1664(object var_14_object, int var_15_int, float var_16_float)
{
	cvector var_26_cvector; object var_27_object; int var_28_int; bool var_29_bool; cvector var_30_cvector; cvector var_31_cvector;
	bool var_35_bool = false;
	bool var_36_bool = false;
	if(var_14_object != 0) {
		if(var_15_int != 4)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		if(var_15_int != 5)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		cvector var_42_cvector; cvector var_43_cvector;
		cvector var_44_cvector; object var_45_object;
		var_14_object = var_45_object;
		func_1378(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1826(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_1726:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_1620(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_1726;
	int var_33_int;
	@irand(var_33_int, var_32_int);
	cvector var_34_cvector;
	var_27_object->get(var_34_cvector, var_33_int);
	object var_59_object; int var_60_int; float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
	var_14_object = var_59_object;
	var_15_int = var_60_int;
	var_16_float = var_61_float;
	var_34_cvector = var_62_cvector;
	var_63_cvector = -var_26_cvector;
	func_1732(var_61_float, var_62_cvector, var_63_cvector);
}


void func_643(int var_3_int)
{
	var_3_int = true;
}


void func_645(bool var_632_bool, float var_633_float)
{
	float var_636_float; bool var_637_bool;
	@rand(var_636_float);
	if(var_636_float < var_633_float) {

		for(;;) {
			@IsAnimationPlaying(var_637_bool);
			if(!var_637_bool) { //@nz
			} else {
				bool var_640_bool;
				func_743(var_640_bool);
				if(var_640_bool != 0) {
					var_632_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_632_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_847(var_637_bool);
}


void func_1162(void)
{
	object var_10_object; object var_11_object;
	@FindActor(var_11_object, "player");
	if(!var_11_object) { //@nz
	}
	for(;;) {
		bool var_14_bool; object var_15_object;
		func_1179(var_10_object, var_15_object, var_14_bool, var_15_object);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


// @pe
void func_154(float var_521_float)
{
	var_521_float = 0.15;
}


void func_1179(bool var_14_bool, object var_15_object, bool var_69_bool, object var_672_object)
{
	object var_19_object;
	var_15_object = var_19_object;
	bool var_18_bool;
	func_1577(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_14_bool = false;
		return 2;
	}
	float var_53_float; object var_54_object;
	var_15_object = var_54_object;
	func_1385(var_53_float, var_54_object);
	float var_17_float;
	var_53_float = var_17_float;
	bool var_61_bool; float var_62_float;
	func_1878(var_61_bool, var_62_float, 250000.0, 3240000.0);
	if(var_61_bool != 0) {
		bool var_67_bool; object var_68_object;
		var_15_object = var_68_object;
		TaskCall(0);
		func_0(var_62_float, var_69_bool, var_67_bool, var_68_object);
		TaskReturn();
		var_69_bool = var_14_bool;
		return 2;
	}
	bool var_670_bool; object var_671_object;
	var_15_object = var_671_object;
	TaskCall(1);
	func_126(var_670_bool, var_671_object);
	TaskReturn();
	var_672_object = var_14_bool;
}


// @pe
void func_157(int var_528_int)
{
	var_528_int = 0;
}


void func_672(bool var_0_bool, bool var_416_bool, float var_417_float)
{
	bool var_423_bool; cvector var_424_cvector; cvector var_425_cvector; cvector var_426_cvector; float var_427_float;
	
	for(;;) {
		@IsAnimationPlaying(var_423_bool);
		if(!var_423_bool) //@nz
			break;
		bool var_429_bool;
		func_743(var_429_bool);
		if(var_429_bool != 0) {
			var_416_bool = true;
			return 10;
		}
		bool var_472_bool;
		func_1577(var_472_bool, var_0_bool);
		if(!var_472_bool) { //@nz
			var_416_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_424_cvector); //@t
		@GetPFPosition(var_425_cvector);
		var_426_cvector = var_424_cvector - var_425_cvector;
		var_427_float = var_426_cvector | var_426_cvector;
		if(var_427_float < (var_417_float * var_417_float)) {
			bool var_477_bool; float var_478_float;
			var_417_float = var_478_float;
			func_506(var_426_cvector, var_427_float, var_477_bool, var_478_float);
			var_416_bool = true;
			return 10;
		}
		@sync();
	}
	func_847(var_427_float);
	var_416_bool = false;
}


void func_160(int var_585_int)
{
	var_585_int = 1;
}


// @pe
void func_162(object var_586_object, float var_587_float)
{
	bool var_588_bool = false;
	if(var_587_float > 0) {
		bool var_591_bool; object var_592_object;
		var_586_object = var_592_object;
		func_1505(var_591_bool, var_592_object);
		if(var_591_bool != 0)
			var_588_bool = true;
	}
	if(var_588_bool != 0) {
		var_608_bool = GlobalVars[0];
		GlobalVars[0] = true;
		func_643(var_587_float);
	}
}


// @pe
void func_1216(object var_116_object)
{
	object var_117_object;
	var_116_object = var_117_object;
	func_1241(var_117_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1732(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_1620(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_203(bool var_0_bool, int var_3_int, float var_5_float, object var_194_object, bool var_195_bool, float var_196_float, bool var_265_bool, bool var_357_bool)
{
	float var_208_float; cvector var_209_cvector; cvector var_210_cvector; bool var_212_bool; float var_215_float; cvector var_216_cvector; bool var_217_bool; float var_218_float;
	func_432(var_216_cvector, var_217_bool, var_218_float);
	var_5_float = 0;
	var_243_bool = IsFuncExist(var_194_object, "@GetAttackDistance", 1);
	if(var_243_bool != 0) {
		var_194_object->GetAttackDistance(var_208_float);
		var_208_float += 50;
	} else {
						var_196_float = var_208_float;
	}
	if(var_208_float >= 150)
		var_208_float = 150;
	var_3_int = false;
	var_0_bool = var_194_object;
	bool var_211_bool;
	@IsPlayerActor(var_0_bool, var_211_bool);
	if(var_211_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_249_object;
		func_1820(var_249_object);
		@SendPlayerEnemy(var_194_object, var_249_object);
	}
	if(var_195_bool != 0)
		var_212_bool = false;
	else
		var_212_bool = true;

	
Label_243:
	for(;;) {
		bool var_252_bool = false;
		bool var_253_bool;
		func_1577(var_253_bool, var_0_bool);
		if(var_253_bool != 0) {
			if(!var_3_int) //@nz
				var_252_bool = true;
		}
		if(var_252_bool != 0) {
			func_847(var_218_float);
			var_0_bool->GetPFPosition(var_209_cvector); //@t
			@GetPFPosition(var_210_cvector);
			var_215_float = (var_209_cvector - var_210_cvector) | (var_209_cvector - var_210_cvector);
			if(var_215_float >= ((300.0 + var_208_float) * (300.0 + var_208_float))) {
				bool var_259_bool; float var_261_float;
				var_208_float = var_261_float;
				TaskCall(2);
				func_887(var_267_bool, var_259_bool, var_0_bool, var_261_float, 3000.0, true, false);
				TaskReturn();
				if(!var_265_bool) { //@nz
				} else {
					var_212_bool = false;
			} else {
			if(var_215_float >= (var_196_float * var_196_float)) {
				var_0_bool->GetPFPosition(var_216_cvector); //@t
				@CanReachByPF(var_217_bool, var_216_cvector);
				if(!var_217_bool) { //@nz
					bool var_351_bool; float var_353_float;
					var_208_float = var_353_float;
					TaskCall(2);
					func_887(var_359_bool, var_351_bool, var_0_bool, var_353_float, 3000.0, true, false);
					TaskReturn();
					if(!var_357_bool) { //@nz
						goto Label_415;
					}
					var_212_bool = false;
					goto Label_243;
				}
				if(!var_212_bool) { //@nz
					func_1746(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_847(var_218_float);
					@StopAsync();
					var_212_bool = true;
					bool var_373_bool;
					func_1577(var_373_bool, var_0_bool);
					if(!var_373_bool) { //@nz
						goto Label_415;
					}
				}
				@rand(var_218_float);
				bool var_376_bool;
				var_378_bool = var_218_float < 0.19999999;
				if(var_378_bool != 1) {
					bool var_379_bool;
					func_804(true, var_379_bool);
					if(var_379_bool != 1)
						var_376_bool = false;
				}
				if(var_376_bool != 0) {
					@Face(var_0_bool);
					func_852();
					@PlayAnimation("all", "attack_stay");
					bool var_416_bool; float var_417_float;
					func_672(var_218_float, var_416_bool, var_417_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_847(var_218_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_651_bool;
					func_804(var_218_float, var_651_bool);
					var_652_bool = !var_651_bool; //@nz
					if(var_652_bool == 0) goto Label_405;
					bool var_653_bool;
					func_1577(var_653_bool, var_0_bool);
					if(!var_653_bool) { //@nz
						goto Label_415;
					}
					var_0_bool->GetPFPosition(var_209_cvector); //@t
					@GetPFPosition(var_210_cvector);
					if(!(((var_209_cvector - var_210_cvector) | (var_209_cvector - var_210_cvector)) < (var_417_float * var_417_float))) goto Label_405;
					bool var_658_bool; float var_659_float;
					var_196_float = var_659_float;
					func_506(var_217_bool, var_218_float, var_658_bool, var_659_float);
					var_660_bool = !var_658_bool; //@nz
					if(var_660_bool == 0) goto Label_405;
					goto Label_415;
			}
				bool var_661_bool; float var_662_float;
				var_196_float = var_662_float;
				func_506(var_217_bool, var_218_float, var_661_bool, var_662_float);
				if(!var_661_bool) { //@nz
					goto Label_415;
				}
				var_212_bool = true;

			}
		Label_405:
			goto Label_414;
			}
			Label_414:
			}
		}
	Label_415:
		@WaitForAnimEnd();
		if(var_3_int != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_211_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_715(bool var_0_bool, bool var_431_bool)
{
	cvector var_437_cvector; cvector var_438_cvector;
	bool var_442_bool;
	func_1577(var_442_bool, var_0_bool);
	if(!var_442_bool) { //@nz
		var_431_bool = false;
		return 10;
	}
	bool var_445_bool;
	float var_441_float;
	func_804(var_441_float, var_445_bool);
	if(var_445_bool != 0) {
		var_0_bool->GetPFPosition(var_437_cvector); //@t
		@GetPFPosition(var_438_cvector);
		var_0_bool->GetAttackDistance(var_441_float); //@t
		var_431_bool = ((var_437_cvector - var_438_cvector) | (var_437_cvector - var_438_cvector)) <= ((var_441_float + 50) * (var_441_float + 50));
		return 10;
	}
	var_431_bool = false;
}


void func_1746(object var_362_object)
{
	cvector var_366_cvector;
	var_362_object->GetPosition(var_366_cvector);
	cvector var_367_cvector;
	@GetPosition(var_367_cvector);
	cvector var_368_cvector = var_366_cvector - var_367_cvector;
	var_369_float = GetByIndex(var_368_cvector, 0);
	var_370_float = GetByIndex(var_368_cvector, 2);
	@RotateAsync(var_369_float, var_370_float);
}


void func_1241(object var_117_object)
{
	cvector var_128_cvector; cvector var_129_cvector; cvector var_130_cvector; cvector var_131_cvector; string var_132_string; object var_133_object; bool var_134_bool; bool var_135_bool; float var_136_float; cvector var_137_cvector;
	if(var_117_object == null) {
		func_1332("fdie");
	} else {
		var_117_object->GetPosition(var_128_cvector);
		@GetPosition(var_129_cvector);
		@GetDirection(var_130_cvector);
		var_131_cvector = var_129_cvector - var_128_cvector;
		var_171_float = GetByIndex(var_131_cvector, 0);
		var_172_float = GetByIndex(var_130_cvector, 0);
		var_174_float = GetByIndex(var_131_cvector, 2);
		var_175_float = GetByIndex(var_130_cvector, 2);
		if(((var_171_float * var_172_float) + (var_174_float * var_175_float)) >= 0)
			var_132_string = "fdie";
		else
			var_132_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_117_object = var_133_object;
		var_182_bool = IsFuncExist(var_117_object, "GetScriptProperty", 2);
		if(var_182_bool != 0) {
			var_117_object->HasScriptProperty(var_134_bool, "Owner");
			if(var_134_bool != 0) {
				var_117_object->GetScriptProperty(var_133_object, "Owner");
				if(var_133_object == null)
					var_117_object = var_133_object;
			}
		}
		var_189_bool = IsFuncExist(var_133_object, "@GetEyesHeight", 1);
		if(var_189_bool != 0) {
			var_133_object->GetEyesHeight(var_136_float);
			var_137_cvector = [0.0, 0.0, 0.0];
			var_190_float = GetByIndex(var_137_cvector, 1);
			var_136_float = var_190_float;
			SetByIndex(var_137_cvector, 1) = var_190_float;
			@LookAsync(var_117_object, "head", var_137_cvector);
			var_135_bool = true;
		} else {
			var_135_bool = false;

		}
		string var_192_string;
		var_132_string = var_192_string;
		func_1779(var_192_string);
		@PlayAnimation("all", var_132_string);
		@WaitForAnimEnd();
		if(var_135_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_132_string);
		@RemoveEnvelope();
		var_133_object = null;
	}
	
}


void func_1757(object var_276_object)
{
	float var_279_float;
	var_276_object->GetEyesHeight(var_279_float);
	cvector var_280_cvector = [0.0, 0.0, 0.0];
	var_281_float = GetByIndex(var_280_cvector, 1);
	var_279_float = var_281_float;
	SetByIndex(var_280_cvector, 1) = var_281_float;
	@LookAsync(var_276_object, "head", var_280_cvector);
}


void func_743(bool var_429_bool)
{
	bool var_430_bool = false;
	bool var_431_bool;
	func_715(var_430_bool, var_431_bool);
	if(var_431_bool != 0) {
		bool var_448_bool;
		func_759(var_429_bool, var_430_bool, var_448_bool);
		if(var_448_bool != 0)
			var_430_bool = true;
	}
	if(var_430_bool != 0) {
		var_429_bool = true;
		return 0;
	}
	var_429_bool = false;
}


void func_1768(string var_40_string, int var_41_int, int var_42_int)
{
	bool var_44_bool;
	int var_46_int;
	var_41_int = var_46_int;
	int var_47_int;
	var_42_int = var_47_int;
	bool var_45_bool;
	func_1886(var_45_bool, var_46_int, var_47_int);
	if(var_45_bool != 0)
		@AddItem(var_44_bool, var_40_string, 0);
}


void func_1779(string var_140_string)
{
	bool var_149_bool; int var_150_int; bool var_151_bool; int var_152_int; bool var_153_bool; float var_154_float; cvector var_155_cvector; cvector var_156_cvector;
	@IsExisting3DSound(var_149_bool, var_140_string);
	if(!var_149_bool) { //@nz
		var_150_int = 0;

		for(;;) {
			@IsExisting3DSound(var_151_bool, (var_140_string + (var_150_int + 1)));
			if(!var_151_bool) { //@nz
				break;
			Label_1799:
				@irand(var_152_int, var_150_int);
				var_140_string += (var_152_int + 1);
	}
			@Is3DSoundLoaded(var_153_bool, var_140_string);
			if(var_153_bool != 0) {
				@GetEyesHeight(var_154_float);
				@GetDirection(var_155_cvector);
				var_156_cvector = var_155_cvector * 50;
				var_167_float = GetByIndex(var_156_cvector, 1);
				SetByIndex(var_156_cvector, 1) = (var_167_float + var_154_float);
				@PlayGlobalSound(var_140_string, var_156_cvector);
			}
		}
		var_150_int += 1;
	}
	var_162_bool = !var_150_int; //@nz
	if(var_162_bool == 0) goto Label_1799;
}


void func_759(bool var_0_bool, bool var_4_bool, bool var_448_bool)
{
	object var_454_object; float var_456_float; cvector var_457_cvector; cvector var_458_cvector;
	@GetScene(var_454_object);
	bool var_455_bool = false;
	
	for(;;) {
		cvector var_459_cvector;
		func_1378(var_459_cvector, var_0_bool);
		var_465_int = -var_459_cvector;
		@FindDirLength(var_456_float, var_465_int, var_4_bool);
		if(var_456_float < var_4_bool) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_457_cvector); //@t
				@GetPFPosition(var_458_cvector);
				@WaitForAnimEnd();
				func_847(var_458_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_455_bool = true;
				bool var_470_bool;
				func_715(var_458_cvector, var_470_bool);
				var_471_bool = !var_470_bool; //@nz
				if(var_471_bool == 0) goto Label_800;
		}
		for(;;) {
			var_455_bool = var_448_bool;

		}

	Label_800:
	}
}
EMIT "Stack[-5] = 0";


void func_1820(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_1826(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


void func_804(bool var_0_bool, bool var_379_bool)
{
	bool var_381_bool;
	var_384_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_384_bool != 0) {
		var_0_bool->IsAttacking(var_381_bool); //@t
		var_381_bool = var_379_bool;
	}
	var_379_bool = false;
}


// @pe
void func_1836(float var_562_float, float var_563_float, float var_564_float)
{
	if(var_563_float < var_564_float)
		var_563_float = var_562_float;
	else
		var_564_float = var_562_float;
	
}


void func_815(int var_2_int, float var_5_float)
{
	int var_495_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_float != 0) {
		if((var_5_float + -1) > 0)
			return 4;
	}
	float var_494_float;
	@rand(var_494_float);
	float var_501_float;
	func_861(var_501_float);
	if(var_494_float < var_501_float) {
		@irand(var_495_int, var_2_int);
		@Speak("attack" + (var_495_int + 1));
		int var_506_int;
		func_859(var_506_int);
		var_5_float = var_506_int;
	}
}


// @pe
void func_1843(float var_149_float, float var_150_float, float var_151_float, float var_152_float)
{
	var_149_float = (var_151_float * var_151_float) - ((4 * var_150_float) * var_152_float);
}


// @pe
void func_1332(string var_139_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_140_string;
	var_139_string = var_140_string;
	func_1779(var_140_string);
	@PlayAnimation("all", var_139_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_139_string);
	@RemoveEnvelope();
}


void func_1850(float var_163_float, float var_164_float, float var_165_float, float var_167_float)
{
	float var_169_float;
	var_170_int = -var_165_float;
	if(((var_170_int - var_167_float) / (2 * var_164_float)) > 0) {
		var_169_float = var_163_float;
		return 2;
	}
	var_176_int = -var_165_float;
	var_163_float = (var_176_int + var_167_float) / (2 * var_164_float);
}


// @pe
void func_1867(float var_87_float, float var_88_float, float var_89_float, float var_90_float)
{
	if(var_88_float < var_89_float) {
		var_89_float = var_87_float;
		return 0;
	}
	if(var_88_float > var_90_float) {
		var_90_float = var_87_float;
		return 0;
	}
	var_88_float = var_87_float;
}


void func_847(bool var_0_bool)
{
	func_1946(var_0_bool);
}


void func_852(void)
{
	func_1779("attack_stay");
}


// @pe
void func_1364(string var_552_string, int var_553_int)
{
	if(var_553_int == 2) {
		var_552_string = "fire";
		return 0;
	EMIT "GOTO 0x560";
	}
	if(var_553_int == 1) {
		var_552_string = "bullet";
		return 0;
	}
	var_552_string = "phys";
}


// @pe
void func_1878(bool var_61_bool, float var_62_float, float var_63_float, float var_64_float)
{
	var_61_bool = false;
	if(var_62_float >= var_63_float) {
		if(var_62_float <= var_64_float)
			var_61_bool = true;
	}
}


void func_857(bool var_631_bool)
{
	var_631_bool = true;
}


void func_859(int var_506_int)
{
	var_506_int = 1;
}


void func_861(float var_501_float)
{
	var_501_float = 0.5;
}


void func_1886(bool var_45_bool, int var_46_int, int var_47_int)
{
	int var_49_int;
	@irand(var_49_int, var_47_int);
	var_45_bool = var_49_int < var_46_int;
}


void func_1378(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


// @pe
void func_1891(bool var_58_bool, object var_59_object, float var_60_float)
{
	if(!var_59_object) { //@nz
		var_58_bool = false;
		return 0;
	}
	if(var_60_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_60_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_65_float;
		var_60_float = var_65_float;
		func_1936(var_65_float);
		bool var_69_bool; object var_70_object; float var_72_float;
		var_59_object = var_70_object;
		var_60_float = var_72_float;
		func_1410(var_69_bool, var_70_object, "reputation", var_72_float, (float)0, (float)1);
		var_58_bool = true;
		return 0;

	}
	
	var_58_bool = false;
}


void func_1385(float var_53_float, object var_54_object)
{
	cvector var_58_cvector;
	@GetPosition(var_58_cvector);
	cvector var_59_cvector;
	var_54_object->GetPosition(var_59_cvector);
	var_53_float = (var_59_cvector - var_58_cvector) | (var_59_cvector - var_58_cvector);
}


void func_1393(bool var_12_bool, object var_13_object)
{
	bool var_15_bool;
	@IsPlayerActor(var_13_object, var_15_bool);
	var_15_bool = var_12_bool;
}


void func_1398(bool var_77_bool, object var_78_object, string var_79_string)
{
	var_84_bool = IsFuncExist(var_78_object, "HasProperty", 2);
	if(!var_84_bool) { //@nz
		var_77_bool = false;
		return 2;
	}
	bool var_81_bool;
	var_78_object->HasProperty(var_79_string, var_81_bool);
	var_81_bool = var_77_bool;
}


void func_887(int var_2_int, bool var_259_bool, object var_260_object, float var_261_float, float var_262_float, bool var_263_bool, bool var_264_bool)
{
	object var_272_object;
	func_1946(var_272_object);
	@SetTimer(1, 5);
	bool var_270_bool;
	@CanSee(var_270_bool, var_272_object);
	if(var_270_bool != 0) {
		var_2_int = true;
		object var_276_object;
		var_260_object = var_276_object;
		func_1757(var_276_object);
	} else {
		var_2_int = false;
	}
	bool var_283_bool; object var_284_object;
	func_1393(var_283_bool, var_284_object);
	if(var_283_bool != 0) {
		object var_287_object;
		func_1820(var_287_object);
		@SendPlayerEnemy(var_284_object, var_287_object);
	}
	bool var_288_bool; object var_289_object; float var_290_float; float var_291_float; bool var_292_bool; bool var_293_bool;
	var_260_object = var_289_object;
	var_261_float = var_290_float;
	var_262_float = var_291_float;
	var_263_bool = var_292_bool;
	var_264_bool = var_293_bool;
	bool var_271_bool;
	func_992(var_270_bool, var_271_bool, var_288_bool, var_289_object, var_290_float, var_291_float, var_292_bool, var_293_bool);
	var_288_bool = var_271_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_271_bool = var_259_bool;
	
}


void func_1410(bool var_69_bool, object var_70_object, string var_71_string, float var_72_float, float var_73_float, float var_74_float)
{
	object var_78_object;
	var_70_object = var_78_object;
	string var_79_string;
	var_71_string = var_79_string;
	bool var_77_bool;
	func_1398(var_77_bool, var_78_object, var_79_string);
	if(!var_77_bool) //@nz
		var_69_bool = false;
	float var_76_float;
	var_70_object->GetProperty(var_71_string, var_76_float);
	float var_87_float; float var_89_float; float var_90_float;
	var_73_float = var_89_float;
	var_74_float = var_90_float;
	func_1867(var_87_float, (var_76_float + var_72_float), var_89_float, var_90_float);
	var_70_object->SetProperty(var_71_string, var_87_float);
	var_69_bool = true;
}


void func_1926(float var_580_float)
{
	object var_582_object;
	@CreateFloatVector(var_582_object);
	var_582_object->add(var_580_float);
	@SendWorldWndMessage(15, var_582_object);
}
EMIT "Stack[-1] = 0";


void func_1936(float var_65_float)
{
	object var_67_object;
	@CreateFloatVector(var_67_object);
	var_67_object->add(var_65_float);
	@SendWorldWndMessage(16, var_67_object);
}
EMIT "Stack[-1] = 0";


void func_1432(float var_524_float, object var_525_object, float var_526_float, int var_527_int)
{
	int var_537_int; int var_539_int;
	object var_544_object;
	var_525_object = var_544_object;
	bool var_543_bool;
	func_1398(var_543_bool, var_544_object, "health");
	if(!var_543_bool) //@nz
		var_524_float = 0.0;
	bool var_547_bool; object var_548_object;
	func_1398(var_547_bool, var_548_object, "armor");
	if(!var_547_bool) //@nz
		var_537_int = 0;
	else
		var_548_object->GetProperty("armor", var_537_int);
	string var_552_string; int var_553_int;
	var_527_int = var_553_int;
	func_1364(var_552_string, var_553_int);
	string var_538_string = "armor_" + var_552_string;
	bool var_558_bool; object var_559_object; string var_560_string;
	var_525_object = var_559_object;
	func_1398(var_558_bool, var_559_object, var_560_string);
	if(!var_558_bool) //@nz
		var_539_int = 0;
	else
		var_525_object->GetProperty(var_560_string, var_539_int);

	float var_562_float;
	func_1836(var_562_float, ((var_537_int + var_539_int) / 100.0), (float)1);
	float var_540_float;
	var_562_float = var_540_float;
	float var_541_float;
	var_525_object->GetProperty("health", var_541_float);
	float var_542_float = var_526_float * (1 - var_540_float);
	float var_572_float;
	func_1867(var_572_float, (var_541_float - var_542_float), (float)0, (float)1);
	var_525_object->SetProperty("health", var_572_float);
	bool var_578_bool; object var_579_object;
	var_525_object = var_579_object;
	func_1393(var_578_bool, var_579_object);
	if(var_578_bool != 0) {
		float var_580_float = -var_542_float;
		func_1926(var_580_float);
	}
	var_542_float = var_524_float;
	
}


void func_1946(object var_84_object)
{
	bool var_86_bool;
	@IsPlayerActor(var_84_object, var_86_bool);
	if(var_86_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1955(void)
{
	object var_107_object;
	@GetScene(var_107_object);
	object var_109_object;
	func_1820(var_109_object);
	@BroadcastMessage("battle", var_109_object, var_107_object);
}
EMIT "Stack[-1] = 0";


void func_1966(bool var_602_bool)
{
	bool var_604_bool;
	@GetVariable("god_mode", var_604_bool);
	var_604_bool = var_602_bool;
}


void func_432(object var_1_object, int var_2_int, bool var_4_bool)
{
	bool var_222_bool; bool var_223_bool; cvector var_224_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_222_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_222_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_223_bool, ("attack" + (var_2_int + 1)));
			if(!var_223_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_224_cvector, "all", "bjump");
		var_238_float = GetByIndex(var_224_cvector, 2);
		var_4_bool = -var_238_float;

	}
}


void func_1972(cvector var_129_cvector, cvector var_130_cvector, cvector var_131_cvector, float var_132_float)
{
	cvector var_139_cvector; float var_144_float;
	var_139_cvector = var_131_cvector - var_130_cvector;
	float var_140_float = 250000;
	var_145_float = GetByIndex(var_139_cvector, 1);
	float var_141_float = (var_145_float * 1000) - (var_132_float * var_132_float);
	float var_142_float = var_139_cvector | var_139_cvector;
	float var_149_float; float var_150_float; float var_151_float; float var_152_float;
	var_140_float = var_150_float;
	var_141_float = var_151_float;
	var_142_float = var_152_float;
	func_1843(var_149_float, var_150_float, var_151_float, var_152_float);
	float var_143_float;
	var_149_float = var_143_float;
	if(var_143_float < 0) {
		var_144_float = 1;
	} else {
		float var_163_float; float var_164_float; float var_165_float; float var_166_float; float var_167_float;
		var_140_float = var_164_float;
		var_141_float = var_165_float;
		var_142_float = var_166_float;
		var_167_float = sqrt(var_143_float);
		func_1850(var_164_float, var_165_float, var_166_float, var_167_float);
		var_144_float = sqrt(var_163_float);
	}
	var_129_cvector = (var_139_cvector + (([0.0, 500.0, 0.0] * var_144_float) * var_144_float)) / var_144_float;
	
}


void func_950(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1116(var_10_object);
}


void func_467(bool var_0_bool, float var_510_float, int var_511_int)
{
	object var_515_object; float var_516_float; float var_517_float;
	@GetVictim((var_510_float * 0.9), var_515_object);
	@ReportAttack(var_0_bool);
	if(var_515_object == var_0_bool) {
		float var_521_float; object var_522_object; int var_523_int;
		var_515_object = var_522_object;
		var_511_int = var_523_int;
		func_154(var_523_int);
		var_521_float = var_516_float;
		float var_524_float; object var_525_object; float var_526_float; int var_527_int;
		var_515_object = var_525_object;
		int var_528_int; object var_529_object; int var_530_int;
		var_515_object = var_529_object;
		var_511_int = var_530_int;
		func_157(var_530_int);
		var_528_int = var_527_int;
		func_1432(var_524_float, var_525_object, var_526_float, var_527_int);
		var_524_float = var_517_float;
		int var_585_int;
		func_160(var_585_int);
		@ReportHit(var_0_bool, var_585_int, var_517_float, var_526_float);
		object var_586_object; float var_587_float;
		var_515_object = var_586_object;
		var_517_float = var_587_float;
		func_162(var_586_object, var_587_float);
	}
}
EMIT "Stack[-3] = 0";


void func_2007(int var_96_int)
{
	int var_98_int;
	@GetVariable("branch", var_98_int);
	var_98_int = var_96_int;
}


// @pe
void func_2013(object var_14_object)
{
	int var_15_int;
	func_2007(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


void func_992(bool var_0_bool, object var_1_object, bool var_288_bool, object var_289_object, float var_290_float, float var_291_float, bool var_292_bool, bool var_293_bool)
{
	bool var_302_bool; object var_304_object; cvector var_305_cvector; cvector var_306_cvector; float var_308_float; object var_309_object;
	var_0_bool = false;
	var_1_object = var_289_object;
	bool var_303_bool;
	var_293_bool = var_303_bool;
	
	for(;;) {
		bool var_310_bool; object var_311_object;
		var_289_object = var_311_object;
		func_1132(var_310_bool, var_311_object);
		if(!var_310_bool) { //@nz
			var_288_bool = false;
			return 16;
		}
		var_289_object->GetPosition(var_305_cvector);
		@GetPosition(var_306_cvector);
		var_308_float = (var_305_cvector - var_306_cvector) | (var_305_cvector - var_306_cvector);
		bool var_315_bool = false;
		if(var_291_float > 0) {
			if(var_308_float > (var_291_float * var_291_float))
				var_315_bool = true;
		}
		if(var_315_bool != 0) {
			@Stop();
			var_288_bool = false;
			return 16;
		}
		if(var_308_float > (var_290_float * var_290_float)) {
			var_289_object->GetPFPosition(var_305_cvector);
			@FindPathTo(var_309_object, var_305_cvector);
			if(var_309_object != null) {
				var_309_object = var_304_object;
				var_309_object = null;
			}
			if(var_304_object != null) {
				if(var_303_bool == 0) goto Label_1045;
				var_303_bool = false;
				@RotatePath(var_304_object, var_302_bool);
				if(!var_302_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_328_string;
						func_1139(var_328_string);
						string var_329_string;
						func_1141(var_329_string);
						@FollowPath(var_304_object, var_292_bool, var_302_bool, var_328_string, var_329_string);
						if(!var_302_bool) { //@nz
							if(var_0_bool == 0) goto Label_1064;
							var_304_object = null;
						}
					EMIT "GOTO 0x429";

					Label_1064:
						} else {
					var_304_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_302_bool);
					if(!var_302_bool) { //@nz
						if(var_0_bool != 0) {
							var_304_object = null;
							goto Label_1092;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1092;
		}
			var_309_object = null;
			goto Label_1090;

		Label_1090:
			var_304_object = null;

		}
	Label_1092:
		for(;;) {
			var_288_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1505(bool var_591_bool, object var_592_object)
{
	object var_596_object;
	var_592_object = var_596_object;
	bool var_595_bool;
	func_1398(var_595_bool, var_596_object, "health");
	if(!var_595_bool) { //@nz
		var_591_bool = false;
		return 2;
	}
	bool var_599_bool = false;
	bool var_600_bool; object var_601_object;
	func_1393(var_600_bool, var_601_object);
	if(var_600_bool != 0) {
		bool var_602_bool;
		func_1966(var_602_bool);
		if(var_602_bool != 0)
			var_599_bool = true;
	}
	if(var_599_bool != 0) {
		var_591_bool = false;
		return 2;
	}
	float var_594_float;
	var_601_object->GetProperty("health", var_594_float);
	var_591_bool = var_594_float <= 0.0;
}


void func_2026(int var_21_int, int var_22_int)
{
	if(var_21_int > var_22_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_25_int = 0;
	if(var_21_int != var_22_int) {
		@irand(var_25_int, (var_22_int - var_21_int));
	} else if(var_21_int == 0) {
		return 4;
	}
	var_25_int += var_21_int;
	if(var_25_int == 0)
		return 4;
	int var_33_int;
	func_2128(var_33_int, "Money");
	bool var_26_bool;
	@AddItem(var_26_bool, var_33_int, 0, var_25_int);
	
}


void func_506(bool var_0_bool, object var_1_object, bool var_477_bool, float var_478_float)
{
	string var_486_string;
	func_847(var_486_string);
	int var_483_int;
	@irand(var_483_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_1955();
	@PlayAnimation("all", ("attack_begin" + (var_483_int + 1)));
	@WaitForAnimEnd();
	int var_485_int;
	func_815(var_485_int, var_486_string);
	bool var_507_bool;
	func_1577(var_507_bool, var_0_bool);
	if(!var_507_bool) { //@nz
		@StopAsync();
		var_477_bool = false;
		return 8;
	}
	float var_510_float; int var_511_int;
	var_478_float = var_510_float;
	var_483_int = var_511_int;
	func_467(var_486_string, var_510_float, var_511_int);
	bool var_484_bool;
	@HasAnimation(var_484_bool, "all", ("attack_middle" + var_483_int));
	if(var_484_bool != 0) {
		func_1955();
		@PlayAnimation("all", ("attack_middle" + var_483_int));
		@WaitForAnimEnd();
		func_847(var_486_string);
		bool var_616_bool;
		func_1577(var_616_bool, var_0_bool);
		if(!var_616_bool) { //@nz
			@StopAsync();
			var_477_bool = false;
			return 8;
		}
		float var_619_float; int var_620_int;
		var_478_float = var_619_float;
		func_467(var_486_string, var_619_float, var_620_int);
		var_485_int = 1;

		for(;;) {
			var_486_string = (("attack_middle" + var_620_int) + "_") + var_485_int;
			@HasAnimation(var_484_bool, "all", var_486_string);
			if(!var_484_bool) { //@nz
			} else {
				func_1955();
				@PlayAnimation("all", var_486_string);
				@WaitForAnimEnd();
				func_847(var_486_string);
				bool var_642_bool;
				func_1577(var_642_bool, var_0_bool);
				if(!var_642_bool) { //@nz
					@StopAsync();
					var_477_bool = false;
					return 8;
				}
				float var_645_float; int var_646_int;
				var_478_float = var_645_float;
				var_483_int = var_646_int;
				func_467(var_486_string, var_645_float, var_646_int);
				var_485_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_483_int));
		bool var_631_bool;
		func_857(var_631_bool);
		if(var_631_bool != 0) {
			bool var_632_bool;
			func_645(var_632_bool, 0.45);
			@StopAsync();
		}
		var_477_bool = true;
		return 8;

	}
}


