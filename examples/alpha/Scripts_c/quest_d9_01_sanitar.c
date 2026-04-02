// @GLOBALS: 0:object:,1:object:,2:float:,3:bool:,4:object:

maintask task_0
{
	void init(object var_0_object, bool var_1_bool)
	{
		bool var_5_bool;
		func_768();
		@SetTimer(75, 0.5);
		cvector var_4_cvector;
		@GetDirection(var_4_cvector);
	
		for(;;) {
			@Hold();

			for(;;) {
				var_31_float = GetByIndex(var_4_cvector, 0);
				var_32_float = GetByIndex(var_4_cvector, 2);
				@Rotate(var_31_float, var_32_float, var_5_bool);
				var_33_bool = !var_5_bool; //@nz
				if(var_33_bool == 0) goto Label_19;
			}

		Label_19:
		}
	}
	EMIT "Return(); Pop(4)";

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool)
	{
		object var_4_object;
		var_2_bool = var_4_object;
		bool var_3_bool;
		func_1136(var_3_bool, var_4_object);
		if(var_3_bool != 0) {
			object var_72_object;
			var_2_bool = var_72_object;
			func_95(var_72_object, false);
		}
	}

	// @pe
	void OnHear(object actor, object var_1_object, bool var_2_bool)
	{
		object var_4_object;
		var_2_bool = var_4_object;
		bool var_3_bool;
		func_1150(var_3_bool, var_4_object);
		if(var_3_bool != 0) {
			object var_72_object;
			var_2_bool = var_72_object;
			func_95(var_72_object, false);
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, bool var_2_bool)
	{
		object var_4_object;
		var_2_bool = var_4_object;
		bool var_3_bool;
		func_575(var_3_bool, var_4_object);
		if(var_3_bool != 0) {
			object var_37_object;
			var_2_bool = var_37_object;
			func_946(var_37_object);
			object var_47_object;
			var_2_bool = var_47_object;
			func_95(var_47_object, true);
		}
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, bool var_3_bool)
	{
		object var_5_object;
		var_2_object = var_5_object;
		object var_6_object;
		var_3_bool = var_6_object;
		bool var_4_bool;
		func_998(var_4_bool, var_5_object, var_6_object);
		if(var_4_bool != 0) {
			bool var_37_bool; object var_38_object;
			var_2_object = var_38_object;
			func_575(var_37_bool, var_38_object);
			if(var_37_bool != 0) {
				object var_65_object;
				var_2_object = var_65_object;
				func_946(var_65_object);
				object var_75_object;
				var_2_object = var_75_object;
				func_95(var_75_object, false);
			}
		}
	}

	// @pe
	void OnTimer(int iID, object var_1_object, bool var_2_bool)
	{
		if(var_2_bool == 75) {
			@ResetAAS();
		} else {
			int var_5_int;
			var_2_bool = var_5_int;
			func_1038(var_5_int);
		}
	
	}

}


task task_1
{
	// @pe
	void OnSee(object actor, bool var_1_bool, object var_2_object)
	{
		if(var_1_bool != 0)
			return 0;
		bool var_4_bool = false;
		bool var_5_bool; object var_6_object;
		var_2_object = var_6_object;
		func_1136(var_5_bool, var_6_object);
		if(var_5_bool != 0) {
			bool var_74_bool; object var_76_object;
			var_2_object = var_76_object;
			func_1164(var_74_bool, actor, var_76_object);
			if(var_74_bool != 0)
				var_4_bool = true;
		}
		if(var_4_bool != 0) {
			actor = var_2_object;
			@Face(var_2_object);
		}
	}

	// @pe
	void OnHear(object actor, bool var_1_bool, object var_2_object)
	{
		if(var_1_bool != 0)
			return 0;
		bool var_4_bool = false;
		bool var_5_bool; object var_6_object;
		var_2_object = var_6_object;
		func_1150(var_5_bool, var_6_object);
		if(var_5_bool != 0) {
			bool var_74_bool; object var_76_object;
			var_2_object = var_76_object;
			func_1164(var_74_bool, actor, var_76_object);
			if(var_74_bool != 0)
				var_4_bool = true;
		}
		if(var_4_bool != 0) {
			actor = var_2_object;
			@Face(var_2_object);
		}
	}

	// @pe
		void OnAttacked(object actor, bool var_1_bool, object var_2_object, object var_3_object, object var_37_object)
		{
		object var_38_object;
		var_37_object = var_38_object;
		func_946(var_38_object);
		bool var_48_bool = true;
		bool var_49_bool; object var_50_object;
		var_37_object = var_50_object;
		func_575(var_49_bool, var_50_object);
		var_77_bool = !var_49_bool; //@nz
		if(var_77_bool != 1) {
			bool var_78_bool; object var_79_object;
			var_37_object = var_79_object;
			func_1123(var_78_bool, var_79_object);
			var_85_bool = !var_78_bool; //@nz
			if(var_85_bool != 1)
				var_48_bool = false;
		}
		if(var_48_bool != 0)
			return 0;
		actor = var_37_object;
		var_1_bool = true;
		@Face(var_37_object);
		}

	// @pe
	void OnPlayerDamage(object actor, bool var_1_bool, object var_2_object, object var_3_object)
	{
		object var_5_object;
		var_2_object = var_5_object;
		object var_6_object;
		var_3_object = var_6_object;
		bool var_4_bool;
		func_998(var_4_bool, var_5_object, var_6_object);
		if(var_4_bool != 0) {
			object var_37_object;
			var_2_object = var_37_object;
			func_225();
		}
	}

	// @pe
	void OnTimer(object var_0_object, bool var_1_bool, int var_2_int)
	{
		if(var_2_int == 75) {
			@ResetAAS();
		} else {
			int var_5_int;
			var_2_int = var_5_int;
			func_1038(var_5_int);
		}
	
	}

}


task task_2
{
	void OnUse(object actor, bool var_1_bool, object var_2_object)
	{
		bool var_4_bool;
		@IsOverrideActive(var_4_bool);
		if(!var_4_bool) //@nz
			@WorkWithCorpse(var_2_object);
	}

	// @pe
	void OnHit(object actor, bool var_1_bool, object var_2_object, int var_3_int, float var_4_float, float var_5_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, bool var_1_bool, object var_2_object, string var_3_string)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, object var_2_object)
	{
	}

}


// @pe
void OnHit(object actor, bool var_1_bool, object var_2_object, int var_3_int, float var_4_float, float var_5_float)
{
	object var_6_object;
	var_2_object = var_6_object;
	int var_7_int;
	var_3_int = var_7_int;
	float var_8_float;
	var_4_float = var_8_float;
	func_599(var_7_int, var_8_float);
}


void OnPropertyChange(object var_0_object, bool var_1_bool, object var_2_object, string var_3_string)
{
	float var_5_float;
	if(var_3_string == "health") {
		@GetProperty("health", var_5_float);
		if(var_5_float <= 0)
			@SignalDeath(var_2_object);
	}
}


// @pe
void OnDeath(object actor, bool var_1_bool, object var_2_object)
{
	object var_3_object;
	var_2_object = var_3_object;
	func_963(var_3_object);
}


void func_768(void)
{
	var_12_object = GlobalVars[4];
	object var_13_object;
	func_690(var_13_object);
	var_13_object = var_12_object;
	GlobalVars[4] = var_12_object;
	float var_9_float;
	@GetAttackDistance(var_9_float);
	var_16_float = GlobalVars[2];
	GlobalVars[2] = (var_9_float / 600.0);
	object var_10_object;
	@GetScene(var_10_object);
	object var_11_object;
	@AddActorByType(var_11_object, "flame", var_10_object, [0.0, 0.0, 0.0]);
	object var_20_object;
	func_666(var_20_object);
	var_11_object->Attach(var_20_object, "flame");
	var_24_bool = GlobalVars[3];
	GlobalVars[3] = false;
	var_11_object->SetLength(0.05);
	var_26_object = GlobalVars[0];
	var_11_object = var_26_object;
	GlobalVars[0] = var_26_object;
	@SetTimer(70, 0.1);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_896(object var_158_object)
{
	cvector var_161_cvector; float var_162_float;
	var_158_object->GetPosition(var_161_cvector);
	var_165_bool = IsFuncExist(var_158_object, "@GetHeight", 1);
	if(var_165_bool != 0) {
		var_158_object->GetHeight(var_162_float);
		var_166_float = GetByIndex(var_161_cvector, 1);
		SetByIndex(var_161_cvector, 1) = (var_166_float + (var_162_float / 2));
	}
	cvector var_169_cvector;
	var_161_cvector = var_169_cvector;
	func_865(var_169_cvector);
}


// @pe
void func_1164(bool var_74_bool, object var_75_object, object var_76_object)
{
	if(var_76_object == null)
		var_74_bool = false;
	var_74_bool = true;
	bool var_78_bool; object var_79_object;
	var_75_object = var_79_object;
	func_1190(var_78_bool, var_79_object);
	var_80_bool = !var_78_bool; //@nz
	if(var_80_bool != 1) {
		float var_81_float; object var_82_object;
		var_76_object = var_82_object;
		func_450(var_81_float, var_82_object);
		float var_83_float; object var_84_object;
		var_75_object = var_84_object;
		func_450(var_83_float, var_84_object);
		var_87_bool = var_81_float < (var_83_float - 25);
		if(var_87_bool != 1)
			var_74_bool = false;
	}
}


void func_1038(int var_5_int)
{
	object var_15_object; bool var_16_bool; float var_17_float; float var_18_float; float var_19_float;
	if(var_5_int != 70)
		return 14;
	var_22_object = GlobalVars[0];
	if(var_22_object == null)
		return 14;
	var_24_object = GlobalVars[0];
	object var_13_object;
	float var_14_float;
	var_24_object->Intersect(var_13_object, var_14_float);
	var_25_object = GlobalVars[0];
	var_26_bool = GlobalVars[3];
	if(var_26_bool != 0) {
		float var_27_float; float var_28_float; float var_29_float;
		var_14_float = var_28_float;
		var_30_float = GlobalVars[2];
		var_30_float = var_29_float;
		func_672(var_27_float, var_28_float, var_29_float);
	} else {
					var_109_float = 0.05;
	}
	var_25_object->SetLength(var_27_float);
	
	for(;;) {
		var_13_object->Next(var_16_bool, var_15_object);
		if(var_16_bool != 0) {
			bool var_33_bool = false;
			if(var_15_object != null) {
				object var_35_object;
				func_666(var_35_object);
				if(var_15_object != var_35_object)
					var_33_bool = true;
			}
			if(var_33_bool != 0) {
				float var_39_float; object var_40_object;
				var_15_object = var_40_object;
				func_470(var_39_float, var_40_object, 0.1, 1);
				var_39_float = var_17_float;
				bool var_94_bool; object var_95_object;
				var_15_object = var_95_object;
				func_458(var_94_bool, var_95_object, "disease");
				if(var_94_bool != 0) {
					var_15_object->GetProperty("disease", var_18_float);
					if(var_18_float <= 0.02)
						var_18_float = 0;
					else
						var_18_float -= 0.02;
				return 14;

				}
				var_15_object->SetProperty("disease", var_18_float);
			}
			bool var_101_bool; object var_102_object;
			var_15_object = var_102_object;
			func_458(var_101_bool, var_102_object, "fire");
			if(var_101_bool != 0) {
				var_15_object->GetProperty("fire", var_19_float);
				var_15_object->SetProperty("fire", (var_19_float + 0.1));
			}
		}
	}
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-7] = 0";


void func_915(bool var_12_bool, object var_13_object)
{
	bool var_18_bool; object var_19_object;
	func_575(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_12_bool = false;
		return 4;
	}
	var_53_object = GlobalVars[4];
	bool var_16_bool;
	var_53_object->in(var_16_bool, var_19_object);
	if(var_16_bool != 0) {
		var_12_bool = true;
		return 4;
	}
	bool var_55_bool; object var_56_object;
	func_458(var_55_bool, var_56_object, "disease");
	if(!var_55_bool) { //@nz
		var_12_bool = false;
		return 4;
	}
	float var_17_float;
	var_56_object->GetProperty("disease", var_17_float);
	var_12_bool = var_17_float > 0;
}


// @pe
void func_276(object var_4_object)
{
	@KillTimer(75);
	object var_6_object;
	var_4_object = var_6_object;
	func_285(var_6_object);
}


void func_534(bool var_64_bool, object var_65_object)
{
	bool var_67_bool;
	var_65_object->IsDead(var_67_bool);
	var_67_bool = var_64_bool;
}


void func_666(object var_20_object)
{
	object var_22_object;
	@self(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


void func_539(bool var_53_bool, object var_54_object)
{
	if(var_54_object == null) {
		var_53_bool = false;
		return 4;
	}
	bool var_60_bool = false;
	var_63_bool = IsFuncExist(var_54_object, "IsDead", 1);
	if(var_63_bool != 0) {
		bool var_64_bool; object var_65_object;
		var_54_object = var_65_object;
		func_534(var_64_bool, var_65_object);
		if(var_64_bool != 0)
			var_60_bool = true;
	}
	if(var_60_bool != 0) {
		var_53_bool = false;
		return 4;
	}
	object var_57_object;
	@GetScene(var_57_object);
	if(var_57_object == null) {
		var_53_bool = false;
		return 4;
	}
	object var_58_object;
	var_54_object->GetScene(var_58_object);
	if(var_57_object != var_58_object) {
		var_53_bool = false;
		return 4;
	}
	var_53_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_285(object var_6_object)
{
	@KillTimer(70);
	func_809(false);
	var_41_object = GlobalVars[0];
	@RemoveActor(var_41_object);
	func_726();
	object var_82_object;
	var_6_object = var_82_object;
	func_304(var_82_object);
}


// @pe
void func_414(string var_105_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_105_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_105_string);
	@RemoveEnvelope();
}


// @pe
void func_672(float var_27_float, float var_28_float, float var_29_float)
{
	if(var_28_float < var_29_float)
		var_28_float = var_27_float;
	else
		var_29_float = var_27_float;
	
}


void func_1190(bool var_7_bool, object var_8_object)
{
	bool var_10_bool;
	@IsPlayerActor(var_8_object, var_10_bool);
	var_7_bool = true;
	if(var_10_bool != 1) {
		bool var_12_bool; object var_13_object;
		var_8_object = var_13_object;
		func_915(var_12_bool, var_13_object);
		if(var_12_bool != 1)
			var_7_bool = false;
	}
}


// @pe
void func_679(float var_87_float, float var_88_float, float var_89_float, float var_90_float)
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


void func_809(bool var_8_bool)
{
	float var_14_float; object var_16_object; cvector var_17_cvector; float var_18_float;
	if(var_8_bool != 0) {
		var_20_float = GlobalVars[2];
		var_20_float = var_14_float;
	} else {
				var_14_float = 0.05;
	}
	var_21_object = GlobalVars[0];
	float var_15_float;
	var_21_object->GetLength(var_15_float);
	if(var_14_float < var_15_float)
		var_14_float = var_15_float;
	var_23_object = GlobalVars[0];
	var_23_object->SetLength(var_15_float);
	var_24_bool = GlobalVars[3];
	if(var_24_bool != var_8_bool) {
		if(var_8_bool != 0) {
			var_27_object = GlobalVars[1];
			if(var_27_object == null) {
				var_17_cvector = [0.0, 0.0, 0.0];
				@GetHeight(var_18_float);
				var_29_float = GetByIndex(var_17_cvector, 1);
				var_18_float = var_29_float;
				SetByIndex(var_17_cvector, 1) = var_29_float;
				@PlayLoopedGlobalSound(var_16_object, "flame_loop", var_17_cvector, 0, 200);
				var_33_object = GlobalVars[1];
				var_16_object = var_33_object;
				GlobalVars[1] = var_33_object;
				var_16_object = null;
			}
			var_34_object = GlobalVars[1];
			var_34_object->FadeIn(2);
		} else {
			var_37_object = GlobalVars[1];
			if(!(var_37_object != null)) goto Label_861;
			var_39_object = GlobalVars[1];
			var_39_object->FadeOut(2);

		}
	Label_861:
		var_36_bool = GlobalVars[3];
		var_8_bool = var_36_bool;
		GlobalVars[3] = var_36_bool;
	}
	
}


// @pe
void func_304(object var_82_object)
{
	object var_83_object;
	var_82_object = var_83_object;
	func_327(var_83_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_946(object var_38_object)
{
	if(var_38_object == null)
		return 4;
	var_44_object = GlobalVars[4];
	bool var_41_bool;
	var_44_object->in(var_41_bool, var_38_object);
	if(!var_41_bool) { //@nz
		var_46_object = GlobalVars[4];
		var_46_object->add(var_38_object);
	}
	bool var_42_bool;
	@IsPlayerActor(var_38_object, var_42_bool);
	if(var_42_bool != 0) {
	}
}


void func_690(object var_13_object)
{
	object var_15_object;
	@CreateObjectSet(var_15_object);
	var_15_object = var_13_object;
}
EMIT "Stack[-1] = 0";


void func_696(int var_47_int, int var_48_int)
{
	int var_54_int;
	if(var_47_int > var_48_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_53_int = 0;
	if(var_47_int != var_48_int) {
		@irand(var_54_int, (var_48_int - var_47_int));
	} else if(var_47_int == 0) {
		return 8;
	}
	var_53_int += var_47_int;
	if(var_53_int == 0)
		return 8;
	int var_55_int;
	@GetInvItemByName(var_55_int, "Money");
	bool var_56_bool;
	@AddItem(var_56_bool, var_55_int, 0, var_53_int);
	
}


// @pe
void func_442(string var_70_string, int var_71_int)
{
	if(var_71_int == 1)
		var_70_string = "fire";
	var_70_string = "phys";
}


void func_575(bool var_49_bool, object var_50_object)
{
	object var_54_object;
	var_50_object = var_54_object;
	bool var_53_bool;
	func_539(var_53_bool, var_54_object);
	if(!var_53_bool) { //@nz
		var_49_bool = false;
		return 2;
	}
	bool var_71_bool; object var_72_object;
	func_458(var_71_bool, var_72_object, "noaccess");
	if(!var_71_bool) { //@nz
		var_49_bool = true;
		return 2;
	}
	int var_52_int;
	var_72_object->GetProperty("noaccess", var_52_int);
	var_49_bool = var_52_int == 0;
}


void func_450(float var_26_float, object var_27_object)
{
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	var_27_object->GetPosition(var_32_cvector);
	var_26_float = (var_32_cvector - var_31_cvector) | (var_32_cvector - var_31_cvector);
}


// @pe
void func_963(object var_3_object)
{
	object var_4_object;
	var_3_object = var_4_object;
	TaskCall(2);
	func_276(var_4_object);
	TaskReturn();
}


void func_327(object var_83_object)
{
	cvector var_94_cvector; cvector var_95_cvector; cvector var_96_cvector; cvector var_97_cvector; string var_98_string; object var_99_object; bool var_100_bool; bool var_101_bool; float var_102_float; cvector var_103_cvector;
	if(var_83_object == null) {
		func_414("fdie");
	} else {
		var_83_object->GetPosition(var_94_cvector);
		@GetPosition(var_95_cvector);
		@GetDirection(var_96_cvector);
		var_97_cvector = var_95_cvector - var_94_cvector;
		var_108_float = GetByIndex(var_97_cvector, 0);
		var_109_float = GetByIndex(var_96_cvector, 0);
		var_111_float = GetByIndex(var_97_cvector, 2);
		var_112_float = GetByIndex(var_96_cvector, 2);
		if(((var_108_float * var_109_float) + (var_111_float * var_112_float)) >= 0)
			var_98_string = "fdie";
		else
			var_98_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_83_object = var_99_object;
		var_119_bool = IsFuncExist(var_83_object, "GetScriptProperty", 2);
		if(var_119_bool != 0) {
			var_83_object->HasScriptProperty(var_100_bool, "Owner");
			if(var_100_bool != 0) {
				var_83_object->GetScriptProperty(var_99_object, "Owner");
				if(var_99_object == null)
					var_83_object = var_99_object;
			}
		}
		var_126_bool = IsFuncExist(var_99_object, "@GetEyesHeight", 1);
		if(var_126_bool != 0) {
			var_99_object->GetEyesHeight(var_102_float);
			var_103_cvector = [0.0, 0.0, 0.0];
			var_127_float = GetByIndex(var_103_cvector, 1);
			var_102_float = var_127_float;
			SetByIndex(var_103_cvector, 1) = var_127_float;
			@LookAsync(var_83_object, "head", var_103_cvector);
			var_101_bool = true;
		} else {
			var_101_bool = false;

		}
		@PlayAnimation("all", var_98_string);
		@WaitForAnimEnd();
		if(var_101_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_98_string);
		@RemoveEnvelope();
		var_99_object = null;
	}
	
}


void func_458(bool var_55_bool, object var_56_object, string var_57_string)
{
	var_62_bool = IsFuncExist(var_56_object, "HasProperty", 2);
	if(!var_62_bool) { //@nz
		var_55_bool = false;
		return 2;
	}
	bool var_59_bool;
	var_56_object->HasProperty(var_57_string, var_59_bool);
	var_59_bool = var_55_bool;
}


void func_726(void)
{
	bool var_45_bool;
	@ClearSubContainer(0);
	func_696(600, 1500);
	int var_44_int;
	@irand(var_44_int, 200);
	if(var_44_int != 0) {
		int var_70_int;
		func_763(var_70_int, "ognemet_ammo");
		@AddItem(var_45_bool, var_70_int, 0, var_44_int);
	}
	@irand(var_44_int, 3);
	if(var_44_int == 0) {
		int var_78_int;
		func_763(var_78_int, "rusk");
		@AddItem(var_45_bool, var_78_int, 0, 1);
	}
}


void func_599(object var_6_object, int var_7_int)
{
	object var_19_object; object var_20_object; cvector var_21_cvector; float var_22_float; string var_28_string;
	bool var_29_bool = false;
	if(var_7_int != 4) {
		if(var_7_int != 5)
			var_29_bool = true;
	}
	if(var_29_bool != 0) {
		@GetScene(var_19_object);
		@GetPosition(var_21_cvector);
		@GetEyesHeight(var_22_float);
		var_34_float = GetByIndex(var_21_cvector, 1);
		SetByIndex(var_21_cvector, 1) = (var_34_float + (var_22_float / 2));
		@AddActorByType(var_20_object, "scripted", var_19_object, var_21_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_20_object = null;
		var_19_object = null;
	}
	if(var_6_object == null)
		return 20;
	int var_23_int;
	@GetSecondaryAnimationType(var_23_int);
	if(var_23_int < 0)
		return 20;
	cvector var_24_cvector;
	var_6_object->GetPosition(var_24_cvector);
	cvector var_25_cvector;
	@GetPosition(var_25_cvector);
	cvector var_26_cvector;
	@GetDirection(var_26_cvector);
	cvector var_27_cvector = var_25_cvector - var_24_cvector;
	var_43_float = GetByIndex(var_27_cvector, 0);
	var_44_float = GetByIndex(var_26_cvector, 0);
	var_46_float = GetByIndex(var_27_cvector, 2);
	var_47_float = GetByIndex(var_26_cvector, 2);
	if(((var_43_float * var_44_float) + (var_46_float * var_47_float)) >= 0)
		var_28_string = "fhit";
	else
		var_28_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_28_string + "1"), (var_28_string + "2"), -10);
	
}


void func_470(float var_39_float, object var_40_object, float var_41_float, int var_42_int)
{
	int var_49_int; int var_51_int;
	object var_56_object;
	var_40_object = var_56_object;
	bool var_55_bool;
	func_458(var_55_bool, var_56_object, "health");
	if(!var_55_bool) //@nz
		var_39_float = 0.0;
	bool var_65_bool; object var_66_object;
	func_458(var_65_bool, var_66_object, "armor");
	if(!var_65_bool) //@nz
		var_49_int = 0;
	else
		var_66_object->GetProperty("armor", var_49_int);
	string var_70_string; int var_71_int;
	var_42_int = var_71_int;
	func_442(var_70_string, var_71_int);
	string var_50_string = "armor_" + var_70_string;
	bool var_74_bool; object var_75_object; string var_76_string;
	var_40_object = var_75_object;
	func_458(var_74_bool, var_75_object, var_76_string);
	if(!var_74_bool) //@nz
		var_51_int = 0;
	else
		var_40_object->GetProperty(var_76_string, var_51_int);

	float var_78_float;
	func_672(var_78_float, ((var_49_int + var_51_int) / 100.0), (float)1);
	float var_52_float;
	var_78_float = var_52_float;
	float var_53_float;
	var_40_object->GetProperty("health", var_53_float);
	float var_87_float;
	func_679(var_87_float, (var_53_float - (var_41_float * (1 - var_52_float))), (float)0, (float)1);
	var_40_object->SetProperty("health", var_87_float);
	float var_54_float = var_39_float;
	
}


// @pe
void func_95(object var_75_object, bool var_76_bool)
{
	@StopGroup0();
	object var_77_object; bool var_78_bool;
	var_75_object = var_77_object;
	var_76_bool = var_78_bool;
	TaskCall(1);
	func_106(var_79_object, var_80_bool, var_77_object, var_78_bool);
	TaskReturn();
}


void func_865(cvector var_169_cvector)
{
	cvector var_175_cvector; bool var_179_bool;
	@GetPosition(var_175_cvector);
	float var_176_float;
	@GetHeight(var_176_float);
	var_180_float = GetByIndex(var_175_cvector, 1);
	SetByIndex(var_175_cvector, 1) = (var_180_float + (var_176_float / 2));
	cvector var_177_cvector = var_169_cvector - var_175_cvector;
	float var_178_float = sqrt(var_177_cvector | var_177_cvector);
	if(var_178_float < 50) {
		var_179_bool = false;
	} else {
			var_190_float = GetByIndex(var_177_cvector, 1);
			var_179_bool = (var_190_float / var_178_float) < -0.14285715;
	}
	if(var_179_bool != 0)
		var_188_string = "cattack";
	else
		var_189_string = "attack";

	@PlayAnimation("all", var_188_string);
	
}


// @pe
void func_1123(bool var_78_bool, object var_79_object)
{
	var_78_bool = false;
	if(var_79_object != null) {
		float var_81_float; object var_82_object;
		var_79_object = var_82_object;
		func_450(var_81_float, var_82_object);
		if(var_81_float <= 302500.0)
			var_78_bool = true;
	}
}


void func_998(bool var_4_bool, object var_5_object, object var_6_object)
{
	object var_12_object;
	var_6_object = var_12_object;
	bool var_11_bool;
	func_458(var_11_bool, var_12_object, "reputation");
	if(!var_11_bool) { //@nz
		var_4_bool = false;
		return 4;
	}
	float var_9_float;
	var_6_object->GetProperty("reputation", var_9_float);
	if(var_9_float < 0.5) {
		var_4_bool = false;
		return 4;
	}
	bool var_10_bool;
	@CanSee(var_10_bool, var_5_object);
	bool var_24_bool = true;
	if(var_10_bool != 1) {
		float var_26_float; object var_27_object;
		func_450(var_26_float, var_27_object);
		var_35_bool = var_26_float <= 160000.0;
		if(var_35_bool != 1)
			var_24_bool = false;
	}
	if(var_24_bool != 0) {
		@ReportReputationChange(var_27_object, var_6_object, -0.2);
		var_4_bool = true;
		return 4;
	}
	var_4_bool = false;
}


// @pe
void func_106(object var_0_object, object var_1_object, object var_77_object, bool var_78_bool)
{
	var_0_object = var_77_object;
	@Face(var_0_object);
	
Label_111:
	func_809(true);
	@SetAttackState(true);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	
	for(;;) {
		bool var_117_bool = false;
		bool var_118_bool = true;
		var_119_bool = var_0_object == null; //@ne
		if(var_119_bool != 1) {
			var_120_bool = !var_78_bool; //@nz
			if(var_120_bool != 1)
				var_118_bool = false;
		}
		if(var_118_bool != 0) {
			bool var_121_bool = true;
			bool var_122_bool;
			func_1190(var_122_bool, var_0_object);
			var_144_bool = !var_122_bool; //@nz
			if(var_144_bool != 1) {
				bool var_145_bool;
				func_1123(var_145_bool, var_0_object);
				var_152_bool = !var_145_bool; //@nz
				if(var_152_bool != 1)
					var_121_bool = false;
			}
			if(var_121_bool != 0)
				var_117_bool = true;
		}
		if(var_117_bool != 0)
			break;
		func_896(var_0_object);
		@WaitForAnimEnd();
	}
	@SetAttackState(false);
	func_809(false);
	@StopAsync();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	var_157_bool = Obj() != null; //@nn
	if(var_157_bool == 1) goto Label_111;
}


// @pe
void func_1136(bool var_5_bool, object var_6_object)
{
	var_5_bool = false;
	bool var_7_bool; object var_8_object;
	var_6_object = var_8_object;
	func_1190(var_7_bool, var_8_object);
	if(var_7_bool != 0) {
		bool var_61_bool; object var_62_object;
		var_6_object = var_62_object;
		func_1123(var_61_bool, var_62_object);
		if(var_61_bool != 0)
			var_5_bool = true;
	}
}


void func_763(int var_70_int, string var_71_string)
{
	int var_73_int;
	@GetInvItemByName(var_73_int, var_71_string);
	var_73_int = var_70_int;
}


// @pe
void func_1150(bool var_5_bool, object var_6_object)
{
	var_5_bool = false;
	bool var_7_bool; object var_8_object;
	var_6_object = var_8_object;
	func_1190(var_7_bool, var_8_object);
	if(var_7_bool != 0) {
		bool var_61_bool; object var_62_object;
		var_6_object = var_62_object;
		func_1123(var_61_bool, var_62_object);
		if(var_61_bool != 0)
			var_5_bool = true;
	}
}


