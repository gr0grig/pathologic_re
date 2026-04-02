task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		bool var_7_bool;
		@IsOverrideActive(var_7_bool);
		if(!var_7_bool) { //@nz
			object var_9_object;
			var_5_bool = var_9_object;
			func_853(var_9_object);
		}
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, object var_4_object, cvector var_5_cvector, bool var_6_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool)
	{
	
		for(;;) {
			@SetTimer(110, 0.3);
			func_259(var_3_cvector, var_4_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTimer(bool var_0_bool, bool var_1_bool, int var_2_int, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		if(var_5_bool != 110) {
		}
		bool var_7_bool;
		@IsInWalkMode(var_7_bool);
		if(var_7_bool != 0) {
			bool var_11_bool;
			func_174(var_11_bool);
			if(var_11_bool != 0)
				@SwitchToRun();
			else
				@SwitchToWalk();
		}
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		func_199();
		object var_7_object;
		var_5_bool = var_7_object;
		func_1018();
	}

	// @pe
	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		object var_7_object;
		var_5_bool = var_7_object;
		bool var_6_bool;
		func_601(var_6_bool, var_7_object);
		if(!var_6_bool) { //@nz
		}
		func_199();
		object var_42_object;
		var_5_bool = var_42_object;
		func_1036(var_42_object);
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		object var_7_object;
		var_5_bool = var_7_object;
		bool var_6_bool;
		func_1050(var_6_bool, var_7_object);
		if(var_6_bool != 0) {
			func_199();
			object var_46_object;
			var_5_bool = var_46_object;
			func_1063(var_46_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		object var_7_object;
		var_5_bool = var_7_object;
		bool var_6_bool;
		func_1071(var_6_bool, var_7_object);
		if(var_6_bool != 0) {
			func_199();
			object var_46_object;
			var_5_bool = var_46_object;
			func_1084(var_46_object);
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		@RequestClearPath(var_5_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool)
	{
		@Stop();
	}

}


task task_2
{
}


task task_3
{
	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, int var_5_int)
	{
		cvector var_10_cvector; float var_11_float; cvector var_12_cvector; float var_13_float;
		if(var_5_int != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_10_cvector);
			@FindDirLength(var_11_float, var_10_cvector, 7000.0);
			cvector var_19_cvector;
			func_344(var_13_float, var_19_cvector, 1.7453294);
			var_19_cvector = var_12_cvector;
			var_13_float = var_12_cvector | var_12_cvector;
			bool var_49_bool = false;
			if(var_13_float >= 2500.0) {
				bool var_52_bool;
				var_56_bool = var_13_float >= ((var_11_float * var_11_float) * 2.25);
				if(var_56_bool != 1) {
					bool var_57_bool;
					func_515(true, var_57_bool);
					if(var_57_bool != 1)
						var_52_bool = false;
				}
				if(var_52_bool != 0)
					var_49_bool = true;
			}
			if(var_49_bool == 0) goto Label_498;
			@Stop();
			cvector var_77_cvector;
			func_531(var_77_cvector);
			var_1_bool = var_77_cvector + var_12_cvector;
		}
	Label_498:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object)
	{
		func_499(var_5_object);
		object var_7_object;
		var_5_object = var_7_object;
		func_1018();
	}

}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, int var_6_int, float var_7_float, float var_8_float)
{
	object var_9_object;
	var_5_object = var_9_object;
	int var_10_int;
	var_6_int = var_10_int;
	float var_11_float;
	var_7_float = var_11_float;
	func_669(var_9_object, var_10_int, var_11_float);
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, int var_6_int, float var_7_float, float var_8_float, cvector var_9_cvector, cvector var_10_cvector)
{
	object var_11_object;
	var_5_object = var_11_object;
	int var_12_int;
	var_6_int = var_12_int;
	float var_13_float;
	var_7_float = var_13_float;
	cvector var_14_cvector;
	var_9_cvector = var_14_cvector;
	cvector var_15_cvector;
	var_10_cvector = var_15_cvector;
	func_737(var_13_float, var_14_cvector, var_15_cvector);
}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, string var_6_string)
{
	float var_8_float;
	if(var_6_string == "health") {
		@GetProperty("health", var_8_float);
		if(var_8_float <= 0)
			@SignalDeath(var_5_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object)
{
	bool var_6_bool; object var_7_object;
	func_543(var_6_bool, var_7_object);
	if(var_6_bool != 0) {
		object var_10_object;
		func_818(var_10_object);
		@ReportReputationChange(var_7_object, var_10_object, 0.05, true);
	}
	object var_15_object;
	var_5_object = var_15_object;
	func_1044(var_15_object);
}


// @pe
void func_0(object var_17_object)
{
	object var_19_object;
	var_17_object = var_19_object;
	bool var_18_bool;
	func_543(var_18_bool, var_19_object);
	if(var_18_bool != 0)
		func_938();
	func_914();
	object var_96_object;
	var_17_object = var_96_object;
	func_17(var_96_object);
}


void func_897(string var_82_string)
{
	object var_86_object;
	@CreateInvItem(var_86_object);
	var_86_object->SetItemName(var_82_string);
	var_86_object->SetProperty("Organ", 1);
	int var_87_int;
	var_86_object->GetItemID(var_87_int);
	bool var_88_bool;
	@AddItem(var_88_bool, var_86_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_259(bool var_0_bool, bool var_1_bool)
{
	float var_13_float; cvector var_14_cvector; cvector var_15_cvector; bool var_16_bool; object var_17_object; bool var_18_bool;
	@rand(var_13_float, 0.5);
	@Sleep(var_13_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_271:
				@GetPosition(var_15_cvector);
				float var_22_float;
				func_318(var_22_float);
				@GetRandomPFPointInCircle(var_14_cvector, var_15_cvector, var_22_float, var_16_bool);
				if(var_16_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_271;
			}
				var_1_bool = false;
		}
		}
		goto Label_287;

	Label_287:
		object var_26_object; cvector var_27_cvector;
		var_14_cvector = var_27_cvector;
		func_337(var_26_object, var_27_cvector);
		var_26_object = var_17_object;
		if(var_17_object != null) {
			@RotatePath(var_17_object, var_18_bool);
			if(var_18_bool != 0) {
				bool var_32_bool;
				func_174(var_32_bool);
				@FollowPath(var_17_object, var_32_bool, var_18_bool);
				var_17_object = null;
				if(var_18_bool != 0) {
					TaskCall(2);
					func_343();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_17_object = null;
	}
	
}


void func_515(bool var_0_bool, bool var_57_bool)
{
	cvector var_60_cvector;
	@GetDirection(var_60_cvector);
	cvector var_62_cvector;
	func_536(var_62_cvector, var_0_bool);
	cvector var_61_cvector;
	var_62_cvector = var_61_cvector;
	float var_68_float; cvector var_69_cvector; cvector var_70_cvector;
	var_60_cvector = var_69_cvector;
	var_61_cvector = var_70_cvector;
	func_839(var_68_float, var_69_cvector, var_70_cvector);
	var_57_bool = var_68_float >= -0.34202012;
}


// @pe
void func_133(string var_119_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_120_string;
	var_119_string = var_120_string;
	func_777(var_120_string);
	@PlayAnimation("all", var_119_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_119_string);
	@RemoveEnvelope();
}


void func_777(string var_120_string)
{
	bool var_129_bool; int var_130_int; bool var_131_bool; int var_132_int; bool var_133_bool; float var_134_float; cvector var_135_cvector; cvector var_136_cvector;
	@IsExisting3DSound(var_129_bool, var_120_string);
	if(!var_129_bool) { //@nz
		var_130_int = 0;

		for(;;) {
			@IsExisting3DSound(var_131_bool, (var_120_string + (var_130_int + 1)));
			if(!var_131_bool) { //@nz
				break;
			Label_797:
				@irand(var_132_int, var_130_int);
				var_120_string += (var_132_int + 1);
	}
			@Is3DSoundLoaded(var_133_bool, var_120_string);
			if(var_133_bool != 0) {
				@GetEyesHeight(var_134_float);
				@GetDirection(var_135_cvector);
				var_136_cvector = var_135_cvector * 50;
				var_147_float = GetByIndex(var_136_cvector, 1);
				SetByIndex(var_136_cvector, 1) = (var_147_float + var_134_float);
				@PlayGlobalSound(var_120_string, var_136_cvector);
			}
		}
		var_130_int += 1;
	}
	var_142_bool = !var_130_int; //@nz
	if(var_142_bool == 0) goto Label_797;
}


// @pe
void func_1036(object var_42_object)
{
	object var_43_object;
	var_42_object = var_43_object;
	TaskCall(3);
	func_374(var_44_object, var_45_cvector, var_46_bool, var_43_object);
	TaskReturn();
}


// @pe
void func_17(object var_96_object)
{
	object var_97_object;
	var_96_object = var_97_object;
	func_42(var_97_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_914(void)
{
	int var_76_int;
	func_847(var_76_int);
	if(var_76_int != 1) {
	}
	func_897("liver");
	func_897("kidney");
	func_897("heart");
	func_897("blood");
}


void func_531(cvector var_77_cvector)
{
	cvector var_79_cvector;
	@GetPosition(var_79_cvector);
	var_79_cvector = var_77_cvector;
}


// @pe
void func_1044(object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	func_979(var_16_object);
}


void func_536(cvector var_39_cvector, object var_40_object)
{
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	var_40_object->GetPosition(var_44_cvector);
	var_39_cvector = var_44_cvector - var_43_cvector;
}


void func_1050(bool var_6_bool, object var_7_object)
{
	bool var_10_bool; object var_11_object;
	func_601(var_10_bool, var_11_object);
	if(!var_10_bool) //@nz
		var_6_bool = false;
	bool var_9_bool;
	@IsPlayerActor(var_11_object, var_9_bool);
	var_9_bool = var_6_bool;
}


void func_669(object var_9_object, int var_10_int, float var_11_float)
{
	cvector var_21_cvector; object var_22_object; int var_23_int; bool var_24_bool; cvector var_25_cvector; cvector var_26_cvector;
	bool var_30_bool = false;
	bool var_31_bool = false;
	if(var_9_object != 0) {
		if(var_10_int != 4)
			var_31_bool = true;
	}
	if(var_31_bool != 0) {
		if(var_10_int != 5)
			var_30_bool = true;
	}
	if(var_30_bool != 0) {
		cvector var_37_cvector; cvector var_38_cvector;
		cvector var_39_cvector; object var_40_object;
		var_9_object = var_40_object;
		func_536(var_39_cvector, var_40_object);
		var_39_cvector = var_38_cvector;
		func_824(var_37_cvector, var_38_cvector);
		var_37_cvector = var_21_cvector;
		@CreateVectorVector(var_22_object);
		var_23_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_23_int), var_24_bool, var_25_cvector, var_26_cvector);
			if(!var_24_bool) { //@nz
				break;
			Label_731:
				var_22_object = null;
	}
			object var_99_object;
			var_9_object = var_99_object;
			func_625(var_99_object);
		}
		if((var_26_cvector | var_21_cvector) >= 0.70710677)
			var_22_object->add(var_25_cvector);
		var_23_int += 1;
	}
	int var_27_int;
	var_22_object->size(var_27_int);
	if(var_27_int == 0) goto Label_731;
	int var_28_int;
	@irand(var_28_int, var_27_int);
	cvector var_29_cvector;
	var_22_object->get(var_29_cvector, var_28_int);
	object var_54_object; int var_55_int; float var_56_float; cvector var_57_cvector; cvector var_58_cvector;
	var_9_object = var_54_object;
	var_10_int = var_55_int;
	var_11_float = var_56_float;
	var_29_cvector = var_57_cvector;
	var_58_cvector = -var_21_cvector;
	func_737(var_56_float, var_57_cvector, var_58_cvector);
}


void func_543(bool var_6_bool, object var_7_object)
{
	bool var_9_bool;
	@IsPlayerActor(var_7_object, var_9_bool);
	var_9_bool = var_6_bool;
}


void func_548(bool var_32_bool, object var_33_object, string var_34_string)
{
	var_39_bool = IsFuncExist(var_33_object, "HasProperty", 2);
	if(!var_39_bool) { //@nz
		var_32_bool = false;
		return 2;
	}
	bool var_36_bool;
	var_33_object->HasProperty(var_34_string, var_36_bool);
	var_36_bool = var_32_bool;
}


// @pe
void func_1063(object var_46_object)
{
	object var_47_object;
	var_46_object = var_47_object;
	TaskCall(3);
	func_374(var_48_object, var_49_cvector, var_50_bool, var_47_object);
	TaskReturn();
}


void func_938(void)
{
	@ClearSubContainer(0);
	func_866(500, 1000);
	func_762("rifle_ammo", 1, 3, 3);
	func_762("rusk", 1, 3, 2);
	func_751("bandage", 1, 6);
	func_751("tourniquet", 1, 6);
}


void func_42(object var_97_object)
{
	cvector var_108_cvector; cvector var_109_cvector; cvector var_110_cvector; cvector var_111_cvector; string var_112_string; object var_113_object; bool var_114_bool; bool var_115_bool; float var_116_float; cvector var_117_cvector;
	if(var_97_object == null) {
		func_133("fdie");
	} else {
		var_97_object->GetPosition(var_108_cvector);
		@GetPosition(var_109_cvector);
		@GetDirection(var_110_cvector);
		var_111_cvector = var_109_cvector - var_108_cvector;
		var_151_float = GetByIndex(var_111_cvector, 0);
		var_152_float = GetByIndex(var_110_cvector, 0);
		var_154_float = GetByIndex(var_111_cvector, 2);
		var_155_float = GetByIndex(var_110_cvector, 2);
		if(((var_151_float * var_152_float) + (var_154_float * var_155_float)) >= 0)
			var_112_string = "fdie";
		else
			var_112_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_97_object = var_113_object;
		var_162_bool = IsFuncExist(var_97_object, "GetScriptProperty", 2);
		if(var_162_bool != 0) {
			var_97_object->HasScriptProperty(var_114_bool, "Owner");
			if(var_114_bool != 0) {
				var_97_object->GetScriptProperty(var_113_object, "Owner");
				if(var_113_object == null)
					var_97_object = var_113_object;
			}
		}
		var_169_bool = IsFuncExist(var_113_object, "@GetEyesHeight", 1);
		if(var_169_bool != 0) {
			var_113_object->GetEyesHeight(var_116_float);
			var_117_cvector = [0.0, 0.0, 0.0];
			var_170_float = GetByIndex(var_117_cvector, 1);
			var_116_float = var_170_float;
			SetByIndex(var_117_cvector, 1) = var_170_float;
			@LookAsync(var_97_object, "head", var_117_cvector);
			var_115_bool = true;
		} else {
			var_115_bool = false;

		}
		string var_172_string;
		var_112_string = var_172_string;
		func_777(var_172_string);
		@PlayAnimation("all", var_112_string);
		@WaitForAnimEnd();
		if(var_115_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_112_string);
		@RemoveEnvelope();
		var_113_object = null;
	}
	
}


void func_174(bool var_32_bool)
{
	float var_34_float;
	@GetBrightness(var_34_float);
	var_32_bool = var_34_float >= 0.5;
}


void func_1071(bool var_6_bool, object var_7_object)
{
	bool var_10_bool; object var_11_object;
	func_601(var_10_bool, var_11_object);
	if(!var_10_bool) //@nz
		var_6_bool = false;
	bool var_9_bool;
	@IsPlayerActor(var_11_object, var_9_bool);
	var_9_bool = var_6_bool;
}


void func_560(bool var_25_bool, object var_26_object)
{
	bool var_28_bool;
	var_26_object->IsDead(var_28_bool);
	var_28_bool = var_25_bool;
}


void func_818(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_565(bool var_14_bool, object var_15_object)
{
	if(var_15_object == null) {
		var_14_bool = false;
		return 4;
	}
	bool var_21_bool = false;
	var_24_bool = IsFuncExist(var_15_object, "IsDead", 1);
	if(var_24_bool != 0) {
		bool var_25_bool; object var_26_object;
		var_15_object = var_26_object;
		func_560(var_25_bool, var_26_object);
		if(var_25_bool != 0)
			var_21_bool = true;
	}
	if(var_21_bool != 0) {
		var_14_bool = false;
		return 4;
	}
	object var_18_object;
	@GetScene(var_18_object);
	if(var_18_object == null) {
		var_14_bool = false;
		return 4;
	}
	object var_19_object;
	var_15_object->GetScene(var_19_object);
	if(var_18_object != var_19_object) {
		var_14_bool = false;
		return 4;
	}
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_824(cvector var_37_cvector, cvector var_38_cvector)
{
	float var_46_float = sqrt(var_38_cvector | var_38_cvector);
	if(var_46_float < 0.000001)
		var_37_cvector = [0.0, 0.0, 0.0];
	var_37_cvector = var_38_cvector / var_46_float;
}


// @pe
void func_1084(object var_46_object)
{
	object var_47_object;
	var_46_object = var_47_object;
	TaskCall(3);
	func_374(var_48_object, var_49_cvector, var_50_bool, var_47_object);
	TaskReturn();
}


void func_318(float var_22_float)
{
	float var_24_float;
	@GetCameraFarDistance(var_24_float);
	var_24_float = var_22_float;
}


void func_834(bool var_52_bool, int var_53_int, int var_54_int)
{
	int var_56_int;
	@irand(var_56_int, var_54_int);
	var_52_bool = var_56_int < var_53_int;
}


// @pe
void func_199(void)
{
	func_330(var_4_cvector, var_5_bool);
	@KillTimer(110);
}


// @pe
void func_839(float var_68_float, cvector var_69_cvector, cvector var_70_cvector)
{
	var_75_float = sqrt((var_69_cvector | var_69_cvector) * (var_70_cvector | var_70_cvector));
	var_68_float = (var_69_cvector | var_70_cvector) / var_75_float;
}


void func_330(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_974(int var_37_int, string var_38_string)
{
	int var_40_int;
	@GetInvItemByName(var_40_int, var_38_string);
	var_40_int = var_37_int;
}


void func_847(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	var_78_int = var_76_int;
}


void func_337(object var_26_object, cvector var_27_cvector)
{
	object var_29_object;
	@FindShiftedPathTo(var_29_object, var_27_cvector);
	var_29_object = var_26_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_979(object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	TaskCall(0);
	func_0(var_17_object);
	TaskReturn();
}


// @pe
void func_853(object var_9_object)
{
	int var_10_int;
	func_847(var_10_int);
	if(var_10_int == 1)
		@WorkWithCorpse(var_9_object);
	else
		@Barter(var_9_object);
	
}


void func_343(void)
{
}


void func_344(bool var_0_bool, cvector var_19_cvector, float var_20_float)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_0_bool->GetPosition(var_28_cvector); //@t
	cvector var_29_cvector;
	@GetDirection(var_29_cvector);
	cvector var_33_cvector;
	cvector var_35_cvector;
	func_824(var_35_cvector, (var_27_cvector - var_28_cvector));
	func_824(var_33_cvector, (var_35_cvector + (var_29_cvector * 0.75)));
	cvector var_30_cvector;
	var_33_cvector = var_30_cvector;
	cvector var_31_cvector;
	float var_32_float;
	@FindLongestDir(var_31_cvector, var_32_float, var_30_cvector, var_20_float, 32, 7000.0);
	if((var_32_float - 100) < 0)
		var_32_float = 0;
	var_19_cvector = var_31_cvector * var_32_float;
}


void func_601(bool var_10_bool, object var_11_object)
{
	object var_15_object;
	var_11_object = var_15_object;
	bool var_14_bool;
	func_565(var_14_bool, var_15_object);
	if(!var_14_bool) { //@nz
		var_10_bool = false;
		return 2;
	}
	bool var_32_bool; object var_33_object;
	func_548(var_32_bool, var_33_object, "noaccess");
	if(!var_32_bool) { //@nz
		var_10_bool = true;
		return 2;
	}
	int var_13_int;
	var_33_object->GetProperty("noaccess", var_13_int);
	var_10_bool = var_13_int == 0;
}


void func_737(object var_11_object, cvector var_14_cvector, cvector var_15_cvector)
{
	object var_18_object;
	@GetScene(var_18_object);
	object var_19_object;
	@AddActorByType(var_19_object, "scripted", var_18_object, var_14_cvector, var_15_cvector, "blood_dir.xml");
	object var_22_object;
	var_11_object = var_22_object;
	func_625(var_22_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_866(int var_25_int, int var_26_int)
{
	if(var_25_int > var_26_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_29_int = 0;
	if(var_25_int != var_26_int) {
		@irand(var_29_int, (var_26_int - var_25_int));
	} else if(var_25_int == 0) {
		return 4;
	}
	var_29_int += var_25_int;
	if(var_29_int == 0)
		return 4;
	int var_37_int;
	func_974(var_37_int, "Money");
	bool var_30_bool;
	@AddItem(var_30_bool, var_37_int, 0, var_29_int);
	
}


void func_751(string var_64_string, int var_65_int, int var_66_int)
{
	bool var_68_bool;
	int var_70_int;
	var_65_int = var_70_int;
	int var_71_int;
	var_66_int = var_71_int;
	bool var_69_bool;
	func_834(var_69_bool, var_70_int, var_71_int);
	if(var_69_bool != 0)
		@AddItem(var_68_bool, var_64_string, 0);
}


void func_625(object var_22_object)
{
	string var_36_string;
	if(var_22_object == null)
		return 14;
	bool var_30_bool;
	@IsDead(var_30_bool);
	if(var_30_bool != 0)
		return 14;
	int var_31_int;
	@GetSecondaryAnimationType(var_31_int);
	if(var_31_int < 0)
		return 14;
	cvector var_32_cvector;
	var_22_object->GetPosition(var_32_cvector);
	cvector var_33_cvector;
	@GetPosition(var_33_cvector);
	cvector var_34_cvector;
	@GetDirection(var_34_cvector);
	cvector var_35_cvector = var_33_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_35_cvector, 0);
	var_42_float = GetByIndex(var_34_cvector, 0);
	var_44_float = GetByIndex(var_35_cvector, 2);
	var_45_float = GetByIndex(var_34_cvector, 2);
	if(((var_41_float * var_42_float) + (var_44_float * var_45_float)) >= 0)
		var_36_string = "fhit";
	else
		var_36_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_36_string + "1"), (var_36_string + "2"), -10);
	
}


void func_499(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_374(bool var_0_bool, bool var_1_bool, object var_2_object, object var_47_object)
{
	float var_57_float; cvector var_59_cvector; float var_60_float;
	cvector var_61_cvector;
	func_344(var_60_float, var_61_cvector, 1.7453294);
	cvector var_56_cvector;
	var_61_cvector = var_56_cvector;
	if((var_56_cvector | var_56_cvector) < 2500.0) {
		cvector var_93_cvector;
		func_344(var_60_float, var_93_cvector, 2.6179938);
		var_93_cvector = var_56_cvector;
		var_57_float = var_56_cvector | var_56_cvector;
		if(var_57_float < 2500.0) {
			var_98_float = sqrt(var_57_float);
			@Trace("Can't retreat, distance: " + var_98_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_101_float = GetByIndex(var_56_cvector, 0);
	var_102_float = GetByIndex(var_56_cvector, 2);
	@Rotate(var_101_float, var_102_float);
	cvector var_103_cvector;
	func_531(var_103_cvector);
	@SetTimer(120, 0.5);
	
Label_416:
	bool var_58_bool;
	@MovePoint((var_103_cvector + var_56_cvector), 1, var_58_bool);
	if(var_58_bool != 0) {
		if(var_47_object == null) {
			goto Label_446;
		EMIT "GOTO 0x1bc";

		Label_446:
			for(;;) {
				return 10;
		}
			cvector var_111_cvector;
			func_344(var_60_float, var_111_cvector, 2.6179938);
			var_111_cvector = var_59_cvector;
			if((var_59_cvector | var_59_cvector) >= 2500.0) {
				cvector var_115_cvector;
				func_531(var_115_cvector);
				var_1_bool = var_115_cvector + var_59_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_416; //@nz

	}
}


void func_762(string var_44_string, int var_45_int, int var_46_int, int var_47_int)
{
	int var_50_int; bool var_51_bool;
	int var_53_int;
	var_45_int = var_53_int;
	int var_54_int;
	var_46_int = var_54_int;
	bool var_52_bool;
	func_834(var_52_bool, var_53_int, var_54_int);
	if(var_52_bool != 0) {
		@irand(var_50_int, var_47_int);
		@AddItem(var_51_bool, var_44_string, 0, (var_50_int + 1));
	}
}


