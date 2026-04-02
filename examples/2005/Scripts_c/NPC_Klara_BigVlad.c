// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1539();
			if(var_22_cvector == 26616) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1621();
				object var_70_object = var_1_object;
				func_1644(var_0_object);
			}
			if(var_21_bool == 26613) {
				func_162(var_22_cvector, "Neutral");
				var_0_object->SetMessage(525245); //@t
				var_0_object->ClearReplies(); //@t
				bool var_111_bool;
				func_1660(var_1_object);
				if(var_111_bool != 0)
					var_0_object->AddReply(525246, 30599, 26614); //@t
				var_0_object->AddReply(525249, -1, 26617); //@t
				var_0_object->AddReply(529151, -1, 30598); //@t
				return 0;
			}
			if(var_21_bool == 30599) {
				func_162(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529152); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529153, 30601, 30600); //@t
				var_0_object->AddReply(529155, 30601, 30602); //@t
				return 0;
			}
			if(var_21_bool == 30601) {
				func_162(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529154); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529156, 26615, 30604); //@t
				var_0_object->AddReply(529157, 26615, 30605); //@t
				return 0;
			}
			if(var_21_bool == 26615) {
				func_162(var_22_cvector, "Neutral");
				var_0_object->SetMessage(525247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525248, -1, 26616); //@t
				return 0;
			}
			var_3_string = true;
			bool var_155_bool;
			func_1619(var_155_bool);
			if(var_155_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb9";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1539();
			if(var_21_bool == 26824) {
				func_447(var_22_cvector, "Neutral");
				var_0_object->SetMessage(525468); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525469, 30746, 26825); //@t
				return 0;
			}
			if(var_21_bool == 30746) {
				func_447(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529292); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529293, -1, 30747); //@t
				var_0_object->AddReply(529294, -1, 30748); //@t
				return 0;
			}
			var_3_string = true;
			bool var_53_bool;
			func_1619(var_53_bool);
			if(var_53_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1d6";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1539();
			if(var_21_bool == 36960) {
				func_673(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_21_bool == 36962) {
				func_673(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_21_bool == 36964) {
				func_673(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_69_bool;
			func_1619(var_69_bool);
			if(var_69_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2b8";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1539();
			if(var_21_int == 42554) {
				func_927(var_22_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_1619(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3b6";
	
	}

}


maintask task_9
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_998(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1069();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1283(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1038(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1018(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_1546(var_67_object);
					var_67_object = var_66_object;
					func_1431(var_65_bool, var_66_object);
				}
			} else {
				func_1033(var_21_int);
				func_1060();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1251();
		func_1069();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
		{
		@StopGroup0();
		func_1069();
		func_1511("Neutral");
		func_1060();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1060();
		else
			func_1511("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1251();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1274(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_1793(var_39_object);
			func_1511("Neutral");
			func_1069();
			func_1060();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_26_bool;
	func_1283(var_26_bool);
	if(!var_26_bool) goto Label_0; //@nz
}


// @pe
void func_1793(object var_39_object)
{
	var_40_bool = GlobalVars[1];
	if(!var_40_bool) { //@nz
		int var_42_int; object var_43_object;
		var_39_object = var_43_object;
		TaskCall(3);
		func_313(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_252_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_253_bool;
	func_1581(var_253_bool, 2);
	if(var_253_bool != 0) {
		int var_256_int; object var_257_object;
		var_39_object = var_257_object;
		TaskCall(1);
		func_13(var_258_object, var_256_int, var_257_object);
		TaskReturn();
		return 0;
	}
	bool var_323_bool;
	func_1581(var_323_bool, 12);
	if(var_323_bool != 0) {
		int var_325_int; object var_326_object;
		var_39_object = var_326_object;
		TaskCall(5);
		func_529(var_327_object, var_325_int, var_326_object);
		TaskReturn();
		return 0;
	}
	int var_384_int; object var_385_object;
	var_39_object = var_385_object;
	TaskCall(7);
	func_788(var_386_object, var_384_int, var_385_object);
	TaskReturn();
}


void func_1283(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


void func_1539(void)
{
	bool var_24_bool;
	func_1619(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_1288(bool var_148_bool, object var_149_object, float var_150_float)
{
	cvector var_161_cvector; bool var_168_bool;
	var_149_object->GetPosition(var_161_cvector);
	float var_160_float;
	var_149_object->GetEyesHeight(var_160_float);
	var_169_float = GetByIndex(var_161_cvector, 1);
	SetByIndex(var_161_cvector, 1) = (var_169_float + var_160_float);
	cvector var_162_cvector;
	@GetPosition(var_162_cvector);
	@GetEyesHeight(var_160_float);
	var_170_float = GetByIndex(var_162_cvector, 1);
	SetByIndex(var_162_cvector, 1) = (var_170_float + var_160_float);
	cvector var_163_cvector = var_161_cvector - var_162_cvector;
	var_171_float = GetByIndex(var_163_cvector, 1);
	SetByIndex(var_163_cvector, 1) = (float)0;
	var_173_float = sqrt(var_163_cvector | var_163_cvector);
	var_163_cvector /= var_173_float;
	cvector var_164_cvector = -var_163_cvector;
	cvector var_175_cvector;
	func_1552(var_175_cvector, (var_164_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_165_cvector = ((var_163_cvector * var_150_float) + (var_175_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_167_bool;
	@IsOverrideActive(var_167_bool);
	if(var_167_bool != 0)
		var_148_bool = false;
	@StopWorld();
	@CameraTransit((var_162_cvector + var_165_cvector), var_164_cvector);
	var_188_float = GetByIndex(var_165_cvector, 0);
	var_189_float = GetByIndex(var_165_cvector, 2);
	@Rotate(var_188_float, var_189_float);
	bool var_190_bool;
	func_1619(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		@HasAnimationTrack(var_168_bool, "head");
		if(var_168_bool == 0) goto Label_1350;
		@LookAsyncCamera("head");
	}
Label_1350:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_148_bool = true;
	
}


void func_1033(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_1546(object var_55_object)
{
	object var_57_object;
	@self(var_57_object);
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_394(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_208_object, object var_209_object)
{
	var_0_object = var_209_object;
	var_1_object = var_208_object;
	var_3_string = false;
	if(1 != 0) {
		func_447(var_209_object, "Neutral");
		var_0_object->SetMessage(525468); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525469, 30746, 26825); //@t
		goto Label_417;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x18e";
	}
Label_417:
	bool var_231_bool;
	func_1619(var_231_bool);
	if(var_231_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1511(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_446;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_446:
		return 0;

	}
	
}


void func_1672(void)
{
	object var_48_object;
	@CreateDiaryEntry(var_48_object, 464, 1, 527780);
	bool var_52_bool; object var_53_object;
	var_48_object = var_53_object;
	func_1698(var_52_bool, var_53_object, 461);
}
EMIT "Stack[-1] = 0";


void func_13(object var_0_object, int var_256_int, object var_257_object)
{
	var_0_object = var_257_object;
	bool var_267_bool; object var_268_object;
	object var_269_object;
	func_1546(var_269_object);
	var_269_object = var_268_object;
	func_1373(var_267_bool, var_268_object);
	bool var_270_bool; object var_271_object;
	var_257_object = var_271_object;
	func_1288(var_270_bool, var_271_object, 70.0);
	if(!var_270_bool) { //@nz
		var_256_int = -2;
		return 8;
	}
	object var_263_object;
	@CreateDialog(var_263_object);
	int var_274_int;
	func_1613(var_274_int);
	var_263_object->SetNPCName(var_274_int);
	int var_275_int;
	func_1611(var_275_int);
	var_263_object->SetNPCDescription(var_275_int);
	string var_276_string;
	func_1615(var_276_string);
	var_263_object->SetPhoto(var_276_string);
	string var_277_string;
	func_1617(var_277_string);
	var_263_object->SetPhoto2(var_277_string);
	int var_278_int;
	func_1776(var_278_int);
	var_263_object->SetPlayerName(var_278_int);
	bool var_264_bool;
	@IsOverrideActive(var_264_bool);
	if(var_264_bool != 0) {
		var_256_int = -2;
		return 8;
	}
	@DoDialog(var_263_object);
	object var_280_object; object var_281_object;
	var_257_object = var_280_object;
	var_263_object = var_281_object;
	TaskCall(2);
	func_94(var_282_object, var_283_object, var_284_string, var_285_bool, var_280_object, var_281_object);
	TaskReturn();
	bool var_266_bool;
	var_263_object->IsDialogEnd(var_266_bool);
	
	for(;;) {
		var_321_bool = !var_266_bool; //@nz
		if(var_321_bool == 0) goto Label_83;
		@sync();
		var_263_object->IsDialogEnd(var_266_bool);
	}
	
Label_83:
	object var_322_object;
	var_257_object = var_322_object;
	func_1356();
	@StopDialog(var_263_object);
	var_263_object->GetReturnValue(-1);
	int var_265_int = var_256_int;
}
EMIT "Stack[-4] = 0";


void func_1038(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1256(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


void func_1274(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1264(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1552(cvector var_175_cvector, cvector var_176_cvector)
{
	float var_179_float = sqrt(var_176_cvector | var_176_cvector);
	if(var_179_float < 0.000001)
		var_175_cvector = [0.0, 0.0, 0.0];
	var_175_cvector = var_176_cvector / var_179_float;
}


void func_529(object var_0_object, int var_325_int, object var_326_object)
{
	var_0_object = var_326_object;
	bool var_336_bool; object var_337_object;
	object var_338_object;
	func_1546(var_338_object);
	var_338_object = var_337_object;
	func_1373(var_336_bool, var_337_object);
	bool var_339_bool; object var_340_object;
	var_326_object = var_340_object;
	func_1288(var_339_bool, var_340_object, 70.0);
	if(!var_339_bool) { //@nz
		var_325_int = -2;
		return 8;
	}
	object var_332_object;
	@CreateDialog(var_332_object);
	int var_343_int;
	func_1613(var_343_int);
	var_332_object->SetNPCName(var_343_int);
	int var_344_int;
	func_1611(var_344_int);
	var_332_object->SetNPCDescription(var_344_int);
	string var_345_string;
	func_1615(var_345_string);
	var_332_object->SetPhoto(var_345_string);
	string var_346_string;
	func_1617(var_346_string);
	var_332_object->SetPhoto2(var_346_string);
	int var_347_int;
	func_1776(var_347_int);
	var_332_object->SetPlayerName(var_347_int);
	bool var_333_bool;
	@IsOverrideActive(var_333_bool);
	if(var_333_bool != 0) {
		var_325_int = -2;
		return 8;
	}
	@DoDialog(var_332_object);
	object var_349_object; object var_350_object;
	var_326_object = var_349_object;
	var_332_object = var_350_object;
	TaskCall(6);
	func_610(var_351_object, var_352_object, var_353_string, var_354_bool, var_349_object, var_350_object);
	TaskReturn();
	bool var_335_bool;
	var_332_object->IsDialogEnd(var_335_bool);
	
	for(;;) {
		var_382_bool = !var_335_bool; //@nz
		if(var_382_bool == 0) goto Label_599;
		@sync();
		var_332_object->IsDialogEnd(var_335_bool);
	}
	
Label_599:
	object var_383_object;
	var_326_object = var_383_object;
	func_1356();
	@StopDialog(var_332_object);
	var_332_object->GetReturnValue(-1);
	int var_334_int = var_325_int;
}
EMIT "Stack[-4] = 0";


void func_788(object var_0_object, int var_384_int, object var_385_object)
{
	var_0_object = var_385_object;
	bool var_395_bool; object var_396_object;
	object var_397_object;
	func_1546(var_397_object);
	var_397_object = var_396_object;
	func_1373(var_395_bool, var_396_object);
	bool var_398_bool; object var_399_object;
	var_385_object = var_399_object;
	func_1288(var_398_bool, var_399_object, 70.0);
	if(!var_398_bool) { //@nz
		var_384_int = -2;
		return 8;
	}
	object var_391_object;
	@CreateDialog(var_391_object);
	int var_402_int;
	func_1613(var_402_int);
	var_391_object->SetNPCName(var_402_int);
	int var_403_int;
	func_1611(var_403_int);
	var_391_object->SetNPCDescription(var_403_int);
	string var_404_string;
	func_1615(var_404_string);
	var_391_object->SetPhoto(var_404_string);
	string var_405_string;
	func_1617(var_405_string);
	var_391_object->SetPhoto2(var_405_string);
	int var_406_int;
	func_1776(var_406_int);
	var_391_object->SetPlayerName(var_406_int);
	bool var_392_bool;
	@IsOverrideActive(var_392_bool);
	if(var_392_bool != 0) {
		var_384_int = -2;
		return 8;
	}
	@DoDialog(var_391_object);
	object var_408_object; object var_409_object;
	var_385_object = var_408_object;
	var_391_object = var_409_object;
	TaskCall(8);
	func_869(var_410_object, var_411_object, var_412_string, var_413_bool, var_408_object, var_409_object);
	TaskReturn();
	bool var_394_bool;
	var_391_object->IsDialogEnd(var_394_bool);
	
	for(;;) {
		var_438_bool = !var_394_bool; //@nz
		if(var_438_bool == 0) goto Label_858;
		@sync();
		var_391_object->IsDialogEnd(var_394_bool);
	}
	
Label_858:
	object var_439_object;
	var_385_object = var_439_object;
	func_1356();
	@StopDialog(var_391_object);
	var_391_object->GetReturnValue(-1);
	int var_393_int = var_384_int;
}
EMIT "Stack[-4] = 0";


void func_1685(object var_61_object)
{
	object var_63_object;
	@GetDiaryRoot(var_63_object);
	if(!var_63_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_61_object = false;
	}
	var_63_object = var_61_object;
}
EMIT "Stack[-1] = 0";


void func_1431(bool var_64_bool, object var_65_object)
{
	string var_71_string; bool var_73_bool; int var_74_int; string var_75_string;
	var_71_string = "c";
	int var_72_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_65_object->HasProperty((var_71_string + (var_72_int + 1)), var_73_bool);
			if(!var_73_bool) { //@nz
			} else {
				var_72_int += 1;
			}
		}
		if(!var_72_int) { //@nz
			var_64_bool = false;
			return 10;
		}
		var_74_int = 0;
		if(var_72_int > 1)
			@irand(var_74_int, var_72_int);
		var_65_object->GetProperty((var_71_string + (var_74_int + 1)), var_75_string);
		bool var_87_bool; string var_88_string;
		var_75_string = var_88_string;
		func_1524(var_87_bool, var_88_string);
		var_87_bool = var_64_bool;
		return 10;

	}
}


void func_1562(int var_298_int, string var_299_string)
{
	int var_301_int;
	@GetVariable(var_299_string, var_301_int);
	var_301_int = var_298_int;
}


void func_1180(void)
{
	bool var_48_bool; int var_49_int; int var_50_int; bool var_51_bool;
	@WaitForAnimEnd();
	bool var_52_bool;
	func_1283(var_52_bool);
	if(!var_52_bool) //@nz
		return 12;
	int var_54_int;
	func_1594(var_54_int);
	int var_46_int;
	var_54_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_67_bool = false;
		if(var_47_int < 5) {
			bool var_70_bool;
			func_1283(var_70_bool);
			if(var_70_bool != 0)
				var_67_bool = true;
		}
		if(var_67_bool != 0) {
			if(!var_46_int) { //@nz
				@Sleep(3, var_48_bool);
				if(!var_48_bool) { //@nz
				} else {
			} else {
			@irand(var_49_int, var_46_int);
			@irand(var_50_int, 5);
			if(var_50_int != 0)
				var_49_int = 0;
			string var_81_string; int var_82_int;
			var_49_int = var_82_int;
			func_1587(var_81_string, var_82_int);
			@PlayAnimation("all", var_81_string);
			@WaitForAnimEnd(var_51_bool);
			var_83_bool = !var_51_bool; //@nz
			if(var_83_bool == 0) goto Label_1235;
			goto Label_1246;
			}
				Label_1235:
					bool var_74_bool;
					func_1249(var_74_bool);
					var_75_bool = !var_74_bool; //@nz
					if(var_75_bool == 0) goto Label_1241;
			}
		}
	Label_1246:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1241:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


// @pe
void func_927(object var_2_object, string var_415_string)
{
	bool var_416_bool;
	func_1619(var_416_bool);
	if(!var_416_bool) //@nz
		return 0;
	if(var_415_string == var_2_object)
		return 0;
	string var_419_string; bool var_420_bool;
	var_415_string = var_419_string;
	if(var_415_string == "")
		var_420_bool = false;
	else
		var_420_bool = true;
	func_1518(var_419_string, var_420_bool);
	var_2_object = var_415_string;
	
}


void func_1567(float var_44_float)
{
	float var_46_float;
	@GetGameTime(var_46_float);
	var_46_float = var_44_float;
}


// @pe
void func_673(object var_2_object, string var_356_string)
{
	bool var_357_bool;
	func_1619(var_357_bool);
	if(!var_357_bool) //@nz
		return 0;
	if(var_356_string == var_2_object)
		return 0;
	string var_360_string; bool var_361_bool;
	var_356_string = var_360_string;
	if(var_356_string == "")
		var_361_bool = false;
	else
		var_361_bool = true;
	func_1518(var_360_string, var_361_bool);
	var_2_object = var_356_string;
	
}


// @pe
void func_162(object var_2_object, string var_287_string)
{
	bool var_288_bool;
	func_1619(var_288_bool);
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
	func_1518(var_291_string, var_292_bool);
	var_2_object = var_287_string;
	
}


void func_1698(bool var_52_bool, object var_53_object, int var_54_int)
{
	object var_61_object;
	func_1685(var_61_object);
	object var_58_object;
	var_61_object = var_58_object;
	object var_59_object;
	var_58_object->Find(var_54_int, var_59_object);
	if(!var_59_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_54_int);
		var_52_bool = false;
	}
	var_59_object->AddChild(var_53_object);
	@SendWorldWndMessage(7);
	int var_60_int;
	var_53_object->GetCategory(var_60_int);
	@SetDiarySection(var_60_int);
	var_52_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1060(void)
{
	float var_36_float;
	@rand(var_36_float, 8, 16);
	@SetTimer(10, var_36_float);
}


void func_1572(int var_108_int)
{
	float var_110_float;
	@GetGameTime(var_110_float);
	var_108_int = 1 + (var_110_float / 24);
}


void func_1069(void)
{
	@KillTimer(10);
}


// @pe
void func_1581(bool var_253_bool, int var_254_int)
{
	int var_255_int;
	func_1572(var_255_int);
	var_253_bool = var_255_int == var_254_int;
}


void func_1587(string var_60_string, int var_61_int)
{
	string var_63_string = "idle";
	if(var_61_int != 0)
		var_63_string += var_61_int;
	var_63_string = var_60_string;
}


void func_313(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	object var_55_object;
	func_1546(var_55_object);
	var_55_object = var_54_object;
	func_1373(var_53_bool, var_54_object);
	bool var_148_bool; object var_149_object;
	var_43_object = var_149_object;
	func_1288(var_148_bool, var_149_object, 70.0);
	if(!var_148_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_195_int;
	func_1613(var_195_int);
	var_49_object->SetNPCName(var_195_int);
	int var_196_int;
	func_1611(var_196_int);
	var_49_object->SetNPCDescription(var_196_int);
	string var_197_string;
	func_1615(var_197_string);
	var_49_object->SetPhoto(var_197_string);
	string var_198_string;
	func_1617(var_198_string);
	var_49_object->SetPhoto2(var_198_string);
	int var_199_int;
	func_1776(var_199_int);
	var_49_object->SetPlayerName(var_199_int);
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	@DoDialog(var_49_object);
	object var_208_object; object var_209_object;
	var_43_object = var_208_object;
	var_49_object = var_209_object;
	TaskCall(4);
	func_394(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_244_bool = !var_52_bool; //@nz
		if(var_244_bool == 0) goto Label_383;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_383:
	object var_245_object;
	var_43_object = var_245_object;
	func_1356();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


void func_1594(int var_54_int)
{
	int var_57_int; bool var_58_bool;
	var_57_int = 0;
	
	for(;;) {
		string var_60_string; int var_61_int;
		var_57_int = var_61_int;
		func_1587(var_60_string, var_61_int);
		@HasAnimation(var_58_bool, "all", var_60_string);
		if(!var_58_bool) //@nz
			break;
		var_57_int += 1;
	}
	var_57_int = var_54_int;
}


void func_1468(bool var_95_bool, object var_96_object)
{
	bool var_104_bool; int var_105_int; string var_106_string;
	int var_108_int;
	func_1572(var_108_int);
	string var_102_string = ("d" + var_108_int) + "m";
	int var_103_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_96_object->HasProperty((var_102_string + (var_103_int + 1)), var_104_bool);
			if(!var_104_bool) { //@nz
			} else {
				var_103_int += 1;
			}
		}
		if(!var_103_int) { //@nz
			var_95_bool = false;
			return 10;
		}
		var_105_int = 0;
		if(var_103_int > 1)
			@irand(var_105_int, var_103_int);
		var_96_object->GetProperty((var_102_string + (var_105_int + 1)), var_106_string);
		bool var_127_bool; string var_128_string;
		var_106_string = var_128_string;
		func_1524(var_127_bool, var_128_string);
		var_127_bool = var_95_bool;
		return 10;

	}
}


void func_1726(object var_33_object)
{
	object var_36_object; object var_37_object;
	@GetMainOutdoorScene(var_36_object);
	if(var_36_object == null) {
		@Trace("Can't find main outdoor scene");
		var_37_object = null;
		var_37_object = var_33_object;
	}
	var_36_object->GetMap(var_37_object);
	var_37_object = var_33_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_447(object var_2_object, string var_215_string)
{
	bool var_216_bool;
	func_1619(var_216_bool);
	if(!var_216_bool) //@nz
		return 0;
	if(var_215_string == var_2_object)
		return 0;
	string var_219_string; bool var_220_bool;
	var_215_string = var_219_string;
	if(var_215_string == "")
		var_220_bool = false;
	else
		var_220_bool = true;
	func_1518(var_219_string, var_220_bool);
	var_2_object = var_215_string;
	
}


void func_1611(int var_196_int)
{
	var_196_int = 515531;
}


void func_1356(void)
{
	bool var_247_bool;
	@CameraSwitchToNormal();
	bool var_248_bool;
	func_1619(var_248_bool);
	if(var_248_bool != 0) {
	} else {
		@HasAnimationTrack(var_247_bool, "head");
		if(var_247_bool == 0) goto Label_1372;
		@UnlookAsync("head");
	}
Label_1372:
	
}


void func_1613(int var_195_int)
{
	var_195_int = 502857;
}


void func_1615(string var_197_string)
{
	var_197_string = "ui/NPC_BigVlad.png";
}


void func_1743(object var_72_object, string var_73_string, float var_74_float)
{
	object var_82_object;
	@GetMainOutdoorScene(var_82_object);
	if(var_82_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_80_cvector;
	cvector var_81_cvector;
	bool var_83_bool;
	var_82_object->GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector);
	if(!var_83_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_73_string) + " doesnt exist");
	var_82_object->GetMap(var_72_object);
	if(var_72_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_93_float = GetByIndex(var_80_cvector, 0);
	var_94_float = GetByIndex(var_80_cvector, 2);
	var_72_object->SetMapParams(var_93_float, var_94_float, var_74_float);
}
EMIT "Stack[-2] = 0";


void func_1617(string var_198_string)
{
	var_198_string = "ui/NPC_BigVlad_b.png";
}


void func_1619(bool var_91_bool)
{
	var_91_bool = true;
}


void func_1621(void)
{
	@SetVariable("k2q01", 3);
	object var_33_object;
	func_1726(var_33_object);
	object var_30_object;
	var_33_object = var_30_object;
	float var_44_float;
	func_1567(var_44_float);
	var_30_object->AddMark("k2q01BigVladGotoOspina", "pt_map_ospina", 1, 508649, var_44_float);
	func_1672();
}
EMIT "Stack[-1] = 0";


void func_1373(bool var_53_bool, object var_54_object)
{
	int var_60_int; int var_61_int;
	@GetVariable("voice_common", var_60_int);
	if(var_60_int != 0) {
		bool var_64_bool; object var_65_object;
		var_54_object = var_65_object;
		func_1431(var_64_bool, var_65_object);
		if(!var_64_bool) { //@nz
			bool var_95_bool; object var_96_object;
			var_54_object = var_96_object;
			func_1468(var_95_bool, var_96_object);
			if(!var_95_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@irand(var_61_int, 2);
		if(var_61_int != 0)
			@SetVariable("voice_common", ((var_60_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_140_bool; object var_141_object;
		var_54_object = var_141_object;
		func_1468(var_140_bool, var_141_object);
		if(!var_140_bool) { //@nz
			bool var_143_bool; object var_144_object;
			var_54_object = var_144_object;
			func_1431(var_143_bool, var_144_object);
			if(!var_143_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1429;
	
Label_1429:
	var_53_bool = true;
	
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_280_object, object var_281_object)
{
	var_0_object = var_281_object;
	var_3_string = false;
	if(1 != 0) {
		func_162(var_281_object, "Neutral");
		var_0_object->SetMessage(525245); //@t
		var_0_object->ClearReplies(); //@t
		bool var_296_bool;
		func_1660(var_280_object);
		if(var_296_bool != 0)
			var_0_object->AddReply(525246, 30599, 26614); //@t
		var_0_object->AddReply(525249, -1, 26617); //@t
		var_0_object->AddReply(529151, -1, 30598); //@t
		goto Label_132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_132:
	bool var_313_bool;
	func_1619(var_313_bool);
	if(var_313_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1511(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_161;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_161:
		return 0;

	}
	
}


void func_1249(bool var_74_bool)
{
	var_74_bool = true;
}


// @pe
void func_610(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_349_object, object var_350_object)
{
	var_0_object = var_350_object;
	var_1_object = var_349_object;
	var_3_string = false;
	if(1 != 0) {
		func_673(var_350_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_643;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x266";
	}
Label_643:
	bool var_374_bool;
	func_1619(var_374_bool);
	if(var_374_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1511(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_672;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_672:
		return 0;

	}
	
}


void func_1251(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_869(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_408_object, object var_409_object)
{
	var_0_object = var_409_object;
	var_1_object = var_408_object;
	var_3_string = false;
	if(1 != 0) {
		func_927(var_409_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_897;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x369";
	}
Label_897:
	bool var_430_bool;
	func_1619(var_430_bool);
	if(var_430_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1511(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_926;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_926:
		return 0;

	}
	
}


void func_998(object var_0_object)
{
	bool var_22_bool;
	func_1283(var_22_bool);
	if(!var_22_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1126();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1180();
	}
}
EMIT "Return(); Pop(0)";


void func_1511(string var_29_string)
{
	float var_32_float; float var_33_float;
	@lshGetAnimTimes(var_29_string, var_32_float, var_33_float);
	@lshPlayAnimation(var_32_float, var_33_float, false);
}


void func_1256(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


// @pe
void func_1644(object var_71_object)
{
	object var_75_object;
	func_1726(var_75_object);
	object var_72_object;
	var_75_object = var_72_object;
	func_1743(var_72_object, "pt_map_ospina", (float)2);
	object var_95_object;
	func_1726(var_95_object);
	var_71_object->ShowMap(var_95_object);
}


void func_1518(string var_219_string, bool var_220_bool)
{
	float var_225_float; float var_226_float;
	@lshGetAnimTimes(var_219_string, var_225_float, var_226_float);
	@lshPlayAnimation(var_225_float, var_226_float, var_220_bool);
}


void func_1776(int var_199_int)
{
	int var_201_int;
	@GetVariable("branch", var_201_int);
	if(var_201_int == 0) {
		var_199_int = 1;
		return 2;
	EMIT "GOTO 0x6ff";
	}
	if(var_201_int == 1) {
		var_199_int = 2;
		return 2;
	}
	var_199_int = 3;
}


void func_1264(bool var_29_bool, cvector var_30_cvector)
{
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	cvector var_35_cvector = var_30_cvector - var_34_cvector;
	var_37_float = GetByIndex(var_35_cvector, 0);
	var_38_float = GetByIndex(var_35_cvector, 2);
	bool var_36_bool;
	@Rotate(var_37_float, var_38_float, var_36_bool);
	var_36_bool = var_29_bool;
}


void func_1524(bool var_87_bool, string var_88_string)
{
	bool var_90_bool;
	bool var_91_bool;
	func_1619(var_91_bool);
	if(var_91_bool != 0) {
		@lshHasSpeech(var_90_bool, var_88_string);
		if(var_90_bool != 0) {
			@lshPlaySpeech(var_88_string);
			var_87_bool = true;
		}
	}
	var_87_bool = false;
}


void func_1018(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1274(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1660(bool var_296_bool)
{
	int var_298_int;
	func_1562(var_298_int, "k2q01");
	if(var_298_int == 2)
		var_296_bool = true;
	var_296_bool = false;
}


