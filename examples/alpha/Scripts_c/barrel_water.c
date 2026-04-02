maintask task_0
{
	void init(void)
	{
		func_10();
		@SetVisibility(true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor)
	{
		int var_12_int; float var_16_float; object var_18_object; int var_19_int; bool var_20_bool; float var_21_float; object var_22_object;
		@GetInvItemByName(var_12_int, "bottle_empty");
		int var_13_int;
		@GetInvItemProperty(var_13_int, var_12_int, "Category");
		int var_14_int;
		actor->GetItemCount(var_14_int, var_13_int);
		int var_15_int = -1;
		int var_17_int = 0;
	
		for(;;) {
			if(var_17_int < var_14_int) {
				actor->GetItem(var_18_object, var_17_int, var_13_int);
				var_18_object->GetItemID(var_19_int);
				if(var_19_int == var_12_int) {
					var_18_object->HasProperty(var_20_bool, "disease");
					if(!var_20_bool) { //@nz
						bool var_29_bool = true;
						var_31_bool = var_15_int == -1;
						if(var_31_bool != 1) {
							var_33_bool = var_16_float > 0;
							if(var_33_bool != 1)
								var_29_bool = false;
						}
						if(var_29_bool != 0) {
							var_17_int = var_15_int;
							var_16_float = 0;
						}
					} else {
					var_18_object->GetProperty(var_21_float, "disease");
					bool var_36_bool = true;
					var_38_bool = var_15_int == -1;
					if(var_38_bool != 1) {
						var_39_bool = var_21_float < var_16_float;
						if(var_39_bool != 1)
							var_36_bool = false;
					}
					if(var_36_bool == 0) goto Label_62;
					var_17_int = var_15_int;
					var_21_float = var_16_float;
			}
				if(var_15_int != -1) {
					disable OnUse;
					actor->RemoveItem(var_15_int, 1, var_13_int);
					@CreateInvItem(var_22_object);
					var_22_object->SetItemName("bottle_water");
					var_22_object->SetProperty("disease", var_16_float);
					object var_45_object; object var_46_object;
					actor = var_45_object;
					var_22_object = var_46_object;
					func_100(var_45_object, var_46_object, 1);
					@PlaySound("fill");
					@SetVariable("player_exchange", 1);
					@Sleep(1);
					enable OnUse;
					var_22_object = null;
				}
				}
			}
		Label_62:
			var_18_object = null;
			var_17_int += 1;
		}
	
	}

}


void func_10(void)
{
}


void func_100(object var_45_object, object var_46_object, int var_47_int)
{
	int var_51_int;
	var_46_object->GetItemID(var_51_int);
	int var_52_int;
	@GetInvItemProperty(var_52_int, var_51_int, "Category");
	bool var_53_bool;
	var_45_object->AddItem(var_53_bool, var_46_object, var_52_int, var_47_int);
	if(!var_53_bool) //@nz
		var_45_object->DropItems(var_46_object, var_47_int);
}


