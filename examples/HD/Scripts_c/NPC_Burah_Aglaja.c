// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4501();
			if(var_37_cvector == 22226) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_4656();
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_4649();
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_4798();
				object var_109_object = var_1_object;
				func_4832(var_0_object);
			}
			if(var_37_cvector == 22533) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_4689();
			}
			if(var_37_cvector == 22241) {
				object var_181_object; object var_182_object;
				var_181_object = var_1_object;
				var_182_object = var_0_object;
				func_4679();
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				func_4815();
				object var_204_object = var_1_object;
				func_4832(var_0_object);
			}
			if(var_37_cvector == 32055) {
				object var_208_object; object var_209_object;
				var_208_object = var_1_object;
				var_209_object = var_0_object;
				func_4679();
				object var_210_object; object var_211_object;
				var_210_object = var_1_object;
				var_211_object = var_0_object;
				func_4815();
				object var_212_object = var_1_object;
				func_4832(var_0_object);
			}
			if(var_37_cvector == 22537) {
				object var_216_object; object var_217_object;
				var_216_object = var_1_object;
				var_217_object = var_0_object;
				func_4730();
			}
			if(var_37_cvector == 32066) {
				object var_231_object; object var_232_object;
				var_231_object = var_1_object;
				var_232_object = var_0_object;
				func_4730();
			}
			if(var_36_bool == 22225) {
				bool var_235_bool;
				func_5084(var_1_object);
				if(var_235_bool != 0) {
					func_299(var_37_cvector, "Threat");
					var_0_object->SetMessage(521012); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530692, 29681, 31984); //@t
					var_0_object->AddReply(528310, -1, 29680); //@t
					return 0;
				}
				bool var_265_bool = false;
				bool var_266_bool = false;
				bool var_267_bool;
				func_4848(var_1_object);
				if(var_267_bool != 0) {
					bool var_273_bool;
					func_4860(var_1_object);
					if(var_273_bool != 0)
						var_266_bool = true;
				}
				if(var_266_bool != 0) {
					bool var_279_bool;
					func_5096(var_279_bool, var_1_object);
					if(var_279_bool != 0)
						var_265_bool = true;
				}
				if(var_265_bool != 0) {
					object var_288_object; object var_289_object;
					var_288_object = var_1_object;
					var_289_object = var_0_object;
					func_4724();
					func_299(var_37_cvector, "Neutral");
					var_0_object->SetMessage(521347); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530713, 32015, 32014); //@t
					var_0_object->AddReply(530721, 32015, 32022); //@t
					return 0;
				}
				func_299(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521014); //@t
				var_0_object->ClearReplies(); //@t
				bool var_302_bool = false;
				bool var_303_bool;
				func_5096(var_303_bool, var_1_object);
				if(var_303_bool != 0) {
					bool var_305_bool;
					func_5107(var_1_object);
					if(var_305_bool != 0)
						var_302_bool = true;
				}
				if(var_302_bool != 0)
					var_0_object->AddReply(521043, 22240, 22239); //@t
				bool var_314_bool = true;
				bool var_315_bool = false;
				bool var_316_bool = false;
				bool var_317_bool;
				func_4872(var_1_object);
				if(var_317_bool != 0) {
					bool var_323_bool;
					func_5074(var_323_bool, var_1_object);
					if(var_323_bool != 0)
						var_316_bool = true;
				}
				if(var_316_bool != 0) {
					bool var_331_bool;
					func_4896(var_1_object);
					if(!var_331_bool) //@nz
						var_315_bool = true;
				}
				if(var_315_bool != 1) {
					bool var_338_bool = false;
					bool var_339_bool;
					func_4884(var_1_object);
					if(var_339_bool != 0) {
						bool var_345_bool;
						func_4896(var_1_object);
						if(!var_345_bool) //@nz
							var_338_bool = true;
					}
					if(var_338_bool != 1)
						var_314_bool = false;
				}
				if(var_314_bool != 0)
					var_0_object->AddReply(521348, 22536, 22535); //@t
				bool var_351_bool = false;
				bool var_352_bool;
				func_4872(var_1_object);
				if(var_352_bool != 0) {
					bool var_354_bool;
					func_5074(var_354_bool, var_1_object);
					if(!var_354_bool) //@nz
						var_351_bool = true;
				}
				if(var_351_bool != 0)
					var_0_object->AddReply(521360, 22548, 22547); //@t
				var_0_object->AddReply(521015, -1, 22228); //@t
				var_0_object->AddReply(528324, -1, 29694); //@t
				return 0;
			}
			if(var_36_bool == 22548) {
				func_299(var_37_cvector, "Threat");
				var_0_object->SetMessage(521361); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521362, 32067, 22549); //@t
				var_0_object->AddReply(530760, 32069, 32068); //@t
				return 0;
			}
			if(var_36_bool == 32067) {
				func_299(var_37_cvector, "Threat");
				var_0_object->SetMessage(530759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530762, 32069, 32070); //@t
				var_0_object->AddReply(530763, 32069, 32071); //@t
				return 0;
			}
			if(var_36_bool == 32069) {
				func_299(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530764, -1, 32074); //@t
				var_0_object->AddReply(530765, -1, 32075); //@t
				return 0;
			}
			if(var_36_bool == 22536) {
				func_299(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521349); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530749, 32057, 32056); //@t
				return 0;
			}
			if(var_36_bool == 32057) {
				func_299(var_37_cvector, "Isee");
				var_0_object->SetMessage(530750); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530751, 32062, 32058); //@t
				var_0_object->AddReply(530752, 32060, 32059); //@t
				return 0;
			}
			if(var_36_bool == 32062) {
				func_299(var_37_cvector, "Isee");
				var_0_object->SetMessage(530754); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530755, 32060, 32063); //@t
				var_0_object->AddReply(530756, 32065, 32064); //@t
				return 0;
			}
			if(var_36_bool == 32065) {
				func_299(var_37_cvector, "Threat");
				var_0_object->SetMessage(530757); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530758, -1, 32066); //@t
				return 0;
			}
			if(var_36_bool == 32060) {
				func_299(var_37_cvector, "Threat");
				var_0_object->SetMessage(530753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521350, -1, 22537); //@t
				return 0;
			}
			if(var_36_bool == 22240) {
				func_299(var_37_cvector, "Isee");
				var_0_object->SetMessage(521044); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530731, 32036, 32035); //@t
				return 0;
			}
			if(var_36_bool == 32036) {
				func_299(var_37_cvector, "Isee");
				var_0_object->SetMessage(530732); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530733, 32038, 32037); //@t
				var_0_object->AddReply(530741, 32046, 32045); //@t
				return 0;
			}
			if(var_36_bool == 32046) {
				func_299(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530742); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530743, 32048, 32047); //@t
				var_0_object->AddReply(530745, 32048, 32049); //@t
				return 0;
			}
			if(var_36_bool == 32048) {
				func_299(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530744); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530746, 32038, 32051); //@t
				var_0_object->AddReply(530747, 32038, 32052); //@t
				return 0;
			}
			if(var_36_bool == 32038) {
				func_299(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530734); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530735, 32041, 32039); //@t
				return 0;
			}
			if(var_36_bool == 32041) {
				func_299(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530737); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530738, 32043, 32042); //@t
				return 0;
			}
			if(var_36_bool == 32043) {
				func_299(var_37_cvector, "Isee");
				var_0_object->SetMessage(530739); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530740, 32040, 32044); //@t
				return 0;
			}
			if(var_36_bool == 32040) {
				func_299(var_37_cvector, "Isee");
				var_0_object->SetMessage(530736); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521045, -1, 22241); //@t
				var_0_object->AddReply(530748, -1, 32055); //@t
				return 0;
			}
			if(var_36_bool == 32015) {
				func_299(var_37_cvector, "Isee");
				var_0_object->SetMessage(530714); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530722, 32024, 32023); //@t
				var_0_object->AddReply(530715, 32017, 32016); //@t
				return 0;
			}
			if(var_36_bool == 32024) {
				func_299(var_37_cvector, "Isee");
				var_0_object->SetMessage(530723); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530724, 32026, 32025); //@t
				return 0;
			}
			if(var_36_bool == 32026) {
				func_299(var_37_cvector, "Threat");
				var_0_object->SetMessage(530725); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530726, 32029, 32027); //@t
				return 0;
			}
			if(var_36_bool == 32029) {
				func_299(var_37_cvector, "Threat");
				var_0_object->SetMessage(530728); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530729, 32017, 32030); //@t
				var_0_object->AddReply(530730, -1, 32031); //@t
				return 0;
			}
			if(var_36_bool == 32017) {
				func_299(var_37_cvector, "Threat");
				var_0_object->SetMessage(530716); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530717, 32019, 32018); //@t
				return 0;
			}
			if(var_36_bool == 32019) {
				func_299(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530718); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521346, -1, 22533); //@t
				return 0;
			}
			if(var_36_bool == 29681) {
				func_299(var_37_cvector, "Threat");
				var_0_object->SetMessage(528311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528312, 29683, 29682); //@t
				var_0_object->AddReply(530693, 29683, 31985); //@t
				return 0;
			}
			if(var_36_bool == 29683) {
				func_299(var_37_cvector, "Isee");
				var_0_object->SetMessage(528313); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528314, 29685, 29684); //@t
				var_0_object->AddReply(530694, 29685, 31986); //@t
				return 0;
			}
			if(var_36_bool == 29685) {
				func_299(var_37_cvector, "Isee");
				var_0_object->SetMessage(528315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528316, 29687, 29686); //@t
				var_0_object->AddReply(530695, 29687, 31988); //@t
				return 0;
			}
			if(var_36_bool == 29687) {
				func_299(var_37_cvector, "Isee");
				var_0_object->SetMessage(528317); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528318, 29689, 29688); //@t
				var_0_object->AddReply(530696, 31991, 31990); //@t
				return 0;
			}
			if(var_36_bool == 31991) {
				func_299(var_37_cvector, "Threat");
				var_0_object->SetMessage(530697); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530698, 29689, 31992); //@t
				return 0;
			}
			if(var_36_bool == 29689) {
				func_299(var_37_cvector, "Threat");
				var_0_object->SetMessage(528319); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528320, 29691, 29690); //@t
				var_0_object->AddReply(530699, 29691, 31995); //@t
				return 0;
			}
			if(var_36_bool == 29691) {
				func_299(var_37_cvector, "Threat");
				var_0_object->SetMessage(528321); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528322, 29693, 29692); //@t
				var_0_object->AddReply(530704, 29693, 32001); //@t
				return 0;
			}
			if(var_36_bool == 29693) {
				func_299(var_37_cvector, "Confusion");
				var_0_object->SetMessage(528323); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530700, 31998, 31997); //@t
				var_0_object->AddReply(530705, 31998, 32003); //@t
				return 0;
			}
			if(var_36_bool == 31998) {
				func_299(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530701); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530702, 32000, 31999); //@t
				var_0_object->AddReply(530710, 32000, 32008); //@t
				return 0;
			}
			if(var_36_bool == 32000) {
				func_299(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530706, 32005, 32004); //@t
				var_0_object->AddReply(530711, 32005, 32010); //@t
				return 0;
			}
			if(var_36_bool == 32005) {
				func_299(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530707); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530708, 32007, 32006); //@t
				var_0_object->AddReply(530712, 32007, 32011); //@t
				return 0;
			}
			if(var_36_bool == 32007) {
				func_299(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530709); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521013, -1, 22226); //@t
				return 0;
			}
			var_3_string = true;
			bool var_667_bool;
			func_4647(var_667_bool);
			if(var_667_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x142";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4501();
			if(var_37_cvector == 22552) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_4740();
			}
			if(var_37_cvector == 22557) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_4740();
			}
			if(var_37_cvector == 22616) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_4758();
			}
			if(var_37_cvector == 22671) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_4768();
			}
			if(var_36_bool == 22551) {
				bool var_107_bool;
				func_4908(var_1_object);
				if(var_107_bool != 0) {
					object var_115_object; object var_116_object;
					var_115_object = var_1_object;
					var_116_object = var_0_object;
					func_4752();
					func_1531(var_37_cvector, "Threat");
					var_0_object->SetMessage(521373); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530766, 32077, 32076); //@t
					var_0_object->AddReply(530781, 32077, 32091); //@t
					return 0;
				}
				func_1531(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521376); //@t
				var_0_object->ClearReplies(); //@t
				bool var_145_bool;
				func_4920(var_1_object);
				if(var_145_bool != 0)
					var_0_object->AddReply(521377, 22556, 22555); //@t
				bool var_154_bool;
				func_4932(var_1_object);
				if(var_154_bool != 0)
					var_0_object->AddReply(521436, 22615, 22614); //@t
				bool var_163_bool = false;
				bool var_164_bool;
				func_4944(var_1_object);
				if(var_164_bool != 0) {
					bool var_180_bool;
					func_4978(var_1_object);
					if(var_180_bool != 0)
						var_163_bool = true;
				}
				if(var_163_bool != 0)
					var_0_object->AddReply(521510, 22672, 22671); //@t
				var_0_object->AddReply(521380, -1, 22558); //@t
				var_0_object->AddReply(530775, -1, 32085); //@t
				return 0;
			}
			if(var_36_bool == 22672) {
				func_1531(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(521511); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521512, 32155, 22673); //@t
				var_0_object->AddReply(530845, 32157, 32159); //@t
				return 0;
			}
			if(var_36_bool == 32155) {
				func_1531(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(530841); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530842, 32157, 32156); //@t
				var_0_object->AddReply(530846, 32166, 32161); //@t
				return 0;
			}
			if(var_36_bool == 32157) {
				func_1531(var_37_cvector, "Threat");
				var_0_object->SetMessage(530843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530844, 32163, 32158); //@t
				var_0_object->AddReply(530847, 32166, 32162); //@t
				return 0;
			}
			if(var_36_bool == 32163) {
				func_1531(var_37_cvector, "Threat");
				var_0_object->SetMessage(530848); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530849, 32166, 32164); //@t
				var_0_object->AddReply(530850, 32166, 32165); //@t
				return 0;
			}
			if(var_36_bool == 32166) {
				func_1531(var_37_cvector, "Threat");
				var_0_object->SetMessage(530851); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530852, -1, 32170); //@t
				var_0_object->AddReply(530853, -1, 32171); //@t
				return 0;
			}
			if(var_36_bool == 22615) {
				func_1531(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(521437); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530824, 32136, 32135); //@t
				return 0;
			}
			if(var_36_bool == 32136) {
				func_1531(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(530825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530826, 32141, 32137); //@t
				return 0;
			}
			if(var_36_bool == 32141) {
				func_1531(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530830); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530831, 32143, 32142); //@t
				var_0_object->AddReply(530834, 32150, 32145); //@t
				return 0;
			}
			if(var_36_bool == 32150) {
				func_1531(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530838); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530839, 32143, 32151); //@t
				return 0;
			}
			if(var_36_bool == 32143) {
				func_1531(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530832); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530833, 32138, 32144); //@t
				return 0;
			}
			if(var_36_bool == 32138) {
				func_1531(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530827); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530828, 32140, 32139); //@t
				var_0_object->AddReply(530840, 32140, 32153); //@t
				return 0;
			}
			if(var_36_bool == 32140) {
				func_1531(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530829); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521438, -1, 22616); //@t
				return 0;
			}
			if(var_36_bool == 22556) {
				func_1531(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521378); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530790, 32104, 32103); //@t
				return 0;
			}
			if(var_36_bool == 32104) {
				func_1531(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530791); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530792, 32106, 32105); //@t
				return 0;
			}
			if(var_36_bool == 32106) {
				func_1531(var_37_cvector, "Isee");
				var_0_object->SetMessage(530793); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530794, 32108, 32107); //@t
				return 0;
			}
			if(var_36_bool == 32108) {
				func_1531(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530795); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521379, -1, 22557); //@t
				return 0;
			}
			if(var_36_bool == 32077) {
				func_1531(var_37_cvector, "Threat");
				var_0_object->SetMessage(530767); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530768, 32079, 32078); //@t
				var_0_object->AddReply(530787, 32100, 32099); //@t
				return 0;
			}
			if(var_36_bool == 32100) {
				func_1531(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530788); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530789, 32079, 32101); //@t
				return 0;
			}
			if(var_36_bool == 32079) {
				func_1531(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530769); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530770, 32081, 32080); //@t
				return 0;
			}
			if(var_36_bool == 32081) {
				func_1531(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530771); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530772, 32083, 32082); //@t
				return 0;
			}
			if(var_36_bool == 32083) {
				func_1531(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530774, 32086, 32084); //@t
				var_0_object->AddReply(530782, 32086, 32093); //@t
				return 0;
			}
			if(var_36_bool == 32086) {
				func_1531(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530776); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530777, 32088, 32087); //@t
				return 0;
			}
			if(var_36_bool == 32088) {
				func_1531(var_37_cvector, "Isee");
				var_0_object->SetMessage(530778); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530779, 32090, 32089); //@t
				return 0;
			}
			if(var_36_bool == 32090) {
				func_1531(var_37_cvector, "Isee");
				var_0_object->SetMessage(530780); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530783, 32096, 32095); //@t
				return 0;
			}
			if(var_36_bool == 32096) {
				func_1531(var_37_cvector, "Isee");
				var_0_object->SetMessage(530784); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530796, 32110, 32109); //@t
				var_0_object->AddReply(521375, 32113, 22553); //@t
				return 0;
			}
			if(var_36_bool == 32113) {
				func_1531(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530800); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530801, -1, 32114); //@t
				var_0_object->AddReply(530802, -1, 32115); //@t
				return 0;
			}
			if(var_36_bool == 32110) {
				func_1531(var_37_cvector, "Threat");
				var_0_object->SetMessage(530797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530798, 32112, 32111); //@t
				return 0;
			}
			if(var_36_bool == 32112) {
				func_1531(var_37_cvector, "Threat");
				var_0_object->SetMessage(530799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521374, -1, 22552); //@t
				return 0;
			}
			var_3_string = true;
			bool var_424_bool;
			func_4647(var_424_bool);
			if(var_424_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x612";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4501();
			if(var_37_cvector == 24419) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_4780();
			}
			if(var_36_bool == 23236) {
				bool var_48_bool;
				func_5002(var_1_object);
				if(var_48_bool != 0) {
					object var_56_object; object var_57_object;
					var_56_object = var_1_object;
					var_57_object = var_0_object;
					func_4774();
					func_2434(var_37_cvector, "Neutral");
					var_0_object->SetMessage(522067); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523208, 24405, 24404); //@t
					var_0_object->AddReply(523226, 24424, 24423); //@t
					var_0_object->AddReply(523222, -1, 24418); //@t
					return 0;
				}
				func_2434(var_37_cvector, "Neutral");
				var_0_object->SetMessage(522071); //@t
				var_0_object->ClearReplies(); //@t
				bool var_89_bool;
				func_5014(var_1_object);
				if(var_89_bool != 0)
					var_0_object->AddReply(523223, 24425, 24419); //@t
				var_0_object->AddReply(522072, -1, 23241); //@t
				return 0;
			}
			if(var_36_bool == 24425) {
				func_2434(var_37_cvector, "Confusion");
				var_0_object->SetMessage(523228); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523229, 24428, 24426); //@t
				return 0;
			}
			if(var_36_bool == 24428) {
				func_2434(var_37_cvector, "Confusion");
				var_0_object->SetMessage(523231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523232, -1, 24429); //@t
				return 0;
			}
			if(var_36_bool == 24424) {
				func_2434(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(523227); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523235, 24411, 24433); //@t
				var_0_object->AddReply(523236, -1, 24434); //@t
				return 0;
			}
			if(var_36_bool == 24405) {
				func_2434(var_37_cvector, "Confusion");
				var_0_object->SetMessage(523209); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523210, 24409, 24406); //@t
				var_0_object->AddReply(523214, 24411, 24410); //@t
				return 0;
			}
			if(var_36_bool == 24411) {
				func_2434(var_37_cvector, "Threat");
				var_0_object->SetMessage(523215); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523216, 24413, 24412); //@t
				var_0_object->AddReply(523237, 24437, 24436); //@t
				return 0;
			}
			if(var_36_bool == 24437) {
				func_2434(var_37_cvector, "Confusion");
				var_0_object->SetMessage(523238); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523239, 24439, 24438); //@t
				return 0;
			}
			if(var_36_bool == 24439) {
				func_2434(var_37_cvector, "Isee");
				var_0_object->SetMessage(523240); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523241, 24417, 24440); //@t
				return 0;
			}
			if(var_36_bool == 24413) {
				func_2434(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(523217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523218, 24415, 24414); //@t
				return 0;
			}
			if(var_36_bool == 24415) {
				func_2434(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(523219); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522068, 23238, 23237); //@t
				return 0;
			}
			if(var_36_bool == 23238) {
				func_2434(var_37_cvector, "Confusion");
				var_0_object->SetMessage(522069); //@t
				var_0_object->ClearReplies(); //@t
				bool var_177_bool;
				func_4990(var_1_object);
				if(var_177_bool != 0)
					var_0_object->AddReply(522073, 23243, 23242); //@t
				bool var_186_bool;
				func_4990(var_1_object);
				if(!var_186_bool) //@nz
					var_0_object->AddReply(522070, -1, 23239); //@t
				return 0;
			}
			if(var_36_bool == 23243) {
				func_2434(var_37_cvector, "Threat");
				var_0_object->SetMessage(522074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522075, 24408, 23244); //@t
				var_0_object->AddReply(523211, -1, 24407); //@t
				return 0;
			}
			if(var_36_bool == 24408) {
				func_2434(var_37_cvector, "Confusion");
				var_0_object->SetMessage(523212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523234, -1, 24432); //@t
				return 0;
			}
			if(var_36_bool == 24409) {
				func_2434(var_37_cvector, "Confusion");
				var_0_object->SetMessage(523213); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523220, 24417, 24416); //@t
				return 0;
			}
			if(var_36_bool == 24417) {
				func_2434(var_37_cvector, "Threat");
				var_0_object->SetMessage(523221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523233, 23238, 24430); //@t
				return 0;
			}
			var_3_string = true;
			bool var_223_bool;
			func_4647(var_223_bool);
			if(var_223_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x999";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4501();
			if(var_36_bool == 31305) {
				func_2973(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529922); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529923, -1, 31306); //@t
				var_0_object->AddReply(529924, -1, 31307); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_4647(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbb4";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4501();
			if(var_36_bool == 31325) {
				func_3176(var_37_cvector, "Confusion");
				var_0_object->SetMessage(529942); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529943, -1, 31326); //@t
				var_0_object->AddReply(529944, -1, 31327); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_4647(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc7f";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4501();
			if(var_37_cvector == 31732) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_4786();
			}
			if(var_37_cvector == 31735) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_4792();
			}
			if(var_36_bool == 31731) {
				func_3436(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530357); //@t
				var_0_object->ClearReplies(); //@t
				bool var_72_bool = false;
				bool var_73_bool = false;
				bool var_74_bool;
				func_5038(var_1_object);
				if(var_74_bool != 0) {
					bool var_82_bool;
					func_5026(var_1_object);
					if(!var_82_bool) //@nz
						var_73_bool = true;
				}
				if(var_73_bool != 0) {
					bool var_89_bool;
					func_5050(var_1_object);
					if(var_89_bool != 0)
						var_72_bool = true;
				}
				if(var_72_bool != 0)
					var_0_object->AddReply(530358, 32319, 31732); //@t
				bool var_98_bool = false;
				bool var_99_bool = false;
				bool var_100_bool;
				func_5038(var_1_object);
				if(var_100_bool != 0) {
					bool var_102_bool;
					func_5026(var_1_object);
					if(var_102_bool != 0)
						var_99_bool = true;
				}
				if(var_99_bool != 0) {
					bool var_104_bool;
					func_5062(var_1_object);
					if(var_104_bool != 0)
						var_98_bool = true;
				}
				if(var_98_bool != 0)
					var_0_object->AddReply(530361, 31736, 31735); //@t
				var_0_object->AddReply(530916, -1, 32243); //@t
				var_0_object->AddReply(530917, -1, 32244); //@t
				return 0;
			}
			if(var_36_bool == 31736) {
				func_3436(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530362); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530363, 32326, 31737); //@t
				var_0_object->AddReply(530998, -1, 32325); //@t
				return 0;
			}
			if(var_36_bool == 32326) {
				func_3436(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530999); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531000, 32329, 32327); //@t
				var_0_object->AddReply(531001, -1, 32328); //@t
				return 0;
			}
			if(var_36_bool == 32329) {
				func_3436(var_37_cvector, "Threat");
				var_0_object->SetMessage(531002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531003, -1, 32330); //@t
				var_0_object->AddReply(531004, -1, 32331); //@t
				return 0;
			}
			if(var_36_bool == 32319) {
				func_3436(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530994); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530996, 31733, 32321); //@t
				var_0_object->AddReply(530997, 31733, 32323); //@t
				var_0_object->AddReply(530995, -1, 32320); //@t
				return 0;
			}
			if(var_36_bool == 31733) {
				func_3436(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530359); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530360, -1, 31734); //@t
				var_0_object->AddReply(530993, -1, 32318); //@t
				return 0;
			}
			var_3_string = true;
			bool var_172_bool;
			func_4647(var_172_bool);
			if(var_172_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd83";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_4501();
			if(var_36_int == 31972) {
				func_3832(var_37_cvector, "Threat");
				var_0_object->SetMessage(530682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530683, 31974, 31973); //@t
				var_0_object->AddReply(530688, 31974, 31978); //@t
				return 0;
			}
			if(var_36_int == 31974) {
				func_3832(var_37_cvector, "Threat");
				var_0_object->SetMessage(530684); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530685, 31976, 31975); //@t
				var_0_object->AddReply(530689, 31976, 31979); //@t
				return 0;
			}
			if(var_36_int == 31976) {
				func_3832(var_37_cvector, "Threat");
				var_0_object->SetMessage(530686); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530687, -1, 31977); //@t
				var_0_object->AddReply(530690, -1, 31980); //@t
				return 0;
			}
			var_3_string = true;
			bool var_86_bool;
			func_4647(var_86_bool);
			if(var_86_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf0f";
	
	}

}


maintask task_14
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_3946(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_4011();
			bool var_40_bool = false;
			bool var_41_bool;
			func_4225(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_3980(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_3960(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_4508(var_82_object);
					var_82_object = var_81_object;
					func_4375(var_80_bool, var_81_object);
				}
			} else {
				func_3975(var_36_int);
				func_4002();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_4193();
		func_4011();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		@StopGroup0();
		func_4011();
		func_4455("Neutral");
		func_4002();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_4002();
		else
			func_4455("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_4193();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_4216(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_5338(var_54_object);
			func_4455("Neutral");
			func_4011();
			func_4002();
		}
	}

}


void func_0(object var_0_object, int var_418_int, object var_419_object)
{
	var_0_object = var_419_object;
	bool var_429_bool; object var_430_object;
	var_419_object = var_430_object;
	func_4230(var_429_bool, var_430_object, 70.0);
	if(!var_429_bool) { //@nz
		var_418_int = -2;
		return 8;
	}
	object var_425_object;
	@CreateDialog(var_425_object);
	int var_433_int;
	func_4641(var_433_int);
	var_425_object->SetNPCName(var_433_int);
	int var_434_int;
	func_4639(var_434_int);
	var_425_object->SetNPCDescription(var_434_int);
	string var_435_string;
	func_4643(var_435_string);
	var_425_object->SetPhoto(var_435_string);
	string var_436_string;
	func_4645(var_436_string);
	var_425_object->SetPhoto2(var_436_string);
	int var_437_int;
	func_5321(var_437_int);
	var_425_object->SetPlayerName(var_437_int);
	bool var_426_bool;
	@IsOverrideActive(var_426_bool);
	if(var_426_bool != 0) {
		var_418_int = -2;
		return 8;
	}
	@DoDialog(var_425_object);
	bool var_439_bool; object var_440_object;
	object var_441_object;
	func_4508(var_441_object);
	var_441_object = var_440_object;
	func_4317(var_439_bool, var_440_object);
	object var_442_object; object var_443_object;
	var_419_object = var_442_object;
	var_425_object = var_443_object;
	TaskCall(1);
	func_81(var_444_object, var_445_object, var_446_string, var_447_bool, var_442_object, var_443_object);
	TaskReturn();
	bool var_428_bool;
	var_425_object->IsDialogEnd(var_428_bool);
	
	for(;;) {
		var_581_bool = !var_428_bool; //@nz
		if(var_581_bool == 0) goto Label_70;
		@sync();
		var_425_object->IsDialogEnd(var_428_bool);
	}
	
Label_70:
	object var_582_object;
	var_419_object = var_582_object;
	func_4299();
	@StopDialog(var_425_object);
	var_425_object->GetReturnValue(-1);
	int var_427_int = var_418_int;
}
EMIT "Stack[-4] = 0";


void func_5126(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 259, 1, 521031);
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	func_5243(var_67_bool, var_68_object, 253);
}
EMIT "Stack[-1] = 0";


void func_4615(string var_60_string, int var_61_int)
{
	string var_63_string = "idle";
	if(var_61_int != 0)
		var_63_string += var_61_int;
	var_63_string = var_60_string;
}


// @pe
void func_4872(bool var_532_bool)
{
	int var_534_int;
	func_4524(var_534_int, "b7q03");
	if(var_534_int == 2)
		var_532_bool = true;
	var_532_bool = false;
}


void func_4622(int var_54_int)
{
	int var_57_int; bool var_58_bool;
	var_57_int = 0;
	
	for(;;) {
		string var_60_string; int var_61_int;
		var_57_int = var_61_int;
		func_4615(var_60_string, var_61_int);
		@HasAnimation(var_58_bool, "all", var_60_string);
		if(!var_58_bool) //@nz
			break;
		var_57_int += 1;
	}
	var_57_int = var_54_int;
}


void func_2834(object var_0_object, int var_301_int, object var_302_object)
{
	var_0_object = var_302_object;
	bool var_312_bool; object var_313_object;
	var_302_object = var_313_object;
	func_4230(var_312_bool, var_313_object, 70.0);
	if(!var_312_bool) { //@nz
		var_301_int = -2;
		return 8;
	}
	object var_308_object;
	@CreateDialog(var_308_object);
	int var_316_int;
	func_4641(var_316_int);
	var_308_object->SetNPCName(var_316_int);
	int var_317_int;
	func_4639(var_317_int);
	var_308_object->SetNPCDescription(var_317_int);
	string var_318_string;
	func_4643(var_318_string);
	var_308_object->SetPhoto(var_318_string);
	string var_319_string;
	func_4645(var_319_string);
	var_308_object->SetPhoto2(var_319_string);
	int var_320_int;
	func_5321(var_320_int);
	var_308_object->SetPlayerName(var_320_int);
	bool var_309_bool;
	@IsOverrideActive(var_309_bool);
	if(var_309_bool != 0) {
		var_301_int = -2;
		return 8;
	}
	@DoDialog(var_308_object);
	bool var_322_bool; object var_323_object;
	object var_324_object;
	func_4508(var_324_object);
	var_324_object = var_323_object;
	func_4317(var_322_bool, var_323_object);
	object var_325_object; object var_326_object;
	var_302_object = var_325_object;
	var_308_object = var_326_object;
	TaskCall(7);
	func_2915(var_327_object, var_328_object, var_329_string, var_330_bool, var_325_object, var_326_object);
	TaskReturn();
	bool var_311_bool;
	var_308_object->IsDialogEnd(var_311_bool);
	
	for(;;) {
		var_355_bool = !var_311_bool; //@nz
		if(var_355_bool == 0) goto Label_2904;
		@sync();
		var_308_object->IsDialogEnd(var_311_bool);
	}
	
Label_2904:
	object var_356_object;
	var_302_object = var_356_object;
	func_4299();
	@StopDialog(var_308_object);
	var_308_object->GetReturnValue(-1);
	int var_310_int = var_301_int;
}
EMIT "Stack[-4] = 0";


void func_5139(void)
{
	object var_184_object;
	@CreateDiaryEntry(var_184_object, 261, 1, 521033);
	bool var_188_bool; object var_189_object;
	var_184_object = var_189_object;
	func_5243(var_188_bool, var_189_object, 253);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4884(bool var_554_bool)
{
	int var_556_int;
	func_4524(var_556_int, "b7q03SerumWorks");
	if(var_556_int != 0) {
		var_554_bool = true;
		return 0;
	}
	var_554_bool = false;
}


void func_4375(bool var_142_bool, object var_143_object)
{
	string var_149_string; bool var_151_bool; int var_152_int; string var_153_string;
	var_149_string = "c";
	int var_150_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_143_object->HasProperty((var_149_string + (var_150_int + 1)), var_151_bool);
			if(!var_151_bool) { //@nz
			} else {
				var_150_int += 1;
			}
		}
		if(!var_150_int) { //@nz
			var_142_bool = false;
			return 10;
		}
		var_152_int = 0;
		if(var_150_int > 1)
			@irand(var_152_int, var_150_int);
		var_143_object->GetProperty((var_149_string + (var_152_int + 1)), var_153_string);
		bool var_165_bool; string var_166_string;
		var_153_string = var_166_string;
		func_4486(var_165_bool, var_166_string);
		var_165_bool = var_142_bool;
		return 10;

	}
}


void func_4122(void)
{
	bool var_48_bool; int var_49_int; int var_50_int; bool var_51_bool;
	@WaitForAnimEnd();
	bool var_52_bool;
	func_4225(var_52_bool);
	if(!var_52_bool) //@nz
		return 12;
	int var_54_int;
	func_4622(var_54_int);
	int var_46_int;
	var_54_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_67_bool = false;
		if(var_47_int < 5) {
			bool var_70_bool;
			func_4225(var_70_bool);
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
			func_4615(var_81_string, var_82_int);
			@PlayAnimation("all", var_81_string);
			@WaitForAnimEnd(var_51_bool);
			var_83_bool = !var_51_bool; //@nz
			if(var_83_bool == 0) goto Label_4177;
			goto Label_4188;
			}
				Label_4177:
					bool var_74_bool;
					func_4191(var_74_bool);
					var_75_bool = !var_74_bool; //@nz
					if(var_75_bool == 0) goto Label_4183;
			}
		}
	Label_4188:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_4183:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


void func_4639(int var_119_int)
{
	var_119_int = 515527;
}


void func_5152(void)
{
	object var_150_object;
	@CreateDiaryEntry(var_150_object, 280, 2, 521363);
	bool var_154_bool; object var_155_object;
	var_150_object = var_155_object;
	func_5243(var_154_bool, var_155_object, -1);
}
EMIT "Stack[-1] = 0";


void func_4641(int var_118_int)
{
	var_118_int = 513334;
}


// @pe
void func_4896(bool var_546_bool)
{
	int var_548_int;
	func_4524(var_548_int, "b7q03");
	if(var_548_int == 1000)
		var_546_bool = true;
	var_546_bool = false;
}


void func_4643(string var_120_string)
{
	var_120_string = "ui/NPC_Aglaja.png";
}


// @pe
void func_2336(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_826_object, object var_827_object)
{
	var_0_object = var_827_object;
	var_1_object = var_826_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_833_bool;
		func_5002(var_1_object);
		if(var_833_bool != 0) {
			object var_839_object; object var_840_object;
			var_839_object = var_1_object;
			var_840_object = var_0_object;
			func_4774();
			func_2434(var_827_object, "Neutral");
			var_0_object->SetMessage(522067); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(523208, 24405, 24404); //@t
			var_0_object->AddReply(523226, 24424, 24423); //@t
			var_0_object->AddReply(523222, -1, 24418); //@t
		} else {
					func_2434(var_827_object, "Neutral");
					var_0_object->SetMessage(522071); //@t
					var_0_object->ClearReplies(); //@t
					bool var_871_bool;
					func_5014(var_1_object);
					if(var_871_bool != 0)
						var_0_object->AddReply(523223, 24425, 24419); //@t
					var_0_object->AddReply(522072, -1, 23241); //@t
		}
	}
	for(;;) {
		bool var_861_bool;
		func_4647(var_861_bool);
		if(var_861_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4455(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2433;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2433:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x924";


void func_4645(string var_121_string)
{
	var_121_string = "ui/NPC_Aglaja_b.png";
}


void func_4647(bool var_113_bool)
{
	var_113_bool = true;
}


// @pe
void func_4649(void)
{
	func_4540("boiny@door1", false);
}


// @pe
void func_299(object var_2_object, string var_457_string)
{
	bool var_458_bool;
	func_4647(var_458_bool);
	if(!var_458_bool) //@nz
		return 0;
	if(var_457_string == var_2_object)
		return 0;
	string var_461_string; bool var_462_bool;
	var_457_string = var_461_string;
	if(var_457_string == "")
		var_462_bool = false;
	else
		var_462_bool = true;
	func_4471(var_461_string, var_462_bool);
	var_2_object = var_457_string;
	
}


// @pe
void func_4908(bool var_616_bool)
{
	int var_618_int;
	func_4524(var_618_int, "oob8Aglaja1");
	if(var_618_int == 0) {
		var_616_bool = true;
		return 0;
	}
	var_616_bool = false;
}


void func_5165(void)
{
	object var_158_object;
	@CreateDiaryEntry(var_158_object, 281, 2, 521364);
	bool var_162_bool; object var_163_object;
	var_158_object = var_163_object;
	func_5243(var_162_bool, var_163_object, 280);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3118(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_383_object, object var_384_object)
{
	var_0_object = var_384_object;
	var_1_object = var_383_object;
	var_3_string = false;
	if(1 != 0) {
		func_3176(var_384_object, "Confusion");
		var_0_object->SetMessage(529942); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529943, -1, 31326); //@t
		var_0_object->AddReply(529944, -1, 31327); //@t
		goto Label_3146;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc32";
	}
Label_3146:
	bool var_405_bool;
	func_4647(var_405_bool);
	if(var_405_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4455(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3175;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3175:
		return 0;

	}
	
}


void func_1323(object var_0_object, int var_585_int, object var_586_object)
{
	var_0_object = var_586_object;
	bool var_596_bool; object var_597_object;
	var_586_object = var_597_object;
	func_4230(var_596_bool, var_597_object, 70.0);
	if(!var_596_bool) { //@nz
		var_585_int = -2;
		return 8;
	}
	object var_592_object;
	@CreateDialog(var_592_object);
	int var_600_int;
	func_4641(var_600_int);
	var_592_object->SetNPCName(var_600_int);
	int var_601_int;
	func_4639(var_601_int);
	var_592_object->SetNPCDescription(var_601_int);
	string var_602_string;
	func_4643(var_602_string);
	var_592_object->SetPhoto(var_602_string);
	string var_603_string;
	func_4645(var_603_string);
	var_592_object->SetPhoto2(var_603_string);
	int var_604_int;
	func_5321(var_604_int);
	var_592_object->SetPlayerName(var_604_int);
	bool var_593_bool;
	@IsOverrideActive(var_593_bool);
	if(var_593_bool != 0) {
		var_585_int = -2;
		return 8;
	}
	@DoDialog(var_592_object);
	bool var_606_bool; object var_607_object;
	object var_608_object;
	func_4508(var_608_object);
	var_608_object = var_607_object;
	func_4317(var_606_bool, var_607_object);
	object var_609_object; object var_610_object;
	var_586_object = var_609_object;
	var_592_object = var_610_object;
	TaskCall(3);
	func_1404(var_611_object, var_612_object, var_613_string, var_614_bool, var_609_object, var_610_object);
	TaskReturn();
	bool var_595_bool;
	var_592_object->IsDialogEnd(var_595_bool);
	
	for(;;) {
		var_701_bool = !var_595_bool; //@nz
		if(var_701_bool == 0) goto Label_1393;
		@sync();
		var_592_object->IsDialogEnd(var_595_bool);
	}
	
Label_1393:
	object var_702_object;
	var_586_object = var_702_object;
	func_4299();
	@StopDialog(var_592_object);
	var_592_object->GetReturnValue(-1);
	int var_594_int = var_585_int;
}
EMIT "Stack[-4] = 0";


void func_4656(void)
{
	@SetVariable("b7q01", 7);
	object var_48_object;
	func_5271(var_48_object);
	object var_45_object;
	var_48_object = var_45_object;
	float var_59_float;
	func_4576(var_59_float);
	var_45_object->AddMark("b7q01AglajaGotoStarshina", "pt_map_starshina", 1, 521027, var_59_float);
	func_5126();
}
EMIT "Stack[-1] = 0";


// @pe
void func_4920(bool var_651_bool)
{
	int var_653_int;
	func_4524(var_653_int, "b8q01");
	if(var_653_int == 0) {
		var_651_bool = true;
		return 0;
	}
	var_651_bool = false;
}


void func_5178(void)
{
	object var_219_object;
	@CreateDiaryEntry(var_219_object, 283, 2, 521366);
	bool var_223_bool; object var_224_object;
	var_219_object = var_224_object;
	func_5243(var_223_bool, var_224_object, 280);
}
EMIT "Stack[-1] = 0";


void func_4412(bool var_173_bool, object var_174_object)
{
	bool var_182_bool; int var_183_int; string var_184_string;
	int var_186_int;
	func_4581(var_186_int);
	string var_180_string = ("d" + var_186_int) + "m";
	int var_181_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_174_object->HasProperty((var_180_string + (var_181_int + 1)), var_182_bool);
			if(!var_182_bool) { //@nz
			} else {
				var_181_int += 1;
			}
		}
		if(!var_181_int) { //@nz
			var_173_bool = false;
			return 10;
		}
		var_183_int = 0;
		if(var_181_int > 1)
			@irand(var_183_int, var_181_int);
		var_174_object->GetProperty((var_180_string + (var_183_int + 1)), var_184_string);
		bool var_205_bool; string var_206_string;
		var_184_string = var_206_string;
		func_4486(var_205_bool, var_206_string);
		var_205_bool = var_173_bool;
		return 10;

	}
}


// @pe
void func_4932(bool var_660_bool)
{
	int var_662_int;
	func_4524(var_662_int, "b8q01");
	if(var_662_int == 7)
		var_660_bool = true;
	var_660_bool = false;
}


// @pe
void func_4679(void)
{
	func_5139();
	bool var_191_bool;
	func_4564(var_191_bool, "quest_b7_01", "completed");
}


void func_5191(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 284, 1, 521455);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_5243(var_51_bool, var_52_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4944(bool var_670_bool)
{
	bool var_672_bool = false;
	bool var_673_bool = false;
	int var_674_int;
	func_4524(var_674_int, "b8q03");
	if(var_674_int != 0) {
		int var_678_int;
		func_4524(var_678_int, "b8q03");
		if(var_678_int != 1000)
			var_673_bool = true;
	}
	if(var_673_bool != 0) {
		int var_682_int;
		func_4524(var_682_int, "b8q03");
		if(var_682_int != -1)
			var_672_bool = true;
	}
	if(var_672_bool != 0) {
		var_670_bool = true;
		return 0;
	}
	var_670_bool = false;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_442_object, object var_443_object)
{
	var_0_object = var_443_object;
	var_1_object = var_442_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_449_bool;
		func_5084(var_1_object);
		if(var_449_bool != 0) {
			func_299(var_443_object, "Threat");
			var_0_object->SetMessage(521012); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530692, 29681, 31984); //@t
			var_0_object->AddReply(528310, -1, 29680); //@t
		} else {
					bool var_480_bool = false;
					bool var_481_bool = false;
					bool var_482_bool;
					func_4848(var_1_object);
					if(var_482_bool != 0) {
						bool var_488_bool;
						func_4860(var_1_object);
						if(var_488_bool != 0)
							var_481_bool = true;
					}
					if(var_481_bool != 0) {
						bool var_494_bool;
						func_5096(var_494_bool, var_1_object);
						if(var_494_bool != 0)
							var_480_bool = true;
					}
					if(var_480_bool == 0) goto Label_160;
					object var_503_object; object var_504_object;
					var_503_object = var_1_object;
					var_504_object = var_0_object;
					func_4724();
					func_299(var_443_object, "Neutral");
					var_0_object->SetMessage(521347); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530713, 32015, 32014); //@t
					var_0_object->AddReply(530721, 32015, 32022); //@t
		}
	}
Label_269:
	for(;;) {
		bool var_472_bool;
		func_4647(var_472_bool);
		if(var_472_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4455(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_298;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_298:
			return 0;

		}

	}
	
Label_160:
	func_299(var_443_object, "Neutral");
	var_0_object->SetMessage(521014); //@t
	var_0_object->ClearReplies(); //@t
	bool var_517_bool = false;
	bool var_518_bool;
	func_5096(var_518_bool, var_1_object);
	if(var_518_bool != 0) {
		bool var_520_bool;
		func_5107(var_1_object);
		if(var_520_bool != 0)
			var_517_bool = true;
	}
	if(var_517_bool != 0)
		var_0_object->AddReply(521043, 22240, 22239); //@t
	bool var_529_bool = true;
	bool var_530_bool = false;
	bool var_531_bool = false;
	bool var_532_bool;
	func_4872(var_1_object);
	if(var_532_bool != 0) {
		bool var_538_bool;
		func_5074(var_538_bool, var_1_object);
		if(var_538_bool != 0)
			var_531_bool = true;
	}
	if(var_531_bool != 0) {
		bool var_546_bool;
		func_4896(var_1_object);
		if(!var_546_bool) //@nz
			var_530_bool = true;
	}
	if(var_530_bool != 1) {
		bool var_553_bool = false;
		bool var_554_bool;
		func_4884(var_1_object);
		if(var_554_bool != 0) {
			bool var_560_bool;
			func_4896(var_1_object);
			if(!var_560_bool) //@nz
				var_553_bool = true;
		}
		if(var_553_bool != 1)
			var_529_bool = false;
	}
	if(var_529_bool != 0)
		var_0_object->AddReply(521348, 22536, 22535); //@t
	bool var_566_bool = false;
	bool var_567_bool;
	func_4872(var_1_object);
	if(var_567_bool != 0) {
		bool var_569_bool;
		func_5074(var_569_bool, var_1_object);
		if(!var_569_bool) //@nz
			var_566_bool = true;
	}
	if(var_566_bool != 0)
		var_0_object->AddReply(521360, 22548, 22547); //@t
	var_0_object->AddReply(521015, -1, 22228); //@t
	var_0_object->AddReply(528324, -1, 29694); //@t
	goto Label_269;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_4689(void)
{
	@SetVariable("b7q03", 1);
	object var_143_object;
	func_5271(var_143_object);
	object var_140_object;
	var_143_object = var_140_object;
	float var_148_float;
	func_4576(var_148_float);
	var_140_object->AddMark("b7q03AglajaGotoTheater", "pt_map_theater", 0, 521367, var_148_float);
	func_5152();
	func_5165();
	object var_165_object;
	func_4529(var_165_object, "quest_b7_03");
	bool var_173_bool;
	func_4564(var_173_bool, "quest_b7_03", "place_birdmask");
}
EMIT "Stack[-1] = 0";


void func_5204(void)
{
	object var_70_object;
	@CreateDiaryEntry(var_70_object, 285, 1, 521456);
	bool var_74_bool; object var_75_object;
	var_70_object = var_75_object;
	func_5243(var_74_bool, var_75_object, 284);
}
EMIT "Stack[-1] = 0";


void func_4191(bool var_74_bool)
{
	var_74_bool = true;
}


void func_4193(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_5217(void)
{
	object var_86_object;
	@CreateDiaryEntry(var_86_object, 292, 1, 521463);
	bool var_90_bool; object var_91_object;
	var_86_object = var_91_object;
	func_5243(var_90_bool, var_91_object, 284);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2915(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_325_object, object var_326_object)
{
	var_0_object = var_326_object;
	var_1_object = var_325_object;
	var_3_string = false;
	if(1 != 0) {
		func_2973(var_326_object, "Neutral");
		var_0_object->SetMessage(529922); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529923, -1, 31306); //@t
		var_0_object->AddReply(529924, -1, 31307); //@t
		goto Label_2943;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb67";
	}
Label_2943:
	bool var_347_bool;
	func_4647(var_347_bool);
	if(var_347_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4455(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2972;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2972:
		return 0;

	}
	
}


void func_4198(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


void func_4455(string var_259_string)
{
	bool var_263_bool; float var_264_float; float var_265_float;
	@lshHasAnimation(var_263_bool, var_259_string);
	if(var_263_bool != 0) {
		@lshGetAnimTimes(var_259_string, var_264_float, var_265_float);
		@lshPlayAnimation(var_264_float, var_265_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_259_string);
	}
	
}


// @pe
void func_3176(object var_2_object, string var_390_string)
{
	bool var_391_bool;
	func_4647(var_391_bool);
	if(!var_391_bool) //@nz
		return 0;
	if(var_390_string == var_2_object)
		return 0;
	string var_394_string; bool var_395_bool;
	var_390_string = var_394_string;
	if(var_390_string == "")
		var_395_bool = false;
	else
		var_395_bool = true;
	func_4471(var_394_string, var_395_bool);
	var_2_object = var_390_string;
	
}


void func_3946(object var_0_object)
{
	bool var_36_bool;
	func_4225(var_36_bool);
	if(!var_36_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_4122();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_3436(object var_2_object, string var_736_string)
{
	bool var_737_bool;
	func_4647(var_737_bool);
	if(!var_737_bool) //@nz
		return 0;
	if(var_736_string == var_2_object)
		return 0;
	string var_740_string; bool var_741_bool;
	var_736_string = var_740_string;
	if(var_736_string == "")
		var_741_bool = false;
	else
		var_741_bool = true;
	func_4471(var_740_string, var_741_bool);
	var_2_object = var_736_string;
	
}


void func_3693(object var_0_object, int var_59_int, object var_60_object)
{
	var_0_object = var_60_object;
	bool var_70_bool; object var_71_object;
	var_60_object = var_71_object;
	func_4230(var_70_bool, var_71_object, 70.0);
	if(!var_70_bool) { //@nz
		var_59_int = -2;
		return 8;
	}
	object var_66_object;
	@CreateDialog(var_66_object);
	int var_118_int;
	func_4641(var_118_int);
	var_66_object->SetNPCName(var_118_int);
	int var_119_int;
	func_4639(var_119_int);
	var_66_object->SetNPCDescription(var_119_int);
	string var_120_string;
	func_4643(var_120_string);
	var_66_object->SetPhoto(var_120_string);
	string var_121_string;
	func_4645(var_121_string);
	var_66_object->SetPhoto2(var_121_string);
	int var_122_int;
	func_5321(var_122_int);
	var_66_object->SetPlayerName(var_122_int);
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	@DoDialog(var_66_object);
	bool var_131_bool; object var_132_object;
	object var_133_object;
	func_4508(var_133_object);
	var_133_object = var_132_object;
	func_4317(var_131_bool, var_132_object);
	object var_226_object; object var_227_object;
	var_60_object = var_226_object;
	var_66_object = var_227_object;
	TaskCall(13);
	func_3774(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object);
	TaskReturn();
	bool var_69_bool;
	var_66_object->IsDialogEnd(var_69_bool);
	
	for(;;) {
		var_275_bool = !var_69_bool; //@nz
		if(var_275_bool == 0) goto Label_3763;
		@sync();
		var_66_object->IsDialogEnd(var_69_bool);
	}
	
Label_3763:
	object var_276_object;
	var_60_object = var_276_object;
	func_4299();
	@StopDialog(var_66_object);
	var_66_object->GetReturnValue(-1);
	int var_68_int = var_59_int;
}
EMIT "Stack[-4] = 0";


void func_4206(bool var_44_bool, cvector var_45_cvector)
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


void func_5230(object var_60_object)
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
void func_4978(bool var_686_bool)
{
	int var_688_int;
	func_4524(var_688_int, "oob8Aglaja2");
	if(var_688_int == 0) {
		var_686_bool = true;
		return 0;
	}
	var_686_bool = false;
}


// @pe
void func_4724(void)
{
	@SetVariable("oob7Aglaja1", 1);
}


void func_4471(string var_237_string, bool var_238_bool)
{
	bool var_244_bool; float var_245_float; float var_246_float;
	@lshHasAnimation(var_244_bool, var_237_string);
	if(var_244_bool != 0) {
		@lshGetAnimTimes(var_237_string, var_245_float, var_246_float);
		@lshPlayAnimation(var_245_float, var_246_float, var_238_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_237_string);
	}
	
}


void func_4216(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_4206(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


void func_3960(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_4216(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4730(void)
{
	func_5178();
	bool var_226_bool;
	func_4564(var_226_bool, "quest_b7_03", "completed");
}


void func_5243(bool var_51_bool, object var_52_object, int var_53_int)
{
	object var_60_object;
	func_5230(var_60_object);
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
void func_1404(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_609_object, object var_610_object)
{
	var_0_object = var_610_object;
	var_1_object = var_609_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_616_bool;
		func_4908(var_1_object);
		if(var_616_bool != 0) {
			object var_622_object; object var_623_object;
			var_622_object = var_1_object;
			var_623_object = var_0_object;
			func_4752();
			func_1531(var_610_object, "Threat");
			var_0_object->SetMessage(521373); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530766, 32077, 32076); //@t
			var_0_object->AddReply(530781, 32077, 32091); //@t
		} else {
					func_1531(var_610_object, "Neutral");
					var_0_object->SetMessage(521376); //@t
					var_0_object->ClearReplies(); //@t
					bool var_651_bool;
					func_4920(var_1_object);
					if(var_651_bool != 0)
						var_0_object->AddReply(521377, 22556, 22555); //@t
					bool var_660_bool;
					func_4932(var_1_object);
					if(var_660_bool != 0)
						var_0_object->AddReply(521436, 22615, 22614); //@t
					bool var_669_bool = false;
					bool var_670_bool;
					func_4944(var_1_object);
					if(var_670_bool != 0) {
						bool var_686_bool;
						func_4978(var_1_object);
						if(var_686_bool != 0)
							var_669_bool = true;
					}
					if(var_669_bool != 0)
						var_0_object->AddReply(521510, 22672, 22671); //@t
					var_0_object->AddReply(521380, -1, 22558); //@t
					var_0_object->AddReply(530775, -1, 32085); //@t
		}
	}
	for(;;) {
		bool var_641_bool;
		func_4647(var_641_bool);
		if(var_641_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4455(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1530;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1530:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x580";


// @pe
void func_4990(bool var_177_bool)
{
	int var_179_int;
	func_4524(var_179_int, "b11q01");
	if(var_179_int == 1000)
		var_177_bool = true;
	var_177_bool = false;
}


void func_4225(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


// @pe
void func_2434(object var_2_object, string var_843_string)
{
	bool var_844_bool;
	func_4647(var_844_bool);
	if(!var_844_bool) //@nz
		return 0;
	if(var_843_string == var_2_object)
		return 0;
	string var_847_string; bool var_848_bool;
	var_843_string = var_847_string;
	if(var_843_string == "")
		var_848_bool = false;
	else
		var_848_bool = true;
	func_4471(var_847_string, var_848_bool);
	var_2_object = var_843_string;
	
}


// @pe
void func_4740(void)
{
	@SetVariable("b8q01", 1);
	func_5191();
	func_5204();
}


void func_4230(bool var_70_bool, object var_71_object, float var_72_float)
{
	cvector var_83_cvector; bool var_90_bool;
	var_71_object->GetPosition(var_83_cvector);
	float var_82_float;
	var_71_object->GetEyesHeight(var_82_float);
	var_91_float = GetByIndex(var_83_cvector, 1);
	SetByIndex(var_83_cvector, 1) = (var_91_float + var_82_float);
	cvector var_84_cvector;
	@GetPosition(var_84_cvector);
	@GetEyesHeight(var_82_float);
	var_92_float = GetByIndex(var_84_cvector, 1);
	SetByIndex(var_84_cvector, 1) = (var_92_float + var_82_float);
	cvector var_85_cvector = var_83_cvector - var_84_cvector;
	var_93_float = GetByIndex(var_85_cvector, 1);
	SetByIndex(var_85_cvector, 1) = (float)0;
	var_95_float = sqrt(var_85_cvector | var_85_cvector);
	var_85_cvector /= var_95_float;
	cvector var_86_cvector = -var_85_cvector;
	cvector var_97_cvector;
	func_4514(var_97_cvector, (var_86_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_87_cvector = ((var_85_cvector * var_72_float) + (var_97_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_89_bool;
	@IsOverrideActive(var_89_bool);
	if(var_89_bool != 0)
		var_70_bool = false;
	@StopWorld();
	@CameraTransit((var_84_cvector + var_87_cvector), var_86_cvector, true);
	var_111_float = GetByIndex(var_87_cvector, 0);
	var_112_float = GetByIndex(var_87_cvector, 2);
	@Rotate(var_111_float, var_112_float);
	bool var_113_bool;
	func_4647(var_113_bool);
	if(var_113_bool != 0) {
	} else {
		@HasAnimationTrack(var_90_bool, "head");
		if(var_90_bool == 0) goto Label_4293;
		@LookAsyncCamera("head");
	}
Label_4293:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_70_bool = true;
	
}


void func_4486(bool var_165_bool, string var_166_string)
{
	bool var_168_bool;
	bool var_169_bool;
	func_4647(var_169_bool);
	if(var_169_bool != 0) {
		@lshHasSpeech(var_168_bool, var_166_string);
		if(var_168_bool != 0) {
			@lshPlaySpeech(var_166_string);
			var_165_bool = true;
		}
	}
	var_165_bool = false;
}


void func_3975(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


// @pe
void func_5002(bool var_833_bool)
{
	int var_835_int;
	func_4524(var_835_int, "oob11Aglaja1");
	if(var_835_int == 0) {
		var_833_bool = true;
		return 0;
	}
	var_833_bool = false;
}


void func_3980(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_4198(var_51_float, var_52_object);
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
void func_4752(void)
{
	@SetVariable("oob8Aglaja1", 1);
}


void func_4501(void)
{
	bool var_39_bool;
	func_4647(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_4758(void)
{
	func_5217();
	bool var_93_bool;
	func_4564(var_93_bool, "quest_b8_01", "completed");
}


void func_5271(object var_48_object)
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


// @pe
void func_5014(bool var_871_bool)
{
	int var_873_int;
	func_4524(var_873_int, "oob11Aglaja2");
	if(var_873_int == 0) {
		var_871_bool = true;
		return 0;
	}
	var_871_bool = false;
}


void func_4508(object var_133_object)
{
	object var_135_object;
	@self(var_135_object);
	var_135_object = var_133_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2973(object var_2_object, string var_332_string)
{
	bool var_333_bool;
	func_4647(var_333_bool);
	if(!var_333_bool) //@nz
		return 0;
	if(var_332_string == var_2_object)
		return 0;
	string var_336_string; bool var_337_bool;
	var_332_string = var_336_string;
	if(var_332_string == "")
		var_337_bool = false;
	else
		var_337_bool = true;
	func_4471(var_336_string, var_337_bool);
	var_2_object = var_332_string;
	
}


// @pe
void func_4768(void)
{
	@SetVariable("oob8Aglaja2", 1);
}


// @pe
void func_5026(bool var_753_bool)
{
	int var_755_int;
	func_4524(var_755_int, "b9q03BadInit");
	if(var_755_int != 0) {
		var_753_bool = true;
		return 0;
	}
	var_753_bool = false;
}


void func_4002(void)
{
	float var_888_float;
	@rand(var_888_float, 8, 16);
	@SetTimer(10, var_888_float);
}


void func_4514(cvector var_97_cvector, cvector var_98_cvector)
{
	float var_101_float = sqrt(var_98_cvector | var_98_cvector);
	if(var_101_float < 0.000001)
		var_97_cvector = [0.0, 0.0, 0.0];
	var_97_cvector = var_98_cvector / var_101_float;
}


// @pe
void func_4774(void)
{
	@SetVariable("oob11Aglaja1", 1);
}


void func_5288(object var_111_object, string var_112_string, float var_113_float)
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


void func_3240(object var_0_object, int var_705_int, object var_706_object)
{
	var_0_object = var_706_object;
	bool var_716_bool; object var_717_object;
	var_706_object = var_717_object;
	func_4230(var_716_bool, var_717_object, 70.0);
	if(!var_716_bool) { //@nz
		var_705_int = -2;
		return 8;
	}
	object var_712_object;
	@CreateDialog(var_712_object);
	int var_720_int;
	func_4641(var_720_int);
	var_712_object->SetNPCName(var_720_int);
	int var_721_int;
	func_4639(var_721_int);
	var_712_object->SetNPCDescription(var_721_int);
	string var_722_string;
	func_4643(var_722_string);
	var_712_object->SetPhoto(var_722_string);
	string var_723_string;
	func_4645(var_723_string);
	var_712_object->SetPhoto2(var_723_string);
	int var_724_int;
	func_5321(var_724_int);
	var_712_object->SetPlayerName(var_724_int);
	bool var_713_bool;
	@IsOverrideActive(var_713_bool);
	if(var_713_bool != 0) {
		var_705_int = -2;
		return 8;
	}
	@DoDialog(var_712_object);
	bool var_726_bool; object var_727_object;
	object var_728_object;
	func_4508(var_728_object);
	var_728_object = var_727_object;
	func_4317(var_726_bool, var_727_object);
	object var_729_object; object var_730_object;
	var_706_object = var_729_object;
	var_712_object = var_730_object;
	TaskCall(11);
	func_3321(var_731_object, var_732_object, var_733_string, var_734_bool, var_729_object, var_730_object);
	TaskReturn();
	bool var_715_bool;
	var_712_object->IsDialogEnd(var_715_bool);
	
	for(;;) {
		var_798_bool = !var_715_bool; //@nz
		if(var_798_bool == 0) goto Label_3310;
		@sync();
		var_712_object->IsDialogEnd(var_715_bool);
	}
	
Label_3310:
	object var_799_object;
	var_706_object = var_799_object;
	func_4299();
	@StopDialog(var_712_object);
	var_712_object->GetReturnValue(-1);
	int var_714_int = var_705_int;
}
EMIT "Stack[-4] = 0";


void func_4011(void)
{
	@KillTimer(10);
}


// @pe
void func_4780(void)
{
	@SetVariable("oob11Aglaja2", 1);
}


void func_4524(int var_451_int, string var_452_string)
{
	int var_454_int;
	@GetVariable(var_452_string, var_454_int);
	var_454_int = var_451_int;
}


// @pe
void func_5038(bool var_747_bool)
{
	int var_749_int;
	func_4524(var_749_int, "b9q03BonefiresCount");
	if(var_749_int == 4)
		var_747_bool = true;
	var_747_bool = false;
}


void func_4529(object var_165_object, string var_166_string)
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
void func_4786(void)
{
	@SetVariable("oob9Aglaja1", 1);
}


// @pe
void func_4792(void)
{
	@SetVariable("oob9Aglaja2", 1);
}


// @pe
void func_5050(bool var_760_bool)
{
	int var_762_int;
	func_4524(var_762_int, "oob9Aglaja1");
	if(var_762_int == 0) {
		var_760_bool = true;
		return 0;
	}
	var_760_bool = false;
}


void func_4540(string var_87_string, bool var_88_bool)
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
void func_4798(void)
{
	int var_99_int;
	func_4524(var_99_int, "map_chertez_state");
	if(var_99_int <= 1) {
		@SetVariable("map_chertez_state", 1);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_3774(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_226_object, object var_227_object)
{
	var_0_object = var_227_object;
	var_1_object = var_226_object;
	var_3_string = false;
	if(1 != 0) {
		func_3832(var_227_object, "Threat");
		var_0_object->SetMessage(530682); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(530683, 31974, 31973); //@t
		var_0_object->AddReply(530688, 31974, 31978); //@t
		goto Label_3802;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xec2";
	}
Label_3802:
	bool var_257_bool;
	func_4647(var_257_bool);
	if(var_257_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4455(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3831;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3831:
		return 0;

	}
	
}


// @pe
void func_5062(bool var_775_bool)
{
	int var_777_int;
	func_4524(var_777_int, "oob9Aglaja2");
	if(var_777_int == 0) {
		var_775_bool = true;
		return 0;
	}
	var_775_bool = false;
}


void func_5321(int var_122_int)
{
	int var_124_int;
	@GetVariable("branch", var_124_int);
	if(var_124_int == 0) {
		var_122_int = 1;
		return 2;
	EMIT "GOTO 0x14d8";
	}
	if(var_124_int == 1) {
		var_122_int = 2;
		return 2;
	}
	var_122_int = 3;
}


void func_4299(void)
{
	bool var_278_bool;
	@CameraSwitchToNormal(true);
	bool var_280_bool;
	func_4647(var_280_bool);
	if(var_280_bool != 0) {
	} else {
		@HasAnimationTrack(var_278_bool, "head");
		if(var_278_bool == 0) goto Label_4316;
		@UnlookAsync("head");
	}
Label_4316:
	
}


void func_4557(bool var_496_bool, object var_497_object, string var_498_string)
{
	int var_501_int;
	@GetInvItemByName(var_501_int, var_498_string);
	bool var_502_bool;
	var_497_object->HasItem(var_501_int, var_502_bool);
	var_502_bool = var_496_bool;
}


// @pe
void func_4815(void)
{
	int var_196_int;
	func_4524(var_196_int, "map_chertez_state");
	if(var_196_int <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_2255(object var_0_object, int var_802_int, object var_803_object)
{
	var_0_object = var_803_object;
	bool var_813_bool; object var_814_object;
	var_803_object = var_814_object;
	func_4230(var_813_bool, var_814_object, 70.0);
	if(!var_813_bool) { //@nz
		var_802_int = -2;
		return 8;
	}
	object var_809_object;
	@CreateDialog(var_809_object);
	int var_817_int;
	func_4641(var_817_int);
	var_809_object->SetNPCName(var_817_int);
	int var_818_int;
	func_4639(var_818_int);
	var_809_object->SetNPCDescription(var_818_int);
	string var_819_string;
	func_4643(var_819_string);
	var_809_object->SetPhoto(var_819_string);
	string var_820_string;
	func_4645(var_820_string);
	var_809_object->SetPhoto2(var_820_string);
	int var_821_int;
	func_5321(var_821_int);
	var_809_object->SetPlayerName(var_821_int);
	bool var_810_bool;
	@IsOverrideActive(var_810_bool);
	if(var_810_bool != 0) {
		var_802_int = -2;
		return 8;
	}
	@DoDialog(var_809_object);
	bool var_823_bool; object var_824_object;
	object var_825_object;
	func_4508(var_825_object);
	var_825_object = var_824_object;
	func_4317(var_823_bool, var_824_object);
	object var_826_object; object var_827_object;
	var_803_object = var_826_object;
	var_809_object = var_827_object;
	TaskCall(5);
	func_2336(var_828_object, var_829_object, var_830_string, var_831_bool, var_826_object, var_827_object);
	TaskReturn();
	bool var_812_bool;
	var_809_object->IsDialogEnd(var_812_bool);
	
	for(;;) {
		var_883_bool = !var_812_bool; //@nz
		if(var_883_bool == 0) goto Label_2325;
		@sync();
		var_809_object->IsDialogEnd(var_812_bool);
	}
	
Label_2325:
	object var_884_object;
	var_803_object = var_884_object;
	func_4299();
	@StopDialog(var_809_object);
	var_809_object->GetReturnValue(-1);
	int var_811_int = var_802_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5074(bool var_538_bool, object var_539_object)
{
	object var_541_object;
	var_539_object = var_541_object;
	bool var_540_bool;
	func_5119(var_540_bool, var_541_object);
	if(var_540_bool != 0) {
		var_538_bool = true;
		return 0;
	}
	var_538_bool = false;
}


void func_4564(bool var_93_bool, string var_94_string, string var_95_string)
{
	object var_97_object;
	@FindActor(var_97_object, var_94_string);
	if(var_97_object == null)
		var_93_bool = false;
	@Trigger(var_97_object, var_95_string);
	var_93_bool = true;
}
EMIT "Stack[-1] = 0";


void func_5338(object var_54_object)
{
	int var_56_int;
	@GetVariable("mt_aglaja", var_56_int);
	if(!var_56_int) { //@nz
		int var_59_int; object var_60_object;
		var_54_object = var_60_object;
		TaskCall(12);
		func_3693(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		@SetVariable("mt_aglaja", 1);
	}
	bool var_286_bool;
	func_4596(var_286_bool, 8);
	if(var_286_bool != 0) {
		int var_301_int; object var_302_object;
		var_54_object = var_302_object;
		TaskCall(6);
		func_2834(var_303_object, var_301_int, var_302_object);
		TaskReturn();
		return 2;
	}
	bool var_357_bool;
	func_4596(var_357_bool, 12);
	if(var_357_bool != 0) {
		int var_359_int; object var_360_object;
		var_54_object = var_360_object;
		TaskCall(8);
		func_3037(var_361_object, var_359_int, var_360_object);
		TaskReturn();
		return 2;
	}
	bool var_415_bool;
	func_4590(var_415_bool, 7);
	if(var_415_bool != 0) {
		int var_418_int; object var_419_object;
		var_54_object = var_419_object;
		TaskCall(0);
		func_0(var_420_object, var_418_int, var_419_object);
		TaskReturn();
		return 2;
	}
	bool var_583_bool;
	func_4590(var_583_bool, 8);
	if(var_583_bool != 0) {
		int var_585_int; object var_586_object;
		var_54_object = var_586_object;
		TaskCall(2);
		func_1323(var_587_object, var_585_int, var_586_object);
		TaskReturn();
		return 2;
	}
	bool var_703_bool;
	func_4590(var_703_bool, 9);
	if(var_703_bool != 0) {
		int var_705_int; object var_706_object;
		var_54_object = var_706_object;
		TaskCall(10);
		func_3240(var_707_object, var_705_int, var_706_object);
		TaskReturn();
		return 2;
	}
	bool var_800_bool;
	func_4590(var_800_bool, 11);
	if(var_800_bool != 0) {
		int var_802_int; object var_803_object;
		var_54_object = var_803_object;
		TaskCall(4);
		func_2255(var_804_object, var_802_int, var_803_object);
		TaskReturn();
		return 2;
	}
}


// @pe
void func_5084(bool var_449_bool)
{
	int var_451_int;
	func_4524(var_451_int, "b7q01");
	if(var_451_int == 6)
		var_449_bool = true;
	var_449_bool = false;
}


void func_4317(bool var_131_bool, object var_132_object)
{
	int var_138_int; int var_139_int;
	@GetVariable("voice_common", var_138_int);
	if(var_138_int != 0) {
		bool var_142_bool; object var_143_object;
		var_132_object = var_143_object;
		func_4375(var_142_bool, var_143_object);
		if(!var_142_bool) { //@nz
			bool var_173_bool; object var_174_object;
			var_132_object = var_174_object;
			func_4412(var_173_bool, var_174_object);
			if(!var_173_bool) { //@nz
				var_131_bool = false;
				return 4;
			}
		}
		@irand(var_139_int, 2);
		if(var_139_int != 0)
			@SetVariable("voice_common", ((var_138_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_218_bool; object var_219_object;
		var_132_object = var_219_object;
		func_4412(var_218_bool, var_219_object);
		if(!var_218_bool) { //@nz
			bool var_221_bool; object var_222_object;
			var_132_object = var_222_object;
			func_4375(var_221_bool, var_222_object);
			if(!var_221_bool) { //@nz
				var_131_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4373;
	
Label_4373:
	var_131_bool = true;
	
}


void func_3037(object var_0_object, int var_359_int, object var_360_object)
{
	var_0_object = var_360_object;
	bool var_370_bool; object var_371_object;
	var_360_object = var_371_object;
	func_4230(var_370_bool, var_371_object, 70.0);
	if(!var_370_bool) { //@nz
		var_359_int = -2;
		return 8;
	}
	object var_366_object;
	@CreateDialog(var_366_object);
	int var_374_int;
	func_4641(var_374_int);
	var_366_object->SetNPCName(var_374_int);
	int var_375_int;
	func_4639(var_375_int);
	var_366_object->SetNPCDescription(var_375_int);
	string var_376_string;
	func_4643(var_376_string);
	var_366_object->SetPhoto(var_376_string);
	string var_377_string;
	func_4645(var_377_string);
	var_366_object->SetPhoto2(var_377_string);
	int var_378_int;
	func_5321(var_378_int);
	var_366_object->SetPlayerName(var_378_int);
	bool var_367_bool;
	@IsOverrideActive(var_367_bool);
	if(var_367_bool != 0) {
		var_359_int = -2;
		return 8;
	}
	@DoDialog(var_366_object);
	bool var_380_bool; object var_381_object;
	object var_382_object;
	func_4508(var_382_object);
	var_382_object = var_381_object;
	func_4317(var_380_bool, var_381_object);
	object var_383_object; object var_384_object;
	var_360_object = var_383_object;
	var_366_object = var_384_object;
	TaskCall(9);
	func_3118(var_385_object, var_386_object, var_387_string, var_388_bool, var_383_object, var_384_object);
	TaskReturn();
	bool var_369_bool;
	var_366_object->IsDialogEnd(var_369_bool);
	
	for(;;) {
		var_413_bool = !var_369_bool; //@nz
		if(var_413_bool == 0) goto Label_3107;
		@sync();
		var_366_object->IsDialogEnd(var_369_bool);
	}
	
Label_3107:
	object var_414_object;
	var_360_object = var_414_object;
	func_4299();
	@StopDialog(var_366_object);
	var_366_object->GetReturnValue(-1);
	int var_368_int = var_359_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4832(object var_110_object)
{
	object var_114_object;
	func_5271(var_114_object);
	object var_111_object;
	var_114_object = var_111_object;
	func_5288(var_111_object, "pt_map_aglaja", (float)-1);
	object var_134_object;
	func_5271(var_134_object);
	var_110_object->ShowMap(var_134_object);
}


void func_4576(float var_59_float)
{
	float var_61_float;
	@GetGameTime(var_61_float);
	var_61_float = var_59_float;
}


void func_4581(int var_186_int)
{
	float var_188_float;
	@GetGameTime(var_188_float);
	var_186_int = 1 + (var_188_float / 24);
}


// @pe
void func_5096(bool var_494_bool, object var_495_object)
{
	object var_497_object;
	var_495_object = var_497_object;
	bool var_496_bool;
	func_4557(var_496_bool, var_497_object, "burah_serum");
	if(var_496_bool != 0) {
		var_494_bool = true;
		return 0;
	}
	var_494_bool = false;
}


// @pe
void func_4590(bool var_415_bool, int var_416_int)
{
	int var_417_int;
	func_4581(var_417_int);
	var_415_bool = var_417_int == var_416_int;
}


// @pe
void func_4848(bool var_482_bool)
{
	int var_484_int;
	func_4524(var_484_int, "b7q01");
	if(var_484_int == 1000)
		var_482_bool = true;
	var_482_bool = false;
}


// @pe
void func_5107(bool var_520_bool)
{
	int var_522_int;
	func_4524(var_522_int, "b7q01");
	if(var_522_int == 8)
		var_520_bool = true;
	var_520_bool = false;
}


void func_4596(bool var_286_bool, int var_287_int)
{
	float var_291_float;
	@GetGameTime(var_291_float);
	if((1 + (var_291_float / 24)) != var_287_int)
		var_286_bool = false;
	int var_298_int;
	var_291_float = var_298_int;
	int var_293_int = var_298_int % 24;
	var_286_bool = var_293_int < 7;
}


// @pe
void func_3832(object var_2_object, string var_233_string)
{
	bool var_234_bool;
	func_4647(var_234_bool);
	if(!var_234_bool) //@nz
		return 0;
	if(var_233_string == var_2_object)
		return 0;
	string var_237_string; bool var_238_bool;
	var_233_string = var_237_string;
	if(var_233_string == "")
		var_238_bool = false;
	else
		var_238_bool = true;
	func_4471(var_237_string, var_238_bool);
	var_2_object = var_233_string;
	
}


// @pe
void func_3321(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_729_object, object var_730_object)
{
	var_0_object = var_730_object;
	var_1_object = var_729_object;
	var_3_string = false;
	if(1 != 0) {
		func_3436(var_730_object, "Neutral");
		var_0_object->SetMessage(530357); //@t
		var_0_object->ClearReplies(); //@t
		bool var_745_bool = false;
		bool var_746_bool = false;
		bool var_747_bool;
		func_5038(var_1_object);
		if(var_747_bool != 0) {
			bool var_753_bool;
			func_5026(var_1_object);
			if(!var_753_bool) //@nz
				var_746_bool = true;
		}
		if(var_746_bool != 0) {
			bool var_760_bool;
			func_5050(var_1_object);
			if(var_760_bool != 0)
				var_745_bool = true;
		}
		if(var_745_bool != 0)
			var_0_object->AddReply(530358, 32319, 31732); //@t
		bool var_769_bool = false;
		bool var_770_bool = false;
		bool var_771_bool;
		func_5038(var_1_object);
		if(var_771_bool != 0) {
			bool var_773_bool;
			func_5026(var_1_object);
			if(var_773_bool != 0)
				var_770_bool = true;
		}
		if(var_770_bool != 0) {
			bool var_775_bool;
			func_5062(var_1_object);
			if(var_775_bool != 0)
				var_769_bool = true;
		}
		if(var_769_bool != 0)
			var_0_object->AddReply(530361, 31736, 31735); //@t
		var_0_object->AddReply(530916, -1, 32243); //@t
		var_0_object->AddReply(530917, -1, 32244); //@t
		goto Label_3406;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xcfd";
	}
Label_3406:
	bool var_790_bool;
	func_4647(var_790_bool);
	if(var_790_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4455(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3435;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3435:
		return 0;

	}
	
}


// @pe
void func_1531(object var_2_object, string var_626_string)
{
	bool var_627_bool;
	func_4647(var_627_bool);
	if(!var_627_bool) //@nz
		return 0;
	if(var_626_string == var_2_object)
		return 0;
	string var_630_string; bool var_631_bool;
	var_626_string = var_630_string;
	if(var_626_string == "")
		var_631_bool = false;
	else
		var_631_bool = true;
	func_4471(var_630_string, var_631_bool);
	var_2_object = var_626_string;
	
}


// @pe
void func_4860(bool var_488_bool)
{
	int var_490_int;
	func_4524(var_490_int, "oob7Aglaja1");
	if(var_490_int == 0) {
		var_488_bool = true;
		return 0;
	}
	var_488_bool = false;
}


void func_5119(bool var_540_bool, object var_541_object)
{
	float var_543_float;
	var_541_object->GetProperty("disease", var_543_float);
	var_540_bool = var_543_float == 0;
}


