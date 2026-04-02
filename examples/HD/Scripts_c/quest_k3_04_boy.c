// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		if(1 != 0) {
			func_1137();
			if(var_11_bool == 26991) {
				object var_16_object = var_1_object;
				func_1301(var_0_object);
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_1295();
				object var_44_object; object var_45_object;
				var_44_object = var_1_object;
				var_45_object = var_0_object;
				func_1289();
			}
			if(var_10_cvector == 26988) {
				func_132(var_11_bool, "Neutral");
				var_0_object->SetMessage(525646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525647, 26990, 26989); //@t
				var_0_object->AddReply(539057, 26990, 41004); //@t
				return 0;
			}
			if(var_10_cvector == 26990) {
				func_132(var_11_bool, "Neutral");
				var_0_object->SetMessage(525648); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525649, -1, 26991); //@t
				var_0_object->AddReply(539058, -1, 41005); //@t
				return 0;
			}
			var_3_string = true;
			bool var_84_bool;
			func_1337(var_84_bool);
			if(var_84_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_12_object;
		var_10_bool = var_12_object;
		TaskCall(0);
		int var_11_int;
		func_0(var_13_object, var_11_int, var_12_object);
		TaskReturn();
		func_1339();
		TaskCall(3);
		func_257();
		TaskReturn();
	}

}


task task_3
{
	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		bool var_11_bool; object var_12_object;
		func_1397(var_11_bool, var_12_object);
		if(var_11_bool != 0) {
			func_356(var_9_cvector, var_12_object);
			object var_47_object;
			var_10_bool = var_47_object;
			func_1404(var_47_object);
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		@RequestClearPath(var_10_bool);
	}

	void OnActorStuck(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		@Stop();
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_356(var_9_cvector, var_10_bool);
		object var_11_object;
		var_10_bool = var_11_object;
		func_1391();
	}

}


task task_4
{
	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_12_object;
		var_10_bool = var_12_object;
		bool var_11_bool;
		func_1397(var_11_bool, var_12_object);
		if(var_11_bool != 0) {
			func_475();
			object var_47_object;
			var_10_bool = var_47_object;
			func_1404(var_47_object);
		}
	}

}


task task_5
{
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, int var_10_int)
	{
		cvector var_15_cvector; float var_16_float; cvector var_17_cvector; float var_18_float;
		if(var_10_int != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_15_cvector);
			@FindDirLength(var_16_float, var_15_cvector, 7000.0);
			cvector var_24_cvector;
			func_480(var_18_float, var_24_cvector, 1.7453294);
			var_24_cvector = var_17_cvector;
			var_18_float = var_17_cvector | var_17_cvector;
			bool var_54_bool = false;
			if(var_18_float >= 2500.0) {
				bool var_57_bool;
				var_61_bool = var_18_float >= ((var_16_float * var_16_float) * 2.25);
				if(var_61_bool != 1) {
					bool var_62_bool;
					func_651(true, var_62_bool);
					if(var_62_bool != 1)
						var_57_bool = false;
				}
				if(var_57_bool != 0)
					var_54_bool = true;
			}
			if(var_54_bool == 0) goto Label_634;
			@Stop();
			cvector var_82_cvector;
			func_799(var_82_cvector);
			var_1_object = var_82_cvector + var_17_cvector;
		}
	Label_634:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		func_635(var_10_object);
		object var_12_object;
		var_10_object = var_12_object;
		func_1391();
	}

}


task task_6
{
	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, string var_11_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_932(var_14_object, var_15_int, var_16_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float, cvector var_14_cvector, cvector var_15_cvector)
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
	func_1000(var_18_float, var_19_cvector, var_20_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_1349(var_11_object);
}


void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
{
	bool var_12_bool;
	@IsPlayerActor(var_10_object, var_12_bool);
	if(var_12_bool != 0) {
		bool var_14_bool;
		func_1253(var_14_bool, "quest_k3_04", "boy_attacked");
	}
}


void func_0(object var_0_object, int var_11_int, object var_12_object)
{
	var_0_object = var_12_object;
	bool var_22_bool; object var_23_object;
	var_12_object = var_23_object;
	func_1019(var_22_bool, var_23_object, 70.0);
	if(!var_22_bool) { //@nz
		var_11_int = -2;
		return 8;
	}
	object var_18_object;
	@CreateDialog(var_18_object);
	int var_70_int;
	func_1331(var_70_int);
	var_18_object->SetNPCName(var_70_int);
	int var_71_int;
	func_1329(var_71_int);
	var_18_object->SetNPCDescription(var_71_int);
	string var_72_string;
	func_1333(var_72_string);
	var_18_object->SetPhoto(var_72_string);
	string var_73_string;
	func_1335(var_73_string);
	var_18_object->SetPhoto2(var_73_string);
	int var_74_int;
	func_1312(var_74_int);
	var_18_object->SetPlayerName(var_74_int);
	bool var_19_bool;
	@IsOverrideActive(var_19_bool);
	if(var_19_bool != 0) {
		var_11_int = -2;
		return 8;
	}
	@DoDialog(var_18_object);
	object var_83_object; object var_84_object;
	var_12_object = var_83_object;
	var_18_object = var_84_object;
	TaskCall(1);
	func_74(var_85_object, var_86_object, var_87_string, var_88_bool, var_83_object, var_84_object);
	TaskReturn();
	bool var_21_bool;
	var_18_object->IsDialogEnd(var_21_bool);
	
	for(;;) {
		var_132_bool = !var_21_bool; //@nz
		if(var_132_bool == 0) goto Label_63;
		@sync();
		var_18_object->IsDialogEnd(var_21_bool);
	}
	
Label_63:
	object var_133_object;
	var_12_object = var_133_object;
	func_1088();
	@StopDialog(var_18_object);
	var_18_object->GetReturnValue(-1);
	int var_20_int = var_11_int;
}
EMIT "Stack[-4] = 0";


void func_257(void)
{
	bool var_148_bool;
	func_1253(var_148_bool, "quest_d3_03", "boy_free");
	@SetProperty("noaccess", 0);
	
	for(;;) {
		func_285(var_146_bool, var_147_bool);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_132(object var_2_object, string var_90_string)
{
	bool var_91_bool;
	func_1337(var_91_bool);
	if(!var_91_bool) //@nz
		return 0;
	if(var_90_string == var_2_object)
		return 0;
	string var_94_string; bool var_95_bool;
	var_90_string = var_94_string;
	if(var_90_string == "")
		var_95_bool = false;
	else
		var_95_bool = true;
	func_1122(var_94_string, var_95_bool);
	var_2_object = var_90_string;
	
}


// @pe
void func_1289(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_394(void)
{
	int var_192_int; int var_193_int; bool var_194_bool; float var_195_float; bool var_196_bool;
	@WaitForAnimEnd();
	bool var_197_bool;
	func_1014(var_197_bool);
	if(!var_197_bool) //@nz
		return 14;
	int var_201_int;
	func_1272(var_201_int);
	int var_190_int;
	var_201_int = var_190_int;
	int var_191_int = 0;
	
	for(;;) {
		bool var_214_bool = false;
		if(var_191_int < 5) {
			bool var_217_bool;
			func_1014(var_217_bool);
			if(var_217_bool != 0)
				var_214_bool = true;
		}
		if(var_214_bool != 0) {
			@irand(var_192_int, 3);
			if(var_192_int == 0) {
				if(var_190_int == 0) goto Label_441;
				@irand(var_193_int, var_190_int);
				string var_223_string; int var_224_int;
				var_193_int = var_224_int;
				func_1265(var_223_string, var_224_int);
				@PlayAnimation("all", var_223_string);
				@WaitForAnimEnd(var_194_bool);
				if(!var_194_bool) { //@nz
				} else {
			} else {
			if(var_192_int == 1) {
				@rand(var_195_float, 4);
				@Sleep((var_195_float + 1), var_196_bool);
				if(!var_196_bool) { //@nz
					goto Label_470;
				}
			} else if(var_191_int != 0) {
				goto Label_470;
			}
			}
					bool var_226_bool;
					func_473(var_226_bool);
					var_227_bool = !var_226_bool; //@nz
					if(var_227_bool == 0) goto Label_465;
			}
		}
	Label_470:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_465:
		@ResetAAS();
		var_191_int += 1;
	}
	
}


void func_651(object var_0_object, bool var_62_bool)
{
	cvector var_65_cvector;
	@GetDirection(var_65_cvector);
	cvector var_67_cvector;
	func_804(var_67_cvector, var_0_object);
	cvector var_66_cvector;
	var_67_cvector = var_66_cvector;
	float var_73_float; cvector var_74_cvector; cvector var_75_cvector;
	var_65_cvector = var_74_cvector;
	var_66_cvector = var_75_cvector;
	func_1201(var_73_float, var_74_cvector, var_75_cvector);
	var_62_bool = var_73_float >= -0.34202012;
}


// @pe
void func_1295(void)
{
	@SetVariable("k3q04LopuhTalk", 1);
}


// @pe
void func_1301(object var_16_object)
{
	@Trace("powder is given");
	object var_19_object;
	var_16_object = var_19_object;
	func_1240(var_19_object, "powder", 1);
}


// @pe
void func_1404(object var_47_object)
{
	object var_48_object;
	var_47_object = var_48_object;
	TaskCall(5);
	func_510(var_49_object, var_50_cvector, var_51_bool, var_48_object);
	TaskReturn();
}


// @pe
void func_667(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_676(var_18_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_285(object var_0_object, object var_1_object)
{
	float var_162_float; cvector var_163_cvector; cvector var_164_cvector; bool var_165_bool; object var_166_object; bool var_167_bool;
	@rand(var_162_float, 0.5);
	@Sleep(var_162_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_297:
				@GetPosition(var_164_cvector);
				float var_171_float;
				func_344(var_171_float);
				@GetRandomPFPointInCircle(var_163_cvector, var_164_cvector, var_171_float, var_165_bool);
				if(var_165_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_297;
			}
				var_1_object = false;
		}
		}
		goto Label_313;

	Label_313:
		object var_175_object; cvector var_176_cvector;
		var_163_cvector = var_176_cvector;
		func_374(var_175_object, var_176_cvector);
		var_175_object = var_166_object;
		if(var_166_object != null) {
			@RotatePath(var_166_object, var_167_bool);
			if(var_167_bool != 0) {
				bool var_181_bool;
				func_372(var_181_bool);
				@FollowPath(var_166_object, var_181_bool, var_167_bool);
				var_166_object = null;
				if(var_167_bool != 0) {
					TaskCall(4);
					func_394();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_166_object = null;
	}
	
}


void func_799(cvector var_82_cvector)
{
	cvector var_84_cvector;
	@GetPosition(var_84_cvector);
	var_84_cvector = var_82_cvector;
}


void func_1312(int var_74_int)
{
	int var_76_int;
	@GetVariable("branch", var_76_int);
	if(var_76_int == 0) {
		var_74_int = 1;
		return 2;
	EMIT "GOTO 0x52f";
	}
	if(var_76_int == 1) {
		var_74_int = 2;
		return 2;
	}
	var_74_int = 3;
}


void func_1185(object var_14_object)
{
	object var_16_object;
	@self(var_16_object);
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


void func_804(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


void func_676(object var_18_object)
{
	cvector var_29_cvector; cvector var_30_cvector; cvector var_31_cvector; cvector var_32_cvector; string var_33_string; object var_34_object; bool var_35_bool; bool var_36_bool; float var_37_float; cvector var_38_cvector;
	if(var_18_object == null) {
		func_767("fdie");
	} else {
		var_18_object->GetPosition(var_29_cvector);
		@GetPosition(var_30_cvector);
		@GetDirection(var_31_cvector);
		var_32_cvector = var_30_cvector - var_29_cvector;
		var_72_float = GetByIndex(var_32_cvector, 0);
		var_73_float = GetByIndex(var_31_cvector, 0);
		var_75_float = GetByIndex(var_32_cvector, 2);
		var_76_float = GetByIndex(var_31_cvector, 2);
		if(((var_72_float * var_73_float) + (var_75_float * var_76_float)) >= 0)
			var_33_string = "fdie";
		else
			var_33_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_18_object = var_34_object;
		var_83_bool = IsFuncExist(var_18_object, "GetScriptProperty", 2);
		if(var_83_bool != 0) {
			var_18_object->HasScriptProperty(var_35_bool, "Owner");
			if(var_35_bool != 0) {
				var_18_object->GetScriptProperty(var_34_object, "Owner");
				if(var_34_object == null)
					var_18_object = var_34_object;
			}
		}
		var_90_bool = IsFuncExist(var_34_object, "@GetEyesHeight", 1);
		if(var_90_bool != 0) {
			var_34_object->GetEyesHeight(var_37_float);
			var_38_cvector = [0.0, 0.0, 0.0];
			var_91_float = GetByIndex(var_38_cvector, 1);
			var_37_float = var_91_float;
			SetByIndex(var_38_cvector, 1) = var_91_float;
			@LookAsync(var_18_object, "head", var_38_cvector);
			var_36_bool = true;
		} else {
			var_36_bool = false;

		}
		string var_93_string;
		var_33_string = var_93_string;
		func_1144(var_93_string);
		@PlayAnimation("all", var_33_string);
		@WaitForAnimEnd();
		if(var_36_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_33_string);
		@RemoveEnvelope();
		var_34_object = null;
	}
	
}


void func_932(object var_14_object, int var_15_int, float var_16_float)
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
		func_804(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1191(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_994:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_888(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_994;
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
	func_1000(var_61_float, var_62_cvector, var_63_cvector);
}


void func_1191(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


void func_811(bool var_35_bool, object var_36_object, string var_37_string)
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


void func_1329(int var_71_int)
{
	var_71_int = 515560;
}


// @pe
void func_1201(float var_73_float, cvector var_74_cvector, cvector var_75_cvector)
{
	var_80_float = sqrt((var_74_cvector | var_74_cvector) * (var_75_cvector | var_75_cvector));
	var_73_float = (var_74_cvector | var_75_cvector) / var_80_float;
}


void func_1331(int var_70_int)
{
	var_70_int = 503345;
}


void func_1333(string var_72_string)
{
	var_72_string = "ui/NPC_Citizen3.png";
}


void func_1335(string var_73_string)
{
	var_73_string = "ui/NPC_Citizen3_b.png";
}


void func_823(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	var_29_object->IsDead(var_31_bool);
	var_31_bool = var_28_bool;
}


void func_1337(bool var_65_bool)
{
	var_65_bool = false;
}


void func_1209(int var_35_int, int var_36_int)
{
	object var_38_object;
	@CreateIntVector(var_38_object);
	var_38_object->add(var_35_int);
	var_38_object->add(var_36_int);
	@SendWorldWndMessage(3, var_38_object);
}
EMIT "Stack[-1] = 0";


void func_1339(void)
{
	object var_13_object;
	@GetScene(var_13_object);
	object var_14_object;
	func_1185(var_14_object);
	var_13_object->RemoveStationaryActor(var_14_object);
}
EMIT "Stack[-1] = 0";


void func_828(bool var_17_bool, object var_18_object)
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
		func_823(var_28_bool, var_29_object);
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


void func_1088(void)
{
	bool var_135_bool;
	@CameraSwitchToNormal(true);
	bool var_137_bool;
	func_1337(var_137_bool);
	if(var_137_bool != 0) {
	} else {
		@HasAnimationTrack(var_135_bool, "head");
		if(var_135_bool == 0) goto Label_1105;
		@UnlookAsync("head");
	}
Label_1105:
	
}


void func_1221(object var_24_object, object var_25_object, int var_26_int)
{
	int var_30_int;
	var_25_object->GetItemID(var_30_int);
	int var_31_int;
	@GetInvItemProperty(var_31_int, var_30_int, "Category");
	bool var_32_bool;
	var_24_object->AddItem(var_32_bool, var_25_object, var_31_int, var_26_int);
	if(!var_32_bool) { //@nz
		var_24_object->DropItems(var_25_object, var_26_int);
	} else {
		int var_35_int; int var_36_int;
		var_30_int = var_35_int;
		var_26_int = var_36_int;
		func_1209(var_35_int, var_36_int);
	}
	
}


// @pe
void func_1349(object var_11_object)
{
	func_1339();
	object var_17_object;
	var_11_object = var_17_object;
	TaskCall(6);
	func_667(var_17_object);
	TaskReturn();
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_83_object, object var_84_object)
{
	var_0_object = var_84_object;
	var_1_object = var_83_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_84_object, "Neutral");
		var_0_object->SetMessage(525646); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525647, 26990, 26989); //@t
		var_0_object->AddReply(539057, 26990, 41004); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_114_bool;
	func_1337(var_114_bool);
	if(var_114_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1106(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_131;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_131:
		return 0;

	}
	
}


void func_1106(string var_116_string)
{
	bool var_120_bool; float var_121_float; float var_122_float;
	@lshHasAnimation(var_120_bool, var_116_string);
	if(var_120_bool != 0) {
		@lshGetAnimTimes(var_116_string, var_121_float, var_122_float);
		@lshPlayAnimation(var_121_float, var_122_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_116_string);
	}
	
}


void func_344(float var_171_float)
{
	float var_173_float;
	@GetCameraFarDistance(var_173_float);
	var_173_float = var_171_float;
}


void func_473(bool var_226_bool)
{
	var_226_bool = true;
}


void func_1240(object var_19_object, string var_20_string, int var_21_int)
{
	object var_23_object;
	@CreateInvItem(var_23_object);
	var_23_object->SetItemName(var_20_string);
	object var_24_object; object var_25_object; int var_26_int;
	var_19_object = var_24_object;
	var_23_object = var_25_object;
	var_21_int = var_26_int;
	func_1221(var_24_object, var_25_object, var_26_int);
}
EMIT "Stack[-1] = 0";


void func_475(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_480(object var_0_object, cvector var_24_cvector, float var_25_float)
{
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	cvector var_33_cvector;
	var_0_object->GetPosition(var_33_cvector); //@t
	cvector var_34_cvector;
	@GetDirection(var_34_cvector);
	cvector var_38_cvector;
	cvector var_40_cvector;
	func_1191(var_40_cvector, (var_32_cvector - var_33_cvector));
	func_1191(var_38_cvector, (var_40_cvector + (var_34_cvector * 0.75)));
	cvector var_35_cvector;
	var_38_cvector = var_35_cvector;
	cvector var_36_cvector;
	float var_37_float;
	@FindLongestDir(var_36_cvector, var_37_float, var_35_cvector, var_25_float, 32, 7000.0);
	if((var_37_float - 100) < 0)
		var_37_float = 0;
	var_24_cvector = var_36_cvector * var_37_float;
}


void func_864(bool var_13_bool, object var_14_object)
{
	object var_18_object;
	var_14_object = var_18_object;
	bool var_17_bool;
	func_828(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_13_bool = false;
		return 2;
	}
	bool var_35_bool; object var_36_object;
	func_811(var_35_bool, var_36_object, "noaccess");
	if(!var_35_bool) { //@nz
		var_13_bool = true;
		return 2;
	}
	int var_16_int;
	var_36_object->GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == 0;
}


void func_1122(string var_94_string, bool var_95_bool)
{
	bool var_101_bool; float var_102_float; float var_103_float;
	@lshHasAnimation(var_101_bool, var_94_string);
	if(var_101_bool != 0) {
		@lshGetAnimTimes(var_94_string, var_102_float, var_103_float);
		@lshPlayAnimation(var_102_float, var_103_float, var_95_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_94_string);
	}
	
}


void func_356(object var_0_object, object var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_1253(bool var_14_bool, string var_15_string, string var_16_string)
{
	object var_18_object;
	@FindActor(var_18_object, var_15_string);
	if(var_18_object == null)
		var_14_bool = false;
	@Trigger(var_18_object, var_16_string);
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1000(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_888(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_635(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_1137(void)
{
	bool var_13_bool;
	func_1337(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_1265(string var_207_string, int var_208_int)
{
	string var_210_string = "idle";
	if(var_208_int != 0)
		var_210_string += var_208_int;
	var_210_string = var_207_string;
}


void func_372(bool var_181_bool)
{
	var_181_bool = false;
}


// @pe
void func_1397(bool var_11_bool, object var_12_object)
{
	object var_14_object;
	var_12_object = var_14_object;
	bool var_13_bool;
	func_864(var_13_bool, var_14_object);
	var_13_bool = var_11_bool;
}


void func_374(object var_175_object, cvector var_176_cvector)
{
	object var_178_object;
	@FindShiftedPathTo(var_178_object, var_176_cvector);
	var_178_object = var_175_object;
}
EMIT "Stack[-1] = 0";


void func_1014(bool var_197_bool)
{
	bool var_199_bool;
	@IsLoaded(var_199_bool);
	var_199_bool = var_197_bool;
}


void func_1272(int var_201_int)
{
	int var_204_int; bool var_205_bool;
	var_204_int = 0;
	
	for(;;) {
		string var_207_string; int var_208_int;
		var_204_int = var_208_int;
		func_1265(var_207_string, var_208_int);
		@HasAnimation(var_205_bool, "all", var_207_string);
		if(!var_205_bool) //@nz
			break;
		var_204_int += 1;
	}
	var_204_int = var_201_int;
}


void func_888(object var_27_object)
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


void func_1019(bool var_22_bool, object var_23_object, float var_24_float)
{
	cvector var_35_cvector; bool var_42_bool;
	var_23_object->GetPosition(var_35_cvector);
	float var_34_float;
	var_23_object->GetEyesHeight(var_34_float);
	var_43_float = GetByIndex(var_35_cvector, 1);
	SetByIndex(var_35_cvector, 1) = (var_43_float + var_34_float);
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	@GetEyesHeight(var_34_float);
	var_44_float = GetByIndex(var_36_cvector, 1);
	SetByIndex(var_36_cvector, 1) = (var_44_float + var_34_float);
	cvector var_37_cvector = var_35_cvector - var_36_cvector;
	var_45_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (float)0;
	var_47_float = sqrt(var_37_cvector | var_37_cvector);
	var_37_cvector /= var_47_float;
	cvector var_38_cvector = -var_37_cvector;
	cvector var_49_cvector;
	func_1191(var_49_cvector, (var_38_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_39_cvector = ((var_37_cvector * var_24_float) + (var_49_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_41_bool;
	@IsOverrideActive(var_41_bool);
	if(var_41_bool != 0)
		var_22_bool = false;
	@StopWorld();
	@CameraTransit((var_36_cvector + var_39_cvector), var_38_cvector, true);
	var_63_float = GetByIndex(var_39_cvector, 0);
	var_64_float = GetByIndex(var_39_cvector, 2);
	@Rotate(var_63_float, var_64_float);
	bool var_65_bool;
	func_1337(var_65_bool);
	if(var_65_bool != 0) {
	} else {
		@HasAnimationTrack(var_42_bool, "head");
		if(var_42_bool == 0) goto Label_1082;
		@LookAsyncCamera("head");
	}
Label_1082:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_22_bool = true;
	
}


void func_1144(string var_41_string)
{
	bool var_50_bool; int var_51_int; bool var_52_bool; int var_53_int; bool var_54_bool; float var_55_float; cvector var_56_cvector; cvector var_57_cvector;
	@IsExisting3DSound(var_50_bool, var_41_string);
	if(!var_50_bool) { //@nz
		var_51_int = 0;

		for(;;) {
			@IsExisting3DSound(var_52_bool, (var_41_string + (var_51_int + 1)));
			if(!var_52_bool) { //@nz
				break;
			Label_1164:
				@irand(var_53_int, var_51_int);
				var_41_string += (var_53_int + 1);
	}
			@Is3DSoundLoaded(var_54_bool, var_41_string);
			if(var_54_bool != 0) {
				@GetEyesHeight(var_55_float);
				@GetDirection(var_56_cvector);
				var_57_cvector = var_56_cvector * 50;
				var_68_float = GetByIndex(var_57_cvector, 1);
				SetByIndex(var_57_cvector, 1) = (var_68_float + var_55_float);
				@PlayGlobalSound(var_41_string, var_57_cvector);
			}
		}
		var_51_int += 1;
	}
	var_63_bool = !var_51_int; //@nz
	if(var_63_bool == 0) goto Label_1164;
}


void func_510(object var_0_object, object var_1_object, object var_2_object, object var_48_object)
{
	float var_58_float; cvector var_60_cvector; float var_61_float;
	cvector var_62_cvector;
	func_480(var_61_float, var_62_cvector, 1.7453294);
	cvector var_57_cvector;
	var_62_cvector = var_57_cvector;
	if((var_57_cvector | var_57_cvector) < 2500.0) {
		cvector var_94_cvector;
		func_480(var_61_float, var_94_cvector, 2.6179938);
		var_94_cvector = var_57_cvector;
		var_58_float = var_57_cvector | var_57_cvector;
		if(var_58_float < 2500.0) {
			var_99_float = sqrt(var_58_float);
			@Trace("Can't retreat, distance: " + var_99_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_102_float = GetByIndex(var_57_cvector, 0);
	var_103_float = GetByIndex(var_57_cvector, 2);
	@Rotate(var_102_float, var_103_float);
	cvector var_104_cvector;
	func_799(var_104_cvector);
	@SetTimer(120, 0.5);
	
Label_552:
	bool var_59_bool;
	@MovePoint((var_104_cvector + var_57_cvector), 1, var_59_bool);
	if(var_59_bool != 0) {
		if(var_48_object == null) {
			goto Label_582;
		EMIT "GOTO 0x244";

		Label_582:
			for(;;) {
				return 10;
		}
			cvector var_112_cvector;
			func_480(var_61_float, var_112_cvector, 2.6179938);
			var_112_cvector = var_60_cvector;
			if((var_60_cvector | var_60_cvector) >= 2500.0) {
				cvector var_116_cvector;
				func_799(var_116_cvector);
				var_1_object = var_116_cvector + var_60_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_552; //@nz

	}
}


// @pe
void func_767(string var_40_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_41_string;
	var_40_string = var_41_string;
	func_1144(var_41_string);
	@PlayAnimation("all", var_40_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_40_string);
	@RemoveEnvelope();
}


