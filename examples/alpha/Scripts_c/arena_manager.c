// @GLOBALS: 0:cvector:,1:bool:

maintask task_0
{
	void init(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object)
	{
		var_2_bool = false;
		var_14_bool = GlobalVars[1];
		GlobalVars[1] = false;
		var_15_cvector = GlobalVars[0];
		cvector var_16_cvector;
		func_18(var_16_cvector);
		var_16_cvector = var_15_cvector;
		GlobalVars[0] = var_15_cvector;
		@SetTimer(10, 0.75);
		func_104(var_12_object, var_13_object);
	}

	// @pe
	void OnUse(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object)
	{
		func_74();
		@KillTimer(10);
		object var_17_object;
		var_14_object = var_17_object;
		TaskCall(1);
		func_187(var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_17_object);
		TaskReturn();
		@SetTimer(10, 0.75);
	}

	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, int var_3_int, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object)
	{
		object var_16_object;
		if(var_14_object == 10) {
			@FindActor(var_16_object, "player");
			bool var_20_bool; object var_21_object;
			var_16_object = var_21_object;
			func_774(var_20_bool, var_21_object);
			if(var_20_bool != 0) {
				var_36_bool = GlobalVars[1];
				if(!var_36_bool) { //@nz
					object var_38_object;
					var_16_object = var_38_object;
					func_678(var_38_object);
					var_45_bool = GlobalVars[1];
					GlobalVars[1] = true;
				}
			} else {
				var_46_bool = GlobalVars[1];
				if(var_46_bool == 0) goto Label_72;
				@UnlookAsync("head");
				var_48_bool = GlobalVars[1];
				GlobalVars[1] = false;
			}
		Label_72:
			var_16_object = null;
		}
	
	}

}


task task_1
{
}


void func_706(void)
{
	func_699("noinv_drop", -1);
}


void func_515(object var_10_object, object var_186_object, string var_187_string, string var_188_string, string var_189_string)
{
	cvector var_194_cvector; cvector var_195_cvector; bool var_196_bool;
	var_186_object->GetLocator(var_189_string, var_196_bool, var_194_cvector, var_195_cvector);
	if(!var_196_bool) //@nz
		@Trace("Locator doesn't exist for arena spectator " + var_189_string);
	object var_197_object;
	var_186_object->AddStationaryActor(var_197_object, var_194_cvector, var_195_cvector, var_187_string, var_188_string, true);
	var_10_object->add(var_197_object); //@t
}
EMIT "Stack[-1] = 0";


void func_774(bool var_20_bool, object var_21_object)
{
	if(var_21_object == null)
		var_20_bool = false;
	float var_25_float; object var_26_object;
	var_21_object = var_26_object;
	func_556(var_25_float, var_26_object);
	float var_23_float = sqrt(var_25_float);
	var_33_bool = GlobalVars[1];
	if(var_33_bool != 0)
		var_23_float -= 100;
	var_20_bool = var_23_float < 300;
}


void func_648(object var_259_object, int var_260_int, object var_261_object, object var_262_object)
{
	object var_271_object; bool var_272_bool; int var_274_int;
	var_259_object->RemoveAllItems(var_260_int);
	int var_269_int;
	var_261_object->size(var_269_int);
	int var_270_int = 0;
	
	while(var_270_int < var_269_int) {
		var_261_object->get(var_271_object, var_270_int);
		var_259_object->AddItem(var_272_bool, var_271_object, var_260_int);
		var_271_object = null;
		var_270_int += 1;
	}
	
	var_262_object->size(var_269_int);
	int var_273_int = 0;
	
	while(var_273_int < var_269_int) {
		var_262_object->get(var_274_int, var_273_int);
		var_259_object->SelectItem(var_274_int, true, var_260_int);
		var_273_int += 1;
	}
	
}


void func_712(void)
{
	func_699("noinv_drop", 1);
}


void func_74(void)
{
	if(var_2_bool != 0)
		@StopAnimation();
	else
		func_182();
	
}


void func_587(object var_306_object)
{
	if(!var_306_object) { //@nz
	}
	int var_308_int;
	var_306_object->GetProperty("noaccess", var_308_int);
	if(var_308_int > 1)
		var_306_object->SetProperty("noaccess", (var_308_int - 1));
	else
		var_306_object->RemoveProperty("noaccess");
	
}


void func_718(void)
{
	func_699("nouse_container", -1);
}


void func_18(cvector var_16_cvector)
{
	cvector var_18_cvector;
	@GetDirection(var_18_cvector);
	var_18_cvector = var_16_cvector;
}


void func_83(bool var_2_bool)
{
	int var_36_int;
	var_2_bool = true;
	int var_37_int;
	func_757(var_37_int);
	int var_35_int;
	var_37_int = var_35_int;
	if(var_35_int != 0) {
		@irand(var_36_int, var_35_int);
		string var_52_string; int var_53_int;
		var_36_int = var_53_int;
		func_750(var_52_string, var_53_int);
		@PlayAnimation("all", var_52_string);
		@WaitForAnimEnd();
	}
	var_2_bool = false;
}


void func_532(object var_10_object)
{
	int var_252_int; object var_254_object; object var_255_object;
	var_10_object->size(var_252_int); //@t
	int var_253_int = 0;
	
	while(var_253_int < var_252_int) {
		var_10_object->get(var_254_object, var_253_int); //@t
		var_254_object->GetActor(var_255_object);
		if(var_255_object != null)
			@RemoveActor(var_255_object);
		var_254_object->Remove();
		var_255_object = null;
		var_254_object = null;
		var_253_int += 1;
	}
	
	var_10_object->clear(); //@t
}


void func_724(void)
{
	func_699("nouse_container", 1);
}


void func_470(object var_148_object)
{
	int var_157_int; object var_159_object; int var_160_int; bool var_161_bool; int var_162_int;
	var_148_object->GetItemCount(var_157_int, 0);
	int var_158_int = 0;
	
	for(;;) {
		if(!(var_158_int < var_157_int)) goto Label_514;
		var_148_object->GetItem(var_159_object, var_158_int);
		var_159_object->GetItemID(var_160_int);
		@HasInvItemProperty(var_161_bool, var_160_int, "Group");
		if(var_161_bool == 0) goto Label_500;
		@GetInvItemProperty(var_162_int, var_160_int, "Group");
		if(!(var_162_int != 0)) goto Label_494;
		goto Label_511;
	EMIT "GOTO 0x1f4";

	Label_511:
		var_158_int += 1;
	}
	
Label_494:
	bool var_163_bool;
	var_148_object->IsItemSelected(var_163_bool, var_158_int, 0);
	if(var_163_bool != 0) {
		goto Label_511;
	}
Label_500:
	int var_164_int;
	var_148_object->GetItemAmount(var_164_int, var_158_int, 0);
	var_148_object->RemoveItem(var_158_int, var_164_int, 0);
	var_158_int += -1;
	var_157_int += -1;
	var_159_object = null;
	
Label_514:
}


void func_730(float var_82_float, float var_83_float, float var_84_float)
{
	bool var_88_bool; float var_90_float;
	var_88_bool = var_83_float > var_82_float;
	
	for(;;) {
		if(var_88_bool != 0)
			var_93_bool = var_82_float < var_83_float;
		else
			var_95_bool = var_83_float < var_82_float;
		if(var_93_bool == 0) goto Label_747;
		@ModDarkenLevel(var_82_float);
		@sync(var_90_float);
		var_82_float += (var_90_float * ((var_83_float - var_82_float) / var_84_float));
	}
	
Label_747:
	@ModDarkenLevel(var_83_float);
	
}


void func_607(object var_96_object, object var_97_object, int var_98_int)
{
	object var_106_object;
	object var_107_object;
	func_693(var_107_object);
	object var_103_object;
	var_107_object = var_103_object;
	int var_104_int;
	var_97_object->GetItemCount(var_104_int, var_98_int);
	int var_105_int = 0;
	
	while(var_105_int < var_104_int) {
		var_97_object->GetItem(var_106_object, var_105_int, var_98_int);
		var_103_object->add(var_106_object);
		var_106_object = null;
		var_105_int += 1;
	}
	
	var_103_object = var_96_object;
}
EMIT "Stack[-4] = 0";


void func_678(object var_38_object)
{
	float var_41_float;
	var_38_object->GetEyesHeight(var_41_float);
	cvector var_42_cvector = [0.0, 0.0, 0.0];
	var_43_float = GetByIndex(var_42_cvector, 1);
	var_41_float = var_43_float;
	SetByIndex(var_42_cvector, 1) = var_43_float;
	@LookAsync(var_38_object, "head", var_42_cvector);
}


void func_104(cvector var_0_cvector, cvector var_1_cvector)
{
	int var_25_int; bool var_26_bool; cvector var_27_cvector; object var_28_object;
	@GetPFPosition(var_1_cvector);
	@GetDirection(var_0_cvector);
	
	for(;;) {
		@irand(var_25_int, 60);
		@Sleep((var_25_int + 30), var_26_bool);
		if(var_26_bool != 0) {
			func_83(var_28_object);
		} else {
		for(;;) {
			@GetPFPosition(var_27_cvector);
			float var_54_float; cvector var_56_cvector;
			var_27_cvector = var_56_cvector;
			func_689(var_54_float, var_1_cvector, var_56_cvector);
			if(var_54_float > 40000) {
				@FindPathTo(var_28_object, var_1_cvector);
				if(var_28_object != null) {
					@RotatePath(var_28_object, var_26_bool);
					if(!var_26_bool) { //@nz
					} else {
					@FollowPath(var_28_object, false, var_26_bool);
					if(!var_26_bool) { //@nz
						goto Label_179;
					}
					var_65_float = GetByIndex(var_0_cvector, 0);
					var_66_float = GetByIndex(var_0_cvector, 2);
					@Rotate(var_65_float, var_66_float, var_26_bool);
					if(!var_26_bool) { //@nz
						goto Label_179;
					}
					@WaitForAnimEnd(var_26_bool);
					if(!var_26_bool) { //@nz
						goto Label_179;
					}
					goto Label_180;
				EMIT "GOTO 0xa4";
				}
				@Sleep(1);
				var_28_object = null;
				goto Label_179;
			}
			var_70_float = GetByIndex(var_0_cvector, 0);
			var_71_float = GetByIndex(var_0_cvector, 2);
			@Rotate(var_70_float, var_71_float, var_26_bool);
			if(!var_26_bool) { //@nz
				goto Label_179;
			}
			@WaitForAnimEnd(var_26_bool);
			if(!var_26_bool) { //@nz
				goto Label_179;
			}
			goto Label_180;
			}
		Label_179:
		}
		}
	Label_180:
	}
	
}
EMIT "Return(); Pop(8)";


void func_556(float var_25_float, object var_26_object)
{
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	cvector var_31_cvector;
	var_26_object->GetPosition(var_31_cvector);
	var_25_float = (var_31_cvector - var_30_cvector) | (var_31_cvector - var_30_cvector);
}


void func_750(string var_43_string, int var_44_int)
{
	string var_46_string = "idle";
	if(var_44_int != 0)
		var_46_string += var_44_int;
	var_46_string = var_43_string;
}


void func_689(float var_54_float, cvector var_55_cvector, cvector var_56_cvector)
{
	var_54_float = (var_56_cvector - var_55_cvector) | (var_56_cvector - var_55_cvector);
}


void func_564(object var_56_object)
{
	int var_60_int;
	if(!var_56_object) { //@nz
	}
	bool var_59_bool;
	var_56_object->HasProperty("noaccess", var_59_bool);
	if(var_59_bool != 0) {
		var_56_object->GetProperty("noaccess", var_60_int);
		var_56_object->SetProperty("noaccess", (var_60_int + 1));
	} else {
		var_56_object->SetProperty("noaccess", 1);
	}
	
}


void func_693(object var_53_object)
{
	object var_55_object;
	@CreateObjectVector(var_55_object);
	var_55_object = var_53_object;
}
EMIT "Stack[-1] = 0";


void func_182(void)
{
	@StopGroup0();
	@Stop();
}


void func_628(object var_122_object, object var_123_object, int var_124_int)
{
	object var_129_object; bool var_132_bool;
	@CreateIntVector(var_129_object);
	int var_130_int;
	var_123_object->GetItemCount(var_130_int, var_124_int);
	int var_131_int = 0;
	
	while(var_131_int < var_130_int) {
		var_123_object->IsItemSelected(var_132_bool, var_131_int, var_124_int);
		if(var_132_bool != 0)
			var_129_object->add(var_131_int);
		var_131_int += 1;
	}
	
	var_129_object = var_122_object;
}
EMIT "Stack[-4] = 0";


void func_757(int var_37_int)
{
	int var_40_int; bool var_41_bool;
	var_40_int = 0;
	
	for(;;) {
		string var_43_string; int var_44_int;
		var_40_int = var_44_int;
		func_750(var_43_string, var_44_int);
		@HasAnimation(var_41_bool, "all", var_43_string);
		if(!var_41_bool) //@nz
			break;
		var_40_int += 1;
	}
	var_40_int = var_37_int;
}


void func_187(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_17_object)
{
	bool var_50_bool;
	object var_53_object;
	func_693(var_53_object);
	var_10_object = var_53_object;
	object var_56_object;
	var_17_object = var_56_object;
	func_564(var_56_object);
	func_712();
	func_724();
	var_77_cvector = GlobalVars[0];
	cvector var_41_cvector;
	var_77_cvector = var_41_cvector;
	@LockCamera();
	var_78_float = GetByIndex(var_41_cvector, 0);
	var_79_int = -var_78_float;
	var_80_float = GetByIndex(var_41_cvector, 2);
	var_81_int = -var_80_float;
	@RotateAsync(var_79_int, var_81_int);
	func_730((float)0, (float)1, 0.75);
	object var_96_object; object var_97_object;
	var_17_object = var_97_object;
	func_607(var_96_object, var_97_object, 0);
	object var_110_object; object var_111_object;
	var_17_object = var_111_object;
	func_607(var_110_object, var_111_object, 1);
	object var_113_object; object var_114_object;
	var_17_object = var_114_object;
	func_607(var_113_object, var_114_object, 2);
	object var_116_object; object var_117_object;
	var_17_object = var_117_object;
	func_607(var_116_object, var_117_object, 3);
	object var_119_object; object var_120_object;
	var_17_object = var_120_object;
	func_607(var_119_object, var_120_object, 4);
	object var_122_object; object var_123_object;
	var_17_object = var_123_object;
	func_628(var_122_object, var_123_object, 0);
	object var_136_object; object var_137_object;
	var_17_object = var_137_object;
	func_628(var_136_object, var_137_object, 1);
	object var_139_object; object var_140_object;
	var_17_object = var_140_object;
	func_628(var_139_object, var_140_object, 2);
	object var_142_object; object var_143_object;
	var_17_object = var_143_object;
	func_628(var_142_object, var_143_object, 3);
	object var_145_object; object var_146_object;
	var_17_object = var_146_object;
	func_628(var_145_object, var_146_object, 4);
	object var_148_object;
	var_17_object = var_148_object;
	func_470(var_148_object);
	int var_42_int = 1;
	
	while(var_42_int < 5) {
		var_17_object->RemoveAllItems(var_42_int);
		var_42_int += 1;
	}
	
	object var_43_object;
	@GetScene(var_43_object);
	cvector var_44_cvector;
	cvector var_45_cvector;
	bool var_48_bool;
	var_43_object->GetLocator("pt_arena_player", var_48_bool, var_44_cvector, var_45_cvector);
	cvector var_46_cvector;
	cvector var_47_cvector;
	var_43_object->GetLocator("pt_arena_enemy", var_48_bool, var_46_cvector, var_47_cvector);
	@Teleport(var_17_object, var_43_object, var_44_cvector, var_45_cvector);
	object var_49_object;
	@AddActor(var_49_object, "pers_butcher", var_43_object, var_46_cvector, var_47_cvector, "arena_fighter.xml");
	object var_186_object;
	var_43_object = var_186_object;
	cvector var_52_cvector;
	func_515(var_52_cvector, var_186_object, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator1");
	object var_202_object;
	var_43_object = var_202_object;
	func_515(var_52_cvector, var_202_object, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator2");
	object var_206_object;
	var_43_object = var_206_object;
	func_515(var_52_cvector, var_206_object, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator3");
	object var_210_object;
	var_43_object = var_210_object;
	func_515(var_52_cvector, var_210_object, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator4");
	object var_214_object;
	var_43_object = var_214_object;
	func_515(var_52_cvector, var_214_object, "pers_unosha", "arena_spectator_unosha2.xml", "pt_arena_spectator5");
	object var_218_object;
	var_43_object = var_218_object;
	func_515(var_52_cvector, var_218_object, "pers_dohodyaga", "arena_spectator_dohodyaga.xml", "pt_arena_spectator6");
	object var_222_object;
	var_43_object = var_222_object;
	func_515(var_52_cvector, var_222_object, "pers_boy", "arena_spectator_boy.xml", "pt_arena_spectator7");
	var_226_float = GetByIndex(var_41_cvector, 0);
	var_227_int = -var_226_float;
	var_228_float = GetByIndex(var_41_cvector, 2);
	var_229_int = -var_228_float;
	@Rotate(var_227_int, var_229_int);
	object var_230_object;
	func_678(var_230_object);
	func_730((float)1, (float)0, 0.75);
	@UnlockCamera();
	
	for(;;) {
		@Sleep(1);
		if(var_230_object != null) {
			var_49_object->IsDead(var_50_bool);
			if(var_50_bool != 0)
				break;
		}
	}
	@LockCamera();
	var_243_float = GetByIndex(var_41_cvector, 0);
	var_244_float = GetByIndex(var_41_cvector, 2);
	@RotateAsync(var_243_float, var_244_float);
	func_730((float)0, (float)1, 0.75);
	@RemoveActor(var_49_object);
	func_532(var_52_cvector);
	object var_259_object;
	var_17_object = var_259_object;
	func_648(var_259_object, 0, var_96_object, var_122_object);
	object var_280_object;
	var_17_object = var_280_object;
	func_648(var_280_object, 1, var_110_object, var_136_object);
	object var_284_object;
	var_17_object = var_284_object;
	func_648(var_284_object, 2, var_113_object, var_139_object);
	object var_288_object;
	var_17_object = var_288_object;
	func_648(var_288_object, 3, var_116_object, var_142_object);
	object var_292_object;
	var_17_object = var_292_object;
	func_648(var_292_object, 4, var_119_object, var_145_object);
	var_17_object->SelectWeapon();
	cvector var_51_cvector;
	var_43_object->GetLocator("pt_arena_return", var_48_bool, var_51_cvector, var_52_cvector);
	@Teleport(var_17_object, var_43_object, var_51_cvector, var_52_cvector);
	@StopAsync();
	var_297_float = GetByIndex(var_41_cvector, 0);
	var_298_float = GetByIndex(var_41_cvector, 2);
	@Rotate(var_297_float, var_298_float);
	func_730((float)1, (float)0, 0.75);
	@UnlockCamera();
	func_718();
	func_706();
	object var_306_object;
	var_17_object = var_306_object;
	func_587(var_306_object);
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-10] = 0";


void func_699(string var_70_string, int var_71_int)
{
	int var_73_int;
	@GetVariable(var_70_string, var_73_int);
	@SetVariable(var_70_string, (var_73_int + var_71_int));
}


