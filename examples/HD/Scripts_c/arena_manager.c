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
			func_1423();
			if(var_31_object == 21720) {
				object var_36_object = var_1_object;
				func_1590(var_0_object);
			}
			if(var_31_object == 21723) {
				object var_41_object = var_1_object;
				func_1590(var_0_object);
			}
			if(var_30_object == 21715) {
				bool var_45_bool;
				func_1612(var_1_object);
				if(var_45_bool != 0) {
					object var_53_object; object var_54_object;
					var_53_object = var_1_object;
					var_54_object = var_0_object;
					func_1584();
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
			bool var_116_bool;
			func_1582(var_116_bool);
			if(var_116_bool != 0)
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
			func_1423();
			if(var_31_object == 21727) {
				object var_36_object = var_1_object;
				func_1595(var_0_object);
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_1606();
			}
			if(var_31_object == 31334) {
				object var_66_object = var_1_object;
				func_1595(var_0_object);
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_1606();
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
			bool var_96_bool;
			func_1582(var_96_bool);
			if(var_96_bool != 0)
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
		int var_164_int; object var_165_object;
		var_30_object = var_165_object;
		TaskCall(0);
		func_0(var_166_object, var_164_int, var_165_object);
		TaskReturn();
		if(1 != var_166_object)
			return 0;
		@KillTimer(10);
		object var_239_object;
		var_30_object = var_239_object;
		TaskCall(5);
		func_775(var_240_object, var_241_object, var_242_object, var_243_object, var_244_object, var_245_object, var_246_object, var_247_object, var_248_object, var_249_object, var_250_object, var_251_object, var_252_object, var_253_object, var_254_object, var_255_object, var_239_object);
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
			func_1641(var_36_bool, var_37_object);
			if(var_36_bool != 0) {
				var_52_bool = GlobalVars[1];
				if(!var_52_bool) { //@nz
					object var_54_object;
					var_32_object = var_54_object;
					func_1412(var_54_object);
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


void func_0(object var_0_object, int var_164_int, object var_165_object)
{
	var_0_object = var_165_object;
	bool var_175_bool; object var_176_object;
	var_165_object = var_176_object;
	func_1174(var_175_bool, var_176_object, 110.0);
	if(!var_175_bool) { //@nz
		var_164_int = -2;
		return 8;
	}
	object var_171_object;
	@CreateDialog(var_171_object);
	int var_179_int;
	func_1576(var_179_int);
	var_171_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1574(var_180_int);
	var_171_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1578(var_181_string);
	var_171_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1580(var_182_string);
	var_171_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1624(var_183_int);
	var_171_object->SetPlayerName(var_183_int);
	bool var_172_bool;
	@IsOverrideActive(var_172_bool);
	if(var_172_bool != 0) {
		var_164_int = -2;
		return 8;
	}
	@DoDialog(var_171_object);
	object var_185_object; object var_186_object;
	var_165_object = var_185_object;
	var_171_object = var_186_object;
	TaskCall(1);
	func_74(var_187_object, var_188_object, var_189_string, var_190_bool, var_185_object, var_186_object);
	TaskReturn();
	bool var_174_bool;
	var_171_object->IsDialogEnd(var_174_bool);
	
	for(;;) {
		var_235_bool = !var_174_bool; //@nz
		if(var_235_bool == 0) goto Label_63;
		@sync();
		var_171_object->IsDialogEnd(var_174_bool);
	}
	
Label_63:
	object var_236_object;
	var_165_object = var_236_object;
	func_1243();
	@StopDialog(var_171_object);
	var_171_object->GetReturnValue(-1);
	int var_173_int = var_164_int;
}
EMIT "Stack[-4] = 0";


void func_769(void)
{
	@StopGroup0();
	@Stop();
}


void func_1412(object var_54_object)
{
	float var_57_float;
	var_54_object->GetEyesHeight(var_57_float);
	cvector var_58_cvector = [0.0, 0.0, 0.0];
	var_59_float = GetByIndex(var_58_cvector, 1);
	var_57_float = var_59_float;
	SetByIndex(var_58_cvector, 1) = var_59_float;
	@LookAsync(var_54_object, "head", var_58_cvector);
}


void func_1284(object var_547_object)
{
	if(!var_547_object) { //@nz
	}
	int var_549_int;
	var_547_object->GetProperty("noaccess", var_549_int);
	if(var_549_int > 1)
		var_547_object->SetProperty("noaccess", (var_549_int - 1));
	else
		var_547_object->RemoveProperty("noaccess");
	
}


void func_774(void)
{
}


void func_775(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_239_object)
{
	bool var_277_bool;
	object var_280_object;
	func_1444(var_280_object);
	var_15_object = var_280_object;
	object var_283_object;
	var_239_object = var_283_object;
	func_1261(var_283_object);
	func_1468();
	func_1480();
	var_304_cvector = GlobalVars[0];
	cvector var_268_cvector;
	var_304_cvector = var_268_cvector;
	@LockCamera();
	var_305_float = GetByIndex(var_268_cvector, 0);
	var_306_int = -var_305_float;
	var_307_float = GetByIndex(var_268_cvector, 2);
	var_308_int = -var_307_float;
	@RotateAsync(var_306_int, var_308_int);
	func_1530((float)0, (float)1, 0.75);
	@CreateIntVector(var_1_object);
	@CreateIntVector(var_3_string);
	@CreateIntVector(var_5_object);
	@CreateIntVector(var_7_object);
	@CreateIntVector(var_9_bool);
	object var_323_object; object var_324_object;
	var_239_object = var_324_object;
	func_1335(var_323_object, var_324_object, 0, var_1_object);
	object var_340_object; object var_341_object;
	var_239_object = var_341_object;
	func_1335(var_340_object, var_341_object, 1, var_3_string);
	object var_344_object; object var_345_object;
	var_239_object = var_345_object;
	func_1335(var_344_object, var_345_object, 2, var_5_object);
	object var_348_object; object var_349_object;
	var_239_object = var_349_object;
	func_1335(var_348_object, var_349_object, 3, var_7_object);
	object var_352_object; object var_353_object;
	var_239_object = var_353_object;
	func_1335(var_352_object, var_353_object, 4, var_9_bool);
	object var_356_object; object var_357_object;
	var_239_object = var_357_object;
	func_1360(var_356_object, var_357_object, 0);
	object var_370_object; object var_371_object;
	var_239_object = var_371_object;
	func_1360(var_370_object, var_371_object, 1);
	object var_373_object; object var_374_object;
	var_239_object = var_374_object;
	func_1360(var_373_object, var_374_object, 2);
	object var_376_object; object var_377_object;
	var_239_object = var_377_object;
	func_1360(var_376_object, var_377_object, 3);
	object var_379_object; object var_380_object;
	var_239_object = var_380_object;
	func_1360(var_379_object, var_380_object, 4);
	object var_382_object;
	var_239_object = var_382_object;
	func_1080(var_382_object);
	int var_269_int = 1;
	
	while(var_269_int < 5) {
		var_239_object->RemoveAllItems(var_269_int);
		var_269_int += 1;
	}
	
	var_239_object->SelectWeapon();
	object var_270_object;
	@GetScene(var_270_object);
	cvector var_271_cvector;
	cvector var_272_cvector;
	bool var_275_bool;
	var_270_object->GetLocator("pt_arena_player", var_275_bool, var_271_cvector, var_272_cvector);
	cvector var_273_cvector;
	cvector var_274_cvector;
	var_270_object->GetLocator("pt_arena_enemy", var_275_bool, var_273_cvector, var_274_cvector);
	@Teleport(var_239_object, var_270_object, var_271_cvector, var_272_cvector);
	object var_276_object;
	@AddActor(var_276_object, "pers_butcher", var_270_object, var_273_cvector, var_274_cvector, "arena_fighter.xml");
	object var_420_object;
	var_270_object = var_420_object;
	cvector var_279_cvector;
	func_1125(var_279_cvector, var_420_object, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator1");
	object var_436_object;
	var_270_object = var_436_object;
	func_1125(var_279_cvector, var_436_object, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator2");
	object var_440_object;
	var_270_object = var_440_object;
	func_1125(var_279_cvector, var_440_object, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator3");
	object var_444_object;
	var_270_object = var_444_object;
	func_1125(var_279_cvector, var_444_object, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator4");
	object var_448_object;
	var_270_object = var_448_object;
	func_1125(var_279_cvector, var_448_object, "pers_unosha", "arena_spectator_unosha2.xml", "pt_arena_spectator5");
	object var_452_object;
	var_270_object = var_452_object;
	func_1125(var_279_cvector, var_452_object, "pers_dohodyaga", "arena_spectator_dohodyaga.xml", "pt_arena_spectator6");
	object var_456_object;
	var_270_object = var_456_object;
	func_1125(var_279_cvector, var_456_object, "pers_boy", "arena_spectator_boy.xml", "pt_arena_spectator7");
	var_460_float = GetByIndex(var_268_cvector, 0);
	var_461_int = -var_460_float;
	var_462_float = GetByIndex(var_268_cvector, 2);
	var_463_int = -var_462_float;
	@Rotate(var_461_int, var_463_int);
	object var_464_object;
	func_1412(var_464_object);
	func_1530((float)1, (float)0, 0.75);
	@UnlockCamera();
	
	for(;;) {
		@Sleep(1);
		if(var_464_object != null) {
			var_276_object->IsDead(var_277_bool);
			if(var_277_bool != 0)
				break;
		}
	}
	@LockCamera();
	var_477_float = GetByIndex(var_268_cvector, 0);
	var_478_float = GetByIndex(var_268_cvector, 2);
	@RotateAsync(var_477_float, var_478_float);
	func_1530((float)0, (float)1, 0.75);
	@RemoveActor(var_276_object);
	func_1142(var_279_cvector);
	object var_493_object;
	var_239_object = var_493_object;
	func_1380(var_493_object, 0, var_323_object, var_1_object, var_356_object);
	object var_517_object;
	var_239_object = var_517_object;
	func_1380(var_517_object, 1, var_340_object, var_3_string, var_370_object);
	object var_522_object;
	var_239_object = var_522_object;
	func_1380(var_522_object, 2, var_344_object, var_5_object, var_373_object);
	object var_527_object;
	var_239_object = var_527_object;
	func_1380(var_527_object, 3, var_348_object, var_7_object, var_376_object);
	object var_532_object;
	var_239_object = var_532_object;
	func_1380(var_532_object, 4, var_352_object, var_9_bool, var_379_object);
	var_239_object->SelectWeapon();
	cvector var_278_cvector;
	var_270_object->GetLocator("pt_arena_return", var_275_bool, var_278_cvector, var_279_cvector);
	@Teleport(var_239_object, var_270_object, var_278_cvector, var_279_cvector);
	@StopAsync();
	var_538_float = GetByIndex(var_268_cvector, 0);
	var_539_float = GetByIndex(var_268_cvector, 2);
	@Rotate(var_538_float, var_539_float);
	func_1530((float)1, (float)0, 0.75);
	@UnlockCamera();
	func_1474();
	func_1462();
	object var_547_object;
	var_239_object = var_547_object;
	func_1284(var_547_object);
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-10] = 0";


void func_1550(string var_59_string, int var_60_int)
{
	string var_62_string = "idle";
	if(var_60_int != 0)
		var_62_string += var_60_int;
	var_62_string = var_59_string;
}


void func_1423(void)
{
	bool var_33_bool;
	func_1582(var_33_bool);
	if(var_33_bool != 0)
		@lshStopSpeech();
}


void func_655(void)
{
	if(var_2_object != 0)
		@StopAnimation();
	else
		func_769();
	
}


void func_1166(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_1557(int var_53_int)
{
	int var_56_int; bool var_57_bool;
	var_56_int = 0;
	
	for(;;) {
		string var_59_string; int var_60_int;
		var_56_int = var_60_int;
		func_1550(var_59_string, var_60_int);
		@HasAnimation(var_57_bool, "all", var_59_string);
		if(!var_57_bool) //@nz
			break;
		var_56_int += 1;
	}
	var_56_int = var_53_int;
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
	func_1430(var_71_cvector, (var_60_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_61_cvector = ((var_59_cvector * var_46_float) + (var_71_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_63_bool;
	@IsOverrideActive(var_63_bool);
	if(var_63_bool != 0)
		var_44_bool = false;
	@StopWorld();
	@CameraTransit((var_58_cvector + var_61_cvector), var_60_cvector, true);
	var_85_float = GetByIndex(var_61_cvector, 0);
	var_86_float = GetByIndex(var_61_cvector, 2);
	@Rotate(var_85_float, var_86_float);
	bool var_87_bool;
	func_1582(var_87_bool);
	if(var_87_bool != 0) {
	} else {
		@HasAnimationTrack(var_64_bool, "head");
		if(var_64_bool == 0) goto Label_1237;
		@LookAsyncCamera("head");
	}
Label_1237:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_44_bool = true;
	
}


void func_1430(cvector var_71_cvector, cvector var_72_cvector)
{
	float var_75_float = sqrt(var_72_cvector | var_72_cvector);
	if(var_75_float < 0.000001)
		var_71_cvector = [0.0, 0.0, 0.0];
	var_71_cvector = var_72_cvector / var_75_float;
}


void func_664(object var_2_object)
{
	int var_52_int;
	var_2_object = true;
	int var_53_int;
	func_1557(var_53_int);
	int var_51_int;
	var_53_int = var_51_int;
	if(var_51_int != 0) {
		@irand(var_52_int, var_51_int);
		string var_68_string; int var_69_int;
		var_52_int = var_69_int;
		func_1550(var_68_string, var_69_int);
		@PlayAnimation("all", var_68_string);
		@WaitForAnimEnd();
	}
	var_2_object = false;
}


void func_1304(string var_138_string)
{
	bool var_142_bool; float var_143_float; float var_144_float;
	@lshHasAnimation(var_142_bool, var_138_string);
	if(var_142_bool != 0) {
		@lshGetAnimTimes(var_138_string, var_143_float, var_144_float);
		@lshPlayAnimation(var_143_float, var_144_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_138_string);
	}
	
}


// @pe
void func_410(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_105_object, object var_106_object)
{
	var_0_object = var_106_object;
	var_1_object = var_105_object;
	var_3_string = false;
	if(1 != 0) {
		func_468(var_106_object, "Neutral");
		var_0_object->SetMessage(520523); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520524, -1, 21727); //@t
		var_0_object->AddReply(529950, -1, 31334); //@t
		goto Label_438;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x19e";
	}
Label_438:
	bool var_136_bool;
	func_1582(var_136_bool);
	if(var_136_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1304(var_2_object);
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


void func_1440(float var_70_float, cvector var_71_cvector, cvector var_72_cvector)
{
	var_70_float = (var_72_cvector - var_71_cvector) | (var_72_cvector - var_71_cvector);
}


// @pe
void func_162(object var_2_object, string var_204_string)
{
	bool var_205_bool;
	func_1582(var_205_bool);
	if(!var_205_bool) //@nz
		return 0;
	if(var_204_string == var_2_object)
		return 0;
	string var_208_string; bool var_209_bool;
	var_204_string = var_208_string;
	if(var_204_string == "")
		var_209_bool = false;
	else
		var_209_bool = true;
	func_1320(var_208_string, var_209_bool);
	var_2_object = var_204_string;
	
}


void func_1444(object var_280_object)
{
	object var_282_object;
	@CreateObjectVector(var_282_object);
	var_282_object = var_280_object;
}
EMIT "Stack[-1] = 0";


void func_1574(int var_93_int)
{
	var_93_int = 521048;
}


void func_1576(int var_92_int)
{
	var_92_int = 521047;
}


void func_1320(string var_116_string, bool var_117_bool)
{
	bool var_123_bool; float var_124_float; float var_125_float;
	@lshHasAnimation(var_123_bool, var_116_string);
	if(var_123_bool != 0) {
		@lshGetAnimTimes(var_116_string, var_124_float, var_125_float);
		@lshPlayAnimation(var_124_float, var_125_float, var_117_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_116_string);
	}
	
}


void func_1578(string var_94_string)
{
	var_94_string = "ui/NPC_Morlok.png";
}


void func_1450(int var_194_int, string var_195_string)
{
	int var_197_int;
	@GetVariable(var_195_string, var_197_int);
	var_197_int = var_194_int;
}


void func_1580(string var_95_string)
{
	var_95_string = "ui/NPC_Morlok_b.png";
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
			func_1440(var_70_float, var_1_object, var_72_cvector);
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


void func_1582(bool var_87_bool)
{
	var_87_bool = false;
}


void func_1455(string var_297_string, int var_298_int)
{
	int var_300_int;
	@GetVariable(var_297_string, var_300_int);
	@SetVariable(var_297_string, (var_300_int + var_298_int));
}


// @pe
void func_1584(void)
{
	@SetVariable("ooArenaManager1", 1);
}


// @pe
void func_1590(object var_37_object)
{
	var_37_object->SetReturnValue(1);
}


void func_1335(object var_323_object, object var_324_object, int var_325_int, object var_326_object)
{
	object var_335_object; int var_336_int;
	object var_337_object;
	func_1444(var_337_object);
	object var_332_object;
	var_337_object = var_332_object;
	int var_333_int;
	var_324_object->GetItemCount(var_333_int, var_325_int);
	int var_334_int = 0;
	
	while(var_334_int < var_333_int) {
		var_324_object->GetItem(var_335_object, var_334_int, var_325_int);
		var_332_object->add(var_335_object);
		var_324_object->GetItemAmount(var_336_int, var_334_int, var_325_int);
		var_326_object->add(var_336_int);
		var_335_object = null;
		var_334_int += 1;
	}
	
	var_332_object = var_323_object;
}
EMIT "Stack[-5] = 0";


void func_1080(object var_382_object)
{
	int var_391_int; object var_393_object; int var_394_int; bool var_395_bool; int var_396_int;
	var_382_object->GetItemCount(var_391_int, 0);
	int var_392_int = 0;
	
	for(;;) {
		if(!(var_392_int < var_391_int)) goto Label_1124;
		var_382_object->GetItem(var_393_object, var_392_int);
		var_393_object->GetItemID(var_394_int);
		@HasInvItemProperty(var_395_bool, var_394_int, "Group");
		if(var_395_bool == 0) goto Label_1110;
		@GetInvItemProperty(var_396_int, var_394_int, "Group");
		if(!(var_396_int != 0)) goto Label_1104;
		goto Label_1121;
	EMIT "GOTO 0x456";

	Label_1121:
		var_392_int += 1;
	}
	
Label_1104:
	bool var_397_bool;
	var_382_object->IsItemSelected(var_397_bool, var_392_int, 0);
	if(var_397_bool != 0) {
		goto Label_1121;
	}
Label_1110:
	int var_398_int;
	var_382_object->GetItemAmount(var_398_int, var_392_int, 0);
	var_382_object->RemoveItem(var_392_int, var_398_int, 0);
	var_392_int += -1;
	var_391_int += -1;
	var_393_object = null;
	
Label_1124:
}


void func_1462(void)
{
	func_1455("noinv_drop", -1);
}


// @pe
void func_1595(object var_36_object)
{
	@Trace("blood is given");
	object var_39_object;
	var_36_object = var_39_object;
	func_1517(var_39_object, "blood", 1);
}


void func_1468(void)
{
	func_1455("noinv_drop", 1);
}


void func_577(cvector var_32_cvector)
{
	cvector var_34_cvector;
	@GetDirection(var_34_cvector);
	var_34_cvector = var_32_cvector;
}


void func_1474(void)
{
	func_1455("nouse_container", -1);
}


// @pe
void func_1606(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1480(void)
{
	func_1455("nouse_container", 1);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_185_object, object var_186_object)
{
	var_0_object = var_186_object;
	var_1_object = var_185_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_192_bool;
		func_1612(var_1_object);
		if(var_192_bool != 0) {
			object var_200_object; object var_201_object;
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_1584();
			func_162(var_186_object, "Neutral");
			var_0_object->SetMessage(520512); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520513, 21717, 21716); //@t
			var_0_object->AddReply(529946, 31329, 31328); //@t
		} else {
					func_162(var_186_object, "Neutral");
					var_0_object->SetMessage(520519); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520520, -1, 21723); //@t
					var_0_object->AddReply(520521, -1, 21724); //@t
		}
	}
	for(;;) {
		bool var_219_bool;
		func_1582(var_219_bool);
		if(var_219_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1304(var_2_object);
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


// @pe
void func_1612(bool var_192_bool)
{
	int var_194_int;
	func_1450(var_194_int, "ooArenaManager1");
	if(var_194_int == 0) {
		var_192_bool = true;
		return 0;
	}
	var_192_bool = false;
}


void func_1486(int var_55_int, int var_56_int)
{
	object var_58_object;
	@CreateIntVector(var_58_object);
	var_58_object->add(var_55_int);
	var_58_object->add(var_56_int);
	@SendWorldWndMessage(3, var_58_object);
}
EMIT "Stack[-1] = 0";


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
	int var_92_int;
	func_1576(var_92_int);
	var_40_object->SetNPCName(var_92_int);
	int var_93_int;
	func_1574(var_93_int);
	var_40_object->SetNPCDescription(var_93_int);
	string var_94_string;
	func_1578(var_94_string);
	var_40_object->SetPhoto(var_94_string);
	string var_95_string;
	func_1580(var_95_string);
	var_40_object->SetPhoto2(var_95_string);
	int var_96_int;
	func_1624(var_96_int);
	var_40_object->SetPlayerName(var_96_int);
	bool var_41_bool;
	@IsOverrideActive(var_41_bool);
	if(var_41_bool != 0) {
		var_33_int = -2;
		return 8;
	}
	@DoDialog(var_40_object);
	object var_105_object; object var_106_object;
	var_34_object = var_105_object;
	var_40_object = var_106_object;
	TaskCall(3);
	func_410(var_107_object, var_108_object, var_109_string, var_110_bool, var_105_object, var_106_object);
	TaskReturn();
	bool var_43_bool;
	var_40_object->IsDialogEnd(var_43_bool);
	
	for(;;) {
		var_154_bool = !var_43_bool; //@nz
		if(var_154_bool == 0) goto Label_399;
		@sync();
		var_40_object->IsDialogEnd(var_43_bool);
	}
	
Label_399:
	object var_155_object;
	var_34_object = var_155_object;
	func_1243();
	@StopDialog(var_40_object);
	var_40_object->GetReturnValue(-1);
	int var_42_int = var_33_int;
}
EMIT "Stack[-4] = 0";


void func_1360(object var_356_object, object var_357_object, int var_358_int)
{
	object var_363_object; bool var_366_bool;
	@CreateIntVector(var_363_object);
	int var_364_int;
	var_357_object->GetItemCount(var_364_int, var_358_int);
	int var_365_int = 0;
	
	while(var_365_int < var_364_int) {
		var_357_object->IsItemSelected(var_366_bool, var_365_int, var_358_int);
		if(var_366_bool != 0)
			var_363_object->add(var_365_int);
		var_365_int += 1;
	}
	
	var_363_object = var_356_object;
}
EMIT "Stack[-4] = 0";


// @pe
void func_468(object var_2_object, string var_112_string)
{
	bool var_113_bool;
	func_1582(var_113_bool);
	if(!var_113_bool) //@nz
		return 0;
	if(var_112_string == var_2_object)
		return 0;
	string var_116_string; bool var_117_bool;
	var_112_string = var_116_string;
	if(var_112_string == "")
		var_117_bool = false;
	else
		var_117_bool = true;
	func_1320(var_116_string, var_117_bool);
	var_2_object = var_112_string;
	
}


void func_1624(int var_96_int)
{
	int var_98_int;
	@GetVariable("branch", var_98_int);
	if(var_98_int == 0) {
		var_96_int = 1;
		return 2;
	EMIT "GOTO 0x667";
	}
	if(var_98_int == 1) {
		var_96_int = 2;
		return 2;
	}
	var_96_int = 3;
}


void func_1498(object var_44_object, object var_45_object, int var_46_int)
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
		func_1486(var_55_int, var_56_int);
	}
	
}


void func_1243(void)
{
	bool var_157_bool;
	@CameraSwitchToNormal(true);
	bool var_159_bool;
	func_1582(var_159_bool);
	if(var_159_bool != 0) {
	} else {
		@HasAnimationTrack(var_157_bool, "head");
		if(var_157_bool == 0) goto Label_1260;
		@UnlookAsync("head");
	}
Label_1260:
	
}


void func_1380(object var_493_object, int var_494_int, object var_495_object, object var_496_object, object var_497_object)
{
	object var_507_object; int var_508_int; bool var_509_bool; int var_511_int;
	var_493_object->RemoveAllItems(var_494_int);
	int var_505_int;
	var_495_object->size(var_505_int);
	int var_506_int = 0;
	
	while(var_506_int < var_505_int) {
		var_495_object->get(var_507_object, var_506_int);
		var_496_object->get(var_508_int, var_506_int);
		var_493_object->AddItem(var_509_bool, var_507_object, var_494_int, var_508_int);
		var_507_object = null;
		var_506_int += 1;
	}
	
	var_497_object->size(var_505_int);
	int var_510_int = 0;
	
	while(var_510_int < var_505_int) {
		var_497_object->get(var_511_int, var_510_int);
		var_493_object->SelectItem(var_511_int, true, var_494_int);
		var_510_int += 1;
	}
	
}


void func_1125(object var_15_object, object var_420_object, string var_421_string, string var_422_string, string var_423_string)
{
	cvector var_428_cvector; cvector var_429_cvector; bool var_430_bool;
	var_420_object->GetLocator(var_423_string, var_430_bool, var_428_cvector, var_429_cvector);
	if(!var_430_bool) //@nz
		@Trace("Locator doesn't exist for arena spectator " + var_423_string);
	object var_431_object;
	var_420_object->AddStationaryActor(var_431_object, var_428_cvector, var_429_cvector, var_421_string, var_422_string, true);
	var_15_object->add(var_431_object); //@t
}
EMIT "Stack[-1] = 0";


void func_1641(bool var_36_bool, object var_37_object)
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


void func_1261(object var_283_object)
{
	int var_287_int;
	if(!var_283_object) { //@nz
	}
	bool var_286_bool;
	var_283_object->HasProperty("noaccess", var_286_bool);
	if(var_286_bool != 0) {
		var_283_object->GetProperty("noaccess", var_287_int);
		var_283_object->SetProperty("noaccess", (var_287_int + 1));
	} else {
		var_283_object->SetProperty("noaccess", 1);
	}
	
}


void func_1517(object var_39_object, string var_40_string, int var_41_int)
{
	object var_43_object;
	@CreateInvItem(var_43_object);
	var_43_object->SetItemName(var_40_string);
	object var_44_object; object var_45_object; int var_46_int;
	var_39_object = var_44_object;
	var_43_object = var_45_object;
	var_41_int = var_46_int;
	func_1498(var_44_object, var_45_object, var_46_int);
}
EMIT "Stack[-1] = 0";


void func_1142(object var_15_object)
{
	int var_486_int; object var_488_object; object var_489_object;
	var_15_object->size(var_486_int); //@t
	int var_487_int = 0;
	
	while(var_487_int < var_486_int) {
		var_15_object->get(var_488_object, var_487_int); //@t
		var_488_object->GetActor(var_489_object);
		if(var_489_object != null)
			@RemoveActor(var_489_object);
		var_488_object->Remove();
		var_489_object = null;
		var_488_object = null;
		var_487_int += 1;
	}
	
	var_15_object->clear(); //@t
}


void func_1530(float var_309_float, float var_310_float, float var_311_float)
{
	bool var_315_bool; float var_317_float;
	var_315_bool = var_310_float > var_309_float;
	
	for(;;) {
		if(var_315_bool != 0)
			var_320_bool = var_309_float < var_310_float;
		else
			var_322_bool = var_310_float < var_309_float;
		if(var_320_bool == 0) goto Label_1547;
		@ModDarkenLevel(var_309_float);
		@sync(var_317_float);
		var_309_float += (var_317_float * ((var_310_float - var_309_float) / var_311_float));
	}
	
Label_1547:
	@ModDarkenLevel(var_310_float);
	
}


