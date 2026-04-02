// @GLOBALS: 0:cvector:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, object var_25_object, object var_26_object, object var_27_object, object var_28_object, object var_29_object, object var_30_object, object var_31_object)
	{
		if(1 != 0) {
			func_1403();
			if(var_31_object == 21720) {
				object var_36_object = var_1_object;
				func_1570(var_0_object);
			}
			if(var_31_object == 21723) {
				object var_41_object = var_1_object;
				func_1570(var_0_object);
			}
			if(var_30_object == 21715) {
				bool var_45_bool;
				func_1592(var_1_object);
				if(var_45_bool != 0) {
					object var_53_object; object var_54_object;
					var_53_object = var_1_object;
					var_54_object = var_0_object;
					func_1564();
					func_162(var_31_object, "Neutral");
					var_0_object->SetMessage(520512); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520513, 21717, 21716); //@t
					var_0_object->AddReply(529946, 31329, 31328); //@t
					return 0;
				}
				func_162(var_31_object, "Neutral");
				var_0_object->SetMessage(520519); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520520, -1, 21723); //@t
				var_0_object->AddReply(520521, -1, 21724); //@t
				return 0;
			}
			if(var_30_object == 31329) {
				func_162(var_31_object, "Neutral");
				var_0_object->SetMessage(529947); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529948, 21717, 31330); //@t
				return 0;
			}
			if(var_30_object == 21717) {
				func_162(var_31_object, "Neutral");
				var_0_object->SetMessage(520514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520515, 21719, 21718); //@t
				var_0_object->AddReply(529949, 21719, 31332); //@t
				return 0;
			}
			if(var_30_object == 21719) {
				func_162(var_31_object, "Neutral");
				var_0_object->SetMessage(520516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520517, -1, 21720); //@t
				var_0_object->AddReply(520518, -1, 21721); //@t
				return 0;
			}
			var_3_string = true;
			bool var_111_bool;
			func_1562(var_111_bool);
			if(var_111_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb9";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, cvector var_12_cvector, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, object var_25_object, object var_26_object, object var_27_object, object var_28_object, object var_29_object, object var_30_object, object var_31_object)
	{
		if(1 != 0) {
			func_1403();
			if(var_31_object == 21727) {
				object var_36_object = var_1_object;
				func_1575(var_0_object);
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_1586();
			}
			if(var_31_object == 31334) {
				object var_66_object = var_1_object;
				func_1575(var_0_object);
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_1586();
			}
			if(var_30_object == 21726) {
				func_468(var_31_object, "Neutral");
				var_0_object->SetMessage(520523); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520524, -1, 21727); //@t
				var_0_object->AddReply(529950, -1, 31334); //@t
				return 0;
			}
			var_3_string = true;
			bool var_91_bool;
			func_1562(var_91_bool);
			if(var_91_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1eb";
	
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, object var_25_object, object var_26_object, object var_27_object, object var_28_object, object var_29_object)
	{
		var_2_object = false;
		var_30_bool = GlobalVars[1];
		GlobalVars[1] = false;
		var_3_string = false;
		var_31_cvector = GlobalVars[0];
		cvector var_32_cvector;
		func_577(var_32_cvector);
		var_32_cvector = var_31_cvector;
		GlobalVars[0] = var_31_cvector;
		@SetTimer(10, 0.75);
		func_685(var_28_object, var_29_object);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, object var_25_object, object var_26_object, object var_27_object, object var_28_object, object var_29_object, object var_30_object)
	{
		func_655();
		if(var_3_string != 0) {
			int var_33_int; object var_34_object;
			var_30_object = var_34_object;
			TaskCall(2);
			func_336(var_35_object, var_33_int, var_34_object);
			TaskReturn();
			var_3_string = false;
			return 0;
		EMIT "GOTO 0x25f";
		}
		int var_152_int; object var_153_object;
		var_30_object = var_153_object;
		TaskCall(0);
		func_0(var_154_object, var_152_int, var_153_object);
		TaskReturn();
		if(1 != var_154_object)
			return 0;
		@KillTimer(10);
		object var_227_object;
		var_30_object = var_227_object;
		TaskCall(5);
		func_775(var_228_object, var_229_object, var_230_object, var_231_object, var_232_object, var_233_object, var_234_object, var_235_object, var_236_object, var_237_object, var_238_object, var_239_object, var_240_object, var_241_object, var_242_object, var_243_object, var_227_object);
		TaskReturn();
		var_3_string = true;
		@SetTimer(10, 0.75);
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool, bool var_13_bool, int var_14_int, object var_15_object, object var_16_object, object var_17_object, object var_18_object, object var_19_object, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, object var_25_object, object var_26_object, object var_27_object, object var_28_object, object var_29_object, object var_30_object)
	{
		object var_32_object;
		if(var_30_object == 10) {
			@FindActor(var_32_object, "player");
			bool var_36_bool; object var_37_object;
			var_32_object = var_37_object;
			func_1621(var_36_bool, var_37_object);
			if(var_36_bool != 0) {
				var_52_bool = GlobalVars[1];
				if(!var_52_bool) { //@nz
					object var_54_object;
					var_32_object = var_54_object;
					func_1392(var_54_object);
					var_61_bool = GlobalVars[1];
					GlobalVars[1] = true;
				}
			} else {
				var_62_bool = GlobalVars[1];
				if(var_62_bool == 0) goto Label_653;
				@UnlookAsync("head");
				var_64_bool = GlobalVars[1];
				GlobalVars[1] = false;
			}
		Label_653:
			var_32_object = null;
		}
	
	}

}


task task_5
{
}


void func_0(object var_0_object, int var_152_int, object var_153_object)
{
	var_0_object = var_153_object;
	bool var_163_bool; object var_164_object;
	var_153_object = var_164_object;
	func_1174(var_163_bool, var_164_object, 110.0);
	if(!var_163_bool) { //@nz
		var_152_int = -2;
		return 8;
	}
	object var_159_object;
	@CreateDialog(var_159_object);
	int var_167_int;
	func_1556(var_167_int);
	var_159_object->SetNPCName(var_167_int);
	int var_168_int;
	func_1554(var_168_int);
	var_159_object->SetNPCDescription(var_168_int);
	string var_169_string;
	func_1558(var_169_string);
	var_159_object->SetPhoto(var_169_string);
	string var_170_string;
	func_1560(var_170_string);
	var_159_object->SetPhoto2(var_170_string);
	int var_171_int;
	func_1604(var_171_int);
	var_159_object->SetPlayerName(var_171_int);
	bool var_160_bool;
	@IsOverrideActive(var_160_bool);
	if(var_160_bool != 0) {
		var_152_int = -2;
		return 8;
	}
	@DoDialog(var_159_object);
	object var_173_object; object var_174_object;
	var_153_object = var_173_object;
	var_159_object = var_174_object;
	TaskCall(1);
	func_74(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object);
	TaskReturn();
	bool var_162_bool;
	var_159_object->IsDialogEnd(var_162_bool);
	
	for(;;) {
		var_223_bool = !var_162_bool; //@nz
		if(var_223_bool == 0) goto Label_63;
		@sync();
		var_159_object->IsDialogEnd(var_162_bool);
	}
	
Label_63:
	object var_224_object;
	var_153_object = var_224_object;
	func_1242();
	@StopDialog(var_159_object);
	var_159_object->GetReturnValue(-1);
	int var_161_int = var_152_int;
}
EMIT "Stack[-4] = 0";


void func_769(void)
{
	@StopGroup0();
	@Stop();
}


void func_1282(object var_535_object)
{
	if(!var_535_object) { //@nz
	}
	int var_537_int;
	var_535_object->GetProperty("noaccess", var_537_int);
	if(var_537_int > 1)
		var_535_object->SetProperty("noaccess", (var_537_int - 1));
	else
		var_535_object->RemoveProperty("noaccess");
	
}


void func_1537(int var_53_int)
{
	int var_56_int; bool var_57_bool;
	var_56_int = 0;
	
	for(;;) {
		string var_59_string; int var_60_int;
		var_56_int = var_60_int;
		func_1530(var_59_string, var_60_int);
		@HasAnimation(var_57_bool, "all", var_59_string);
		if(!var_57_bool) //@nz
			break;
		var_56_int += 1;
	}
	var_56_int = var_53_int;
}


void func_1410(cvector var_71_cvector, cvector var_72_cvector)
{
	float var_75_float = sqrt(var_72_cvector | var_72_cvector);
	if(var_75_float < 0.000001)
		var_71_cvector = [0.0, 0.0, 0.0];
	var_71_cvector = var_72_cvector / var_75_float;
}


void func_774(void)
{
}


void func_775(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_227_object)
{
	bool var_265_bool;
	object var_268_object;
	func_1424(var_268_object);
	var_15_object = var_268_object;
	object var_271_object;
	var_227_object = var_271_object;
	func_1259(var_271_object);
	func_1448();
	func_1460();
	var_292_cvector = GlobalVars[0];
	cvector var_256_cvector;
	var_292_cvector = var_256_cvector;
	@LockCamera();
	var_293_float = GetByIndex(var_256_cvector, 0);
	var_294_int = -var_293_float;
	var_295_float = GetByIndex(var_256_cvector, 2);
	var_296_int = -var_295_float;
	@RotateAsync(var_294_int, var_296_int);
	func_1510((float)0, (float)1, 0.75);
	@CreateIntVector(var_1_object);
	@CreateIntVector(var_3_string);
	@CreateIntVector(var_5_object);
	@CreateIntVector(var_7_object);
	@CreateIntVector(var_9_bool);
	object var_311_object; object var_312_object;
	var_227_object = var_312_object;
	func_1315(var_311_object, var_312_object, 0, var_1_object);
	object var_328_object; object var_329_object;
	var_227_object = var_329_object;
	func_1315(var_328_object, var_329_object, 1, var_3_string);
	object var_332_object; object var_333_object;
	var_227_object = var_333_object;
	func_1315(var_332_object, var_333_object, 2, var_5_object);
	object var_336_object; object var_337_object;
	var_227_object = var_337_object;
	func_1315(var_336_object, var_337_object, 3, var_7_object);
	object var_340_object; object var_341_object;
	var_227_object = var_341_object;
	func_1315(var_340_object, var_341_object, 4, var_9_bool);
	object var_344_object; object var_345_object;
	var_227_object = var_345_object;
	func_1340(var_344_object, var_345_object, 0);
	object var_358_object; object var_359_object;
	var_227_object = var_359_object;
	func_1340(var_358_object, var_359_object, 1);
	object var_361_object; object var_362_object;
	var_227_object = var_362_object;
	func_1340(var_361_object, var_362_object, 2);
	object var_364_object; object var_365_object;
	var_227_object = var_365_object;
	func_1340(var_364_object, var_365_object, 3);
	object var_367_object; object var_368_object;
	var_227_object = var_368_object;
	func_1340(var_367_object, var_368_object, 4);
	object var_370_object;
	var_227_object = var_370_object;
	func_1080(var_370_object);
	int var_257_int = 1;
	
	while(var_257_int < 5) {
		var_227_object->RemoveAllItems(var_257_int);
		var_257_int += 1;
	}
	
	var_227_object->SelectWeapon();
	object var_258_object;
	@GetScene(var_258_object);
	cvector var_259_cvector;
	cvector var_260_cvector;
	bool var_263_bool;
	var_258_object->GetLocator("pt_arena_player", var_263_bool, var_259_cvector, var_260_cvector);
	cvector var_261_cvector;
	cvector var_262_cvector;
	var_258_object->GetLocator("pt_arena_enemy", var_263_bool, var_261_cvector, var_262_cvector);
	@Teleport(var_227_object, var_258_object, var_259_cvector, var_260_cvector);
	object var_264_object;
	@AddActor(var_264_object, "pers_butcher", var_258_object, var_261_cvector, var_262_cvector, "arena_fighter.xml");
	object var_408_object;
	var_258_object = var_408_object;
	cvector var_267_cvector;
	func_1125(var_267_cvector, var_408_object, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator1");
	object var_424_object;
	var_258_object = var_424_object;
	func_1125(var_267_cvector, var_424_object, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator2");
	object var_428_object;
	var_258_object = var_428_object;
	func_1125(var_267_cvector, var_428_object, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator3");
	object var_432_object;
	var_258_object = var_432_object;
	func_1125(var_267_cvector, var_432_object, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator4");
	object var_436_object;
	var_258_object = var_436_object;
	func_1125(var_267_cvector, var_436_object, "pers_unosha", "arena_spectator_unosha2.xml", "pt_arena_spectator5");
	object var_440_object;
	var_258_object = var_440_object;
	func_1125(var_267_cvector, var_440_object, "pers_dohodyaga", "arena_spectator_dohodyaga.xml", "pt_arena_spectator6");
	object var_444_object;
	var_258_object = var_444_object;
	func_1125(var_267_cvector, var_444_object, "pers_boy", "arena_spectator_boy.xml", "pt_arena_spectator7");
	var_448_float = GetByIndex(var_256_cvector, 0);
	var_449_int = -var_448_float;
	var_450_float = GetByIndex(var_256_cvector, 2);
	var_451_int = -var_450_float;
	@Rotate(var_449_int, var_451_int);
	object var_452_object;
	func_1392(var_452_object);
	func_1510((float)1, (float)0, 0.75);
	@UnlockCamera();
	
	for(;;) {
		@Sleep(1);
		if(var_452_object != null) {
			var_264_object->IsDead(var_265_bool);
			if(var_265_bool != 0)
				break;
		}
	}
	@LockCamera();
	var_465_float = GetByIndex(var_256_cvector, 0);
	var_466_float = GetByIndex(var_256_cvector, 2);
	@RotateAsync(var_465_float, var_466_float);
	func_1510((float)0, (float)1, 0.75);
	@RemoveActor(var_264_object);
	func_1142(var_267_cvector);
	object var_481_object;
	var_227_object = var_481_object;
	func_1360(var_481_object, 0, var_311_object, var_1_object, var_344_object);
	object var_505_object;
	var_227_object = var_505_object;
	func_1360(var_505_object, 1, var_328_object, var_3_string, var_358_object);
	object var_510_object;
	var_227_object = var_510_object;
	func_1360(var_510_object, 2, var_332_object, var_5_object, var_361_object);
	object var_515_object;
	var_227_object = var_515_object;
	func_1360(var_515_object, 3, var_336_object, var_7_object, var_364_object);
	object var_520_object;
	var_227_object = var_520_object;
	func_1360(var_520_object, 4, var_340_object, var_9_bool, var_367_object);
	var_227_object->SelectWeapon();
	cvector var_266_cvector;
	var_258_object->GetLocator("pt_arena_return", var_263_bool, var_266_cvector, var_267_cvector);
	@Teleport(var_227_object, var_258_object, var_266_cvector, var_267_cvector);
	@StopAsync();
	var_526_float = GetByIndex(var_256_cvector, 0);
	var_527_float = GetByIndex(var_256_cvector, 2);
	@Rotate(var_526_float, var_527_float);
	func_1510((float)1, (float)0, 0.75);
	@UnlockCamera();
	func_1454();
	func_1442();
	object var_535_object;
	var_227_object = var_535_object;
	func_1282(var_535_object);
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-10] = 0";


void func_1420(float var_70_float, cvector var_71_cvector, cvector var_72_cvector)
{
	var_70_float = (var_72_cvector - var_71_cvector) | (var_72_cvector - var_71_cvector);
}


void func_1166(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_655(void)
{
	if(var_2_object != 0)
		@StopAnimation();
	else
		func_769();
	
}


void func_1424(object var_268_object)
{
	object var_270_object;
	@CreateObjectVector(var_270_object);
	var_270_object = var_268_object;
}
EMIT "Stack[-1] = 0";


void func_1554(int var_92_int)
{
	var_92_int = 521048;
}


void func_1556(int var_91_int)
{
	var_91_int = 521047;
}


void func_1174(bool var_44_bool, object var_45_object, float var_46_float)
{
	cvector var_57_cvector; bool var_64_bool;
	var_45_object->GetPosition(var_57_cvector);
	float var_56_float;
	var_45_object->GetEyesHeight(var_56_float);
	var_65_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (var_65_float + var_56_float);
	cvector var_58_cvector;
	@GetPosition(var_58_cvector);
	@GetEyesHeight(var_56_float);
	var_66_float = GetByIndex(var_58_cvector, 1);
	SetByIndex(var_58_cvector, 1) = (var_66_float + var_56_float);
	cvector var_59_cvector = var_57_cvector - var_58_cvector;
	var_67_float = GetByIndex(var_59_cvector, 1);
	SetByIndex(var_59_cvector, 1) = (float)0;
	var_69_float = sqrt(var_59_cvector | var_59_cvector);
	var_59_cvector /= var_69_float;
	cvector var_60_cvector = -var_59_cvector;
	cvector var_71_cvector;
	func_1410(var_71_cvector, (var_60_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_61_cvector = ((var_59_cvector * var_46_float) + (var_71_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_63_bool;
	@IsOverrideActive(var_63_bool);
	if(var_63_bool != 0)
		var_44_bool = false;
	@StopWorld();
	@CameraTransit((var_58_cvector + var_61_cvector), var_60_cvector);
	var_84_float = GetByIndex(var_61_cvector, 0);
	var_85_float = GetByIndex(var_61_cvector, 2);
	@Rotate(var_84_float, var_85_float);
	bool var_86_bool;
	func_1562(var_86_bool);
	if(var_86_bool != 0) {
	} else {
		@HasAnimationTrack(var_64_bool, "head");
		if(var_64_bool == 0) goto Label_1236;
		@LookAsyncCamera("head");
	}
Label_1236:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_44_bool = true;
	
}


void func_1558(string var_93_string)
{
	var_93_string = "ui/NPC_Citizen2.png";
}


void func_1560(string var_94_string)
{
	var_94_string = "ui/NPC_Citizen2_b.png";
}


void func_1302(string var_132_string)
{
	float var_135_float; float var_136_float;
	@lshGetAnimTimes(var_132_string, var_135_float, var_136_float);
	@lshPlayAnimation(var_135_float, var_136_float, false);
}


void func_1562(bool var_86_bool)
{
	var_86_bool = false;
}


// @pe
void func_410(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_104_object, object var_105_object)
{
	var_0_object = var_105_object;
	var_1_object = var_104_object;
	var_3_string = false;
	if(1 != 0) {
		func_468(var_105_object, "Neutral");
		var_0_object->SetMessage(520523); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520524, -1, 21727); //@t
		var_0_object->AddReply(529950, -1, 31334); //@t
		goto Label_438;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x19e";
	}
Label_438:
	bool var_130_bool;
	func_1562(var_130_bool);
	if(var_130_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1302(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_467;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_467:
		return 0;

	}
	
}


// @pe
void func_1564(void)
{
	@SetVariable("ooArenaManager1", 1);
}


void func_1309(string var_115_string, bool var_116_bool)
{
	float var_121_float; float var_122_float;
	@lshGetAnimTimes(var_115_string, var_121_float, var_122_float);
	@lshPlayAnimation(var_121_float, var_122_float, var_116_bool);
}


void func_664(object var_2_object)
{
	int var_52_int;
	var_2_object = true;
	int var_53_int;
	func_1537(var_53_int);
	int var_51_int;
	var_53_int = var_51_int;
	if(var_51_int != 0) {
		@irand(var_52_int, var_51_int);
		string var_68_string; int var_69_int;
		var_52_int = var_69_int;
		func_1530(var_68_string, var_69_int);
		@PlayAnimation("all", var_68_string);
		@WaitForAnimEnd();
	}
	var_2_object = false;
}


void func_1435(string var_285_string, int var_286_int)
{
	int var_288_int;
	@GetVariable(var_285_string, var_288_int);
	@SetVariable(var_285_string, (var_288_int + var_286_int));
}


void func_1430(int var_182_int, string var_183_string)
{
	int var_185_int;
	@GetVariable(var_183_string, var_185_int);
	var_185_int = var_182_int;
}


// @pe
void func_162(object var_2_object, string var_192_string)
{
	bool var_193_bool;
	func_1562(var_193_bool);
	if(!var_193_bool) //@nz
		return 0;
	if(var_192_string == var_2_object)
		return 0;
	string var_196_string; bool var_197_bool;
	var_192_string = var_196_string;
	if(var_192_string == "")
		var_197_bool = false;
	else
		var_197_bool = true;
	func_1309(var_196_string, var_197_bool);
	var_2_object = var_192_string;
	
}


// @pe
void func_1570(object var_37_object)
{
	var_37_object->SetReturnValue(1);
}


void func_1315(object var_311_object, object var_312_object, int var_313_int, object var_314_object)
{
	object var_323_object; int var_324_int;
	object var_325_object;
	func_1424(var_325_object);
	object var_320_object;
	var_325_object = var_320_object;
	int var_321_int;
	var_312_object->GetItemCount(var_321_int, var_313_int);
	int var_322_int = 0;
	
	while(var_322_int < var_321_int) {
		var_312_object->GetItem(var_323_object, var_322_int, var_313_int);
		var_320_object->add(var_323_object);
		var_312_object->GetItemAmount(var_324_int, var_322_int, var_313_int);
		var_314_object->add(var_324_int);
		var_323_object = null;
		var_322_int += 1;
	}
	
	var_320_object = var_311_object;
}
EMIT "Stack[-5] = 0";


void func_1442(void)
{
	func_1435("noinv_drop", -1);
}


// @pe
void func_1575(object var_36_object)
{
	@Trace("blood is given");
	object var_39_object;
	var_36_object = var_39_object;
	func_1497(var_39_object, "blood", 1);
}


void func_1448(void)
{
	func_1435("noinv_drop", 1);
}


void func_685(object var_0_object, object var_1_object)
{
	int var_41_int; bool var_42_bool; cvector var_43_cvector; object var_44_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		func_774();
		@irand(var_41_int, 10);
		@Sleep((var_41_int + 5), var_42_bool);
		if(var_42_bool != 0) {
			func_664(var_44_object);
		} else {
		for(;;) {
			func_774();
			@GetPFPosition(var_43_cvector);
			float var_70_float; cvector var_72_cvector;
			var_43_cvector = var_72_cvector;
			func_1420(var_70_float, var_1_object, var_72_cvector);
			if(var_70_float > 40000) {
				@FindPathTo(var_44_object, var_1_object);
				if(var_44_object != null) {
					@RotatePath(var_44_object, var_42_bool);
					if(!var_42_bool) { //@nz
					} else {
					@FollowPath(var_44_object, false, var_42_bool);
					if(!var_42_bool) { //@nz
						goto Label_766;
					}
					var_81_float = GetByIndex(var_0_object, 0);
					var_82_float = GetByIndex(var_0_object, 2);
					@Rotate(var_81_float, var_82_float, var_42_bool);
					if(!var_42_bool) { //@nz
						goto Label_766;
					}
					@WaitForAnimEnd(var_42_bool);
					if(!var_42_bool) { //@nz
						goto Label_766;
					}
					goto Label_767;
				EMIT "GOTO 0x2ef";
				}
				@Sleep(1);
				var_44_object = null;
				goto Label_766;
			}
			var_86_float = GetByIndex(var_0_object, 0);
			var_87_float = GetByIndex(var_0_object, 2);
			@Rotate(var_86_float, var_87_float, var_42_bool);
			if(!var_42_bool) { //@nz
				goto Label_766;
			}
			@WaitForAnimEnd(var_42_bool);
			if(!var_42_bool) { //@nz
				goto Label_766;
			}
			goto Label_767;
			}
		Label_766:
		}
		}
	Label_767:
	}
	
}
EMIT "Return(); Pop(8)";


void func_1454(void)
{
	func_1435("nouse_container", -1);
}


// @pe
void func_1586(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1460(void)
{
	func_1435("nouse_container", 1);
}


// @pe
void func_1592(bool var_180_bool)
{
	int var_182_int;
	func_1430(var_182_int, "ooArenaManager1");
	if(var_182_int == 0) {
		var_180_bool = true;
		return 0;
	}
	var_180_bool = false;
}


void func_1080(object var_370_object)
{
	int var_379_int; object var_381_object; int var_382_int; bool var_383_bool; int var_384_int;
	var_370_object->GetItemCount(var_379_int, 0);
	int var_380_int = 0;
	
	for(;;) {
		if(!(var_380_int < var_379_int)) goto Label_1124;
		var_370_object->GetItem(var_381_object, var_380_int);
		var_381_object->GetItemID(var_382_int);
		@HasInvItemProperty(var_383_bool, var_382_int, "Group");
		if(var_383_bool == 0) goto Label_1110;
		@GetInvItemProperty(var_384_int, var_382_int, "Group");
		if(!(var_384_int != 0)) goto Label_1104;
		goto Label_1121;
	EMIT "GOTO 0x456";

	Label_1121:
		var_380_int += 1;
	}
	
Label_1104:
	bool var_385_bool;
	var_370_object->IsItemSelected(var_385_bool, var_380_int, 0);
	if(var_385_bool != 0) {
		goto Label_1121;
	}
Label_1110:
	int var_386_int;
	var_370_object->GetItemAmount(var_386_int, var_380_int, 0);
	var_370_object->RemoveItem(var_380_int, var_386_int, 0);
	var_380_int += -1;
	var_379_int += -1;
	var_381_object = null;
	
Label_1124:
}


void func_1466(int var_55_int, int var_56_int)
{
	object var_58_object;
	@CreateIntVector(var_58_object);
	var_58_object->add(var_55_int);
	var_58_object->add(var_56_int);
	@SendWorldWndMessage(3, var_58_object);
}
EMIT "Stack[-1] = 0";


void func_1340(object var_344_object, object var_345_object, int var_346_int)
{
	object var_351_object; bool var_354_bool;
	@CreateIntVector(var_351_object);
	int var_352_int;
	var_345_object->GetItemCount(var_352_int, var_346_int);
	int var_353_int = 0;
	
	while(var_353_int < var_352_int) {
		var_345_object->IsItemSelected(var_354_bool, var_353_int, var_346_int);
		if(var_354_bool != 0)
			var_351_object->add(var_353_int);
		var_353_int += 1;
	}
	
	var_351_object = var_344_object;
}
EMIT "Stack[-4] = 0";


void func_577(cvector var_32_cvector)
{
	cvector var_34_cvector;
	@GetDirection(var_34_cvector);
	var_34_cvector = var_32_cvector;
}


void func_1604(int var_95_int)
{
	int var_97_int;
	@GetVariable("branch", var_97_int);
	if(var_97_int == 0) {
		var_95_int = 1;
		return 2;
	EMIT "GOTO 0x653";
	}
	if(var_97_int == 1) {
		var_95_int = 2;
		return 2;
	}
	var_95_int = 3;
}


void func_1478(object var_44_object, object var_45_object, int var_46_int)
{
	int var_50_int;
	var_45_object->GetItemID(var_50_int);
	int var_51_int;
	@GetInvItemProperty(var_51_int, var_50_int, "Category");
	bool var_52_bool;
	var_44_object->AddItem(var_52_bool, var_45_object, var_51_int, var_46_int);
	if(!var_52_bool) { //@nz
		var_44_object->DropItems(var_45_object, var_46_int);
	} else {
		int var_55_int; int var_56_int;
		var_50_int = var_55_int;
		var_46_int = var_56_int;
		func_1466(var_55_int, var_56_int);
	}
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_173_object, object var_174_object)
{
	var_0_object = var_174_object;
	var_1_object = var_173_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_180_bool;
		func_1592(var_1_object);
		if(var_180_bool != 0) {
			object var_188_object; object var_189_object;
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_1564();
			func_162(var_174_object, "Neutral");
			var_0_object->SetMessage(520512); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520513, 21717, 21716); //@t
			var_0_object->AddReply(529946, 31329, 31328); //@t
		} else {
					func_162(var_174_object, "Neutral");
					var_0_object->SetMessage(520519); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520520, -1, 21723); //@t
					var_0_object->AddReply(520521, -1, 21724); //@t
		}
	}
	for(;;) {
		bool var_207_bool;
		func_1562(var_207_bool);
		if(var_207_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1302(var_2_object);
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
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_336(object var_0_object, int var_33_int, object var_34_object)
{
	var_0_object = var_34_object;
	bool var_44_bool; object var_45_object;
	var_34_object = var_45_object;
	func_1174(var_44_bool, var_45_object, 110.0);
	if(!var_44_bool) { //@nz
		var_33_int = -2;
		return 8;
	}
	object var_40_object;
	@CreateDialog(var_40_object);
	int var_91_int;
	func_1556(var_91_int);
	var_40_object->SetNPCName(var_91_int);
	int var_92_int;
	func_1554(var_92_int);
	var_40_object->SetNPCDescription(var_92_int);
	string var_93_string;
	func_1558(var_93_string);
	var_40_object->SetPhoto(var_93_string);
	string var_94_string;
	func_1560(var_94_string);
	var_40_object->SetPhoto2(var_94_string);
	int var_95_int;
	func_1604(var_95_int);
	var_40_object->SetPlayerName(var_95_int);
	bool var_41_bool;
	@IsOverrideActive(var_41_bool);
	if(var_41_bool != 0) {
		var_33_int = -2;
		return 8;
	}
	@DoDialog(var_40_object);
	object var_104_object; object var_105_object;
	var_34_object = var_104_object;
	var_40_object = var_105_object;
	TaskCall(3);
	func_410(var_106_object, var_107_object, var_108_string, var_109_bool, var_104_object, var_105_object);
	TaskReturn();
	bool var_43_bool;
	var_40_object->IsDialogEnd(var_43_bool);
	
	for(;;) {
		var_143_bool = !var_43_bool; //@nz
		if(var_143_bool == 0) goto Label_399;
		@sync();
		var_40_object->IsDialogEnd(var_43_bool);
	}
	
Label_399:
	object var_144_object;
	var_34_object = var_144_object;
	func_1242();
	@StopDialog(var_40_object);
	var_40_object->GetReturnValue(-1);
	int var_42_int = var_33_int;
}
EMIT "Stack[-4] = 0";


void func_1360(object var_481_object, int var_482_int, object var_483_object, object var_484_object, object var_485_object)
{
	object var_495_object; int var_496_int; bool var_497_bool; int var_499_int;
	var_481_object->RemoveAllItems(var_482_int);
	int var_493_int;
	var_483_object->size(var_493_int);
	int var_494_int = 0;
	
	while(var_494_int < var_493_int) {
		var_483_object->get(var_495_object, var_494_int);
		var_484_object->get(var_496_int, var_494_int);
		var_481_object->AddItem(var_497_bool, var_495_object, var_482_int, var_496_int);
		var_495_object = null;
		var_494_int += 1;
	}
	
	var_485_object->size(var_493_int);
	int var_498_int = 0;
	
	while(var_498_int < var_493_int) {
		var_485_object->get(var_499_int, var_498_int);
		var_481_object->SelectItem(var_499_int, true, var_482_int);
		var_498_int += 1;
	}
	
}


// @pe
void func_468(object var_2_object, string var_111_string)
{
	bool var_112_bool;
	func_1562(var_112_bool);
	if(!var_112_bool) //@nz
		return 0;
	if(var_111_string == var_2_object)
		return 0;
	string var_115_string; bool var_116_bool;
	var_111_string = var_115_string;
	if(var_111_string == "")
		var_116_bool = false;
	else
		var_116_bool = true;
	func_1309(var_115_string, var_116_bool);
	var_2_object = var_111_string;
	
}


void func_1621(bool var_36_bool, object var_37_object)
{
	if(var_37_object == null)
		var_36_bool = false;
	float var_41_float; object var_42_object;
	var_37_object = var_42_object;
	func_1166(var_41_float, var_42_object);
	float var_39_float = sqrt(var_41_float);
	var_49_bool = GlobalVars[1];
	if(var_49_bool != 0)
		var_39_float -= 100;
	var_36_bool = var_39_float < 300;
}


void func_1497(object var_39_object, string var_40_string, int var_41_int)
{
	object var_43_object;
	@CreateInvItem(var_43_object);
	var_43_object->SetItemName(var_40_string);
	object var_44_object; object var_45_object; int var_46_int;
	var_39_object = var_44_object;
	var_43_object = var_45_object;
	var_41_int = var_46_int;
	func_1478(var_44_object, var_45_object, var_46_int);
}
EMIT "Stack[-1] = 0";


void func_1242(void)
{
	bool var_146_bool;
	@CameraSwitchToNormal();
	bool var_147_bool;
	func_1562(var_147_bool);
	if(var_147_bool != 0) {
	} else {
		@HasAnimationTrack(var_146_bool, "head");
		if(var_146_bool == 0) goto Label_1258;
		@UnlookAsync("head");
	}
Label_1258:
	
}


void func_1125(object var_15_object, object var_408_object, string var_409_string, string var_410_string, string var_411_string)
{
	cvector var_416_cvector; cvector var_417_cvector; bool var_418_bool;
	var_408_object->GetLocator(var_411_string, var_418_bool, var_416_cvector, var_417_cvector);
	if(!var_418_bool) //@nz
		@Trace("Locator doesn't exist for arena spectator " + var_411_string);
	object var_419_object;
	var_408_object->AddStationaryActor(var_419_object, var_416_cvector, var_417_cvector, var_409_string, var_410_string, true);
	var_15_object->add(var_419_object); //@t
}
EMIT "Stack[-1] = 0";


void func_1510(float var_297_float, float var_298_float, float var_299_float)
{
	bool var_303_bool; float var_305_float;
	var_303_bool = var_298_float > var_297_float;
	
	for(;;) {
		if(var_303_bool != 0)
			var_308_bool = var_297_float < var_298_float;
		else
			var_310_bool = var_298_float < var_297_float;
		if(var_308_bool == 0) goto Label_1527;
		@ModDarkenLevel(var_297_float);
		@sync(var_305_float);
		var_297_float += (var_305_float * ((var_298_float - var_297_float) / var_299_float));
	}
	
Label_1527:
	@ModDarkenLevel(var_298_float);
	
}


void func_1259(object var_271_object)
{
	int var_275_int;
	if(!var_271_object) { //@nz
	}
	bool var_274_bool;
	var_271_object->HasProperty("noaccess", var_274_bool);
	if(var_274_bool != 0) {
		var_271_object->GetProperty("noaccess", var_275_int);
		var_271_object->SetProperty("noaccess", (var_275_int + 1));
	} else {
		var_271_object->SetProperty("noaccess", 1);
	}
	
}


void func_1392(object var_54_object)
{
	float var_57_float;
	var_54_object->GetEyesHeight(var_57_float);
	cvector var_58_cvector = [0.0, 0.0, 0.0];
	var_59_float = GetByIndex(var_58_cvector, 1);
	var_57_float = var_59_float;
	SetByIndex(var_58_cvector, 1) = var_59_float;
	@LookAsync(var_54_object, "head", var_58_cvector);
}


void func_1142(object var_15_object)
{
	int var_474_int; object var_476_object; object var_477_object;
	var_15_object->size(var_474_int); //@t
	int var_475_int = 0;
	
	while(var_475_int < var_474_int) {
		var_15_object->get(var_476_object, var_475_int); //@t
		var_476_object->GetActor(var_477_object);
		if(var_477_object != null)
			@RemoveActor(var_477_object);
		var_476_object->Remove();
		var_477_object = null;
		var_476_object = null;
		var_475_int += 1;
	}
	
	var_15_object->clear(); //@t
}


void func_1530(string var_59_string, int var_60_int)
{
	string var_62_string = "idle";
	if(var_60_int != 0)
		var_62_string += var_60_int;
	var_62_string = var_59_string;
}


void func_1403(void)
{
	bool var_33_bool;
	func_1562(var_33_bool);
	if(var_33_bool != 0)
		@lshStopSpeech();
}


