// @GLOBALS: 0:object:

task task_0
{
	void OnUse(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		bool var_10_bool;
		@IsOverrideActive(var_10_bool);
		if(!var_10_bool) //@nz
			@WorkWithCorpse(var_8_cvector);
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
	}

}


task task_1
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		func_171();
		object var_10_object;
		var_8_cvector = var_10_object;
		func_1298();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		if(var_8_cvector == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		if(var_8_cvector == actor) {
			@SetTimer(100, 3.0);
			func_1115(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, object var_43_object)
		{
		object var_45_object;
		var_43_object = var_45_object;
			bool var_44_bool;
		func_1024(var_44_bool, var_45_object);
		if(!var_44_bool) { //@nz
			object var_73_object;
			var_43_object = var_73_object;
			func_1322(var_73_object);
		}
		func_171();
		object var_81_object;
		var_43_object = var_81_object;
		func_1335(var_81_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector)
	{
		object var_11_object;
		var_8_cvector = var_11_object;
		object var_12_object;
		var_9_cvector = var_12_object;
		bool var_10_bool;
		func_1408(var_10_bool, var_11_object, var_12_object);
		if(var_10_bool != 0) {
			object var_43_object;
			var_8_cvector = var_43_object;
			func_209();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		object var_10_object;
		var_8_cvector = var_10_object;
		bool var_9_bool;
		func_1380(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_171();
			object var_55_object;
			var_8_cvector = var_55_object;
			func_1402(var_55_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, int var_1_int, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		if(var_8_cvector != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_2
{
	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, object var_43_object)
		{
		object var_45_object;
		var_43_object = var_45_object;
			bool var_44_bool;
		func_1024(var_44_bool, var_45_object);
		if(!var_44_bool) { //@nz
			object var_73_object;
			var_43_object = var_73_object;
			func_1322(var_73_object);
		}
		func_405();
		object var_80_object;
		var_43_object = var_80_object;
		func_1335(var_80_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector)
	{
		object var_11_object;
		var_8_cvector = var_11_object;
		object var_12_object;
		var_9_cvector = var_12_object;
		bool var_10_bool;
		func_1408(var_10_bool, var_11_object, var_12_object);
		if(var_10_bool != 0) {
			object var_43_object;
			var_8_cvector = var_43_object;
			func_373();
		}
	}

	// @pe
	void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		func_405();
		object var_9_object;
		var_8_cvector = var_9_object;
		func_1298();
	}

}


task task_3
{
	// @pe
	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, cvector var_7_cvector, cvector var_8_cvector)
	{
		bool var_9_bool = false;
		if(var_2_bool != 0) {
			if(var_8_cvector == actor)
				var_9_bool = true;
		}
		if(var_9_bool != 0)
			func_1115(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, cvector var_7_cvector, cvector var_8_cvector)
	{
		bool var_9_bool = false;
		if(var_2_bool != 0) {
			if(var_8_cvector == actor)
				var_9_bool = true;
		}
		if(var_9_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, cvector var_9_cvector, object var_43_object)
		{
		object var_45_object;
		var_43_object = var_45_object;
			bool var_44_bool;
		func_1024(var_44_bool, var_45_object);
		if(!var_44_bool) //@nz
			return 0;
		object var_73_object;
		var_43_object = var_73_object;
		func_1322(var_73_object);
		if(var_43_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_43_object;
			if(var_2_bool == 0) goto Label_703;
			@StopAnimation();
			@StopGroup0();
		}
	Label_703:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, cvector var_9_cvector)
	{
		object var_11_object;
		var_8_cvector = var_11_object;
		object var_12_object;
		var_9_cvector = var_12_object;
		bool var_10_bool;
		func_1408(var_10_bool, var_11_object, var_12_object);
		if(var_10_bool != 0) {
			object var_43_object;
			var_8_cvector = var_43_object;
			func_680();
		}
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector)
	{
		func_1304();
	
		for(;;) {
			func_801(var_6_cvector, var_7_cvector);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object)
	{
		bool var_10_bool;
		object var_12_object;
		var_8_object = var_12_object;
		bool var_11_bool;
		func_1024(var_11_bool, var_12_object);
		if(!var_11_bool) //@nz
			return 2;
		bool var_46_bool; object var_47_object;
		func_1375(var_46_bool, var_47_object);
		if(!var_46_bool) { //@nz
			var_51_object = GlobalVars[0];
			var_51_object->in(var_10_bool, var_47_object);
			if(!var_10_bool) //@nz
				return 2;
		}
		func_879();
		object var_53_object;
		var_8_object = var_53_object;
		TaskCall(1);
		func_147(var_54_object, var_53_object);
		TaskReturn();
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, object var_9_object, object var_43_object)
		{
		object var_45_object;
		var_43_object = var_45_object;
			bool var_44_bool;
		func_1024(var_44_bool, var_45_object);
		if(!var_44_bool) { //@nz
			object var_73_object;
			var_43_object = var_73_object;
			func_1322(var_73_object);
		}
		func_879();
		object var_80_object;
		var_43_object = var_80_object;
		func_1335(var_80_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, object var_9_object)
	{
		object var_11_object;
		var_8_object = var_11_object;
		object var_12_object;
		var_9_object = var_12_object;
		bool var_10_bool;
		func_1408(var_10_bool, var_11_object, var_12_object);
		if(var_10_bool != 0) {
			object var_43_object;
			var_8_object = var_43_object;
			func_755();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object)
	{
		object var_10_object;
		var_8_object = var_10_object;
		bool var_9_bool;
		func_1380(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_879();
			object var_54_object;
			var_8_object = var_54_object;
			func_1448(var_54_object);
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
{
	object var_12_object;
	var_8_object = var_12_object;
	int var_13_int;
	var_9_int = var_13_int;
	float var_14_float;
	var_10_float = var_14_float;
	func_1048(var_13_int, var_14_float);
}


void OnPropertyChange(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, string var_9_string)
{
	float var_11_float;
	if(var_9_string == "health") {
		@GetProperty("health", var_11_float);
		if(var_11_float <= 0)
			@SignalDeath(var_8_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object)
{
	object var_9_object;
	var_8_object = var_9_object;
	func_1454(var_9_object);
}


void func_1024(bool var_13_bool, object var_14_object)
{
	object var_18_object;
	var_14_object = var_18_object;
	bool var_17_bool;
	func_988(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_13_bool = false;
		return 2;
	}
	bool var_35_bool; object var_36_object;
	func_907(var_35_bool, var_36_object, "noaccess");
	if(!var_35_bool) { //@nz
		var_13_bool = true;
		return 2;
	}
	int var_16_int;
	var_36_object->GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == 0;
}


// @pe
void func_0(object var_11_object)
{
	func_1227();
	object var_52_object;
	var_11_object = var_52_object;
	func_9(var_52_object);
}


void func_1408(bool var_10_bool, object var_11_object, object var_12_object)
{
	object var_18_object;
	var_12_object = var_18_object;
	bool var_17_bool;
	func_907(var_17_bool, var_18_object, "reputation");
	if(!var_17_bool) { //@nz
		var_10_bool = false;
		return 4;
	}
	float var_15_float;
	var_12_object->GetProperty("reputation", var_15_float);
	if(var_15_float < 0.5) {
		var_10_bool = false;
		return 4;
	}
	bool var_16_bool;
	@CanSee(var_16_bool, var_11_object);
	bool var_30_bool = true;
	if(var_16_bool != 1) {
		float var_32_float; object var_33_object;
		func_899(var_32_float, var_33_object);
		var_41_bool = var_32_float <= 160000.0;
		if(var_41_bool != 1)
			var_30_bool = false;
	}
	if(var_30_bool != 0) {
		@ReportReputationChange(var_33_object, var_12_object, -0.2);
		var_10_bool = true;
		return 4;
	}
	var_10_bool = false;
}


void func_1155(object var_9_object)
{
	object var_11_object;
	@CreateObjectSet(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_899(float var_254_float, object var_255_object)
{
	cvector var_259_cvector;
	@GetPosition(var_259_cvector);
	cvector var_260_cvector;
	var_255_object->GetPosition(var_260_cvector);
	var_254_float = (var_260_cvector - var_259_cvector) | (var_260_cvector - var_259_cvector);
}


// @pe
void func_9(object var_52_object)
{
	object var_53_object;
	var_52_object = var_53_object;
	func_32(var_53_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1161(float var_107_float, cvector var_108_cvector, cvector var_109_cvector)
{
	var_110_float = GetByIndex(var_108_cvector, 0);
	var_111_float = GetByIndex(var_109_cvector, 0);
	var_113_float = GetByIndex(var_108_cvector, 2);
	var_114_float = GetByIndex(var_109_cvector, 2);
	var_107_float = (var_110_float * var_111_float) + (var_113_float * var_114_float);
}


void func_907(bool var_35_bool, object var_36_object, string var_37_string)
{
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", 2);
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 2;
	}
	bool var_39_bool;
	var_36_object->HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
}


void func_266(object var_0_object, object var_1_object, object var_242_object)
{
	var_0_object = var_242_object;
	@CanSee(var_1_object, var_0_object);
	if(var_1_object != 0) {
		bool var_252_bool;
		func_1367(var_252_bool, var_0_object);
		if(var_252_bool != 0) {
			func_1311(var_0_object, true);
			return 6;
		}
		@Face(var_0_object);
	}
	@PlayAnimation("all", "shoot_begin");
	bool var_248_bool;
	@WaitForAnimEnd(var_248_bool);
	if(!var_248_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@Speak("shot");
	@PlayAnimation("all", "shoot_end");
	@WaitForAnimEnd(var_248_bool);
	if(!var_248_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@LockAnimationEnd("all", "attack_on");
	int var_249_int = 0;
	int var_250_int = 0;
	
	for(;;) {
		if(var_250_int < 20) {
			@Sleep(0.5, var_248_bool);
			if(!var_248_bool) //@nz
				return 6;
			@CanSee(var_1_object, var_0_object);
			if(var_1_object != 0) {
				var_249_int = 0;
				bool var_279_bool;
				func_1367(var_279_bool, var_0_object);
				if(var_279_bool != 0) {
					func_405();
					func_1311(var_0_object, false);
					return 6;
				}
				@Face(var_0_object);
			} else {
			@StopAsync();
			if(!((var_249_int + 1) == 4)) goto Label_361;
			@PlayAnimation("all", "attack_off");
			@WaitForAnimEnd();
			return 6;
		}
		func_405();
		object var_289_object;
		var_242_object = var_289_object;
		func_1311(var_289_object, false);
		return 6;
		}
	Label_361:
		var_250_int += 1;
	}
	
}


// @pe
void func_1170(float var_116_float, cvector var_117_cvector)
{
	var_118_float = GetByIndex(var_117_cvector, 0);
	var_119_float = GetByIndex(var_117_cvector, 0);
	var_121_float = GetByIndex(var_117_cvector, 2);
	var_122_float = GetByIndex(var_117_cvector, 2);
	var_116_float = sqrt((var_118_float * var_119_float) + (var_121_float * var_122_float));
}


void func_147(object var_0_object, object var_53_object)
{
	bool var_56_bool;
	@Face(var_53_object);
	
	for(;;) {
		@Sleep(0.5, var_56_bool);
		bool var_58_bool = true;
		var_59_bool = !var_56_bool; //@nz
		if(var_59_bool != 1) {
			bool var_60_bool;
			func_1024(var_60_bool, var_53_object);
			var_62_bool = !var_60_bool; //@nz
			if(var_62_bool != 1)
				var_58_bool = false;
		}
		if(var_58_bool != 0)
			break;
	}
	@StopAsync();
}


void func_405(void)
{
	@StopAsync();
	@StopGroup0();
	@Stop();
}


void func_919(float var_145_float, object var_146_object, float var_147_float, int var_148_int)
{
	int var_155_int; int var_157_int;
	object var_162_object;
	var_146_object = var_162_object;
	bool var_161_bool;
	func_907(var_161_bool, var_162_object, "health");
	if(!var_161_bool) //@nz
		var_145_float = 0.0;
	bool var_165_bool; object var_166_object;
	func_907(var_165_bool, var_166_object, "armor");
	if(!var_165_bool) //@nz
		var_155_int = 0;
	else
		var_166_object->GetProperty("armor", var_155_int);
	string var_170_string; int var_171_int;
	var_148_int = var_171_int;
	func_884(var_170_string, var_171_int);
	string var_156_string = "armor_" + var_170_string;
	bool var_174_bool; object var_175_object; string var_176_string;
	var_146_object = var_175_object;
	func_907(var_174_bool, var_175_object, var_176_string);
	if(!var_174_bool) //@nz
		var_157_int = 0;
	else
		var_146_object->GetProperty(var_176_string, var_157_int);

	float var_178_float;
	func_1137(var_178_float, ((var_155_int + var_157_int) / 100.0), (float)1);
	float var_158_float;
	var_178_float = var_158_float;
	float var_159_float;
	var_146_object->GetProperty("health", var_159_float);
	float var_188_float;
	func_1144(var_188_float, (var_159_float - (var_147_float * (1 - var_158_float))), (float)0, (float)1);
	var_146_object->SetProperty("health", var_188_float);
	float var_160_float = var_145_float;
	
}


void func_1304(void)
{
	var_8_object = GlobalVars[0];
	object var_9_object;
	func_1155(var_9_object);
	var_9_object = var_8_object;
	GlobalVars[0] = var_8_object;
}


void func_1048(object var_12_object, int var_13_int)
{
	object var_25_object; object var_26_object; cvector var_27_cvector; float var_28_float; string var_34_string;
	bool var_35_bool = false;
	if(var_13_int != 4) {
		if(var_13_int != 5)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		@GetScene(var_25_object);
		@GetPosition(var_27_cvector);
		@GetEyesHeight(var_28_float);
		var_40_float = GetByIndex(var_27_cvector, 1);
		SetByIndex(var_27_cvector, 1) = (var_40_float + (var_28_float / 2));
		@AddActorByType(var_26_object, "scripted", var_25_object, var_27_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_26_object = null;
		var_25_object = null;
	}
	if(var_12_object == null)
		return 20;
	int var_29_int;
	@GetSecondaryAnimationType(var_29_int);
	if(var_29_int < 0)
		return 20;
	cvector var_30_cvector;
	var_12_object->GetPosition(var_30_cvector);
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	@GetDirection(var_32_cvector);
	cvector var_33_cvector = var_31_cvector - var_30_cvector;
	var_49_float = GetByIndex(var_33_cvector, 0);
	var_50_float = GetByIndex(var_32_cvector, 0);
	var_52_float = GetByIndex(var_33_cvector, 2);
	var_53_float = GetByIndex(var_32_cvector, 2);
	if(((var_49_float * var_50_float) + (var_52_float * var_53_float)) >= 0)
		var_34_string = "fhit";
	else
		var_34_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_34_string + "1"), (var_34_string + "2"), -10);
	
}


// @pe
void func_1180(float var_104_float, cvector var_105_cvector, cvector var_106_cvector)
{
	cvector var_108_cvector;
	var_105_cvector = var_108_cvector;
	cvector var_109_cvector;
	var_106_cvector = var_109_cvector;
	float var_107_float;
	func_1161(var_107_float, var_108_cvector, var_109_cvector);
	float var_116_float; cvector var_117_cvector;
	var_105_cvector = var_117_cvector;
	func_1170(var_116_float, var_117_cvector);
	float var_125_float; cvector var_126_cvector;
	var_106_cvector = var_126_cvector;
	func_1170(var_125_float, var_126_cvector);
	var_104_float = var_107_float / (var_116_float * var_125_float);
}


// @pe
void func_1311(object var_60_object, bool var_61_bool)
{
	object var_62_object;
	var_60_object = var_62_object;
	bool var_63_bool;
	var_61_bool = var_63_bool;
	TaskCall(3);
	func_421(var_64_object, var_65_object, var_66_bool, var_62_object, var_63_bool);
	TaskReturn();
	@ResetAAS();
}


void func_32(object var_53_object)
{
	cvector var_64_cvector; cvector var_65_cvector; cvector var_66_cvector; cvector var_67_cvector; string var_68_string; object var_69_object; bool var_70_bool; bool var_71_bool; float var_72_float; cvector var_73_cvector;
	if(var_53_object == null) {
		func_119("fdie");
	} else {
		var_53_object->GetPosition(var_64_cvector);
		@GetPosition(var_65_cvector);
		@GetDirection(var_66_cvector);
		var_67_cvector = var_65_cvector - var_64_cvector;
		var_78_float = GetByIndex(var_67_cvector, 0);
		var_79_float = GetByIndex(var_66_cvector, 0);
		var_81_float = GetByIndex(var_67_cvector, 2);
		var_82_float = GetByIndex(var_66_cvector, 2);
		if(((var_78_float * var_79_float) + (var_81_float * var_82_float)) >= 0)
			var_68_string = "fdie";
		else
			var_68_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_53_object = var_69_object;
		var_89_bool = IsFuncExist(var_53_object, "GetScriptProperty", 2);
		if(var_89_bool != 0) {
			var_53_object->HasScriptProperty(var_70_bool, "Owner");
			if(var_70_bool != 0) {
				var_53_object->GetScriptProperty(var_69_object, "Owner");
				if(var_69_object == null)
					var_53_object = var_69_object;
			}
		}
		var_96_bool = IsFuncExist(var_69_object, "@GetEyesHeight", 1);
		if(var_96_bool != 0) {
			var_69_object->GetEyesHeight(var_72_float);
			var_73_cvector = [0.0, 0.0, 0.0];
			var_97_float = GetByIndex(var_73_cvector, 1);
			var_72_float = var_97_float;
			SetByIndex(var_73_cvector, 1) = var_97_float;
			@LookAsync(var_53_object, "head", var_73_cvector);
			var_71_bool = true;
		} else {
			var_71_bool = false;

		}
		@PlayAnimation("all", var_68_string);
		@WaitForAnimEnd();
		if(var_71_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_68_string);
		@RemoveEnvelope();
		var_69_object = null;
	}
	
}


void func_801(object var_0_object, object var_1_object)
{
	int var_16_int; bool var_17_bool; cvector var_18_cvector; object var_19_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		@irand(var_16_int, 60);
		@Sleep((var_16_int + 30), var_17_bool);
		if(var_17_bool != 0) {
			func_724();
		} else {
		for(;;) {
			@GetPFPosition(var_18_cvector);
			float var_24_float; cvector var_26_cvector;
			var_18_cvector = var_26_cvector;
			func_1133(var_24_float, var_1_object, var_26_cvector);
			if(var_24_float > 40000) {
				@FindPathTo(var_19_object, var_1_object);
				if(var_19_object != null) {
					@RotatePath(var_19_object, var_17_bool);
					if(!var_17_bool) { //@nz
					} else {
					@FollowPath(var_19_object, false, var_17_bool);
					if(!var_17_bool) { //@nz
						goto Label_876;
					}
					var_35_float = GetByIndex(var_0_object, 0);
					var_36_float = GetByIndex(var_0_object, 2);
					@Rotate(var_35_float, var_36_float, var_17_bool);
					if(!var_17_bool) { //@nz
						goto Label_876;
					}
					@WaitForAnimEnd(var_17_bool);
					if(!var_17_bool) { //@nz
						goto Label_876;
					}
					goto Label_877;
				EMIT "GOTO 0x35d";
				}
				@Sleep(1);
				var_19_object = null;
				goto Label_876;
			}
			var_40_float = GetByIndex(var_0_object, 0);
			var_41_float = GetByIndex(var_0_object, 2);
			@Rotate(var_40_float, var_41_float, var_17_bool);
			if(!var_17_bool) { //@nz
				goto Label_876;
			}
			@WaitForAnimEnd(var_17_bool);
			if(!var_17_bool) { //@nz
				goto Label_876;
			}
			goto Label_877;
			}
		Label_876:
		}
		}
	Label_877:
	}
	
}
EMIT "Return(); Pop(8)";


void func_421(object var_0_object, object var_1_object, bool var_2_bool, object var_62_object, bool var_63_bool)
{
	bool var_69_bool; bool var_70_bool;
	var_0_object = var_62_object;
	@Face(var_0_object);
	if(var_63_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_440:
	for(;;) {
		bool var_77_bool;
		func_1024(var_77_bool, var_0_object);
		if(var_77_bool != 0) {
			@CanSee(var_70_bool, var_0_object);
			if(var_70_bool != 0) {
				func_590(var_70_bool);
			} else {
				func_1115(var_0_object);
				var_2_bool = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_69_bool);
				if(!var_69_bool) { //@nz
					if(var_1_object != null)
						func_585(var_69_bool, var_70_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_440;
				}
				bool var_224_bool;
				func_1024(var_224_bool, var_0_object);
				if(!var_224_bool) { //@nz
				} else {
						@CanSee(var_70_bool, var_0_object);
						if(var_70_bool != 0) {
							var_2_bool = false;
							@Face(var_0_object);
							func_590(var_70_bool);
							goto Label_532;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_69_bool);
						if(!var_69_bool) { //@nz
							if(var_1_object != null)
								func_585(var_69_bool, var_70_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_440;
						}
						bool var_238_bool;
						func_1024(var_238_bool, var_0_object);
						var_240_bool = !var_238_bool; //@nz
						if(var_240_bool == 0) goto Label_520;
				}
		}
		Label_542:
			for(;;) {
				@SetAttackState(false);
				@StopAsync();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();

			}

		Label_520:
			var_2_bool = false;
			@CanSee(var_70_bool, var_0_object);
			if(var_70_bool != 0) {
				@Face(var_0_object);
				func_590(var_70_bool);
				goto Label_532;
			}
			goto Label_542;
		}
	Label_532:
		if(var_1_object != null)
			func_585(var_69_bool, var_70_bool);
		else
			@Sleep(2);

	}
	
}


// @pe
void func_1448(object var_54_object)
{
	object var_55_object;
	var_54_object = var_55_object;
	func_1346(var_55_object);
}


void func_1322(object var_73_object)
{
	if(var_73_object == null) {
	}
	var_77_object = GlobalVars[0];
	bool var_75_bool;
	var_77_object->in(var_75_bool, var_73_object);
	if(!var_75_bool) { //@nz
		var_79_object = GlobalVars[0];
		var_79_object->add(var_73_object);
	}
}


void func_171(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


void func_1197(int var_17_int, int var_18_int)
{
	int var_24_int;
	if(var_17_int > var_18_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_23_int = 0;
	if(var_17_int != var_18_int) {
		@irand(var_24_int, (var_18_int - var_17_int));
	} else if(var_17_int == 0) {
		return 8;
	}
	var_23_int += var_17_int;
	if(var_23_int == 0)
		return 8;
	int var_25_int;
	@GetInvItemByName(var_25_int, "Money");
	bool var_26_bool;
	@AddItem(var_26_bool, var_25_int, 0, var_23_int);
	
}


// @pe
void func_1454(object var_9_object)
{
	object var_10_object;
	var_9_object = var_10_object;
	func_1269(var_10_object);
}


// @pe
void func_1335(object var_80_object)
{
	object var_81_object;
	var_80_object = var_81_object;
	func_1322(var_81_object);
	object var_82_object;
	var_80_object = var_82_object;
	func_1311(var_82_object, true);
}


void func_1346(object var_55_object)
{
	var_58_object = GlobalVars[0];
	bool var_57_bool;
	var_58_object->in(var_57_bool, var_55_object);
	if(var_57_bool != 0) {
		object var_60_object;
		var_55_object = var_60_object;
		func_1311(var_60_object, true);
	} else {
		object var_242_object;
		var_55_object = var_242_object;
		TaskCall(2);
		func_266(var_243_object, var_244_bool, var_242_object);
		TaskReturn();
		@ResetAAS();
	}
	
}


void func_585(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


void func_1227(void)
{
	bool var_15_bool;
	@ClearSubContainer(0);
	func_1197(500, 1000);
	int var_14_int;
	@irand(var_14_int, 4);
	if(var_14_int != 0) {
		int var_40_int;
		func_1264(var_40_int, "rifle_ammo");
		@AddItem(var_15_bool, var_40_int, 0, var_14_int);
	}
	@irand(var_14_int, 3);
	if(var_14_int == 0) {
		int var_48_int;
		func_1264(var_48_int, "rusk");
		@AddItem(var_15_bool, var_48_int, 0, 1);
	}
}


void func_590(object var_0_object)
{
	float var_95_float; object var_96_object; object var_97_object;
	@ReportAttack(var_0_object);
	cvector var_89_cvector;
	@GetDirection(var_89_cvector);
	cvector var_98_cvector;
	func_892(var_98_cvector, var_0_object);
	cvector var_90_cvector;
	var_98_cvector = var_90_cvector;
	float var_104_float; cvector var_105_cvector; cvector var_106_cvector;
	var_90_cvector = var_106_cvector;
	func_1180(var_104_float, var_105_cvector, var_106_cvector);
	if(var_104_float < 0.9659258) {
	}
	@PlayAnimation("all", "attack_begin1");
	@WaitForAnimEnd();
	@Speak("shot");
	@GetDirection(var_105_cvector);
	cvector var_133_cvector;
	func_892(var_133_cvector, var_0_object);
	var_133_cvector = var_90_cvector;
	var_135_float = GetByIndex(var_90_cvector, 1);
	float var_136_float;
	func_1126(var_136_float, var_0_object);
	SetByIndex(var_90_cvector, 1) = (var_135_float + var_136_float);
	cvector var_91_cvector;
	@RandVecCone3D(var_91_cvector, var_90_cvector, 0.2617994);
	object var_92_object;
	int var_93_int;
	cvector var_94_cvector;
	@GetVictimMaterial(var_91_cvector, var_92_object, var_93_int, var_94_cvector);
	if(var_92_object != null) {
		if(var_92_object == var_0_object) {
			float var_145_float;
			func_919(var_145_float, var_0_object, 1.5, 0);
			var_145_float = var_95_float;
			@ReportHit(var_0_object, 2, var_95_float, 1.5);
		} else if(var_93_int != -1) {
			@GetScene(var_96_object);
			@AddActorByType(var_97_object, "scripted", var_96_object, var_94_cvector, [0.0, 0.0, 1.0], "richochet.xml");
			var_97_object->SetScriptProperty("Material", var_93_int);
			var_97_object = null;
			var_96_object = null;
		}
	}
	@PlayAnimation("all", "attack_end1");
	@WaitForAnimEnd();
	@LockAnimationEnd("all", "attack_on");
	
}
EMIT "Stack[-6] = 0";


void func_724(void)
{
}


// @pe
void func_1367(bool var_252_bool, object var_253_object)
{
	object var_255_object;
	var_253_object = var_255_object;
	float var_254_float;
	func_899(var_254_float, var_255_object);
	var_252_bool = var_254_float <= 40000.0;
}


void func_983(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	var_29_object->IsDead(var_31_bool);
	var_31_bool = var_28_bool;
}


void func_1115(object var_209_object)
{
	cvector var_213_cvector;
	var_209_object->GetPosition(var_213_cvector);
	cvector var_214_cvector;
	@GetPosition(var_214_cvector);
	cvector var_215_cvector = var_213_cvector - var_214_cvector;
	var_216_float = GetByIndex(var_215_cvector, 0);
	var_217_float = GetByIndex(var_215_cvector, 2);
	@RotateAsync(var_216_float, var_217_float);
}


void func_988(bool var_17_bool, object var_18_object)
{
	if(var_18_object == null) {
		var_17_bool = false;
		return 4;
	}
	bool var_24_bool = false;
	var_27_bool = IsFuncExist(var_18_object, "IsDead", 1);
	if(var_27_bool != 0) {
		bool var_28_bool; object var_29_object;
		var_18_object = var_29_object;
		func_983(var_28_bool, var_29_object);
		if(var_28_bool != 0)
			var_24_bool = true;
	}
	if(var_24_bool != 0) {
		var_17_bool = false;
		return 4;
	}
	object var_21_object;
	@GetScene(var_21_object);
	if(var_21_object == null) {
		var_17_bool = false;
		return 4;
	}
	object var_22_object;
	var_18_object->GetScene(var_22_object);
	if(var_21_object != var_22_object) {
		var_17_bool = false;
		return 4;
	}
	var_17_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1375(bool var_50_bool, object var_51_object)
{
	bool var_53_bool;
	@IsPlayerActor(var_51_object, var_53_bool);
	var_53_bool = var_50_bool;
}


void func_1380(bool var_9_bool, object var_10_object)
{
	bool var_13_bool; object var_14_object;
	func_1024(var_13_bool, var_14_object);
	if(!var_13_bool) { //@nz
		var_9_bool = false;
		return 2;
	}
	var_48_object = GlobalVars[0];
	bool var_12_bool;
	var_48_object->in(var_12_bool, var_14_object);
	if(var_12_bool != 0) {
		var_9_bool = true;
		return 2;
	}
	bool var_50_bool; object var_51_object;
	var_10_object = var_51_object;
	func_1375(var_50_bool, var_51_object);
	var_50_bool = var_9_bool;
}


void func_1126(float var_136_float, object var_137_object)
{
	float var_140_float;
	@GetEyesHeight(var_140_float);
	float var_141_float;
	var_137_object->GetEyesHeight(var_141_float);
	var_136_float = var_141_float - var_140_float;
}


void func_1133(float var_24_float, cvector var_25_cvector, cvector var_26_cvector)
{
	var_24_float = (var_26_cvector - var_25_cvector) | (var_26_cvector - var_25_cvector);
}


void func_879(void)
{
	@StopGroup0();
	@Stop();
}


void func_1264(int var_40_int, string var_41_string)
{
	int var_43_int;
	@GetInvItemByName(var_43_int, var_41_string);
	var_43_int = var_40_int;
}


// @pe
void func_1137(float var_178_float, float var_179_float, float var_180_float)
{
	if(var_179_float < var_180_float)
		var_179_float = var_178_float;
	else
		var_180_float = var_178_float;
	
}


// @pe
void func_884(string var_170_string, int var_171_int)
{
	if(var_171_int == 1)
		var_170_string = "fire";
	var_170_string = "phys";
}


// @pe
void func_1269(object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	TaskCall(0);
	func_0(var_11_object);
	TaskReturn();
}


// @pe
void func_119(string var_75_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_75_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_75_string);
	@RemoveEnvelope();
}


// @pe
void func_1144(float var_188_float, float var_189_float, float var_190_float, float var_191_float)
{
	if(var_189_float < var_190_float) {
		var_190_float = var_188_float;
		return 0;
	}
	if(var_189_float > var_191_float) {
		var_191_float = var_188_float;
		return 0;
	}
	var_189_float = var_188_float;
}


// @pe
void func_1402(object var_55_object)
{
	object var_56_object;
	var_55_object = var_56_object;
	func_1448(var_56_object);
}


void func_892(cvector var_98_cvector, object var_99_object)
{
	cvector var_102_cvector;
	@GetPosition(var_102_cvector);
	cvector var_103_cvector;
	var_99_object->GetPosition(var_103_cvector);
	var_98_cvector = var_103_cvector - var_102_cvector;
}


