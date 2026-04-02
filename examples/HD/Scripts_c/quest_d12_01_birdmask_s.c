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
			func_1078();
			if(var_11_object == 41936) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_1184();
			}
			if(var_11_object == 41942) {
				object var_22_object; object var_23_object;
				var_22_object = var_1_object;
				var_23_object = var_0_object;
				func_1190();
			}
			if(var_11_object == 41920) {
				object var_28_object; object var_29_object;
				var_28_object = var_1_object;
				var_29_object = var_0_object;
				func_1196();
			}
			if(var_11_object == 37168) {
				object var_34_object; object var_35_object;
				var_34_object = var_1_object;
				var_35_object = var_0_object;
				func_1202();
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_1177();
			}
			if(var_10_bool == 37143) {
				bool var_56_bool;
				func_1209(var_56_bool, var_1_object);
				if(!var_56_bool) { //@nz
					func_238(var_11_object, "Neutral");
					var_0_object->SetMessage(535461); //@t
					var_0_object->ClearReplies(); //@t
					bool var_124_bool;
					func_1241(var_1_object);
					if(var_124_bool != 0)
						var_0_object->AddReply(539970, 41937, 41936); //@t
					bool var_135_bool;
					func_1253(var_1_object);
					if(var_135_bool != 0)
						var_0_object->AddReply(539976, 41943, 41942); //@t
					var_0_object->AddReply(535479, -1, 37161); //@t
					return 0;
				}
				bool var_147_bool;
				func_1219(var_147_bool, var_1_object);
				if(!var_147_bool) { //@nz
					func_238(var_11_object, "Neutral");
					var_0_object->SetMessage(535443); //@t
					var_0_object->ClearReplies(); //@t
					bool var_161_bool;
					func_1265(var_1_object);
					if(var_161_bool != 0)
						var_0_object->AddReply(539954, 41921, 41920); //@t
					var_0_object->AddReply(535460, -1, 37142); //@t
					return 0;
				}
				bool var_173_bool = false;
				bool var_174_bool;
				func_1209(var_174_bool, var_1_object);
				if(var_174_bool != 0) {
					bool var_176_bool;
					func_1229(var_1_object);
					if(var_176_bool != 0)
						var_173_bool = true;
				}
				if(var_173_bool != 0) {
					object var_182_object; object var_183_object;
					var_182_object = var_1_object;
					var_183_object = var_0_object;
					func_1171();
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
			bool var_324_bool;
			func_1169(var_324_bool);
			if(var_324_bool != 0)
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
			func_771(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(1);
		}
	
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		int var_11_int;
		func_1402(var_11_int);
		if(var_11_int == 0) {
			func_836(var_9_object, var_10_object);
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
			func_798(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_1067(var_4_bool);
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
	func_949(var_31_bool, var_32_object, 130.0);
	if(!var_31_bool) { //@nz
		var_20_int = -2;
		return 8;
	}
	object var_27_object;
	@CreateDialog(var_27_object);
	int var_79_int;
	func_1163(var_79_int);
	var_27_object->SetNPCName(var_79_int);
	int var_80_int;
	func_1161(var_80_int);
	var_27_object->SetNPCDescription(var_80_int);
	string var_81_string;
	func_1165(var_81_string);
	var_27_object->SetPhoto(var_81_string);
	string var_82_string;
	func_1167(var_82_string);
	var_27_object->SetPhoto2(var_82_string);
	int var_83_int;
	func_1294(var_83_int);
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
		var_260_bool = !var_30_bool; //@nz
		if(var_260_bool == 0) goto Label_63;
		@sync();
		var_27_object->IsDialogEnd(var_30_bool);
	}
	
Label_63:
	object var_261_object;
	var_21_object = var_261_object;
	func_1018();
	@StopDialog(var_27_object);
	var_27_object->GetReturnValue(-1);
	int var_29_int = var_20_int;
}
EMIT "Stack[-4] = 0";


void func_1018(void)
{
	bool var_263_bool;
	@CameraSwitchToNormal(true);
	bool var_265_bool;
	func_1169(var_265_bool);
	if(var_265_bool != 0) {
	} else {
		@HasAnimationTrack(var_263_bool, "head");
		if(var_263_bool == 0) goto Label_1035;
		@UnlookAsync("head");
	}
Label_1035:
	
}


// @pe
void func_1283(bool var_210_bool)
{
	int var_212_int;
	func_1129(var_212_int);
	if(var_212_int >= 19)
		var_210_bool = true;
	var_210_bool = false;
}


// @pe
void func_771(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_944(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_850();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1161(int var_80_int)
{
	var_80_int = 515571;
}


void func_1163(int var_79_int)
{
	var_79_int = 504029;
}


void func_1036(string var_192_string)
{
	bool var_196_bool; float var_197_float; float var_198_float;
	@lshHasAnimation(var_196_bool, var_192_string);
	if(var_196_bool != 0) {
		@lshGetAnimTimes(var_192_string, var_197_float, var_198_float);
		@lshPlayAnimation(var_197_float, var_198_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_192_string);
	}
	
}


void func_1165(string var_81_string)
{
	var_81_string = "ui/NPC_bmask.png";
}


void func_1294(int var_83_int)
{
	int var_85_int;
	@GetVariable("branch", var_85_int);
	if(var_85_int == 0) {
		var_83_int = 1;
		return 2;
	EMIT "GOTO 0x51d";
	}
	if(var_85_int == 1) {
		var_83_int = 2;
		return 2;
	}
	var_83_int = 3;
}


void func_1167(string var_82_string)
{
	var_82_string = "ui/NPC_bmask_b.png";
}


void func_1169(bool var_74_bool)
{
	var_74_bool = false;
}


// @pe
void func_1171(void)
{
	@SetVariable("ood12BirdmaskS1", 1);
}


// @pe
void func_1177(void)
{
	bool var_48_bool;
	func_1117(var_48_bool, "quest_d12_01", "init_sobor");
}


void func_1052(string var_153_string, bool var_154_bool)
{
	bool var_160_bool; float var_161_float; float var_162_float;
	@lshHasAnimation(var_160_bool, var_153_string);
	if(var_160_bool != 0) {
		@lshGetAnimTimes(var_153_string, var_161_float, var_162_float);
		@lshPlayAnimation(var_161_float, var_162_float, var_154_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_153_string);
	}
	
}


void func_798(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_936(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


// @pe
void func_1311(object var_112_object, bool var_113_bool, int var_114_int)
{
	var_112_object->add(6);
	var_112_object->add(26);
	var_112_object->add(2);
	var_112_object->add(22);
	if(var_113_bool == false) {
		var_112_object->add(15);
		var_112_object->add(5);
		var_112_object->add(16);
	} else if(var_114_int != 0) {
		var_112_object->add(15);
	}
	
}


// @pe
void func_1184(void)
{
	@SetVariable("ood12BirdmaskS2", 1);
}


void func_929(bool var_61_bool)
{
	var_61_bool = true;
}


void func_931(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1190(void)
{
	@SetVariable("ood12BirdmaskS3", 1);
}


void func_936(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_1067(object var_27_object)
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
void func_1196(void)
{
	@SetVariable("ood12BirdmaskS4", 1);
}


void func_944(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


// @pe
void func_1202(void)
{
	func_1100("sobor@door1", false);
}


void func_949(bool var_31_bool, object var_32_object, float var_33_float)
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
	func_1085(var_58_cvector, (var_47_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1169(var_74_bool);
	if(var_74_bool != 0) {
	} else {
		@HasAnimationTrack(var_51_bool, "head");
		if(var_51_bool == 0) goto Label_1012;
		@LookAsyncCamera("head");
	}
Label_1012:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_31_bool = true;
	
}


void func_1078(void)
{
	bool var_13_bool;
	func_1169(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1209(bool var_99_bool, object var_100_object)
{
	object var_102_object;
	var_100_object = var_102_object;
	func_1277(var_102_object);
	bool var_101_bool;
	if(var_101_bool != 0) {
		var_99_bool = true;
		return 0;
	}
	var_99_bool = false;
}


void func_1085(cvector var_58_cvector, cvector var_59_cvector)
{
	float var_62_float = sqrt(var_59_cvector | var_59_cvector);
	if(var_62_float < 0.000001)
		var_58_cvector = [0.0, 0.0, 0.0];
	var_58_cvector = var_59_cvector / var_62_float;
}


void func_1344(bool var_138_bool, int var_139_int)
{
	int var_141_int;
	@GetVariable(("vol_" + var_139_int), var_141_int);
	var_138_bool = (var_141_int & 4) != 0;
}


// @pe
void func_1219(bool var_208_bool, object var_209_object)
{
	object var_211_object;
	var_209_object = var_211_object;
	func_1283(var_211_object);
	bool var_210_bool;
	if(var_210_bool != 0) {
		var_208_bool = true;
		return 0;
	}
	var_208_bool = false;
}


// @pe
void func_836(object var_2_object, string var_3_string)
{
	func_931();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_1095(int var_169_int, string var_170_string)
{
	int var_172_int;
	@GetVariable(var_170_string, var_172_int);
	var_172_int = var_169_int;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_92_object, object var_93_object)
{
	var_0_object = var_93_object;
	var_1_object = var_92_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_99_bool;
		func_1209(var_99_bool, var_1_object);
		if(!var_99_bool) { //@nz
			func_238(var_93_object, "Neutral");
			var_0_object->SetMessage(535461); //@t
			var_0_object->ClearReplies(); //@t
			bool var_167_bool;
			func_1241(var_1_object);
			if(var_167_bool != 0)
				var_0_object->AddReply(539970, 41937, 41936); //@t
			bool var_178_bool;
			func_1253(var_1_object);
			if(var_178_bool != 0)
				var_0_object->AddReply(539976, 41943, 41942); //@t
			var_0_object->AddReply(535479, -1, 37161); //@t
		} else {
					bool var_208_bool;
					func_1219(var_208_bool, var_1_object);
					var_219_bool = !var_208_bool; //@nz
					if(var_219_bool == 0) goto Label_152;
					func_238(var_93_object, "Neutral");
					var_0_object->SetMessage(535443); //@t
					var_0_object->ClearReplies(); //@t
					bool var_222_bool;
					func_1265(var_1_object);
					if(var_222_bool != 0)
						var_0_object->AddReply(539954, 41921, 41920); //@t
					var_0_object->AddReply(535460, -1, 37142); //@t
		}
	}
Label_208:
	for(;;) {
		bool var_190_bool;
		func_1169(var_190_bool);
		if(var_190_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1036(var_2_object);
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
	bool var_234_bool = false;
	bool var_235_bool;
	func_1209(var_235_bool, var_1_object);
	if(var_235_bool != 0) {
		bool var_237_bool;
		func_1229(var_1_object);
		if(var_237_bool != 0)
			var_234_bool = true;
	}
	if(var_234_bool != 0) {
		object var_243_object; object var_244_object;
		var_243_object = var_1_object;
		var_244_object = var_0_object;
		func_1171();
		func_238(var_93_object, "Neutral");
		var_0_object->SetMessage(535485); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539994, 41963, 41962); //@t
		goto Label_208;
	}
	func_238(var_93_object, "Neutral");
	var_0_object->SetMessage(535487); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(535488, -1, 37170); //@t
	var_0_object->AddReply(539997, -1, 41965); //@t
	goto Label_208;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_1354(bool var_129_bool, int var_130_int)
{
	int var_132_int;
	@GetVariable(("vol_" + var_130_int), var_132_int);
	var_129_bool = (var_132_int & 16) != 0;
}


void func_1100(string var_36_string, bool var_37_bool)
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
void func_1229(bool var_237_bool)
{
	int var_239_int;
	func_1095(var_239_int, "ood12BirdmaskS1");
	if(var_239_int == 0) {
		var_237_bool = true;
		return 0;
	}
	var_237_bool = false;
}


void func_850(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_944(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_1144(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_944(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_897;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_1137(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_926;
				}
			} else if(var_28_int != 0) {
				goto Label_926;
			}
			}
					bool var_61_bool;
					func_929(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_921;
			}
		}
	Label_926:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_921:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_1364(bool var_103_bool)
{
	object var_108_object; int var_111_int;
	@CreateIntVector(var_108_object);
	object var_112_object;
	var_108_object = var_112_object;
	func_1311(var_112_object, false, -1);
	int var_109_int;
	var_108_object->size(var_109_int);
	int var_110_int = 0;
	
	while(var_110_int < var_109_int) {
		var_108_object->get(var_111_int, var_110_int);
		bool var_128_bool = true;
		bool var_129_bool; int var_130_int;
		var_111_int = var_130_int;
		func_1354(var_129_bool, var_130_int);
		if(var_129_bool != 1) {
			bool var_138_bool; int var_139_int;
			var_111_int = var_139_int;
			func_1344(var_138_bool, var_139_int);
			if(var_138_bool != 1)
				var_128_bool = false;
		}
		if(var_128_bool != 0)
			var_103_bool = false;
		var_110_int += 1;
	}
	
	var_103_bool = true;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1241(bool var_167_bool)
{
	int var_169_int;
	func_1095(var_169_int, "ood12BirdmaskS2");
	if(var_169_int == 0) {
		var_167_bool = true;
		return 0;
	}
	var_167_bool = false;
}


void func_1117(bool var_48_bool, string var_49_string, string var_50_string)
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
void func_1253(bool var_178_bool)
{
	int var_180_int;
	func_1095(var_180_int, "ood12BirdmaskS3");
	if(var_180_int == 0) {
		var_178_bool = true;
		return 0;
	}
	var_178_bool = false;
}


void func_1129(int var_212_int)
{
	float var_214_float;
	@GetGameTime(var_214_float);
	int var_215_int;
	var_214_float = var_215_int;
	var_212_int = var_215_int % 24;
}


// @pe
void func_238(object var_2_object, string var_149_string)
{
	bool var_150_bool;
	func_1169(var_150_bool);
	if(!var_150_bool) //@nz
		return 0;
	if(var_149_string == var_2_object)
		return 0;
	string var_153_string; bool var_154_bool;
	var_149_string = var_153_string;
	if(var_149_string == "")
		var_154_bool = false;
	else
		var_154_bool = true;
	func_1052(var_153_string, var_154_bool);
	var_2_object = var_149_string;
	
}


// @pe
void func_1265(bool var_222_bool)
{
	int var_224_int;
	func_1095(var_224_int, "ood12BirdmaskS4");
	if(var_224_int == 0) {
		var_222_bool = true;
		return 0;
	}
	var_222_bool = false;
}


void func_1137(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_1144(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_1137(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_1402(int var_11_int)
{
	int var_13_int;
	@GetVariable("game_final", var_13_int);
	var_13_int = var_11_int;
}


// @pe
void func_1277(bool var_101_bool)
{
	bool var_103_bool;
	func_1364(var_103_bool);
	var_103_bool = var_101_bool;
}


