// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, bool var_12_bool)
	{
		if(1 != 0) {
			func_1097();
			if(var_11_bool == 22020) {
				func_139(var_12_bool, "Neutral");
				var_0_object->SetMessage(520803); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520804, 29221, 22021); //@t
				var_0_object->AddReply(527876, 29224, 29223); //@t
				return 0;
			}
			if(var_11_bool == 29224) {
				func_139(var_12_bool, "Neutral");
				var_0_object->SetMessage(527877); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527878, -1, 29225); //@t
				return 0;
			}
			if(var_11_bool == 29221) {
				func_139(var_12_bool, "Neutral");
				var_0_object->SetMessage(527874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527875, -1, 29222); //@t
				return 0;
			}
			var_3_string = true;
			bool var_55_bool;
			func_1404(var_55_bool);
			if(var_55_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool)
	{
		if(1 != 0) {
			func_1097();
			if(var_12_bool == 32262) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_1174();
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_object;
				func_1239();
				object var_81_object = var_1_object;
				func_1207(var_0_object);
			}
			if(var_12_bool == 32312) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_1174();
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_1239();
				object var_113_object = var_1_object;
				func_1223(var_0_object);
			}
			if(var_11_int == 32255) {
				bool var_122_bool;
				func_1246(var_1_object);
				if(var_122_bool != 0) {
					object var_130_object; object var_131_object;
					var_130_object = var_1_object;
					var_131_object = var_0_object;
					func_1168();
					func_398(var_12_bool, "Fear");
					var_0_object->SetMessage(530928); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530929, 32288, 32256); //@t
					return 0;
				}
				func_398(var_12_bool, "Neutral");
				var_0_object->SetMessage(530936); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530937, -1, 32264); //@t
				return 0;
			}
			if(var_11_int == 32288) {
				func_398(var_12_bool, "Fear");
				var_0_object->SetMessage(530967); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530968, 32291, 32289); //@t
				var_0_object->AddReply(530969, 32294, 32290); //@t
				return 0;
			}
			if(var_11_int == 32294) {
				func_398(var_12_bool, "Azart");
				var_0_object->SetMessage(530973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530974, 32296, 32295); //@t
				var_0_object->AddReply(530976, 32291, 32297); //@t
				return 0;
			}
			if(var_11_int == 32296) {
				func_398(var_12_bool, "Azart");
				var_0_object->SetMessage(530975); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530977, 32291, 32298); //@t
				return 0;
			}
			if(var_11_int == 32291) {
				func_398(var_12_bool, "Azart");
				var_0_object->SetMessage(530970); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530971, 32293, 32292); //@t
				var_0_object->AddReply(530989, 32315, 32314); //@t
				return 0;
			}
			if(var_11_int == 32315) {
				func_398(var_12_bool, "Serious");
				var_0_object->SetMessage(530990); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530991, 32293, 32316); //@t
				return 0;
			}
			if(var_11_int == 32293) {
				func_398(var_12_bool, "Azart");
				var_0_object->SetMessage(530972); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530978, 32302, 32300); //@t
				return 0;
			}
			if(var_11_int == 32302) {
				func_398(var_12_bool, "Serious");
				var_0_object->SetMessage(530980); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530981, 32301, 32303); //@t
				var_0_object->AddReply(530987, 32301, 32310); //@t
				return 0;
			}
			if(var_11_int == 32301) {
				func_398(var_12_bool, "Serious");
				var_0_object->SetMessage(530979); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530982, 32305, 32304); //@t
				return 0;
			}
			if(var_11_int == 32305) {
				func_398(var_12_bool, "Azart");
				var_0_object->SetMessage(530983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530931, 32259, 32258); //@t
				var_0_object->AddReply(530984, 32307, 32306); //@t
				return 0;
			}
			if(var_11_int == 32307) {
				func_398(var_12_bool, "Azart");
				var_0_object->SetMessage(530985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530986, 32259, 32308); //@t
				return 0;
			}
			if(var_11_int == 32259) {
				func_398(var_12_bool, "Serious");
				var_0_object->SetMessage(530932); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530933, 32261, 32260); //@t
				var_0_object->AddReply(530988, -1, 32312); //@t
				return 0;
			}
			if(var_11_int == 32261) {
				func_398(var_12_bool, "Serious");
				var_0_object->SetMessage(530934); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530935, -1, 32262); //@t
				return 0;
			}
			var_3_string = true;
			bool var_262_bool;
			func_1404(var_262_bool);
			if(var_262_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1a5";
	
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, bool var_10_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		object var_12_object;
		var_11_object = var_12_object;
		func_1379(var_12_object);
		int var_244_int; object var_245_object;
		var_11_object = var_245_object;
		TaskCall(2);
		func_239(var_246_object, var_244_int, var_245_object);
		TaskReturn();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, bool var_10_bool, string var_11_string)
	{
		bool var_13_bool;
		if(var_11_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_13_bool);
			bool var_16_bool = false;
			if(!var_13_bool) { //@nz
				bool var_18_bool;
				func_824(var_18_bool);
				if(var_18_bool != 0)
					var_16_bool = true;
			}
			if(var_16_bool != 0) {
				object var_19_object;
				func_1104(var_19_object);
				@RemoveActor(var_19_object);
			}
		} else if(var_11_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, bool var_10_bool)
	{
		bool var_11_bool = false;
		if(var_0_object != 0) {
			bool var_13_bool;
			func_824(var_13_bool);
			if(var_13_bool != 0)
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			object var_14_object;
			func_1104(var_14_object);
			@RemoveActor(var_14_object);
		}
	}

}


void func_0(object var_0_object, int var_17_int, object var_18_object)
{
	var_0_object = var_18_object;
	bool var_28_bool; object var_29_object;
	var_18_object = var_29_object;
	func_826(var_28_bool, var_29_object, 70.0);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_76_int;
	func_1398(var_76_int);
	var_24_object->SetNPCName(var_76_int);
	int var_77_int;
	func_1396(var_77_int);
	var_24_object->SetNPCDescription(var_77_int);
	string var_78_string;
	func_1400(var_78_string);
	var_24_object->SetPhoto(var_78_string);
	string var_79_string;
	func_1402(var_79_string);
	var_24_object->SetPhoto2(var_79_string);
	int var_80_int;
	func_1362(var_80_int);
	var_24_object->SetPlayerName(var_80_int);
	bool var_25_bool;
	@IsOverrideActive(var_25_bool);
	if(var_25_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	@DoDialog(var_24_object);
	bool var_89_bool; object var_90_object;
	object var_91_object;
	func_1104(var_91_object);
	var_91_object = var_90_object;
	func_913(var_89_bool, var_90_object);
	object var_184_object; object var_185_object;
	var_18_object = var_184_object;
	var_24_object = var_185_object;
	TaskCall(1);
	func_81(var_186_object, var_187_object, var_188_string, var_189_bool, var_184_object, var_185_object);
	TaskReturn();
	bool var_27_bool;
	var_24_object->IsDialogEnd(var_27_bool);
	
	for(;;) {
		var_233_bool = !var_27_bool; //@nz
		if(var_233_bool == 0) goto Label_70;
		@sync();
		var_24_object->IsDialogEnd(var_27_bool);
	}
	
Label_70:
	object var_234_object;
	var_18_object = var_234_object;
	func_895();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


void func_1154(float var_32_float)
{
	float var_34_float;
	@GetGameTime(var_34_float);
	var_34_float = var_32_float;
}


void func_1284(bool var_45_bool, object var_46_object, int var_47_int)
{
	object var_54_object;
	func_1271(var_54_object);
	object var_51_object;
	var_54_object = var_51_object;
	object var_52_object;
	var_51_object->Find(var_47_int, var_52_object);
	if(!var_52_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_47_int);
		var_45_bool = false;
	}
	var_52_object->AddChild(var_46_object);
	@SendWorldWndMessage(7);
	int var_53_int;
	var_46_object->GetCategory(var_53_int);
	@SetDiarySection(var_53_int);
	var_45_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1159(int var_144_int)
{
	float var_146_float;
	@GetGameTime(var_146_float);
	var_144_int = 1 + (var_146_float / 24);
}


// @pe
void func_139(object var_2_object, string var_191_string)
{
	bool var_192_bool;
	func_1404(var_192_bool);
	if(!var_192_bool) //@nz
		return 0;
	if(var_191_string == var_2_object)
		return 0;
	string var_195_string; bool var_196_bool;
	var_191_string = var_195_string;
	if(var_191_string == "")
		var_196_bool = false;
	else
		var_196_bool = true;
	func_1067(var_195_string, var_196_bool);
	var_2_object = var_191_string;
	
}


// @pe
void func_398(object var_2_object, string var_287_string)
{
	bool var_288_bool;
	func_1404(var_288_bool);
	if(!var_288_bool) //@nz
		return 0;
	if(var_287_string == var_2_object)
		return 0;
	string var_291_string; bool var_292_bool;
	var_287_string = var_291_string;
	if(var_287_string == "")
		var_292_bool = false;
	else
		var_292_bool = true;
	func_1067(var_291_string, var_292_bool);
	var_2_object = var_287_string;
	
}


// @pe
void func_1168(void)
{
	@SetVariable("oob1Spi4ka1", 1);
}


void func_913(bool var_89_bool, object var_90_object)
{
	int var_96_int; int var_97_int;
	@GetVariable("voice_common", var_96_int);
	if(var_96_int != 0) {
		bool var_100_bool; object var_101_object;
		var_90_object = var_101_object;
		func_971(var_100_bool, var_101_object);
		if(!var_100_bool) { //@nz
			bool var_131_bool; object var_132_object;
			var_90_object = var_132_object;
			func_1008(var_131_bool, var_132_object);
			if(!var_131_bool) { //@nz
				var_89_bool = false;
				return 4;
			}
		}
		@irand(var_97_int, 2);
		if(var_97_int != 0)
			@SetVariable("voice_common", ((var_96_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_176_bool; object var_177_object;
		var_90_object = var_177_object;
		func_1008(var_176_bool, var_177_object);
		if(!var_176_bool) { //@nz
			bool var_179_bool; object var_180_object;
			var_90_object = var_180_object;
			func_971(var_179_bool, var_180_object);
			if(!var_179_bool) { //@nz
				var_89_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_969;
	
Label_969:
	var_89_bool = true;
	
}


void func_1174(void)
{
	object var_21_object;
	func_1312(var_21_object);
	object var_20_object;
	var_21_object = var_20_object;
	float var_32_float;
	func_1154(var_32_float);
	var_20_object->AddMark("b1q05Spi4kaGotoLaska", "pt_map_laska", 3, 530954, var_32_float);
	float var_39_float;
	func_1154(var_39_float);
	var_20_object->AddMark("b1q05Spi4kaGotoMishka", "pt_map_mishka", 3, 530955, var_39_float);
	func_1258();
	bool var_63_bool;
	func_1142(var_63_bool, "quest_b1_05", "completed");
}
EMIT "Stack[-1] = 0";


void func_1051(string var_217_string)
{
	bool var_221_bool; float var_222_float; float var_223_float;
	@lshHasAnimation(var_221_bool, var_217_string);
	if(var_221_bool != 0) {
		@lshGetAnimTimes(var_217_string, var_222_float, var_223_float);
		@lshPlayAnimation(var_222_float, var_223_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_217_string);
	}
	
}


void func_1312(object var_21_object)
{
	object var_24_object; object var_25_object;
	@GetMainOutdoorScene(var_24_object);
	if(var_24_object == null) {
		@Trace("Can't find main outdoor scene");
		var_25_object = null;
		var_25_object = var_21_object;
	}
	var_24_object->GetMap(var_25_object);
	var_25_object = var_21_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1067(string var_195_string, bool var_196_bool)
{
	bool var_202_bool; float var_203_float; float var_204_float;
	@lshHasAnimation(var_202_bool, var_195_string);
	if(var_202_bool != 0) {
		@lshGetAnimTimes(var_195_string, var_203_float, var_204_float);
		@lshPlayAnimation(var_203_float, var_204_float, var_196_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_195_string);
	}
	
}


void func_1329(object var_83_object, string var_84_string, float var_85_float)
{
	object var_93_object;
	@GetMainOutdoorScene(var_93_object);
	if(var_93_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_91_cvector;
	cvector var_92_cvector;
	bool var_94_bool;
	var_93_object->GetLocator(var_84_string, var_94_bool, var_91_cvector, var_92_cvector);
	if(!var_94_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_84_string) + " doesnt exist");
	var_93_object->GetMap(var_83_object);
	if(var_83_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_104_float = GetByIndex(var_91_cvector, 0);
	var_105_float = GetByIndex(var_91_cvector, 2);
	var_83_object->SetMapParams(var_104_float, var_105_float, var_85_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_1207(object var_82_object)
{
	object var_86_object;
	func_1312(var_86_object);
	object var_83_object;
	var_86_object = var_83_object;
	func_1329(var_83_object, "pt_map_laska", (float)2);
	object var_106_object;
	func_1312(var_106_object);
	var_82_object->ShowMap(var_106_object);
}


void func_824(bool var_13_bool)
{
	var_13_bool = true;
}


void func_1082(bool var_123_bool, string var_124_string)
{
	bool var_126_bool;
	bool var_127_bool;
	func_1404(var_127_bool);
	if(var_127_bool != 0) {
		@lshHasSpeech(var_126_bool, var_124_string);
		if(var_126_bool != 0) {
			@lshPlaySpeech(var_124_string);
			var_123_bool = true;
		}
	}
	var_123_bool = false;
}


void func_826(bool var_28_bool, object var_29_object, float var_30_float)
{
	cvector var_41_cvector; bool var_48_bool;
	var_29_object->GetPosition(var_41_cvector);
	float var_40_float;
	var_29_object->GetEyesHeight(var_40_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_40_float);
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	@GetEyesHeight(var_40_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_50_float + var_40_float);
	cvector var_43_cvector = var_41_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (float)0;
	var_53_float = sqrt(var_43_cvector | var_43_cvector);
	var_43_cvector /= var_53_float;
	cvector var_44_cvector = -var_43_cvector;
	cvector var_55_cvector;
	func_1110(var_55_cvector, (var_44_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_45_cvector = ((var_43_cvector * var_30_float) + (var_55_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0)
		var_28_bool = false;
	@StopWorld();
	@CameraTransit((var_42_cvector + var_45_cvector), var_44_cvector, true);
	var_69_float = GetByIndex(var_45_cvector, 0);
	var_70_float = GetByIndex(var_45_cvector, 2);
	@Rotate(var_69_float, var_70_float);
	bool var_71_bool;
	func_1404(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		@HasAnimationTrack(var_48_bool, "head");
		if(var_48_bool == 0) goto Label_889;
		@LookAsyncCamera("head");
	}
Label_889:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
	
}


// @pe
void func_320(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_268_object, object var_269_object)
{
	var_0_object = var_269_object;
	var_1_object = var_268_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_275_bool;
		func_1246(var_1_object);
		if(var_275_bool != 0) {
			object var_283_object; object var_284_object;
			var_283_object = var_1_object;
			var_284_object = var_0_object;
			func_1168();
			func_398(var_269_object, "Fear");
			var_0_object->SetMessage(530928); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530929, 32288, 32256); //@t
		} else {
					func_398(var_269_object, "Neutral");
					var_0_object->SetMessage(530936); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530937, -1, 32264); //@t
		}
	}
	for(;;) {
		bool var_299_bool;
		func_1404(var_299_bool);
		if(var_299_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1051(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_397;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_397:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x144";


// @pe
void func_1223(object var_114_object)
{
	object var_118_object;
	func_1312(var_118_object);
	object var_115_object;
	var_118_object = var_115_object;
	func_1329(var_115_object, "pt_map_mishka", (float)2);
	object var_119_object;
	func_1312(var_119_object);
	var_114_object->ShowMap(var_119_object);
}


void func_1097(void)
{
	bool var_14_bool;
	func_1404(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_971(bool var_100_bool, object var_101_object)
{
	string var_107_string; bool var_109_bool; int var_110_int; string var_111_string;
	var_107_string = "c";
	int var_108_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_101_object->HasProperty((var_107_string + (var_108_int + 1)), var_109_bool);
			if(!var_109_bool) { //@nz
			} else {
				var_108_int += 1;
			}
		}
		if(!var_108_int) { //@nz
			var_100_bool = false;
			return 10;
		}
		var_110_int = 0;
		if(var_108_int > 1)
			@irand(var_110_int, var_108_int);
		var_101_object->GetProperty((var_107_string + (var_110_int + 1)), var_111_string);
		bool var_123_bool; string var_124_string;
		var_111_string = var_124_string;
		func_1082(var_123_bool, var_124_string);
		var_123_bool = var_100_bool;
		return 10;

	}
}


void func_1104(object var_14_object)
{
	object var_16_object;
	@self(var_16_object);
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_184_object, object var_185_object)
{
	var_0_object = var_185_object;
	var_1_object = var_184_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_185_object, "Neutral");
		var_0_object->SetMessage(520803); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520804, 29221, 22021); //@t
		var_0_object->AddReply(527876, 29224, 29223); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_215_bool;
	func_1404(var_215_bool);
	if(var_215_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1051(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_138;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_138:
		return 0;

	}
	
}


void func_1362(int var_80_int)
{
	int var_82_int;
	@GetVariable("branch", var_82_int);
	if(var_82_int == 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x561";
	}
	if(var_82_int == 1) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
}


void func_1110(cvector var_55_cvector, cvector var_56_cvector)
{
	float var_59_float = sqrt(var_56_cvector | var_56_cvector);
	if(var_59_float < 0.000001)
		var_55_cvector = [0.0, 0.0, 0.0];
	var_55_cvector = var_56_cvector / var_59_float;
}


// @pe
void func_1239(void)
{
	func_1125("vagon_mishka@door1", false);
}


// @pe
void func_1246(bool var_275_bool)
{
	int var_277_int;
	func_1120(var_277_int, "oob1Spi4ka1");
	if(var_277_int == 0) {
		var_275_bool = true;
		return 0;
	}
	var_275_bool = false;
}


void func_1120(int var_277_int, string var_278_string)
{
	int var_280_int;
	@GetVariable(var_278_string, var_280_int);
	var_280_int = var_277_int;
}


void func_1379(object var_12_object)
{
	int var_14_int;
	@GetVariable("mt_spi4ka", var_14_int);
	if(!var_14_int) { //@nz
		int var_17_int; object var_18_object;
		var_12_object = var_18_object;
		TaskCall(0);
		func_0(var_19_object, var_17_int, var_18_object);
		TaskReturn();
		@SetVariable("mt_spi4ka", 1);
	}
}


void func_1125(string var_71_string, bool var_72_bool)
{
	object var_74_object;
	@FindActor(var_74_object, var_71_string);
	if(!var_74_object) //@nz
		@Trace(("Door " + var_71_string) + " not found");
	else
		var_74_object->SetProperty("locked", var_72_bool);
	
}
EMIT "Stack[-1] = 0";


void func_1258(void)
{
	object var_41_object;
	@CreateDiaryEntry(var_41_object, 584, 2, 530953);
	bool var_45_bool; object var_46_object;
	var_41_object = var_46_object;
	func_1284(var_45_bool, var_46_object, 582);
}
EMIT "Stack[-1] = 0";


void func_239(object var_0_object, int var_244_int, object var_245_object)
{
	var_0_object = var_245_object;
	bool var_255_bool; object var_256_object;
	var_245_object = var_256_object;
	func_826(var_255_bool, var_256_object, 70.0);
	if(!var_255_bool) { //@nz
		var_244_int = -2;
		return 8;
	}
	object var_251_object;
	@CreateDialog(var_251_object);
	int var_259_int;
	func_1398(var_259_int);
	var_251_object->SetNPCName(var_259_int);
	int var_260_int;
	func_1396(var_260_int);
	var_251_object->SetNPCDescription(var_260_int);
	string var_261_string;
	func_1400(var_261_string);
	var_251_object->SetPhoto(var_261_string);
	string var_262_string;
	func_1402(var_262_string);
	var_251_object->SetPhoto2(var_262_string);
	int var_263_int;
	func_1362(var_263_int);
	var_251_object->SetPlayerName(var_263_int);
	bool var_252_bool;
	@IsOverrideActive(var_252_bool);
	if(var_252_bool != 0) {
		var_244_int = -2;
		return 8;
	}
	@DoDialog(var_251_object);
	bool var_265_bool; object var_266_object;
	object var_267_object;
	func_1104(var_267_object);
	var_267_object = var_266_object;
	func_913(var_265_bool, var_266_object);
	object var_268_object; object var_269_object;
	var_245_object = var_268_object;
	var_251_object = var_269_object;
	TaskCall(3);
	func_320(var_270_object, var_271_object, var_272_string, var_273_bool, var_268_object, var_269_object);
	TaskReturn();
	bool var_254_bool;
	var_251_object->IsDialogEnd(var_254_bool);
	
	for(;;) {
		var_312_bool = !var_254_bool; //@nz
		if(var_312_bool == 0) goto Label_309;
		@sync();
		var_251_object->IsDialogEnd(var_254_bool);
	}
	
Label_309:
	object var_313_object;
	var_245_object = var_313_object;
	func_895();
	@StopDialog(var_251_object);
	var_251_object->GetReturnValue(-1);
	int var_253_int = var_244_int;
}
EMIT "Stack[-4] = 0";


void func_1008(bool var_131_bool, object var_132_object)
{
	bool var_140_bool; int var_141_int; string var_142_string;
	int var_144_int;
	func_1159(var_144_int);
	string var_138_string = ("d" + var_144_int) + "m";
	int var_139_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_132_object->HasProperty((var_138_string + (var_139_int + 1)), var_140_bool);
			if(!var_140_bool) { //@nz
			} else {
				var_139_int += 1;
			}
		}
		if(!var_139_int) { //@nz
			var_131_bool = false;
			return 10;
		}
		var_141_int = 0;
		if(var_139_int > 1)
			@irand(var_141_int, var_139_int);
		var_132_object->GetProperty((var_138_string + (var_141_int + 1)), var_142_string);
		bool var_163_bool; string var_164_string;
		var_142_string = var_164_string;
		func_1082(var_163_bool, var_164_string);
		var_163_bool = var_131_bool;
		return 10;

	}
}


void func_1396(int var_77_int)
{
	var_77_int = 515552;
}


void func_1398(int var_76_int)
{
	var_76_int = 502877;
}


void func_1142(bool var_63_bool, string var_64_string, string var_65_string)
{
	object var_67_object;
	@FindActor(var_67_object, var_64_string);
	if(var_67_object == null)
		var_63_bool = false;
	@Trigger(var_67_object, var_65_string);
	var_63_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1400(string var_78_string)
{
	var_78_string = "ui/NPC_Spi4ka.png";
}


void func_1402(string var_79_string)
{
	var_79_string = "ui/NPC_Spi4ka_b.png";
}


void func_1271(object var_54_object)
{
	object var_56_object;
	@GetDiaryRoot(var_56_object);
	if(!var_56_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_54_object = false;
	}
	var_56_object = var_54_object;
}
EMIT "Stack[-1] = 0";


void func_1404(bool var_71_bool)
{
	var_71_bool = true;
}


void func_895(void)
{
	bool var_236_bool;
	@CameraSwitchToNormal(true);
	bool var_238_bool;
	func_1404(var_238_bool);
	if(var_238_bool != 0) {
	} else {
		@HasAnimationTrack(var_236_bool, "head");
		if(var_236_bool == 0) goto Label_912;
		@UnlookAsync("head");
	}
Label_912:
	
}


