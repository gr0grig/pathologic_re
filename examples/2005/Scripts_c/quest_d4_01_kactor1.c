// @GLOBALS: 0:int:,1:object:

task task_0
{
	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		if(var_11_bool == 10) {
			int var_14_int;
			func_1234(var_14_int);
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
		func_1527();
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
		func_1527();
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
		func_1527();
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
			func_1425();
			if(var_12_int == 10646) {
				object var_17_object = var_1_object;
				func_1541(var_0_bool);
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_bool;
				func_1529();
			}
			if(var_12_int == 10648) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_bool;
				func_1535();
				object var_59_object = var_1_object;
				func_1572(var_0_bool);
			}
			if(var_12_int == 10649) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_bool;
				func_1535();
				object var_66_object = var_1_object;
				func_1577(var_0_bool);
			}
			if(var_12_int == 10669) {
				object var_71_object = var_1_object;
				func_1561(var_0_bool);
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_1529();
			}
			if(var_11_int == 10641) {
				bool var_81_bool;
				func_1582(var_1_object);
				if(var_81_bool != 0) {
					func_690(var_12_int, "Neutral");
					var_0_bool->SetMessage(509667); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(509668, 10643, 10642); //@t
					var_0_bool->AddReply(509677, 10653, 10652); //@t
					return 0;
				}
				func_690(var_12_int, "Neutral");
				var_0_bool->SetMessage(509681); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509682, 10660, 10659); //@t
				var_0_bool->AddReply(509699, -1, 10678); //@t
				return 0;
			}
			if(var_11_int == 10660) {
				func_690(var_12_int, "Neutral");
				var_0_bool->SetMessage(509683); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509684, 10662, 10661); //@t
				var_0_bool->AddReply(509694, 10672, 10671); //@t
				var_0_bool->AddReply(509698, 10662, 10676); //@t
				return 0;
			}
			if(var_11_int == 10672) {
				func_690(var_12_int, "Neutral");
				var_0_bool->SetMessage(509695); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509696, 10665, 10673); //@t
				var_0_bool->AddReply(509697, -1, 10675); //@t
				return 0;
			}
			if(var_11_int == 10662) {
				func_690(var_12_int, "Neutral");
				var_0_bool->SetMessage(509685); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509687, 10665, 10664); //@t
				var_0_bool->AddReply(509686, -1, 10663); //@t
				return 0;
			}
			if(var_11_int == 10665) {
				func_690(var_12_int, "Neutral");
				var_0_bool->SetMessage(509688); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509689, -1, 10666); //@t
				var_0_bool->AddReply(509690, 10668, 10667); //@t
				return 0;
			}
			if(var_11_int == 10668) {
				func_690(var_12_int, "Neutral");
				var_0_bool->SetMessage(509691); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509692, -1, 10669); //@t
				var_0_bool->AddReply(509693, -1, 10670); //@t
				var_0_bool->AddReply(538762, -1, 40678); //@t
				return 0;
			}
			if(var_11_int == 10653) {
				func_690(var_12_int, "Neutral");
				var_0_bool->SetMessage(509678); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509679, 10643, 10654); //@t
				var_0_bool->AddReply(509680, 10643, 10656); //@t
				return 0;
			}
			if(var_11_int == 10643) {
				func_690(var_12_int, "Neutral");
				var_0_bool->SetMessage(509669); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509670, 10645, 10644); //@t
				return 0;
			}
			if(var_11_int == 10645) {
				func_690(var_12_int, "Neutral");
				var_0_bool->SetMessage(509671); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509672, 10647, 10646); //@t
				var_0_bool->AddReply(509676, 10647, 10650); //@t
				return 0;
			}
			if(var_11_int == 10647) {
				func_690(var_12_int, "Neutral");
				var_0_bool->SetMessage(509673); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509674, -1, 10648); //@t
				var_0_bool->AddReply(509675, -1, 10649); //@t
				return 0;
			}
			var_3_object = true;
			bool var_209_bool;
			func_1619(var_209_bool);
			if(var_209_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2c9";
	
	}

}


maintask task_6
{
	void init(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool)
	{
		var_11_int = GlobalVars[0];
		int var_12_int;
		func_1234(var_12_int);
		var_12_int = var_11_int;
		GlobalVars[0] = var_11_int;
	
		for(;;) {
			@Sleep(3);
			func_1121();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object)
	{
		func_1202();
		int var_14_int; object var_15_object;
		var_11_object = var_15_object;
		int var_13_int;
		func_1043(var_13_int, var_14_int, var_15_object);
		var_14_int = var_13_int;
		if(var_13_int == 0) {
			bool var_152_bool;
			func_1491(var_152_bool, "quest_d4_01", "key1_done");
			object var_158_object;
			var_11_object = var_158_object;
			TaskCall(0);
			func_0(var_158_object);
			TaskReturn();
			object var_261_object;
			var_11_object = var_261_object;
			TaskCall(1);
			func_182(var_261_object);
			TaskReturn();
			object var_317_object;
			var_11_object = var_317_object;
			TaskCall(7);
			func_1215(var_317_object);
			TaskReturn();
			TaskCall(2);
			func_349();
			TaskReturn();
		} else if(var_13_int == 1) {
			bool var_412_bool;
			func_1491(var_412_bool, "quest_d4_01", "key1_done");
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
void func_0(object var_158_object)
{
	@SetTimer(10, 1);
	
	for(;;) {
		bool var_163_bool; object var_164_object;
		func_49(var_160_object, var_164_object, var_163_bool, var_164_object, (float)250, (float)3000, true, true);
		int var_246_int;
		func_1234(var_246_int);
		var_254_int = GlobalVars[0];
		if(var_246_int != var_254_int) {
		} else {
				@Sleep(1);
				int var_258_int;
				func_1234(var_258_int);
				var_259_int = GlobalVars[0];
				if(!(var_258_int != var_259_int)) goto Label_30;
		}
		for(;;) {
			@KillTimer(10);
			return 0;

		}

	Label_30:
	}
}


void func_1412(string var_123_string)
{
	float var_126_float; float var_127_float;
	@lshGetAnimTimes(var_123_string, var_126_float, var_127_float);
	@lshPlayAnimation(var_126_float, var_127_float, false);
}


// @pe
void func_1541(object var_17_object)
{
	@SetVariable("d4q01KeyWhite", 1);
	@Trace("theaterkey is given");
	object var_22_object;
	var_17_object = var_22_object;
	func_1478(var_22_object, "d4q01_theater_key", 1);
	bool var_43_bool;
	func_1491(var_43_bool, "quest_d4_01", "init_theater");
}


void func_1419(string var_106_string, bool var_107_bool)
{
	float var_112_float; float var_113_float;
	@lshGetAnimTimes(var_106_string, var_112_float, var_113_float);
	@lshPlayAnimation(var_112_float, var_113_float, var_107_bool);
}


void func_1425(void)
{
	bool var_14_bool;
	func_1619(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_1298(bool var_187_bool, object var_188_object)
{
	object var_192_object;
	var_188_object = var_192_object;
	bool var_191_bool;
	func_1262(var_191_bool, var_192_object);
	if(!var_191_bool) { //@nz
		var_187_bool = false;
		return 2;
	}
	bool var_209_bool; object var_210_object;
	func_1245(var_209_bool, var_210_object, "noaccess");
	if(!var_209_bool) { //@nz
		var_187_bool = true;
		return 2;
	}
	int var_190_int;
	var_210_object->GetProperty("noaccess", var_190_int);
	var_187_bool = var_190_int == 0;
}


void func_531(bool var_397_bool)
{
	var_397_bool = true;
}


// @pe
void func_1043(int var_14_int, object var_15_object, object var_18_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	TaskCall(4);
	int var_16_int;
	func_533(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	var_18_object = var_14_int;
}


void func_533(bool var_0_bool, int var_16_int, object var_17_object)
{
	var_0_bool = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_1327(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_74_int;
	func_1613(var_74_int);
	var_23_object->SetNPCName(var_74_int);
	int var_75_int;
	func_1611(var_75_int);
	var_23_object->SetNPCDescription(var_75_int);
	string var_76_string;
	func_1615(var_76_string);
	var_23_object->SetPhoto(var_76_string);
	string var_77_string;
	func_1617(var_77_string);
	var_23_object->SetPhoto2(var_77_string);
	int var_78_int;
	func_1594(var_78_int);
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
		var_142_bool = !var_26_bool; //@nz
		if(var_142_bool == 0) goto Label_596;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_596:
	object var_143_object;
	var_17_object = var_143_object;
	func_1395();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_1432(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_1561(object var_71_object)
{
	@Trace("tvirin is given");
	object var_74_object;
	var_71_object = var_74_object;
	func_1478(var_74_object, "tvirin", 1);
}


void func_155(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_416(float var_342_float)
{
	float var_344_float;
	@GetCameraFarDistance(var_344_float);
	var_344_float = var_342_float;
}


void func_1442(int var_96_int, string var_97_string)
{
	int var_99_int;
	@GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
}


// @pe
void func_1572(object var_60_object)
{
	var_60_object->SetReturnValue(0);
}


void func_1447(int var_38_int, int var_39_int)
{
	object var_41_object;
	@CreateIntVector(var_41_object);
	var_41_object->add(var_38_int);
	var_41_object->add(var_39_int);
	@SendWorldWndMessage(3, var_41_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1577(object var_67_object)
{
	var_67_object->SetReturnValue(1);
}


void func_1322(bool var_35_bool)
{
	bool var_37_bool;
	@IsLoaded(var_37_bool);
	var_37_bool = var_35_bool;
}


// @pe
void func_171(bool var_185_bool, object var_186_object)
{
	object var_188_object;
	var_186_object = var_188_object;
	bool var_187_bool;
	func_1298(var_187_bool, var_188_object);
	var_187_bool = var_185_bool;
}


void func_428(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_1582(bool var_94_bool)
{
	int var_96_int;
	func_1442(var_96_int, "ood4WhiteMask1");
	if(var_96_int == 0) {
		var_94_bool = true;
		return 0;
	}
	var_94_bool = false;
}


void func_1327(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_1432(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1619(var_69_bool);
	if(var_69_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_1389;
		@LookAsyncCamera("head");
	}
Label_1389:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_1200(bool var_64_bool)
{
	var_64_bool = true;
}


void func_49(bool var_0_bool, object var_1_object, bool var_163_bool, object var_164_object, float var_165_float, float var_166_float, bool var_167_bool, bool var_168_bool)
{
	bool var_177_bool; object var_179_object; cvector var_180_cvector; cvector var_181_cvector; float var_183_float; object var_184_object;
	var_0_bool = false;
	var_1_object = var_164_object;
	bool var_178_bool;
	var_168_bool = var_178_bool;
	
	for(;;) {
		bool var_185_bool; object var_186_object;
		var_164_object = var_186_object;
		func_171(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			var_163_bool = false;
			return 16;
		}
		var_164_object->GetPosition(var_180_cvector);
		@GetPosition(var_181_cvector);
		var_183_float = (var_180_cvector - var_181_cvector) | (var_180_cvector - var_181_cvector);
		bool var_222_bool = false;
		if(var_166_float > 0) {
			if(var_183_float > (var_166_float * var_166_float))
				var_222_bool = true;
		}
		if(var_222_bool != 0) {
			@Stop();
			var_163_bool = false;
			return 16;
		}
		if(var_183_float > (var_165_float * var_165_float)) {
			var_164_object->GetPFPosition(var_180_cvector);
			@FindPathTo(var_184_object, var_180_cvector);
			if(var_184_object != null) {
				var_184_object = var_179_object;
				var_184_object = null;
			}
			if(var_179_object != null) {
				if(var_178_bool == 0) goto Label_102;
				var_178_bool = false;
				@RotatePath(var_179_object, var_177_bool);
				if(!var_177_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_235_string;
						func_178(var_235_string);
						string var_236_string;
						func_180(var_236_string);
						@FollowPath(var_179_object, var_167_bool, var_177_bool, var_235_string, var_236_string);
						if(!var_177_bool) { //@nz
							if(var_0_bool == 0) goto Label_121;
							var_179_object = null;
						}
					EMIT "GOTO 0x7a";

					Label_121:
						} else {
					var_179_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_177_bool);
					if(!var_177_bool) { //@nz
						if(var_0_bool != 0) {
							var_179_object = null;
							goto Label_149;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_149;
		}
			var_184_object = null;
			goto Label_147;

		Label_147:
			var_179_object = null;

		}
	Label_149:
		for(;;) {
			var_163_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_178(string var_235_string)
{
	var_235_string = "walk";
}


// @pe
void func_690(bool var_2_bool, string var_102_string)
{
	bool var_103_bool;
	func_1619(var_103_bool);
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
	func_1419(var_106_string, var_107_bool);
	var_2_bool = var_102_string;
	
}


void func_180(string var_236_string)
{
	var_236_string = "run";
}


void func_1202(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_182(object var_261_object)
{
	
	for(;;) {
		bool var_264_bool; object var_265_object;
		func_198(var_263_object, var_265_object, var_264_bool, var_265_object, (float)250, (float)3000, true, true);
		var_315_bool = !var_264_bool; //@nz
		if(var_315_bool == 0) goto Label_197;
		@Sleep(1);
	}
	
Label_197:
}


// @pe
void func_1207(object var_321_object)
{
	object var_323_object;
	var_321_object = var_323_object;
	TaskCall(4);
	int var_322_int;
	func_533(var_324_object, var_322_int, var_323_object);
	TaskReturn();
}


void func_1459(object var_27_object, object var_28_object, int var_29_int)
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
		func_1447(var_38_int, var_39_int);
	}
	
}


void func_1594(int var_78_int)
{
	int var_80_int;
	@GetVariable("branch", var_80_int);
	if(var_80_int == 0) {
		var_78_int = 1;
		return 2;
	EMIT "GOTO 0x649";
	}
	if(var_80_int == 1) {
		var_78_int = 2;
		return 2;
	}
	var_78_int = 3;
}


void func_444(bool var_352_bool)
{
	var_352_bool = false;
}


void func_446(object var_346_object, cvector var_347_cvector)
{
	object var_349_object;
	@FindShiftedPathTo(var_349_object, var_347_cvector);
	var_349_object = var_346_object;
}
EMIT "Stack[-1] = 0";


void func_1215(object var_317_object)
{
	bool var_319_bool;
	
	for(;;) {
		@IsOverrideActive(var_319_bool);
		if(!var_319_bool) //@nz
			break;
	}
	object var_321_object;
	var_317_object = var_321_object;
	func_1207(var_321_object);
	@Hold();
}


void func_322(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_452(void)
{
	int var_363_int; int var_364_int; bool var_365_bool; float var_366_float; bool var_367_bool;
	@WaitForAnimEnd();
	bool var_368_bool;
	func_1322(var_368_bool);
	if(!var_368_bool) //@nz
		return 14;
	int var_372_int;
	func_1510(var_372_int);
	int var_361_int;
	var_372_int = var_361_int;
	int var_362_int = 0;
	
	for(;;) {
		bool var_385_bool = false;
		if(var_362_int < 5) {
			bool var_388_bool;
			func_1322(var_388_bool);
			if(var_388_bool != 0)
				var_385_bool = true;
		}
		if(var_385_bool != 0) {
			@irand(var_363_int, 3);
			if(var_363_int == 0) {
				if(var_361_int == 0) goto Label_499;
				@irand(var_364_int, var_361_int);
				string var_394_string; int var_395_int;
				var_364_int = var_395_int;
				func_1503(var_394_string, var_395_int);
				@PlayAnimation("all", var_394_string);
				@WaitForAnimEnd(var_365_bool);
				if(!var_365_bool) { //@nz
				} else {
			} else {
			if(var_363_int == 1) {
				@rand(var_366_float, 4);
				@Sleep((var_366_float + 1), var_367_bool);
				if(!var_367_bool) { //@nz
					goto Label_528;
				}
			} else if(var_362_int != 0) {
				goto Label_528;
			}
			}
					bool var_397_bool;
					func_531(var_397_bool);
					var_398_bool = !var_397_bool; //@nz
					if(var_398_bool == 0) goto Label_523;
			}
		}
	Label_528:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_523:
		@ResetAAS();
		var_362_int += 1;
	}
	
}


void func_198(bool var_0_bool, object var_1_object, bool var_264_bool, object var_265_object, float var_266_float, float var_267_float, bool var_268_bool, bool var_269_bool)
{
	bool var_278_bool; object var_280_object; cvector var_281_cvector; cvector var_282_cvector; float var_284_float; object var_285_object;
	var_0_bool = false;
	var_1_object = var_265_object;
	bool var_279_bool;
	var_269_bool = var_279_bool;
	
	for(;;) {
		bool var_286_bool; object var_287_object;
		var_265_object = var_287_object;
		func_338(var_286_bool, var_287_object);
		if(!var_286_bool) { //@nz
			var_264_bool = false;
			return 16;
		}
		var_265_object->GetPosition(var_281_cvector);
		@GetPosition(var_282_cvector);
		var_284_float = (var_281_cvector - var_282_cvector) | (var_281_cvector - var_282_cvector);
		bool var_291_bool = false;
		if(var_267_float > 0) {
			if(var_284_float > (var_267_float * var_267_float))
				var_291_bool = true;
		}
		if(var_291_bool != 0) {
			@Stop();
			var_264_bool = false;
			return 16;
		}
		if(var_284_float > (var_266_float * var_266_float)) {
			var_265_object->GetPFPosition(var_281_cvector);
			@FindPathTo(var_285_object, var_281_cvector);
			if(var_285_object != null) {
				var_285_object = var_280_object;
				var_285_object = null;
			}
			if(var_280_object != null) {
				if(var_279_bool == 0) goto Label_251;
				var_279_bool = false;
				@RotatePath(var_280_object, var_278_bool);
				if(!var_278_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_304_string;
						func_345(var_304_string);
						string var_305_string;
						func_347(var_305_string);
						@FollowPath(var_280_object, var_268_bool, var_278_bool, var_304_string, var_305_string);
						if(!var_278_bool) { //@nz
							if(var_0_bool == 0) goto Label_270;
							var_280_object = null;
						}
					EMIT "GOTO 0x10f";

					Label_270:
						} else {
					var_280_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_278_bool);
					if(!var_278_bool) { //@nz
						if(var_0_bool != 0) {
							var_280_object = null;
							goto Label_298;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_298;
		}
			var_285_object = null;
			goto Label_296;

		Label_296:
			var_280_object = null;

		}
	Label_298:
		for(;;) {
			var_264_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1478(object var_22_object, string var_23_string, int var_24_int)
{
	object var_26_object;
	@CreateInvItem(var_26_object);
	var_26_object->SetItemName(var_23_string);
	object var_27_object; object var_28_object; int var_29_int;
	var_22_object = var_27_object;
	var_26_object = var_28_object;
	var_24_int = var_29_int;
	func_1459(var_27_object, var_28_object, var_29_int);
}
EMIT "Stack[-1] = 0";


void func_1611(int var_75_int)
{
	var_75_int = 515569;
}


void func_1613(int var_74_int)
{
	var_74_int = 503354;
}


void func_1229(cvector var_17_cvector)
{
	cvector var_19_cvector;
	@GetPosition(var_19_cvector);
	var_19_cvector = var_17_cvector;
}


void func_1615(string var_76_string)
{
	var_76_string = "ui/NPC_wmask.png";
}


void func_1617(string var_77_string)
{
	var_77_string = "ui/NPC_wmask_b.png";
}


void func_1234(int var_12_int)
{
	object var_15_object;
	@GetScene(var_15_object);
	cvector var_17_cvector;
	func_1229(var_17_cvector);
	int var_16_int;
	var_15_object->GetRegionByPt(var_16_int, var_17_cvector);
	var_16_int = var_12_int;
}
EMIT "Stack[-2] = 0";


// @pe
void func_338(bool var_286_bool, object var_287_object)
{
	object var_289_object;
	var_287_object = var_289_object;
	bool var_288_bool;
	func_1298(var_288_bool, var_289_object);
	var_288_bool = var_286_bool;
}


void func_1619(bool var_69_bool)
{
	var_69_bool = false;
}


void func_1491(bool var_152_bool, string var_153_string, string var_154_string)
{
	object var_156_object;
	@FindActor(var_156_object, var_153_string);
	if(var_156_object == null)
		var_152_bool = false;
	@Trigger(var_156_object, var_154_string);
	var_152_bool = true;
}
EMIT "Stack[-1] = 0";


void func_345(string var_304_string)
{
	var_304_string = "walk";
}


void func_347(string var_305_string)
{
	var_305_string = "run";
}


// @pe
void func_349(void)
{
	
	for(;;) {
		func_357(var_325_bool, var_326_bool);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


void func_1245(bool var_209_bool, object var_210_object, string var_211_string)
{
	var_216_bool = IsFuncExist(var_210_object, "HasProperty", 2);
	if(!var_216_bool) { //@nz
		var_209_bool = false;
		return 2;
	}
	bool var_213_bool;
	var_210_object->HasProperty(var_211_string, var_213_bool);
	var_213_bool = var_209_bool;
}


void func_1503(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


// @pe
void func_607(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_87_object, object var_88_object)
{
	var_0_bool = var_88_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_94_bool;
		func_1582(var_87_object);
		if(var_94_bool != 0) {
			func_690(var_88_object, "Neutral");
			var_0_bool->SetMessage(509667); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(509668, 10643, 10642); //@t
			var_0_bool->AddReply(509677, 10653, 10652); //@t
		} else {
					func_690(var_88_object, "Neutral");
					var_0_bool->SetMessage(509681); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(509682, 10660, 10659); //@t
					var_0_bool->AddReply(509699, -1, 10678); //@t
		}
	}
	for(;;) {
		bool var_121_bool;
		func_1619(var_121_bool);
		if(var_121_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1412(var_2_bool);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_689;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_689:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x263";


void func_1121(void)
{
	int var_30_int; int var_31_int; bool var_32_bool; float var_33_float; bool var_34_bool;
	@WaitForAnimEnd();
	bool var_35_bool;
	func_1322(var_35_bool);
	if(!var_35_bool) //@nz
		return 14;
	int var_39_int;
	func_1510(var_39_int);
	int var_28_int;
	var_39_int = var_28_int;
	int var_29_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_29_int < 5) {
			bool var_55_bool;
			func_1322(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			@irand(var_30_int, 3);
			if(var_30_int == 0) {
				if(var_28_int == 0) goto Label_1168;
				@irand(var_31_int, var_28_int);
				string var_61_string; int var_62_int;
				var_31_int = var_62_int;
				func_1503(var_61_string, var_62_int);
				@PlayAnimation("all", var_61_string);
				@WaitForAnimEnd(var_32_bool);
				if(!var_32_bool) { //@nz
				} else {
			} else {
			if(var_30_int == 1) {
				@rand(var_33_float, 4);
				@Sleep((var_33_float + 1), var_34_bool);
				if(!var_34_bool) { //@nz
					goto Label_1197;
				}
			} else if(var_29_int != 0) {
				goto Label_1197;
			}
			}
					bool var_64_bool;
					func_1200(var_64_bool);
					var_65_bool = !var_64_bool; //@nz
					if(var_65_bool == 0) goto Label_1192;
			}
		}
	Label_1197:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1192:
		@ResetAAS();
		var_29_int += 1;
	}
	
}


void func_357(bool var_0_bool, object var_1_object)
{
	float var_333_float; cvector var_334_cvector; cvector var_335_cvector; bool var_336_bool; object var_337_object; bool var_338_bool;
	@rand(var_333_float, 0.5);
	@Sleep(var_333_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_369:
				@GetPosition(var_335_cvector);
				float var_342_float;
				func_416(var_342_float);
				@GetRandomPFPointInCircle(var_334_cvector, var_335_cvector, var_342_float, var_336_bool);
				if(var_336_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_369;
			}
				var_1_object = false;
		}
		}
		goto Label_385;

	Label_385:
		object var_346_object; cvector var_347_cvector;
		var_334_cvector = var_347_cvector;
		func_446(var_346_object, var_347_cvector);
		var_346_object = var_337_object;
		if(var_337_object != null) {
			@RotatePath(var_337_object, var_338_bool);
			if(var_338_bool != 0) {
				bool var_352_bool;
				func_444(var_352_bool);
				@FollowPath(var_337_object, var_352_bool, var_338_bool);
				var_337_object = null;
				if(var_338_bool != 0) {
					TaskCall(3);
					func_452();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_337_object = null;
	}
	
}


void func_1510(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1503(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1257(bool var_202_bool, object var_203_object)
{
	bool var_205_bool;
	var_203_object->IsDead(var_205_bool);
	var_205_bool = var_202_bool;
}


void func_1262(bool var_191_bool, object var_192_object)
{
	if(var_192_object == null) {
		var_191_bool = false;
		return 4;
	}
	bool var_198_bool = false;
	var_201_bool = IsFuncExist(var_192_object, "IsDead", 1);
	if(var_201_bool != 0) {
		bool var_202_bool; object var_203_object;
		var_192_object = var_203_object;
		func_1257(var_202_bool, var_203_object);
		if(var_202_bool != 0)
			var_198_bool = true;
	}
	if(var_198_bool != 0) {
		var_191_bool = false;
		return 4;
	}
	object var_195_object;
	@GetScene(var_195_object);
	if(var_195_object == null) {
		var_191_bool = false;
		return 4;
	}
	object var_196_object;
	var_192_object->GetScene(var_196_object);
	if(var_195_object != var_196_object) {
		var_191_bool = false;
		return 4;
	}
	var_191_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1395(void)
{
	bool var_145_bool;
	@CameraSwitchToNormal();
	bool var_146_bool;
	func_1619(var_146_bool);
	if(var_146_bool != 0) {
	} else {
		@HasAnimationTrack(var_145_bool, "head");
		if(var_145_bool == 0) goto Label_1411;
		@UnlookAsync("head");
	}
Label_1411:
	
}


// @pe
void func_1529(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1535(void)
{
	@SetVariable("ood4WhiteMask1", 1);
}


