// @IMPORTS: SetTimer/2,GetDirection/1,KillTimer/1,FindActor/2,UnlookAsync/1,StopAnimation/0,irand/2,PlayAnimation/2,WaitForAnimEnd/0,GetPFPosition/1,Sleep/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,WaitForAnimEnd/1,Sleep/1,StopGroup0/0,Stop/0,LockCamera/0,RotateAsync/2,GetScene/1,Teleport/4,AddActor/6,Rotate/2,UnlockCamera/0,RemoveActor/1,StopAsync/0,HasInvItemProperty/3,GetInvItemProperty/3,Trace/1,GetPosition/1,CreateIntVector/1,LookAsync/3,CreateObjectVector/1,GetVariable/2,SetVariable/2,ModDarkenLevel/1,sync/1,HasAnimation/3
// @STRINGS: W:player|W:head|W:all|A:RemoveAllItems|W:pt_arena_player|A:GetLocator|W:pt_arena_enemy|W:pers_butcher|W:arena_fighter.xml|W:pers_worker|W:arena_spectator_worker.xml|W:pt_arena_spectator1|W:pt_arena_spectator2|W:pers_unosha|W:arena_spectator_unosha.xml|W:pt_arena_spectator3|W:pt_arena_spectator4|W:arena_spectator_unosha2.xml|W:pt_arena_spectator5|W:pers_dohodyaga|W:arena_spectator_dohodyaga.xml|W:pt_arena_spectator6|W:pers_boy|W:arena_spectator_boy.xml|W:pt_arena_spectator7|A:IsDead|A:SelectWeapon|W:pt_arena_return|A:GetItemCount|A:GetItem|A:GetItemID|W:Group|A:IsItemSelected|A:GetItemAmount|A:RemoveItem|W:Locator doesn't exist for arena spectator |A:AddStationaryActor|A:add|A:size|A:get|A:GetActor|A:Remove|A:clear|A:GetPosition|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty|A:AddItem|A:SelectItem|A:GetEyesHeight|W:noinv_drop|W:nouse_container|W:idle
// @GLOBALS: 0:cvector:,1:bool:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=cvector,cvector,bool params=0
// @EVENT_0: op=0x17 vars=object
// @EVENT_7: op=0x29 vars=int
// @TASK_1: vars=object,object,object,object,object,object,object,object,object,object,object params=1
// @PE: 0x17

task_0_event_0(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object)
{
	func_74();
	KillTimer((int)10);
	var_17_object = Obj();
	var_14_object = var_17_object;
	TaskCall(1);
	func_187(var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_17_object);
	TaskReturn();
	SetTimer((int)10, (float)0.75);
	return 0;
}


task_0_event_7(var_0_cvector, var_1_cvector, var_2_bool, var_3_int, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	var_18_bool = var_14_object == (int)10;
	if(var_18_bool != 0) {
		FindActor(var_16_object, "player");
		var_20_bool = 0; var_21_object = Obj();
		var_16_object = var_21_object;
		func_774(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			var_36_bool = GlobalVars[1];
			var_37_bool = var_36_bool == 0; //@nz
			if(var_37_bool != 0) {
				var_38_object = Obj();
				var_16_object = var_38_object;
				func_678(var_38_object);
				var_45_bool = GlobalVars[1];
				GlobalVars[1] = (bool)1;
			}
		} else {
			var_46_bool = GlobalVars[1];
			if(var_46_bool == 0) goto Label_72;
			UnlookAsync("head");
			var_48_bool = GlobalVars[1];
			GlobalVars[1] = (bool)0;
		}
	Label_72:
		var_16_object = 0;
	}
	return 2;
	
}


main(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object)
{
	var_2_bool = false;
	var_14_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	var_15_cvector = GlobalVars[0];
	func_18(CVector(0,0,0));
	var_16_cvector = var_15_cvector;
	GlobalVars[0] = var_15_cvector;
	SetTimer((int)10, (float)0.75);
	func_104(var_12_object, var_13_object);
	return 0;
}


func_706()
{
	var_304_string = ""; var_305_int = 0;
	func_699("noinv_drop", (int)-1);
	return 0;
}


func_515(var_10_object, var_186_object, var_187_string, var_188_string, var_189_string)
{
	var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_bool = 0; var_193_object = Obj(); var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_bool = 0; var_197_object = Obj();
	@@var_186_object:GetLocator(var_189_string, var_196_bool, var_194_cvector, var_195_cvector);
	var_198_bool = var_196_bool == 0; //@nz
	if(var_198_bool != 0) {
		var_200_int = "Locator doesn't exist for arena spectator " + var_189_string;
		Trace(var_200_int);
		return 8;
	}
	@@var_186_object:AddStationaryActor(var_197_object, var_194_cvector, var_195_cvector, var_187_string, var_188_string, (bool)1);
	@@@var_10_object:add(var_197_object);
	return 8;
}
EMIT "Stack[-1] = 0";


func_774(var_20_bool, var_21_object)
{
	var_22_float = 0; var_23_float = 0;
	var_24_bool = var_21_object == 0; //@ne
	if(var_24_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	var_25_float = 0; var_26_object = Obj();
	var_21_object = var_26_object;
	func_556(var_25_float, var_26_object);
	var_23_float = sqrt(var_25_float);
	var_33_bool = GlobalVars[1];
	if(var_33_bool != 0) {
		var_23_float = var_23_float - (int)100;
	}
	var_20_bool = var_23_float < (int)300;
	return 2;
}


func_648(var_259_object, var_260_int, var_261_object, var_262_object)
{
	var_263_int = 0; var_264_int = 0; var_265_object = Obj(); var_266_bool = 0; var_267_int = 0; var_268_int = 0; var_269_int = 0; var_270_int = 0; var_271_object = Obj(); var_272_bool = 0; var_273_int = 0; var_274_int = 0;
	@@var_259_object:RemoveAllItems(var_260_int);
	@@var_261_object:size(var_269_int);
	var_270_int = 0;
	
Label_654:
	var_275_bool = var_270_int < var_269_int;
	if(var_275_bool != 0) {
		@@var_261_object:get(var_271_object, var_270_int);
		@@var_259_object:AddItem(var_272_bool, var_271_object, var_260_int);
		var_271_object = 0;
		var_270_int = var_270_int + (int)1;
		goto Label_654;
	}
	@@var_262_object:size(var_269_int);
	var_273_int = 0;
	
Label_667:
	var_277_bool = var_273_int < var_269_int;
	if(var_277_bool != 0) {
		@@var_262_object:get(var_274_int, var_273_int);
		@@var_259_object:SelectItem(var_274_int, (bool)1, var_260_int);
		var_273_int = var_273_int + (int)1;
		goto Label_667;
	}
	return 12;
}


func_712()
{
	var_70_string = ""; var_71_int = 0;
	func_699("noinv_drop", (int)1);
	return 0;
}


func_74()
{
	var_15_bool = var_2_bool;
	if(var_15_bool != 0) {
		StopAnimation();
	} else {
		func_182();
	}
	return 0;
	
}


func_587(var_306_object)
{
	var_307_int = 0; var_308_int = 0;
	var_309_bool = var_306_object == 0; //@nz
	if(var_309_bool != 0) {
		return 2;
	}
	@@var_306_object:GetProperty("noaccess", var_308_int);
	var_312_bool = var_308_int > (int)1;
	if(var_312_bool != 0) {
		var_315_int = var_308_int - (int)1;
		@@var_306_object:SetProperty("noaccess", var_315_int);
	} else {
		@@var_306_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_718()
{
	var_302_string = ""; var_303_int = 0;
	func_699("nouse_container", (int)-1);
	return 0;
}


func_18(var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0);
	GetDirection(var_18_cvector);
	var_18_cvector = var_16_cvector;
	return 2;
}


func_83(var_2_bool)
{
	var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0;
	var_2_bool = true;
	func_757((int)0);
	var_37_int = var_35_int;
	var_50_int = var_35_int;
	if(var_50_int != 0) {
		irand(var_36_int, var_35_int);
		var_52_string = ""; var_53_int = 0;
		var_36_int = var_53_int;
		func_750(var_52_string, var_53_int);
		PlayAnimation("all", var_52_string);
		WaitForAnimEnd();
	}
	var_2_bool = false;
	return 4;
}


func_532(var_10_object)
{
	var_248_int = 0; var_249_int = 0; var_250_object = Obj(); var_251_object = Obj(); var_252_int = 0; var_253_int = 0; var_254_object = Obj(); var_255_object = Obj();
	@@@var_10_object:size(var_252_int);
	var_253_int = 0;
	
Label_536:
	var_256_bool = var_253_int < var_252_int;
	if(var_256_bool != 0) {
		@@@var_10_object:get(var_254_object, var_253_int);
		@@var_254_object:GetActor(var_255_object);
		var_257_bool = var_255_object != 0; //@nn
		if(var_257_bool != 0) {
			RemoveActor(var_255_object);
		}
		@@var_254_object:Remove();
		var_255_object = 0;
		var_254_object = 0;
		var_253_int = var_253_int + (int)1;
		goto Label_536;
	}
	@@@var_10_object:clear();
	return 8;
}


func_724()
{
	var_75_string = ""; var_76_int = 0;
	func_699("nouse_container", (int)1);
	return 0;
}


func_470(var_148_object)
{
	var_149_int = 0; var_150_int = 0; var_151_object = Obj(); var_152_int = 0; var_153_bool = 0; var_154_int = 0; var_155_bool = 0; var_156_int = 0; var_157_int = 0; var_158_int = 0; var_159_object = Obj(); var_160_int = 0; var_161_bool = 0; var_162_int = 0; var_163_bool = 0; var_164_int = 0;
	@@var_148_object:GetItemCount(var_157_int, (int)0);
	var_158_int = 0;
	
Label_475:
	var_166_bool = var_158_int < var_157_int;
	if(var_166_bool != 0) {
		@@var_148_object:GetItem(var_159_object, var_158_int);
		@@var_159_object:GetItemID(var_160_int);
		HasInvItemProperty(var_161_bool, var_160_int, "Group");
		var_168_bool = var_161_bool;
		if(var_168_bool != 0) {
			GetInvItemProperty(var_162_int, var_160_int, "Group");
			var_171_bool = var_162_int != (int)0;
			if(var_171_bool != 0) {
				goto Label_511;
			EMIT "GOTO 0x1f4";

			Label_511:
				var_158_int = var_158_int + (int)1;
				goto Label_475;
			}
			@@var_148_object:IsItemSelected(var_163_bool, var_158_int, (int)0);
			var_174_bool = var_163_bool;
			if(var_174_bool != 0) {
				goto Label_511;
			}
		}
		@@var_148_object:GetItemAmount(var_164_int, var_158_int, (int)0);
		@@var_148_object:RemoveItem(var_158_int, var_164_int, (int)0);
		var_158_int = var_158_int + (int)-1;
		var_157_int = var_157_int + (int)-1;
		var_159_object = 0;
	}
	return 16;
}


func_730(var_82_float, var_83_float, var_84_float)
{
	var_85_bool = 0; var_86_float = 0; var_87_float = 0; var_88_bool = 0; var_89_float = 0; var_90_float = 0;
	var_88_bool = var_83_float > var_82_float;
	var_91_int = var_83_float - var_82_float;
	var_89_float = var_91_int / var_84_float;
	
Label_734:
	var_92_bool = var_88_bool;
	if(var_92_bool != 0) {
		var_93_bool = var_82_float < var_83_float;
	} else {
		var_95_bool = var_83_float < var_82_float;
	}
	if(var_93_bool != 0) {
		ModDarkenLevel(var_82_float);
		sync(var_90_float);
		var_94_float = var_90_float * var_89_float;
		var_82_float = var_82_float + var_94_float;
		goto Label_734;
	}
	ModDarkenLevel(var_83_float);
	return 6;
	
}


func_607(var_96_object, var_97_object, var_98_int)
{
	var_99_object = Obj(); var_100_int = 0; var_101_int = 0; var_102_object = Obj(); var_103_object = Obj(); var_104_int = 0; var_105_int = 0; var_106_object = Obj();
	func_693(Obj());
	var_107_object = var_103_object;
	@@var_97_object:GetItemCount(var_104_int, var_98_int);
	var_105_int = 0;
	
Label_615:
	var_108_bool = var_105_int < var_104_int;
	if(var_108_bool != 0) {
		@@var_97_object:GetItem(var_106_object, var_105_int, var_98_int);
		@@var_103_object:add(var_106_object);
		var_106_object = 0;
		var_105_int = var_105_int + (int)1;
		goto Label_615;
	}
	var_103_object = var_96_object;
	return 8;
}
EMIT "Stack[-4] = 0";


func_678(var_38_object)
{
	var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0);
	@@var_38_object:GetEyesHeight(var_41_float);
	var_42_cvector = CVector(0.0, 0.0, 0.0);
	var_43_float = GetByIndex(var_42_cvector, 1);
	var_41_float = var_43_float;
	SetByIndex(var_42_cvector, 1) = var_43_float;
	LookAsync(var_38_object, "head", var_42_cvector);
	return 4;
}


func_104(var_0_cvector, var_1_cvector)
{
	var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_object = Obj();
	GetPFPosition(var_1_cvector);
	GetDirection(var_0_cvector);
	
Label_109:
	irand(var_25_int, (int)60);
	var_31_int = var_25_int + (int)30;
	Sleep(var_31_int, var_26_bool);
	var_32_bool = var_26_bool;
	if(var_32_bool != 0) {
		func_83(var_28_object);
	} else {
		GetPFPosition(var_27_cvector);
		var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
		var_55_cvector = var_1_cvector;
		var_27_cvector = var_56_cvector;
		func_689(var_54_float, var_55_cvector, var_56_cvector);
		var_60_bool = var_54_float > (int)40000;
		if(var_60_bool != 0) {
			FindPathTo(var_28_object, var_1_cvector);
			var_61_bool = var_28_object != 0; //@nn
			if(var_61_bool != 0) {
				RotatePath(var_28_object, var_26_bool);
				var_62_bool = var_26_bool == 0; //@nz
				if(var_62_bool != 0) {
				} else {
					FollowPath(var_28_object, (bool)0, var_26_bool);
					var_64_bool = var_26_bool == 0; //@nz
					if(var_64_bool != 0) {
						goto Label_179;
					}
					var_65_float = GetByIndex(var_0_cvector, 0);
					var_66_float = GetByIndex(var_0_cvector, 2);
					Rotate(var_65_float, var_66_float, var_26_bool);
					var_67_bool = var_26_bool == 0; //@nz
					if(var_67_bool != 0) {
						goto Label_179;
					}
					WaitForAnimEnd(var_26_bool);
					var_68_bool = var_26_bool == 0; //@nz
					if(var_68_bool != 0) {
						goto Label_179;
					}
					goto Label_180;
				EMIT "GOTO 0xa4";
			}
				Sleep((int)1);
				var_28_object = 0;
				goto Label_179;
		}
			var_70_float = GetByIndex(var_0_cvector, 0);
			var_71_float = GetByIndex(var_0_cvector, 2);
			Rotate(var_70_float, var_71_float, var_26_bool);
			var_72_bool = var_26_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_179;
			}
			WaitForAnimEnd(var_26_bool);
			var_73_bool = var_26_bool == 0; //@nz
			if(var_73_bool != 0) {
				goto Label_179;
			}
			goto Label_180;
		}
	Label_179:
		goto Label_122;
	}
Label_180:
	goto Label_109;
	
}
EMIT "Return(); Pop(8)";


func_556(var_25_float, var_26_object)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0);
	GetPosition(var_30_cvector);
	@@var_26_object:GetPosition(var_31_cvector);
	var_32_cvector = var_31_cvector - var_30_cvector;
	var_25_float = var_32_cvector | var_32_cvector;
	return 6;
}


func_750(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = "";
	var_47_int = var_44_int;
	if(var_47_int != 0) {
		"idle" = "idle" + var_44_int;
	}
	var_46_string = var_43_string;
	return 2;
}


func_689(var_54_float, var_55_cvector, var_56_cvector)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	var_58_cvector = var_56_cvector - var_55_cvector;
	var_54_float = var_58_cvector | var_58_cvector;
	return 2;
}


func_564(var_56_object)
{
	var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0;
	var_61_bool = var_56_object == 0; //@nz
	if(var_61_bool != 0) {
		return 4;
	}
	@@var_56_object:HasProperty("noaccess", var_59_bool);
	var_63_bool = var_59_bool;
	if(var_63_bool != 0) {
		@@var_56_object:GetProperty("noaccess", var_60_int);
		var_67_int = var_60_int + (int)1;
		@@var_56_object:SetProperty("noaccess", var_67_int);
	} else {
		@@var_56_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_693(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj();
	CreateObjectVector(var_55_object);
	var_55_object = var_53_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_182()
{
	StopGroup0();
	Stop();
	return 0;
}


func_628(var_122_object, var_123_object, var_124_int)
{
	var_125_object = Obj(); var_126_int = 0; var_127_int = 0; var_128_bool = 0; var_129_object = Obj(); var_130_int = 0; var_131_int = 0; var_132_bool = 0;
	CreateIntVector(var_129_object);
	@@var_123_object:GetItemCount(var_130_int, var_124_int);
	var_131_int = 0;
	
Label_634:
	var_133_bool = var_131_int < var_130_int;
	if(var_133_bool != 0) {
		@@var_123_object:IsItemSelected(var_132_bool, var_131_int, var_124_int);
		var_134_bool = var_132_bool;
		if(var_134_bool != 0) {
			@@var_129_object:add(var_131_int);
		}
		var_131_int = var_131_int + (int)1;
		goto Label_634;
	}
	var_129_object = var_122_object;
	return 8;
}
EMIT "Stack[-4] = 0";


func_757(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0;
	var_40_int = 0;
	
Label_759:
	var_43_string = ""; var_44_int = 0;
	var_40_int = var_44_int;
	func_750(var_43_string, var_44_int);
	HasAnimation(var_41_bool, "all", var_43_string);
	var_48_bool = var_41_bool == 0; //@nz
	if(var_48_bool != 0) {
	} else {
		var_40_int = var_40_int + (int)1;
		goto Label_759;
	}
	var_40_int = var_37_int;
	return 4;
	
}


func_187(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_17_object)
{
	var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_object = Obj(); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_int = 0; var_43_object = Obj(); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_53_object = Obj();
	func_693(var_53_object);
	var_10_object = var_53_object;
	var_56_object = Obj();
	var_17_object = var_56_object;
	func_564(var_56_object);
	func_712();
	func_724();
	var_77_cvector = GlobalVars[0];
	var_77_cvector = var_41_cvector;
	LockCamera();
	var_78_float = GetByIndex(var_41_cvector, 0);
	var_79_int = -var_78_float;
	var_80_float = GetByIndex(var_41_cvector, 2);
	var_81_int = -var_80_float;
	RotateAsync(var_79_int, var_81_int);
	var_82_float = 0; var_83_float = 0; var_84_float = 0;
	func_730((float)0, (float)1, (float)0.75);
	var_96_object = Obj(); var_97_object = Obj(); var_98_int = 0;
	var_17_object = var_97_object;
	func_607(var_96_object, var_97_object, (int)0);
	var_0_cvector = var_96_object;
	var_110_object = Obj(); var_111_object = Obj(); var_112_int = 0;
	var_17_object = var_111_object;
	func_607(var_110_object, var_111_object, (int)1);
	var_1_cvector = var_110_object;
	var_113_object = Obj(); var_114_object = Obj(); var_115_int = 0;
	var_17_object = var_114_object;
	func_607(var_113_object, var_114_object, (int)2);
	var_2_bool = var_113_object;
	var_116_object = Obj(); var_117_object = Obj(); var_118_int = 0;
	var_17_object = var_117_object;
	func_607(var_116_object, var_117_object, (int)3);
	var_3_object = var_116_object;
	var_119_object = Obj(); var_120_object = Obj(); var_121_int = 0;
	var_17_object = var_120_object;
	func_607(var_119_object, var_120_object, (int)4);
	var_4_object = var_119_object;
	var_122_object = Obj(); var_123_object = Obj(); var_124_int = 0;
	var_17_object = var_123_object;
	func_628(var_122_object, var_123_object, (int)0);
	var_5_object = var_122_object;
	var_136_object = Obj(); var_137_object = Obj(); var_138_int = 0;
	var_17_object = var_137_object;
	func_628(var_136_object, var_137_object, (int)1);
	var_6_object = var_136_object;
	var_139_object = Obj(); var_140_object = Obj(); var_141_int = 0;
	var_17_object = var_140_object;
	func_628(var_139_object, var_140_object, (int)2);
	var_7_object = var_139_object;
	var_142_object = Obj(); var_143_object = Obj(); var_144_int = 0;
	var_17_object = var_143_object;
	func_628(var_142_object, var_143_object, (int)3);
	var_8_object = var_142_object;
	var_145_object = Obj(); var_146_object = Obj(); var_147_int = 0;
	var_17_object = var_146_object;
	func_628(var_145_object, var_146_object, (int)4);
	var_9_object = var_145_object;
	var_148_object = Obj();
	var_17_object = var_148_object;
	func_470(var_148_object);
	var_42_int = 1;
	
Label_284:
	var_180_bool = var_42_int < (int)5;
	if(var_180_bool != 0) {
		@@var_17_object:RemoveAllItems(var_42_int);
		var_42_int = var_42_int + (int)1;
		goto Label_284;
	}
	GetScene(var_43_object);
	@@var_43_object:GetLocator("pt_arena_player", var_48_bool, var_44_cvector, var_45_cvector);
	@@var_43_object:GetLocator("pt_arena_enemy", var_48_bool, var_46_cvector, var_47_cvector);
	Teleport(var_17_object, var_43_object, var_44_cvector, var_45_cvector);
	AddActor(var_49_object, "pers_butcher", var_43_object, var_46_cvector, var_47_cvector, "arena_fighter.xml");
	var_186_object = Obj(); var_187_string = ""; var_188_string = ""; var_189_string = "";
	var_43_object = var_186_object;
	func_515(var_52_cvector, var_186_object, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator1");
	var_202_object = Obj(); var_203_string = ""; var_204_string = ""; var_205_string = "";
	var_43_object = var_202_object;
	func_515(var_52_cvector, var_202_object, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator2");
	var_206_object = Obj(); var_207_string = ""; var_208_string = ""; var_209_string = "";
	var_43_object = var_206_object;
	func_515(var_52_cvector, var_206_object, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator3");
	var_210_object = Obj(); var_211_string = ""; var_212_string = ""; var_213_string = "";
	var_43_object = var_210_object;
	func_515(var_52_cvector, var_210_object, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator4");
	var_214_object = Obj(); var_215_string = ""; var_216_string = ""; var_217_string = "";
	var_43_object = var_214_object;
	func_515(var_52_cvector, var_214_object, "pers_unosha", "arena_spectator_unosha2.xml", "pt_arena_spectator5");
	var_218_object = Obj(); var_219_string = ""; var_220_string = ""; var_221_string = "";
	var_43_object = var_218_object;
	func_515(var_52_cvector, var_218_object, "pers_dohodyaga", "arena_spectator_dohodyaga.xml", "pt_arena_spectator6");
	var_222_object = Obj(); var_223_string = ""; var_224_string = ""; var_225_string = "";
	var_43_object = var_222_object;
	func_515(var_52_cvector, var_222_object, "pers_boy", "arena_spectator_boy.xml", "pt_arena_spectator7");
	var_226_float = GetByIndex(var_41_cvector, 0);
	var_227_int = -var_226_float;
	var_228_float = GetByIndex(var_41_cvector, 2);
	var_229_int = -var_228_float;
	Rotate(var_227_int, var_229_int);
	var_230_object = Obj();
	var_17_object = var_230_object;
	func_678(var_230_object);
	var_237_float = 0; var_238_float = 0; var_239_float = 0;
	func_730((float)1, (float)0, (float)0.75);
	UnlockCamera();
	
Label_373:
	Sleep((int)1);
	var_241_bool = var_17_object != 0; //@nn
	if(var_241_bool == 0) goto Label_383;
	@@var_49_object:IsDead(var_50_bool);
	var_242_bool = var_50_bool;
	if(var_242_bool != 0) {
	} else {
		goto Label_373;
	}
	LockCamera();
	var_243_float = GetByIndex(var_41_cvector, 0);
	var_244_float = GetByIndex(var_41_cvector, 2);
	RotateAsync(var_243_float, var_244_float);
	var_245_float = 0; var_246_float = 0; var_247_float = 0;
	func_730((float)0, (float)1, (float)0.75);
	RemoveActor(var_49_object);
	func_532(var_52_cvector);
	var_259_object = Obj(); var_260_int = 0; var_261_object = Obj(); var_262_object = Obj();
	var_17_object = var_259_object;
	var_261_object = var_0_cvector;
	var_262_object = var_5_object;
	func_648(var_259_object, (int)0, var_261_object, var_262_object);
	var_280_object = Obj(); var_281_int = 0; var_282_object = Obj(); var_283_object = Obj();
	var_17_object = var_280_object;
	var_282_object = var_1_cvector;
	var_283_object = var_6_object;
	func_648(var_280_object, (int)1, var_282_object, var_283_object);
	var_284_object = Obj(); var_285_int = 0; var_286_object = Obj(); var_287_object = Obj();
	var_17_object = var_284_object;
	var_286_object = var_2_bool;
	var_287_object = var_7_object;
	func_648(var_284_object, (int)2, var_286_object, var_287_object);
	var_288_object = Obj(); var_289_int = 0; var_290_object = Obj(); var_291_object = Obj();
	var_17_object = var_288_object;
	var_290_object = var_3_object;
	var_291_object = var_8_object;
	func_648(var_288_object, (int)3, var_290_object, var_291_object);
	var_292_object = Obj(); var_293_int = 0; var_294_object = Obj(); var_295_object = Obj();
	var_17_object = var_292_object;
	var_294_object = var_4_object;
	var_295_object = var_9_object;
	func_648(var_292_object, (int)4, var_294_object, var_295_object);
	@@var_17_object:SelectWeapon();
	@@var_43_object:GetLocator("pt_arena_return", var_48_bool, var_51_cvector, var_52_cvector);
	Teleport(var_17_object, var_43_object, var_51_cvector, var_52_cvector);
	StopAsync();
	var_297_float = GetByIndex(var_41_cvector, 0);
	var_298_float = GetByIndex(var_41_cvector, 2);
	Rotate(var_297_float, var_298_float);
	var_299_float = 0; var_300_float = 0; var_301_float = 0;
	func_730((float)1, (float)0, (float)0.75);
	UnlockCamera();
	func_718();
	func_706();
	var_306_object = Obj();
	var_17_object = var_306_object;
	func_587(var_306_object);
	return 24;
	
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-10] = 0";


func_699(var_70_string, var_71_int)
{
	var_72_int = 0; var_73_int = 0;
	GetVariable(var_70_string, var_73_int);
	var_74_int = var_73_int + var_71_int;
	SetVariable(var_70_string, var_74_int);
	return 2;
}


