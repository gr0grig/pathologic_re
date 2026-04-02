task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int, bool var_14_bool, bool var_15_bool, object var_16_object, bool var_17_bool, int var_18_int)
	{
		bool var_19_bool;
		func_1474(var_19_bool);
		if(var_19_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, int var_13_int, int var_14_int, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, int var_19_int)
	{
		if(1 != 0) {
			func_1252();
			if(var_18_bool == 26759) {
				func_172(var_19_int, "Neutral");
				var_0_bool->SetMessage(525391); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525392, -1, 26760); //@t
				var_0_bool->AddReply(539025, -1, 40968); //@t
				return 0;
			}
			var_3_object = true;
			bool var_43_bool;
			func_1474(var_43_bool);
			if(var_43_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc3";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, int var_13_int, int var_14_int, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, int var_19_int)
	{
		if(1 != 0) {
			func_1252();
			if(var_19_int == 19285) {
				object var_24_object = var_1_object;
				func_1320(var_0_bool);
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_bool;
				func_1341();
			}
			if(var_19_int == 19288) {
				object var_47_object = var_1_object;
				func_1347(var_0_bool);
			}
			if(var_19_int == 36243) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_bool;
				func_1335();
			}
			if(var_18_bool == 19277) {
				bool var_58_bool = false;
				bool var_59_bool;
				func_1374(var_59_bool, var_1_object);
				if(!var_59_bool) { //@nz
					bool var_69_bool;
					func_1364(var_69_bool, var_1_object);
					if(!var_69_bool) //@nz
						var_58_bool = true;
				}
				if(var_58_bool != 0) {
					func_444(var_19_int, "Neutral");
					var_0_bool->SetMessage(518164); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(530150, 31544, 31543); //@t
					var_0_bool->AddReply(530158, -1, 31551); //@t
					return 0;
				}
				bool var_101_bool = false;
				bool var_102_bool;
				func_1374(var_102_bool, var_1_object);
				if(var_102_bool != 0) {
					bool var_104_bool;
					func_1364(var_104_bool, var_1_object);
					if(!var_104_bool) //@nz
						var_101_bool = true;
				}
				if(var_101_bool != 0) {
					func_444(var_19_int, "Neutral");
					var_0_bool->SetMessage(518169); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(518170, 19284, 19283); //@t
					return 0;
				}
				func_444(var_19_int, "Neutral");
				var_0_bool->SetMessage(518174); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518175, -1, 19288); //@t
				bool var_117_bool;
				func_1352(var_1_object);
				if(var_117_bool != 0)
					var_0_bool->AddReply(534605, 36244, 36243); //@t
				var_0_bool->AddReply(518179, -1, 19292); //@t
				return 0;
			}
			if(var_18_bool == 36244) {
				func_444(var_19_int, "Neutral");
				var_0_bool->SetMessage(534606); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534607, 36246, 36245); //@t
				var_0_bool->AddReply(534614, -1, 36252); //@t
				return 0;
			}
			if(var_18_bool == 36246) {
				func_444(var_19_int, "Neutral");
				var_0_bool->SetMessage(534608); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534609, -1, 36247); //@t
				var_0_bool->AddReply(534610, 36249, 36248); //@t
				return 0;
			}
			if(var_18_bool == 36249) {
				func_444(var_19_int, "Neutral");
				var_0_bool->SetMessage(534611); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534612, -1, 36250); //@t
				var_0_bool->AddReply(534613, -1, 36251); //@t
				return 0;
			}
			if(var_18_bool == 19284) {
				func_444(var_19_int, "Neutral");
				var_0_bool->SetMessage(518171); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518172, -1, 19285); //@t
				var_0_bool->AddReply(518173, -1, 19286); //@t
				return 0;
			}
			if(var_18_bool == 31544) {
				func_444(var_19_int, "Neutral");
				var_0_bool->SetMessage(530151); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(530152, 31546, 31545); //@t
				var_0_bool->AddReply(530156, -1, 31549); //@t
				return 0;
			}
			if(var_18_bool == 31546) {
				func_444(var_19_int, "Neutral");
				var_0_bool->SetMessage(530153); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(530154, -1, 31547); //@t
				var_0_bool->AddReply(530155, -1, 31548); //@t
				return 0;
			}
			var_3_object = true;
			bool var_191_bool;
			func_1474(var_191_bool);
			if(var_191_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1d3";
	
	}

}


maintask task_5
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int)
	{
		int var_18_int;
		func_1287(var_18_int);
		var_6_object = var_18_int;
		func_1397();
		func_835((float)300, (float)100);
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int, object var_18_object)
	{
		int var_19_int; int var_20_int;
		func_979(var_19_int, var_20_int);
		int var_24_int;
		func_1460(var_24_int);
		if(var_24_int == 1) {
			int var_30_int; object var_31_object;
			var_18_object = var_31_object;
			TaskCall(3);
			func_236(var_32_object, var_30_int, var_31_object);
			TaskReturn();
			var_32_object = var_20_int;
		} else {
				int var_247_int;
				func_1460(var_247_int);
				if(!(var_247_int == 2)) goto Label_796;
				int var_250_int; object var_251_object;
				var_18_object = var_251_object;
				TaskCall(1);
				func_40(var_252_object, var_250_int, var_251_object);
				TaskReturn();
				var_252_object = var_20_int;
		}
		for(;;) {
			if(1000 == var_20_int) {
				bool var_209_bool; object var_210_object;
				var_18_object = var_210_object;
				func_1177(var_209_bool, var_210_object, 110.0);
				if(!var_209_bool) //@nz
					return 2;
				object var_239_object;
				var_18_object = var_239_object;
				TaskCall(0);
				func_0(var_239_object);
				TaskReturn();
				object var_246_object;
				var_18_object = var_246_object;
				func_1224();
			}
			return 2;

		}
	
	Label_796:
	}

	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int)
	{
		int var_18_int;
		func_1287(var_18_int);
		if(var_6_object != var_18_int) {
			func_1397();
			int var_47_int;
			func_1287(var_47_int);
			var_6_object = var_47_int;
		}
		func_888();
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int, string var_18_string)
	{
		if(var_18_string == "cleanup")
			func_860(var_18_string);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int)
	{
		func_979(var_16_bool, var_17_int);
		bool var_21_bool = false;
		if(var_5_bool != 0) {
			bool var_23_bool;
			func_912(var_23_bool);
			if(var_23_bool != 0)
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			object var_24_object;
			func_1259(var_24_object);
			@RemoveActor(var_24_object);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int, int var_18_int)
	{
		if(var_18_int == 10) {
			bool var_21_bool;
			func_941(var_16_bool, var_17_int, var_18_int, var_21_bool);
			if(var_21_bool != 0) {
				if(!var_2_object) { //@nz
					func_1241(var_4_string);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_241_bool;
		func_1474(var_241_bool);
		if(var_241_bool == 0) goto Label_15;
		func_1228("Neutral");
		@lshWaitForAnimEnd();
		break;
	Label_24:
	}
	if(false == 0) goto Label_24;
	return 0;
	
Label_15:
	@WaitForAnimEnd();
	@PlayAnimation("all", "idle");
}
EMIT "Return(); Pop(0)";


void func_1280(bool var_111_bool, object var_112_object, string var_113_string)
{
	int var_116_int;
	@GetInvItemByName(var_116_int, var_113_string);
	bool var_117_bool;
	var_112_object->HasItem(var_116_int, var_117_bool);
	var_117_bool = var_111_bool;
}


void func_1287(int var_18_int)
{
	float var_20_float;
	@GetGameTime(var_20_float);
	var_18_int = 1 + (var_20_float / 24);
}


void func_1160(void)
{
	bool var_202_bool;
	@CameraSwitchToNormal();
	bool var_203_bool;
	func_1474(var_203_bool);
	if(var_203_bool != 0) {
	} else {
		@HasAnimationTrack(var_202_bool, "head");
		if(var_202_bool == 0) goto Label_1176;
		@UnlookAsync("head");
	}
Label_1176:
	
}


void func_912(bool var_23_bool)
{
	var_23_bool = true;
}


void func_1296(string var_86_string, int var_87_int)
{
	string var_89_string = "idle";
	if(var_87_int != 0)
		var_89_string += var_87_int;
	var_89_string = var_86_string;
}


// @pe
void func_914(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, float var_57_float, float var_58_float)
{
	bool var_59_bool;
	func_1087(var_59_bool);
	if(!var_59_bool) //@nz
		return 0;
	@FindActor(var_4_string, "player");
	var_2_object = false;
	var_0_bool = var_57_float;
	var_1_object = var_58_float;
	@SetTimer(10, 1.0);
	func_993();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1303(int var_80_int)
{
	int var_83_int; bool var_84_bool;
	var_83_int = 0;
	
	for(;;) {
		string var_86_string; int var_87_int;
		var_83_int = var_87_int;
		func_1296(var_86_string, var_87_int);
		@HasAnimation(var_84_bool, "all", var_86_string);
		if(!var_84_bool) //@nz
			break;
		var_83_int += 1;
	}
	var_83_int = var_80_int;
}


void func_1177(bool var_209_bool, object var_210_object, float var_211_float)
{
	cvector var_221_cvector;
	var_210_object->GetPosition(var_221_cvector);
	float var_220_float;
	var_210_object->GetEyesHeight(var_220_float);
	var_228_float = GetByIndex(var_221_cvector, 1);
	SetByIndex(var_221_cvector, 1) = (var_228_float + var_220_float);
	cvector var_222_cvector;
	@GetPosition(var_222_cvector);
	@GetEyesHeight(var_220_float);
	var_229_float = GetByIndex(var_222_cvector, 1);
	SetByIndex(var_222_cvector, 1) = (var_229_float + var_220_float);
	cvector var_223_cvector = var_221_cvector - var_222_cvector;
	var_230_float = GetByIndex(var_223_cvector, 1);
	SetByIndex(var_223_cvector, 1) = (float)0;
	var_232_float = sqrt(var_223_cvector | var_223_cvector);
	var_223_cvector /= var_232_float;
	cvector var_224_cvector = -var_223_cvector;
	cvector var_225_cvector = (var_223_cvector * var_211_float) - [0.0, 10.0, 0.0];
	bool var_227_bool;
	@IsOverrideActive(var_227_bool);
	if(var_227_bool != 0)
		var_209_bool = false;
	@StopWorld();
	@CameraTransit((var_222_cvector + var_225_cvector), var_224_cvector);
	var_236_float = GetByIndex(var_225_cvector, 0);
	var_237_float = GetByIndex(var_225_cvector, 2);
	@Rotate(var_236_float, var_237_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_209_bool = true;
}


void func_1438(int var_31_int, string var_32_string)
{
	int var_34_int;
	@GetInvItemByName(var_34_int, var_32_string);
	var_34_int = var_31_int;
}


void func_1443(int var_92_int)
{
	int var_94_int;
	@GetVariable("branch", var_94_int);
	if(var_94_int == 0) {
		var_92_int = 1;
		return 2;
	EMIT "GOTO 0x5b2";
	}
	if(var_94_int == 1) {
		var_92_int = 2;
		return 2;
	}
	var_92_int = 3;
}


void func_1320(object var_24_object)
{
	int var_30_int;
	func_1287(var_30_int);
	int var_28_int;
	var_30_int = var_28_int;
	@SetVariable(("Gatherer2_" + var_28_int), 1);
	int var_29_int;
	var_24_object->RemoveItemByType(var_29_int, "blood", 1);
}


void func_40(bool var_0_bool, int var_250_int, object var_251_object)
{
	var_0_bool = var_251_object;
	bool var_261_bool; object var_262_object;
	var_251_object = var_262_object;
	func_1092(var_261_bool, var_262_object, 110.0);
	if(!var_261_bool) { //@nz
		var_250_int = -2;
		return 8;
	}
	object var_257_object;
	@CreateDialog(var_257_object);
	int var_265_int;
	func_1468(var_265_int);
	var_257_object->SetNPCName(var_265_int);
	int var_266_int;
	func_1466(var_266_int);
	var_257_object->SetNPCDescription(var_266_int);
	string var_267_string;
	func_1470(var_267_string);
	var_257_object->SetPhoto(var_267_string);
	string var_268_string;
	func_1472(var_268_string);
	var_257_object->SetPhoto2(var_268_string);
	int var_269_int;
	func_1443(var_269_int);
	var_257_object->SetPlayerName(var_269_int);
	bool var_258_bool;
	@IsOverrideActive(var_258_bool);
	if(var_258_bool != 0) {
		var_250_int = -2;
		return 8;
	}
	@DoDialog(var_257_object);
	object var_271_object; object var_272_object;
	var_251_object = var_271_object;
	var_257_object = var_272_object;
	TaskCall(2);
	func_114(var_273_object, var_274_object, var_275_string, var_276_bool, var_271_object, var_272_object);
	TaskReturn();
	bool var_260_bool;
	var_257_object->IsDialogEnd(var_260_bool);
	
	for(;;) {
		var_301_bool = !var_260_bool; //@nz
		if(var_301_bool == 0) goto Label_103;
		@sync();
		var_257_object->IsDialogEnd(var_260_bool);
	}
	
Label_103:
	object var_302_object;
	var_251_object = var_302_object;
	func_1160();
	@StopDialog(var_257_object);
	var_257_object->GetReturnValue(-1);
	int var_259_int = var_250_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_172(object var_2_object, string var_278_string)
{
	bool var_279_bool;
	func_1474(var_279_bool);
	if(!var_279_bool) //@nz
		return 0;
	if(var_278_string == var_2_object)
		return 0;
	string var_282_string; bool var_283_bool;
	var_278_string = var_282_string;
	if(var_278_string == "")
		var_283_bool = false;
	else
		var_283_bool = true;
	func_1235(var_282_string, var_283_bool);
	var_2_object = var_278_string;
	
}


void func_941(bool var_0_bool, object var_1_object, string var_4_string, bool var_21_bool)
{
	if(var_4_string == null)
		var_21_bool = false;
	float var_25_float;
	func_1079(var_25_float, var_4_string);
	float var_23_float = sqrt(var_25_float);
	if(var_2_object != 0)
		var_23_float -= var_1_object;
	var_21_bool = var_23_float < var_0_bool;
}


void func_1072(bool var_105_bool)
{
	var_105_bool = true;
}


void func_1074(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1460(int var_24_int)
{
	int var_26_int;
	@GetVariable("branch", var_26_int);
	var_26_int = var_24_int;
}


// @pe
void func_310(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_101_object, object var_102_object)
{
	var_0_bool = var_102_object;
	var_1_object = var_101_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_108_bool = false;
		bool var_109_bool;
		func_1374(var_109_bool, var_1_object);
		if(!var_109_bool) { //@nz
			bool var_119_bool;
			func_1364(var_119_bool, var_1_object);
			if(!var_119_bool) //@nz
				var_108_bool = true;
		}
		if(var_108_bool != 0) {
			func_444(var_102_object, "Neutral");
			var_0_bool->SetMessage(518164); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(530150, 31544, 31543); //@t
			var_0_bool->AddReply(530158, -1, 31551); //@t
		} else {
					bool var_169_bool = false;
					bool var_170_bool;
					func_1374(var_170_bool, var_1_object);
					if(var_170_bool != 0) {
						bool var_172_bool;
						func_1364(var_172_bool, var_1_object);
						if(!var_172_bool) //@nz
							var_169_bool = true;
					}
					if(var_169_bool == 0) goto Label_382;
					func_444(var_102_object, "Neutral");
					var_0_bool->SetMessage(518169); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(518170, 19284, 19283); //@t
		}
	}
Label_414:
	for(;;) {
		bool var_156_bool;
		func_1474(var_156_bool);
		if(var_156_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1228(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_443;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_443:
			return 0;

		}

	}
	
Label_382:
	func_444(var_102_object, "Neutral");
	var_0_bool->SetMessage(518174); //@t
	var_0_bool->ClearReplies(); //@t
	var_0_bool->AddReply(518175, -1, 19288); //@t
	bool var_185_bool;
	func_1352(var_1_object);
	if(var_185_bool != 0)
		var_0_bool->AddReply(534605, 36244, 36243); //@t
	var_0_bool->AddReply(518179, -1, 19292); //@t
	goto Label_414;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x13a";


// @pe
void func_1335(void)
{
	@SetVariable("oobSysGatherer2_1", 1);
}


void func_1079(float var_25_float, object var_26_object)
{
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	cvector var_31_cvector;
	var_26_object->GetPosition(var_31_cvector);
	var_25_float = (var_31_cvector - var_30_cvector) | (var_31_cvector - var_30_cvector);
}


void func_1466(int var_89_int)
{
	var_89_int = 521048;
}


// @pe
void func_444(object var_2_object, string var_137_string)
{
	bool var_138_bool;
	func_1474(var_138_bool);
	if(!var_138_bool) //@nz
		return 0;
	if(var_137_string == var_2_object)
		return 0;
	string var_141_string; bool var_142_bool;
	var_137_string = var_141_string;
	if(var_137_string == "")
		var_142_bool = false;
	else
		var_142_bool = true;
	func_1235(var_141_string, var_142_bool);
	var_2_object = var_137_string;
	
}


void func_1468(int var_88_int)
{
	var_88_int = 521047;
}


void func_1470(string var_90_string)
{
	var_90_string = "ui/NPC_Citizen2.png";
}


// @pe
void func_1341(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1472(string var_91_string)
{
	var_91_string = "ui/NPC_Citizen2_b.png";
}


void func_1087(bool var_50_bool)
{
	bool var_52_bool;
	@IsLoaded(var_52_bool);
	var_52_bool = var_50_bool;
}


void func_1474(bool var_83_bool)
{
	var_83_bool = false;
}


// @pe
void func_1347(object var_48_object)
{
	var_48_object->SetReturnValue(1000);
}


void func_1092(bool var_41_bool, object var_42_object, float var_43_float)
{
	cvector var_54_cvector; bool var_61_bool;
	var_42_object->GetPosition(var_54_cvector);
	float var_53_float;
	var_42_object->GetEyesHeight(var_53_float);
	var_62_float = GetByIndex(var_54_cvector, 1);
	SetByIndex(var_54_cvector, 1) = (var_62_float + var_53_float);
	cvector var_55_cvector;
	@GetPosition(var_55_cvector);
	@GetEyesHeight(var_53_float);
	var_63_float = GetByIndex(var_55_cvector, 1);
	SetByIndex(var_55_cvector, 1) = (var_63_float + var_53_float);
	cvector var_56_cvector = var_54_cvector - var_55_cvector;
	var_64_float = GetByIndex(var_56_cvector, 1);
	SetByIndex(var_56_cvector, 1) = (float)0;
	var_66_float = sqrt(var_56_cvector | var_56_cvector);
	var_56_cvector /= var_66_float;
	cvector var_57_cvector = -var_56_cvector;
	cvector var_68_cvector;
	func_1265(var_68_cvector, (var_57_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_58_cvector = ((var_56_cvector * var_43_float) + (var_68_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_60_bool;
	@IsOverrideActive(var_60_bool);
	if(var_60_bool != 0)
		var_41_bool = false;
	@StopWorld();
	@CameraTransit((var_55_cvector + var_58_cvector), var_57_cvector);
	var_81_float = GetByIndex(var_58_cvector, 0);
	var_82_float = GetByIndex(var_58_cvector, 2);
	@Rotate(var_81_float, var_82_float);
	bool var_83_bool;
	func_1474(var_83_bool);
	if(var_83_bool != 0) {
	} else {
		@HasAnimationTrack(var_61_bool, "head");
		if(var_61_bool == 0) goto Label_1154;
		@LookAsyncCamera("head");
	}
Label_1154:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_41_bool = true;
	
}


void func_835(float var_46_float, float var_47_float)
{
	
Label_836:
	for(;;) {
		bool var_50_bool;
		func_1087(var_50_bool);
		var_53_bool = !var_50_bool; //@nz
		if(var_53_bool == 0) goto Label_844;
		@Hold();
	}
	
Label_844:
	float var_49_float;
	@rand(var_49_float, 3);
	@Sleep(var_49_float + 3);
	float var_57_float; float var_58_float;
	float var_48_float;
	func_914(var_17_int, var_57_float, var_58_float, var_48_float, var_49_float, var_57_float, var_58_float);
	@sync();
	goto Label_836;
}
EMIT "Return(); Pop(2)";


// @pe
void func_1352(bool var_185_bool)
{
	int var_187_int;
	func_1275(var_187_int, "oobSysGatherer2_1");
	if(var_187_int == 0) {
		var_185_bool = true;
		return 0;
	}
	var_185_bool = false;
}


// @pe
void func_1224(void)
{
	@CameraSwitchToNormal();
}


void func_1228(string var_158_string)
{
	float var_161_float; float var_162_float;
	@lshGetAnimTimes(var_158_string, var_161_float, var_162_float);
	@lshPlayAnimation(var_161_float, var_162_float, false);
}


void func_1235(string var_141_string, bool var_142_bool)
{
	float var_147_float; float var_148_float;
	@lshGetAnimTimes(var_141_string, var_147_float, var_148_float);
	@lshPlayAnimation(var_147_float, var_148_float, var_142_bool);
}


// @pe
void func_1364(bool var_119_bool, object var_120_object)
{
	object var_122_object;
	var_120_object = var_122_object;
	func_1385(var_122_object);
	bool var_121_bool;
	if(var_121_bool != 0) {
		var_119_bool = true;
		return 0;
	}
	var_119_bool = false;
}


// @pe
void func_979(object var_2_object, object var_3_object)
{
	func_1074();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_object = true;
}


void func_1241(object var_35_object)
{
	float var_38_float;
	var_35_object->GetEyesHeight(var_38_float);
	cvector var_39_cvector = [0.0, 0.0, 0.0];
	var_40_float = GetByIndex(var_39_cvector, 1);
	var_38_float = var_40_float;
	SetByIndex(var_39_cvector, 1) = var_40_float;
	@LookAsync(var_35_object, "head", var_39_cvector);
}


void func_860(bool var_5_bool)
{
	var_5_bool = true;
	bool var_22_bool;
	@IsLoaded(var_22_bool);
	bool var_23_bool = false;
	if(!var_22_bool) { //@nz
		bool var_25_bool;
		func_912(var_25_bool);
		if(var_25_bool != 0)
			var_23_bool = true;
	}
	if(var_23_bool != 0) {
		object var_26_object;
		func_1259(var_26_object);
		@RemoveActor(var_26_object);
	}
}


// @pe
void func_1374(bool var_109_bool, object var_110_object)
{
	object var_112_object;
	var_110_object = var_112_object;
	bool var_111_bool;
	func_1280(var_111_bool, var_112_object, "blood");
	if(var_111_bool != 0) {
		var_109_bool = true;
		return 0;
	}
	var_109_bool = false;
}


void func_993(void)
{
	int var_73_int; int var_74_int; bool var_75_bool; float var_76_float; bool var_77_bool;
	@WaitForAnimEnd();
	bool var_78_bool;
	func_1087(var_78_bool);
	if(!var_78_bool) //@nz
		return 14;
	int var_80_int;
	func_1303(var_80_int);
	int var_71_int;
	var_80_int = var_71_int;
	int var_72_int = 0;
	
	for(;;) {
		bool var_93_bool = false;
		if(var_72_int < 5) {
			bool var_96_bool;
			func_1087(var_96_bool);
			if(var_96_bool != 0)
				var_93_bool = true;
		}
		if(var_93_bool != 0) {
			@irand(var_73_int, 3);
			if(var_73_int == 0) {
				if(var_71_int == 0) goto Label_1040;
				@irand(var_74_int, var_71_int);
				string var_102_string; int var_103_int;
				var_74_int = var_103_int;
				func_1296(var_102_string, var_103_int);
				@PlayAnimation("all", var_102_string);
				@WaitForAnimEnd(var_75_bool);
				if(!var_75_bool) { //@nz
				} else {
			} else {
			if(var_73_int == 1) {
				@rand(var_76_float, 4);
				@Sleep((var_76_float + 1), var_77_bool);
				if(!var_77_bool) { //@nz
					goto Label_1069;
				}
			} else if(var_72_int != 0) {
				goto Label_1069;
			}
			}
					bool var_105_bool;
					func_1072(var_105_bool);
					var_106_bool = !var_105_bool; //@nz
					if(var_106_bool == 0) goto Label_1064;
			}
		}
	Label_1069:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1064:
		@ResetAAS();
		var_72_int += 1;
	}
	
}


void func_1252(void)
{
	bool var_21_bool;
	func_1474(var_21_bool);
	if(var_21_bool != 0)
		@lshStopSpeech();
}


void func_1385(bool var_121_bool)
{
	int var_127_int;
	func_1287(var_127_int);
	int var_125_int;
	var_127_int = var_125_int;
	int var_126_int;
	@GetVariable(("Gatherer2_" + var_125_int), var_126_int);
	var_121_bool = var_126_int != 0;
}


void func_1259(object var_24_object)
{
	object var_26_object;
	@self(var_26_object);
	var_26_object = var_24_object;
}
EMIT "Stack[-1] = 0";


void func_236(bool var_0_bool, int var_30_int, object var_31_object)
{
	var_0_bool = var_31_object;
	bool var_41_bool; object var_42_object;
	var_31_object = var_42_object;
	func_1092(var_41_bool, var_42_object, 110.0);
	if(!var_41_bool) { //@nz
		var_30_int = -2;
		return 8;
	}
	object var_37_object;
	@CreateDialog(var_37_object);
	int var_88_int;
	func_1468(var_88_int);
	var_37_object->SetNPCName(var_88_int);
	int var_89_int;
	func_1466(var_89_int);
	var_37_object->SetNPCDescription(var_89_int);
	string var_90_string;
	func_1470(var_90_string);
	var_37_object->SetPhoto(var_90_string);
	string var_91_string;
	func_1472(var_91_string);
	var_37_object->SetPhoto2(var_91_string);
	int var_92_int;
	func_1443(var_92_int);
	var_37_object->SetPlayerName(var_92_int);
	bool var_38_bool;
	@IsOverrideActive(var_38_bool);
	if(var_38_bool != 0) {
		var_30_int = -2;
		return 8;
	}
	@DoDialog(var_37_object);
	object var_101_object; object var_102_object;
	var_31_object = var_101_object;
	var_37_object = var_102_object;
	TaskCall(4);
	func_310(var_103_object, var_104_object, var_105_string, var_106_bool, var_101_object, var_102_object);
	TaskReturn();
	bool var_40_bool;
	var_37_object->IsDialogEnd(var_40_bool);
	
	for(;;) {
		var_199_bool = !var_40_bool; //@nz
		if(var_199_bool == 0) goto Label_299;
		@sync();
		var_37_object->IsDialogEnd(var_40_bool);
	}
	
Label_299:
	object var_200_object;
	var_31_object = var_200_object;
	func_1160();
	@StopDialog(var_37_object);
	var_37_object->GetReturnValue(-1);
	int var_39_int = var_30_int;
}
EMIT "Stack[-4] = 0";


void func_1265(cvector var_68_cvector, cvector var_69_cvector)
{
	float var_72_float = sqrt(var_69_cvector | var_69_cvector);
	if(var_72_float < 0.000001)
		var_68_cvector = [0.0, 0.0, 0.0];
	var_68_cvector = var_69_cvector / var_72_float;
}


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_271_object, object var_272_object)
{
	var_0_bool = var_272_object;
	var_1_object = var_271_object;
	var_3_object = false;
	if(1 != 0) {
		func_172(var_272_object, "Neutral");
		var_0_bool->SetMessage(525391); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(525392, -1, 26760); //@t
		var_0_bool->AddReply(539025, -1, 40968); //@t
		goto Label_142;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x76";
	}
Label_142:
	bool var_293_bool;
	func_1474(var_293_bool);
	if(var_293_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_1228(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_171;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_171:
		return 0;

	}
	
}


void func_1397(void)
{
	@ClearSubContainer(0);
	int var_27_int;
	@irand(var_27_int, 15);
	var_27_int += 5;
	int var_31_int;
	func_1438(var_31_int, "grass_black_tvir");
	bool var_26_bool;
	@AddItem(var_26_bool, var_31_int, 0, var_27_int);
	@irand(var_27_int, 15);
	var_27_int += 5;
	int var_38_int;
	func_1438(var_38_int, "grass_blood_tvir");
	@AddItem(var_26_bool, var_38_int, 0, var_27_int);
	@irand(var_27_int, 15);
	int var_43_int;
	func_1438(var_43_int, "grass_brown_tvir");
	@AddItem(var_26_bool, var_43_int, 0, (var_27_int + 5));
}


void func_888(void)
{
	@StopGroup0();
	@sync();
}


void func_1275(int var_187_int, string var_188_string)
{
	int var_190_int;
	@GetVariable(var_188_string, var_190_int);
	var_190_int = var_187_int;
}


