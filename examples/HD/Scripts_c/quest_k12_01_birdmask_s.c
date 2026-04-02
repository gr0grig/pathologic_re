// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		if(1 != 0) {
			func_855();
			if(var_11_object == 41167) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_961();
				object var_28_object; object var_29_object;
				var_28_object = var_1_object;
				var_29_object = var_0_object;
				func_948();
			}
			if(var_10_bool == 41164) {
				bool var_38_bool;
				func_968(var_38_bool, var_1_object);
				if(!var_38_bool) { //@nz
					func_209(var_11_object, "Neutral");
					var_0_object->SetMessage(539221); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(541225, 45255, 43355); //@t
					var_0_object->AddReply(539222, 45249, 41165); //@t
					return 0;
				}
				bool var_111_bool;
				func_978(var_111_bool, var_1_object);
				if(!var_111_bool) { //@nz
					func_209(var_11_object, "Neutral");
					var_0_object->SetMessage(539219); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(541260, -1, 43390); //@t
					var_0_object->AddReply(542837, 45265, 45264); //@t
					return 0;
				}
				bool var_131_bool;
				func_988(var_1_object);
				if(var_131_bool != 0) {
					object var_139_object; object var_140_object;
					var_139_object = var_1_object;
					var_140_object = var_0_object;
					func_955();
					func_209(var_11_object, "Neutral");
					var_0_object->SetMessage(539223); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539224, -1, 41167); //@t
					return 0;
				}
				func_209(var_11_object, "Neutral");
				var_0_object->SetMessage(539225); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539226, -1, 41169); //@t
				var_0_object->AddReply(542845, -1, 45271); //@t
				return 0;
			}
			if(var_10_bool == 45265) {
				func_209(var_11_object, "Neutral");
				var_0_object->SetMessage(542838); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542839, 45268, 45266); //@t
				var_0_object->AddReply(542840, -1, 45267); //@t
				return 0;
			}
			if(var_10_bool == 45268) {
				func_209(var_11_object, "Neutral");
				var_0_object->SetMessage(542841); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542842, -1, 45269); //@t
				var_0_object->AddReply(542844, -1, 45270); //@t
				return 0;
			}
			if(var_10_bool == 45249) {
				func_209(var_11_object, "Neutral");
				var_0_object->SetMessage(542823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542824, 45251, 45250); //@t
				var_0_object->AddReply(542827, -1, 45254); //@t
				return 0;
			}
			if(var_10_bool == 45255) {
				func_209(var_11_object, "Neutral");
				var_0_object->SetMessage(542828); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542829, 45251, 45256); //@t
				var_0_object->AddReply(542830, -1, 45257); //@t
				return 0;
			}
			if(var_10_bool == 45251) {
				func_209(var_11_object, "Neutral");
				var_0_object->SetMessage(542825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542826, 45259, 45252); //@t
				var_0_object->AddReply(542831, -1, 45258); //@t
				return 0;
			}
			if(var_10_bool == 45259) {
				func_209(var_11_object, "Neutral");
				var_0_object->SetMessage(542832); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542833, -1, 45260); //@t
				var_0_object->AddReply(542834, 45262, 45261); //@t
				return 0;
			}
			if(var_10_bool == 45262) {
				func_209(var_11_object, "Neutral");
				var_0_object->SetMessage(542835); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542836, -1, 45263); //@t
				return 0;
			}
			var_3_string = true;
			bool var_223_bool;
			func_946(var_223_bool);
			if(var_223_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe8";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		while(true != 0) {
			func_548(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(1);
		}
	
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		int var_11_int;
		func_1124(var_11_int);
		if(var_11_int == 0) {
			func_613(var_9_object, var_10_object);
			int var_20_int; object var_21_object;
			var_10_object = var_21_object;
			TaskCall(0);
			func_0(var_22_object, var_20_int, var_21_object);
			TaskReturn();
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int == 10) {
			bool var_13_bool;
			func_575(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_844(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_20_int, object var_21_object)
{
	var_0_object = var_21_object;
	bool var_31_bool; object var_32_object;
	var_21_object = var_32_object;
	func_726(var_31_bool, var_32_object, 130.0);
	if(!var_31_bool) { //@nz
		var_20_int = -2;
		return 8;
	}
	object var_27_object;
	@CreateDialog(var_27_object);
	int var_79_int;
	func_940(var_79_int);
	var_27_object->SetNPCName(var_79_int);
	int var_80_int;
	func_938(var_80_int);
	var_27_object->SetNPCDescription(var_80_int);
	string var_81_string;
	func_942(var_81_string);
	var_27_object->SetPhoto(var_81_string);
	string var_82_string;
	func_944(var_82_string);
	var_27_object->SetPhoto2(var_82_string);
	int var_83_int;
	func_1017(var_83_int);
	var_27_object->SetPlayerName(var_83_int);
	bool var_28_bool;
	@IsOverrideActive(var_28_bool);
	if(var_28_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	@DoDialog(var_27_object);
	object var_92_object; object var_93_object;
	var_21_object = var_92_object;
	var_27_object = var_93_object;
	TaskCall(1);
	func_74(var_94_object, var_95_object, var_96_string, var_97_bool, var_92_object, var_93_object);
	TaskReturn();
	bool var_30_bool;
	var_27_object->IsDialogEnd(var_30_bool);
	
	for(;;) {
		var_235_bool = !var_30_bool; //@nz
		if(var_235_bool == 0) goto Label_63;
		@sync();
		var_27_object->IsDialogEnd(var_30_bool);
	}
	
Label_63:
	object var_236_object;
	var_21_object = var_236_object;
	func_795();
	@StopDialog(var_27_object);
	var_27_object->GetReturnValue(-1);
	int var_29_int = var_20_int;
}
EMIT "Stack[-4] = 0";


void func_906(int var_194_int)
{
	float var_196_float;
	@GetGameTime(var_196_float);
	int var_197_int;
	var_196_float = var_197_int;
	var_194_int = var_197_int % 24;
}


// @pe
void func_1034(object var_112_object, bool var_113_bool)
{
	var_112_object->add(7);
	var_112_object->add(23);
	var_112_object->add(21);
	var_112_object->add(9);
	var_112_object->add(3);
	var_112_object->add(1);
	var_112_object->add(11);
	var_112_object->add(13);
	if(var_113_bool == false)
		var_112_object->add(25);
}


void func_914(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_921(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_914(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_795(void)
{
	bool var_238_bool;
	@CameraSwitchToNormal(true);
	bool var_240_bool;
	func_946(var_240_bool);
	if(var_240_bool != 0) {
	} else {
		@HasAnimationTrack(var_238_bool, "head");
		if(var_238_bool == 0) goto Label_812;
		@UnlookAsync("head");
	}
Label_812:
	
}


// @pe
void func_548(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_721(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_627();
	if(!false) //@nz
		@KillTimer(10);
}


void func_938(int var_80_int)
{
	var_80_int = 515571;
}


void func_1066(bool var_137_bool, int var_138_int)
{
	int var_140_int;
	@GetVariable(("vol_" + var_138_int), var_140_int);
	var_137_bool = (var_140_int & 4) != 0;
}


void func_940(int var_79_int)
{
	var_79_int = 504029;
}


void func_813(string var_174_string)
{
	bool var_178_bool; float var_179_float; float var_180_float;
	@lshHasAnimation(var_178_bool, var_174_string);
	if(var_178_bool != 0) {
		@lshGetAnimTimes(var_174_string, var_179_float, var_180_float);
		@lshPlayAnimation(var_179_float, var_180_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_174_string);
	}
	
}


void func_942(string var_81_string)
{
	var_81_string = "ui/NPC_bmask.png";
}


void func_944(string var_82_string)
{
	var_82_string = "ui/NPC_bmask_b.png";
}


void func_946(bool var_74_bool)
{
	var_74_bool = false;
}


// @pe
void func_948(void)
{
	bool var_30_bool;
	func_894(var_30_bool, "quest_k12_01", "init_sobor");
}


void func_1076(bool var_128_bool, int var_129_int)
{
	int var_131_int;
	@GetVariable(("vol_" + var_129_int), var_131_int);
	var_128_bool = (var_131_int & 16) != 0;
}


// @pe
void func_955(void)
{
	@SetVariable("ook12BirdmaskS1", 1);
}


void func_829(string var_152_string, bool var_153_bool)
{
	bool var_159_bool; float var_160_float; float var_161_float;
	@lshHasAnimation(var_159_bool, var_152_string);
	if(var_159_bool != 0) {
		@lshGetAnimTimes(var_152_string, var_160_float, var_161_float);
		@lshPlayAnimation(var_160_float, var_161_float, var_153_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_152_string);
	}
	
}


void func_1086(bool var_103_bool)
{
	object var_108_object; int var_111_int;
	@CreateIntVector(var_108_object);
	object var_112_object;
	var_108_object = var_112_object;
	func_1034(false, -1);
	int var_109_int;
	var_108_object->size(var_109_int);
	int var_110_int = 0;
	
	while(var_110_int < var_109_int) {
		var_108_object->get(var_111_int, var_110_int);
		bool var_127_bool = true;
		bool var_128_bool; int var_129_int;
		var_111_int = var_129_int;
		func_1076(var_128_bool, var_129_int);
		if(var_128_bool != 1) {
			bool var_137_bool; int var_138_int;
			var_111_int = var_138_int;
			func_1066(var_137_bool, var_138_int);
			if(var_137_bool != 1)
				var_127_bool = false;
		}
		if(var_127_bool != 0)
			var_103_bool = false;
		var_110_int += 1;
	}
	
	var_103_bool = true;
}
EMIT "Stack[-4] = 0";


void func_575(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_713(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


// @pe
void func_961(void)
{
	func_877("sobor@door1", false);
}


void func_706(bool var_61_bool)
{
	var_61_bool = true;
}


void func_708(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_968(bool var_99_bool, object var_100_object)
{
	object var_102_object;
	var_100_object = var_102_object;
	func_1000(var_102_object);
	bool var_101_bool;
	if(var_101_bool != 0) {
		var_99_bool = true;
		return 0;
	}
	var_99_bool = false;
}


void func_713(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_92_object, object var_93_object)
{
	var_0_object = var_93_object;
	var_1_object = var_92_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_99_bool;
		func_968(var_99_bool, var_1_object);
		if(!var_99_bool) { //@nz
			func_209(var_93_object, "Neutral");
			var_0_object->SetMessage(539221); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(541225, 45255, 43355); //@t
			var_0_object->AddReply(539222, 45249, 41165); //@t
		} else {
					bool var_190_bool;
					func_978(var_190_bool, var_1_object);
					var_201_bool = !var_190_bool; //@nz
					if(var_201_bool == 0) goto Label_132;
					func_209(var_93_object, "Neutral");
					var_0_object->SetMessage(539219); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(541260, -1, 43390); //@t
					var_0_object->AddReply(542837, 45265, 45264); //@t
		}
	}
Label_179:
	for(;;) {
		bool var_172_bool;
		func_946(var_172_bool);
		if(var_172_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_813(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_208;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_208:
			}
			bool var_210_bool;
			func_988(var_1_object);
			if(var_210_bool != 0) {
			object var_218_object; object var_219_object;
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_955();
			func_209(var_93_object, "Neutral");
			var_0_object->SetMessage(539223); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(539224, -1, 41167); //@t
			goto Label_179;
		}
		return 0;
	}
	func_209(var_93_object, "Neutral");
	var_0_object->SetMessage(539225); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(539226, -1, 41169); //@t
	var_0_object->AddReply(542845, -1, 45271); //@t
	goto Label_179;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_844(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


// @pe
void func_209(object var_2_object, string var_148_string)
{
	bool var_149_bool;
	func_946(var_149_bool);
	if(!var_149_bool) //@nz
		return 0;
	if(var_148_string == var_2_object)
		return 0;
	string var_152_string; bool var_153_bool;
	var_148_string = var_152_string;
	if(var_148_string == "")
		var_153_bool = false;
	else
		var_153_bool = true;
	func_829(var_152_string, var_153_bool);
	var_2_object = var_148_string;
	
}


// @pe
void func_978(bool var_190_bool, object var_191_object)
{
	object var_193_object;
	var_191_object = var_193_object;
	func_1006(var_193_object);
	bool var_192_bool;
	if(var_192_bool != 0) {
		var_190_bool = true;
		return 0;
	}
	var_190_bool = false;
}


void func_721(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_726(bool var_31_bool, object var_32_object, float var_33_float)
{
	cvector var_44_cvector; bool var_51_bool;
	var_32_object->GetPosition(var_44_cvector);
	float var_43_float;
	var_32_object->GetEyesHeight(var_43_float);
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (var_52_float + var_43_float);
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	@GetEyesHeight(var_43_float);
	var_53_float = GetByIndex(var_45_cvector, 1);
	SetByIndex(var_45_cvector, 1) = (var_53_float + var_43_float);
	cvector var_46_cvector = var_44_cvector - var_45_cvector;
	var_54_float = GetByIndex(var_46_cvector, 1);
	SetByIndex(var_46_cvector, 1) = (float)0;
	var_56_float = sqrt(var_46_cvector | var_46_cvector);
	var_46_cvector /= var_56_float;
	cvector var_47_cvector = -var_46_cvector;
	cvector var_58_cvector;
	func_862(var_58_cvector, (var_47_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_48_cvector = ((var_46_cvector * var_33_float) + (var_58_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0)
		var_31_bool = false;
	@StopWorld();
	@CameraTransit((var_45_cvector + var_48_cvector), var_47_cvector, true);
	var_72_float = GetByIndex(var_48_cvector, 0);
	var_73_float = GetByIndex(var_48_cvector, 2);
	@Rotate(var_72_float, var_73_float);
	bool var_74_bool;
	func_946(var_74_bool);
	if(var_74_bool != 0) {
	} else {
		@HasAnimationTrack(var_51_bool, "head");
		if(var_51_bool == 0) goto Label_789;
		@LookAsyncCamera("head");
	}
Label_789:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_31_bool = true;
	
}


void func_855(void)
{
	bool var_13_bool;
	func_946(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_988(bool var_210_bool)
{
	int var_212_int;
	func_872(var_212_int, "ook12BirdmaskS1");
	if(var_212_int == 0) {
		var_210_bool = true;
		return 0;
	}
	var_210_bool = false;
}


void func_862(cvector var_58_cvector, cvector var_59_cvector)
{
	float var_62_float = sqrt(var_59_cvector | var_59_cvector);
	if(var_62_float < 0.000001)
		var_58_cvector = [0.0, 0.0, 0.0];
	var_58_cvector = var_59_cvector / var_62_float;
}


void func_1124(int var_11_int)
{
	int var_13_int;
	@GetVariable("game_final", var_13_int);
	var_13_int = var_11_int;
}


// @pe
void func_613(object var_2_object, string var_3_string)
{
	func_708();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_1000(bool var_101_bool)
{
	bool var_103_bool;
	func_1086(var_103_bool);
	var_103_bool = var_101_bool;
}


void func_872(int var_212_int, string var_213_string)
{
	int var_215_int;
	@GetVariable(var_213_string, var_215_int);
	var_215_int = var_212_int;
}


void func_877(string var_18_string, bool var_19_bool)
{
	object var_21_object;
	@FindActor(var_21_object, var_18_string);
	if(!var_21_object) //@nz
		@Trace(("Door " + var_18_string) + " not found");
	else
		var_21_object->SetProperty("locked", var_19_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_1006(bool var_192_bool)
{
	int var_194_int;
	func_906(var_194_int);
	if(var_194_int >= 19)
		var_192_bool = true;
	var_192_bool = false;
}


void func_627(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_721(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_921(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_721(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_674;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_914(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_703;
				}
			} else if(var_28_int != 0) {
				goto Label_703;
			}
			}
					bool var_61_bool;
					func_706(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_698;
			}
		}
	Label_703:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_698:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_1017(int var_83_int)
{
	int var_85_int;
	@GetVariable("branch", var_85_int);
	if(var_85_int == 0) {
		var_83_int = 1;
		return 2;
	EMIT "GOTO 0x408";
	}
	if(var_85_int == 1) {
		var_83_int = 2;
		return 2;
	}
	var_83_int = 3;
}


void func_894(bool var_30_bool, string var_31_string, string var_32_string)
{
	object var_34_object;
	@FindActor(var_34_object, var_31_string);
	if(var_34_object == null)
		var_30_bool = false;
	@Trigger(var_34_object, var_32_string);
	var_30_bool = true;
}
EMIT "Stack[-1] = 0";


