// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4500();
			if(var_36_bool == 31305) {
				func_152(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529922); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529923, -1, 31306); //@t
				var_0_object->AddReply(529924, -1, 31307); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_4646(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4500();
			if(var_36_bool == 31325) {
				func_355(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529942); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529943, -1, 31326); //@t
				var_0_object->AddReply(529944, -1, 31327); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_4646(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x17a";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4500();
			if(var_37_cvector == 31732) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_4785();
			}
			if(var_37_cvector == 31735) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_4791();
			}
			if(var_36_bool == 31731) {
				func_615(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530357); //@t
				var_0_object->ClearReplies(); //@t
				bool var_67_bool = false;
				bool var_68_bool = false;
				bool var_69_bool;
				func_5037(var_1_object);
				if(var_69_bool != 0) {
					bool var_77_bool;
					func_5025(var_1_object);
					if(!var_77_bool) //@nz
						var_68_bool = true;
				}
				if(var_68_bool != 0) {
					bool var_84_bool;
					func_5049(var_1_object);
					if(var_84_bool != 0)
						var_67_bool = true;
				}
				if(var_67_bool != 0)
					var_0_object->AddReply(530358, 32319, 31732); //@t
				bool var_93_bool = false;
				bool var_94_bool = false;
				bool var_95_bool;
				func_5037(var_1_object);
				if(var_95_bool != 0) {
					bool var_97_bool;
					func_5025(var_1_object);
					if(var_97_bool != 0)
						var_94_bool = true;
				}
				if(var_94_bool != 0) {
					bool var_99_bool;
					func_5061(var_1_object);
					if(var_99_bool != 0)
						var_93_bool = true;
				}
				if(var_93_bool != 0)
					var_0_object->AddReply(530361, 31736, 31735); //@t
				var_0_object->AddReply(530916, -1, 32243); //@t
				var_0_object->AddReply(530917, -1, 32244); //@t
				return 0;
			}
			if(var_36_bool == 31736) {
				func_615(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530362); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530363, 32326, 31737); //@t
				var_0_object->AddReply(530998, -1, 32325); //@t
				return 0;
			}
			if(var_36_bool == 32326) {
				func_615(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530999); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531000, 32329, 32327); //@t
				var_0_object->AddReply(531001, -1, 32328); //@t
				return 0;
			}
			if(var_36_bool == 32329) {
				func_615(var_37_cvector, "Neutral");
				var_0_object->SetMessage(531002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531003, -1, 32330); //@t
				var_0_object->AddReply(531004, -1, 32331); //@t
				return 0;
			}
			if(var_36_bool == 32319) {
				func_615(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530994); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530996, 31733, 32321); //@t
				var_0_object->AddReply(530997, 31733, 32323); //@t
				var_0_object->AddReply(530995, -1, 32320); //@t
				return 0;
			}
			if(var_36_bool == 31733) {
				func_615(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530359); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530360, -1, 31734); //@t
				var_0_object->AddReply(530993, -1, 32318); //@t
				return 0;
			}
			var_3_string = true;
			bool var_167_bool;
			func_4646(var_167_bool);
			if(var_167_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x27e";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4500();
			if(var_36_bool == 31972) {
				func_1011(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530683, 31974, 31973); //@t
				var_0_object->AddReply(530688, 31974, 31978); //@t
				return 0;
			}
			if(var_36_bool == 31974) {
				func_1011(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530684); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530685, 31976, 31975); //@t
				var_0_object->AddReply(530689, 31976, 31979); //@t
				return 0;
			}
			if(var_36_bool == 31976) {
				func_1011(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530686); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530687, -1, 31977); //@t
				var_0_object->AddReply(530690, -1, 31980); //@t
				return 0;
			}
			var_3_string = true;
			bool var_81_bool;
			func_4646(var_81_bool);
			if(var_81_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x40a";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4500();
			if(var_37_cvector == 22226) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_4655();
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_4648();
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_4797();
				object var_109_object = var_1_object;
				func_4831(var_0_object);
			}
			if(var_37_cvector == 22533) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_4688();
			}
			if(var_37_cvector == 22241) {
				object var_181_object; object var_182_object;
				var_181_object = var_1_object;
				var_182_object = var_0_object;
				func_4678();
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				func_4814();
				object var_204_object = var_1_object;
				func_4831(var_0_object);
			}
			if(var_37_cvector == 32055) {
				object var_208_object; object var_209_object;
				var_208_object = var_1_object;
				var_209_object = var_0_object;
				func_4678();
				object var_210_object; object var_211_object;
				var_210_object = var_1_object;
				var_211_object = var_0_object;
				func_4814();
				object var_212_object = var_1_object;
				func_4831(var_0_object);
			}
			if(var_37_cvector == 22537) {
				object var_216_object; object var_217_object;
				var_216_object = var_1_object;
				var_217_object = var_0_object;
				func_4729();
			}
			if(var_37_cvector == 32066) {
				object var_231_object; object var_232_object;
				var_231_object = var_1_object;
				var_232_object = var_0_object;
				func_4729();
			}
			if(var_36_bool == 22225) {
				bool var_235_bool;
				func_5083(var_1_object);
				if(var_235_bool != 0) {
					func_1420(var_37_cvector, "Neutral");
					var_0_object->SetMessage(521012); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530692, 29681, 31984); //@t
					var_0_object->AddReply(528310, -1, 29680); //@t
					return 0;
				}
				bool var_260_bool = false;
				bool var_261_bool = false;
				bool var_262_bool;
				func_4847(var_1_object);
				if(var_262_bool != 0) {
					bool var_268_bool;
					func_4859(var_1_object);
					if(var_268_bool != 0)
						var_261_bool = true;
				}
				if(var_261_bool != 0) {
					bool var_274_bool;
					func_5095(var_274_bool, var_1_object);
					if(var_274_bool != 0)
						var_260_bool = true;
				}
				if(var_260_bool != 0) {
					object var_283_object; object var_284_object;
					var_283_object = var_1_object;
					var_284_object = var_0_object;
					func_4723();
					func_1420(var_37_cvector, "Neutral");
					var_0_object->SetMessage(521347); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530713, 32015, 32014); //@t
					var_0_object->AddReply(530721, 32015, 32022); //@t
					return 0;
				}
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521014); //@t
				var_0_object->ClearReplies(); //@t
				bool var_297_bool = false;
				bool var_298_bool;
				func_5095(var_298_bool, var_1_object);
				if(var_298_bool != 0) {
					bool var_300_bool;
					func_5106(var_1_object);
					if(var_300_bool != 0)
						var_297_bool = true;
				}
				if(var_297_bool != 0)
					var_0_object->AddReply(521043, 22240, 22239); //@t
				bool var_309_bool = true;
				bool var_310_bool = false;
				bool var_311_bool = false;
				bool var_312_bool;
				func_4871(var_1_object);
				if(var_312_bool != 0) {
					bool var_318_bool;
					func_5073(var_318_bool, var_1_object);
					if(var_318_bool != 0)
						var_311_bool = true;
				}
				if(var_311_bool != 0) {
					bool var_326_bool;
					func_4895(var_1_object);
					if(!var_326_bool) //@nz
						var_310_bool = true;
				}
				if(var_310_bool != 1) {
					bool var_333_bool = false;
					bool var_334_bool;
					func_4883(var_1_object);
					if(var_334_bool != 0) {
						bool var_340_bool;
						func_4895(var_1_object);
						if(!var_340_bool) //@nz
							var_333_bool = true;
					}
					if(var_333_bool != 1)
						var_309_bool = false;
				}
				if(var_309_bool != 0)
					var_0_object->AddReply(521348, 22536, 22535); //@t
				bool var_346_bool = false;
				bool var_347_bool;
				func_4871(var_1_object);
				if(var_347_bool != 0) {
					bool var_349_bool;
					func_5073(var_349_bool, var_1_object);
					if(!var_349_bool) //@nz
						var_346_bool = true;
				}
				if(var_346_bool != 0)
					var_0_object->AddReply(521360, 22548, 22547); //@t
				var_0_object->AddReply(521015, -1, 22228); //@t
				var_0_object->AddReply(528324, -1, 29694); //@t
				return 0;
			}
			if(var_36_bool == 22548) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521361); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521362, 32067, 22549); //@t
				var_0_object->AddReply(530760, 32069, 32068); //@t
				return 0;
			}
			if(var_36_bool == 32067) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530762, 32069, 32070); //@t
				var_0_object->AddReply(530763, 32069, 32071); //@t
				return 0;
			}
			if(var_36_bool == 32069) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530764, -1, 32074); //@t
				var_0_object->AddReply(530765, -1, 32075); //@t
				return 0;
			}
			if(var_36_bool == 22536) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521349); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530749, 32057, 32056); //@t
				return 0;
			}
			if(var_36_bool == 32057) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530750); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530751, 32062, 32058); //@t
				var_0_object->AddReply(530752, 32060, 32059); //@t
				return 0;
			}
			if(var_36_bool == 32062) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530754); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530755, 32060, 32063); //@t
				var_0_object->AddReply(530756, 32065, 32064); //@t
				return 0;
			}
			if(var_36_bool == 32065) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530757); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530758, -1, 32066); //@t
				return 0;
			}
			if(var_36_bool == 32060) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521350, -1, 22537); //@t
				return 0;
			}
			if(var_36_bool == 22240) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521044); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530731, 32036, 32035); //@t
				return 0;
			}
			if(var_36_bool == 32036) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530732); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530733, 32038, 32037); //@t
				var_0_object->AddReply(530741, 32046, 32045); //@t
				return 0;
			}
			if(var_36_bool == 32046) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530742); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530743, 32048, 32047); //@t
				var_0_object->AddReply(530745, 32048, 32049); //@t
				return 0;
			}
			if(var_36_bool == 32048) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530744); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530746, 32038, 32051); //@t
				var_0_object->AddReply(530747, 32038, 32052); //@t
				return 0;
			}
			if(var_36_bool == 32038) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530734); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530735, 32041, 32039); //@t
				return 0;
			}
			if(var_36_bool == 32041) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530737); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530738, 32043, 32042); //@t
				return 0;
			}
			if(var_36_bool == 32043) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530739); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530740, 32040, 32044); //@t
				return 0;
			}
			if(var_36_bool == 32040) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530736); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521045, -1, 22241); //@t
				var_0_object->AddReply(530748, -1, 32055); //@t
				return 0;
			}
			if(var_36_bool == 32015) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530714); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530722, 32024, 32023); //@t
				var_0_object->AddReply(530715, 32017, 32016); //@t
				return 0;
			}
			if(var_36_bool == 32024) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530723); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530724, 32026, 32025); //@t
				return 0;
			}
			if(var_36_bool == 32026) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530725); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530726, 32029, 32027); //@t
				return 0;
			}
			if(var_36_bool == 32029) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530728); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530729, 32017, 32030); //@t
				var_0_object->AddReply(530730, -1, 32031); //@t
				return 0;
			}
			if(var_36_bool == 32017) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530716); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530717, 32019, 32018); //@t
				return 0;
			}
			if(var_36_bool == 32019) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530718); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521346, -1, 22533); //@t
				return 0;
			}
			if(var_36_bool == 29681) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528312, 29683, 29682); //@t
				var_0_object->AddReply(530693, 29683, 31985); //@t
				return 0;
			}
			if(var_36_bool == 29683) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528313); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528314, 29685, 29684); //@t
				var_0_object->AddReply(530694, 29685, 31986); //@t
				return 0;
			}
			if(var_36_bool == 29685) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528316, 29687, 29686); //@t
				var_0_object->AddReply(530695, 29687, 31988); //@t
				return 0;
			}
			if(var_36_bool == 29687) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528317); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528318, 29689, 29688); //@t
				var_0_object->AddReply(530696, 31991, 31990); //@t
				return 0;
			}
			if(var_36_bool == 31991) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530697); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530698, 29689, 31992); //@t
				return 0;
			}
			if(var_36_bool == 29689) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528319); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528320, 29691, 29690); //@t
				var_0_object->AddReply(530699, 29691, 31995); //@t
				return 0;
			}
			if(var_36_bool == 29691) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528321); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528322, 29693, 29692); //@t
				var_0_object->AddReply(530704, 29693, 32001); //@t
				return 0;
			}
			if(var_36_bool == 29693) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528323); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530700, 31998, 31997); //@t
				var_0_object->AddReply(530705, 31998, 32003); //@t
				return 0;
			}
			if(var_36_bool == 31998) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530701); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530702, 32000, 31999); //@t
				var_0_object->AddReply(530710, 32000, 32008); //@t
				return 0;
			}
			if(var_36_bool == 32000) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530706, 32005, 32004); //@t
				var_0_object->AddReply(530711, 32005, 32010); //@t
				return 0;
			}
			if(var_36_bool == 32005) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530707); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530708, 32007, 32006); //@t
				var_0_object->AddReply(530712, 32007, 32011); //@t
				return 0;
			}
			if(var_36_bool == 32007) {
				func_1420(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530709); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521013, -1, 22226); //@t
				return 0;
			}
			var_3_string = true;
			bool var_662_bool;
			func_4646(var_662_bool);
			if(var_662_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5a3";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4500();
			if(var_37_cvector == 22552) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_4739();
			}
			if(var_37_cvector == 22557) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_4739();
			}
			if(var_37_cvector == 22616) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_4757();
			}
			if(var_37_cvector == 22671) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_4767();
			}
			if(var_36_bool == 22551) {
				bool var_107_bool;
				func_4907(var_1_object);
				if(var_107_bool != 0) {
					object var_115_object; object var_116_object;
					var_115_object = var_1_object;
					var_116_object = var_0_object;
					func_4751();
					func_2652(var_37_cvector, "Neutral");
					var_0_object->SetMessage(521373); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530766, 32077, 32076); //@t
					var_0_object->AddReply(530781, 32077, 32091); //@t
					return 0;
				}
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521376); //@t
				var_0_object->ClearReplies(); //@t
				bool var_140_bool;
				func_4919(var_1_object);
				if(var_140_bool != 0)
					var_0_object->AddReply(521377, 22556, 22555); //@t
				bool var_149_bool;
				func_4931(var_1_object);
				if(var_149_bool != 0)
					var_0_object->AddReply(521436, 22615, 22614); //@t
				bool var_158_bool = false;
				bool var_159_bool;
				func_4943(var_1_object);
				if(var_159_bool != 0) {
					bool var_175_bool;
					func_4977(var_1_object);
					if(var_175_bool != 0)
						var_158_bool = true;
				}
				if(var_158_bool != 0)
					var_0_object->AddReply(521510, 22672, 22671); //@t
				var_0_object->AddReply(521380, -1, 22558); //@t
				var_0_object->AddReply(530775, -1, 32085); //@t
				return 0;
			}
			if(var_36_bool == 22672) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521511); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521512, 32155, 22673); //@t
				var_0_object->AddReply(530845, 32157, 32159); //@t
				return 0;
			}
			if(var_36_bool == 32155) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530841); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530842, 32157, 32156); //@t
				var_0_object->AddReply(530846, 32166, 32161); //@t
				return 0;
			}
			if(var_36_bool == 32157) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530844, 32163, 32158); //@t
				var_0_object->AddReply(530847, 32166, 32162); //@t
				return 0;
			}
			if(var_36_bool == 32163) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530848); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530849, 32166, 32164); //@t
				var_0_object->AddReply(530850, 32166, 32165); //@t
				return 0;
			}
			if(var_36_bool == 32166) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530851); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530852, -1, 32170); //@t
				var_0_object->AddReply(530853, -1, 32171); //@t
				return 0;
			}
			if(var_36_bool == 22615) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521437); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530824, 32136, 32135); //@t
				return 0;
			}
			if(var_36_bool == 32136) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530826, 32141, 32137); //@t
				return 0;
			}
			if(var_36_bool == 32141) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530830); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530831, 32143, 32142); //@t
				var_0_object->AddReply(530834, 32150, 32145); //@t
				return 0;
			}
			if(var_36_bool == 32150) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530838); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530839, 32143, 32151); //@t
				return 0;
			}
			if(var_36_bool == 32143) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530832); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530833, 32138, 32144); //@t
				return 0;
			}
			if(var_36_bool == 32138) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530827); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530828, 32140, 32139); //@t
				var_0_object->AddReply(530840, 32140, 32153); //@t
				return 0;
			}
			if(var_36_bool == 32140) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530829); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521438, -1, 22616); //@t
				return 0;
			}
			if(var_36_bool == 22556) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521378); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530790, 32104, 32103); //@t
				return 0;
			}
			if(var_36_bool == 32104) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530791); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530792, 32106, 32105); //@t
				return 0;
			}
			if(var_36_bool == 32106) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530793); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530794, 32108, 32107); //@t
				return 0;
			}
			if(var_36_bool == 32108) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530795); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521379, -1, 22557); //@t
				return 0;
			}
			if(var_36_bool == 32077) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530767); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530768, 32079, 32078); //@t
				var_0_object->AddReply(530787, 32100, 32099); //@t
				return 0;
			}
			if(var_36_bool == 32100) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530788); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530789, 32079, 32101); //@t
				return 0;
			}
			if(var_36_bool == 32079) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530769); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530770, 32081, 32080); //@t
				return 0;
			}
			if(var_36_bool == 32081) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530771); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530772, 32083, 32082); //@t
				return 0;
			}
			if(var_36_bool == 32083) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530774, 32086, 32084); //@t
				var_0_object->AddReply(530782, 32086, 32093); //@t
				return 0;
			}
			if(var_36_bool == 32086) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530776); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530777, 32088, 32087); //@t
				return 0;
			}
			if(var_36_bool == 32088) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530778); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530779, 32090, 32089); //@t
				return 0;
			}
			if(var_36_bool == 32090) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530780); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530783, 32096, 32095); //@t
				return 0;
			}
			if(var_36_bool == 32096) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530784); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530796, 32110, 32109); //@t
				var_0_object->AddReply(521375, 32113, 22553); //@t
				return 0;
			}
			if(var_36_bool == 32113) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530800); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530801, -1, 32114); //@t
				var_0_object->AddReply(530802, -1, 32115); //@t
				return 0;
			}
			if(var_36_bool == 32110) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530798, 32112, 32111); //@t
				return 0;
			}
			if(var_36_bool == 32112) {
				func_2652(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521374, -1, 22552); //@t
				return 0;
			}
			var_3_string = true;
			bool var_419_bool;
			func_4646(var_419_bool);
			if(var_419_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa73";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4500();
			if(var_37_cvector == 24419) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_4779();
			}
			if(var_36_int == 23236) {
				bool var_48_bool;
				func_5001(var_1_object);
				if(var_48_bool != 0) {
					object var_56_object; object var_57_object;
					var_56_object = var_1_object;
					var_57_object = var_0_object;
					func_4773();
					func_3555(var_37_cvector, "Neutral");
					var_0_object->SetMessage(522067); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523208, 24405, 24404); //@t
					var_0_object->AddReply(523226, 24424, 24423); //@t
					var_0_object->AddReply(523222, -1, 24418); //@t
					return 0;
				}
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(522071); //@t
				var_0_object->ClearReplies(); //@t
				bool var_84_bool;
				func_5013(var_1_object);
				if(var_84_bool != 0)
					var_0_object->AddReply(523223, 24425, 24419); //@t
				var_0_object->AddReply(522072, -1, 23241); //@t
				return 0;
			}
			if(var_36_int == 24425) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(523228); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523229, 24428, 24426); //@t
				return 0;
			}
			if(var_36_int == 24428) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(523231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523232, -1, 24429); //@t
				return 0;
			}
			if(var_36_int == 24424) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(523227); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523235, 24411, 24433); //@t
				var_0_object->AddReply(523236, -1, 24434); //@t
				return 0;
			}
			if(var_36_int == 24405) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(523209); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523210, 24409, 24406); //@t
				var_0_object->AddReply(523214, 24411, 24410); //@t
				return 0;
			}
			if(var_36_int == 24411) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(523215); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523216, 24413, 24412); //@t
				var_0_object->AddReply(523237, 24437, 24436); //@t
				return 0;
			}
			if(var_36_int == 24437) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(523238); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523239, 24439, 24438); //@t
				return 0;
			}
			if(var_36_int == 24439) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(523240); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523241, 24417, 24440); //@t
				return 0;
			}
			if(var_36_int == 24413) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(523217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523218, 24415, 24414); //@t
				return 0;
			}
			if(var_36_int == 24415) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(523219); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522068, 23238, 23237); //@t
				return 0;
			}
			if(var_36_int == 23238) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(522069); //@t
				var_0_object->ClearReplies(); //@t
				bool var_172_bool;
				func_4989(var_1_object);
				if(var_172_bool != 0)
					var_0_object->AddReply(522073, 23243, 23242); //@t
				bool var_181_bool;
				func_4989(var_1_object);
				if(!var_181_bool) //@nz
					var_0_object->AddReply(522070, -1, 23239); //@t
				return 0;
			}
			if(var_36_int == 23243) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(522074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522075, 24408, 23244); //@t
				var_0_object->AddReply(523211, -1, 24407); //@t
				return 0;
			}
			if(var_36_int == 24408) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(523212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523234, -1, 24432); //@t
				return 0;
			}
			if(var_36_int == 24409) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(523213); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523220, 24417, 24416); //@t
				return 0;
			}
			if(var_36_int == 24417) {
				func_3555(var_37_cvector, "Neutral");
				var_0_object->SetMessage(523221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523233, 23238, 24430); //@t
				return 0;
			}
			var_3_string = true;
			bool var_218_bool;
			func_4646(var_218_bool);
			if(var_218_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdfa";
	
	}

}


maintask task_15
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_3959(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_4030();
			bool var_40_bool = false;
			bool var_41_bool;
			func_4244(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_3999(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_3979(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_4507(var_82_object);
					var_82_object = var_81_object;
					func_4392(var_80_bool, var_81_object);
				}
			} else {
				func_3994(var_36_int);
				func_4021();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_4212();
		func_4030();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
		{
		@StopGroup0();
		func_4030();
		func_4472("Neutral");
		func_4021();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_4021();
		else
			func_4472("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_4212();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_4235(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_5337(var_54_object);
			func_4472("Neutral");
			func_4030();
			func_4021();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_40_bool;
	func_4244(var_40_bool);
	if(!var_40_bool) goto Label_0; //@nz
}


void func_5125(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 259, 1, 521031);
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	func_5242(var_67_bool, var_68_object, 253);
}
EMIT "Stack[-1] = 0";


void func_4614(string var_74_string, int var_75_int)
{
	string var_77_string = "idle";
	if(var_75_int != 0)
		var_77_string += var_75_int;
	var_77_string = var_74_string;
}


// @pe
void func_4871(bool var_520_bool)
{
	int var_522_int;
	func_4523(var_522_int, "b7q03");
	if(var_522_int == 2)
		var_520_bool = true;
	var_520_bool = false;
}


void func_4621(int var_68_int)
{
	int var_71_int; bool var_72_bool;
	var_71_int = 0;
	
	for(;;) {
		string var_74_string; int var_75_int;
		var_71_int = var_75_int;
		func_4614(var_74_string, var_75_int);
		@HasAnimation(var_72_bool, "all", var_74_string);
		if(!var_72_bool) //@nz
			break;
		var_71_int += 1;
	}
	var_71_int = var_68_int;
}


void func_13(object var_0_object, int var_289_int, object var_290_object)
{
	var_0_object = var_290_object;
	bool var_300_bool; object var_301_object;
	object var_302_object;
	func_4507(var_302_object);
	var_302_object = var_301_object;
	func_4334(var_300_bool, var_301_object);
	bool var_303_bool; object var_304_object;
	var_290_object = var_304_object;
	func_4249(var_303_bool, var_304_object, 70.0);
	if(!var_303_bool) { //@nz
		var_289_int = -2;
		return 8;
	}
	object var_296_object;
	@CreateDialog(var_296_object);
	int var_307_int;
	func_4640(var_307_int);
	var_296_object->SetNPCName(var_307_int);
	int var_308_int;
	func_4638(var_308_int);
	var_296_object->SetNPCDescription(var_308_int);
	string var_309_string;
	func_4642(var_309_string);
	var_296_object->SetPhoto(var_309_string);
	string var_310_string;
	func_4644(var_310_string);
	var_296_object->SetPhoto2(var_310_string);
	int var_311_int;
	func_5320(var_311_int);
	var_296_object->SetPlayerName(var_311_int);
	bool var_297_bool;
	@IsOverrideActive(var_297_bool);
	if(var_297_bool != 0) {
		var_289_int = -2;
		return 8;
	}
	@DoDialog(var_296_object);
	object var_313_object; object var_314_object;
	var_290_object = var_313_object;
	var_296_object = var_314_object;
	TaskCall(2);
	func_94(var_315_object, var_316_object, var_317_string, var_318_bool, var_313_object, var_314_object);
	TaskReturn();
	bool var_299_bool;
	var_296_object->IsDialogEnd(var_299_bool);
	
	for(;;) {
		var_343_bool = !var_299_bool; //@nz
		if(var_343_bool == 0) goto Label_83;
		@sync();
		var_296_object->IsDialogEnd(var_299_bool);
	}
	
Label_83:
	object var_344_object;
	var_290_object = var_344_object;
	func_4317();
	@StopDialog(var_296_object);
	var_296_object->GetReturnValue(-1);
	int var_298_int = var_289_int;
}
EMIT "Stack[-4] = 0";


void func_5138(void)
{
	object var_184_object;
	@CreateDiaryEntry(var_184_object, 261, 1, 521033);
	bool var_188_bool; object var_189_object;
	var_184_object = var_189_object;
	func_5242(var_188_bool, var_189_object, 253);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4883(bool var_542_bool)
{
	int var_544_int;
	func_4523(var_544_int, "b7q03SerumWorks");
	if(var_544_int != 0) {
		var_542_bool = true;
		return 0;
	}
	var_542_bool = false;
}


void func_4638(int var_213_int)
{
	var_213_int = 515527;
}


void func_5151(void)
{
	object var_150_object;
	@CreateDiaryEntry(var_150_object, 280, 2, 521363);
	bool var_154_bool; object var_155_object;
	var_150_object = var_155_object;
	func_5242(var_154_bool, var_155_object, -1);
}
EMIT "Stack[-1] = 0";


void func_4640(int var_212_int)
{
	var_212_int = 513334;
}


// @pe
void func_4895(bool var_534_bool)
{
	int var_536_int;
	func_4523(var_536_int, "b7q03");
	if(var_536_int == 1000)
		var_534_bool = true;
	var_534_bool = false;
}


void func_4642(string var_214_string)
{
	var_214_string = "ui/NPC_Aglaja.png";
}


void func_4644(string var_215_string)
{
	var_215_string = "ui/NPC_Aglaja_b.png";
}


void func_4646(bool var_108_bool)
{
	var_108_bool = true;
}


// @pe
void func_4648(void)
{
	func_4539("boiny@door1", false);
}


void func_4392(bool var_81_bool, object var_82_object)
{
	string var_88_string; bool var_90_bool; int var_91_int; string var_92_string;
	var_88_string = "c";
	int var_89_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_82_object->HasProperty((var_88_string + (var_89_int + 1)), var_90_bool);
			if(!var_90_bool) { //@nz
			} else {
				var_89_int += 1;
			}
		}
		if(!var_89_int) { //@nz
			var_81_bool = false;
			return 10;
		}
		var_91_int = 0;
		if(var_89_int > 1)
			@irand(var_91_int, var_89_int);
		var_82_object->GetProperty((var_88_string + (var_91_int + 1)), var_92_string);
		bool var_104_bool; string var_105_string;
		var_92_string = var_105_string;
		func_4485(var_104_bool, var_105_string);
		var_104_bool = var_81_bool;
		return 10;

	}
}


// @pe
void func_297(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_371_object, object var_372_object)
{
	var_0_object = var_372_object;
	var_1_object = var_371_object;
	var_3_string = false;
	if(1 != 0) {
		func_355(var_372_object, "Neutral");
		var_0_object->SetMessage(529942); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529943, -1, 31326); //@t
		var_0_object->AddReply(529944, -1, 31327); //@t
		goto Label_325;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12d";
	}
Label_325:
	bool var_393_bool;
	func_4646(var_393_bool);
	if(var_393_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4472(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_354;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_354:
		return 0;

	}
	
}


// @pe
void func_4907(bool var_604_bool)
{
	int var_606_int;
	func_4523(var_606_int, "oob8Aglaja1");
	if(var_606_int == 0) {
		var_604_bool = true;
		return 0;
	}
	var_604_bool = false;
}


void func_5164(void)
{
	object var_158_object;
	@CreateDiaryEntry(var_158_object, 281, 2, 521364);
	bool var_162_bool; object var_163_object;
	var_158_object = var_163_object;
	func_5242(var_162_bool, var_163_object, 280);
}
EMIT "Stack[-1] = 0";


void func_4141(void)
{
	bool var_62_bool; int var_63_int; int var_64_int; bool var_65_bool;
	@WaitForAnimEnd();
	bool var_66_bool;
	func_4244(var_66_bool);
	if(!var_66_bool) //@nz
		return 12;
	int var_68_int;
	func_4621(var_68_int);
	int var_60_int;
	var_68_int = var_60_int;
	int var_61_int = 0;
	
	for(;;) {
		bool var_81_bool = false;
		if(var_61_int < 5) {
			bool var_84_bool;
			func_4244(var_84_bool);
			if(var_84_bool != 0)
				var_81_bool = true;
		}
		if(var_81_bool != 0) {
			if(!var_60_int) { //@nz
				@Sleep(3, var_62_bool);
				if(!var_62_bool) { //@nz
				} else {
			} else {
			@irand(var_63_int, var_60_int);
			@irand(var_64_int, 5);
			if(var_64_int != 0)
				var_63_int = 0;
			string var_95_string; int var_96_int;
			var_63_int = var_96_int;
			func_4614(var_95_string, var_96_int);
			@PlayAnimation("all", var_95_string);
			@WaitForAnimEnd(var_65_bool);
			var_97_bool = !var_65_bool; //@nz
			if(var_97_bool == 0) goto Label_4196;
			goto Label_4207;
			}
				Label_4196:
					bool var_88_bool;
					func_4210(var_88_bool);
					var_89_bool = !var_88_bool; //@nz
					if(var_89_bool == 0) goto Label_4202;
			}
		}
	Label_4207:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_4202:
		@ResetAAS();
		var_61_int += 1;
	}
	
}


void func_4655(void)
{
	@SetVariable("b7q01", 7);
	object var_48_object;
	func_5270(var_48_object);
	object var_45_object;
	var_48_object = var_45_object;
	float var_59_float;
	func_4575(var_59_float);
	var_45_object->AddMark("b7q01AglajaGotoStarshina", "pt_map_starshina", 1, 521027, var_59_float);
	func_5125();
}
EMIT "Stack[-1] = 0";


void func_3376(object var_0_object, int var_790_int, object var_791_object)
{
	var_0_object = var_791_object;
	bool var_801_bool; object var_802_object;
	object var_803_object;
	func_4507(var_803_object);
	var_803_object = var_802_object;
	func_4334(var_801_bool, var_802_object);
	bool var_804_bool; object var_805_object;
	var_791_object = var_805_object;
	func_4249(var_804_bool, var_805_object, 70.0);
	if(!var_804_bool) { //@nz
		var_790_int = -2;
		return 8;
	}
	object var_797_object;
	@CreateDialog(var_797_object);
	int var_808_int;
	func_4640(var_808_int);
	var_797_object->SetNPCName(var_808_int);
	int var_809_int;
	func_4638(var_809_int);
	var_797_object->SetNPCDescription(var_809_int);
	string var_810_string;
	func_4642(var_810_string);
	var_797_object->SetPhoto(var_810_string);
	string var_811_string;
	func_4644(var_811_string);
	var_797_object->SetPhoto2(var_811_string);
	int var_812_int;
	func_5320(var_812_int);
	var_797_object->SetPlayerName(var_812_int);
	bool var_798_bool;
	@IsOverrideActive(var_798_bool);
	if(var_798_bool != 0) {
		var_790_int = -2;
		return 8;
	}
	@DoDialog(var_797_object);
	object var_814_object; object var_815_object;
	var_791_object = var_814_object;
	var_797_object = var_815_object;
	TaskCall(14);
	func_3457(var_816_object, var_817_object, var_818_string, var_819_bool, var_814_object, var_815_object);
	TaskReturn();
	bool var_800_bool;
	var_797_object->IsDialogEnd(var_800_bool);
	
	for(;;) {
		var_871_bool = !var_800_bool; //@nz
		if(var_871_bool == 0) goto Label_3446;
		@sync();
		var_797_object->IsDialogEnd(var_800_bool);
	}
	
Label_3446:
	object var_872_object;
	var_791_object = var_872_object;
	func_4317();
	@StopDialog(var_797_object);
	var_797_object->GetReturnValue(-1);
	int var_799_int = var_790_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4919(bool var_639_bool)
{
	int var_641_int;
	func_4523(var_641_int, "b8q01");
	if(var_641_int == 0) {
		var_639_bool = true;
		return 0;
	}
	var_639_bool = false;
}


void func_5177(void)
{
	object var_219_object;
	@CreateDiaryEntry(var_219_object, 283, 2, 521366);
	bool var_223_bool; object var_224_object;
	var_219_object = var_224_object;
	func_5242(var_223_bool, var_224_object, 280);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4931(bool var_648_bool)
{
	int var_650_int;
	func_4523(var_650_int, "b8q01");
	if(var_650_int == 7)
		var_648_bool = true;
	var_648_bool = false;
}


// @pe
void func_4678(void)
{
	func_5138();
	bool var_191_bool;
	func_4563(var_191_bool, "quest_b7_01", "completed");
}


void func_5190(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 284, 1, 521455);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_5242(var_51_bool, var_52_object, -1);
}
EMIT "Stack[-1] = 0";


void func_4429(bool var_112_bool, object var_113_object)
{
	bool var_121_bool; int var_122_int; string var_123_string;
	int var_125_int;
	func_4580(var_125_int);
	string var_119_string = ("d" + var_125_int) + "m";
	int var_120_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_113_object->HasProperty((var_119_string + (var_120_int + 1)), var_121_bool);
			if(!var_121_bool) { //@nz
			} else {
				var_120_int += 1;
			}
		}
		if(!var_120_int) { //@nz
			var_112_bool = false;
			return 10;
		}
		var_122_int = 0;
		if(var_120_int > 1)
			@irand(var_122_int, var_120_int);
		var_113_object->GetProperty((var_119_string + (var_122_int + 1)), var_123_string);
		bool var_144_bool; string var_145_string;
		var_123_string = var_145_string;
		func_4485(var_144_bool, var_145_string);
		var_144_bool = var_112_bool;
		return 10;

	}
}


// @pe
void func_4943(bool var_658_bool)
{
	bool var_660_bool = false;
	bool var_661_bool = false;
	int var_662_int;
	func_4523(var_662_int, "b8q03");
	if(var_662_int != 0) {
		int var_666_int;
		func_4523(var_666_int, "b8q03");
		if(var_666_int != 1000)
			var_661_bool = true;
	}
	if(var_661_bool != 0) {
		int var_670_int;
		func_4523(var_670_int, "b8q03");
		if(var_670_int != -1)
			var_660_bool = true;
	}
	if(var_660_bool != 0) {
		var_658_bool = true;
		return 0;
	}
	var_658_bool = false;
}


void func_4688(void)
{
	@SetVariable("b7q03", 1);
	object var_143_object;
	func_5270(var_143_object);
	object var_140_object;
	var_143_object = var_140_object;
	float var_148_float;
	func_4575(var_148_float);
	var_140_object->AddMark("b7q03AglajaGotoTheater", "pt_map_theater", 0, 521367, var_148_float);
	func_5151();
	func_5164();
	object var_165_object;
	func_4528(var_165_object, "quest_b7_03");
	bool var_173_bool;
	func_4563(var_173_bool, "quest_b7_03", "place_birdmask");
}
EMIT "Stack[-1] = 0";


void func_5203(void)
{
	object var_70_object;
	@CreateDiaryEntry(var_70_object, 285, 1, 521456);
	bool var_74_bool; object var_75_object;
	var_70_object = var_75_object;
	func_5242(var_74_bool, var_75_object, 284);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2652(object var_2_object, string var_614_string)
{
	bool var_615_bool;
	func_4646(var_615_bool);
	if(!var_615_bool) //@nz
		return 0;
	if(var_614_string == var_2_object)
		return 0;
	string var_618_string; bool var_619_bool;
	var_614_string = var_618_string;
	if(var_614_string == "")
		var_619_bool = false;
	else
		var_619_bool = true;
	func_4479(var_618_string, var_619_bool);
	var_2_object = var_614_string;
	
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_313_object, object var_314_object)
{
	var_0_object = var_314_object;
	var_1_object = var_313_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_314_object, "Neutral");
		var_0_object->SetMessage(529922); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529923, -1, 31306); //@t
		var_0_object->AddReply(529924, -1, 31307); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_335_bool;
	func_4646(var_335_bool);
	if(var_335_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4472(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_151;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_151:
		return 0;

	}
	
}


void func_5216(void)
{
	object var_86_object;
	@CreateDiaryEntry(var_86_object, 292, 1, 521463);
	bool var_90_bool; object var_91_object;
	var_86_object = var_91_object;
	func_5242(var_90_bool, var_91_object, 284);
}
EMIT "Stack[-1] = 0";


void func_1121(object var_0_object, int var_406_int, object var_407_object)
{
	var_0_object = var_407_object;
	bool var_417_bool; object var_418_object;
	object var_419_object;
	func_4507(var_419_object);
	var_419_object = var_418_object;
	func_4334(var_417_bool, var_418_object);
	bool var_420_bool; object var_421_object;
	var_407_object = var_421_object;
	func_4249(var_420_bool, var_421_object, 70.0);
	if(!var_420_bool) { //@nz
		var_406_int = -2;
		return 8;
	}
	object var_413_object;
	@CreateDialog(var_413_object);
	int var_424_int;
	func_4640(var_424_int);
	var_413_object->SetNPCName(var_424_int);
	int var_425_int;
	func_4638(var_425_int);
	var_413_object->SetNPCDescription(var_425_int);
	string var_426_string;
	func_4642(var_426_string);
	var_413_object->SetPhoto(var_426_string);
	string var_427_string;
	func_4644(var_427_string);
	var_413_object->SetPhoto2(var_427_string);
	int var_428_int;
	func_5320(var_428_int);
	var_413_object->SetPlayerName(var_428_int);
	bool var_414_bool;
	@IsOverrideActive(var_414_bool);
	if(var_414_bool != 0) {
		var_406_int = -2;
		return 8;
	}
	@DoDialog(var_413_object);
	object var_430_object; object var_431_object;
	var_407_object = var_430_object;
	var_413_object = var_431_object;
	TaskCall(10);
	func_1202(var_432_object, var_433_object, var_434_string, var_435_bool, var_430_object, var_431_object);
	TaskReturn();
	bool var_416_bool;
	var_413_object->IsDialogEnd(var_416_bool);
	
	for(;;) {
		var_569_bool = !var_416_bool; //@nz
		if(var_569_bool == 0) goto Label_1191;
		@sync();
		var_413_object->IsDialogEnd(var_416_bool);
	}
	
Label_1191:
	object var_570_object;
	var_407_object = var_570_object;
	func_4317();
	@StopDialog(var_413_object);
	var_413_object->GetReturnValue(-1);
	int var_415_int = var_406_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_355(object var_2_object, string var_378_string)
{
	bool var_379_bool;
	func_4646(var_379_bool);
	if(!var_379_bool) //@nz
		return 0;
	if(var_378_string == var_2_object)
		return 0;
	string var_382_string; bool var_383_bool;
	var_378_string = var_382_string;
	if(var_378_string == "")
		var_383_bool = false;
	else
		var_383_bool = true;
	func_4479(var_382_string, var_383_bool);
	var_2_object = var_378_string;
	
}


// @pe
void func_615(object var_2_object, string var_724_string)
{
	bool var_725_bool;
	func_4646(var_725_bool);
	if(!var_725_bool) //@nz
		return 0;
	if(var_724_string == var_2_object)
		return 0;
	string var_728_string; bool var_729_bool;
	var_724_string = var_728_string;
	if(var_724_string == "")
		var_729_bool = false;
	else
		var_729_bool = true;
	func_4479(var_728_string, var_729_bool);
	var_2_object = var_724_string;
	
}


void func_872(object var_0_object, int var_59_int, object var_60_object)
{
	var_0_object = var_60_object;
	bool var_70_bool; object var_71_object;
	object var_72_object;
	func_4507(var_72_object);
	var_72_object = var_71_object;
	func_4334(var_70_bool, var_71_object);
	bool var_165_bool; object var_166_object;
	var_60_object = var_166_object;
	func_4249(var_165_bool, var_166_object, 70.0);
	if(!var_165_bool) { //@nz
		var_59_int = -2;
		return 8;
	}
	object var_66_object;
	@CreateDialog(var_66_object);
	int var_212_int;
	func_4640(var_212_int);
	var_66_object->SetNPCName(var_212_int);
	int var_213_int;
	func_4638(var_213_int);
	var_66_object->SetNPCDescription(var_213_int);
	string var_214_string;
	func_4642(var_214_string);
	var_66_object->SetPhoto(var_214_string);
	string var_215_string;
	func_4644(var_215_string);
	var_66_object->SetPhoto2(var_215_string);
	int var_216_int;
	func_5320(var_216_int);
	var_66_object->SetPlayerName(var_216_int);
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	@DoDialog(var_66_object);
	object var_225_object; object var_226_object;
	var_60_object = var_225_object;
	var_66_object = var_226_object;
	TaskCall(8);
	func_953(var_227_object, var_228_object, var_229_string, var_230_bool, var_225_object, var_226_object);
	TaskReturn();
	bool var_69_bool;
	var_66_object->IsDialogEnd(var_69_bool);
	
	for(;;) {
		var_264_bool = !var_69_bool; //@nz
		if(var_264_bool == 0) goto Label_942;
		@sync();
		var_66_object->IsDialogEnd(var_69_bool);
	}
	
Label_942:
	object var_265_object;
	var_60_object = var_265_object;
	func_4317();
	@StopDialog(var_66_object);
	var_66_object->GetReturnValue(-1);
	int var_68_int = var_59_int;
}
EMIT "Stack[-4] = 0";


void func_5229(object var_60_object)
{
	object var_62_object;
	@GetDiaryRoot(var_62_object);
	if(!var_62_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_60_object = false;
	}
	var_62_object = var_60_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4977(bool var_674_bool)
{
	int var_676_int;
	func_4523(var_676_int, "oob8Aglaja2");
	if(var_676_int == 0) {
		var_674_bool = true;
		return 0;
	}
	var_674_bool = false;
}


void func_4210(bool var_88_bool)
{
	var_88_bool = true;
}


// @pe
void func_4723(void)
{
	@SetVariable("oob7Aglaja1", 1);
}


void func_4212(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3959(object var_0_object)
{
	bool var_36_bool;
	func_4244(var_36_bool);
	if(!var_36_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_4087();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_4141();
	}
}
EMIT "Return(); Pop(0)";


void func_4472(string var_43_string)
{
	float var_46_float; float var_47_float;
	@lshGetAnimTimes(var_43_string, var_46_float, var_47_float);
	@lshPlayAnimation(var_46_float, var_47_float, false);
}


// @pe
void func_4729(void)
{
	func_5177();
	bool var_226_bool;
	func_4563(var_226_bool, "quest_b7_03", "completed");
}


void func_4217(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


void func_5242(bool var_51_bool, object var_52_object, int var_53_int)
{
	object var_60_object;
	func_5229(var_60_object);
	object var_57_object;
	var_60_object = var_57_object;
	object var_58_object;
	var_57_object->Find(var_53_int, var_58_object);
	if(!var_58_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_53_int);
		var_51_bool = false;
	}
	var_58_object->AddChild(var_52_object);
	@SendWorldWndMessage(7);
	int var_59_int;
	var_52_object->GetCategory(var_59_int);
	@SetDiarySection(var_59_int);
	var_51_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_4989(bool var_172_bool)
{
	int var_174_int;
	func_4523(var_174_int, "b11q01");
	if(var_174_int == 1000)
		var_172_bool = true;
	var_172_bool = false;
}


void func_4479(string var_236_string, bool var_237_bool)
{
	float var_242_float; float var_243_float;
	@lshGetAnimTimes(var_236_string, var_242_float, var_243_float);
	@lshPlayAnimation(var_242_float, var_243_float, var_237_bool);
}


void func_4225(bool var_44_bool, cvector var_45_cvector)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector = var_45_cvector - var_49_cvector;
	var_52_float = GetByIndex(var_50_cvector, 0);
	var_53_float = GetByIndex(var_50_cvector, 2);
	bool var_51_bool;
	@Rotate(var_52_float, var_53_float, var_51_bool);
	var_51_bool = var_44_bool;
}


// @pe
void func_3457(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_814_object, object var_815_object)
{
	var_0_object = var_815_object;
	var_1_object = var_814_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_821_bool;
		func_5001(var_1_object);
		if(var_821_bool != 0) {
			object var_827_object; object var_828_object;
			var_827_object = var_1_object;
			var_828_object = var_0_object;
			func_4773();
			func_3555(var_815_object, "Neutral");
			var_0_object->SetMessage(522067); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(523208, 24405, 24404); //@t
			var_0_object->AddReply(523226, 24424, 24423); //@t
			var_0_object->AddReply(523222, -1, 24418); //@t
		} else {
					func_3555(var_815_object, "Neutral");
					var_0_object->SetMessage(522071); //@t
					var_0_object->ClearReplies(); //@t
					bool var_859_bool;
					func_5013(var_1_object);
					if(var_859_bool != 0)
						var_0_object->AddReply(523223, 24425, 24419); //@t
					var_0_object->AddReply(522072, -1, 23241); //@t
		}
	}
	for(;;) {
		bool var_849_bool;
		func_4646(var_849_bool);
		if(var_849_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4472(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_3554;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3554:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xd85";


// @pe
void func_4739(void)
{
	@SetVariable("b8q01", 1);
	func_5190();
	func_5203();
}


void func_4485(bool var_104_bool, string var_105_string)
{
	bool var_107_bool;
	bool var_108_bool;
	func_4646(var_108_bool);
	if(var_108_bool != 0) {
		@lshHasSpeech(var_107_bool, var_105_string);
		if(var_107_bool != 0) {
			@lshPlaySpeech(var_105_string);
			var_104_bool = true;
		}
	}
	var_104_bool = false;
}


// @pe
void func_5001(bool var_821_bool)
{
	int var_823_int;
	func_4523(var_823_int, "oob11Aglaja1");
	if(var_823_int == 0) {
		var_821_bool = true;
		return 0;
	}
	var_821_bool = false;
}


void func_4235(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_4225(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


void func_3979(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_4235(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1420(object var_2_object, string var_445_string)
{
	bool var_446_bool;
	func_4646(var_446_bool);
	if(!var_446_bool) //@nz
		return 0;
	if(var_445_string == var_2_object)
		return 0;
	string var_449_string; bool var_450_bool;
	var_445_string = var_449_string;
	if(var_445_string == "")
		var_450_bool = false;
	else
		var_450_bool = true;
	func_4479(var_449_string, var_450_bool);
	var_2_object = var_445_string;
	
}


void func_2444(object var_0_object, int var_573_int, object var_574_object)
{
	var_0_object = var_574_object;
	bool var_584_bool; object var_585_object;
	object var_586_object;
	func_4507(var_586_object);
	var_586_object = var_585_object;
	func_4334(var_584_bool, var_585_object);
	bool var_587_bool; object var_588_object;
	var_574_object = var_588_object;
	func_4249(var_587_bool, var_588_object, 70.0);
	if(!var_587_bool) { //@nz
		var_573_int = -2;
		return 8;
	}
	object var_580_object;
	@CreateDialog(var_580_object);
	int var_591_int;
	func_4640(var_591_int);
	var_580_object->SetNPCName(var_591_int);
	int var_592_int;
	func_4638(var_592_int);
	var_580_object->SetNPCDescription(var_592_int);
	string var_593_string;
	func_4642(var_593_string);
	var_580_object->SetPhoto(var_593_string);
	string var_594_string;
	func_4644(var_594_string);
	var_580_object->SetPhoto2(var_594_string);
	int var_595_int;
	func_5320(var_595_int);
	var_580_object->SetPlayerName(var_595_int);
	bool var_581_bool;
	@IsOverrideActive(var_581_bool);
	if(var_581_bool != 0) {
		var_573_int = -2;
		return 8;
	}
	@DoDialog(var_580_object);
	object var_597_object; object var_598_object;
	var_574_object = var_597_object;
	var_580_object = var_598_object;
	TaskCall(12);
	func_2525(var_599_object, var_600_object, var_601_string, var_602_bool, var_597_object, var_598_object);
	TaskReturn();
	bool var_583_bool;
	var_580_object->IsDialogEnd(var_583_bool);
	
	for(;;) {
		var_689_bool = !var_583_bool; //@nz
		if(var_689_bool == 0) goto Label_2514;
		@sync();
		var_580_object->IsDialogEnd(var_583_bool);
	}
	
Label_2514:
	object var_690_object;
	var_574_object = var_690_object;
	func_4317();
	@StopDialog(var_580_object);
	var_580_object->GetReturnValue(-1);
	int var_582_int = var_573_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4751(void)
{
	@SetVariable("oob8Aglaja1", 1);
}


void func_4244(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


// @pe
void func_4757(void)
{
	func_5216();
	bool var_93_bool;
	func_4563(var_93_bool, "quest_b8_01", "completed");
}


void func_5270(object var_48_object)
{
	object var_51_object; object var_52_object;
	@GetMainOutdoorScene(var_51_object);
	if(var_51_object == null) {
		@Trace("Can't find main outdoor scene");
		var_52_object = null;
		var_52_object = var_48_object;
	}
	var_51_object->GetMap(var_52_object);
	var_52_object = var_48_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_4500(void)
{
	bool var_39_bool;
	func_4646(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_152(object var_2_object, string var_320_string)
{
	bool var_321_bool;
	func_4646(var_321_bool);
	if(!var_321_bool) //@nz
		return 0;
	if(var_320_string == var_2_object)
		return 0;
	string var_324_string; bool var_325_bool;
	var_320_string = var_324_string;
	if(var_320_string == "")
		var_325_bool = false;
	else
		var_325_bool = true;
	func_4479(var_324_string, var_325_bool);
	var_2_object = var_320_string;
	
}


void func_4249(bool var_165_bool, object var_166_object, float var_167_float)
{
	cvector var_178_cvector; bool var_185_bool;
	var_166_object->GetPosition(var_178_cvector);
	float var_177_float;
	var_166_object->GetEyesHeight(var_177_float);
	var_186_float = GetByIndex(var_178_cvector, 1);
	SetByIndex(var_178_cvector, 1) = (var_186_float + var_177_float);
	cvector var_179_cvector;
	@GetPosition(var_179_cvector);
	@GetEyesHeight(var_177_float);
	var_187_float = GetByIndex(var_179_cvector, 1);
	SetByIndex(var_179_cvector, 1) = (var_187_float + var_177_float);
	cvector var_180_cvector = var_178_cvector - var_179_cvector;
	var_188_float = GetByIndex(var_180_cvector, 1);
	SetByIndex(var_180_cvector, 1) = (float)0;
	var_190_float = sqrt(var_180_cvector | var_180_cvector);
	var_180_cvector /= var_190_float;
	cvector var_181_cvector = -var_180_cvector;
	cvector var_192_cvector;
	func_4513(var_192_cvector, (var_181_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_182_cvector = ((var_180_cvector * var_167_float) + (var_192_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_184_bool;
	@IsOverrideActive(var_184_bool);
	if(var_184_bool != 0)
		var_165_bool = false;
	@StopWorld();
	@CameraTransit((var_179_cvector + var_182_cvector), var_181_cvector);
	var_205_float = GetByIndex(var_182_cvector, 0);
	var_206_float = GetByIndex(var_182_cvector, 2);
	@Rotate(var_205_float, var_206_float);
	bool var_207_bool;
	func_4646(var_207_bool);
	if(var_207_bool != 0) {
	} else {
		@HasAnimationTrack(var_185_bool, "head");
		if(var_185_bool == 0) goto Label_4311;
		@LookAsyncCamera("head");
	}
Label_4311:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_165_bool = true;
	
}


// @pe
void func_5013(bool var_859_bool)
{
	int var_861_int;
	func_4523(var_861_int, "oob11Aglaja2");
	if(var_861_int == 0) {
		var_859_bool = true;
		return 0;
	}
	var_859_bool = false;
}


void func_3994(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


void func_4507(object var_72_object)
{
	object var_74_object;
	@self(var_74_object);
	var_74_object = var_72_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4767(void)
{
	@SetVariable("oob8Aglaja2", 1);
}


void func_3999(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_4217(var_51_float, var_52_object);
	if(var_51_float > 90000.0) {
		var_44_bool = false;
		return 4;
	}
	bool var_48_bool;
	@CanSee(var_48_bool, var_52_object);
	var_48_bool = var_44_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_5025(bool var_741_bool)
{
	int var_743_int;
	func_4523(var_743_int, "b9q03BadInit");
	if(var_743_int != 0) {
		var_741_bool = true;
		return 0;
	}
	var_741_bool = false;
}


void func_4513(cvector var_192_cvector, cvector var_193_cvector)
{
	float var_196_float = sqrt(var_193_cvector | var_193_cvector);
	if(var_196_float < 0.000001)
		var_192_cvector = [0.0, 0.0, 0.0];
	var_192_cvector = var_193_cvector / var_196_float;
}


void func_419(object var_0_object, int var_693_int, object var_694_object)
{
	var_0_object = var_694_object;
	bool var_704_bool; object var_705_object;
	object var_706_object;
	func_4507(var_706_object);
	var_706_object = var_705_object;
	func_4334(var_704_bool, var_705_object);
	bool var_707_bool; object var_708_object;
	var_694_object = var_708_object;
	func_4249(var_707_bool, var_708_object, 70.0);
	if(!var_707_bool) { //@nz
		var_693_int = -2;
		return 8;
	}
	object var_700_object;
	@CreateDialog(var_700_object);
	int var_711_int;
	func_4640(var_711_int);
	var_700_object->SetNPCName(var_711_int);
	int var_712_int;
	func_4638(var_712_int);
	var_700_object->SetNPCDescription(var_712_int);
	string var_713_string;
	func_4642(var_713_string);
	var_700_object->SetPhoto(var_713_string);
	string var_714_string;
	func_4644(var_714_string);
	var_700_object->SetPhoto2(var_714_string);
	int var_715_int;
	func_5320(var_715_int);
	var_700_object->SetPlayerName(var_715_int);
	bool var_701_bool;
	@IsOverrideActive(var_701_bool);
	if(var_701_bool != 0) {
		var_693_int = -2;
		return 8;
	}
	@DoDialog(var_700_object);
	object var_717_object; object var_718_object;
	var_694_object = var_717_object;
	var_700_object = var_718_object;
	TaskCall(6);
	func_500(var_719_object, var_720_object, var_721_string, var_722_bool, var_717_object, var_718_object);
	TaskReturn();
	bool var_703_bool;
	var_700_object->IsDialogEnd(var_703_bool);
	
	for(;;) {
		var_786_bool = !var_703_bool; //@nz
		if(var_786_bool == 0) goto Label_489;
		@sync();
		var_700_object->IsDialogEnd(var_703_bool);
	}
	
Label_489:
	object var_787_object;
	var_694_object = var_787_object;
	func_4317();
	@StopDialog(var_700_object);
	var_700_object->GetReturnValue(-1);
	int var_702_int = var_693_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4773(void)
{
	@SetVariable("oob11Aglaja1", 1);
}


void func_5287(object var_111_object, string var_112_string, float var_113_float)
{
	object var_121_object;
	@GetMainOutdoorScene(var_121_object);
	if(var_121_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_119_cvector;
	cvector var_120_cvector;
	bool var_122_bool;
	var_121_object->GetLocator(var_112_string, var_122_bool, var_119_cvector, var_120_cvector);
	if(!var_122_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_112_string) + " doesnt exist");
	var_121_object->GetMap(var_111_object);
	if(var_111_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_132_float = GetByIndex(var_119_cvector, 0);
	var_133_float = GetByIndex(var_119_cvector, 2);
	var_111_object->SetMapParams(var_132_float, var_133_float, var_113_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_4779(void)
{
	@SetVariable("oob11Aglaja2", 1);
}


void func_4523(int var_439_int, string var_440_string)
{
	int var_442_int;
	@GetVariable(var_440_string, var_442_int);
	var_442_int = var_439_int;
}


// @pe
void func_5037(bool var_735_bool)
{
	int var_737_int;
	func_4523(var_737_int, "b9q03BonefiresCount");
	if(var_737_int == 4)
		var_735_bool = true;
	var_735_bool = false;
}


void func_4528(object var_165_object, string var_166_string)
{
	object var_169_object;
	@GetMainOutdoorScene(var_169_object);
	object var_170_object;
	@AddBlankActor(var_170_object, var_169_object, var_166_string, (var_166_string + ".bin"));
	var_170_object = var_165_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4785(void)
{
	@SetVariable("oob9Aglaja1", 1);
}


// @pe
void func_1202(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_430_object, object var_431_object)
{
	var_0_object = var_431_object;
	var_1_object = var_430_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_437_bool;
		func_5083(var_1_object);
		if(var_437_bool != 0) {
			func_1420(var_431_object, "Neutral");
			var_0_object->SetMessage(521012); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530692, 29681, 31984); //@t
			var_0_object->AddReply(528310, -1, 29680); //@t
		} else {
					bool var_468_bool = false;
					bool var_469_bool = false;
					bool var_470_bool;
					func_4847(var_1_object);
					if(var_470_bool != 0) {
						bool var_476_bool;
						func_4859(var_1_object);
						if(var_476_bool != 0)
							var_469_bool = true;
					}
					if(var_469_bool != 0) {
						bool var_482_bool;
						func_5095(var_482_bool, var_1_object);
						if(var_482_bool != 0)
							var_468_bool = true;
					}
					if(var_468_bool == 0) goto Label_1281;
					object var_491_object; object var_492_object;
					var_491_object = var_1_object;
					var_492_object = var_0_object;
					func_4723();
					func_1420(var_431_object, "Neutral");
					var_0_object->SetMessage(521347); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530713, 32015, 32014); //@t
					var_0_object->AddReply(530721, 32015, 32022); //@t
		}
	}
Label_1390:
	for(;;) {
		bool var_460_bool;
		func_4646(var_460_bool);
		if(var_460_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4472(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1419;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1419:
			return 0;

		}

	}
	
Label_1281:
	func_1420(var_431_object, "Neutral");
	var_0_object->SetMessage(521014); //@t
	var_0_object->ClearReplies(); //@t
	bool var_505_bool = false;
	bool var_506_bool;
	func_5095(var_506_bool, var_1_object);
	if(var_506_bool != 0) {
		bool var_508_bool;
		func_5106(var_1_object);
		if(var_508_bool != 0)
			var_505_bool = true;
	}
	if(var_505_bool != 0)
		var_0_object->AddReply(521043, 22240, 22239); //@t
	bool var_517_bool = true;
	bool var_518_bool = false;
	bool var_519_bool = false;
	bool var_520_bool;
	func_4871(var_1_object);
	if(var_520_bool != 0) {
		bool var_526_bool;
		func_5073(var_526_bool, var_1_object);
		if(var_526_bool != 0)
			var_519_bool = true;
	}
	if(var_519_bool != 0) {
		bool var_534_bool;
		func_4895(var_1_object);
		if(!var_534_bool) //@nz
			var_518_bool = true;
	}
	if(var_518_bool != 1) {
		bool var_541_bool = false;
		bool var_542_bool;
		func_4883(var_1_object);
		if(var_542_bool != 0) {
			bool var_548_bool;
			func_4895(var_1_object);
			if(!var_548_bool) //@nz
				var_541_bool = true;
		}
		if(var_541_bool != 1)
			var_517_bool = false;
	}
	if(var_517_bool != 0)
		var_0_object->AddReply(521348, 22536, 22535); //@t
	bool var_554_bool = false;
	bool var_555_bool;
	func_4871(var_1_object);
	if(var_555_bool != 0) {
		bool var_557_bool;
		func_5073(var_557_bool, var_1_object);
		if(!var_557_bool) //@nz
			var_554_bool = true;
	}
	if(var_554_bool != 0)
		var_0_object->AddReply(521360, 22548, 22547); //@t
	var_0_object->AddReply(521015, -1, 22228); //@t
	var_0_object->AddReply(528324, -1, 29694); //@t
	goto Label_1390;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4b6";


void func_4021(void)
{
	float var_50_float;
	@rand(var_50_float, 8, 16);
	@SetTimer(10, var_50_float);
}


// @pe
void func_4791(void)
{
	@SetVariable("oob9Aglaja2", 1);
}


// @pe
void func_5049(bool var_748_bool)
{
	int var_750_int;
	func_4523(var_750_int, "oob9Aglaja1");
	if(var_750_int == 0) {
		var_748_bool = true;
		return 0;
	}
	var_748_bool = false;
}


// @pe
void func_953(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_225_object, object var_226_object)
{
	var_0_object = var_226_object;
	var_1_object = var_225_object;
	var_3_string = false;
	if(1 != 0) {
		func_1011(var_226_object, "Neutral");
		var_0_object->SetMessage(530682); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(530683, 31974, 31973); //@t
		var_0_object->AddReply(530688, 31974, 31978); //@t
		goto Label_981;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3bd";
	}
Label_981:
	bool var_251_bool;
	func_4646(var_251_bool);
	if(var_251_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4472(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1010;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1010:
		return 0;

	}
	
}


void func_4539(string var_87_string, bool var_88_bool)
{
	object var_90_object;
	@FindActor(var_90_object, var_87_string);
	if(!var_90_object) //@nz
		@Trace(("Door " + var_87_string) + " not found");
	else
		var_90_object->SetProperty("locked", var_88_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_4797(void)
{
	int var_99_int;
	func_4523(var_99_int, "map_chertez_state");
	if(var_99_int <= 1) {
		@SetVariable("map_chertez_state", 1);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_4030(void)
{
	@KillTimer(10);
}


// @pe
void func_5061(bool var_763_bool)
{
	int var_765_int;
	func_4523(var_765_int, "oob9Aglaja2");
	if(var_765_int == 0) {
		var_763_bool = true;
		return 0;
	}
	var_763_bool = false;
}


void func_5320(int var_216_int)
{
	int var_218_int;
	@GetVariable("branch", var_218_int);
	if(var_218_int == 0) {
		var_216_int = 1;
		return 2;
	EMIT "GOTO 0x14d7";
	}
	if(var_218_int == 1) {
		var_216_int = 2;
		return 2;
	}
	var_216_int = 3;
}


void func_4556(bool var_484_bool, object var_485_object, string var_486_string)
{
	int var_489_int;
	@GetInvItemByName(var_489_int, var_486_string);
	bool var_490_bool;
	var_485_object->HasItem(var_489_int, var_490_bool);
	var_490_bool = var_484_bool;
}


// @pe
void func_4814(void)
{
	int var_196_int;
	func_4523(var_196_int, "map_chertez_state");
	if(var_196_int <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_5073(bool var_526_bool, object var_527_object)
{
	object var_529_object;
	var_527_object = var_529_object;
	bool var_528_bool;
	func_5118(var_528_bool, var_529_object);
	if(var_528_bool != 0) {
		var_526_bool = true;
		return 0;
	}
	var_526_bool = false;
}


void func_4563(bool var_93_bool, string var_94_string, string var_95_string)
{
	object var_97_object;
	@FindActor(var_97_object, var_94_string);
	if(var_97_object == null)
		var_93_bool = false;
	@Trigger(var_97_object, var_95_string);
	var_93_bool = true;
}
EMIT "Stack[-1] = 0";


void func_216(object var_0_object, int var_347_int, object var_348_object)
{
	var_0_object = var_348_object;
	bool var_358_bool; object var_359_object;
	object var_360_object;
	func_4507(var_360_object);
	var_360_object = var_359_object;
	func_4334(var_358_bool, var_359_object);
	bool var_361_bool; object var_362_object;
	var_348_object = var_362_object;
	func_4249(var_361_bool, var_362_object, 70.0);
	if(!var_361_bool) { //@nz
		var_347_int = -2;
		return 8;
	}
	object var_354_object;
	@CreateDialog(var_354_object);
	int var_365_int;
	func_4640(var_365_int);
	var_354_object->SetNPCName(var_365_int);
	int var_366_int;
	func_4638(var_366_int);
	var_354_object->SetNPCDescription(var_366_int);
	string var_367_string;
	func_4642(var_367_string);
	var_354_object->SetPhoto(var_367_string);
	string var_368_string;
	func_4644(var_368_string);
	var_354_object->SetPhoto2(var_368_string);
	int var_369_int;
	func_5320(var_369_int);
	var_354_object->SetPlayerName(var_369_int);
	bool var_355_bool;
	@IsOverrideActive(var_355_bool);
	if(var_355_bool != 0) {
		var_347_int = -2;
		return 8;
	}
	@DoDialog(var_354_object);
	object var_371_object; object var_372_object;
	var_348_object = var_371_object;
	var_354_object = var_372_object;
	TaskCall(4);
	func_297(var_373_object, var_374_object, var_375_string, var_376_bool, var_371_object, var_372_object);
	TaskReturn();
	bool var_357_bool;
	var_354_object->IsDialogEnd(var_357_bool);
	
	for(;;) {
		var_401_bool = !var_357_bool; //@nz
		if(var_401_bool == 0) goto Label_286;
		@sync();
		var_354_object->IsDialogEnd(var_357_bool);
	}
	
Label_286:
	object var_402_object;
	var_348_object = var_402_object;
	func_4317();
	@StopDialog(var_354_object);
	var_354_object->GetReturnValue(-1);
	int var_356_int = var_347_int;
}
EMIT "Stack[-4] = 0";


void func_5337(object var_54_object)
{
	int var_56_int;
	@GetVariable("mt_aglaja", var_56_int);
	if(!var_56_int) { //@nz
		int var_59_int; object var_60_object;
		var_54_object = var_60_object;
		TaskCall(7);
		func_872(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		@SetVariable("mt_aglaja", 1);
	}
	bool var_274_bool;
	func_4595(var_274_bool, 8);
	if(var_274_bool != 0) {
		int var_289_int; object var_290_object;
		var_54_object = var_290_object;
		TaskCall(1);
		func_13(var_291_object, var_289_int, var_290_object);
		TaskReturn();
		return 2;
	}
	bool var_345_bool;
	func_4595(var_345_bool, 12);
	if(var_345_bool != 0) {
		int var_347_int; object var_348_object;
		var_54_object = var_348_object;
		TaskCall(3);
		func_216(var_349_object, var_347_int, var_348_object);
		TaskReturn();
		return 2;
	}
	bool var_403_bool;
	func_4589(var_403_bool, 7);
	if(var_403_bool != 0) {
		int var_406_int; object var_407_object;
		var_54_object = var_407_object;
		TaskCall(9);
		func_1121(var_408_object, var_406_int, var_407_object);
		TaskReturn();
		return 2;
	}
	bool var_571_bool;
	func_4589(var_571_bool, 8);
	if(var_571_bool != 0) {
		int var_573_int; object var_574_object;
		var_54_object = var_574_object;
		TaskCall(11);
		func_2444(var_575_object, var_573_int, var_574_object);
		TaskReturn();
		return 2;
	}
	bool var_691_bool;
	func_4589(var_691_bool, 9);
	if(var_691_bool != 0) {
		int var_693_int; object var_694_object;
		var_54_object = var_694_object;
		TaskCall(5);
		func_419(var_695_object, var_693_int, var_694_object);
		TaskReturn();
		return 2;
	}
	bool var_788_bool;
	func_4589(var_788_bool, 11);
	if(var_788_bool != 0) {
		int var_790_int; object var_791_object;
		var_54_object = var_791_object;
		TaskCall(13);
		func_3376(var_792_object, var_790_int, var_791_object);
		TaskReturn();
		return 2;
	}
}


// @pe
void func_5083(bool var_437_bool)
{
	int var_439_int;
	func_4523(var_439_int, "b7q01");
	if(var_439_int == 6)
		var_437_bool = true;
	var_437_bool = false;
}


void func_4317(void)
{
	bool var_267_bool;
	@CameraSwitchToNormal();
	bool var_268_bool;
	func_4646(var_268_bool);
	if(var_268_bool != 0) {
	} else {
		@HasAnimationTrack(var_267_bool, "head");
		if(var_267_bool == 0) goto Label_4333;
		@UnlookAsync("head");
	}
Label_4333:
	
}


// @pe
void func_2525(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_597_object, object var_598_object)
{
	var_0_object = var_598_object;
	var_1_object = var_597_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_604_bool;
		func_4907(var_1_object);
		if(var_604_bool != 0) {
			object var_610_object; object var_611_object;
			var_610_object = var_1_object;
			var_611_object = var_0_object;
			func_4751();
			func_2652(var_598_object, "Neutral");
			var_0_object->SetMessage(521373); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530766, 32077, 32076); //@t
			var_0_object->AddReply(530781, 32077, 32091); //@t
		} else {
					func_2652(var_598_object, "Neutral");
					var_0_object->SetMessage(521376); //@t
					var_0_object->ClearReplies(); //@t
					bool var_639_bool;
					func_4919(var_1_object);
					if(var_639_bool != 0)
						var_0_object->AddReply(521377, 22556, 22555); //@t
					bool var_648_bool;
					func_4931(var_1_object);
					if(var_648_bool != 0)
						var_0_object->AddReply(521436, 22615, 22614); //@t
					bool var_657_bool = false;
					bool var_658_bool;
					func_4943(var_1_object);
					if(var_658_bool != 0) {
						bool var_674_bool;
						func_4977(var_1_object);
						if(var_674_bool != 0)
							var_657_bool = true;
					}
					if(var_657_bool != 0)
						var_0_object->AddReply(521510, 22672, 22671); //@t
					var_0_object->AddReply(521380, -1, 22558); //@t
					var_0_object->AddReply(530775, -1, 32085); //@t
		}
	}
	for(;;) {
		bool var_629_bool;
		func_4646(var_629_bool);
		if(var_629_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4472(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2651;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2651:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x9e1";


// @pe
void func_4831(object var_110_object)
{
	object var_114_object;
	func_5270(var_114_object);
	object var_111_object;
	var_114_object = var_111_object;
	func_5287(var_111_object, "pt_map_aglaja", (float)-1);
	object var_134_object;
	func_5270(var_134_object);
	var_110_object->ShowMap(var_134_object);
}


void func_4575(float var_59_float)
{
	float var_61_float;
	@GetGameTime(var_61_float);
	var_61_float = var_59_float;
}


// @pe
void func_3555(object var_2_object, string var_831_string)
{
	bool var_832_bool;
	func_4646(var_832_bool);
	if(!var_832_bool) //@nz
		return 0;
	if(var_831_string == var_2_object)
		return 0;
	string var_835_string; bool var_836_bool;
	var_831_string = var_835_string;
	if(var_831_string == "")
		var_836_bool = false;
	else
		var_836_bool = true;
	func_4479(var_835_string, var_836_bool);
	var_2_object = var_831_string;
	
}


void func_4580(int var_125_int)
{
	float var_127_float;
	@GetGameTime(var_127_float);
	var_125_int = 1 + (var_127_float / 24);
}


// @pe
void func_5095(bool var_482_bool, object var_483_object)
{
	object var_485_object;
	var_483_object = var_485_object;
	bool var_484_bool;
	func_4556(var_484_bool, var_485_object, "burah_serum");
	if(var_484_bool != 0) {
		var_482_bool = true;
		return 0;
	}
	var_482_bool = false;
}


// @pe
void func_4589(bool var_403_bool, int var_404_int)
{
	int var_405_int;
	func_4580(var_405_int);
	var_403_bool = var_405_int == var_404_int;
}


void func_4334(bool var_70_bool, object var_71_object)
{
	int var_77_int; int var_78_int;
	@GetVariable("voice_common", var_77_int);
	if(var_77_int != 0) {
		bool var_81_bool; object var_82_object;
		var_71_object = var_82_object;
		func_4392(var_81_bool, var_82_object);
		if(!var_81_bool) { //@nz
			bool var_112_bool; object var_113_object;
			var_71_object = var_113_object;
			func_4429(var_112_bool, var_113_object);
			if(!var_112_bool) { //@nz
				var_70_bool = false;
				return 4;
			}
		}
		@irand(var_78_int, 2);
		if(var_78_int != 0)
			@SetVariable("voice_common", ((var_77_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_157_bool; object var_158_object;
		var_71_object = var_158_object;
		func_4429(var_157_bool, var_158_object);
		if(!var_157_bool) { //@nz
			bool var_160_bool; object var_161_object;
			var_71_object = var_161_object;
			func_4392(var_160_bool, var_161_object);
			if(!var_160_bool) { //@nz
				var_70_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4390;
	
Label_4390:
	var_70_bool = true;
	
}


// @pe
void func_4847(bool var_470_bool)
{
	int var_472_int;
	func_4523(var_472_int, "b7q01");
	if(var_472_int == 1000)
		var_470_bool = true;
	var_470_bool = false;
}


// @pe
void func_5106(bool var_508_bool)
{
	int var_510_int;
	func_4523(var_510_int, "b7q01");
	if(var_510_int == 8)
		var_508_bool = true;
	var_508_bool = false;
}


// @pe
void func_1011(object var_2_object, string var_232_string)
{
	bool var_233_bool;
	func_4646(var_233_bool);
	if(!var_233_bool) //@nz
		return 0;
	if(var_232_string == var_2_object)
		return 0;
	string var_236_string; bool var_237_bool;
	var_232_string = var_236_string;
	if(var_232_string == "")
		var_237_bool = false;
	else
		var_237_bool = true;
	func_4479(var_236_string, var_237_bool);
	var_2_object = var_232_string;
	
}


// @pe
void func_500(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_717_object, object var_718_object)
{
	var_0_object = var_718_object;
	var_1_object = var_717_object;
	var_3_string = false;
	if(1 != 0) {
		func_615(var_718_object, "Neutral");
		var_0_object->SetMessage(530357); //@t
		var_0_object->ClearReplies(); //@t
		bool var_733_bool = false;
		bool var_734_bool = false;
		bool var_735_bool;
		func_5037(var_1_object);
		if(var_735_bool != 0) {
			bool var_741_bool;
			func_5025(var_1_object);
			if(!var_741_bool) //@nz
				var_734_bool = true;
		}
		if(var_734_bool != 0) {
			bool var_748_bool;
			func_5049(var_1_object);
			if(var_748_bool != 0)
				var_733_bool = true;
		}
		if(var_733_bool != 0)
			var_0_object->AddReply(530358, 32319, 31732); //@t
		bool var_757_bool = false;
		bool var_758_bool = false;
		bool var_759_bool;
		func_5037(var_1_object);
		if(var_759_bool != 0) {
			bool var_761_bool;
			func_5025(var_1_object);
			if(var_761_bool != 0)
				var_758_bool = true;
		}
		if(var_758_bool != 0) {
			bool var_763_bool;
			func_5061(var_1_object);
			if(var_763_bool != 0)
				var_757_bool = true;
		}
		if(var_757_bool != 0)
			var_0_object->AddReply(530361, 31736, 31735); //@t
		var_0_object->AddReply(530916, -1, 32243); //@t
		var_0_object->AddReply(530917, -1, 32244); //@t
		goto Label_585;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1f8";
	}
Label_585:
	bool var_778_bool;
	func_4646(var_778_bool);
	if(var_778_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4472(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_614;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_614:
		return 0;

	}
	
}


void func_4595(bool var_274_bool, int var_275_int)
{
	float var_279_float;
	@GetGameTime(var_279_float);
	if((1 + (var_279_float / 24)) != var_275_int)
		var_274_bool = false;
	int var_286_int;
	var_279_float = var_286_int;
	int var_281_int = var_286_int % 24;
	var_274_bool = var_281_int < 7;
}


// @pe
void func_4859(bool var_476_bool)
{
	int var_478_int;
	func_4523(var_478_int, "oob7Aglaja1");
	if(var_478_int == 0) {
		var_476_bool = true;
		return 0;
	}
	var_476_bool = false;
}


void func_5118(bool var_528_bool, object var_529_object)
{
	float var_531_float;
	var_529_object->GetProperty("disease", var_531_float);
	var_528_bool = var_531_float == 0;
}


