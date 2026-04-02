// @GLOBALS: 0:int:,1:object:

task task_0
{
	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		if(var_11_bool == 10) {
			int var_14_int;
			func_1170(var_14_int);
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
		func_1463();
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
		func_1463();
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
		func_428(var_10_string, var_11_bool);
		object var_12_object;
		var_11_bool = var_12_object;
		func_1463();
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
			func_1361();
			if(var_12_int == 10685) {
				object var_17_object = var_1_object;
				func_1471(var_0_bool);
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_bool;
				func_1465();
			}
			if(var_12_int == 10687) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_bool;
				func_1491();
				object var_59_object = var_1_object;
				func_1508(var_0_bool);
			}
			if(var_12_int == 10688) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_bool;
				func_1491();
				object var_66_object = var_1_object;
				func_1513(var_0_bool);
			}
			if(var_12_int == 10698) {
				object var_71_object = var_1_object;
				func_1497(var_0_bool);
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_1465();
			}
			if(var_11_int == 10680) {
				bool var_81_bool;
				func_1518(var_1_object);
				if(var_81_bool != 0) {
					func_700(var_12_int, "Neutral");
					var_0_bool->SetMessage(509701); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(509702, 10682, 10681); //@t
					var_0_bool->AddReply(509711, 10682, 10691); //@t
					return 0;
				}
				func_700(var_12_int, "Neutral");
				var_0_bool->SetMessage(509712); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509713, 10695, 10694); //@t
				var_0_bool->AddReply(509720, 10702, 10701); //@t
				var_0_bool->AddReply(509723, 10695, 10705); //@t
				var_0_bool->AddReply(509724, -1, 10707); //@t
				return 0;
			}
			if(var_11_int == 10702) {
				func_700(var_12_int, "Neutral");
				var_0_bool->SetMessage(509721); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509722, 10697, 10703); //@t
				return 0;
			}
			if(var_11_int == 10695) {
				func_700(var_12_int, "Neutral");
				var_0_bool->SetMessage(509714); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509715, 10697, 10696); //@t
				var_0_bool->AddReply(509719, -1, 10700); //@t
				return 0;
			}
			if(var_11_int == 10697) {
				func_700(var_12_int, "Neutral");
				var_0_bool->SetMessage(509716); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509717, -1, 10698); //@t
				var_0_bool->AddReply(509718, -1, 10699); //@t
				return 0;
			}
			if(var_11_int == 10682) {
				func_700(var_12_int, "Neutral");
				var_0_bool->SetMessage(509703); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509704, 10684, 10683); //@t
				var_0_bool->AddReply(509710, 10684, 10689); //@t
				return 0;
			}
			if(var_11_int == 10684) {
				func_700(var_12_int, "Neutral");
				var_0_bool->SetMessage(509705); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509706, 10686, 10685); //@t
				return 0;
			}
			if(var_11_int == 10686) {
				func_700(var_12_int, "Neutral");
				var_0_bool->SetMessage(509707); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509708, -1, 10687); //@t
				var_0_bool->AddReply(509709, -1, 10688); //@t
				return 0;
			}
			var_3_object = true;
			bool var_176_bool;
			func_1555(var_176_bool);
			if(var_176_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2d3";
	
	}

}


maintask task_6
{
	void init(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool)
	{
		var_11_int = GlobalVars[0];
		int var_12_int;
		func_1170(var_12_int);
		var_12_int = var_11_int;
		GlobalVars[0] = var_11_int;
	
		for(;;) {
			@Sleep(3);
			func_1057();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object)
	{
		func_1138();
		int var_14_int; object var_15_object;
		var_11_object = var_15_object;
		int var_13_int;
		func_979(var_13_int, var_14_int, var_15_object);
		var_14_int = var_13_int;
		if(var_13_int == 0) {
			bool var_158_bool;
			func_1427(var_158_bool, "quest_d4_01", "key2_done");
			object var_164_object;
			var_11_object = var_164_object;
			TaskCall(0);
			func_0(var_164_object);
			TaskReturn();
			object var_267_object;
			var_11_object = var_267_object;
			TaskCall(1);
			func_182(var_267_object);
			TaskReturn();
			object var_323_object;
			var_11_object = var_323_object;
			TaskCall(7);
			func_1151(var_323_object);
			TaskReturn();
			TaskCall(2);
			func_349();
			TaskReturn();
		} else if(var_13_int == 1) {
			bool var_418_bool;
			func_1427(var_418_bool, "quest_d4_01", "key2_done");
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
void func_0(object var_164_object)
{
	@SetTimer(10, 1);
	
	for(;;) {
		bool var_169_bool; object var_170_object;
		func_49(var_166_object, var_170_object, var_169_bool, var_170_object, (float)250, (float)3000, true, true);
		int var_252_int;
		func_1170(var_252_int);
		var_260_int = GlobalVars[0];
		if(var_252_int != var_260_int) {
		} else {
				@Sleep(1);
				int var_264_int;
				func_1170(var_264_int);
				var_265_int = GlobalVars[0];
				if(!(var_264_int != var_265_int)) goto Label_30;
		}
		for(;;) {
			@KillTimer(10);
			return 0;

		}

	Label_30:
	}
}


void func_1414(object var_22_object, string var_23_string, int var_24_int)
{
	object var_26_object;
	@CreateInvItem(var_26_object);
	var_26_object->SetItemName(var_23_string);
	object var_27_object; object var_28_object; int var_29_int;
	var_22_object = var_27_object;
	var_26_object = var_28_object;
	var_24_int = var_29_int;
	func_1395(var_27_object, var_28_object, var_29_int);
}
EMIT "Stack[-1] = 0";


void func_1547(int var_75_int)
{
	var_75_int = 515556;
}


void func_1165(cvector var_17_cvector)
{
	cvector var_19_cvector;
	@GetPosition(var_19_cvector);
	var_19_cvector = var_17_cvector;
}


void func_1549(int var_74_int)
{
	var_74_int = 503341;
}


void func_1551(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen3.png";
}


void func_1553(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen3_b.png";
}


void func_1170(int var_12_int)
{
	object var_15_object;
	@GetScene(var_15_object);
	cvector var_17_cvector;
	func_1165(var_17_cvector);
	int var_16_int;
	var_15_object->GetRegionByPt(var_16_int, var_17_cvector);
	var_16_int = var_12_int;
}
EMIT "Stack[-2] = 0";


void func_531(bool var_403_bool)
{
	var_403_bool = true;
}


void func_1555(bool var_69_bool)
{
	var_69_bool = false;
}


void func_533(bool var_0_bool, int var_16_int, object var_17_object)
{
	var_0_bool = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_1263(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_74_int;
	func_1549(var_74_int);
	var_23_object->SetNPCName(var_74_int);
	int var_75_int;
	func_1547(var_75_int);
	var_23_object->SetNPCDescription(var_75_int);
	string var_76_string;
	func_1551(var_76_string);
	var_23_object->SetPhoto(var_76_string);
	string var_77_string;
	func_1553(var_77_string);
	var_23_object->SetPhoto2(var_77_string);
	int var_78_int;
	func_1530(var_78_int);
	var_23_object->SetPlayerName(var_78_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_87_object; object var_88_object;
	var_17_object = var_87_object;
	var_23_object = var_88_object;
	TaskCall(5);
	func_607(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_148_bool = !var_26_bool; //@nz
		if(var_148_bool == 0) goto Label_596;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_596:
	object var_149_object;
	var_17_object = var_149_object;
	func_1331();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_1427(bool var_158_bool, string var_159_string, string var_160_string)
{
	object var_162_object;
	@FindActor(var_162_object, var_159_string);
	if(var_162_object == null)
		var_158_bool = false;
	@Trigger(var_162_object, var_160_string);
	var_158_bool = true;
}
EMIT "Stack[-1] = 0";


void func_155(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1181(bool var_215_bool, object var_216_object, string var_217_string)
{
	var_222_bool = IsFuncExist(var_216_object, "HasProperty", 2);
	if(!var_222_bool) { //@nz
		var_215_bool = false;
		return 2;
	}
	bool var_219_bool;
	var_216_object->HasProperty(var_217_string, var_219_bool);
	var_219_bool = var_215_bool;
}


void func_1439(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_416(float var_348_float)
{
	float var_350_float;
	@GetCameraFarDistance(var_350_float);
	var_350_float = var_348_float;
}


void func_1057(void)
{
	int var_30_int; int var_31_int; bool var_32_bool; float var_33_float; bool var_34_bool;
	@WaitForAnimEnd();
	bool var_35_bool;
	func_1258(var_35_bool);
	if(!var_35_bool) //@nz
		return 14;
	int var_39_int;
	func_1446(var_39_int);
	int var_28_int;
	var_39_int = var_28_int;
	int var_29_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_29_int < 5) {
			bool var_55_bool;
			func_1258(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			@irand(var_30_int, 3);
			if(var_30_int == 0) {
				if(var_28_int == 0) goto Label_1104;
				@irand(var_31_int, var_28_int);
				string var_61_string; int var_62_int;
				var_31_int = var_62_int;
				func_1439(var_61_string, var_62_int);
				@PlayAnimation("all", var_61_string);
				@WaitForAnimEnd(var_32_bool);
				if(!var_32_bool) { //@nz
				} else {
			} else {
			if(var_30_int == 1) {
				@rand(var_33_float, 4);
				@Sleep((var_33_float + 1), var_34_bool);
				if(!var_34_bool) { //@nz
					goto Label_1133;
				}
			} else if(var_29_int != 0) {
				goto Label_1133;
			}
			}
					bool var_64_bool;
					func_1136(var_64_bool);
					var_65_bool = !var_64_bool; //@nz
					if(var_65_bool == 0) goto Label_1128;
			}
		}
	Label_1133:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1128:
		@ResetAAS();
		var_29_int += 1;
	}
	
}


void func_1446(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1439(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1193(bool var_208_bool, object var_209_object)
{
	bool var_211_bool;
	var_209_object->IsDead(var_211_bool);
	var_211_bool = var_208_bool;
}


// @pe
void func_171(bool var_191_bool, object var_192_object)
{
	object var_194_object;
	var_192_object = var_194_object;
	bool var_193_bool;
	func_1234(var_193_bool, var_194_object);
	var_193_bool = var_191_bool;
}


void func_428(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_1198(bool var_197_bool, object var_198_object)
{
	if(var_198_object == null) {
		var_197_bool = false;
		return 4;
	}
	bool var_204_bool = false;
	var_207_bool = IsFuncExist(var_198_object, "IsDead", 1);
	if(var_207_bool != 0) {
		bool var_208_bool; object var_209_object;
		var_198_object = var_209_object;
		func_1193(var_208_bool, var_209_object);
		if(var_208_bool != 0)
			var_204_bool = true;
	}
	if(var_204_bool != 0) {
		var_197_bool = false;
		return 4;
	}
	object var_201_object;
	@GetScene(var_201_object);
	if(var_201_object == null) {
		var_197_bool = false;
		return 4;
	}
	object var_202_object;
	var_198_object->GetScene(var_202_object);
	if(var_201_object != var_202_object) {
		var_197_bool = false;
		return 4;
	}
	var_197_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_49(bool var_0_bool, object var_1_object, bool var_169_bool, object var_170_object, float var_171_float, float var_172_float, bool var_173_bool, bool var_174_bool)
{
	bool var_183_bool; object var_185_object; cvector var_186_cvector; cvector var_187_cvector; float var_189_float; object var_190_object;
	var_0_bool = false;
	var_1_object = var_170_object;
	bool var_184_bool;
	var_174_bool = var_184_bool;
	
	for(;;) {
		bool var_191_bool; object var_192_object;
		var_170_object = var_192_object;
		func_171(var_191_bool, var_192_object);
		if(!var_191_bool) { //@nz
			var_169_bool = false;
			return 16;
		}
		var_170_object->GetPosition(var_186_cvector);
		@GetPosition(var_187_cvector);
		var_189_float = (var_186_cvector - var_187_cvector) | (var_186_cvector - var_187_cvector);
		bool var_228_bool = false;
		if(var_172_float > 0) {
			if(var_189_float > (var_172_float * var_172_float))
				var_228_bool = true;
		}
		if(var_228_bool != 0) {
			@Stop();
			var_169_bool = false;
			return 16;
		}
		if(var_189_float > (var_171_float * var_171_float)) {
			var_170_object->GetPFPosition(var_186_cvector);
			@FindPathTo(var_190_object, var_186_cvector);
			if(var_190_object != null) {
				var_190_object = var_185_object;
				var_190_object = null;
			}
			if(var_185_object != null) {
				if(var_184_bool == 0) goto Label_102;
				var_184_bool = false;
				@RotatePath(var_185_object, var_183_bool);
				if(!var_183_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_241_string;
						func_178(var_241_string);
						string var_242_string;
						func_180(var_242_string);
						@FollowPath(var_185_object, var_173_bool, var_183_bool, var_241_string, var_242_string);
						if(!var_183_bool) { //@nz
							if(var_0_bool == 0) goto Label_121;
							var_185_object = null;
						}
					EMIT "GOTO 0x7a";

					Label_121:
						} else {
					var_185_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_183_bool);
					if(!var_183_bool) { //@nz
						if(var_0_bool != 0) {
							var_185_object = null;
							goto Label_149;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_149;
		}
			var_190_object = null;
			goto Label_147;

		Label_147:
			var_185_object = null;

		}
	Label_149:
		for(;;) {
			var_169_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_178(string var_241_string)
{
	var_241_string = "walk";
}


void func_1331(void)
{
	bool var_151_bool;
	@CameraSwitchToNormal();
	bool var_152_bool;
	func_1555(var_152_bool);
	if(var_152_bool != 0) {
	} else {
		@HasAnimationTrack(var_151_bool, "head");
		if(var_151_bool == 0) goto Label_1347;
		@UnlookAsync("head");
	}
Label_1347:
	
}


void func_180(string var_242_string)
{
	var_242_string = "run";
}


// @pe
void func_182(object var_267_object)
{
	
	for(;;) {
		bool var_270_bool; object var_271_object;
		func_198(var_269_object, var_271_object, var_270_bool, var_271_object, (float)250, (float)3000, true, true);
		var_321_bool = !var_270_bool; //@nz
		if(var_321_bool == 0) goto Label_197;
		@Sleep(1);
	}
	
Label_197:
}


// @pe
void func_1465(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_444(bool var_358_bool)
{
	var_358_bool = false;
}


// @pe
void func_700(bool var_2_bool, string var_102_string)
{
	bool var_103_bool;
	func_1555(var_103_bool);
	if(!var_103_bool) //@nz
		return 0;
	if(var_102_string == var_2_bool)
		return 0;
	string var_106_string; bool var_107_bool;
	var_102_string = var_106_string;
	if(var_102_string == "")
		var_107_bool = false;
	else
		var_107_bool = true;
	func_1355(var_106_string, var_107_bool);
	var_2_bool = var_102_string;
	
}


void func_446(object var_352_object, cvector var_353_cvector)
{
	object var_355_object;
	@FindShiftedPathTo(var_355_object, var_353_cvector);
	var_355_object = var_352_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1471(object var_17_object)
{
	@SetVariable("d4q01KeyWasted", 1);
	@Trace("soborkey is given");
	object var_22_object;
	var_17_object = var_22_object;
	func_1414(var_22_object, "d4q01_sobor_key", 1);
	bool var_43_bool;
	func_1427(var_43_bool, "quest_d4_01", "init_sobor");
}


void func_322(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_452(void)
{
	int var_369_int; int var_370_int; bool var_371_bool; float var_372_float; bool var_373_bool;
	@WaitForAnimEnd();
	bool var_374_bool;
	func_1258(var_374_bool);
	if(!var_374_bool) //@nz
		return 14;
	int var_378_int;
	func_1446(var_378_int);
	int var_367_int;
	var_378_int = var_367_int;
	int var_368_int = 0;
	
	for(;;) {
		bool var_391_bool = false;
		if(var_368_int < 5) {
			bool var_394_bool;
			func_1258(var_394_bool);
			if(var_394_bool != 0)
				var_391_bool = true;
		}
		if(var_391_bool != 0) {
			@irand(var_369_int, 3);
			if(var_369_int == 0) {
				if(var_367_int == 0) goto Label_499;
				@irand(var_370_int, var_367_int);
				string var_400_string; int var_401_int;
				var_370_int = var_401_int;
				func_1439(var_400_string, var_401_int);
				@PlayAnimation("all", var_400_string);
				@WaitForAnimEnd(var_371_bool);
				if(!var_371_bool) { //@nz
				} else {
			} else {
			if(var_369_int == 1) {
				@rand(var_372_float, 4);
				@Sleep((var_372_float + 1), var_373_bool);
				if(!var_373_bool) { //@nz
					goto Label_528;
				}
			} else if(var_368_int != 0) {
				goto Label_528;
			}
			}
					bool var_403_bool;
					func_531(var_403_bool);
					var_404_bool = !var_403_bool; //@nz
					if(var_404_bool == 0) goto Label_523;
			}
		}
	Label_528:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_523:
		@ResetAAS();
		var_368_int += 1;
	}
	
}


void func_1348(string var_123_string)
{
	float var_126_float; float var_127_float;
	@lshGetAnimTimes(var_123_string, var_126_float, var_127_float);
	@lshPlayAnimation(var_126_float, var_127_float, false);
}


void func_198(bool var_0_bool, object var_1_object, bool var_270_bool, object var_271_object, float var_272_float, float var_273_float, bool var_274_bool, bool var_275_bool)
{
	bool var_284_bool; object var_286_object; cvector var_287_cvector; cvector var_288_cvector; float var_290_float; object var_291_object;
	var_0_bool = false;
	var_1_object = var_271_object;
	bool var_285_bool;
	var_275_bool = var_285_bool;
	
	for(;;) {
		bool var_292_bool; object var_293_object;
		var_271_object = var_293_object;
		func_338(var_292_bool, var_293_object);
		if(!var_292_bool) { //@nz
			var_270_bool = false;
			return 16;
		}
		var_271_object->GetPosition(var_287_cvector);
		@GetPosition(var_288_cvector);
		var_290_float = (var_287_cvector - var_288_cvector) | (var_287_cvector - var_288_cvector);
		bool var_297_bool = false;
		if(var_273_float > 0) {
			if(var_290_float > (var_273_float * var_273_float))
				var_297_bool = true;
		}
		if(var_297_bool != 0) {
			@Stop();
			var_270_bool = false;
			return 16;
		}
		if(var_290_float > (var_272_float * var_272_float)) {
			var_271_object->GetPFPosition(var_287_cvector);
			@FindPathTo(var_291_object, var_287_cvector);
			if(var_291_object != null) {
				var_291_object = var_286_object;
				var_291_object = null;
			}
			if(var_286_object != null) {
				if(var_285_bool == 0) goto Label_251;
				var_285_bool = false;
				@RotatePath(var_286_object, var_284_bool);
				if(!var_284_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_310_string;
						func_345(var_310_string);
						string var_311_string;
						func_347(var_311_string);
						@FollowPath(var_286_object, var_274_bool, var_284_bool, var_310_string, var_311_string);
						if(!var_284_bool) { //@nz
							if(var_0_bool == 0) goto Label_270;
							var_286_object = null;
						}
					EMIT "GOTO 0x10f";

					Label_270:
						} else {
					var_286_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_284_bool);
					if(!var_284_bool) { //@nz
						if(var_0_bool != 0) {
							var_286_object = null;
							goto Label_298;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_298;
		}
			var_291_object = null;
			goto Label_296;

		Label_296:
			var_286_object = null;

		}
	Label_298:
		for(;;) {
			var_270_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1355(string var_106_string, bool var_107_bool)
{
	float var_112_float; float var_113_float;
	@lshGetAnimTimes(var_106_string, var_112_float, var_113_float);
	@lshPlayAnimation(var_112_float, var_113_float, var_107_bool);
}


void func_1361(void)
{
	bool var_14_bool;
	func_1555(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_1234(bool var_193_bool, object var_194_object)
{
	object var_198_object;
	var_194_object = var_198_object;
	bool var_197_bool;
	func_1198(var_197_bool, var_198_object);
	if(!var_197_bool) { //@nz
		var_193_bool = false;
		return 2;
	}
	bool var_215_bool; object var_216_object;
	func_1181(var_215_bool, var_216_object, "noaccess");
	if(!var_215_bool) { //@nz
		var_193_bool = true;
		return 2;
	}
	int var_196_int;
	var_216_object->GetProperty("noaccess", var_196_int);
	var_193_bool = var_196_int == 0;
}


// @pe
void func_338(bool var_292_bool, object var_293_object)
{
	object var_295_object;
	var_293_object = var_295_object;
	bool var_294_bool;
	func_1234(var_294_bool, var_295_object);
	var_294_bool = var_292_bool;
}


// @pe
void func_1491(void)
{
	@SetVariable("ood4WastedMale1", 1);
}


// @pe
void func_979(int var_14_int, object var_15_object, object var_18_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	TaskCall(4);
	int var_16_int;
	func_533(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	var_18_object = var_14_int;
}


void func_1368(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


void func_345(string var_310_string)
{
	var_310_string = "walk";
}


// @pe
void func_1497(object var_71_object)
{
	@Trace("tvirin is given");
	object var_74_object;
	var_71_object = var_74_object;
	func_1414(var_74_object, "tvirin", 1);
}


void func_347(string var_311_string)
{
	var_311_string = "run";
}


// @pe
void func_349(void)
{
	
	for(;;) {
		func_357(var_331_bool, var_332_bool);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_607(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_87_object, object var_88_object)
{
	var_0_bool = var_88_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_94_bool;
		func_1518(var_87_object);
		if(var_94_bool != 0) {
			func_700(var_88_object, "Neutral");
			var_0_bool->SetMessage(509701); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(509702, 10682, 10681); //@t
			var_0_bool->AddReply(509711, 10682, 10691); //@t
		} else {
					func_700(var_88_object, "Neutral");
					var_0_bool->SetMessage(509712); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(509713, 10695, 10694); //@t
					var_0_bool->AddReply(509720, 10702, 10701); //@t
					var_0_bool->AddReply(509723, 10695, 10705); //@t
					var_0_bool->AddReply(509724, -1, 10707); //@t
		}
	}
	for(;;) {
		bool var_121_bool;
		func_1555(var_121_bool);
		if(var_121_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1348(var_2_bool);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_699;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_699:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x263";


void func_1378(int var_96_int, string var_97_string)
{
	int var_99_int;
	@GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
}


// @pe
void func_1508(object var_60_object)
{
	var_60_object->SetReturnValue(0);
}


void func_357(bool var_0_bool, object var_1_object)
{
	float var_339_float; cvector var_340_cvector; cvector var_341_cvector; bool var_342_bool; object var_343_object; bool var_344_bool;
	@rand(var_339_float, 0.5);
	@Sleep(var_339_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_369:
				@GetPosition(var_341_cvector);
				float var_348_float;
				func_416(var_348_float);
				@GetRandomPFPointInCircle(var_340_cvector, var_341_cvector, var_348_float, var_342_bool);
				if(var_342_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_369;
			}
				var_1_object = false;
		}
		}
		goto Label_385;

	Label_385:
		object var_352_object; cvector var_353_cvector;
		var_340_cvector = var_353_cvector;
		func_446(var_352_object, var_353_cvector);
		var_352_object = var_343_object;
		if(var_343_object != null) {
			@RotatePath(var_343_object, var_344_bool);
			if(var_344_bool != 0) {
				bool var_358_bool;
				func_444(var_358_bool);
				@FollowPath(var_343_object, var_358_bool, var_344_bool);
				var_343_object = null;
				if(var_344_bool != 0) {
					TaskCall(3);
					func_452();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_343_object = null;
	}
	
}


void func_1383(int var_38_int, int var_39_int)
{
	object var_41_object;
	@CreateIntVector(var_41_object);
	var_41_object->add(var_38_int);
	var_41_object->add(var_39_int);
	@SendWorldWndMessage(3, var_41_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1513(object var_67_object)
{
	var_67_object->SetReturnValue(1);
}


void func_1258(bool var_35_bool)
{
	bool var_37_bool;
	@IsLoaded(var_37_bool);
	var_37_bool = var_35_bool;
}


// @pe
void func_1518(bool var_94_bool)
{
	int var_96_int;
	func_1378(var_96_int, "ood4WastedMale1");
	if(var_96_int == 0) {
		var_94_bool = true;
		return 0;
	}
	var_94_bool = false;
}


void func_1263(bool var_27_bool, object var_28_object, float var_29_float)
{
	cvector var_40_cvector; bool var_47_bool;
	var_28_object->GetPosition(var_40_cvector);
	float var_39_float;
	var_28_object->GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_39_float);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	@GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_39_float);
	cvector var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_52_float = sqrt(var_42_cvector | var_42_cvector);
	var_42_cvector /= var_52_float;
	cvector var_43_cvector = -var_42_cvector;
	cvector var_54_cvector;
	func_1368(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector);
	var_67_float = GetByIndex(var_44_cvector, 0);
	var_68_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_67_float, var_68_float);
	bool var_69_bool;
	func_1555(var_69_bool);
	if(var_69_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_1325;
		@LookAsyncCamera("head");
	}
Label_1325:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_1136(bool var_64_bool)
{
	var_64_bool = true;
}


void func_1138(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1395(object var_27_object, object var_28_object, int var_29_int)
{
	int var_33_int;
	var_28_object->GetItemID(var_33_int);
	int var_34_int;
	@GetInvItemProperty(var_34_int, var_33_int, "Category");
	bool var_35_bool;
	var_27_object->AddItem(var_35_bool, var_28_object, var_34_int, var_29_int);
	if(!var_35_bool) { //@nz
		var_27_object->DropItems(var_28_object, var_29_int);
	} else {
		int var_38_int; int var_39_int;
		var_33_int = var_38_int;
		var_29_int = var_39_int;
		func_1383(var_38_int, var_39_int);
	}
	
}


// @pe
void func_1143(object var_327_object)
{
	object var_329_object;
	var_327_object = var_329_object;
	TaskCall(4);
	int var_328_int;
	func_533(var_330_object, var_328_int, var_329_object);
	TaskReturn();
}


void func_1530(int var_78_int)
{
	int var_80_int;
	@GetVariable("branch", var_80_int);
	if(var_80_int == 0) {
		var_78_int = 1;
		return 2;
	EMIT "GOTO 0x609";
	}
	if(var_80_int == 1) {
		var_78_int = 2;
		return 2;
	}
	var_78_int = 3;
}


void func_1151(object var_323_object)
{
	bool var_325_bool;
	
	for(;;) {
		@IsOverrideActive(var_325_bool);
		if(!var_325_bool) //@nz
			break;
	}
	object var_327_object;
	var_323_object = var_327_object;
	func_1143(var_327_object);
	@Hold();
}


