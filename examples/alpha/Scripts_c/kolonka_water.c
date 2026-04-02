maintask task_0
{
	void init(bool var_0_bool)
	{
		func_27();
		@SetVisibility(true);
		@SetTimeEvent(0, 24);
	
	Label_11:
		@Hold();
		if(!false) goto Label_11; //@nz
		@SetUsable(false);
	}

	// @pe
	void OnGameTime(bool var_0_bool, int var_1_int, float var_2_float)
	{
		if(var_1_int == 0) {
			@StopGroup0();
			var_0_bool = true;
		}
	}

	void OnUse(bool var_0_bool, object var_1_object)
	{
		int var_13_int; float var_17_float; object var_19_object; int var_20_int; bool var_21_bool; float var_22_float; object var_23_object;
		@GetInvItemByName(var_13_int, "bottle_empty");
		int var_14_int;
		@GetInvItemProperty(var_14_int, var_13_int, "Category");
		int var_15_int;
		var_1_object->GetItemCount(var_15_int, var_14_int);
		int var_16_int = -1;
		int var_18_int = 0;
	
		for(;;) {
			if(var_18_int < var_15_int) {
				var_1_object->GetItem(var_19_object, var_18_int, var_14_int);
				var_19_object->GetItemID(var_20_int);
				if(var_20_int == var_13_int) {
					var_19_object->HasProperty(var_21_bool, "disease");
					if(!var_21_bool) { //@nz
						bool var_30_bool = true;
						var_32_bool = var_16_int == -1;
						if(var_32_bool != 1) {
							var_34_bool = var_17_float > 0;
							if(var_34_bool != 1)
								var_30_bool = false;
						}
						if(var_30_bool != 0) {
							var_18_int = var_16_int;
							var_17_float = 0;
						}
					} else {
					var_19_object->GetProperty(var_22_float, "disease");
					bool var_37_bool = true;
					var_39_bool = var_16_int == -1;
					if(var_39_bool != 1) {
						var_40_bool = var_22_float < var_17_float;
						if(var_40_bool != 1)
							var_37_bool = false;
					}
					if(var_37_bool == 0) goto Label_79;
					var_18_int = var_16_int;
					var_22_float = var_17_float;
			}
				if(var_16_int != -1) {
					disable OnUse;
					var_1_object->RemoveItem(var_16_int, 1, var_14_int);
					@CreateInvItem(var_23_object);
					var_23_object->SetItemName("bottle_water");
					var_23_object->SetProperty("disease", var_17_float);
					object var_46_object; object var_47_object;
					var_1_object = var_46_object;
					var_23_object = var_47_object;
					func_117(var_46_object, var_47_object, 1);
					@PlaySound("fill");
					@SetVariable("player_exchange", 1);
					@Sleep(1);
					enable OnUse;
					var_23_object = null;
				}
				}
			}
		Label_79:
			var_19_object = null;
			var_18_int += 1;
		}
	
	}

}


void func_27(void)
{
}


void func_117(object var_46_object, object var_47_object, int var_48_int)
{
	int var_52_int;
	var_47_object->GetItemID(var_52_int);
	int var_53_int;
	@GetInvItemProperty(var_53_int, var_52_int, "Category");
	bool var_54_bool;
	var_46_object->AddItem(var_54_bool, var_47_object, var_53_int, var_48_int);
	if(!var_54_bool) //@nz
		var_46_object->DropItems(var_47_object, var_48_int);
}


