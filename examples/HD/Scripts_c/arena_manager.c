// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,SetTimer/2,GetDirection/1,KillTimer/1,FindActor/2,UnlookAsync/1,irand/2,GetPFPosition/1,Sleep/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,WaitForAnimEnd/1,Sleep/1,StopGroup0/0,Stop/0,LockCamera/0,RotateAsync/2,CreateIntVector/1,GetScene/1,Teleport/4,AddActor/6,Rotate/2,UnlockCamera/0,RemoveActor/1,StopAsync/0,HasInvItemProperty/3,GetInvItemProperty/3,Trace/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,LookAsync/3,lshStopSpeech/0,CreateObjectVector/1,GetVariable/2,SetVariable/2,SendWorldWndMessage/2,CreateInvItem/1,ModDarkenLevel/1,sync/1,HasAnimation/3,TriggerWorld/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:RemoveAllItems|A:SelectWeapon|W:pt_arena_player|A:GetLocator|W:pt_arena_enemy|W:pers_butcher|W:arena_fighter.xml|W:pers_worker|W:arena_spectator_worker.xml|W:pt_arena_spectator1|W:pt_arena_spectator2|W:pers_unosha|W:arena_spectator_unosha.xml|W:pt_arena_spectator3|W:pt_arena_spectator4|W:arena_spectator_unosha2.xml|W:pt_arena_spectator5|W:pers_dohodyaga|W:arena_spectator_dohodyaga.xml|W:pt_arena_spectator6|W:pers_boy|W:arena_spectator_boy.xml|W:pt_arena_spectator7|A:IsDead|W:pt_arena_return|A:GetItemCount|A:GetItem|A:GetItemID|W:Group|A:IsItemSelected|A:GetItemAmount|A:RemoveItem|W:Locator doesn't exist for arena spectator |A:AddStationaryActor|A:add|A:size|A:get|A:GetActor|A:Remove|A:clear|A:GetPosition|A:GetEyesHeight|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty|W:Can't find lsh animation : |A:AddItem|A:SelectItem|W:noinv_drop|W:nouse_container|W:Category|A:DropItems|A:SetItemName|W:ui/NPC_Morlok.png|W:ui/NPC_Morlok_b.png|W:ooArenaManager1|A:SetReturnValue|W:blood is given|W:blood|W:playsound|W:giveitem|W:branch
// @GLOBALS: 0:cvector:,1:bool:
// @RUN_OP: 0x22e
// @RUN_TASK: 4
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb8 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1ea vars=int,int
// @TASK_4: vars=cvector,cvector,bool,bool params=0
// @EVENT_0: op=0x246 vars=object
// @EVENT_7: op=0x26e vars=int
// @TASK_5: vars=object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object params=1
// @PE: 0x4a,0xa2,0xb8,0x19a,0x1d4,0x1ea,0x246,0x630,0x636,0x63b,0x646,0x64c

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_29_object, var_30_object, var_31_object)
{
	if((int)1 != 0) {
		func_1423();
		var_35_bool = var_31_object == (int)21720;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_1590(var_37_object);
		}
		var_40_bool = var_31_object == (int)21723;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_1590(var_42_object);
		}
		var_44_bool = var_30_object == (int)21715;
		if(var_44_bool != 0) {
			var_45_bool = 0; var_46_object = Obj();
			var_46_object = var_1_object;
			func_1612(var_46_object);
			if(var_45_bool != 0) {
				var_53_object = Obj(); var_54_object = Obj();
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_1584();
				var_57_string = "";
				func_162(var_31_object, "Neutral");
				@@@var_0_object:SetMessage((int)520512);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520513, (int)21717, (int)21716);
				@@@var_0_object:AddReply((int)529946, (int)31329, (int)31328);
				return 0;
			}
			var_81_string = "";
			func_162(var_31_object, "Neutral");
			@@@var_0_object:SetMessage((int)520519);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520520, (int)-1, (int)21723);
			@@@var_0_object:AddReply((int)520521, (int)-1, (int)21724);
			return 0;
		}
		var_90_bool = var_30_object == (int)31329;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_162(var_31_object, "Neutral");
			@@@var_0_object:SetMessage((int)529947);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529948, (int)21717, (int)31330);
			return 0;
		}
		var_97_bool = var_30_object == (int)21717;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_162(var_31_object, "Neutral");
			@@@var_0_object:SetMessage((int)520514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520515, (int)21719, (int)21718);
			@@@var_0_object:AddReply((int)529949, (int)21719, (int)31332);
			return 0;
		}
		var_107_bool = var_30_object == (int)21719;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_162(var_31_object, "Neutral");
			@@@var_0_object:SetMessage((int)520516);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520517, (int)-1, (int)21720);
			@@@var_0_object:AddReply((int)520518, (int)-1, (int)21721);
			return 0;
		}
		var_3_string = true;
		var_116_bool = 0;
		func_1582(var_116_bool);
		if(var_116_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb9";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_cvector, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_29_object, var_30_object, var_31_object)
{
	if((int)1 != 0) {
		func_1423();
		var_35_bool = var_31_object == (int)21727;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_1595(var_37_object);
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_1606();
		}
		var_65_bool = var_31_object == (int)31334;
		if(var_65_bool != 0) {
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_1595(var_67_object);
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_1606();
		}
		var_71_bool = var_30_object == (int)21726;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_468(var_31_object, "Neutral");
			@@@var_0_object:SetMessage((int)520523);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520524, (int)-1, (int)21727);
			@@@var_0_object:AddReply((int)529950, (int)-1, (int)31334);
			return 0;
		}
		var_3_string = true;
		var_96_bool = 0;
		func_1582(var_96_bool);
		if(var_96_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1eb";
	
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_29_object, var_30_object)
{
	func_655();
	var_32_string = var_3_string;
	if(var_32_string != 0) {
		var_33_int = 0; var_34_object = Obj();
		var_30_object = var_34_object;
		TaskCall(2);
		func_336(var_35_object, var_33_int, var_34_object);
		TaskReturn();
		var_3_string = false;
		return 0;
	EMIT "GOTO 0x25f";
	}
	var_164_int = 0; var_165_object = Obj();
	var_30_object = var_165_object;
	TaskCall(0);
	func_0(var_166_object, var_164_int, var_165_object);
	TaskReturn();
	var_237_bool = (int)1 != var_166_object;
	if(var_237_bool != 0) {
		return 0;
	}
	KillTimer((int)10);
	var_239_object = Obj();
	var_30_object = var_239_object;
	TaskCall(5);
	func_775(var_240_object, var_241_object, var_242_object, var_243_object, var_244_object, var_245_object, var_246_object, var_247_object, var_248_object, var_249_object, var_250_object, var_251_object, var_252_object, var_253_object, var_254_object, var_255_object, var_239_object);
	TaskReturn();
	var_3_string = true;
	SetTimer((int)10, (float)0.75);
	return 0;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_13_bool, var_14_int, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_29_object, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj();
	var_34_bool = var_30_object == (int)10;
	if(var_34_bool != 0) {
		FindActor(var_32_object, "player");
		var_36_bool = 0; var_37_object = Obj();
		var_32_object = var_37_object;
		func_1641(var_36_bool, var_37_object);
		if(var_36_bool != 0) {
			var_52_bool = GlobalVars[1];
			var_53_bool = var_52_bool == 0; //@nz
			if(var_53_bool != 0) {
				var_54_object = Obj();
				var_32_object = var_54_object;
				func_1412(var_54_object);
				var_61_bool = GlobalVars[1];
				GlobalVars[1] = (bool)1;
			}
		} else {
			var_62_bool = GlobalVars[1];
			if(var_62_bool == 0) goto Label_653;
			UnlookAsync("head");
			var_64_bool = GlobalVars[1];
			GlobalVars[1] = (bool)0;
		}
	Label_653:
		var_32_object = 0;
	}
	return 2;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_29_object)
{
	var_2_object = false;
	var_30_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	var_3_string = false;
	var_31_cvector = GlobalVars[0];
	func_577(CVector(0,0,0));
	var_32_cvector = var_31_cvector;
	GlobalVars[0] = var_31_cvector;
	SetTimer((int)10, (float)0.75);
	func_685(var_28_object, var_29_object);
	return 0;
}


func_0(var_0_object, var_164_int, var_165_object)
{
	var_167_object = Obj(); var_168_bool = 0; var_169_int = 0; var_170_bool = 0; var_171_object = Obj(); var_172_bool = 0; var_173_int = 0; var_174_bool = 0;
	var_0_object = var_165_object;
	var_175_bool = 0; var_176_object = Obj(); var_177_float = 0;
	var_165_object = var_176_object;
	func_1174(var_175_bool, var_176_object, (float)110.0);
	var_178_bool = var_175_bool == 0; //@nz
	if(var_178_bool != 0) {
		var_164_int = -2;
		return 8;
	}
	CreateDialog(var_171_object);
	var_179_int = 0;
	func_1576(var_179_int);
	@@var_171_object:SetNPCName(var_179_int);
	var_180_int = 0;
	func_1574(var_180_int);
	@@var_171_object:SetNPCDescription(var_180_int);
	var_181_string = "";
	func_1578(var_181_string);
	@@var_171_object:SetPhoto(var_181_string);
	var_182_string = "";
	func_1580(var_182_string);
	@@var_171_object:SetPhoto2(var_182_string);
	var_183_int = 0;
	func_1624(var_183_int);
	@@var_171_object:SetPlayerName(var_183_int);
	IsOverrideActive(var_172_bool);
	var_184_bool = var_172_bool;
	if(var_184_bool != 0) {
		var_164_int = -2;
		return 8;
	}
	DoDialog(var_171_object);
	var_185_object = Obj(); var_186_object = Obj();
	var_165_object = var_185_object;
	var_171_object = var_186_object;
	TaskCall(1);
	func_74(var_187_object, var_188_object, var_189_string, var_190_bool, var_185_object, var_186_object);
	TaskReturn();
	@@var_171_object:IsDialogEnd(var_174_bool);
	
Label_56:
	var_235_bool = var_174_bool == 0; //@nz
	if(var_235_bool != 0) {
		sync();
		@@var_171_object:IsDialogEnd(var_174_bool);
		goto Label_56;
	}
	var_165_object = Obj();
	func_1243();
	StopDialog(var_171_object);
	@@var_171_object:GetReturnValue((int)-1);
	var_173_int = var_164_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_769()
{
	StopGroup0();
	Stop();
	return 0;
}


func_1412(var_54_object)
{
	var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_cvector = CVector(0,0,0);
	@@var_54_object:GetEyesHeight(var_57_float);
	var_58_cvector = CVector(0.0, 0.0, 0.0);
	var_59_float = GetByIndex(var_58_cvector, 1);
	var_57_float = var_59_float;
	SetByIndex(var_58_cvector, 1) = var_59_float;
	LookAsync(var_54_object, "head", var_58_cvector);
	return 4;
}


func_1284(var_547_object)
{
	var_548_int = 0; var_549_int = 0;
	var_550_bool = var_547_object == 0; //@nz
	if(var_550_bool != 0) {
		return 2;
	}
	@@var_547_object:GetProperty("noaccess", var_549_int);
	var_553_bool = var_549_int > (int)1;
	if(var_553_bool != 0) {
		var_556_int = var_549_int - (int)1;
		@@var_547_object:SetProperty("noaccess", var_556_int);
	} else {
		@@var_547_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_774()
{
	return 0;
}


func_775(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_13_bool, var_14_object, var_15_object, var_239_object)
{
	var_256_cvector = CVector(0,0,0); var_257_int = 0; var_258_object = Obj(); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_bool = 0; var_264_object = Obj(); var_265_bool = 0; var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); var_268_cvector = CVector(0,0,0); var_269_int = 0; var_270_object = Obj(); var_271_cvector = CVector(0,0,0); var_272_cvector = CVector(0,0,0); var_273_cvector = CVector(0,0,0); var_274_cvector = CVector(0,0,0); var_275_bool = 0; var_276_object = Obj(); var_277_bool = 0; var_278_cvector = CVector(0,0,0); var_279_cvector = CVector(0,0,0);
	var_280_object = Obj();
	func_1444(var_280_object);
	var_15_object = var_280_object;
	var_283_object = Obj();
	var_239_object = var_283_object;
	func_1261(var_283_object);
	func_1468();
	func_1480();
	var_304_cvector = GlobalVars[0];
	var_304_cvector = var_268_cvector;
	LockCamera();
	var_305_float = GetByIndex(var_268_cvector, 0);
	var_306_int = -var_305_float;
	var_307_float = GetByIndex(var_268_cvector, 2);
	var_308_int = -var_307_float;
	RotateAsync(var_306_int, var_308_int);
	var_309_float = 0; var_310_float = 0; var_311_float = 0;
	func_1530((float)0, (float)1, (float)0.75);
	CreateIntVector(var_1_object);
	CreateIntVector(var_3_string);
	CreateIntVector(var_5_object);
	CreateIntVector(var_7_object);
	CreateIntVector(var_9_bool);
	var_323_object = Obj(); var_324_object = Obj(); var_325_int = 0; var_326_object = Obj();
	var_239_object = var_324_object;
	var_326_object = var_1_object;
	func_1335(var_323_object, var_324_object, (int)0, var_326_object);
	var_0_object = var_323_object;
	var_340_object = Obj(); var_341_object = Obj(); var_342_int = 0; var_343_object = Obj();
	var_239_object = var_341_object;
	var_343_object = var_3_string;
	func_1335(var_340_object, var_341_object, (int)1, var_343_object);
	var_2_object = var_340_object;
	var_344_object = Obj(); var_345_object = Obj(); var_346_int = 0; var_347_object = Obj();
	var_239_object = var_345_object;
	var_347_object = var_5_object;
	func_1335(var_344_object, var_345_object, (int)2, var_347_object);
	var_4_bool = var_344_object;
	var_348_object = Obj(); var_349_object = Obj(); var_350_int = 0; var_351_object = Obj();
	var_239_object = var_349_object;
	var_351_object = var_7_object;
	func_1335(var_348_object, var_349_object, (int)3, var_351_object);
	var_6_object = var_348_object;
	var_352_object = Obj(); var_353_object = Obj(); var_354_int = 0; var_355_object = Obj();
	var_239_object = var_353_object;
	var_355_object = var_9_bool;
	func_1335(var_352_object, var_353_object, (int)4, var_355_object);
	var_8_string = var_352_object;
	var_356_object = Obj(); var_357_object = Obj(); var_358_int = 0;
	var_239_object = var_357_object;
	func_1360(var_356_object, var_357_object, (int)0);
	var_10_cvector = var_356_object;
	var_370_object = Obj(); var_371_object = Obj(); var_372_int = 0;
	var_239_object = var_371_object;
	func_1360(var_370_object, var_371_object, (int)1);
	var_11_cvector = var_370_object;
	var_373_object = Obj(); var_374_object = Obj(); var_375_int = 0;
	var_239_object = var_374_object;
	func_1360(var_373_object, var_374_object, (int)2);
	var_12_bool = var_373_object;
	var_376_object = Obj(); var_377_object = Obj(); var_378_int = 0;
	var_239_object = var_377_object;
	func_1360(var_376_object, var_377_object, (int)3);
	var_13_bool = var_376_object;
	var_379_object = Obj(); var_380_object = Obj(); var_381_int = 0;
	var_239_object = var_380_object;
	func_1360(var_379_object, var_380_object, (int)4);
	var_14_object = var_379_object;
	var_382_object = Obj();
	var_239_object = var_382_object;
	func_1080(var_382_object);
	var_269_int = 1;
	
Label_887:
	var_414_bool = var_269_int < (int)5;
	if(var_414_bool != 0) {
		@@var_239_object:RemoveAllItems(var_269_int);
		var_269_int = var_269_int + (int)1;
		goto Label_887;
	}
	@@var_239_object:SelectWeapon();
	GetScene(var_270_object);
	@@var_270_object:GetLocator("pt_arena_player", var_275_bool, var_271_cvector, var_272_cvector);
	@@var_270_object:GetLocator("pt_arena_enemy", var_275_bool, var_273_cvector, var_274_cvector);
	Teleport(var_239_object, var_270_object, var_271_cvector, var_272_cvector);
	AddActor(var_276_object, "pers_butcher", var_270_object, var_273_cvector, var_274_cvector, "arena_fighter.xml");
	var_420_object = Obj(); var_421_string = ""; var_422_string = ""; var_423_string = "";
	var_270_object = var_420_object;
	func_1125(var_279_cvector, var_420_object, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator1");
	var_436_object = Obj(); var_437_string = ""; var_438_string = ""; var_439_string = "";
	var_270_object = var_436_object;
	func_1125(var_279_cvector, var_436_object, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator2");
	var_440_object = Obj(); var_441_string = ""; var_442_string = ""; var_443_string = "";
	var_270_object = var_440_object;
	func_1125(var_279_cvector, var_440_object, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator3");
	var_444_object = Obj(); var_445_string = ""; var_446_string = ""; var_447_string = "";
	var_270_object = var_444_object;
	func_1125(var_279_cvector, var_444_object, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator4");
	var_448_object = Obj(); var_449_string = ""; var_450_string = ""; var_451_string = "";
	var_270_object = var_448_object;
	func_1125(var_279_cvector, var_448_object, "pers_unosha", "arena_spectator_unosha2.xml", "pt_arena_spectator5");
	var_452_object = Obj(); var_453_string = ""; var_454_string = ""; var_455_string = "";
	var_270_object = var_452_object;
	func_1125(var_279_cvector, var_452_object, "pers_dohodyaga", "arena_spectator_dohodyaga.xml", "pt_arena_spectator6");
	var_456_object = Obj(); var_457_string = ""; var_458_string = ""; var_459_string = "";
	var_270_object = var_456_object;
	func_1125(var_279_cvector, var_456_object, "pers_boy", "arena_spectator_boy.xml", "pt_arena_spectator7");
	var_460_float = GetByIndex(var_268_cvector, 0);
	var_461_int = -var_460_float;
	var_462_float = GetByIndex(var_268_cvector, 2);
	var_463_int = -var_462_float;
	Rotate(var_461_int, var_463_int);
	var_464_object = Obj();
	var_239_object = var_464_object;
	func_1412(var_464_object);
	var_471_float = 0; var_472_float = 0; var_473_float = 0;
	func_1530((float)1, (float)0, (float)0.75);
	UnlockCamera();
	
Label_978:
	Sleep((int)1);
	var_475_bool = var_239_object != 0; //@nn
	if(var_475_bool == 0) goto Label_988;
	@@var_276_object:IsDead(var_277_bool);
	var_476_bool = var_277_bool;
	if(var_476_bool != 0) {
	} else {
		goto Label_978;
	}
	LockCamera();
	var_477_float = GetByIndex(var_268_cvector, 0);
	var_478_float = GetByIndex(var_268_cvector, 2);
	RotateAsync(var_477_float, var_478_float);
	var_479_float = 0; var_480_float = 0; var_481_float = 0;
	func_1530((float)0, (float)1, (float)0.75);
	RemoveActor(var_276_object);
	func_1142(var_279_cvector);
	var_493_object = Obj(); var_494_int = 0; var_495_object = Obj(); var_496_object = Obj(); var_497_object = Obj();
	var_239_object = var_493_object;
	var_495_object = var_0_object;
	var_496_object = var_1_object;
	var_497_object = var_10_cvector;
	func_1380(var_493_object, (int)0, var_495_object, var_496_object, var_497_object);
	var_517_object = Obj(); var_518_int = 0; var_519_object = Obj(); var_520_object = Obj(); var_521_object = Obj();
	var_239_object = var_517_object;
	var_519_object = var_2_object;
	var_520_object = var_3_string;
	var_521_object = var_11_cvector;
	func_1380(var_517_object, (int)1, var_519_object, var_520_object, var_521_object);
	var_522_object = Obj(); var_523_int = 0; var_524_object = Obj(); var_525_object = Obj(); var_526_object = Obj();
	var_239_object = var_522_object;
	var_524_object = var_4_bool;
	var_525_object = var_5_object;
	var_526_object = var_12_bool;
	func_1380(var_522_object, (int)2, var_524_object, var_525_object, var_526_object);
	var_527_object = Obj(); var_528_int = 0; var_529_object = Obj(); var_530_object = Obj(); var_531_object = Obj();
	var_239_object = var_527_object;
	var_529_object = var_6_object;
	var_530_object = var_7_object;
	var_531_object = var_13_bool;
	func_1380(var_527_object, (int)3, var_529_object, var_530_object, var_531_object);
	var_532_object = Obj(); var_533_int = 0; var_534_object = Obj(); var_535_object = Obj(); var_536_object = Obj();
	var_239_object = var_532_object;
	var_534_object = var_8_string;
	var_535_object = var_9_bool;
	var_536_object = var_14_object;
	func_1380(var_532_object, (int)4, var_534_object, var_535_object, var_536_object);
	@@var_239_object:SelectWeapon();
	@@var_270_object:GetLocator("pt_arena_return", var_275_bool, var_278_cvector, var_279_cvector);
	Teleport(var_239_object, var_270_object, var_278_cvector, var_279_cvector);
	StopAsync();
	var_538_float = GetByIndex(var_268_cvector, 0);
	var_539_float = GetByIndex(var_268_cvector, 2);
	Rotate(var_538_float, var_539_float);
	var_540_float = 0; var_541_float = 0; var_542_float = 0;
	func_1530((float)1, (float)0, (float)0.75);
	UnlockCamera();
	func_1474();
	func_1462();
	var_547_object = Obj();
	var_239_object = var_547_object;
	func_1284(var_547_object);
	return 24;
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-10] = 0";


func_1550(var_59_string, var_60_int)
{
	var_61_string = ""; var_62_string = "";
	var_63_int = var_60_int;
	if(var_63_int != 0) {
		"idle" = "idle" + var_60_int;
	}
	var_62_string = var_59_string;
	return 2;
}


func_1423()
{
	var_33_bool = 0;
	func_1582(var_33_bool);
	if(var_33_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_655()
{
	var_31_object = var_2_object;
	if(var_31_object != 0) {
		StopAnimation();
	} else {
		func_769();
	}
	return 0;
	
}


func_1166(var_41_float, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_42_object:GetPosition(var_47_cvector);
	var_48_cvector = var_47_cvector - var_46_cvector;
	var_41_float = var_48_cvector | var_48_cvector;
	return 6;
}


func_1557(var_53_int)
{
	var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0;
	var_56_int = 0;
	
Label_1559:
	var_59_string = ""; var_60_int = 0;
	var_56_int = var_60_int;
	func_1550(var_59_string, var_60_int);
	HasAnimation(var_57_bool, "all", var_59_string);
	var_64_bool = var_57_bool == 0; //@nz
	if(var_64_bool != 0) {
	} else {
		var_56_int = var_56_int + (int)1;
		goto Label_1559;
	}
	var_56_int = var_53_int;
	return 4;
	
}


func_1174(var_44_bool, var_45_object, var_46_float)
{
	var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0;
	@@var_45_object:GetPosition(var_57_cvector);
	@@var_45_object:GetEyesHeight(var_56_float);
	var_65_float = GetByIndex(var_57_cvector, 1);
	var_65_float = var_65_float + var_56_float;
	SetByIndex(var_57_cvector, 1) = var_65_float;
	GetPosition(var_58_cvector);
	GetEyesHeight(var_56_float);
	var_66_float = GetByIndex(var_58_cvector, 1);
	var_66_float = var_66_float + var_56_float;
	SetByIndex(var_58_cvector, 1) = var_66_float;
	var_59_cvector = var_57_cvector - var_58_cvector;
	var_67_float = GetByIndex(var_59_cvector, 1);
	SetByIndex(var_59_cvector, 1) = (float)0;
	var_68_int = var_59_cvector | var_59_cvector;
	var_69_float = sqrt(var_68_int);
	var_59_cvector = var_59_cvector / var_69_float;
	var_60_cvector = -var_59_cvector;
	var_70_float = var_59_cvector * var_46_float;
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	var_72_cvector = var_60_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1430(var_71_cvector, var_72_cvector);
	var_80_float = var_71_cvector * (int)25;
	var_81_int = var_70_float + var_80_float;
	var_61_cvector = var_81_int - CVector(0.0, 10.0, 0.0);
	var_62_cvector = var_58_cvector + var_61_cvector;
	IsOverrideActive(var_63_bool);
	var_83_bool = var_63_bool;
	if(var_83_bool != 0) {
		var_44_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_62_cvector, var_60_cvector, (bool)1);
	var_85_float = GetByIndex(var_61_cvector, 0);
	var_86_float = GetByIndex(var_61_cvector, 2);
	Rotate(var_85_float, var_86_float);
	var_87_bool = 0;
	func_1582(var_87_bool);
	if(var_87_bool != 0) {
	} else {
		HasAnimationTrack(var_64_bool, "head");
		var_89_bool = var_64_bool;
		if(var_89_bool == 0) goto Label_1237;
		LookAsyncCamera("head");
	}
Label_1237:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_44_bool = 1;
	return 18;
	
}


func_1430(var_71_cvector, var_72_cvector)
{
	var_74_float = 0; var_75_float = 0;
	var_76_int = var_72_cvector | var_72_cvector;
	var_75_float = sqrt(var_76_int);
	var_77_float = 9.999999974752427e-07;
	var_78_bool = var_75_float < var_77_float;
	if(var_78_bool != 0) {
		var_71_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_71_cvector = var_72_cvector / var_75_float;
	return 2;
}


func_664(var_2_object)
{
	var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0;
	var_2_object = true;
	func_1557((int)0);
	var_53_int = var_51_int;
	var_66_int = var_51_int;
	if(var_66_int != 0) {
		irand(var_52_int, var_51_int);
		var_68_string = ""; var_69_int = 0;
		var_52_int = var_69_int;
		func_1550(var_68_string, var_69_int);
		PlayAnimation("all", var_68_string);
		WaitForAnimEnd();
	}
	var_2_object = false;
	return 4;
}


func_1304(var_138_string)
{
	var_139_bool = 0; var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_float = 0; var_144_float = 0;
	lshHasAnimation(var_142_bool, var_138_string);
	var_145_bool = var_142_bool;
	if(var_145_bool != 0) {
		lshGetAnimTimes(var_138_string, var_143_float, var_144_float);
		lshPlayAnimation(var_143_float, var_144_float, (bool)0);
	} else {
		var_148_int = "Can't find lsh animation : " + var_138_string;
		Trace(var_148_int);
	}
	return 6;
	
}


func_410(var_0_object, var_1_object, var_2_object, var_3_string, var_105_object, var_106_object)
{
	var_0_object = var_106_object;
	var_1_object = var_105_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_112_string = "";
		func_468(var_106_object, "Neutral");
		@@@var_0_object:SetMessage((int)520523);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520524, (int)-1, (int)21727);
		@@@var_0_object:AddReply((int)529950, (int)-1, (int)31334);
		goto Label_438;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x19e";
	}
Label_438:
	var_136_bool = 0;
	func_1582(var_136_bool);
	if(var_136_bool != 0) {

	Label_442:
		lshWaitForAnimEnd();
		var_137_string = var_3_string;
		if(var_137_string != 0) {
		} else {
			var_138_string = "";
			var_138_string = var_2_object;
			func_1304(var_138_string);
			goto Label_442;
	}
		PlayAnimation("all", "idle");

	Label_457:
		WaitForAnimEnd();
		var_151_string = var_3_string;
		if(var_151_string != 0) {
			goto Label_467;
		}
		PlayAnimation("all", "idle");
		goto Label_457;
	}
	goto Label_467;
	
Label_467:
	return 0;
	
}


func_1440(var_70_float, var_71_cvector, var_72_cvector)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	var_74_cvector = var_72_cvector - var_71_cvector;
	var_70_float = var_74_cvector | var_74_cvector;
	return 2;
}


func_162(var_2_object, var_204_string)
{
	var_205_bool = 0;
	func_1582(var_205_bool);
	var_206_bool = var_205_bool == 0; //@nz
	if(var_206_bool != 0) {
		return 0;
	}
	var_207_bool = var_204_string == var_2_object;
	if(var_207_bool != 0) {
		return 0;
	}
	var_208_string = ""; var_209_bool = 0;
	var_204_string = var_208_string;
	var_211_bool = var_204_string == "";
	if(var_211_bool != 0) {
		var_209_bool = 0;
	} else {
		var_209_bool = 1;
	}
	func_1320(var_208_string, var_209_bool);
	var_2_object = var_204_string;
	return 0;
	
}


func_1444(var_280_object)
{
	var_281_object = Obj(); var_282_object = Obj();
	CreateObjectVector(var_282_object);
	var_282_object = var_280_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1574(var_93_int)
{
	var_93_int = 521048;
	return 0;
}


func_1576(var_92_int)
{
	var_92_int = 521047;
	return 0;
}


func_1320(var_116_string, var_117_bool)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0;
	lshHasAnimation(var_123_bool, var_116_string);
	var_126_bool = var_123_bool;
	if(var_126_bool != 0) {
		lshGetAnimTimes(var_116_string, var_124_float, var_125_float);
		lshPlayAnimation(var_124_float, var_125_float, var_117_bool);
	} else {
		var_128_int = "Can't find lsh animation : " + var_116_string;
		Trace(var_128_int);
	}
	return 6;
	
}


func_1578(var_94_string)
{
	var_94_string = "ui/NPC_Morlok.png";
	return 0;
}


func_1450(var_194_int, var_195_string)
{
	var_196_int = 0; var_197_int = 0;
	GetVariable(var_195_string, var_197_int);
	var_197_int = var_194_int;
	return 2;
}


func_1580(var_95_string)
{
	var_95_string = "ui/NPC_Morlok_b.png";
	return 0;
}


func_685(var_0_object, var_1_object)
{
	var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_object = Obj(); var_41_int = 0; var_42_bool = 0; var_43_cvector = CVector(0,0,0); var_44_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_690:
	func_774();
	irand(var_41_int, (int)10);
	var_47_int = var_41_int + (int)5;
	Sleep(var_47_int, var_42_bool);
	var_48_bool = var_42_bool;
	if(var_48_bool != 0) {
		func_664(var_44_object);
	} else {
		func_774();
		GetPFPosition(var_43_cvector);
		var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
		var_71_cvector = var_1_object;
		var_43_cvector = var_72_cvector;
		func_1440(var_70_float, var_71_cvector, var_72_cvector);
		var_76_bool = var_70_float > (int)40000;
		if(var_76_bool != 0) {
			FindPathTo(var_44_object, var_1_object);
			var_77_bool = var_44_object != 0; //@nn
			if(var_77_bool != 0) {
				RotatePath(var_44_object, var_42_bool);
				var_78_bool = var_42_bool == 0; //@nz
				if(var_78_bool != 0) {
				} else {
					FollowPath(var_44_object, (bool)0, var_42_bool);
					var_80_bool = var_42_bool == 0; //@nz
					if(var_80_bool != 0) {
						goto Label_766;
					}
					var_81_float = GetByIndex(var_0_object, 0);
					var_82_float = GetByIndex(var_0_object, 2);
					Rotate(var_81_float, var_82_float, var_42_bool);
					var_83_bool = var_42_bool == 0; //@nz
					if(var_83_bool != 0) {
						goto Label_766;
					}
					WaitForAnimEnd(var_42_bool);
					var_84_bool = var_42_bool == 0; //@nz
					if(var_84_bool != 0) {
						goto Label_766;
					}
					goto Label_767;
				EMIT "GOTO 0x2ef";
			}
				Sleep((int)1);
				var_44_object = 0;
				goto Label_766;
		}
			var_86_float = GetByIndex(var_0_object, 0);
			var_87_float = GetByIndex(var_0_object, 2);
			Rotate(var_86_float, var_87_float, var_42_bool);
			var_88_bool = var_42_bool == 0; //@nz
			if(var_88_bool != 0) {
				goto Label_766;
			}
			WaitForAnimEnd(var_42_bool);
			var_89_bool = var_42_bool == 0; //@nz
			if(var_89_bool != 0) {
				goto Label_766;
			}
			goto Label_767;
		}
	Label_766:
		goto Label_706;
	}
Label_767:
	goto Label_690;
	
}
EMIT "Return(); Pop(8)";


func_1582(var_87_bool)
{
	var_87_bool = 0;
	return 0;
}


func_1455(var_297_string, var_298_int)
{
	var_299_int = 0; var_300_int = 0;
	GetVariable(var_297_string, var_300_int);
	var_301_int = var_300_int + var_298_int;
	SetVariable(var_297_string, var_301_int);
	return 2;
}


func_1584()
{
	SetVariable("ooArenaManager1", (int)1);
	return 0;
}


func_1590(var_37_object)
{
	@@var_37_object:SetReturnValue((int)1);
	return 0;
}


func_1335(var_323_object, var_324_object, var_325_int, var_326_object)
{
	var_327_object = Obj(); var_328_int = 0; var_329_int = 0; var_330_object = Obj(); var_331_int = 0; var_332_object = Obj(); var_333_int = 0; var_334_int = 0; var_335_object = Obj(); var_336_int = 0;
	func_1444(Obj());
	var_337_object = var_332_object;
	@@var_324_object:GetItemCount(var_333_int, var_325_int);
	var_334_int = 0;
	
Label_1343:
	var_338_bool = var_334_int < var_333_int;
	if(var_338_bool != 0) {
		@@var_324_object:GetItem(var_335_object, var_334_int, var_325_int);
		@@var_332_object:add(var_335_object);
		@@var_324_object:GetItemAmount(var_336_int, var_334_int, var_325_int);
		@@var_326_object:add(var_336_int);
		var_335_object = 0;
		var_334_int = var_334_int + (int)1;
		goto Label_1343;
	}
	var_332_object = var_323_object;
	return 10;
}
EMIT "Stack[-5] = 0";


func_1080(var_382_object)
{
	var_383_int = 0; var_384_int = 0; var_385_object = Obj(); var_386_int = 0; var_387_bool = 0; var_388_int = 0; var_389_bool = 0; var_390_int = 0; var_391_int = 0; var_392_int = 0; var_393_object = Obj(); var_394_int = 0; var_395_bool = 0; var_396_int = 0; var_397_bool = 0; var_398_int = 0;
	@@var_382_object:GetItemCount(var_391_int, (int)0);
	var_392_int = 0;
	
Label_1085:
	var_400_bool = var_392_int < var_391_int;
	if(var_400_bool != 0) {
		@@var_382_object:GetItem(var_393_object, var_392_int);
		@@var_393_object:GetItemID(var_394_int);
		HasInvItemProperty(var_395_bool, var_394_int, "Group");
		var_402_bool = var_395_bool;
		if(var_402_bool != 0) {
			GetInvItemProperty(var_396_int, var_394_int, "Group");
			var_405_bool = var_396_int != (int)0;
			if(var_405_bool != 0) {
				goto Label_1121;
			EMIT "GOTO 0x456";

			Label_1121:
				var_392_int = var_392_int + (int)1;
				goto Label_1085;
			}
			@@var_382_object:IsItemSelected(var_397_bool, var_392_int, (int)0);
			var_408_bool = var_397_bool;
			if(var_408_bool != 0) {
				goto Label_1121;
			}
		}
		@@var_382_object:GetItemAmount(var_398_int, var_392_int, (int)0);
		@@var_382_object:RemoveItem(var_392_int, var_398_int, (int)0);
		var_392_int = var_392_int + (int)-1;
		var_391_int = var_391_int + (int)-1;
		var_393_object = 0;
	}
	return 16;
}


func_1462()
{
	var_545_string = ""; var_546_int = 0;
	func_1455("noinv_drop", (int)-1);
	return 0;
}


func_1595(var_36_object)
{
	Trace("blood is given");
	var_39_object = Obj(); var_40_string = ""; var_41_int = 0;
	var_36_object = var_39_object;
	func_1517(var_39_object, "blood", (int)1);
	return 0;
}


func_1468()
{
	var_297_string = ""; var_298_int = 0;
	func_1455("noinv_drop", (int)1);
	return 0;
}


func_577(var_32_cvector)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0);
	GetDirection(var_34_cvector);
	var_34_cvector = var_32_cvector;
	return 2;
}


func_1474()
{
	var_543_string = ""; var_544_int = 0;
	func_1455("nouse_container", (int)-1);
	return 0;
}


func_1606()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1480()
{
	var_302_string = ""; var_303_int = 0;
	func_1455("nouse_container", (int)1);
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_185_object, var_186_object)
{
	var_0_object = var_186_object;
	var_1_object = var_185_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_192_bool = 0; var_193_object = Obj();
		var_193_object = var_1_object;
		func_1612(var_193_object);
		if(var_192_bool != 0) {
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_1584();
			var_204_string = "";
			func_162(var_186_object, "Neutral");
			@@@var_0_object:SetMessage((int)520512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520513, (int)21717, (int)21716);
			@@@var_0_object:AddReply((int)529946, (int)31329, (int)31328);
		} else {
				var_227_string = "";
				func_162(var_186_object, "Neutral");
				@@@var_0_object:SetMessage((int)520519);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520520, (int)-1, (int)21723);
				@@@var_0_object:AddReply((int)520521, (int)-1, (int)21724);
				goto Label_132;
		}
	}
Label_132:
	var_219_bool = 0;
	func_1582(var_219_bool);
	if(var_219_bool != 0) {

	Label_136:
		lshWaitForAnimEnd();
		var_220_string = var_3_string;
		if(var_220_string != 0) {
		} else {
			var_221_string = "";
			var_221_string = var_2_object;
			func_1304(var_221_string);
			goto Label_136;
	}
		PlayAnimation("all", "idle");

	Label_151:
		WaitForAnimEnd();
		var_224_string = var_3_string;
		if(var_224_string != 0) {
			goto Label_161;
		}
		PlayAnimation("all", "idle");
		goto Label_151;

	}
	goto Label_161;
	
Label_161:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_1612(var_192_bool)
{
	var_194_int = 0; var_195_string = "";
	func_1450(var_194_int, "ooArenaManager1");
	var_199_bool = var_194_int == (int)0;
	if(var_199_bool != 0) {
		var_192_bool = 1;
		return 0;
	}
	var_192_bool = 0;
	return 0;
}


func_1486(var_55_int, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateIntVector(var_58_object);
	@@var_58_object:add(var_55_int);
	@@var_58_object:add(var_56_int);
	SendWorldWndMessage((int)3, var_58_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_336(var_0_object, var_33_int, var_34_object)
{
	var_36_object = Obj(); var_37_bool = 0; var_38_int = 0; var_39_bool = 0; var_40_object = Obj(); var_41_bool = 0; var_42_int = 0; var_43_bool = 0;
	var_0_object = var_34_object;
	var_44_bool = 0; var_45_object = Obj(); var_46_float = 0;
	var_34_object = var_45_object;
	func_1174(var_44_bool, var_45_object, (float)110.0);
	var_91_bool = var_44_bool == 0; //@nz
	if(var_91_bool != 0) {
		var_33_int = -2;
		return 8;
	}
	CreateDialog(var_40_object);
	var_92_int = 0;
	func_1576(var_92_int);
	@@var_40_object:SetNPCName(var_92_int);
	var_93_int = 0;
	func_1574(var_93_int);
	@@var_40_object:SetNPCDescription(var_93_int);
	var_94_string = "";
	func_1578(var_94_string);
	@@var_40_object:SetPhoto(var_94_string);
	var_95_string = "";
	func_1580(var_95_string);
	@@var_40_object:SetPhoto2(var_95_string);
	var_96_int = 0;
	func_1624(var_96_int);
	@@var_40_object:SetPlayerName(var_96_int);
	IsOverrideActive(var_41_bool);
	var_104_bool = var_41_bool;
	if(var_104_bool != 0) {
		var_33_int = -2;
		return 8;
	}
	DoDialog(var_40_object);
	var_105_object = Obj(); var_106_object = Obj();
	var_34_object = var_105_object;
	var_40_object = var_106_object;
	TaskCall(3);
	func_410(var_107_object, var_108_object, var_109_string, var_110_bool, var_105_object, var_106_object);
	TaskReturn();
	@@var_40_object:IsDialogEnd(var_43_bool);
	
Label_392:
	var_154_bool = var_43_bool == 0; //@nz
	if(var_154_bool != 0) {
		sync();
		@@var_40_object:IsDialogEnd(var_43_bool);
		goto Label_392;
	}
	var_34_object = Obj();
	func_1243();
	StopDialog(var_40_object);
	@@var_40_object:GetReturnValue((int)-1);
	var_42_int = var_33_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1360(var_356_object, var_357_object, var_358_int)
{
	var_359_object = Obj(); var_360_int = 0; var_361_int = 0; var_362_bool = 0; var_363_object = Obj(); var_364_int = 0; var_365_int = 0; var_366_bool = 0;
	CreateIntVector(var_363_object);
	@@var_357_object:GetItemCount(var_364_int, var_358_int);
	var_365_int = 0;
	
Label_1366:
	var_367_bool = var_365_int < var_364_int;
	if(var_367_bool != 0) {
		@@var_357_object:IsItemSelected(var_366_bool, var_365_int, var_358_int);
		var_368_bool = var_366_bool;
		if(var_368_bool != 0) {
			@@var_363_object:add(var_365_int);
		}
		var_365_int = var_365_int + (int)1;
		goto Label_1366;
	}
	var_363_object = var_356_object;
	return 8;
}
EMIT "Stack[-4] = 0";


func_468(var_2_object, var_112_string)
{
	var_113_bool = 0;
	func_1582(var_113_bool);
	var_114_bool = var_113_bool == 0; //@nz
	if(var_114_bool != 0) {
		return 0;
	}
	var_115_bool = var_112_string == var_2_object;
	if(var_115_bool != 0) {
		return 0;
	}
	var_116_string = ""; var_117_bool = 0;
	var_112_string = var_116_string;
	var_119_bool = var_112_string == "";
	if(var_119_bool != 0) {
		var_117_bool = 0;
	} else {
		var_117_bool = 1;
	}
	func_1320(var_116_string, var_117_bool);
	var_2_object = var_112_string;
	return 0;
	
}


func_1624(var_96_int)
{
	var_97_int = 0; var_98_int = 0;
	GetVariable("branch", var_98_int);
	var_101_bool = var_98_int == (int)0;
	if(var_101_bool != 0) {
		var_96_int = 1;
		return 2;
	EMIT "GOTO 0x667";
	}
	var_103_bool = var_98_int == (int)1;
	if(var_103_bool != 0) {
		var_96_int = 2;
		return 2;
	}
	var_96_int = 3;
	return 2;
}


func_1498(var_44_object, var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0;
	@@var_45_object:GetItemID(var_50_int);
	GetInvItemProperty(var_51_int, var_50_int, "Category");
	@@var_44_object:AddItem(var_52_bool, var_45_object, var_51_int, var_46_int);
	var_54_bool = var_52_bool == 0; //@nz
	if(var_54_bool != 0) {
		@@var_44_object:DropItems(var_45_object, var_46_int);
	} else {
		var_55_int = 0; var_56_int = 0;
		var_50_int = var_55_int;
		var_46_int = var_56_int;
		func_1486(var_55_int, var_56_int);
	}
	return 6;
	
}


func_1243()
{
	var_156_bool = 0; var_157_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_159_bool = 0;
	func_1582(var_159_bool);
	if(var_159_bool != 0) {
	} else {
		HasAnimationTrack(var_157_bool, "head");
		var_161_bool = var_157_bool;
		if(var_161_bool == 0) goto Label_1260;
		UnlookAsync("head");
	}
Label_1260:
	return 2;
	
}


func_1380(var_493_object, var_494_int, var_495_object, var_496_object, var_497_object)
{
	var_498_int = 0; var_499_int = 0; var_500_object = Obj(); var_501_int = 0; var_502_bool = 0; var_503_int = 0; var_504_int = 0; var_505_int = 0; var_506_int = 0; var_507_object = Obj(); var_508_int = 0; var_509_bool = 0; var_510_int = 0; var_511_int = 0;
	@@var_493_object:RemoveAllItems(var_494_int);
	@@var_495_object:size(var_505_int);
	var_506_int = 0;
	
Label_1386:
	var_512_bool = var_506_int < var_505_int;
	if(var_512_bool != 0) {
		@@var_495_object:get(var_507_object, var_506_int);
		@@var_496_object:get(var_508_int, var_506_int);
		@@var_493_object:AddItem(var_509_bool, var_507_object, var_494_int, var_508_int);
		var_507_object = 0;
		var_506_int = var_506_int + (int)1;
		goto Label_1386;
	}
	@@var_497_object:size(var_505_int);
	var_510_int = 0;
	
Label_1401:
	var_514_bool = var_510_int < var_505_int;
	if(var_514_bool != 0) {
		@@var_497_object:get(var_511_int, var_510_int);
		@@var_493_object:SelectItem(var_511_int, (bool)1, var_494_int);
		var_510_int = var_510_int + (int)1;
		goto Label_1401;
	}
	return 14;
}


func_1125(var_15_object, var_420_object, var_421_string, var_422_string, var_423_string)
{
	var_424_cvector = CVector(0,0,0); var_425_cvector = CVector(0,0,0); var_426_bool = 0; var_427_object = Obj(); var_428_cvector = CVector(0,0,0); var_429_cvector = CVector(0,0,0); var_430_bool = 0; var_431_object = Obj();
	@@var_420_object:GetLocator(var_423_string, var_430_bool, var_428_cvector, var_429_cvector);
	var_432_bool = var_430_bool == 0; //@nz
	if(var_432_bool != 0) {
		var_434_int = "Locator doesn't exist for arena spectator " + var_423_string;
		Trace(var_434_int);
		return 8;
	}
	@@var_420_object:AddStationaryActor(var_431_object, var_428_cvector, var_429_cvector, var_421_string, var_422_string, (bool)1);
	@@@var_15_object:add(var_431_object);
	return 8;
}
EMIT "Stack[-1] = 0";


func_1641(var_36_bool, var_37_object)
{
	var_38_float = 0; var_39_float = 0;
	var_40_bool = var_37_object == 0; //@ne
	if(var_40_bool != 0) {
		var_36_bool = 0;
		return 2;
	}
	var_41_float = 0; var_42_object = Obj();
	var_37_object = var_42_object;
	func_1166(var_41_float, var_42_object);
	var_39_float = sqrt(var_41_float);
	var_49_bool = GlobalVars[1];
	if(var_49_bool != 0) {
		var_39_float = var_39_float - (int)100;
	}
	var_36_bool = var_39_float < (int)300;
	return 2;
}


func_1261(var_283_object)
{
	var_284_bool = 0; var_285_int = 0; var_286_bool = 0; var_287_int = 0;
	var_288_bool = var_283_object == 0; //@nz
	if(var_288_bool != 0) {
		return 4;
	}
	@@var_283_object:HasProperty("noaccess", var_286_bool);
	var_290_bool = var_286_bool;
	if(var_290_bool != 0) {
		@@var_283_object:GetProperty("noaccess", var_287_int);
		var_294_int = var_287_int + (int)1;
		@@var_283_object:SetProperty("noaccess", var_294_int);
	} else {
		@@var_283_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_1517(var_39_object, var_40_string, var_41_int)
{
	var_42_object = Obj(); var_43_object = Obj();
	CreateInvItem(var_43_object);
	@@var_43_object:SetItemName(var_40_string);
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0;
	var_39_object = var_44_object;
	var_43_object = var_45_object;
	var_41_int = var_46_int;
	func_1498(var_44_object, var_45_object, var_46_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1142(var_15_object)
{
	var_482_int = 0; var_483_int = 0; var_484_object = Obj(); var_485_object = Obj(); var_486_int = 0; var_487_int = 0; var_488_object = Obj(); var_489_object = Obj();
	@@@var_15_object:size(var_486_int);
	var_487_int = 0;
	
Label_1146:
	var_490_bool = var_487_int < var_486_int;
	if(var_490_bool != 0) {
		@@@var_15_object:get(var_488_object, var_487_int);
		@@var_488_object:GetActor(var_489_object);
		var_491_bool = var_489_object != 0; //@nn
		if(var_491_bool != 0) {
			RemoveActor(var_489_object);
		}
		@@var_488_object:Remove();
		var_489_object = 0;
		var_488_object = 0;
		var_487_int = var_487_int + (int)1;
		goto Label_1146;
	}
	@@@var_15_object:clear();
	return 8;
}


func_1530(var_309_float, var_310_float, var_311_float)
{
	var_312_bool = 0; var_313_float = 0; var_314_float = 0; var_315_bool = 0; var_316_float = 0; var_317_float = 0;
	var_315_bool = var_310_float > var_309_float;
	var_318_int = var_310_float - var_309_float;
	var_316_float = var_318_int / var_311_float;
	
Label_1534:
	var_319_bool = var_315_bool;
	if(var_319_bool != 0) {
		var_320_bool = var_309_float < var_310_float;
	} else {
		var_322_bool = var_310_float < var_309_float;
	}
	if(var_320_bool != 0) {
		ModDarkenLevel(var_309_float);
		sync(var_317_float);
		var_321_float = var_317_float * var_316_float;
		var_309_float = var_309_float + var_321_float;
		goto Label_1534;
	}
	ModDarkenLevel(var_310_float);
	return 6;
	
}


