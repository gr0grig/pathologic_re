// @GLOBALS: 0:int:,1:object:

task task_0
{
	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		if(var_11_bool == 10) {
			int var_14_int;
			func_1179(var_14_int);
			var_22_int = GlobalVars[0];
			if(var_14_int != var_22_int)
				func_155(var_11_bool);
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		@RequestClearPath(var_11_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		func_155(var_11_bool);
		object var_13_object;
		var_11_bool = var_13_object;
		func_1434();
	}

}


task task_1
{
	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		if(var_11_bool != 0)
			return 0;
		bool var_14_bool;
		func_338(var_14_bool, var_1_object);
		if(!var_14_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		@RequestClearPath(var_11_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		func_322(var_11_bool);
		object var_13_object;
		var_11_bool = var_13_object;
		func_1434();
	}

}


task task_2
{
	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		@RequestClearPath(var_11_bool);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		func_421(var_10_string, var_11_bool);
		object var_12_object;
		var_11_bool = var_12_object;
		func_1434();
	}

}


task task_3
{
}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int)
	{
		if(1 != 0) {
			func_1350();
			if(var_12_int == 10685) {
				object var_17_object = var_1_object;
				func_1442(var_0_bool);
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_bool;
				func_1436();
			}
			if(var_12_int == 10687) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_bool;
				func_1453();
				object var_46_object = var_1_object;
				func_1470(var_0_bool);
			}
			if(var_12_int == 10688) {
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_bool;
				func_1453();
				object var_53_object = var_1_object;
				func_1475(var_0_bool);
			}
			if(var_12_int == 10698) {
				object var_58_object = var_1_object;
				func_1459(var_0_bool);
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_bool;
				func_1436();
			}
			if(var_11_int == 10680) {
				bool var_68_bool;
				func_1490(var_1_object);
				if(var_68_bool != 0) {
					func_689(var_12_int, "Neutral");
					var_0_bool->SetMessage(9701); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(9702, 10682, 10681); //@t
					var_0_bool->AddReply(9711, 10682, 10691); //@t
					return 0;
				}
				func_689(var_12_int, "Neutral");
				var_0_bool->SetMessage(9712); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9713, 10695, 10694); //@t
				var_0_bool->AddReply(9720, 10702, 10701); //@t
				var_0_bool->AddReply(9723, 10695, 10705); //@t
				var_0_bool->AddReply(9724, -1, 10707); //@t
				return 0;
			EMIT "PushEmpty(bool, object)";
			EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
			EMIT "Call 0x5c8";
			EMIT "Pop(1)";
			EMIT "IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)";
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=113";
			EMIT "Call 0x2b1";
			EMIT "Pop(1)";
			EMIT "Push((int) 11013)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=129";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=140";
			EMIT "Pop(0)";
			EMIT "Push((int) 11014)";
			EMIT "Push((int) 12186)";
			EMIT "Push((int) 12185)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=153";
			EMIT "Pop(3)";
			EMIT "Push((int) 11017)";
			EMIT "Push((int) -1)";
			EMIT "Push((int) 12188)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=153";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_11_int == 12186) {
				func_689(var_12_int, "Neutral");
				var_0_bool->SetMessage(11015); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11016, -1, 12187); //@t
				return 0;
			}
			if(var_11_int == 10702) {
				func_689(var_12_int, "Neutral");
				var_0_bool->SetMessage(9721); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9722, 10697, 10703); //@t
				return 0;
			}
			if(var_11_int == 10695) {
				func_689(var_12_int, "Neutral");
				var_0_bool->SetMessage(9714); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9715, 10697, 10696); //@t
				var_0_bool->AddReply(9719, -1, 10700); //@t
				return 0;
			}
			if(var_11_int == 10697) {
				func_689(var_12_int, "Neutral");
				var_0_bool->SetMessage(9716); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9717, -1, 10698); //@t
				var_0_bool->AddReply(9718, -1, 10699); //@t
				return 0;
			}
			if(var_11_int == 10682) {
				func_689(var_12_int, "Neutral");
				var_0_bool->SetMessage(9703); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9704, 10684, 10683); //@t
				var_0_bool->AddReply(9710, 10684, 10689); //@t
				return 0;
			}
			if(var_11_int == 10684) {
				func_689(var_12_int, "Neutral");
				var_0_bool->SetMessage(9705); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9706, 10686, 10685); //@t
				return 0;
			}
			if(var_11_int == 10686) {
				func_689(var_12_int, "Neutral");
				var_0_bool->SetMessage(9707); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9708, -1, 10687); //@t
				var_0_bool->AddReply(9709, -1, 10688); //@t
				return 0;
			}
			var_3_object = true;
			bool var_173_bool;
			func_1526(var_173_bool);
			if(var_173_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2c2";
	
	}

}


maintask task_6
{
	void init(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool)
	{
		var_11_int = GlobalVars[0];
		int var_12_int;
		func_1179(var_12_int);
		var_12_int = var_11_int;
		GlobalVars[0] = var_11_int;
	
		for(;;) {
			@Sleep(3);
			func_1078();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object)
	{
		func_1147();
		int var_14_int; object var_15_object;
		var_11_object = var_15_object;
		int var_13_int;
		func_1005(var_13_int, var_14_int, var_15_object);
		var_14_int = var_13_int;
		if(var_13_int == 0) {
			bool var_142_bool;
			func_1398(var_142_bool, "quest_d4_01", "key2_done");
			object var_148_object;
			var_11_object = var_148_object;
			TaskCall(0);
			func_0(var_148_object);
			TaskReturn();
			object var_251_object;
			var_11_object = var_251_object;
			TaskCall(1);
			func_182(var_251_object);
			TaskReturn();
			object var_307_object;
			var_11_object = var_307_object;
			TaskCall(7);
			func_1160(var_307_object);
			TaskReturn();
		} else if(var_13_int == 1) {
			bool var_317_bool;
			func_1398(var_317_bool, "quest_d4_01", "key2_done");
			TaskCall(2);
			func_349();
			TaskReturn();
		}
	
	}

}


task task_7
{
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object)
{
}


// @pe
void func_0(object var_148_object)
{
	@SetTimer(10, 1);
	
	for(;;) {
		bool var_153_bool; object var_154_object;
		func_49(var_150_object, var_154_object, var_153_bool, var_154_object, (float)250, (float)3000, true, true);
		int var_236_int;
		func_1179(var_236_int);
		var_244_int = GlobalVars[0];
		if(var_236_int != var_244_int) {
		} else {
				@Sleep(1);
				int var_248_int;
				func_1179(var_248_int);
				var_249_int = GlobalVars[0];
				if(!(var_248_int != var_249_int)) goto Label_30;
		}
		for(;;) {
			@KillTimer(10);
			return 0;

		}

	Label_30:
	}
}


// @pe
void func_1152(object var_311_object)
{
	object var_313_object;
	var_311_object = var_313_object;
	TaskCall(4);
	int var_312_int;
	func_508(var_314_object, var_312_int, var_313_object);
	TaskReturn();
}


void func_1410(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_1160(object var_307_object)
{
	bool var_309_bool;
	
	for(;;) {
		@IsOverrideActive(var_309_bool);
		if(!var_309_bool) //@nz
			break;
	}
	object var_311_object;
	var_307_object = var_311_object;
	func_1152(var_311_object);
	@Hold();
}


void func_1417(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1410(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1174(cvector var_17_cvector)
{
	cvector var_19_cvector;
	@GetPosition(var_19_cvector);
	var_19_cvector = var_17_cvector;
}


void func_1179(int var_12_int)
{
	object var_15_object;
	@GetScene(var_15_object);
	cvector var_17_cvector;
	func_1174(var_17_cvector);
	int var_16_int;
	var_15_object->GetRegionByPt(var_16_int, var_17_cvector);
	var_16_int = var_12_int;
}
EMIT "Stack[-2] = 0";


void func_155(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1436(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1442(object var_17_object)
{
	@Trace("soborkey is given");
	object var_20_object;
	var_17_object = var_20_object;
	func_1385(var_20_object, "d4q01_sobor_key", 1);
}


void func_421(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_1190(bool var_199_bool, object var_200_object, string var_201_string)
{
	var_206_bool = IsFuncExist(var_200_object, "HasProperty", 2);
	if(!var_206_bool) { //@nz
		var_199_bool = false;
		return 2;
	}
	bool var_203_bool;
	var_200_object->HasProperty(var_201_string, var_203_bool);
	var_203_bool = var_199_bool;
}


// @pe
void func_171(bool var_175_bool, object var_176_object)
{
	object var_178_object;
	var_176_object = var_178_object;
	bool var_177_bool;
	func_1243(var_177_bool, var_178_object);
	var_177_bool = var_175_bool;
}


// @pe
void func_1453(void)
{
	@SetVariable("ood4WastedMale1", 1);
}


// @pe
void func_1328(void)
{
	@CameraSwitchToNormal();
}


void func_49(bool var_0_bool, object var_1_object, bool var_153_bool, object var_154_object, float var_155_float, float var_156_float, bool var_157_bool, bool var_158_bool)
{
	bool var_167_bool; object var_169_object; cvector var_170_cvector; cvector var_171_cvector; float var_173_float; object var_174_object;
	var_0_bool = false;
	var_1_object = var_154_object;
	bool var_168_bool;
	var_158_bool = var_168_bool;
	
	for(;;) {
		bool var_175_bool; object var_176_object;
		var_154_object = var_176_object;
		func_171(var_175_bool, var_176_object);
		if(!var_175_bool) { //@nz
			var_153_bool = false;
			return 16;
		}
		var_154_object->GetPosition(var_170_cvector);
		@GetPosition(var_171_cvector);
		var_173_float = (var_170_cvector - var_171_cvector) | (var_170_cvector - var_171_cvector);
		bool var_212_bool = false;
		if(var_156_float > 0) {
			if(var_173_float > (var_156_float * var_156_float))
				var_212_bool = true;
		}
		if(var_212_bool != 0) {
			@Stop();
			var_153_bool = false;
			return 16;
		}
		if(var_173_float > (var_155_float * var_155_float)) {
			var_154_object->GetPFPosition(var_170_cvector);
			@FindPathTo(var_174_object, var_170_cvector);
			if(var_174_object != null) {
				var_174_object = var_169_object;
				var_174_object = null;
			}
			if(var_169_object != null) {
				if(var_168_bool == 0) goto Label_102;
				var_168_bool = false;
				@RotatePath(var_169_object, var_167_bool);
				if(!var_167_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_225_string;
						func_178(var_225_string);
						string var_226_string;
						func_180(var_226_string);
						@FollowPath(var_169_object, var_157_bool, var_167_bool, var_225_string, var_226_string);
						if(!var_167_bool) { //@nz
							if(var_0_bool == 0) goto Label_121;
							var_169_object = null;
						}
					EMIT "GOTO 0x7a";

					Label_121:
						} else {
					var_169_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_167_bool);
					if(!var_167_bool) { //@nz
						if(var_0_bool != 0) {
							var_169_object = null;
							goto Label_149;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_149;
		}
			var_174_object = null;
			goto Label_147;

		Label_147:
			var_169_object = null;

		}
	Label_149:
		for(;;) {
			var_153_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1202(bool var_192_bool, object var_193_object)
{
	bool var_195_bool;
	var_193_object->IsDead(var_195_bool);
	var_195_bool = var_192_bool;
}


void func_178(string var_225_string)
{
	var_225_string = "walk";
}


// @pe
void func_689(bool var_2_bool, string var_94_string)
{
	bool var_95_bool;
	func_1526(var_95_bool);
	if(!var_95_bool) //@nz
		return 0;
	if(var_94_string == var_2_bool)
		return 0;
	string var_98_string;
	func_1332(var_98_string);
	var_2_bool = var_98_string;
}


void func_180(string var_226_string)
{
	var_226_string = "run";
}


void func_437(bool var_343_bool)
{
	var_343_bool = false;
}


void func_1332(string var_98_string)
{
	@Trace("playing " + var_98_string);
	float var_101_float;
	float var_102_float;
	@lshGetAnimTimes(var_98_string, var_101_float, var_102_float);
	@lshPlayAnimation(var_101_float, var_102_float);
	@Trace("start: " + var_101_float);
	@Trace("end: " + var_102_float);
}


void func_439(void)
{
	int var_354_int; int var_355_int; bool var_356_bool; float var_357_float; bool var_358_bool;
	@WaitForAnimEnd();
	bool var_359_bool;
	func_1267(var_359_bool);
	if(!var_359_bool) //@nz
		return 14;
	int var_363_int;
	func_1417(var_363_int);
	int var_352_int;
	var_363_int = var_352_int;
	int var_353_int = 0;
	
	for(;;) {
		bool var_376_bool = false;
		if(var_353_int < 5) {
			bool var_379_bool;
			func_1267(var_379_bool);
			if(var_379_bool != 0)
				var_376_bool = true;
		}
		if(var_376_bool != 0) {
			@irand(var_354_int, 3);
			if(var_354_int == 0) {
				if(var_352_int == 0) goto Label_486;
				@irand(var_355_int, var_352_int);
				string var_385_string; int var_386_int;
				var_355_int = var_386_int;
				func_1410(var_385_string, var_386_int);
				@PlayAnimation("all", var_385_string);
				@WaitForAnimEnd(var_356_bool);
				if(!var_356_bool) { //@nz
				} else {
			} else {
			if(var_354_int == 1) {
				@rand(var_357_float, 4);
				@Sleep((var_357_float + 1), var_358_bool);
				if(!var_358_bool) { //@nz
					goto Label_507;
				}
			} else if(var_353_int != 0) {
				goto Label_507;
			}
			}
				var_353_int += 1;
			}
		}
	Label_507:
		return 14;

	}
	
}


// @pe
void func_1459(object var_58_object)
{
	@Trace("tvirin is given");
	object var_61_object;
	var_58_object = var_61_object;
	func_1385(var_61_object, "tvirin", 1);
}


void func_1078(void)
{
	int var_30_int; int var_31_int; bool var_32_bool; float var_33_float; bool var_34_bool;
	@WaitForAnimEnd();
	bool var_35_bool;
	func_1267(var_35_bool);
	if(!var_35_bool) //@nz
		return 14;
	int var_39_int;
	func_1417(var_39_int);
	int var_28_int;
	var_39_int = var_28_int;
	int var_29_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_29_int < 5) {
			bool var_55_bool;
			func_1267(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			@irand(var_30_int, 3);
			if(var_30_int == 0) {
				if(var_28_int == 0) goto Label_1125;
				@irand(var_31_int, var_28_int);
				string var_61_string; int var_62_int;
				var_31_int = var_62_int;
				func_1410(var_61_string, var_62_int);
				@PlayAnimation("all", var_61_string);
				@WaitForAnimEnd(var_32_bool);
				if(!var_32_bool) { //@nz
				} else {
			} else {
			if(var_30_int == 1) {
				@rand(var_33_float, 4);
				@Sleep((var_33_float + 1), var_34_bool);
				if(!var_34_bool) { //@nz
					goto Label_1146;
				}
			} else if(var_29_int != 0) {
				goto Label_1146;
			}
			}
				var_29_int += 1;
			}
		}
	Label_1146:
		return 14;

	}
	
}


// @pe
void func_182(object var_251_object)
{
	
	for(;;) {
		bool var_254_bool; object var_255_object;
		func_198(var_253_object, var_255_object, var_254_bool, var_255_object, (float)250, (float)3000, true, true);
		var_305_bool = !var_254_bool; //@nz
		if(var_305_bool == 0) goto Label_197;
		@Sleep(1);
	}
	
Label_197:
}


// @pe
void func_571(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_79_object, object var_80_object)
{
	var_0_bool = var_80_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_86_bool;
		func_1490(var_79_object);
		if(var_86_bool != 0) {
			func_689(var_80_object, "Neutral");
			var_0_bool->SetMessage(9701); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(9702, 10682, 10681); //@t
			var_0_bool->AddReply(9711, 10682, 10691); //@t
		} else {
					func_689(var_80_object, "Neutral");
					var_0_bool->SetMessage(9712); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(9713, 10695, 10694); //@t
					var_0_bool->AddReply(9720, 10702, 10701); //@t
					var_0_bool->AddReply(9723, 10695, 10705); //@t
					var_0_bool->AddReply(9724, -1, 10707); //@t
		}
	}
	for(;;) {
		bool var_116_bool;
		func_1526(var_116_bool);
		if(var_116_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1332(var_2_bool);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_688;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_688:
			return 0;

		}

	}
}
EMIT "PushEmpty(bool, object)";
EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
EMIT "Call 0x5c8";
EMIT "Pop(1)";
EMIT "IF (Stack[-1] == 0) GOTO 0x291; Pop(1)";
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=113";
EMIT "Call 0x2b1";
EMIT "Pop(1)";
EMIT "Push((int) 11013)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=129";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=140";
EMIT "Pop(0)";
EMIT "Push((int) 11014)";
EMIT "Push((int) 12186)";
EMIT "Push((int) 12185)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=153";
EMIT "Pop(3)";
EMIT "Push((int) 11017)";
EMIT "Push((int) -1)";
EMIT "Push((int) 12188)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=153";
EMIT "Pop(3)";
EMIT "GOTO 0x293";


void func_1207(bool var_181_bool, object var_182_object)
{
	if(var_182_object == null) {
		var_181_bool = false;
		return 4;
	}
	bool var_188_bool = false;
	var_191_bool = IsFuncExist(var_182_object, "IsDead", 1);
	if(var_191_bool != 0) {
		bool var_192_bool; object var_193_object;
		var_182_object = var_193_object;
		func_1202(var_192_bool, var_193_object);
		if(var_192_bool != 0)
			var_188_bool = true;
	}
	if(var_188_bool != 0) {
		var_181_bool = false;
		return 4;
	}
	object var_185_object;
	@GetScene(var_185_object);
	if(var_185_object == null) {
		var_181_bool = false;
		return 4;
	}
	object var_186_object;
	var_182_object->GetScene(var_186_object);
	if(var_185_object != var_186_object) {
		var_181_bool = false;
		return 4;
	}
	var_181_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1470(object var_47_object)
{
	var_47_object->SetReturnValue(0);
}


void func_322(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1475(object var_54_object)
{
	var_54_object->SetReturnValue(1);
}


void func_198(bool var_0_bool, object var_1_object, bool var_254_bool, object var_255_object, float var_256_float, float var_257_float, bool var_258_bool, bool var_259_bool)
{
	bool var_268_bool; object var_270_object; cvector var_271_cvector; cvector var_272_cvector; float var_274_float; object var_275_object;
	var_0_bool = false;
	var_1_object = var_255_object;
	bool var_269_bool;
	var_259_bool = var_269_bool;
	
	for(;;) {
		bool var_276_bool; object var_277_object;
		var_255_object = var_277_object;
		func_338(var_276_bool, var_277_object);
		if(!var_276_bool) { //@nz
			var_254_bool = false;
			return 16;
		}
		var_255_object->GetPosition(var_271_cvector);
		@GetPosition(var_272_cvector);
		var_274_float = (var_271_cvector - var_272_cvector) | (var_271_cvector - var_272_cvector);
		bool var_281_bool = false;
		if(var_257_float > 0) {
			if(var_274_float > (var_257_float * var_257_float))
				var_281_bool = true;
		}
		if(var_281_bool != 0) {
			@Stop();
			var_254_bool = false;
			return 16;
		}
		if(var_274_float > (var_256_float * var_256_float)) {
			var_255_object->GetPFPosition(var_271_cvector);
			@FindPathTo(var_275_object, var_271_cvector);
			if(var_275_object != null) {
				var_275_object = var_270_object;
				var_275_object = null;
			}
			if(var_270_object != null) {
				if(var_269_bool == 0) goto Label_251;
				var_269_bool = false;
				@RotatePath(var_270_object, var_268_bool);
				if(!var_268_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_294_string;
						func_345(var_294_string);
						string var_295_string;
						func_347(var_295_string);
						@FollowPath(var_270_object, var_258_bool, var_268_bool, var_294_string, var_295_string);
						if(!var_268_bool) { //@nz
							if(var_0_bool == 0) goto Label_270;
							var_270_object = null;
						}
					EMIT "GOTO 0x10f";

					Label_270:
						} else {
					var_270_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_268_bool);
					if(!var_268_bool) { //@nz
						if(var_0_bool != 0) {
							var_270_object = null;
							goto Label_298;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_298;
		}
			var_275_object = null;
			goto Label_296;

		Label_296:
			var_270_object = null;

		}
	Label_298:
		for(;;) {
			var_254_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1350(void)
{
	bool var_14_bool;
	func_1526(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1480(void)
{
0x5c8: PushEmpty()
0x5c9: PushEmpty(bool, object)
0x5ca: Stack[-3] = Stack[-1]
0x5cb: Call 0x5de
}


void func_1357(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_338(bool var_276_bool, object var_277_object)
{
	object var_279_object;
	var_277_object = var_279_object;
	bool var_278_bool;
	func_1243(var_278_bool, var_279_object);
	var_278_bool = var_276_bool;
}


// @pe
void func_1490(bool var_86_bool)
{
	int var_88_int;
	func_1367(var_88_int, "ood4WastedMale1");
	if(var_88_int == 0) {
		var_86_bool = true;
		return 0;
	}
	var_86_bool = false;
}


void func_1367(int var_88_int, string var_89_string)
{
	int var_91_int;
	@GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
}


void func_345(string var_294_string)
{
	var_294_string = "walk";
}


void func_1243(bool var_177_bool, object var_178_object)
{
	object var_182_object;
	var_178_object = var_182_object;
	bool var_181_bool;
	func_1207(var_181_bool, var_182_object);
	if(!var_181_bool) { //@nz
		var_177_bool = false;
		return 2;
	}
	bool var_199_bool; object var_200_object;
	func_1190(var_199_bool, var_200_object, "noaccess");
	if(!var_199_bool) { //@nz
		var_177_bool = true;
		return 2;
	}
	int var_180_int;
	var_200_object->GetProperty("noaccess", var_180_int);
	var_177_bool = var_180_int == 0;
}


void func_347(string var_295_string)
{
	var_295_string = "run";
}


void func_349(void)
{
	
	for(;;) {
		func_357(var_320_bool, var_321_bool);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


void func_1372(object var_25_object, object var_26_object, int var_27_int)
{
	int var_31_int;
	var_26_object->GetItemID(var_31_int);
	int var_32_int;
	@GetInvItemProperty(var_32_int, var_31_int, "Category");
	bool var_33_bool;
	var_25_object->AddItem(var_33_bool, var_26_object, var_32_int, var_27_int);
	if(!var_33_bool) //@nz
		var_25_object->DropItems(var_26_object, var_27_int);
}


// @pe
void func_1502(void)
{
0x5de: PushEmpty()
0x5df: Stack[-2] = (bool) 0
0x5e0: Return(); Pop(0)
}


void func_1505(int var_70_int)
{
	int var_72_int;
	@GetVariable("player", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 200001;
		return 2;
	EMIT "GOTO 0x5f0";
	}
	if(var_72_int == 1) {
		var_70_int = 200002;
		return 2;
	}
	var_70_int = 200003;
}


void func_357(bool var_0_bool, object var_1_object)
{
	float var_329_float; cvector var_330_cvector; cvector var_331_cvector; float var_332_float; bool var_333_bool; object var_334_object; bool var_335_bool;
	@rand(var_329_float, 0.5);
	@Sleep(var_329_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_369:
				@GetPosition(var_331_cvector);
				@GetCameraFarDistance(var_332_float);
				@GetRandomPFPointInCircle(var_330_cvector, var_331_cvector, (var_332_float * 2.5), var_333_bool);
				if(var_333_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_369;
			}
				var_1_object = false;
		}
		}
		goto Label_386;

	Label_386:
		@FindShiftedPathTo(var_334_object, var_330_cvector);
		if(var_334_object != null) {
			@RotatePath(var_334_object, var_335_bool);
			if(var_335_bool != 0) {
				bool var_343_bool;
				func_437(var_343_bool);
				@FollowPath(var_334_object, var_343_bool, var_335_bool);
				var_334_object = null;
				if(var_335_bool != 0) {
					TaskCall(3);
					func_439();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_334_object = null;
	}
	
}


void func_1385(object var_20_object, string var_21_string, int var_22_int)
{
	object var_24_object;
	@CreateInvItem(var_24_object);
	var_24_object->SetItemName(var_21_string);
	object var_25_object; object var_26_object; int var_27_int;
	var_20_object = var_25_object;
	var_24_object = var_26_object;
	var_22_int = var_27_int;
	func_1372(var_25_object, var_26_object, var_27_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1005(int var_14_int, object var_15_object, object var_18_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	TaskCall(4);
	int var_16_int;
	func_508(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	var_18_object = var_14_int;
}


void func_1522(int var_68_int)
{
	var_68_int = 3341;
}


void func_1267(bool var_35_bool)
{
	bool var_37_bool;
	@IsLoaded(var_37_bool);
	var_37_bool = var_35_bool;
}


void func_1524(string var_69_string)
{
	var_69_string = "ui/NPC_None.png";
}


void func_1526(bool var_95_bool)
{
	var_95_bool = false;
}


void func_1398(bool var_142_bool, string var_143_string, string var_144_string)
{
	object var_146_object;
	@FindActor(var_146_object, var_143_string);
	if(var_146_object == null)
		var_142_bool = false;
	@Trigger(var_146_object, var_144_string);
	var_142_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1272(bool var_27_bool, object var_28_object)
{
	cvector var_38_cvector;
	var_28_object->GetPosition(var_38_cvector);
	float var_37_float;
	var_28_object->GetEyesHeight(var_37_float);
	var_45_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_45_float + var_37_float);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	@GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_46_float + var_37_float);
	cvector var_40_cvector = var_38_cvector - var_39_cvector;
	var_47_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_49_float = sqrt(var_40_cvector | var_40_cvector);
	var_40_cvector /= var_49_float;
	cvector var_41_cvector = -var_40_cvector;
	cvector var_52_cvector;
	func_1357(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * 70) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector);
	var_65_float = GetByIndex(var_42_cvector, 0);
	var_66_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
}


void func_1147(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_508(bool var_0_bool, int var_16_int, object var_17_object)
{
	var_0_bool = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_1272(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_68_int;
	func_1522(var_68_int);
	var_23_object->SetNPCName(var_68_int);
	string var_69_string;
	func_1524(var_69_string);
	var_23_object->SetPhoto(var_69_string);
	int var_70_int;
	func_1505(var_70_int);
	var_23_object->SetPlayerName(var_70_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_79_object; object var_80_object;
	var_17_object = var_79_object;
	var_23_object = var_80_object;
	TaskCall(5);
	func_571(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_138_bool = !var_26_bool; //@nz
		if(var_138_bool == 0) goto Label_560;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_560:
	object var_139_object;
	var_17_object = var_139_object;
	func_1328();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


