// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector)
	{
		@StopGroup0();
	}

}


task task_1
{
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
		bool var_8_bool;
		@IsOverrideActive(var_8_bool);
		if(!var_8_bool) //@nz
			@WorkWithCorpse(var_6_cvector);
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
	}

}


task task_2
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
		func_177();
		object var_8_object;
		var_6_cvector = var_8_object;
		func_1186();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
		if(var_6_cvector == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
		if(var_6_cvector == actor) {
			@SetTimer(100, 3.0);
			func_985(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_41_object)
		{
		object var_43_object;
		var_41_object = var_43_object;
			bool var_42_bool;
		func_894(var_42_bool, var_43_object);
		if(!var_42_bool) { //@nz
			object var_71_object;
			var_41_object = var_71_object;
			func_1210(var_71_object);
		}
		func_177();
		object var_79_object;
		var_41_object = var_79_object;
		func_1223(var_79_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector)
	{
		object var_9_object;
		var_6_cvector = var_9_object;
		object var_10_object;
		var_7_cvector = var_10_object;
		bool var_8_bool;
		func_1267(var_8_bool, var_9_object, var_10_object);
		if(var_8_bool != 0) {
			object var_41_object;
			var_6_cvector = var_41_object;
			func_215();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
		object var_8_object;
		var_6_cvector = var_8_object;
		bool var_7_bool;
		func_1239(var_7_bool, var_8_object);
		if(var_7_bool != 0) {
			func_177();
			object var_53_object;
			var_6_cvector = var_53_object;
			func_1261(var_53_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, int var_1_int, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, cvector var_6_cvector)
	{
		if(var_6_cvector != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_3
{
	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, cvector var_5_cvector, cvector var_6_cvector)
	{
		bool var_7_bool = false;
		if(var_2_object != 0) {
			if(var_6_cvector == actor)
				var_7_bool = true;
		}
		if(var_7_bool != 0)
			func_985(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, cvector var_5_cvector, cvector var_6_cvector)
	{
		bool var_7_bool = false;
		if(var_2_object != 0) {
			if(var_6_cvector == actor)
				var_7_bool = true;
		}
		if(var_7_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, cvector var_7_cvector, object var_41_object)
		{
		object var_43_object;
		var_41_object = var_43_object;
			bool var_42_bool;
		func_894(var_42_bool, var_43_object);
		if(!var_42_bool) //@nz
			return 0;
		object var_71_object;
		var_41_object = var_71_object;
		func_1210(var_71_object);
		if(var_41_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_41_object;
			if(var_2_object == 0) goto Label_554;
			@StopAnimation();
			@StopGroup0();
		}
	Label_554:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, cvector var_7_cvector)
	{
		object var_9_object;
		var_6_cvector = var_9_object;
		object var_10_object;
		var_7_cvector = var_10_object;
		bool var_8_bool;
		func_1267(var_8_bool, var_9_object, var_10_object);
		if(var_8_bool != 0) {
			object var_41_object;
			var_6_cvector = var_41_object;
			func_531();
		}
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector)
	{
		func_1192();
	
		for(;;) {
			func_664(var_4_cvector, var_5_cvector);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object)
	{
		var_9_object = GlobalVars[0];
		bool var_8_bool;
		var_9_object->in(var_8_bool, var_6_object);
		if(!var_8_bool) { //@nz
			object var_11_object;
			var_6_object = var_11_object;
			func_567();
		}
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, string var_6_string)
	{
		object var_8_object;
		if(var_6_string == "attack") {
			object var_11_object;
			func_770(var_11_object);
			var_11_object = var_8_object;
			func_742();
			object var_15_object;
			var_8_object = var_15_object;
			func_1223(var_15_object);
			var_8_object = null;
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object)
	{
		bool var_7_bool;
		func_1073(var_7_bool, "quest_d10_01", "soldier_fight");
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object, object var_7_object)
	{
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector)
	{
		func_742();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object)
	{
		bool var_9_bool; object var_10_object;
		func_894(var_9_bool, var_10_object);
		if(!var_9_bool) //@nz
			return 2;
		var_44_object = GlobalVars[0];
		bool var_8_bool;
		var_44_object->in(var_8_bool, var_10_object);
		if(var_8_bool != 0) {
			func_742();
			object var_46_object;
			var_6_object = var_46_object;
			TaskCall(2);
			func_153(var_47_object, var_46_object);
			TaskReturn();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		bool var_7_bool;
		func_1239(var_7_bool, var_8_object);
		if(var_7_bool != 0) {
			func_742();
			object var_52_object;
			var_6_object = var_52_object;
			func_1307(var_52_object);
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object, int var_7_int, float var_8_float, float var_9_float)
{
	object var_10_object;
	var_6_object = var_10_object;
	int var_11_int;
	var_7_int = var_11_int;
	float var_12_float;
	var_8_float = var_12_float;
	func_918(var_11_int, var_12_float);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object, string var_7_string)
{
	float var_9_float;
	if(var_7_string == "health") {
		@GetProperty("health", var_9_float);
		if(var_9_float <= 0)
			@SignalDeath(var_6_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector, object var_6_object)
{
	object var_7_object;
	var_6_object = var_7_object;
	func_1327(var_7_object);
}


void OnUnload(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, cvector var_4_cvector, cvector var_5_cvector)
{
	object var_6_object;
	func_1003(var_6_object);
	@RemoveActor(var_6_object);
	@Hold();
}


void func_0(void)
{
	@Hold();
}


void func_1152(int var_38_int, string var_39_string)
{
	int var_41_int;
	@GetInvItemByName(var_41_int, var_39_string);
	var_41_int = var_38_int;
}


void func_770(object var_11_object)
{
	object var_13_object;
	@FindActor(var_13_object, "player");
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1157(object var_8_object)
{
	object var_9_object;
	var_8_object = var_9_object;
	TaskCall(1);
	func_6(var_9_object);
	TaskReturn();
}


// @pe
void func_6(object var_9_object)
{
	func_1115();
	object var_50_object;
	var_9_object = var_50_object;
	func_15(var_50_object);
}


void func_1031(object var_7_object)
{
	object var_9_object;
	@CreateObjectSet(var_9_object);
	var_9_object = var_7_object;
}
EMIT "Stack[-1] = 0";


void func_649(void)
{
}


void func_777(bool var_33_bool, object var_34_object, string var_35_string)
{
	var_40_bool = IsFuncExist(var_34_object, "HasProperty", 2);
	if(!var_40_bool) { //@nz
		var_33_bool = false;
		return 2;
	}
	bool var_37_bool;
	var_34_object->HasProperty(var_35_string, var_37_bool);
	var_37_bool = var_33_bool;
}


// @pe
void func_1037(float var_104_float, cvector var_105_cvector, cvector var_106_cvector)
{
	var_107_float = GetByIndex(var_105_cvector, 0);
	var_108_float = GetByIndex(var_106_cvector, 0);
	var_110_float = GetByIndex(var_105_cvector, 2);
	var_111_float = GetByIndex(var_106_cvector, 2);
	var_104_float = (var_107_float * var_108_float) + (var_110_float * var_111_float);
}


// @pe
void func_15(object var_50_object)
{
	object var_51_object;
	var_50_object = var_51_object;
	func_38(var_51_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_272(object var_0_object, object var_1_object, object var_2_object, object var_59_object, bool var_60_bool)
{
	bool var_66_bool; bool var_67_bool;
	var_0_object = var_59_object;
	@Face(var_0_object);
	if(var_60_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_291:
	for(;;) {
		bool var_74_bool;
		func_894(var_74_bool, var_0_object);
		if(var_74_bool != 0) {
			@CanSee(var_67_bool, var_0_object);
			if(var_67_bool != 0) {
				func_441(var_67_bool);
			} else {
				func_985(var_0_object);
				var_2_object = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_66_bool);
				if(!var_66_bool) { //@nz
					if(var_1_object != null)
						func_436(var_66_bool, var_67_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_291;
				}
				bool var_221_bool;
				func_894(var_221_bool, var_0_object);
				if(!var_221_bool) { //@nz
				} else {
						@CanSee(var_67_bool, var_0_object);
						if(var_67_bool != 0) {
							var_2_object = false;
							@Face(var_0_object);
							func_441(var_67_bool);
							goto Label_383;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_66_bool);
						if(!var_66_bool) { //@nz
							if(var_1_object != null)
								func_436(var_66_bool, var_67_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_291;
						}
						bool var_235_bool;
						func_894(var_235_bool, var_0_object);
						var_237_bool = !var_235_bool; //@nz
						if(var_237_bool == 0) goto Label_371;
				}
		}
		Label_393:
			for(;;) {
				@SetAttackState(false);
				@StopAsync();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();

			}

		Label_371:
			var_2_object = false;
			@CanSee(var_67_bool, var_0_object);
			if(var_67_bool != 0) {
				@Face(var_0_object);
				func_441(var_67_bool);
				goto Label_383;
			}
			goto Label_393;
		}
	Label_383:
		if(var_1_object != null)
			func_436(var_66_bool, var_67_bool);
		else
			@Sleep(2);

	}
	
}


void func_789(float var_142_float, object var_143_object, float var_144_float, int var_145_int)
{
	int var_152_int; int var_154_int;
	object var_159_object;
	var_143_object = var_159_object;
	bool var_158_bool;
	func_777(var_158_bool, var_159_object, "health");
	if(!var_158_bool) //@nz
		var_142_float = 0.0;
	bool var_162_bool; object var_163_object;
	func_777(var_162_bool, var_163_object, "armor");
	if(!var_162_bool) //@nz
		var_152_int = 0;
	else
		var_163_object->GetProperty("armor", var_152_int);
	string var_167_string; int var_168_int;
	var_145_int = var_168_int;
	func_747(var_167_string, var_168_int);
	string var_153_string = "armor_" + var_167_string;
	bool var_171_bool; object var_172_object; string var_173_string;
	var_143_object = var_172_object;
	func_777(var_171_bool, var_172_object, var_173_string);
	if(!var_171_bool) //@nz
		var_154_int = 0;
	else
		var_143_object->GetProperty(var_173_string, var_154_int);

	float var_175_float;
	func_1013(var_175_float, ((var_152_int + var_154_int) / 100.0), (float)1);
	float var_155_float;
	var_175_float = var_155_float;
	float var_156_float;
	var_143_object->GetProperty("health", var_156_float);
	float var_185_float;
	func_1020(var_185_float, (var_156_float - (var_144_float * (1 - var_155_float))), (float)0, (float)1);
	var_143_object->SetProperty("health", var_185_float);
	float var_157_float = var_142_float;
	
}


// @pe
void func_1046(float var_113_float, cvector var_114_cvector)
{
	var_115_float = GetByIndex(var_114_cvector, 0);
	var_116_float = GetByIndex(var_114_cvector, 0);
	var_118_float = GetByIndex(var_114_cvector, 2);
	var_119_float = GetByIndex(var_114_cvector, 2);
	var_113_float = sqrt((var_115_float * var_116_float) + (var_118_float * var_119_float));
}


void func_918(object var_10_object, int var_11_int)
{
	object var_23_object; object var_24_object; cvector var_25_cvector; float var_26_float; string var_32_string;
	bool var_33_bool = false;
	if(var_11_int != 4) {
		if(var_11_int != 5)
			var_33_bool = true;
	}
	if(var_33_bool != 0) {
		@GetScene(var_23_object);
		@GetPosition(var_25_cvector);
		@GetEyesHeight(var_26_float);
		var_38_float = GetByIndex(var_25_cvector, 1);
		SetByIndex(var_25_cvector, 1) = (var_38_float + (var_26_float / 2));
		@AddActorByType(var_24_object, "scripted", var_23_object, var_25_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_24_object = null;
		var_23_object = null;
	}
	if(var_10_object == null)
		return 20;
	int var_27_int;
	@GetSecondaryAnimationType(var_27_int);
	if(var_27_int < 0)
		return 20;
	cvector var_28_cvector;
	var_10_object->GetPosition(var_28_cvector);
	cvector var_29_cvector;
	@GetPosition(var_29_cvector);
	cvector var_30_cvector;
	@GetDirection(var_30_cvector);
	cvector var_31_cvector = var_29_cvector - var_28_cvector;
	var_47_float = GetByIndex(var_31_cvector, 0);
	var_48_float = GetByIndex(var_30_cvector, 0);
	var_50_float = GetByIndex(var_31_cvector, 2);
	var_51_float = GetByIndex(var_30_cvector, 2);
	if(((var_47_float * var_48_float) + (var_50_float * var_51_float)) >= 0)
		var_32_string = "fhit";
	else
		var_32_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_32_string + "1"), (var_32_string + "2"), -10);
	
}


void func_664(object var_0_object, object var_1_object)
{
	int var_14_int; bool var_15_bool; cvector var_16_cvector; object var_17_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		@irand(var_14_int, 60);
		@Sleep((var_14_int + 30), var_15_bool);
		if(var_15_bool != 0) {
			func_649();
		} else {
		for(;;) {
			@GetPFPosition(var_16_cvector);
			float var_22_float; cvector var_24_cvector;
			var_16_cvector = var_24_cvector;
			func_1009(var_22_float, var_1_object, var_24_cvector);
			if(var_22_float > 40000) {
				@FindPathTo(var_17_object, var_1_object);
				if(var_17_object != null) {
					@RotatePath(var_17_object, var_15_bool);
					if(!var_15_bool) { //@nz
					} else {
					@FollowPath(var_17_object, false, var_15_bool);
					if(!var_15_bool) { //@nz
						goto Label_739;
					}
					var_33_float = GetByIndex(var_0_object, 0);
					var_34_float = GetByIndex(var_0_object, 2);
					@Rotate(var_33_float, var_34_float, var_15_bool);
					if(!var_15_bool) { //@nz
						goto Label_739;
					}
					@WaitForAnimEnd(var_15_bool);
					if(!var_15_bool) { //@nz
						goto Label_739;
					}
					goto Label_740;
				EMIT "GOTO 0x2d4";
				}
				@Sleep(1);
				var_17_object = null;
				goto Label_739;
			}
			var_38_float = GetByIndex(var_0_object, 0);
			var_39_float = GetByIndex(var_0_object, 2);
			@Rotate(var_38_float, var_39_float, var_15_bool);
			if(!var_15_bool) { //@nz
				goto Label_739;
			}
			@WaitForAnimEnd(var_15_bool);
			if(!var_15_bool) { //@nz
				goto Label_739;
			}
			goto Label_740;
			}
		Label_739:
		}
		}
	Label_740:
	}
	
}
EMIT "Return(); Pop(8)";


void func_153(object var_0_object, object var_46_object)
{
	bool var_49_bool;
	@Face(var_46_object);
	
	for(;;) {
		@Sleep(0.5, var_49_bool);
		bool var_51_bool = true;
		var_52_bool = !var_49_bool; //@nz
		if(var_52_bool != 1) {
			bool var_53_bool;
			func_894(var_53_bool, var_46_object);
			var_55_bool = !var_53_bool; //@nz
			if(var_55_bool != 1)
				var_51_bool = false;
		}
		if(var_51_bool != 0)
			break;
	}
	@StopAsync();
}


void func_1307(object var_52_object)
{
	var_55_object = GlobalVars[0];
	bool var_54_bool;
	var_55_object->in(var_54_bool, var_52_object);
	if(var_54_bool != 0) {
		object var_57_object;
		var_52_object = var_57_object;
		func_1199(var_57_object, true);
	}
}


// @pe
void func_1056(float var_101_float, cvector var_102_cvector, cvector var_103_cvector)
{
	cvector var_105_cvector;
	var_102_cvector = var_105_cvector;
	cvector var_106_cvector;
	var_103_cvector = var_106_cvector;
	float var_104_float;
	func_1037(var_104_float, var_105_cvector, var_106_cvector);
	float var_113_float; cvector var_114_cvector;
	var_102_cvector = var_114_cvector;
	func_1046(var_113_float, var_114_cvector);
	float var_122_float; cvector var_123_cvector;
	var_103_cvector = var_123_cvector;
	func_1046(var_122_float, var_123_cvector);
	var_101_float = var_104_float / (var_113_float * var_122_float);
}


void func_38(object var_51_object)
{
	cvector var_62_cvector; cvector var_63_cvector; cvector var_64_cvector; cvector var_65_cvector; string var_66_string; object var_67_object; bool var_68_bool; bool var_69_bool; float var_70_float; cvector var_71_cvector;
	if(var_51_object == null) {
		func_125("fdie");
	} else {
		var_51_object->GetPosition(var_62_cvector);
		@GetPosition(var_63_cvector);
		@GetDirection(var_64_cvector);
		var_65_cvector = var_63_cvector - var_62_cvector;
		var_76_float = GetByIndex(var_65_cvector, 0);
		var_77_float = GetByIndex(var_64_cvector, 0);
		var_79_float = GetByIndex(var_65_cvector, 2);
		var_80_float = GetByIndex(var_64_cvector, 2);
		if(((var_76_float * var_77_float) + (var_79_float * var_80_float)) >= 0)
			var_66_string = "fdie";
		else
			var_66_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_51_object = var_67_object;
		var_87_bool = IsFuncExist(var_51_object, "GetScriptProperty", 2);
		if(var_87_bool != 0) {
			var_51_object->HasScriptProperty(var_68_bool, "Owner");
			if(var_68_bool != 0) {
				var_51_object->GetScriptProperty(var_67_object, "Owner");
				if(var_67_object == null)
					var_51_object = var_67_object;
			}
		}
		var_94_bool = IsFuncExist(var_67_object, "@GetEyesHeight", 1);
		if(var_94_bool != 0) {
			var_67_object->GetEyesHeight(var_70_float);
			var_71_cvector = [0.0, 0.0, 0.0];
			var_95_float = GetByIndex(var_71_cvector, 1);
			var_70_float = var_95_float;
			SetByIndex(var_71_cvector, 1) = var_95_float;
			@LookAsync(var_51_object, "head", var_71_cvector);
			var_69_bool = true;
		} else {
			var_69_bool = false;

		}
		@PlayAnimation("all", var_66_string);
		@WaitForAnimEnd();
		if(var_69_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_66_string);
		@RemoveEnvelope();
		var_67_object = null;
	}
	
}


void func_1192(void)
{
	var_6_object = GlobalVars[0];
	object var_7_object;
	func_1031(var_7_object);
	var_7_object = var_6_object;
	GlobalVars[0] = var_6_object;
}


// @pe
void func_1327(object var_7_object)
{
	object var_8_object;
	var_7_object = var_8_object;
	func_1157(var_8_object);
}


// @pe
void func_1199(object var_57_object, bool var_58_bool)
{
	object var_59_object;
	var_57_object = var_59_object;
	bool var_60_bool;
	var_58_bool = var_60_bool;
	TaskCall(3);
	func_272(var_61_object, var_62_object, var_63_bool, var_59_object, var_60_bool);
	TaskReturn();
	@ResetAAS();
}


void func_177(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


void func_1073(bool var_7_bool, string var_8_string, string var_9_string)
{
	object var_11_object;
	@FindActor(var_11_object, var_8_string);
	if(var_11_object == null)
		var_7_bool = false;
	@Trigger(var_11_object, var_9_string);
	var_7_bool = true;
}
EMIT "Stack[-1] = 0";


void func_436(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


// @pe
void func_567(void)
{
	func_742();
}


void func_441(object var_0_object)
{
	float var_92_float; object var_93_object; object var_94_object;
	@ReportAttack(var_0_object);
	cvector var_86_cvector;
	@GetDirection(var_86_cvector);
	cvector var_95_cvector;
	func_755(var_95_cvector, var_0_object);
	cvector var_87_cvector;
	var_95_cvector = var_87_cvector;
	float var_101_float; cvector var_102_cvector; cvector var_103_cvector;
	var_87_cvector = var_103_cvector;
	func_1056(var_101_float, var_102_cvector, var_103_cvector);
	if(var_101_float < 0.9659258) {
	}
	@PlayAnimation("all", "attack_begin1");
	@WaitForAnimEnd();
	@Speak("shot");
	@GetDirection(var_102_cvector);
	cvector var_130_cvector;
	func_755(var_130_cvector, var_0_object);
	var_130_cvector = var_87_cvector;
	var_132_float = GetByIndex(var_87_cvector, 1);
	float var_133_float;
	func_996(var_133_float, var_0_object);
	SetByIndex(var_87_cvector, 1) = (var_132_float + var_133_float);
	cvector var_88_cvector;
	@RandVecCone3D(var_88_cvector, var_87_cvector, 0.2617994);
	object var_89_object;
	int var_90_int;
	cvector var_91_cvector;
	@GetVictimMaterial(var_88_cvector, var_89_object, var_90_int, var_91_cvector);
	if(var_89_object != null) {
		if(var_89_object == var_0_object) {
			float var_142_float;
			func_789(var_142_float, var_0_object, 1.5, 0);
			var_142_float = var_92_float;
			@ReportHit(var_0_object, 2, var_92_float, 1.5);
		} else if(var_90_int != -1) {
			@GetScene(var_93_object);
			@AddActorByType(var_94_object, "scripted", var_93_object, var_91_cvector, [0.0, 0.0, 1.0], "richochet.xml");
			var_94_object->SetScriptProperty("Material", var_90_int);
			var_94_object = null;
			var_93_object = null;
		}
	}
	@PlayAnimation("all", "attack_end1");
	@WaitForAnimEnd();
	@LockAnimationEnd("all", "attack_on");
	
}
EMIT "Stack[-6] = 0";


void func_1210(object var_16_object)
{
	if(var_16_object == null) {
	}
	var_20_object = GlobalVars[0];
	bool var_18_bool;
	var_20_object->in(var_18_bool, var_16_object);
	if(!var_18_bool) { //@nz
		var_22_object = GlobalVars[0];
		var_22_object->add(var_16_object);
	}
}


void func_1085(int var_15_int, int var_16_int)
{
	int var_22_int;
	if(var_15_int > var_16_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_21_int = 0;
	if(var_15_int != var_16_int) {
		@irand(var_22_int, (var_16_int - var_15_int));
	} else if(var_15_int == 0) {
		return 8;
	}
	var_21_int += var_15_int;
	if(var_21_int == 0)
		return 8;
	int var_23_int;
	@GetInvItemByName(var_23_int, "Money");
	bool var_24_bool;
	@AddItem(var_24_bool, var_23_int, 0, var_21_int);
	
}


// @pe
void func_1223(object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	func_1210(var_16_object);
	object var_23_object;
	var_15_object = var_23_object;
	func_1199(var_23_object, true);
}


void func_1234(bool var_48_bool, object var_49_object)
{
	bool var_51_bool;
	@IsPlayerActor(var_49_object, var_51_bool);
	var_51_bool = var_48_bool;
}


void func_853(bool var_26_bool, object var_27_object)
{
	bool var_29_bool;
	var_27_object->IsDead(var_29_bool);
	var_29_bool = var_26_bool;
}


void func_1239(bool var_7_bool, object var_8_object)
{
	bool var_11_bool; object var_12_object;
	func_894(var_11_bool, var_12_object);
	if(!var_11_bool) { //@nz
		var_7_bool = false;
		return 2;
	}
	var_46_object = GlobalVars[0];
	bool var_10_bool;
	var_46_object->in(var_10_bool, var_12_object);
	if(var_10_bool != 0) {
		var_7_bool = true;
		return 2;
	}
	bool var_48_bool; object var_49_object;
	var_8_object = var_49_object;
	func_1234(var_48_bool, var_49_object);
	var_48_bool = var_7_bool;
}


void func_985(object var_206_object)
{
	cvector var_210_cvector;
	var_206_object->GetPosition(var_210_cvector);
	cvector var_211_cvector;
	@GetPosition(var_211_cvector);
	cvector var_212_cvector = var_210_cvector - var_211_cvector;
	var_213_float = GetByIndex(var_212_cvector, 0);
	var_214_float = GetByIndex(var_212_cvector, 2);
	@RotateAsync(var_213_float, var_214_float);
}


void func_858(bool var_15_bool, object var_16_object)
{
	if(var_16_object == null) {
		var_15_bool = false;
		return 4;
	}
	bool var_22_bool = false;
	var_25_bool = IsFuncExist(var_16_object, "IsDead", 1);
	if(var_25_bool != 0) {
		bool var_26_bool; object var_27_object;
		var_16_object = var_27_object;
		func_853(var_26_bool, var_27_object);
		if(var_26_bool != 0)
			var_22_bool = true;
	}
	if(var_22_bool != 0) {
		var_15_bool = false;
		return 4;
	}
	object var_19_object;
	@GetScene(var_19_object);
	if(var_19_object == null) {
		var_15_bool = false;
		return 4;
	}
	object var_20_object;
	var_16_object->GetScene(var_20_object);
	if(var_19_object != var_20_object) {
		var_15_bool = false;
		return 4;
	}
	var_15_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1115(void)
{
	bool var_13_bool;
	@ClearSubContainer(0);
	func_1085(500, 1000);
	int var_12_int;
	@irand(var_12_int, 4);
	if(var_12_int != 0) {
		int var_38_int;
		func_1152(var_38_int, "rifle_ammo");
		@AddItem(var_13_bool, var_38_int, 0, var_12_int);
	}
	@irand(var_12_int, 3);
	if(var_12_int == 0) {
		int var_46_int;
		func_1152(var_46_int, "rusk");
		@AddItem(var_13_bool, var_46_int, 0, 1);
	}
}


void func_996(float var_133_float, object var_134_object)
{
	float var_137_float;
	@GetEyesHeight(var_137_float);
	float var_138_float;
	var_134_object->GetEyesHeight(var_138_float);
	var_133_float = var_138_float - var_137_float;
}


void func_742(void)
{
	@StopGroup0();
	@Stop();
}


// @pe
void func_747(string var_167_string, int var_168_int)
{
	if(var_168_int == 1)
		var_167_string = "fire";
	var_167_string = "phys";
}


void func_1003(object var_6_object)
{
	object var_8_object;
	@self(var_8_object);
	var_8_object = var_6_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1261(object var_53_object)
{
	object var_54_object;
	var_53_object = var_54_object;
	func_1307(var_54_object);
}


void func_1009(float var_22_float, cvector var_23_cvector, cvector var_24_cvector)
{
	var_22_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_1267(bool var_8_bool, object var_9_object, object var_10_object)
{
	object var_16_object;
	var_10_object = var_16_object;
	bool var_15_bool;
	func_777(var_15_bool, var_16_object, "reputation");
	if(!var_15_bool) { //@nz
		var_8_bool = false;
		return 4;
	}
	float var_13_float;
	var_10_object->GetProperty("reputation", var_13_float);
	if(var_13_float < 0.5) {
		var_8_bool = false;
		return 4;
	}
	bool var_14_bool;
	@CanSee(var_14_bool, var_9_object);
	bool var_28_bool = true;
	if(var_14_bool != 1) {
		float var_30_float; object var_31_object;
		func_762(var_30_float, var_31_object);
		var_39_bool = var_30_float <= 160000.0;
		if(var_39_bool != 1)
			var_28_bool = false;
	}
	if(var_28_bool != 0) {
		@ReportReputationChange(var_31_object, var_10_object, -0.2);
		var_8_bool = true;
		return 4;
	}
	var_8_bool = false;
}


void func_755(cvector var_95_cvector, object var_96_object)
{
	cvector var_99_cvector;
	@GetPosition(var_99_cvector);
	cvector var_100_cvector;
	var_96_object->GetPosition(var_100_cvector);
	var_95_cvector = var_100_cvector - var_99_cvector;
}


// @pe
void func_1013(float var_175_float, float var_176_float, float var_177_float)
{
	if(var_176_float < var_177_float)
		var_176_float = var_175_float;
	else
		var_177_float = var_175_float;
	
}


void func_762(float var_30_float, object var_31_object)
{
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	var_31_object->GetPosition(var_36_cvector);
	var_30_float = (var_36_cvector - var_35_cvector) | (var_36_cvector - var_35_cvector);
}


// @pe
void func_1020(float var_185_float, float var_186_float, float var_187_float, float var_188_float)
{
	if(var_186_float < var_187_float) {
		var_187_float = var_185_float;
		return 0;
	}
	if(var_186_float > var_188_float) {
		var_188_float = var_185_float;
		return 0;
	}
	var_186_float = var_185_float;
}


// @pe
void func_125(string var_73_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_73_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_73_string);
	@RemoveEnvelope();
}


void func_894(bool var_11_bool, object var_12_object)
{
	object var_16_object;
	var_12_object = var_16_object;
	bool var_15_bool;
	func_858(var_15_bool, var_16_object);
	if(!var_15_bool) { //@nz
		var_11_bool = false;
		return 2;
	}
	bool var_33_bool; object var_34_object;
	func_777(var_33_bool, var_34_object, "noaccess");
	if(!var_33_bool) { //@nz
		var_11_bool = true;
		return 2;
	}
	int var_14_int;
	var_34_object->GetProperty("noaccess", var_14_int);
	var_11_bool = var_14_int == 0;
}


