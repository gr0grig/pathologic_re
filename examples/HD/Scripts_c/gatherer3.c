task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int, bool var_14_bool, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, int var_19_int)
	{
		bool var_20_bool;
		func_1471(var_20_bool);
		if(var_20_bool != 0)
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
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, int var_13_int, int var_14_int, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, int var_20_int)
	{
		if(1 != 0) {
			func_1261();
			if(var_20_int == 19285) {
				object var_25_object = var_1_object;
				func_1329(var_0_bool);
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_bool;
				func_1350();
			}
			if(var_20_int == 19288) {
				object var_48_object = var_1_object;
				func_1356(var_0_bool);
			}
			if(var_20_int == 36243) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_bool;
				func_1344();
			}
			if(var_19_bool == 19277) {
				bool var_59_bool = false;
				bool var_60_bool;
				func_1383(var_60_bool, var_1_object);
				if(!var_60_bool) { //@nz
					bool var_70_bool;
					func_1373(var_70_bool, var_1_object);
					if(!var_70_bool) //@nz
						var_59_bool = true;
				}
				if(var_59_bool != 0) {
					func_248(var_20_int, "Neutral");
					var_0_bool->SetMessage(518164); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(530150, 31544, 31543); //@t
					var_0_bool->AddReply(530158, -1, 31551); //@t
					return 0;
				}
				bool var_107_bool = false;
				bool var_108_bool;
				func_1383(var_108_bool, var_1_object);
				if(var_108_bool != 0) {
					bool var_110_bool;
					func_1373(var_110_bool, var_1_object);
					if(!var_110_bool) //@nz
						var_107_bool = true;
				}
				if(var_107_bool != 0) {
					func_248(var_20_int, "Neutral");
					var_0_bool->SetMessage(518169); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(518170, 19284, 19283); //@t
					return 0;
				}
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(518174); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518175, -1, 19288); //@t
				bool var_123_bool;
				func_1361(var_1_object);
				if(var_123_bool != 0)
					var_0_bool->AddReply(534605, 36244, 36243); //@t
				var_0_bool->AddReply(518179, -1, 19292); //@t
				return 0;
			}
			if(var_19_bool == 36244) {
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(534606); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534607, 36246, 36245); //@t
				var_0_bool->AddReply(534614, -1, 36252); //@t
				return 0;
			}
			if(var_19_bool == 36246) {
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(534608); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534609, -1, 36247); //@t
				var_0_bool->AddReply(534610, 36249, 36248); //@t
				return 0;
			}
			if(var_19_bool == 36249) {
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(534611); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534612, -1, 36250); //@t
				var_0_bool->AddReply(534613, -1, 36251); //@t
				return 0;
			}
			if(var_19_bool == 19284) {
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(518171); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518172, -1, 19285); //@t
				var_0_bool->AddReply(518173, -1, 19286); //@t
				return 0;
			}
			if(var_19_bool == 31544) {
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(530151); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(530152, 31546, 31545); //@t
				var_0_bool->AddReply(530156, -1, 31549); //@t
				return 0;
			}
			if(var_19_bool == 31546) {
				func_248(var_20_int, "Neutral");
				var_0_bool->SetMessage(530153); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(530154, -1, 31547); //@t
				var_0_bool->AddReply(530155, -1, 31548); //@t
				return 0;
			}
			var_3_object = true;
			bool var_197_bool;
			func_1471(var_197_bool);
			if(var_197_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x10f";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, int var_13_int, int var_14_int, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, int var_20_int)
	{
		if(1 != 0) {
			func_1261();
			if(var_19_bool == 26759) {
				func_687(var_20_int, "Neutral");
				var_0_bool->SetMessage(525391); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525392, -1, 26760); //@t
				var_0_bool->AddReply(539025, -1, 40968); //@t
				return 0;
			}
			var_3_object = true;
			bool var_49_bool;
			func_1471(var_49_bool);
			if(var_49_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2c6";
	
	}

}


maintask task_5
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int)
	{
		int var_19_int;
		func_1296(var_19_int);
		var_7_object = var_19_int;
		func_1406();
		func_832(var_18_int, (float)300, (float)100);
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int, object var_19_object)
	{
		int var_20_int; int var_21_int;
		func_966(var_20_int, var_21_int);
		int var_25_int;
		func_1457(var_25_int);
		if(var_25_int == 1) {
			int var_31_int; object var_32_object;
			var_19_object = var_32_object;
			TaskCall(1);
			func_40(var_33_object, var_31_int, var_32_object);
			TaskReturn();
			var_33_object = var_21_int;
		} else {
				int var_262_int;
				func_1457(var_262_int);
				if(!(var_262_int == 2)) goto Label_796;
				int var_265_int; object var_266_object;
				var_19_object = var_266_object;
				TaskCall(3);
				func_555(var_267_object, var_265_int, var_266_object);
				TaskReturn();
				var_267_object = var_21_int;
		}
		for(;;) {
			if(1000 == var_21_int) {
				bool var_222_bool; object var_223_object;
				var_19_object = var_223_object;
				func_1166(var_222_bool, var_223_object, 110.0);
				if(!var_222_bool) //@nz
					return 2;
				object var_253_object;
				var_19_object = var_253_object;
				TaskCall(0);
				func_0(var_253_object);
				TaskReturn();
				object var_260_object;
				var_19_object = var_260_object;
				func_1214();
			}
			return 2;

		}
	
	Label_796:
	}

	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int)
	{
		int var_19_int;
		func_1296(var_19_int);
		if(var_7_object != var_19_int) {
			func_1406();
			int var_43_int;
			func_1296(var_43_int);
			var_7_object = var_43_int;
		}
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int, string var_19_string)
	{
		if(var_19_string == "cleanup")
			func_850(var_19_string);
	}

	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int)
	{
		if(var_6_object != 0)
			func_966(var_17_bool, var_18_int);
		bool var_23_bool = false;
		if(var_5_bool != 0) {
			bool var_25_bool;
			func_899(var_25_bool);
			if(var_25_bool != 0)
				var_23_bool = true;
		}
		if(var_23_bool != 0) {
			object var_26_object;
			func_1268(var_26_object);
			@RemoveActor(var_26_object);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int, int var_19_int)
	{
		if(var_19_int == 10) {
			bool var_22_bool;
			func_928(var_17_bool, var_18_int, var_19_int, var_22_bool);
			if(var_22_bool != 0) {
				if(!var_2_object) { //@nz
					func_1250(var_4_string);
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
		bool var_255_bool;
		func_1471(var_255_bool);
		if(var_255_bool == 0) goto Label_15;
		func_1219("Neutral");
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


void func_899(bool var_25_bool)
{
	var_25_bool = true;
}


void func_1284(int var_199_int, string var_200_string)
{
	int var_202_int;
	@GetVariable(var_200_string, var_202_int);
	var_202_int = var_199_int;
}


// @pe
void func_901(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, float var_51_float, float var_52_float)
{
	bool var_53_bool;
	func_1074(var_53_bool);
	if(!var_53_bool) //@nz
		return 0;
	@FindActor(var_4_string, "player");
	var_2_object = false;
	var_0_bool = var_51_float;
	var_1_object = var_52_float;
	@SetTimer(10, 1.0);
	func_980();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1289(bool var_113_bool, object var_114_object, string var_115_string)
{
	int var_118_int;
	@GetInvItemByName(var_118_int, var_115_string);
	bool var_119_bool;
	var_114_object->HasItem(var_118_int, var_119_bool);
	var_119_bool = var_113_bool;
}


void func_1166(bool var_222_bool, object var_223_object, float var_224_float)
{
	cvector var_234_cvector;
	var_223_object->GetPosition(var_234_cvector);
	float var_233_float;
	var_223_object->GetEyesHeight(var_233_float);
	var_241_float = GetByIndex(var_234_cvector, 1);
	SetByIndex(var_234_cvector, 1) = (var_241_float + var_233_float);
	cvector var_235_cvector;
	@GetPosition(var_235_cvector);
	@GetEyesHeight(var_233_float);
	var_242_float = GetByIndex(var_235_cvector, 1);
	SetByIndex(var_235_cvector, 1) = (var_242_float + var_233_float);
	cvector var_236_cvector = var_234_cvector - var_235_cvector;
	var_243_float = GetByIndex(var_236_cvector, 1);
	SetByIndex(var_236_cvector, 1) = (float)0;
	var_245_float = sqrt(var_236_cvector | var_236_cvector);
	var_236_cvector /= var_245_float;
	cvector var_237_cvector = -var_236_cvector;
	cvector var_238_cvector = (var_236_cvector * var_224_float) - [0.0, 10.0, 0.0];
	bool var_240_bool;
	@IsOverrideActive(var_240_bool);
	if(var_240_bool != 0)
		var_222_bool = false;
	@StopWorld();
	@CameraTransit((var_235_cvector + var_238_cvector), var_237_cvector, true);
	var_250_float = GetByIndex(var_238_cvector, 0);
	var_251_float = GetByIndex(var_238_cvector, 2);
	@Rotate(var_250_float, var_251_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_222_bool = true;
}


void func_1296(int var_19_int)
{
	float var_21_float;
	@GetGameTime(var_21_float);
	var_19_int = 1 + (var_21_float / 24);
}


void func_1305(string var_82_string, int var_83_int)
{
	string var_85_string = "idle";
	if(var_83_int != 0)
		var_85_string += var_83_int;
	var_85_string = var_82_string;
}


void func_1435(int var_32_int, string var_33_string)
{
	int var_35_int;
	@GetInvItemByName(var_35_int, var_33_string);
	var_35_int = var_32_int;
}


void func_1440(int var_94_int)
{
	int var_96_int;
	@GetVariable("branch", var_96_int);
	if(var_96_int == 0) {
		var_94_int = 1;
		return 2;
	EMIT "GOTO 0x5af";
	}
	if(var_96_int == 1) {
		var_94_int = 2;
		return 2;
	}
	var_94_int = 3;
}


void func_928(bool var_0_bool, object var_1_object, string var_4_string, bool var_22_bool)
{
	if(var_4_string == null)
		var_22_bool = false;
	float var_26_float;
	func_1066(var_26_float, var_4_string);
	float var_24_float = sqrt(var_26_float);
	if(var_2_object != 0)
		var_24_float -= var_1_object;
	var_22_bool = var_24_float < var_0_bool;
}


void func_1312(int var_76_int)
{
	int var_79_int; bool var_80_bool;
	var_79_int = 0;
	
	for(;;) {
		string var_82_string; int var_83_int;
		var_79_int = var_83_int;
		func_1305(var_82_string, var_83_int);
		@HasAnimation(var_80_bool, "all", var_82_string);
		if(!var_80_bool) //@nz
			break;
		var_79_int += 1;
	}
	var_79_int = var_76_int;
}


void func_1059(bool var_101_bool)
{
	var_101_bool = true;
}


void func_1061(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_40(bool var_0_bool, int var_31_int, object var_32_object)
{
	var_0_bool = var_32_object;
	bool var_42_bool; object var_43_object;
	var_32_object = var_43_object;
	func_1079(var_42_bool, var_43_object, 110.0);
	if(!var_42_bool) { //@nz
		var_31_int = -2;
		return 8;
	}
	object var_38_object;
	@CreateDialog(var_38_object);
	int var_90_int;
	func_1465(var_90_int);
	var_38_object->SetNPCName(var_90_int);
	int var_91_int;
	func_1463(var_91_int);
	var_38_object->SetNPCDescription(var_91_int);
	string var_92_string;
	func_1467(var_92_string);
	var_38_object->SetPhoto(var_92_string);
	string var_93_string;
	func_1469(var_93_string);
	var_38_object->SetPhoto2(var_93_string);
	int var_94_int;
	func_1440(var_94_int);
	var_38_object->SetPlayerName(var_94_int);
	bool var_39_bool;
	@IsOverrideActive(var_39_bool);
	if(var_39_bool != 0) {
		var_31_int = -2;
		return 8;
	}
	@DoDialog(var_38_object);
	object var_103_object; object var_104_object;
	var_32_object = var_103_object;
	var_38_object = var_104_object;
	TaskCall(2);
	func_114(var_105_object, var_106_object, var_107_string, var_108_bool, var_103_object, var_104_object);
	TaskReturn();
	bool var_41_bool;
	var_38_object->IsDialogEnd(var_41_bool);
	
	for(;;) {
		var_211_bool = !var_41_bool; //@nz
		if(var_211_bool == 0) goto Label_103;
		@sync();
		var_38_object->IsDialogEnd(var_41_bool);
	}
	
Label_103:
	object var_212_object;
	var_32_object = var_212_object;
	func_1148();
	@StopDialog(var_38_object);
	var_38_object->GetReturnValue(-1);
	int var_40_int = var_31_int;
}
EMIT "Stack[-4] = 0";


void func_1066(float var_26_float, object var_27_object)
{
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	var_27_object->GetPosition(var_32_cvector);
	var_26_float = (var_32_cvector - var_31_cvector) | (var_32_cvector - var_31_cvector);
}


void func_555(bool var_0_bool, int var_265_int, object var_266_object)
{
	var_0_bool = var_266_object;
	bool var_276_bool; object var_277_object;
	var_266_object = var_277_object;
	func_1079(var_276_bool, var_277_object, 110.0);
	if(!var_276_bool) { //@nz
		var_265_int = -2;
		return 8;
	}
	object var_272_object;
	@CreateDialog(var_272_object);
	int var_280_int;
	func_1465(var_280_int);
	var_272_object->SetNPCName(var_280_int);
	int var_281_int;
	func_1463(var_281_int);
	var_272_object->SetNPCDescription(var_281_int);
	string var_282_string;
	func_1467(var_282_string);
	var_272_object->SetPhoto(var_282_string);
	string var_283_string;
	func_1469(var_283_string);
	var_272_object->SetPhoto2(var_283_string);
	int var_284_int;
	func_1440(var_284_int);
	var_272_object->SetPlayerName(var_284_int);
	bool var_273_bool;
	@IsOverrideActive(var_273_bool);
	if(var_273_bool != 0) {
		var_265_int = -2;
		return 8;
	}
	@DoDialog(var_272_object);
	object var_286_object; object var_287_object;
	var_266_object = var_286_object;
	var_272_object = var_287_object;
	TaskCall(4);
	func_629(var_288_object, var_289_object, var_290_string, var_291_bool, var_286_object, var_287_object);
	TaskReturn();
	bool var_275_bool;
	var_272_object->IsDialogEnd(var_275_bool);
	
	for(;;) {
		var_316_bool = !var_275_bool; //@nz
		if(var_316_bool == 0) goto Label_618;
		@sync();
		var_272_object->IsDialogEnd(var_275_bool);
	}
	
Label_618:
	object var_317_object;
	var_266_object = var_317_object;
	func_1148();
	@StopDialog(var_272_object);
	var_272_object->GetReturnValue(-1);
	int var_274_int = var_265_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_687(object var_2_object, string var_293_string)
{
	bool var_294_bool;
	func_1471(var_294_bool);
	if(!var_294_bool) //@nz
		return 0;
	if(var_293_string == var_2_object)
		return 0;
	string var_297_string; bool var_298_bool;
	var_293_string = var_297_string;
	if(var_293_string == "")
		var_298_bool = false;
	else
		var_298_bool = true;
	func_1235(var_297_string, var_298_bool);
	var_2_object = var_293_string;
	
}


void func_1329(object var_25_object)
{
	int var_31_int;
	func_1296(var_31_int);
	int var_29_int;
	var_31_int = var_29_int;
	@SetVariable(("Gatherer2_" + var_29_int), 1);
	int var_30_int;
	var_25_object->RemoveItemByType(var_30_int, "blood", 1);
}


void func_1457(int var_25_int)
{
	int var_27_int;
	@GetVariable("branch", var_27_int);
	var_27_int = var_25_int;
}


void func_1074(bool var_53_bool)
{
	bool var_55_bool;
	@IsLoaded(var_55_bool);
	var_55_bool = var_53_bool;
}


void func_1079(bool var_42_bool, object var_43_object, float var_44_float)
{
	cvector var_55_cvector; bool var_62_bool;
	var_43_object->GetPosition(var_55_cvector);
	float var_54_float;
	var_43_object->GetEyesHeight(var_54_float);
	var_63_float = GetByIndex(var_55_cvector, 1);
	SetByIndex(var_55_cvector, 1) = (var_63_float + var_54_float);
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	@GetEyesHeight(var_54_float);
	var_64_float = GetByIndex(var_56_cvector, 1);
	SetByIndex(var_56_cvector, 1) = (var_64_float + var_54_float);
	cvector var_57_cvector = var_55_cvector - var_56_cvector;
	var_65_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (float)0;
	var_67_float = sqrt(var_57_cvector | var_57_cvector);
	var_57_cvector /= var_67_float;
	cvector var_58_cvector = -var_57_cvector;
	cvector var_69_cvector;
	func_1274(var_69_cvector, (var_58_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_59_cvector = ((var_57_cvector * var_44_float) + (var_69_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_61_bool;
	@IsOverrideActive(var_61_bool);
	if(var_61_bool != 0)
		var_42_bool = false;
	@StopWorld();
	@CameraTransit((var_56_cvector + var_59_cvector), var_58_cvector, true);
	var_83_float = GetByIndex(var_59_cvector, 0);
	var_84_float = GetByIndex(var_59_cvector, 2);
	@Rotate(var_83_float, var_84_float);
	bool var_85_bool;
	func_1471(var_85_bool);
	if(var_85_bool != 0) {
	} else {
		@HasAnimationTrack(var_62_bool, "head");
		if(var_62_bool == 0) goto Label_1142;
		@LookAsyncCamera("head");
	}
Label_1142:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_42_bool = true;
	
}


void func_1463(int var_91_int)
{
	var_91_int = 521048;
}


void func_1465(int var_90_int)
{
	var_90_int = 521047;
}


void func_1467(string var_92_string)
{
	var_92_string = "ui/NPC_Morlok.png";
}


void func_1469(string var_93_string)
{
	var_93_string = "ui/NPC_Morlok_b.png";
}


// @pe
void func_1214(void)
{
	@CameraSwitchToNormal(true);
}


void func_1471(bool var_85_bool)
{
	var_85_bool = false;
}


// @pe
void func_1344(void)
{
	@SetVariable("oobSysGatherer2_1", 1);
}


void func_832(object var_6_object, float var_42_float, float var_43_float)
{
	float var_44_float; bool var_45_bool; float var_46_float; bool var_47_bool;
	var_6_object = false;
	
	for(;;) {
		@rand(var_46_float, 3);
		@Sleep((var_46_float + 3), var_47_bool);
		var_6_object = true;
		float var_51_float; float var_52_float;
		var_42_float = var_51_float;
		func_901(var_52_float, var_44_float, var_45_bool, var_46_float, var_47_bool, var_51_float, var_52_float);
		var_6_object = false;
	}
}
EMIT "Return(); Pop(4)";


void func_1219(string var_165_string)
{
	bool var_169_bool; float var_170_float; float var_171_float;
	@lshHasAnimation(var_169_bool, var_165_string);
	if(var_169_bool != 0) {
		@lshGetAnimTimes(var_165_string, var_170_float, var_171_float);
		@lshPlayAnimation(var_170_float, var_171_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_165_string);
	}
	
}


// @pe
void func_1350(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_966(object var_2_object, object var_3_object)
{
	func_1061();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_object = true;
}


// @pe
void func_1356(object var_49_object)
{
	var_49_object->SetReturnValue(1000);
}


// @pe
void func_1361(bool var_197_bool)
{
	int var_199_int;
	func_1284(var_199_int, "oobSysGatherer2_1");
	if(var_199_int == 0) {
		var_197_bool = true;
		return 0;
	}
	var_197_bool = false;
}


void func_850(bool var_5_bool)
{
	var_5_bool = true;
	bool var_22_bool = false;
	bool var_23_bool;
	func_1074(var_23_bool);
	if(!var_23_bool) { //@nz
		bool var_27_bool;
		func_899(var_27_bool);
		if(var_27_bool != 0)
			var_22_bool = true;
	}
	if(var_22_bool != 0) {
		object var_28_object;
		func_1268(var_28_object);
		@RemoveActor(var_28_object);
	}
}


void func_1235(string var_143_string, bool var_144_bool)
{
	bool var_150_bool; float var_151_float; float var_152_float;
	@lshHasAnimation(var_150_bool, var_143_string);
	if(var_150_bool != 0) {
		@lshGetAnimTimes(var_143_string, var_151_float, var_152_float);
		@lshPlayAnimation(var_151_float, var_152_float, var_144_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_143_string);
	}
	
}


void func_980(void)
{
	int var_69_int; int var_70_int; bool var_71_bool; float var_72_float; bool var_73_bool;
	@WaitForAnimEnd();
	bool var_74_bool;
	func_1074(var_74_bool);
	if(!var_74_bool) //@nz
		return 14;
	int var_76_int;
	func_1312(var_76_int);
	int var_67_int;
	var_76_int = var_67_int;
	int var_68_int = 0;
	
	for(;;) {
		bool var_89_bool = false;
		if(var_68_int < 5) {
			bool var_92_bool;
			func_1074(var_92_bool);
			if(var_92_bool != 0)
				var_89_bool = true;
		}
		if(var_89_bool != 0) {
			@irand(var_69_int, 3);
			if(var_69_int == 0) {
				if(var_67_int == 0) goto Label_1027;
				@irand(var_70_int, var_67_int);
				string var_98_string; int var_99_int;
				var_70_int = var_99_int;
				func_1305(var_98_string, var_99_int);
				@PlayAnimation("all", var_98_string);
				@WaitForAnimEnd(var_71_bool);
				if(!var_71_bool) { //@nz
				} else {
			} else {
			if(var_69_int == 1) {
				@rand(var_72_float, 4);
				@Sleep((var_72_float + 1), var_73_bool);
				if(!var_73_bool) { //@nz
					goto Label_1056;
				}
			} else if(var_68_int != 0) {
				goto Label_1056;
			}
			}
					bool var_101_bool;
					func_1059(var_101_bool);
					var_102_bool = !var_101_bool; //@nz
					if(var_102_bool == 0) goto Label_1051;
			}
		}
	Label_1056:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1051:
		@ResetAAS();
		var_68_int += 1;
	}
	
}


// @pe
void func_1373(bool var_121_bool, object var_122_object)
{
	object var_124_object;
	var_122_object = var_124_object;
	func_1394(var_124_object);
	bool var_123_bool;
	if(var_123_bool != 0) {
		var_121_bool = true;
		return 0;
	}
	var_121_bool = false;
}


void func_1250(object var_36_object)
{
	float var_39_float;
	var_36_object->GetEyesHeight(var_39_float);
	cvector var_40_cvector = [0.0, 0.0, 0.0];
	var_41_float = GetByIndex(var_40_cvector, 1);
	var_39_float = var_41_float;
	SetByIndex(var_40_cvector, 1) = var_41_float;
	@LookAsync(var_36_object, "head", var_40_cvector);
}


// @pe
void func_1383(bool var_111_bool, object var_112_object)
{
	object var_114_object;
	var_112_object = var_114_object;
	bool var_113_bool;
	func_1289(var_113_bool, var_114_object, "blood");
	if(var_113_bool != 0) {
		var_111_bool = true;
		return 0;
	}
	var_111_bool = false;
}


void func_1261(void)
{
	bool var_22_bool;
	func_1471(var_22_bool);
	if(var_22_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_103_object, object var_104_object)
{
	var_0_bool = var_104_object;
	var_1_object = var_103_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_110_bool = false;
		bool var_111_bool;
		func_1383(var_111_bool, var_1_object);
		if(!var_111_bool) { //@nz
			bool var_121_bool;
			func_1373(var_121_bool, var_1_object);
			if(!var_121_bool) //@nz
				var_110_bool = true;
		}
		if(var_110_bool != 0) {
			func_248(var_104_object, "Neutral");
			var_0_bool->SetMessage(518164); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(530150, 31544, 31543); //@t
			var_0_bool->AddReply(530158, -1, 31551); //@t
		} else {
					bool var_181_bool = false;
					bool var_182_bool;
					func_1383(var_182_bool, var_1_object);
					if(var_182_bool != 0) {
						bool var_184_bool;
						func_1373(var_184_bool, var_1_object);
						if(!var_184_bool) //@nz
							var_181_bool = true;
					}
					if(var_181_bool == 0) goto Label_186;
					func_248(var_104_object, "Neutral");
					var_0_bool->SetMessage(518169); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(518170, 19284, 19283); //@t
		}
	}
Label_218:
	for(;;) {
		bool var_163_bool;
		func_1471(var_163_bool);
		if(var_163_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1219(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_247;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_247:
			return 0;

		}

	}
	
Label_186:
	func_248(var_104_object, "Neutral");
	var_0_bool->SetMessage(518174); //@t
	var_0_bool->ClearReplies(); //@t
	var_0_bool->AddReply(518175, -1, 19288); //@t
	bool var_197_bool;
	func_1361(var_1_object);
	if(var_197_bool != 0)
		var_0_bool->AddReply(534605, 36244, 36243); //@t
	var_0_bool->AddReply(518179, -1, 19292); //@t
	goto Label_218;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x76";


void func_1394(bool var_123_bool)
{
	int var_129_int;
	func_1296(var_129_int);
	int var_127_int;
	var_129_int = var_127_int;
	int var_128_int;
	@GetVariable(("Gatherer2_" + var_127_int), var_128_int);
	var_123_bool = var_128_int != 0;
}


void func_1268(object var_26_object)
{
	object var_28_object;
	@self(var_28_object);
	var_28_object = var_26_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_629(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_286_object, object var_287_object)
{
	var_0_bool = var_287_object;
	var_1_object = var_286_object;
	var_3_object = false;
	if(1 != 0) {
		func_687(var_287_object, "Neutral");
		var_0_bool->SetMessage(525391); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(525392, -1, 26760); //@t
		var_0_bool->AddReply(539025, -1, 40968); //@t
		goto Label_657;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x279";
	}
Label_657:
	bool var_308_bool;
	func_1471(var_308_bool);
	if(var_308_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_1219(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_686;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_686:
		return 0;

	}
	
}


// @pe
void func_248(object var_2_object, string var_139_string)
{
	bool var_140_bool;
	func_1471(var_140_bool);
	if(!var_140_bool) //@nz
		return 0;
	if(var_139_string == var_2_object)
		return 0;
	string var_143_string; bool var_144_bool;
	var_139_string = var_143_string;
	if(var_139_string == "")
		var_144_bool = false;
	else
		var_144_bool = true;
	func_1235(var_143_string, var_144_bool);
	var_2_object = var_139_string;
	
}


void func_1274(cvector var_69_cvector, cvector var_70_cvector)
{
	float var_73_float = sqrt(var_70_cvector | var_70_cvector);
	if(var_73_float < 0.000001)
		var_69_cvector = [0.0, 0.0, 0.0];
	var_69_cvector = var_70_cvector / var_73_float;
}


void func_1148(void)
{
	bool var_214_bool;
	@CameraSwitchToNormal(true);
	bool var_216_bool;
	func_1471(var_216_bool);
	if(var_216_bool != 0) {
	} else {
		@HasAnimationTrack(var_214_bool, "head");
		if(var_214_bool == 0) goto Label_1165;
		@UnlookAsync("head");
	}
Label_1165:
	
}


void func_1406(void)
{
	@ClearSubContainer(0);
	int var_28_int;
	@irand(var_28_int, 10);
	var_28_int += 3;
	int var_32_int;
	func_1435(var_32_int, "grass_savyur");
	bool var_27_bool;
	@AddItem(var_27_bool, var_32_int, 0, var_28_int);
	@irand(var_28_int, 10);
	int var_39_int;
	func_1435(var_39_int, "grass_white_plet");
	@AddItem(var_27_bool, var_39_int, 0, (var_28_int + 3));
}


