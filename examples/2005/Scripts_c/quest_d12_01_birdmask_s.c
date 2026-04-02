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
			func_1052();
			if(var_11_object == 41936) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_1158();
			}
			if(var_11_object == 41942) {
				object var_22_object; object var_23_object;
				var_22_object = var_1_object;
				var_23_object = var_0_object;
				func_1164();
			}
			if(var_11_object == 41920) {
				object var_28_object; object var_29_object;
				var_28_object = var_1_object;
				var_29_object = var_0_object;
				func_1170();
			}
			if(var_11_object == 37168) {
				object var_34_object; object var_35_object;
				var_34_object = var_1_object;
				var_35_object = var_0_object;
				func_1176();
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_1151();
			}
			if(var_10_bool == 37143) {
				bool var_56_bool;
				func_1183(var_56_bool, var_1_object);
				if(!var_56_bool) { //@nz
					func_238(var_11_object, "Neutral");
					var_0_object->SetMessage(535461); //@t
					var_0_object->ClearReplies(); //@t
					bool var_120_bool;
					func_1215(var_1_object);
					if(var_120_bool != 0)
						var_0_object->AddReply(539970, 41937, 41936); //@t
					bool var_131_bool;
					func_1227(var_1_object);
					if(var_131_bool != 0)
						var_0_object->AddReply(539976, 41943, 41942); //@t
					var_0_object->AddReply(535479, -1, 37161); //@t
					return 0;
				}
				bool var_143_bool;
				func_1193(var_143_bool, var_1_object);
				if(!var_143_bool) { //@nz
					func_238(var_11_object, "Neutral");
					var_0_object->SetMessage(535443); //@t
					var_0_object->ClearReplies(); //@t
					bool var_157_bool;
					func_1239(var_1_object);
					if(var_157_bool != 0)
						var_0_object->AddReply(539954, 41921, 41920); //@t
					var_0_object->AddReply(535460, -1, 37142); //@t
					return 0;
				}
				bool var_169_bool = false;
				bool var_170_bool;
				func_1183(var_170_bool, var_1_object);
				if(var_170_bool != 0) {
					bool var_172_bool;
					func_1203(var_1_object);
					if(var_172_bool != 0)
						var_169_bool = true;
				}
				if(var_169_bool != 0) {
					object var_178_object; object var_179_object;
					var_178_object = var_1_object;
					var_179_object = var_0_object;
					func_1145();
					func_238(var_11_object, "Neutral");
					var_0_object->SetMessage(535485); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539994, 41963, 41962); //@t
					return 0;
				}
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(535487); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535488, -1, 37170); //@t
				var_0_object->AddReply(539997, -1, 41965); //@t
				return 0;
			}
			if(var_10_bool == 41963) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539995); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535486, -1, 37168); //@t
				return 0;
			}
			if(var_10_bool == 41921) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539987, 41954, 41953); //@t
				var_0_object->AddReply(539969, -1, 41935); //@t
				return 0;
			}
			if(var_10_bool == 41954) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539988); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539956, 41923, 41922); //@t
				return 0;
			}
			if(var_10_bool == 41923) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539957); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539958, 41925, 41924); //@t
				var_0_object->AddReply(539989, 41956, 41955); //@t
				return 0;
			}
			if(var_10_bool == 41956) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539990); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539991, 41929, 41957); //@t
				var_0_object->AddReply(539992, 41927, 41958); //@t
				return 0;
			}
			if(var_10_bool == 41925) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539959); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539960, 41927, 41926); //@t
				return 0;
			}
			if(var_10_bool == 41927) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539962, 41929, 41928); //@t
				var_0_object->AddReply(539966, -1, 41932); //@t
				return 0;
			}
			if(var_10_bool == 41929) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539963); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539965, -1, 41931); //@t
				var_0_object->AddReply(539968, -1, 41934); //@t
				return 0;
			}
			if(var_10_bool == 41943) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539977); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539978, 41945, 41944); //@t
				var_0_object->AddReply(539984, 41951, 41950); //@t
				return 0;
			}
			if(var_10_bool == 41951) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539986, -1, 41952); //@t
				return 0;
			}
			if(var_10_bool == 41945) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539979); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539980, 41947, 41946); //@t
				var_0_object->AddReply(539993, -1, 41961); //@t
				return 0;
			}
			if(var_10_bool == 41947) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539982, -1, 41948); //@t
				var_0_object->AddReply(539983, -1, 41949); //@t
				return 0;
			}
			if(var_10_bool == 41937) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539971); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539972, 41939, 41938); //@t
				var_0_object->AddReply(539975, -1, 41941); //@t
				return 0;
			}
			if(var_10_bool == 41939) {
				func_238(var_11_object, "Neutral");
				var_0_object->SetMessage(539973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539974, -1, 41940); //@t
				return 0;
			}
			var_3_string = true;
			bool var_320_bool;
			func_1143(var_320_bool);
			if(var_320_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x105";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		while(true != 0) {
			func_765(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(1);
		}
	
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_830(var_9_object, var_10_object);
		int var_14_int; object var_15_object;
		var_10_object = var_15_object;
		TaskCall(0);
		func_0(var_16_object, var_14_int, var_15_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int == 10) {
			bool var_13_bool;
			func_792(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_1041(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_943(var_25_bool, var_26_object, 130.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_1137(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_1135(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_1139(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_1141(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_1268(var_76_int);
	var_21_object->SetPlayerName(var_76_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_85_object; object var_86_object;
	var_15_object = var_85_object;
	var_21_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_244_bool = !var_24_bool; //@nz
		if(var_244_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_245_object;
	var_15_object = var_245_object;
	func_1011();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_1028(string var_181_string)
{
	float var_184_float; float var_185_float;
	@lshGetAnimTimes(var_181_string, var_184_float, var_185_float);
	@lshPlayAnimation(var_184_float, var_185_float, false);
}


// @pe
void func_1285(object var_105_object, bool var_106_bool, int var_107_int)
{
	var_105_object->add(6);
	var_105_object->add(26);
	var_105_object->add(2);
	var_105_object->add(22);
	if(var_106_bool == false) {
		var_105_object->add(15);
		var_105_object->add(5);
		var_105_object->add(16);
		var_105_object->add(19);
	} else if(var_107_int != 0) {
		var_105_object->add(15);
	}
	
}


// @pe
void func_1158(void)
{
	@SetVariable("ood12BirdmaskS2", 1);
}


void func_1035(string var_147_string, bool var_148_bool)
{
	float var_153_float; float var_154_float;
	@lshGetAnimTimes(var_147_string, var_153_float, var_154_float);
	@lshPlayAnimation(var_153_float, var_154_float, var_148_bool);
}


// @pe
void func_1164(void)
{
	@SetVariable("ood12BirdmaskS3", 1);
}


void func_1041(object var_27_object)
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
void func_1170(void)
{
	@SetVariable("ood12BirdmaskS4", 1);
}


void func_792(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_930(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


// @pe
void func_1176(void)
{
	func_1074("sobor@door1", false);
}


void func_923(bool var_61_bool)
{
	var_61_bool = true;
}


void func_1052(void)
{
	bool var_13_bool;
	func_1143(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_925(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1183(bool var_92_bool, object var_93_object)
{
	object var_95_object;
	var_93_object = var_95_object;
	func_1251(var_95_object);
	bool var_94_bool;
	if(var_94_bool != 0) {
		var_92_bool = true;
		return 0;
	}
	var_92_bool = false;
}


void func_930(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_1059(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_1193(bool var_192_bool, object var_193_object)
{
	object var_195_object;
	var_193_object = var_195_object;
	func_1257(var_195_object);
	bool var_194_bool;
	if(var_194_bool != 0) {
		var_192_bool = true;
		return 0;
	}
	var_192_bool = false;
}


void func_938(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_1321(bool var_132_bool, int var_133_int)
{
	int var_135_int;
	@GetVariable(("vol_" + var_133_int), var_135_int);
	var_132_bool = (var_135_int & 4) != 0;
}


void func_1069(int var_158_int, string var_159_string)
{
	int var_161_int;
	@GetVariable(var_159_string, var_161_int);
	var_161_int = var_158_int;
}


void func_943(bool var_25_bool, object var_26_object, float var_27_float)
{
	cvector var_38_cvector; bool var_45_bool;
	var_26_object->GetPosition(var_38_cvector);
	float var_37_float;
	var_26_object->GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_46_float + var_37_float);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	@GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_37_float);
	cvector var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_50_float = sqrt(var_40_cvector | var_40_cvector);
	var_40_cvector /= var_50_float;
	cvector var_41_cvector = -var_40_cvector;
	cvector var_52_cvector;
	func_1059(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector);
	var_65_float = GetByIndex(var_42_cvector, 0);
	var_66_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	bool var_67_bool;
	func_1143(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_1005;
		@LookAsyncCamera("head");
	}
Label_1005:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_1074(string var_36_string, bool var_37_bool)
{
	object var_39_object;
	@FindActor(var_39_object, var_36_string);
	if(!var_39_object) //@nz
		@Trace(("Door " + var_36_string) + " not found");
	else
		var_39_object->SetProperty("locked", var_37_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_1203(bool var_221_bool)
{
	int var_223_int;
	func_1069(var_223_int, "ood12BirdmaskS1");
	if(var_223_int == 0) {
		var_221_bool = true;
		return 0;
	}
	var_221_bool = false;
}


void func_1331(bool var_123_bool, int var_124_int)
{
	int var_126_int;
	@GetVariable(("vol_" + var_124_int), var_126_int);
	var_123_bool = (var_126_int & 16) != 0;
}


void func_1341(bool var_96_bool)
{
	object var_101_object; int var_104_int;
	@CreateIntVector(var_101_object);
	object var_105_object;
	var_101_object = var_105_object;
	func_1285(var_105_object, false, -1);
	int var_102_int;
	var_101_object->size(var_102_int);
	int var_103_int = 0;
	
	while(var_103_int < var_102_int) {
		var_101_object->get(var_104_int, var_103_int);
		bool var_122_bool = true;
		bool var_123_bool; int var_124_int;
		var_104_int = var_124_int;
		func_1331(var_123_bool, var_124_int);
		if(var_123_bool != 1) {
			bool var_132_bool; int var_133_int;
			var_104_int = var_133_int;
			func_1321(var_132_bool, var_133_int);
			if(var_132_bool != 1)
				var_122_bool = false;
		}
		if(var_122_bool != 0)
			var_96_bool = false;
		var_103_int += 1;
	}
	
	var_96_bool = true;
}
EMIT "Stack[-4] = 0";


// @pe
void func_830(object var_2_object, string var_3_string)
{
	func_925();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_1215(bool var_156_bool)
{
	int var_158_int;
	func_1069(var_158_int, "ood12BirdmaskS2");
	if(var_158_int == 0) {
		var_156_bool = true;
		return 0;
	}
	var_156_bool = false;
}


void func_1091(bool var_48_bool, string var_49_string, string var_50_string)
{
	object var_52_object;
	@FindActor(var_52_object, var_49_string);
	if(var_52_object == null)
		var_48_bool = false;
	@Trigger(var_52_object, var_50_string);
	var_48_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_92_bool;
		func_1183(var_92_bool, var_1_object);
		if(!var_92_bool) { //@nz
			func_238(var_86_object, "Neutral");
			var_0_object->SetMessage(535461); //@t
			var_0_object->ClearReplies(); //@t
			bool var_156_bool;
			func_1215(var_1_object);
			if(var_156_bool != 0)
				var_0_object->AddReply(539970, 41937, 41936); //@t
			bool var_167_bool;
			func_1227(var_1_object);
			if(var_167_bool != 0)
				var_0_object->AddReply(539976, 41943, 41942); //@t
			var_0_object->AddReply(535479, -1, 37161); //@t
		} else {
					bool var_192_bool;
					func_1193(var_192_bool, var_1_object);
					var_203_bool = !var_192_bool; //@nz
					if(var_203_bool == 0) goto Label_152;
					func_238(var_86_object, "Neutral");
					var_0_object->SetMessage(535443); //@t
					var_0_object->ClearReplies(); //@t
					bool var_206_bool;
					func_1239(var_1_object);
					if(var_206_bool != 0)
						var_0_object->AddReply(539954, 41921, 41920); //@t
					var_0_object->AddReply(535460, -1, 37142); //@t
		}
	}
Label_208:
	for(;;) {
		bool var_179_bool;
		func_1143(var_179_bool);
		if(var_179_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1028(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_237;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_237:
			return 0;

		}

	}
	
Label_152:
	bool var_218_bool = false;
	bool var_219_bool;
	func_1183(var_219_bool, var_1_object);
	if(var_219_bool != 0) {
		bool var_221_bool;
		func_1203(var_1_object);
		if(var_221_bool != 0)
			var_218_bool = true;
	}
	if(var_218_bool != 0) {
		object var_227_object; object var_228_object;
		var_227_object = var_1_object;
		var_228_object = var_0_object;
		func_1145();
		func_238(var_86_object, "Neutral");
		var_0_object->SetMessage(535485); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539994, 41963, 41962); //@t
		goto Label_208;
	}
	func_238(var_86_object, "Neutral");
	var_0_object->SetMessage(535487); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(535488, -1, 37170); //@t
	var_0_object->AddReply(539997, -1, 41965); //@t
	goto Label_208;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


// @pe
void func_1227(bool var_167_bool)
{
	int var_169_int;
	func_1069(var_169_int, "ood12BirdmaskS3");
	if(var_169_int == 0) {
		var_167_bool = true;
		return 0;
	}
	var_167_bool = false;
}


void func_844(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_938(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_1118(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_938(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_891;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_1111(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_920;
				}
			} else if(var_28_int != 0) {
				goto Label_920;
			}
			}
					bool var_61_bool;
					func_923(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_915;
			}
		}
	Label_920:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_915:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_1103(int var_196_int)
{
	float var_198_float;
	@GetGameTime(var_198_float);
	int var_199_int;
	var_198_float = var_199_int;
	var_196_int = var_199_int % 24;
}


// @pe
void func_1239(bool var_206_bool)
{
	int var_208_int;
	func_1069(var_208_int, "ood12BirdmaskS4");
	if(var_208_int == 0) {
		var_206_bool = true;
		return 0;
	}
	var_206_bool = false;
}


void func_1111(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_1118(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_1111(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


// @pe
void func_1251(bool var_94_bool)
{
	bool var_96_bool;
	func_1341(var_96_bool);
	var_96_bool = var_94_bool;
}


// @pe
void func_1257(bool var_194_bool)
{
	int var_196_int;
	func_1103(var_196_int);
	if(var_196_int >= 19)
		var_194_bool = true;
	var_194_bool = false;
}


// @pe
void func_238(object var_2_object, string var_143_string)
{
	bool var_144_bool;
	func_1143(var_144_bool);
	if(!var_144_bool) //@nz
		return 0;
	if(var_143_string == var_2_object)
		return 0;
	string var_147_string; bool var_148_bool;
	var_143_string = var_147_string;
	if(var_143_string == "")
		var_148_bool = false;
	else
		var_148_bool = true;
	func_1035(var_147_string, var_148_bool);
	var_2_object = var_143_string;
	
}


void func_1135(int var_73_int)
{
	var_73_int = 515571;
}


void func_1137(int var_72_int)
{
	var_72_int = 504029;
}


void func_1139(string var_74_string)
{
	var_74_string = "ui/NPC_bmask.png";
}


void func_1268(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x503";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


void func_1141(string var_75_string)
{
	var_75_string = "ui/NPC_bmask_b.png";
}


void func_1011(void)
{
	bool var_247_bool;
	@CameraSwitchToNormal();
	bool var_248_bool;
	func_1143(var_248_bool);
	if(var_248_bool != 0) {
	} else {
		@HasAnimationTrack(var_247_bool, "head");
		if(var_247_bool == 0) goto Label_1027;
		@UnlookAsync("head");
	}
Label_1027:
	
}


void func_1143(bool var_67_bool)
{
	var_67_bool = false;
}


// @pe
void func_1145(void)
{
	@SetVariable("ood12BirdmaskS1", 1);
}


// @pe
void func_765(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_938(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_844();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_1151(void)
{
	bool var_48_bool;
	func_1091(var_48_bool, "quest_d12_01", "init_sobor");
}


