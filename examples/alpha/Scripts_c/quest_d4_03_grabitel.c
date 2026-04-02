maintask task_0
{
	void init(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object)
	{
		@SensePlayerOnly(true);
		func_38();
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, int var_6_int, bool var_7_bool, object var_8_object)
	{
		bool var_10_bool;
		@IsPlayerActor(var_8_object, var_10_bool);
		if(var_10_bool != 0) {
			bool var_12_bool;
			func_1147(var_12_bool, "quest_d4_03", "gang_attack");
			TaskCall(1);
			func_88();
			TaskReturn();
		}
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, int var_6_int, bool var_7_bool, object var_8_object)
	{
		if(var_8_object == "attack") {
			TaskCall(1);
			func_88();
			TaskReturn();
		} else {
			string var_371_string;
			func_42(var_371_string, var_371_string);
		}
	
	}

	void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object)
	{
		bool var_8_bool = false;
		if(var_0_bool != 0) {
			bool var_10_bool;
			func_86(var_10_bool);
			if(var_10_bool != 0)
				var_8_bool = true;
		}
		if(var_8_bool != 0) {
			object var_11_object;
			func_1123(var_11_object);
			@RemoveActor(var_11_object);
		}
	}

}


task task_1
{
	void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object)
	{
		object var_8_object;
		func_1123(var_8_object);
		@RemoveActor(var_8_object);
		@Hold();
	}

}


task task_2
{
	void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object)
	{
		object var_8_object;
		func_1123(var_8_object);
		@RemoveActor(var_8_object);
		@Hold();
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, int var_8_int)
	{
		if(var_8_int != 0)
			return 0;
		bool var_11_bool;
		func_753(var_11_bool, var_1_object);
		if(!var_11_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object)
	{
		@RequestClearPath(var_8_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object)
	{
		func_737(var_8_object);
		object var_10_object;
		var_8_object = var_10_object;
		func_1193();
	}

}


task task_3
{
	void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object)
	{
		object var_8_object;
		func_1123(var_8_object);
		@RemoveActor(var_8_object);
		@Hold();
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, string var_9_string)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object)
	{
	}

}


// @pe
void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
{
	object var_12_object;
	var_8_object = var_12_object;
	int var_13_int;
	var_9_int = var_13_int;
	float var_14_float;
	var_10_float = var_14_float;
	func_1045(var_13_int, var_14_float);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, string var_9_string)
{
	float var_11_float;
	if(var_9_string == "health") {
		@GetProperty("health", var_11_float);
		if(var_11_float <= 0)
			@SignalDeath(var_8_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object)
{
	object var_9_object;
	var_8_object = var_9_object;
	func_1159(var_9_object);
}


// @pe
void func_896(string var_300_string, int var_301_int)
{
	if(var_301_int == 1)
		var_300_string = "fire";
	var_300_string = "phys";
}


// @pe
void func_772(object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_781(var_17_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1159(object var_9_object)
{
	bool var_10_bool;
	func_1147(var_10_bool, "quest_d4_03", "death");
	object var_16_object;
	var_9_object = var_16_object;
	TaskCall(3);
	func_772(var_16_object);
	TaskReturn();
}


void func_904(bool var_35_bool, object var_36_object, string var_37_string)
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


void func_781(object var_17_object)
{
	cvector var_28_cvector; cvector var_29_cvector; cvector var_30_cvector; cvector var_31_cvector; string var_32_string; object var_33_object; bool var_34_bool; bool var_35_bool; float var_36_float; cvector var_37_cvector;
	if(var_17_object == null) {
		func_868("fdie");
	} else {
		var_17_object->GetPosition(var_28_cvector);
		@GetPosition(var_29_cvector);
		@GetDirection(var_30_cvector);
		var_31_cvector = var_29_cvector - var_28_cvector;
		var_42_float = GetByIndex(var_31_cvector, 0);
		var_43_float = GetByIndex(var_30_cvector, 0);
		var_45_float = GetByIndex(var_31_cvector, 2);
		var_46_float = GetByIndex(var_30_cvector, 2);
		if(((var_42_float * var_43_float) + (var_45_float * var_46_float)) >= 0)
			var_32_string = "fdie";
		else
			var_32_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_17_object = var_33_object;
		var_53_bool = IsFuncExist(var_17_object, "GetScriptProperty", 2);
		if(var_53_bool != 0) {
			var_17_object->HasScriptProperty(var_34_bool, "Owner");
			if(var_34_bool != 0) {
				var_17_object->GetScriptProperty(var_33_object, "Owner");
				if(var_33_object == null)
					var_17_object = var_33_object;
			}
		}
		var_60_bool = IsFuncExist(var_33_object, "@GetEyesHeight", 1);
		if(var_60_bool != 0) {
			var_33_object->GetEyesHeight(var_36_float);
			var_37_cvector = [0.0, 0.0, 0.0];
			var_61_float = GetByIndex(var_37_cvector, 1);
			var_36_float = var_61_float;
			SetByIndex(var_37_cvector, 1) = var_61_float;
			@LookAsync(var_17_object, "head", var_37_cvector);
			var_35_bool = true;
		} else {
			var_35_bool = false;

		}
		@PlayAnimation("all", var_32_string);
		@WaitForAnimEnd();
		if(var_35_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_32_string);
		@RemoveEnvelope();
		var_33_object = null;
	}
	
}


void func_916(float var_272_float, object var_273_object, float var_274_float, int var_275_int)
{
	int var_285_int; int var_287_int;
	object var_292_object;
	var_273_object = var_292_object;
	bool var_291_bool;
	func_904(var_291_bool, var_292_object, "health");
	if(!var_291_bool) //@nz
		var_272_float = 0.0;
	bool var_295_bool; object var_296_object;
	func_904(var_295_bool, var_296_object, "armor");
	if(!var_295_bool) //@nz
		var_285_int = 0;
	else
		var_296_object->GetProperty("armor", var_285_int);
	string var_300_string; int var_301_int;
	var_275_int = var_301_int;
	func_896(var_300_string, var_301_int);
	string var_286_string = "armor_" + var_300_string;
	bool var_304_bool; object var_305_object; string var_306_string;
	var_273_object = var_305_object;
	func_904(var_304_bool, var_305_object, var_306_string);
	if(!var_304_bool) //@nz
		var_287_int = 0;
	else
		var_273_object->GetProperty(var_306_string, var_287_int);

	float var_308_float;
	func_1129(var_308_float, ((var_285_int + var_287_int) / 100.0), (float)1);
	float var_288_float;
	var_308_float = var_288_float;
	float var_289_float;
	var_273_object->GetProperty("health", var_289_float);
	float var_318_float;
	func_1136(var_318_float, (var_289_float - (var_274_float * (1 - var_288_float))), (float)0, (float)1);
	var_273_object->SetProperty("health", var_318_float);
	float var_290_float = var_272_float;
	
}


void func_1045(object var_12_object, int var_13_int)
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


void func_535(bool var_0_bool)
{
	@Face(var_0_bool);
	@PlayAnimation("all", "bjump");
	cvector var_219_cvector;
	var_0_bool->GetPFPosition(var_219_cvector); //@t
	cvector var_220_cvector;
	@GetPFPosition(var_220_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_38(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_42(bool var_0_bool, string var_371_string)
{
	bool var_373_bool;
	if(var_371_string == "cleanup") {
		var_0_bool = true;
		@IsLoaded(var_373_bool);
		bool var_376_bool = false;
		if(!var_373_bool) { //@nz
			bool var_378_bool;
			func_86(var_378_bool);
			if(var_378_bool != 0)
				var_376_bool = true;
		}
		if(var_376_bool != 0) {
			object var_379_object;
			func_1123(var_379_object);
			@RemoveActor(var_379_object);
		}
	} else if(var_371_string == "restore") {
		var_0_bool = false;
	}
	
}


void func_554(bool var_0_bool, bool var_178_bool)
{
	bool var_180_bool;
	var_183_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_183_bool != 0) {
		var_0_bool->IsAttacking(var_180_bool); //@t
		var_180_bool = var_178_bool;
	}
	var_178_bool = false;
}


void func_565(object var_2_object, int var_4_int)
{
	int var_243_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_4_int != 0) {
		if((var_4_int + -1) > 0)
			return 4;
	}
	float var_242_float;
	@rand(var_242_float);
	float var_249_float;
	func_603(var_249_float);
	if(var_242_float < var_249_float) {
		@irand(var_243_int, var_2_object);
		@Speak("attack" + (var_243_int + 1));
		int var_254_int;
		func_601(var_254_int);
		var_4_int = var_254_int;
	}
}


void func_438(bool var_344_bool, float var_345_float)
{
	float var_348_float; bool var_349_bool;
	@rand(var_348_float);
	if(var_348_float < var_345_float) {

		for(;;) {
			@IsAnimationPlaying(var_349_bool);
			if(!var_349_bool) { //@nz
			} else {
				bool var_352_bool;
				func_502(var_349_bool, var_352_bool);
				if(var_352_bool != 0) {
					var_344_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_344_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_319(bool var_0_bool, float var_258_float, int var_259_int)
{
	object var_263_object; float var_264_float; float var_265_float;
	@GetVictim((var_258_float * 0.9), var_263_object);
	@ReportAttack(var_0_bool);
	if(var_263_object == var_0_bool) {
		float var_269_float; object var_270_object; int var_271_int;
		var_263_object = var_270_object;
		var_259_int = var_271_int;
		func_100(var_271_int);
		var_269_float = var_264_float;
		float var_272_float; object var_273_object; float var_274_float; int var_275_int;
		var_263_object = var_273_object;
		int var_276_int; object var_277_object; int var_278_int;
		var_263_object = var_277_object;
		var_259_int = var_278_int;
		func_103(var_278_int);
		var_276_int = var_275_int;
		func_916(var_272_float, var_273_object, var_274_float, var_275_int);
		var_272_float = var_265_float;
		int var_325_int;
		func_597(var_325_int);
		@ReportHit(var_0_bool, var_325_int, var_265_float, var_274_float);
		object var_326_object; float var_327_float;
		var_263_object = var_326_object;
		var_265_float = var_327_float;
		func_599();
	}
}
EMIT "Stack[-3] = 0";


void func_462(bool var_0_bool, bool var_186_bool, float var_187_float)
{
	bool var_193_bool; cvector var_194_cvector; cvector var_195_cvector; cvector var_196_cvector; float var_197_float;
	
	for(;;) {
		@IsAnimationPlaying(var_193_bool);
		if(!var_193_bool) //@nz
			break;
		bool var_199_bool;
		func_502(var_197_float, var_199_bool);
		if(var_199_bool != 0) {
			var_186_bool = true;
			return 10;
		}
		bool var_224_bool;
		func_1021(var_224_bool, var_0_bool);
		if(!var_224_bool) { //@nz
			var_186_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_194_cvector); //@t
		@GetPFPosition(var_195_cvector);
		var_196_cvector = var_194_cvector - var_195_cvector;
		var_197_float = var_196_cvector | var_196_cvector;
		if(var_197_float < (var_187_float * var_187_float)) {
			bool var_229_bool; float var_230_float;
			var_187_float = var_230_float;
			func_358(var_196_cvector, var_197_float, var_229_bool, var_230_float);
			var_186_bool = true;
			return 10;
		}
		@sync();
	}
	var_186_bool = false;
}


void func_980(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	var_29_object->IsDead(var_31_bool);
	var_31_bool = var_28_bool;
}


void func_597(int var_325_int)
{
	var_325_int = 0;
}


void func_86(bool var_10_bool)
{
	var_10_bool = true;
}


// @pe
void func_599(void)
{
}


void func_1112(object var_164_object)
{
	cvector var_168_cvector;
	var_164_object->GetPosition(var_168_cvector);
	cvector var_169_cvector;
	@GetPosition(var_169_cvector);
	cvector var_170_cvector = var_168_cvector - var_169_cvector;
	var_171_float = GetByIndex(var_170_cvector, 0);
	var_172_float = GetByIndex(var_170_cvector, 2);
	@RotateAsync(var_171_float, var_172_float);
}


void func_88(void)
{
	object var_17_object;
	@FindActor(var_17_object, "player");
	object var_19_object;
	object var_16_object;
	func_114(var_12_int, var_13_int, var_14_bool, var_15_int, var_16_object, var_19_object, var_19_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_601(int var_254_int)
{
	var_254_int = 1;
}


void func_603(float var_249_float)
{
	var_249_float = 0.5;
}


void func_985(bool var_17_bool, object var_18_object)
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
		func_980(var_28_bool, var_29_object);
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


void func_737(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1123(object var_8_object)
{
	object var_10_object;
	@self(var_10_object);
	var_10_object = var_8_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_100(float var_269_float)
{
	var_269_float = 0.1;
}


void func_613(bool var_0_bool, string var_1_string, bool var_102_bool, object var_103_object, float var_104_float, float var_105_float, bool var_106_bool, bool var_107_bool)
{
	bool var_118_bool; object var_120_object; cvector var_121_cvector; cvector var_122_cvector; float var_124_float; object var_125_object;
	var_0_bool = false;
	var_1_string = var_103_object;
	bool var_119_bool;
	var_107_bool = var_119_bool;
	
	for(;;) {
		bool var_126_bool; object var_127_object;
		var_103_object = var_127_object;
		func_753(var_126_bool, var_127_object);
		if(!var_126_bool) { //@nz
			var_102_bool = false;
			return 16;
		}
		var_103_object->GetPosition(var_121_cvector);
		@GetPosition(var_122_cvector);
		var_124_float = (var_121_cvector - var_122_cvector) | (var_121_cvector - var_122_cvector);
		bool var_131_bool = false;
		if(var_105_float > 0) {
			if(var_124_float > (var_105_float * var_105_float))
				var_131_bool = true;
		}
		if(var_131_bool != 0) {
			@Stop();
			var_102_bool = false;
			return 16;
		}
		if(var_124_float > (var_104_float * var_104_float)) {
			var_103_object->GetPFPosition(var_121_cvector);
			@FindPathTo(var_125_object, var_121_cvector);
			if(var_125_object != null) {
				var_125_object = var_120_object;
				var_125_object = null;
			}
			if(var_120_object != null) {
				if(var_119_bool == 0) goto Label_666;
				var_119_bool = false;
				@RotatePath(var_120_object, var_118_bool);
				if(!var_118_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_144_string;
						func_760(var_144_string);
						string var_145_string;
						func_762(var_145_string);
						@FollowPath(var_120_object, var_106_bool, var_118_bool, var_144_string, var_145_string);
						if(!var_118_bool) { //@nz
							if(var_0_bool == 0) goto Label_685;
							var_120_object = null;
						}
					EMIT "GOTO 0x2ae";

					Label_685:
						} else {
					var_120_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_118_bool);
					if(!var_118_bool) { //@nz
						if(var_0_bool != 0) {
							var_120_object = null;
							goto Label_713;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_713;
		}
			var_125_object = null;
			goto Label_711;

		Label_711:
			var_120_object = null;

		}
	Label_713:
		for(;;) {
			var_102_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_358(bool var_0_bool, string var_1_string, bool var_229_bool, float var_230_float)
{
	int var_233_int;
	@irand(var_233_int, var_1_string);
	var_233_int += 1;
	@Face(var_0_bool);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_233_int));
	@WaitForAnimEnd();
	bool var_234_bool;
	func_565(var_233_int, var_234_bool);
	bool var_255_bool;
	func_1021(var_255_bool, var_0_bool);
	if(!var_255_bool) { //@nz
		@StopAsync();
		var_229_bool = false;
		return 4;
	}
	float var_258_float; int var_259_int;
	var_230_float = var_258_float;
	var_233_int = var_259_int;
	func_319(var_234_bool, var_258_float, var_259_int);
	@HasAnimation(var_234_bool, "all", ("attack_middle" + var_233_int));
	if(var_234_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_233_int));
		@WaitForAnimEnd();
		bool var_335_bool;
		func_1021(var_335_bool, var_0_bool);
		if(!var_335_bool) { //@nz
			@StopAsync();
			var_229_bool = false;
			return 4;
		}
		float var_338_float; int var_339_int;
		var_230_float = var_338_float;
		var_233_int = var_339_int;
		func_319(var_234_bool, var_338_float, var_339_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_233_int));
	bool var_344_bool;
	func_438(var_344_bool, 0.75);
	@StopAsync();
	var_229_bool = true;
}


// @pe
void func_103(int var_276_int)
{
	var_276_int = 1;
}


// @pe
void func_868(string var_39_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_39_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_39_string);
	@RemoveEnvelope();
}


// @pe
void func_1129(float var_308_float, float var_309_float, float var_310_float)
{
	if(var_309_float < var_310_float)
		var_309_float = var_308_float;
	else
		var_310_float = var_308_float;
	
}


// @pe
void func_1136(float var_318_float, float var_319_float, float var_320_float, float var_321_float)
{
	if(var_319_float < var_320_float) {
		var_320_float = var_318_float;
		return 0;
	}
	if(var_319_float > var_321_float) {
		var_321_float = var_318_float;
		return 0;
	}
	var_319_float = var_318_float;
}


// @pe
void func_753(bool var_11_bool, object var_12_object)
{
	object var_14_object;
	var_12_object = var_14_object;
	bool var_13_bool;
	func_1021(var_13_bool, var_14_object);
	var_13_bool = var_11_bool;
}


void func_114(bool var_0_bool, string var_1_string, object var_2_object, int var_3_int, int var_4_int, object var_19_object, bool var_20_bool, float var_21_float, bool var_108_bool)
{
	bool var_32_bool; bool var_33_bool; float var_34_float; cvector var_35_cvector; cvector var_36_cvector; bool var_37_bool; bool var_38_bool; float var_40_float; float var_41_float;
	var_1_string = 0;
	
	for(;;) {
		@HasAnimation(var_32_bool, "all", ("attack_begin" + (var_1_string + 1)));
		if(!var_32_bool) { //@nz
		} else {
			var_1_string += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_33_bool, ("attack" + (var_2_object + 1)));
			if(!var_33_bool) { //@nz
			} else {
									var_2_object += 1;
			}
			var_4_int = 0;
			var_55_bool = IsFuncExist(var_19_object, "@GetAttackDistance", 1);
			if(var_55_bool != 0) {
				var_19_object->GetAttackDistance(var_34_float);
				var_34_float += 50;
			} else {
								var_21_float = var_34_float;

			}
			if(var_34_float >= 150)
				var_34_float = 150;
			var_3_int = false;
			var_0_bool = var_19_object;
			@IsPlayerActor(var_0_bool, var_37_bool);
			if(var_20_bool != 0)
				var_38_bool = false;
			else
				var_38_bool = true;

			for(;;) {
				bool var_60_bool = false;
				bool var_61_bool;
				func_1021(var_61_bool, var_0_bool);
				if(var_61_bool != 0) {
					if(!var_3_int) //@nz
						var_60_bool = true;
				}
				if(var_60_bool != 0) {
					var_0_bool->GetPFPosition(var_35_cvector); //@t
					@GetPFPosition(var_36_cvector);
					var_40_float = (var_35_cvector - var_36_cvector) | (var_35_cvector - var_36_cvector);
					if(var_40_float >= ((400.0 + var_34_float) * (400.0 + var_34_float))) {
						bool var_102_bool; float var_104_float;
						var_34_float = var_104_float;
						TaskCall(2);
						func_613(var_108_bool, var_109_object, var_102_bool, var_0_bool, var_104_float, 3000.0, true, false);
						TaskReturn();
						if(!var_108_bool) { //@nz
						} else {
							var_38_bool = false;
					} else {
					if(var_40_float >= (var_21_float * var_21_float)) {
						if(!var_38_bool) { //@nz
							func_1112(var_0_bool);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_38_bool = true;
						}
						@rand(var_41_float);
						bool var_175_bool;
						var_177_bool = var_41_float < 0.6;
						if(var_177_bool != 1) {
							bool var_178_bool;
							func_554(true, var_178_bool);
							if(var_178_bool != 1)
								var_175_bool = false;
						}
						if(var_175_bool != 0) {
							@Face(var_0_bool);
							@PlayAnimation("all", "attack_stay");
							bool var_186_bool; float var_187_float;
							func_462(var_41_float, var_186_bool, var_187_float);
							@StopAsync();
						} else {
							@Face(var_0_bool);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_356_bool;
							func_554(var_41_float, var_356_bool);
							var_357_bool = !var_356_bool; //@nz
							if(var_357_bool == 0) goto Label_292;
							bool var_358_bool;
							func_1021(var_358_bool, var_0_bool);
							if(!var_358_bool) { //@nz
								goto Label_302;
							}
							var_0_bool->GetPFPosition(var_35_cvector); //@t
							@GetPFPosition(var_36_cvector);
							var_40_float = (var_35_cvector - var_36_cvector) | (var_35_cvector - var_36_cvector);
							if(!(var_40_float < (var_187_float * var_187_float))) goto Label_292;
							bool var_363_bool; float var_364_float;
							var_21_float = var_364_float;
							func_358(var_40_float, var_41_float, var_363_bool, var_364_float);
							var_365_bool = !var_363_bool; //@nz
							if(var_365_bool == 0) goto Label_292;
							goto Label_302;
					}
						bool var_366_bool; float var_367_float;
						var_21_float = var_367_float;
						func_358(var_40_float, var_41_float, var_366_bool, var_367_float);
						if(!var_366_bool) { //@nz
							goto Label_302;
						}
						var_38_bool = true;

					}
				Label_292:
					goto Label_301;
					}
					Label_301:
					}
				}
			Label_302:
				@WaitForAnimEnd();
				if(var_3_int != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_37_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_502(bool var_0_bool, bool var_199_bool)
{
	cvector var_205_cvector; cvector var_206_cvector;
	bool var_210_bool;
	func_1021(var_210_bool, var_0_bool);
	if(!var_210_bool) { //@nz
		var_199_bool = false;
		return 10;
	}
	bool var_213_bool;
	float var_209_float;
	func_554(var_209_float, var_213_bool);
	if(var_213_bool != 0) {
		var_0_bool->GetPFPosition(var_205_cvector); //@t
		@GetPFPosition(var_206_cvector);
		var_0_bool->GetAttackDistance(var_209_float); //@t
		var_209_float += 50;
		if(((var_205_cvector - var_206_cvector) | (var_205_cvector - var_206_cvector)) <= (var_209_float * var_209_float)) {
			func_535(var_209_float);
			var_199_bool = true;
			return 10;
		}
	}
	var_199_bool = false;
}


void func_760(string var_144_string)
{
	var_144_string = "walk";
}


void func_762(string var_145_string)
{
	var_145_string = "run";
}


void func_1147(bool var_10_bool, string var_11_string, string var_12_string)
{
	object var_14_object;
	@FindActor(var_14_object, var_11_string);
	if(var_14_object == null)
		var_10_bool = false;
	@Trigger(var_14_object, var_12_string);
	var_10_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1021(bool var_13_bool, object var_14_object)
{
	object var_18_object;
	var_14_object = var_18_object;
	bool var_17_bool;
	func_985(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_13_bool = false;
		return 2;
	}
	bool var_35_bool; object var_36_object;
	func_904(var_35_bool, var_36_object, "noaccess");
	if(!var_35_bool) { //@nz
		var_13_bool = true;
		return 2;
	}
	int var_16_int;
	var_36_object->GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == 0;
}


