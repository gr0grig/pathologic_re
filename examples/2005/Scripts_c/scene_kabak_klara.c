maintask task_0
{
	void init(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object)
	{
		@CreateIntVector(var_5_object);
		var_2_bool = true;
		func_143(var_5_object, var_6_object);
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, string var_7_string)
	{
		if(var_7_string == "noandrei") {
			var_2_bool = false;
		} else if(var_7_string == "andrei") {
			var_2_bool = true;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object)
	{
		if(var_3_object != 0) {
			object var_8_object;
			func_208(var_8_object, var_3_object, 0, var_5_object);
			var_4_object = var_8_object;
			object var_27_object;
			func_233(var_27_object, var_3_object, 0);
			var_6_object = var_27_object;
		}
		func_201();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object)
	{
		func_151(var_6_object);
		func_175(var_6_object);
	}

}


void func_323(object var_41_object)
{
	int var_45_int; int var_46_int; object var_47_object;
	if(var_41_object != 0) {
		var_41_object->size(var_45_int);
		var_46_int = 0;

		while(var_46_int < var_45_int) {
			var_41_object->get(var_47_object, var_46_int);
			if(var_47_object != 0)
				@RemoveActor(var_47_object);
			var_47_object = null;
			var_46_int += 1;
		}

		var_41_object->clear();
	}
}


void func_291(object var_22_object)
{
	object var_24_object;
	@CreateObjectVector(var_24_object);
	var_24_object = var_22_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_7(object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_26_object)
{
	if(var_2_bool != 0) {
		object var_28_object; object var_29_object;
		object var_33_object;
		func_285(var_33_object);
		var_33_object = var_29_object;
		func_297(var_28_object, var_29_object, "pt_andrei", "NPC_Andrei", "NPC_Klara_Andrei.xml");
		var_26_object->add(var_28_object);
	}
	object var_47_object; object var_48_object;
	object var_52_object;
	func_285(var_52_object);
	var_52_object = var_48_object;
	func_297(var_47_object, var_48_object, "pt_dance", "pers_nudegirl_dance", "nudegirl_dance.xml");
	var_26_object->add(var_47_object);
	object var_53_object; object var_54_object;
	object var_58_object;
	func_285(var_58_object);
	var_58_object = var_54_object;
	func_297(var_53_object, var_54_object, "pt_salesman", "pers_dohodyaga", "salesman_kabak.xml");
	var_3_object = var_53_object;
	if(var_4_object != 0)
		func_253(var_3_object, 0, var_4_object, var_5_object, var_6_object);
	var_26_object->add(var_3_object);
	object var_84_object; object var_85_object;
	object var_88_object;
	func_285(var_88_object);
	var_88_object = var_85_object;
	func_315(var_84_object, var_85_object, "ps_kabak_alkash1", "cs_play_cycle.bin");
	var_26_object->add(var_84_object);
	object var_93_object; object var_94_object;
	object var_97_object;
	func_285(var_97_object);
	var_97_object = var_94_object;
	func_315(var_93_object, var_94_object, "ps_kabak_alkash2", "cs_play_cycle.bin");
	var_26_object->add(var_93_object);
	object var_98_object; object var_99_object;
	object var_102_object;
	func_285(var_102_object);
	var_102_object = var_99_object;
	func_315(var_98_object, var_99_object, "ps_kabak_unosha1", "cs_play_cycle.bin");
	var_26_object->add(var_98_object);
	object var_103_object; object var_104_object;
	object var_107_object;
	func_285(var_107_object);
	var_107_object = var_104_object;
	func_315(var_103_object, var_104_object, "ps_kabak_woman1", "cs_play_cycle.bin");
	var_26_object->add(var_103_object);
	object var_108_object; object var_109_object;
	object var_112_object;
	func_285(var_112_object);
	var_112_object = var_109_object;
	func_315(var_108_object, var_109_object, "ps_kabak_worker1", "cs_play_cycle.bin");
	var_26_object->add(var_108_object);
}


void func_297(object var_28_object, object var_29_object, string var_30_string, string var_31_string, string var_32_string)
{
	bool var_38_bool; cvector var_39_cvector; cvector var_40_cvector;
	var_29_object->GetLocator(var_30_string, var_38_bool, var_39_cvector, var_40_cvector);
	if(!var_38_bool) //@nz
		@Trace(("Locator " + var_30_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_31_string, var_29_object, var_39_cvector, var_40_cvector, var_32_string);
	object var_41_object = var_28_object;
	
}
EMIT "Stack[-1] = 0";


void func_233(object var_27_object, object var_28_object, int var_29_int)
{
	object var_34_object; bool var_37_bool;
	@CreateIntVector(var_34_object);
	int var_35_int;
	var_28_object->GetItemCount(var_35_int, var_29_int);
	int var_36_int = 0;
	
	while(var_36_int < var_35_int) {
		var_28_object->IsItemSelected(var_37_bool, var_36_int, var_29_int);
		if(var_37_bool != 0)
			var_34_object->add(var_36_int);
		var_36_int += 1;
	}
	
	var_34_object = var_27_object;
}
EMIT "Stack[-4] = 0";


// @pe
void func_201(void)
{
	func_180(var_6_object);
	func_187(var_6_object);
}


void func_187(object var_1_object)
{
	func_323(var_1_object);
	var_1_object->clear(); //@t
}


void func_143(object var_0_object, object var_1_object)
{
	@CreateObjectVector(var_0_object);
	@CreateObjectVector(var_1_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_208(object var_8_object, object var_9_object, int var_10_int, object var_11_object)
{
	object var_20_object; int var_21_int;
	object var_22_object;
	func_291(var_22_object);
	object var_17_object;
	var_22_object = var_17_object;
	int var_18_int;
	var_9_object->GetItemCount(var_18_int, var_10_int);
	int var_19_int = 0;
	
	while(var_19_int < var_18_int) {
		var_9_object->GetItem(var_20_object, var_19_int, var_10_int);
		var_17_object->add(var_20_object);
		var_9_object->GetItemAmount(var_21_int, var_19_int, var_10_int);
		var_11_object->add(var_21_int);
		var_20_object = null;
		var_19_int += 1;
	}
	
	var_17_object = var_8_object;
}
EMIT "Stack[-5] = 0";


void func_175(object var_1_object)
{
	func_7(var_3_object, var_4_object, var_5_object, var_6_object, var_1_object);
}


void func_180(object var_0_object)
{
	func_323(var_0_object);
	var_0_object->clear(); //@t
}


void func_151(object var_0_object)
{
	int var_12_int; bool var_14_bool; cvector var_15_cvector; object var_16_object;
	var_12_int = 1;
	
	for(;;) {
		@GetLocator(("pt_fireplace" + var_12_int), var_14_bool, var_15_cvector);
		if(!var_14_bool) //@nz
			break;
		object var_20_object;
		func_285(var_20_object);
		@AddActorByType(var_16_object, "scripted", var_20_object, var_15_cvector, [0.0, 0.0, 1.0], "fireplace.xml");
		var_0_object->add(var_16_object); //@t
		var_16_object = null;
		var_12_int += 1;
	}
}


void func_253(object var_60_object, int var_61_int, object var_62_object, object var_63_object, object var_64_object)
{
	object var_74_object; int var_75_int; bool var_76_bool; int var_78_int;
	var_60_object->RemoveAllItems(var_61_int);
	int var_72_int;
	var_62_object->size(var_72_int);
	int var_73_int = 0;
	
	while(var_73_int < var_72_int) {
		var_62_object->get(var_74_object, var_73_int);
		var_63_object->get(var_75_int, var_73_int);
		var_60_object->AddItem(var_76_bool, var_74_object, var_61_int, var_75_int);
		var_74_object = null;
		var_73_int += 1;
	}
	
	var_64_object->size(var_72_int);
	int var_77_int = 0;
	
	while(var_77_int < var_72_int) {
		var_64_object->get(var_78_int, var_77_int);
		var_60_object->SelectItem(var_78_int, true, var_61_int);
		var_77_int += 1;
	}
	
}


void func_315(object var_84_object, object var_85_object, string var_86_string, string var_87_string)
{
	object var_90_object;
	@AddScriptedActor(var_90_object, var_86_string, var_87_string, var_85_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_90_object = var_84_object;
}
EMIT "Stack[-1] = 0";


void func_285(object var_20_object)
{
	object var_22_object;
	@self(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


