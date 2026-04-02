// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_7502();
			if(var_42_cvector == 27427) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_7766();
			}
			if(var_42_cvector == 44129) {
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_8095();
			}
			if(var_42_cvector == 27493) {
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_7783();
				object var_120_object = var_1_object;
				func_8145(var_0_object);
			}
			if(var_42_cvector == 27494) {
				object var_162_object; object var_163_object;
				var_162_object = var_1_object;
				var_163_object = var_0_object;
				func_7805();
				object var_175_object = var_1_object;
				func_8138(var_0_object);
			}
			if(var_42_cvector == 29548) {
				object var_182_object; object var_183_object;
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_7937();
			}
			if(var_42_cvector == 29549) {
				object var_188_object; object var_189_object;
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_7943();
			}
			if(var_42_cvector == 40522) {
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				func_7919();
			}
			if(var_42_cvector == 40535) {
				object var_200_object = var_1_object;
				func_8131(var_0_object);
				object var_205_object = var_1_object;
				func_8038(var_0_object);
				object var_229_object; object var_230_object;
				var_229_object = var_1_object;
				var_230_object = var_0_object;
				func_7907();
			}
			if(var_41_bool == 27418) {
				bool var_235_bool;
				func_8198(var_1_object);
				if(var_235_bool != 0) {
					object var_243_object; object var_244_object;
					var_243_object = var_1_object;
					var_244_object = var_0_object;
					func_8071();
					object var_269_object; object var_270_object;
					var_269_object = var_1_object;
					var_270_object = var_0_object;
					func_8101();
					func_233(var_42_cvector, "Confusion");
					var_0_object->SetMessage(526139); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528171, 29526, 29525); //@t
					var_0_object->AddReply(528185, 29500, 29540); //@t
					return 0;
				}
				object var_297_object; object var_298_object;
				var_297_object = var_1_object;
				var_298_object = var_0_object;
				func_8101();
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526149); //@t
				var_0_object->ClearReplies(); //@t
				bool var_301_bool;
				func_8640(var_1_object);
				if(var_301_bool != 0)
					var_0_object->AddReply(541891, 44131, 44129); //@t
				bool var_310_bool;
				func_8222(var_1_object);
				if(var_310_bool != 0)
					var_0_object->AddReply(526208, 29542, 27489); //@t
				bool var_319_bool;
				func_8448(var_1_object);
				if(var_319_bool != 0)
					var_0_object->AddReply(528192, 29552, 29548); //@t
				bool var_328_bool;
				func_8460(var_1_object);
				if(var_328_bool != 0)
					var_0_object->AddReply(528193, 29562, 29549); //@t
				bool var_337_bool = false;
				bool var_338_bool;
				func_8342(var_338_bool, var_1_object);
				if(var_338_bool != 0) {
					bool var_356_bool;
					func_8352(var_1_object);
					if(var_356_bool != 0)
						var_337_bool = true;
				}
				if(var_337_bool != 0)
					var_0_object->AddReply(538631, 40523, 40522); //@t
				var_0_object->AddReply(526150, -1, 27429); //@t
				return 0;
			}
			if(var_41_bool == 40523) {
				func_233(var_42_cvector, "Threat");
				var_0_object->SetMessage(538632); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538633, 40526, 40524); //@t
				var_0_object->AddReply(538634, 40528, 40525); //@t
				return 0;
			}
			if(var_41_bool == 40528) {
				func_233(var_42_cvector, "Threat");
				var_0_object->SetMessage(538636); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538637, 40532, 40529); //@t
				var_0_object->AddReply(538639, 40532, 40531); //@t
				return 0;
			}
			if(var_41_bool == 40526) {
				func_233(var_42_cvector, "Threat");
				var_0_object->SetMessage(538635); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538638, 40532, 40530); //@t
				return 0;
			}
			if(var_41_bool == 40532) {
				func_233(var_42_cvector, "Threat");
				var_0_object->SetMessage(538640); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538641, -1, 40535); //@t
				var_0_object->AddReply(541892, -1, 44130); //@t
				return 0;
			}
			if(var_41_bool == 29562) {
				func_233(var_42_cvector, "Isee");
				var_0_object->SetMessage(528205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528206, -1, 29563); //@t
				var_0_object->AddReply(541051, -1, 43153); //@t
				return 0;
			}
			if(var_41_bool == 29552) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528195); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528196, 29554, 29553); //@t
				var_0_object->AddReply(541889, -1, 44126); //@t
				return 0;
			}
			if(var_41_bool == 29554) {
				func_233(var_42_cvector, "Confusion");
				var_0_object->SetMessage(528197); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528198, 29558, 29555); //@t
				var_0_object->AddReply(541890, 29556, 44127); //@t
				return 0;
			}
			if(var_41_bool == 29556) {
				func_233(var_42_cvector, "Confusion");
				var_0_object->SetMessage(528199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528200, 29558, 29557); //@t
				return 0;
			}
			if(var_41_bool == 29558) {
				func_233(var_42_cvector, "Confusion");
				var_0_object->SetMessage(528201); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528202, 29560, 29559); //@t
				return 0;
			}
			if(var_41_bool == 29560) {
				func_233(var_42_cvector, "Threat");
				var_0_object->SetMessage(528203); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528204, -1, 29561); //@t
				var_0_object->AddReply(541888, -1, 44125); //@t
				return 0;
			}
			if(var_41_bool == 29542) {
				func_233(var_42_cvector, "Confusion");
				var_0_object->SetMessage(528186); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528187, 27490, 29543); //@t
				var_0_object->AddReply(541884, 44121, 44120); //@t
				return 0;
			}
			if(var_41_bool == 44121) {
				func_233(var_42_cvector, "Confusion");
				var_0_object->SetMessage(541885); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541886, 27490, 44122); //@t
				return 0;
			}
			if(var_41_bool == 27490) {
				func_233(var_42_cvector, "Confusion");
				var_0_object->SetMessage(526209); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528188, 29545, 29544); //@t
				var_0_object->AddReply(541913, 29545, 44155); //@t
				return 0;
			}
			if(var_41_bool == 29545) {
				func_233(var_42_cvector, "Threat");
				var_0_object->SetMessage(528189); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526210, 29546, 27491); //@t
				var_0_object->AddReply(541914, 44158, 44157); //@t
				return 0;
			}
			if(var_41_bool == 44158) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541915); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541916, 27492, 44159); //@t
				return 0;
			}
			if(var_41_bool == 29546) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528190); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528191, 27492, 29547); //@t
				var_0_object->AddReply(528194, 27492, 29550); //@t
				return 0;
			}
			if(var_41_bool == 27492) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526211); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526212, -1, 27493); //@t
				var_0_object->AddReply(526213, -1, 27494); //@t
				return 0;
			}
			if(var_41_bool == 44131) {
				func_233(var_42_cvector, "Confusion");
				var_0_object->SetMessage(541893); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541894, 44137, 44132); //@t
				var_0_object->AddReply(541895, 44134, 44133); //@t
				return 0;
			}
			if(var_41_bool == 44134) {
				func_233(var_42_cvector, "Isee");
				var_0_object->SetMessage(541896); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541897, 44137, 44135); //@t
				var_0_object->AddReply(541898, 44140, 44136); //@t
				return 0;
			}
			if(var_41_bool == 44137) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541899); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541900, 44140, 44138); //@t
				return 0;
			}
			if(var_41_bool == 44140) {
				func_233(var_42_cvector, "Threat");
				var_0_object->SetMessage(541901); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541902, 44144, 44141); //@t
				var_0_object->AddReply(541903, 44144, 44143); //@t
				return 0;
			}
			if(var_41_bool == 44144) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541904); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541905, 44148, 44146); //@t
				var_0_object->AddReply(541906, 44151, 44147); //@t
				return 0;
			}
			if(var_41_bool == 44148) {
				func_233(var_42_cvector, "Threat");
				var_0_object->SetMessage(541907); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541908, 44151, 44149); //@t
				var_0_object->AddReply(541909, -1, 44150); //@t
				return 0;
			}
			if(var_41_bool == 44151) {
				func_233(var_42_cvector, "Threat");
				var_0_object->SetMessage(541910); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541911, -1, 44153); //@t
				var_0_object->AddReply(541912, -1, 44154); //@t
				return 0;
			}
			if(var_41_bool == 29526) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528172); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526140, 29500, 27419); //@t
				var_0_object->AddReply(541042, 43140, 43139); //@t
				return 0;
			}
			if(var_41_bool == 43140) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541043); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541044, 29500, 43141); //@t
				return 0;
			}
			if(var_41_bool == 29500) {
				func_233(var_42_cvector, "Isee");
				var_0_object->SetMessage(528148); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528149, 44110, 29501); //@t
				var_0_object->AddReply(541046, 29502, 43144); //@t
				return 0;
			}
			if(var_41_bool == 44110) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541877); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541878, 29502, 44111); //@t
				var_0_object->AddReply(541879, 29504, 44112); //@t
				return 0;
			}
			if(var_41_bool == 29502) {
				func_233(var_42_cvector, "Threat");
				var_0_object->SetMessage(528150); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528151, 29504, 29503); //@t
				var_0_object->AddReply(541047, 29504, 43146); //@t
				return 0;
			}
			if(var_41_bool == 29504) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528152); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528153, 29506, 29505); //@t
				var_0_object->AddReply(541048, 44115, 43148); //@t
				return 0;
			}
			if(var_41_bool == 44115) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541882, 27420, 44116); //@t
				var_0_object->AddReply(541883, 29506, 44117); //@t
				return 0;
			}
			if(var_41_bool == 29506) {
				func_233(var_42_cvector, "Threat");
				var_0_object->SetMessage(528154); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528155, 27420, 29507); //@t
				return 0;
			}
			if(var_41_bool == 27420) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526141); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528174, 29529, 29528); //@t
				var_0_object->AddReply(541049, 29529, 43150); //@t
				return 0;
			}
			if(var_41_bool == 29529) {
				func_233(var_42_cvector, "Isee");
				var_0_object->SetMessage(528175); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528176, 29531, 29530); //@t
				return 0;
			}
			if(var_41_bool == 29531) {
				func_233(var_42_cvector, "Isee");
				var_0_object->SetMessage(528177); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526144, 27424, 27423); //@t
				return 0;
			}
			if(var_41_bool == 27424) {
				func_233(var_42_cvector, "Threat");
				var_0_object->SetMessage(526145); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526146, 27426, 27425); //@t
				return 0;
			}
			if(var_41_bool == 27426) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526147); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528178, 29533, 29532); //@t
				var_0_object->AddReply(528182, 29537, 29536); //@t
				return 0;
			}
			if(var_41_bool == 29537) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528183); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528184, 29533, 29538); //@t
				return 0;
			}
			if(var_41_bool == 29533) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528179); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528180, 29535, 29534); //@t
				return 0;
			}
			if(var_41_bool == 29535) {
				func_233(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528181); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526148, -1, 27427); //@t
				bool var_726_bool;
				func_8210(var_1_object);
				if(var_726_bool != 0)
					var_0_object->AddReply(541050, -1, 43152); //@t
				return 0;
			}
			var_3_string = true;
			bool var_735_bool;
			func_7739(var_735_bool);
			if(var_735_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x100";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_7502();
			if(var_42_cvector == 27672) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_7821();
			}
			if(var_42_cvector == 27677) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_7821();
			}
			if(var_42_cvector == 27737) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_7833();
			}
			if(var_42_cvector == 44189) {
				object var_106_object; object var_107_object;
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_7833();
			}
			if(var_42_cvector == 44185) {
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_7833();
			}
			if(var_42_cvector == 41726) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_7949();
			}
			if(var_42_cvector == 41729) {
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_7955();
			}
			if(var_42_cvector == 41731) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_7967();
				object var_136_object = var_1_object;
				func_7741(var_0_object);
				object var_176_object = var_1_object;
				func_7897(var_0_object);
				object var_197_object = var_1_object;
				func_8187(var_0_object);
				object var_218_object; object var_219_object;
				var_218_object = var_1_object;
				var_219_object = var_0_object;
				func_7913();
			}
			if(var_42_cvector == 44195) {
				object var_224_object; object var_225_object;
				var_224_object = var_1_object;
				var_225_object = var_0_object;
				func_7967();
				object var_226_object = var_1_object;
				func_7741(var_0_object);
			}
			if(var_42_cvector == 40536) {
				object var_230_object; object var_231_object;
				var_230_object = var_1_object;
				var_231_object = var_0_object;
				func_7925();
			}
			if(var_42_cvector == 40541) {
				object var_236_object = var_1_object;
				func_8131(var_0_object);
				object var_241_object = var_1_object;
				func_8038(var_0_object);
				object var_249_object; object var_250_object;
				var_249_object = var_1_object;
				var_250_object = var_0_object;
				func_7907();
				object var_253_object = var_1_object;
				func_7755(var_0_object);
			}
			if(var_42_cvector == 40542) {
				object var_261_object = var_1_object;
				func_8131(var_0_object);
				object var_263_object = var_1_object;
				func_8038(var_0_object);
				object var_265_object; object var_266_object;
				var_265_object = var_1_object;
				var_266_object = var_0_object;
				func_7907();
				object var_267_object = var_1_object;
				func_7755(var_0_object);
			}
			if(var_42_cvector == 40539) {
				object var_271_object; object var_272_object;
				var_271_object = var_1_object;
				var_272_object = var_0_object;
				func_8152();
				object var_273_object = var_1_object;
				func_8038(var_0_object);
				object var_275_object; object var_276_object;
				var_275_object = var_1_object;
				var_276_object = var_0_object;
				func_7913();
				object var_277_object = var_1_object;
				func_7755(var_0_object);
			}
			if(var_42_cvector == 41732) {
				object var_281_object; object var_282_object;
				var_281_object = var_1_object;
				var_282_object = var_0_object;
				func_7961();
			}
			if(var_42_cvector == 41734) {
				object var_287_object = var_1_object;
				func_7748(var_0_object);
			}
			if(var_41_bool == 27671) {
				bool var_294_bool;
				func_8234(var_1_object);
				if(var_294_bool != 0) {
					object var_302_object; object var_303_object;
					var_302_object = var_1_object;
					var_303_object = var_0_object;
					func_7815();
					object var_306_object; object var_307_object;
					var_306_object = var_1_object;
					var_307_object = var_0_object;
					func_8107();
					func_1627(var_42_cvector, "Neutral");
					var_0_object->SetMessage(526396); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528207, 29565, 29564); //@t
					var_0_object->AddReply(528219, 29577, 29576); //@t
					return 0;
				}
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526399); //@t
				var_0_object->ClearReplies(); //@t
				bool var_336_bool;
				func_8246(var_1_object);
				if(var_336_bool != 0)
					var_0_object->AddReply(526400, 27676, 27675); //@t
				bool var_345_bool;
				func_8258(var_1_object);
				if(var_345_bool != 0)
					var_0_object->AddReply(526460, 29590, 27735); //@t
				bool var_354_bool = false;
				bool var_355_bool = false;
				bool var_356_bool;
				func_8388(var_356_bool, var_1_object);
				if(var_356_bool != 0) {
					bool var_371_bool;
					func_8398(var_371_bool, var_1_object);
					if(var_371_bool != 0)
						var_355_bool = true;
				}
				if(var_355_bool != 0) {
					bool var_385_bool;
					func_8472(var_1_object);
					if(var_385_bool != 0)
						var_354_bool = true;
				}
				if(var_354_bool != 0)
					var_0_object->AddReply(539774, 41727, 41726); //@t
				bool var_394_bool = false;
				bool var_395_bool = false;
				bool var_396_bool;
				func_8388(var_396_bool, var_1_object);
				if(var_396_bool != 0) {
					bool var_398_bool;
					func_8408(var_398_bool, var_1_object);
					if(var_398_bool != 0)
						var_395_bool = true;
				}
				if(var_395_bool != 0) {
					bool var_405_bool;
					func_8484(var_1_object);
					if(var_405_bool != 0)
						var_394_bool = true;
				}
				if(var_394_bool != 0)
					var_0_object->AddReply(539777, 41730, 41729); //@t
				bool var_414_bool = false;
				bool var_415_bool;
				func_8342(var_415_bool, var_1_object);
				if(var_415_bool != 0) {
					bool var_428_bool;
					func_8364(var_1_object);
					if(var_428_bool != 0)
						var_414_bool = true;
				}
				if(var_414_bool != 0)
					var_0_object->AddReply(538642, 40537, 40536); //@t
				bool var_437_bool = false;
				bool var_438_bool = false;
				bool var_439_bool;
				func_8388(var_439_bool, var_1_object);
				if(var_439_bool != 0) {
					bool var_441_bool;
					func_8418(var_441_bool, var_1_object);
					if(var_441_bool != 0)
						var_438_bool = true;
				}
				if(var_438_bool != 0) {
					bool var_448_bool;
					func_8496(var_1_object);
					if(var_448_bool != 0)
						var_437_bool = true;
				}
				if(var_437_bool != 0)
					var_0_object->AddReply(539780, 44208, 41732); //@t
				var_0_object->AddReply(526403, -1, 27678); //@t
				return 0;
			}
			if(var_41_bool == 44208) {
				func_1627(var_42_cvector, "Threat");
				var_0_object->SetMessage(541953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541954, 41733, 44209); //@t
				var_0_object->AddReply(541955, 44211, 44210); //@t
				return 0;
			}
			if(var_41_bool == 44211) {
				func_1627(var_42_cvector, "Threat");
				var_0_object->SetMessage(541956); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541957, 41733, 44212); //@t
				var_0_object->AddReply(541958, 41733, 44214); //@t
				return 0;
			}
			if(var_41_bool == 41733) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539781); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539782, -1, 41734); //@t
				return 0;
			}
			if(var_41_bool == 40537) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538643); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538644, 44196, 40538); //@t
				var_0_object->AddReply(538645, -1, 40539); //@t
				return 0;
			}
			if(var_41_bool == 44196) {
				func_1627(var_42_cvector, "Isee");
				var_0_object->SetMessage(541944); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541945, 44202, 44197); //@t
				var_0_object->AddReply(541946, 44199, 44198); //@t
				return 0;
			}
			if(var_41_bool == 44199) {
				func_1627(var_42_cvector, "Isee");
				var_0_object->SetMessage(541947); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541948, 44202, 44200); //@t
				var_0_object->AddReply(541949, 44202, 44201); //@t
				return 0;
			}
			if(var_41_bool == 44202) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541950); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541951, 40540, 44203); //@t
				var_0_object->AddReply(541952, 40540, 44204); //@t
				return 0;
			}
			if(var_41_bool == 40540) {
				func_1627(var_42_cvector, "Confusion");
				var_0_object->SetMessage(538646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538647, -1, 40541); //@t
				var_0_object->AddReply(538648, -1, 40542); //@t
				return 0;
			}
			if(var_41_bool == 41730) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539778); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539779, -1, 41731); //@t
				var_0_object->AddReply(541943, -1, 44195); //@t
				return 0;
			}
			if(var_41_bool == 41727) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539775); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541939, 44191, 44190); //@t
				var_0_object->AddReply(541941, 44191, 44192); //@t
				return 0;
			}
			if(var_41_bool == 44191) {
				func_1627(var_42_cvector, "Threat");
				var_0_object->SetMessage(541940); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539776, -1, 41728); //@t
				var_0_object->AddReply(541942, -1, 44194); //@t
				return 0;
			}
			if(var_41_bool == 29590) {
				func_1627(var_42_cvector, "Isee");
				var_0_object->SetMessage(528231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528232, 29592, 29591); //@t
				var_0_object->AddReply(541933, 44183, 44182); //@t
				return 0;
			}
			if(var_41_bool == 44183) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541934); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541935, 29592, 44184); //@t
				var_0_object->AddReply(541936, -1, 44185); //@t
				return 0;
			}
			if(var_41_bool == 29592) {
				func_1627(var_42_cvector, "Isee");
				var_0_object->SetMessage(528233); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528234, 27736, 29593); //@t
				var_0_object->AddReply(528235, 27736, 29594); //@t
				return 0;
			}
			if(var_41_bool == 27736) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526461); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528238, 29599, 29598); //@t
				var_0_object->AddReply(541937, 29597, 44187); //@t
				return 0;
			}
			if(var_41_bool == 29599) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528239); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528236, 29597, 29596); //@t
				return 0;
			}
			if(var_41_bool == 29597) {
				func_1627(var_42_cvector, "Confusion");
				var_0_object->SetMessage(528237); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526462, -1, 27737); //@t
				var_0_object->AddReply(541938, -1, 44189); //@t
				return 0;
			}
			if(var_41_bool == 27676) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526401); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528229, 29589, 29588); //@t
				var_0_object->AddReply(541932, 29589, 44180); //@t
				return 0;
			}
			if(var_41_bool == 29589) {
				func_1627(var_42_cvector, "Threat");
				var_0_object->SetMessage(528230); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526402, -1, 27677); //@t
				return 0;
			}
			if(var_41_bool == 29577) {
				func_1627(var_42_cvector, "Confusion");
				var_0_object->SetMessage(528220); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528221, 29579, 29578); //@t
				var_0_object->AddReply(541917, 44162, 44161); //@t
				return 0;
			}
			if(var_41_bool == 44162) {
				func_1627(var_42_cvector, "Confusion");
				var_0_object->SetMessage(541918); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541919, 29565, 44163); //@t
				return 0;
			}
			if(var_41_bool == 29579) {
				func_1627(var_42_cvector, "Confusion");
				var_0_object->SetMessage(528222); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528223, 29565, 29580); //@t
				return 0;
			}
			if(var_41_bool == 29565) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528209, 29567, 29566); //@t
				var_0_object->AddReply(541920, 44166, 44165); //@t
				return 0;
			}
			if(var_41_bool == 44166) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541921); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541922, 44170, 44167); //@t
				var_0_object->AddReply(541923, 29569, 44168); //@t
				return 0;
			}
			if(var_41_bool == 44170) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541925, 29569, 44171); //@t
				return 0;
			}
			if(var_41_bool == 29567) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528210); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528211, 29569, 29568); //@t
				return 0;
			}
			if(var_41_bool == 29569) {
				func_1627(var_42_cvector, "Isee");
				var_0_object->SetMessage(528212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528213, 29571, 29570); //@t
				var_0_object->AddReply(541926, 44177, 44173); //@t
				return 0;
			}
			if(var_41_bool == 44177) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541931, 29573, 44178); //@t
				return 0;
			}
			if(var_41_bool == 29571) {
				func_1627(var_42_cvector, "Confusion");
				var_0_object->SetMessage(528214); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528215, 29573, 29572); //@t
				return 0;
			}
			if(var_41_bool == 29573) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528216); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528224, 29583, 29582); //@t
				var_0_object->AddReply(541927, 44175, 44174); //@t
				return 0;
			}
			if(var_41_bool == 44175) {
				func_1627(var_42_cvector, "Threat");
				var_0_object->SetMessage(541928); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528217, 29575, 29574); //@t
				var_0_object->AddReply(541929, -1, 44176); //@t
				return 0;
			}
			if(var_41_bool == 29575) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528218); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528227, 29587, 29586); //@t
				return 0;
			}
			if(var_41_bool == 29587) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528228); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526397, -1, 27672); //@t
				var_0_object->AddReply(526398, -1, 27673); //@t
				return 0;
			}
			if(var_41_bool == 29583) {
				func_1627(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528225); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528226, 29575, 29584); //@t
				return 0;
			}
			var_3_string = true;
			bool var_767_bool;
			func_7739(var_767_bool);
			if(var_767_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x672";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_7502();
			if(var_42_cvector == 27742) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_7876();
			}
			if(var_42_cvector == 44229) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_7876();
			}
			if(var_42_cvector == 29606) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_7876();
			}
			if(var_42_cvector == 31171) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_7876();
			}
			if(var_42_cvector == 44232) {
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_7876();
			}
			if(var_42_cvector == 31197) {
				object var_100_object; object var_101_object;
				var_100_object = var_1_object;
				var_101_object = var_0_object;
				func_7888();
			}
			if(var_42_cvector == 44241) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_7888();
			}
			if(var_42_cvector == 40543) {
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_7931();
			}
			if(var_42_cvector == 40545) {
				object var_124_object = var_1_object;
				func_8131(var_0_object);
				object var_164_object = var_1_object;
				func_8049(var_0_object);
				object var_188_object; object var_189_object;
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_7907();
				object var_192_object = var_1_object;
				func_7755(var_0_object);
				object var_213_object = var_1_object;
				func_8165(var_0_object);
			}
			if(var_42_cvector == 40546) {
				object var_221_object = var_1_object;
				func_8131(var_0_object);
				object var_223_object = var_1_object;
				func_8049(var_0_object);
				object var_225_object; object var_226_object;
				var_225_object = var_1_object;
				var_226_object = var_0_object;
				func_7907();
				object var_227_object = var_1_object;
				func_7755(var_0_object);
				object var_229_object = var_1_object;
				func_8165(var_0_object);
			}
			if(var_42_cvector == 41735) {
				object var_233_object; object var_234_object;
				var_233_object = var_1_object;
				var_234_object = var_0_object;
				func_7972();
			}
			if(var_42_cvector == 41738) {
				object var_239_object; object var_240_object;
				var_239_object = var_1_object;
				var_240_object = var_0_object;
				func_7978();
			}
			if(var_42_cvector == 41740) {
				object var_245_object; object var_246_object;
				var_245_object = var_1_object;
				var_246_object = var_0_object;
				func_7967();
				object var_255_object = var_1_object;
				func_8038(var_0_object);
				object var_263_object; object var_264_object;
				var_263_object = var_1_object;
				var_264_object = var_0_object;
				func_7907();
				object var_265_object = var_1_object;
				func_8187(var_0_object);
			}
			if(var_42_cvector == 41741) {
				object var_273_object; object var_274_object;
				var_273_object = var_1_object;
				var_274_object = var_0_object;
				func_7984();
			}
			if(var_42_cvector == 41743) {
				object var_279_object = var_1_object;
				func_7748(var_0_object);
			}
			if(var_41_bool == 27739) {
				bool var_286_bool;
				func_8306(var_1_object);
				if(var_286_bool != 0) {
					object var_294_object; object var_295_object;
					var_294_object = var_1_object;
					var_295_object = var_0_object;
					func_7870();
					object var_298_object; object var_299_object;
					var_298_object = var_1_object;
					var_299_object = var_0_object;
					func_8113();
					func_3058(var_42_cvector, "Neutral");
					var_0_object->SetMessage(526473); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(541959, 44218, 44216); //@t
					var_0_object->AddReply(541960, 44218, 44217); //@t
					return 0;
				}
				func_3058(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526478); //@t
				var_0_object->ClearReplies(); //@t
				bool var_328_bool;
				func_8318(var_1_object);
				if(var_328_bool != 0)
					var_0_object->AddReply(529716, 31170, 31169); //@t
				bool var_337_bool;
				func_8330(var_1_object);
				if(var_337_bool != 0)
					var_0_object->AddReply(529721, 31178, 31175); //@t
				bool var_346_bool = false;
				bool var_347_bool;
				func_8342(var_347_bool, var_1_object);
				if(var_347_bool != 0) {
					bool var_365_bool;
					func_8376(var_1_object);
					if(var_365_bool != 0)
						var_346_bool = true;
				}
				if(var_346_bool != 0)
					var_0_object->AddReply(538649, 40544, 40543); //@t
				bool var_374_bool = false;
				bool var_375_bool = false;
				bool var_376_bool;
				func_8388(var_376_bool, var_1_object);
				if(var_376_bool != 0) {
					bool var_386_bool;
					func_8398(var_386_bool, var_1_object);
					if(var_386_bool != 0)
						var_375_bool = true;
				}
				if(var_375_bool != 0) {
					bool var_400_bool;
					func_8508(var_1_object);
					if(var_400_bool != 0)
						var_374_bool = true;
				}
				if(var_374_bool != 0)
					var_0_object->AddReply(539783, 41736, 41735); //@t
				bool var_409_bool = false;
				bool var_410_bool = false;
				bool var_411_bool;
				func_8388(var_411_bool, var_1_object);
				if(var_411_bool != 0) {
					bool var_413_bool;
					func_8520(var_1_object);
					if(var_413_bool != 0)
						var_410_bool = true;
				}
				if(var_410_bool != 0) {
					bool var_419_bool;
					func_8408(var_419_bool, var_1_object);
					if(var_419_bool != 0)
						var_409_bool = true;
				}
				if(var_409_bool != 0)
					var_0_object->AddReply(539786, 41739, 41738); //@t
				bool var_429_bool = false;
				bool var_430_bool = false;
				bool var_431_bool;
				func_8388(var_431_bool, var_1_object);
				if(var_431_bool != 0) {
					bool var_433_bool;
					func_8418(var_433_bool, var_1_object);
					if(var_433_bool != 0)
						var_430_bool = true;
				}
				if(var_430_bool != 0) {
					bool var_440_bool;
					func_8532(var_1_object);
					if(var_440_bool != 0)
						var_429_bool = true;
				}
				if(var_429_bool != 0)
					var_0_object->AddReply(539789, 41742, 41741); //@t
				var_0_object->AddReply(526479, -1, 27745); //@t
				var_0_object->AddReply(541970, -1, 44231); //@t
				return 0;
			}
			if(var_41_bool == 41742) {
				func_3058(var_42_cvector, "Isee");
				var_0_object->SetMessage(539790); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539791, -1, 41743); //@t
				return 0;
			}
			if(var_41_bool == 41739) {
				func_3058(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539787); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539788, -1, 41740); //@t
				return 0;
			}
			if(var_41_bool == 41736) {
				func_3058(var_42_cvector, "Threat");
				var_0_object->SetMessage(539784); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539785, -1, 41737); //@t
				return 0;
			}
			if(var_41_bool == 40544) {
				func_3058(var_42_cvector, "Isee");
				var_0_object->SetMessage(538650); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538651, -1, 40545); //@t
				var_0_object->AddReply(538652, -1, 40546); //@t
				return 0;
			}
			if(var_41_bool == 31178) {
				func_3058(var_42_cvector, "Neutral");
				var_0_object->SetMessage(529724); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529725, 31181, 31179); //@t
				var_0_object->AddReply(541972, 44234, 44233); //@t
				return 0;
			}
			if(var_41_bool == 44234) {
				func_3058(var_42_cvector, "Isee");
				var_0_object->SetMessage(541973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541974, 31180, 44235); //@t
				return 0;
			}
			if(var_41_bool == 31181) {
				func_3058(var_42_cvector, "Neutral");
				var_0_object->SetMessage(529727); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529728, 31180, 31182); //@t
				var_0_object->AddReply(529737, 31180, 31191); //@t
				return 0;
			}
			if(var_41_bool == 31180) {
				func_3058(var_42_cvector, "Isee");
				var_0_object->SetMessage(529726); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529729, 31184, 31183); //@t
				var_0_object->AddReply(541975, 44239, 44237); //@t
				return 0;
			}
			if(var_41_bool == 44239) {
				func_3058(var_42_cvector, "Confusion");
				var_0_object->SetMessage(541976); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541977, 31184, 44240); //@t
				var_0_object->AddReply(541978, -1, 44241); //@t
				return 0;
			}
			if(var_41_bool == 31184) {
				func_3058(var_42_cvector, "Isee");
				var_0_object->SetMessage(529730); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529731, 31186, 31185); //@t
				var_0_object->AddReply(541979, 44243, 44242); //@t
				return 0;
			}
			if(var_41_bool == 44243) {
				func_3058(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541980); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541981, 31186, 44244); //@t
				return 0;
			}
			if(var_41_bool == 31186) {
				func_3058(var_42_cvector, "Threat");
				var_0_object->SetMessage(529732); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529733, 31188, 31187); //@t
				var_0_object->AddReply(541982, 44247, 44246); //@t
				return 0;
			}
			if(var_41_bool == 44247) {
				func_3058(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541984, 31188, 44248); //@t
				return 0;
			}
			if(var_41_bool == 31188) {
				func_3058(var_42_cvector, "Threat");
				var_0_object->SetMessage(529734); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529735, 31190, 31189); //@t
				return 0;
			}
			if(var_41_bool == 31190) {
				func_3058(var_42_cvector, "Neutral");
				var_0_object->SetMessage(529736); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529738, 31194, 31193); //@t
				return 0;
			}
			if(var_41_bool == 31194) {
				func_3058(var_42_cvector, "Neutral");
				var_0_object->SetMessage(529739); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529740, 31196, 31195); //@t
				return 0;
			}
			if(var_41_bool == 31196) {
				func_3058(var_42_cvector, "Confusion");
				var_0_object->SetMessage(529741); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529742, -1, 31197); //@t
				return 0;
			}
			if(var_41_bool == 31170) {
				func_3058(var_42_cvector, "Isee");
				var_0_object->SetMessage(529717); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529722, 31177, 31176); //@t
				var_0_object->AddReply(541971, -1, 44232); //@t
				return 0;
			}
			if(var_41_bool == 31177) {
				func_3058(var_42_cvector, "Isee");
				var_0_object->SetMessage(529723); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529718, -1, 31171); //@t
				return 0;
			}
			if(var_41_bool == 44218) {
				func_3058(var_42_cvector, "Threat");
				var_0_object->SetMessage(541961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528240, 29601, 29600); //@t
				var_0_object->AddReply(541962, 44221, 44220); //@t
				return 0;
			}
			if(var_41_bool == 44221) {
				func_3058(var_42_cvector, "Confusion");
				var_0_object->SetMessage(541963); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541964, 29605, 44222); //@t
				var_0_object->AddReply(541965, 29603, 44223); //@t
				return 0;
			}
			if(var_41_bool == 29601) {
				func_3058(var_42_cvector, "Isee");
				var_0_object->SetMessage(528241); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528242, 29603, 29602); //@t
				return 0;
			}
			if(var_41_bool == 29603) {
				func_3058(var_42_cvector, "Isee");
				var_0_object->SetMessage(528243); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528244, 29605, 29604); //@t
				var_0_object->AddReply(528246, -1, 29606); //@t
				return 0;
			}
			if(var_41_bool == 29605) {
				func_3058(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528245); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528247, 29608, 29607); //@t
				var_0_object->AddReply(541966, 44227, 44226); //@t
				return 0;
			}
			if(var_41_bool == 44227) {
				func_3058(var_42_cvector, "Neutral");
				var_0_object->SetMessage(541967); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541968, 29610, 44228); //@t
				var_0_object->AddReply(541969, -1, 44229); //@t
				return 0;
			}
			if(var_41_bool == 29608) {
				func_3058(var_42_cvector, "Threat");
				var_0_object->SetMessage(528248); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526474, 27741, 27740); //@t
				var_0_object->AddReply(528249, 29610, 29609); //@t
				return 0;
			}
			if(var_41_bool == 29610) {
				func_3058(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528250); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528251, 27741, 29611); //@t
				return 0;
			}
			if(var_41_bool == 27741) {
				func_3058(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526475); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526476, -1, 27742); //@t
				var_0_object->AddReply(526477, -1, 27743); //@t
				return 0;
			}
			var_3_string = true;
			bool var_696_bool;
			func_7739(var_696_bool);
			if(var_696_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc09";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_7502();
			if(var_42_cvector == 28576) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_7849();
			}
			if(var_42_cvector == 28568) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_7849();
			}
			if(var_42_cvector == 28569) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_7849();
			}
			if(var_42_cvector == 28541) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_7861();
			}
			if(var_42_cvector == 28590) {
				object var_106_object; object var_107_object;
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_7861();
			}
			if(var_42_cvector == 41763) {
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_8014();
			}
			if(var_42_cvector == 41766) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_8020();
			}
			if(var_42_cvector == 41768) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_7967();
				object var_132_object = var_1_object;
				func_8060(var_0_object);
				object var_156_object; object var_157_object;
				var_156_object = var_1_object;
				var_157_object = var_0_object;
				func_7907();
				object var_160_object = var_1_object;
				func_8154(var_0_object);
				object var_181_object = var_1_object;
				func_8176(var_0_object);
			}
			if(var_42_cvector == 41769) {
				object var_189_object; object var_190_object;
				var_189_object = var_1_object;
				var_190_object = var_0_object;
				func_8026();
			}
			if(var_42_cvector == 41771) {
				object var_195_object = var_1_object;
				func_7748(var_0_object);
			}
			if(var_42_cvector == 41772) {
				object var_237_object; object var_238_object;
				var_237_object = var_1_object;
				var_238_object = var_0_object;
				func_8032();
			}
			if(var_42_cvector == 41776) {
				object var_243_object = var_1_object;
				func_8131(var_0_object);
				object var_248_object = var_1_object;
				func_8060(var_0_object);
				object var_250_object; object var_251_object;
				var_250_object = var_1_object;
				var_251_object = var_0_object;
				func_7907();
				object var_252_object = var_1_object;
				func_7755(var_0_object);
				object var_258_object = var_1_object;
				func_8176(var_0_object);
				object var_260_object = var_1_object;
				func_8165(var_0_object);
			}
			if(var_42_cvector == 41777) {
				object var_268_object = var_1_object;
				func_8131(var_0_object);
				object var_270_object = var_1_object;
				func_8060(var_0_object);
				object var_272_object; object var_273_object;
				var_272_object = var_1_object;
				var_273_object = var_0_object;
				func_7907();
				object var_274_object = var_1_object;
				func_8176(var_0_object);
				object var_276_object = var_1_object;
				func_7755(var_0_object);
			}
			if(var_42_cvector == 41778) {
				object var_280_object = var_1_object;
				func_8131(var_0_object);
				object var_282_object = var_1_object;
				func_8060(var_0_object);
				object var_284_object; object var_285_object;
				var_284_object = var_1_object;
				var_285_object = var_0_object;
				func_7907();
				object var_286_object = var_1_object;
				func_8165(var_0_object);
				object var_288_object = var_1_object;
				func_7755(var_0_object);
			}
			if(var_41_bool == 28481) {
				bool var_292_bool;
				func_8270(var_1_object);
				if(var_292_bool != 0) {
					object var_300_object; object var_301_object;
					var_300_object = var_1_object;
					var_301_object = var_0_object;
					func_7843();
					object var_304_object; object var_305_object;
					var_304_object = var_1_object;
					var_305_object = var_0_object;
					func_8119();
					func_4331(var_42_cvector, "Isee");
					var_0_object->SetMessage(527173); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527174, 28483, 28482); //@t
					var_0_object->AddReply(527255, 28483, 28565); //@t
					return 0;
				}
				func_4331(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527177); //@t
				var_0_object->ClearReplies(); //@t
				bool var_334_bool;
				func_8282(var_1_object);
				if(var_334_bool != 0)
					var_0_object->AddReply(527179, 28488, 28487); //@t
				bool var_343_bool;
				func_8294(var_1_object);
				if(var_343_bool != 0)
					var_0_object->AddReply(527225, 28534, 28533); //@t
				bool var_352_bool = false;
				bool var_353_bool = false;
				bool var_354_bool;
				func_8388(var_354_bool, var_1_object);
				if(var_354_bool != 0) {
					bool var_369_bool;
					func_8398(var_369_bool, var_1_object);
					if(var_369_bool != 0)
						var_353_bool = true;
				}
				if(var_353_bool != 0) {
					bool var_383_bool;
					func_8592(var_1_object);
					if(var_383_bool != 0)
						var_352_bool = true;
				}
				if(var_352_bool != 0)
					var_0_object->AddReply(539811, 41764, 41763); //@t
				bool var_392_bool = false;
				bool var_393_bool = false;
				bool var_394_bool;
				func_8428(var_394_bool, var_1_object);
				if(var_394_bool != 0) {
					bool var_404_bool;
					func_8408(var_404_bool, var_1_object);
					if(var_404_bool != 0)
						var_393_bool = true;
				}
				if(var_393_bool != 0) {
					bool var_411_bool;
					func_8604(var_1_object);
					if(var_411_bool != 0)
						var_392_bool = true;
				}
				if(var_392_bool != 0)
					var_0_object->AddReply(539814, 41767, 41766); //@t
				bool var_420_bool = false;
				bool var_421_bool = false;
				bool var_422_bool;
				func_8428(var_422_bool, var_1_object);
				if(var_422_bool != 0) {
					bool var_424_bool;
					func_8438(var_424_bool, var_1_object);
					if(var_424_bool != 0)
						var_421_bool = true;
				}
				if(var_421_bool != 0) {
					bool var_438_bool;
					func_8616(var_1_object);
					if(var_438_bool != 0)
						var_420_bool = true;
				}
				if(var_420_bool != 0)
					var_0_object->AddReply(539817, 41770, 41769); //@t
				bool var_447_bool = false;
				bool var_448_bool;
				func_8342(var_448_bool, var_1_object);
				if(var_448_bool != 0) {
					bool var_461_bool;
					func_8628(var_1_object);
					if(var_461_bool != 0)
						var_447_bool = true;
				}
				if(var_447_bool != 0)
					var_0_object->AddReply(539820, 41773, 41772); //@t
				var_0_object->AddReply(527182, -1, 28490); //@t
				var_0_object->AddReply(538653, -1, 40547); //@t
				return 0;
			}
			if(var_41_bool == 41773) {
				func_4331(var_42_cvector, "Isee");
				var_0_object->SetMessage(539821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539822, 41775, 41774); //@t
				var_0_object->AddReply(539826, -1, 41778); //@t
				return 0;
			}
			if(var_41_bool == 41775) {
				func_4331(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539824, -1, 41776); //@t
				var_0_object->AddReply(539825, -1, 41777); //@t
				return 0;
			}
			if(var_41_bool == 41770) {
				func_4331(var_42_cvector, "Confusion");
				var_0_object->SetMessage(539818); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539819, -1, 41771); //@t
				return 0;
			}
			if(var_41_bool == 41767) {
				func_4331(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539815); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539816, -1, 41768); //@t
				return 0;
			}
			if(var_41_bool == 41764) {
				func_4331(var_42_cvector, "Threat");
				var_0_object->SetMessage(539812); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539813, -1, 41765); //@t
				return 0;
			}
			if(var_41_bool == 28534) {
				func_4331(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527226); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527227, 28577, 28535); //@t
				return 0;
			}
			if(var_41_bool == 28577) {
				func_4331(var_42_cvector, "Confusion");
				var_0_object->SetMessage(527266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527267, 28579, 28578); //@t
				return 0;
			}
			if(var_41_bool == 28579) {
				func_4331(var_42_cvector, "Confusion");
				var_0_object->SetMessage(527268); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527269, 28581, 28580); //@t
				return 0;
			}
			if(var_41_bool == 28581) {
				func_4331(var_42_cvector, "Confusion");
				var_0_object->SetMessage(527270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527271, 28536, 28582); //@t
				var_0_object->AddReply(527283, 28536, 28595); //@t
				return 0;
			}
			if(var_41_bool == 28536) {
				func_4331(var_42_cvector, "Isee");
				var_0_object->SetMessage(527228); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527273, 28585, 28584); //@t
				return 0;
			}
			if(var_41_bool == 28585) {
				func_4331(var_42_cvector, "Isee");
				var_0_object->SetMessage(527274); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527280, 28592, 28591); //@t
				return 0;
			}
			if(var_41_bool == 28592) {
				func_4331(var_42_cvector, "Isee");
				var_0_object->SetMessage(527281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527277, 28589, 28588); //@t
				return 0;
			}
			if(var_41_bool == 28589) {
				func_4331(var_42_cvector, "Threat");
				var_0_object->SetMessage(527278); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527229, 28538, 28537); //@t
				return 0;
			}
			if(var_41_bool == 28538) {
				func_4331(var_42_cvector, "Threat");
				var_0_object->SetMessage(527230); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527231, 28540, 28539); //@t
				var_0_object->AddReply(527282, 28540, 28593); //@t
				return 0;
			}
			if(var_41_bool == 28540) {
				func_4331(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527232); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527233, -1, 28541); //@t
				var_0_object->AddReply(527279, -1, 28590); //@t
				return 0;
			}
			if(var_41_bool == 28488) {
				func_4331(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527181, 28567, 28489); //@t
				return 0;
			}
			if(var_41_bool == 28567) {
				func_4331(var_42_cvector, "Confusion");
				var_0_object->SetMessage(527256); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527257, -1, 28568); //@t
				var_0_object->AddReply(527258, -1, 28569); //@t
				return 0;
			}
			if(var_41_bool == 28483) {
				func_4331(var_42_cvector, "Isee");
				var_0_object->SetMessage(527175); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527176, 28547, 28484); //@t
				var_0_object->AddReply(527178, 28555, 28486); //@t
				return 0;
			}
			if(var_41_bool == 28555) {
				func_4331(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527248, 28549, 28556); //@t
				return 0;
			}
			if(var_41_bool == 28547) {
				func_4331(var_42_cvector, "Confusion");
				var_0_object->SetMessage(527239); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527240, 28549, 28548); //@t
				return 0;
			}
			if(var_41_bool == 28549) {
				func_4331(var_42_cvector, "Threat");
				var_0_object->SetMessage(527241); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527242, 28551, 28550); //@t
				return 0;
			}
			if(var_41_bool == 28551) {
				func_4331(var_42_cvector, "Threat");
				var_0_object->SetMessage(527243); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527244, 28553, 28552); //@t
				return 0;
			}
			if(var_41_bool == 28553) {
				func_4331(var_42_cvector, "Isee");
				var_0_object->SetMessage(527245); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527250, 28560, 28559); //@t
				return 0;
			}
			if(var_41_bool == 28560) {
				func_4331(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527251); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527246, 28558, 28554); //@t
				var_0_object->AddReply(527252, 28558, 28561); //@t
				return 0;
			}
			if(var_41_bool == 28558) {
				func_4331(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527249); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527253, 28570, 28563); //@t
				var_0_object->AddReply(527254, -1, 28564); //@t
				return 0;
			}
			if(var_41_bool == 28570) {
				func_4331(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527259); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527260, 28572, 28571); //@t
				return 0;
			}
			if(var_41_bool == 28572) {
				func_4331(var_42_cvector, "Isee");
				var_0_object->SetMessage(527261); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527262, 28575, 28573); //@t
				return 0;
			}
			if(var_41_bool == 28575) {
				func_4331(var_42_cvector, "Isee");
				var_0_object->SetMessage(527264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527265, -1, 28576); //@t
				return 0;
			}
			var_3_string = true;
			bool var_699_bool;
			func_7739(var_699_bool);
			if(var_699_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1102";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_7502();
			if(var_41_bool == 29509) {
				func_5438(var_42_cvector, "Threat");
				var_0_object->SetMessage(528157); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528158, 29511, 29510); //@t
				var_0_object->AddReply(528163, 29516, 29515); //@t
				return 0;
			}
			if(var_41_bool == 29516) {
				func_5438(var_42_cvector, "Threat");
				var_0_object->SetMessage(528164); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528165, 29518, 29517); //@t
				var_0_object->AddReply(541872, 29518, 44103); //@t
				return 0;
			}
			if(var_41_bool == 29511) {
				func_5438(var_42_cvector, "Isee");
				var_0_object->SetMessage(528159); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528160, 29513, 29512); //@t
				var_0_object->AddReply(528169, 29513, 29522); //@t
				return 0;
			}
			if(var_41_bool == 29513) {
				func_5438(var_42_cvector, "Isee");
				var_0_object->SetMessage(528161); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528162, 29518, 29514); //@t
				var_0_object->AddReply(541876, 29518, 44108); //@t
				return 0;
			}
			if(var_41_bool == 29518) {
				func_5438(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528166); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528167, -1, 29519); //@t
				var_0_object->AddReply(528168, 44105, 29521); //@t
				return 0;
			}
			if(var_41_bool == 44105) {
				func_5438(var_42_cvector, "Threat");
				var_0_object->SetMessage(541873); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541874, -1, 44106); //@t
				var_0_object->AddReply(541875, -1, 44107); //@t
				return 0;
			}
			var_3_string = true;
			bool var_121_bool;
			func_7739(var_121_bool);
			if(var_121_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1555";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_7502();
			if(var_42_cvector == 45221) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_8125();
			}
			if(var_42_cvector == 45225) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_8125();
			}
			if(var_41_bool == 45214) {
				func_5771(var_42_cvector, "Neutral");
				var_0_object->SetMessage(542794); //@t
				var_0_object->ClearReplies(); //@t
				bool var_75_bool;
				func_8652(var_1_object);
				if(var_75_bool != 0)
					var_0_object->AddReply(542798, 45222, 45221); //@t
				bool var_86_bool;
				func_8652(var_1_object);
				if(var_86_bool != 0)
					var_0_object->AddReply(542802, 45224, 45225); //@t
				var_0_object->AddReply(543009, -1, 45461); //@t
				return 0;
			}
			if(var_41_bool == 45222) {
				func_5771(var_42_cvector, "Neutral");
				var_0_object->SetMessage(542799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542800, 45224, 45223); //@t
				var_0_object->AddReply(542805, 45228, 45229); //@t
				return 0;
			}
			if(var_41_bool == 45224) {
				func_5771(var_42_cvector, "Isee");
				var_0_object->SetMessage(542801); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542803, 45228, 45227); //@t
				return 0;
			}
			if(var_41_bool == 45228) {
				func_5771(var_42_cvector, "Isee");
				var_0_object->SetMessage(542804); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542806, 45234, 45231); //@t
				var_0_object->AddReply(542807, 45233, 45232); //@t
				return 0;
			}
			if(var_41_bool == 45233) {
				func_5771(var_42_cvector, "Neutral");
				var_0_object->SetMessage(542808); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542811, 45237, 45236); //@t
				return 0;
			}
			if(var_41_bool == 45234) {
				func_5771(var_42_cvector, "Neutral");
				var_0_object->SetMessage(542809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542810, 45237, 45235); //@t
				return 0;
			}
			if(var_41_bool == 45237) {
				func_5771(var_42_cvector, "Threat");
				var_0_object->SetMessage(542812); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542813, 45240, 45239); //@t
				return 0;
			}
			if(var_41_bool == 45240) {
				func_5771(var_42_cvector, "Neutral");
				var_0_object->SetMessage(542814); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542815, 45243, 45241); //@t
				var_0_object->AddReply(542816, 45246, 45242); //@t
				return 0;
			}
			if(var_41_bool == 45246) {
				func_5771(var_42_cvector, "Threat");
				var_0_object->SetMessage(542820); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542821, -1, 45247); //@t
				var_0_object->AddReply(542822, -1, 45248); //@t
				return 0;
			}
			if(var_41_bool == 45243) {
				func_5771(var_42_cvector, "Neutral");
				var_0_object->SetMessage(542817); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542818, -1, 45244); //@t
				var_0_object->AddReply(542819, -1, 45245); //@t
				return 0;
			}
			var_3_string = true;
			bool var_172_bool;
			func_7739(var_172_bool);
			if(var_172_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x16a2";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_7502();
			if(var_42_cvector == 41746) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_7990();
			}
			if(var_42_cvector == 41749) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_7996();
			}
			if(var_42_cvector == 41751) {
				object var_59_object; object var_60_object;
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_7967();
				object var_84_object = var_1_object;
				func_8060(var_0_object);
				object var_108_object = var_1_object;
				func_8187(var_0_object);
				object var_129_object = var_1_object;
				func_8154(var_0_object);
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_7907();
			}
			if(var_42_cvector == 41752) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_8002();
			}
			if(var_42_cvector == 41754) {
				object var_147_object = var_1_object;
				func_7748(var_0_object);
			}
			if(var_42_cvector == 41755) {
				object var_189_object; object var_190_object;
				var_189_object = var_1_object;
				var_190_object = var_0_object;
				func_8008();
			}
			if(var_42_cvector == 41759) {
				object var_195_object = var_1_object;
				func_8131(var_0_object);
				object var_200_object = var_1_object;
				func_8060(var_0_object);
				object var_202_object; object var_203_object;
				var_202_object = var_1_object;
				var_203_object = var_0_object;
				func_7907();
				object var_204_object = var_1_object;
				func_7755(var_0_object);
			}
			if(var_42_cvector == 41760) {
				object var_212_object = var_1_object;
				func_8131(var_0_object);
				object var_214_object = var_1_object;
				func_8060(var_0_object);
				object var_216_object; object var_217_object;
				var_216_object = var_1_object;
				var_217_object = var_0_object;
				func_7907();
				object var_218_object = var_1_object;
				func_7755(var_0_object);
			}
			if(var_42_cvector == 41761) {
				object var_222_object = var_1_object;
				func_8131(var_0_object);
				object var_224_object = var_1_object;
				func_8060(var_0_object);
				object var_226_object; object var_227_object;
				var_226_object = var_1_object;
				var_227_object = var_0_object;
				func_7907();
				object var_228_object = var_1_object;
				func_7755(var_0_object);
			}
			if(var_41_bool == 41745) {
				func_6295(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539793); //@t
				var_0_object->ClearReplies(); //@t
				bool var_250_bool = false;
				bool var_251_bool = false;
				bool var_252_bool;
				func_8388(var_252_bool, var_1_object);
				if(var_252_bool != 0) {
					bool var_267_bool;
					func_8398(var_267_bool, var_1_object);
					if(var_267_bool != 0)
						var_251_bool = true;
				}
				if(var_251_bool != 0) {
					bool var_281_bool;
					func_8544(var_1_object);
					if(var_281_bool != 0)
						var_250_bool = true;
				}
				if(var_250_bool != 0)
					var_0_object->AddReply(539794, 41747, 41746); //@t
				bool var_292_bool = false;
				bool var_293_bool = false;
				bool var_294_bool;
				func_8388(var_294_bool, var_1_object);
				if(var_294_bool != 0) {
					bool var_296_bool;
					func_8556(var_1_object);
					if(var_296_bool != 0)
						var_293_bool = true;
				}
				if(var_293_bool != 0) {
					bool var_302_bool;
					func_8408(var_302_bool, var_1_object);
					if(var_302_bool != 0)
						var_292_bool = true;
				}
				if(var_292_bool != 0)
					var_0_object->AddReply(539797, 41750, 41749); //@t
				bool var_312_bool = false;
				bool var_313_bool = false;
				bool var_314_bool;
				func_8388(var_314_bool, var_1_object);
				if(var_314_bool != 0) {
					bool var_316_bool;
					func_8418(var_316_bool, var_1_object);
					if(var_316_bool != 0)
						var_313_bool = true;
				}
				if(var_313_bool != 0) {
					bool var_323_bool;
					func_8568(var_1_object);
					if(var_323_bool != 0)
						var_312_bool = true;
				}
				if(var_312_bool != 0)
					var_0_object->AddReply(539800, 41753, 41752); //@t
				bool var_332_bool = false;
				bool var_333_bool;
				func_8342(var_333_bool, var_1_object);
				if(var_333_bool != 0) {
					bool var_346_bool;
					func_8580(var_1_object);
					if(var_346_bool != 0)
						var_332_bool = true;
				}
				if(var_332_bool != 0)
					var_0_object->AddReply(539803, 41756, 41755); //@t
				var_0_object->AddReply(539810, -1, 41762); //@t
				var_0_object->AddReply(541106, -1, 43219); //@t
				return 0;
			}
			if(var_41_bool == 41756) {
				func_6295(var_42_cvector, "Confusion");
				var_0_object->SetMessage(539804); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539805, 41758, 41757); //@t
				var_0_object->AddReply(539809, -1, 41761); //@t
				return 0;
			}
			if(var_41_bool == 41758) {
				func_6295(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539806); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539807, -1, 41759); //@t
				var_0_object->AddReply(539808, -1, 41760); //@t
				return 0;
			}
			if(var_41_bool == 41753) {
				func_6295(var_42_cvector, "Isee");
				var_0_object->SetMessage(539801); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539802, -1, 41754); //@t
				return 0;
			}
			if(var_41_bool == 41750) {
				func_6295(var_42_cvector, "Isee");
				var_0_object->SetMessage(539798); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539799, -1, 41751); //@t
				return 0;
			}
			if(var_41_bool == 41747) {
				func_6295(var_42_cvector, "Threat");
				var_0_object->SetMessage(539795); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539796, -1, 41748); //@t
				return 0;
			}
			var_3_string = true;
			bool var_402_bool;
			func_7739(var_402_bool);
			if(var_402_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x18ae";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_7502();
			if(var_41_int == 42548) {
				func_6838(var_42_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_71_bool;
			func_7739(var_71_bool);
			if(var_71_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1acd";
	
	}

}


maintask task_16
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		func_6906(var_40_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, int var_41_int)
	{
		if(var_41_int == 10) {
			func_6971();
			bool var_45_bool = false;
			bool var_46_bool;
			func_7226(var_46_bool);
			if(var_46_bool != 0) {
				bool var_49_bool;
				func_6940(var_49_bool);
				if(var_49_bool != 0)
					var_45_bool = true;
			}
			if(var_45_bool != 0) {
				bool var_66_bool;
				func_6920(var_66_bool);
				if(var_66_bool != 0) {
					bool var_85_bool; object var_86_object;
					object var_87_object;
					func_7509(var_87_object);
					var_87_object = var_86_object;
					func_7376(var_85_bool, var_86_object);
				}
			} else {
				func_6935(var_41_int);
				func_6962();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		func_7153();
		func_6971();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		@StopGroup0();
		func_6971();
		func_7456("Neutral");
		func_6962();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, bool var_41_bool)
	{
		if(var_41_bool != 0)
			func_6962();
		else
			func_7456("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, object var_41_object)
	{
		bool var_43_bool;
		@IsOverrideActive(var_43_bool);
		if(!var_43_bool) { //@nz
			disable OnUse;
			func_7153();
			bool var_45_bool; object var_46_object;
			var_41_object = var_46_object;
			func_7217(var_45_bool, var_46_object);
			enable OnUse;
			object var_59_object;
			var_41_object = var_59_object;
			func_9063(var_59_object);
			func_7456("Neutral");
			func_6971();
			func_6962();
		}
	}

}


void func_0(object var_0_object, int var_378_int, object var_379_object)
{
	var_0_object = var_379_object;
	bool var_389_bool; object var_390_object;
	var_379_object = var_390_object;
	func_7231(var_389_bool, var_390_object, 70.0);
	if(!var_389_bool) { //@nz
		var_378_int = -2;
		return 8;
	}
	object var_385_object;
	@CreateDialog(var_385_object);
	int var_393_int;
	func_7733(var_393_int);
	var_385_object->SetNPCName(var_393_int);
	int var_394_int;
	func_7731(var_394_int);
	var_385_object->SetNPCDescription(var_394_int);
	string var_395_string;
	func_7735(var_395_string);
	var_385_object->SetPhoto(var_395_string);
	string var_396_string;
	func_7737(var_396_string);
	var_385_object->SetPhoto2(var_396_string);
	int var_397_int;
	func_8964(var_397_int);
	var_385_object->SetPlayerName(var_397_int);
	bool var_386_bool;
	@IsOverrideActive(var_386_bool);
	if(var_386_bool != 0) {
		var_378_int = -2;
		return 8;
	}
	@DoDialog(var_385_object);
	bool var_399_bool; object var_400_object;
	object var_401_object;
	func_7509(var_401_object);
	var_401_object = var_400_object;
	func_7318(var_399_bool, var_400_object);
	object var_402_object; object var_403_object;
	var_379_object = var_402_object;
	var_385_object = var_403_object;
	TaskCall(1);
	func_81(var_404_object, var_405_object, var_406_string, var_407_bool, var_402_object, var_403_object);
	TaskReturn();
	bool var_388_bool;
	var_385_object->IsDialogEnd(var_388_bool);
	
	for(;;) {
		var_549_bool = !var_388_bool; //@nz
		if(var_549_bool == 0) goto Label_70;
		@sync();
		var_385_object->IsDialogEnd(var_388_bool);
	}
	
Label_70:
	object var_550_object;
	var_379_object = var_550_object;
	func_7300();
	@StopDialog(var_385_object);
	var_385_object->GetReturnValue(-1);
	int var_387_int = var_378_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8705(bool var_1137_bool)
{
	bool var_1139_bool;
	func_9031(var_1139_bool);
	var_1139_bool = var_1137_bool;
}


// @pe
void func_7682(bool var_375_bool, int var_376_int)
{
	int var_377_int;
	func_7673(var_377_int);
	var_375_bool = var_377_int == var_376_int;
}


// @pe
void func_8198(bool var_409_bool)
{
	int var_411_int;
	func_7536(var_411_int, "k7q01");
	if(var_411_int == 0) {
		var_409_bool = true;
		return 0;
	}
	var_409_bool = false;
}


void func_8711(void)
{
	object var_424_object;
	@CreateDiaryEntry(var_424_object, 569, 0, 530583);
	bool var_428_bool; object var_429_object;
	var_424_object = var_429_object;
	func_8919(var_428_bool, var_429_object, -1);
}
EMIT "Stack[-1] = 0";


void func_7688(bool var_291_bool, int var_292_int)
{
	float var_296_float;
	@GetGameTime(var_296_float);
	if((1 + (var_296_float / 24)) != var_292_int)
		var_291_bool = false;
	int var_303_int;
	var_296_float = var_303_int;
	int var_298_int = var_303_int % 24;
	var_291_bool = var_298_int < 7;
}


void func_7178(bool var_160_bool, object var_161_object, string var_162_string, float var_163_float, float var_164_float, float var_165_float)
{
	object var_169_object;
	var_161_object = var_169_object;
	string var_170_string;
	var_162_string = var_170_string;
	bool var_168_bool;
	func_7166(var_168_bool, var_169_object, var_170_string);
	if(!var_168_bool) //@nz
		var_160_bool = false;
	float var_167_float;
	var_161_object->GetProperty(var_162_string, var_167_float);
	float var_178_float; float var_180_float; float var_181_float;
	var_164_float = var_180_float;
	var_165_float = var_181_float;
	func_7525(var_178_float, (var_167_float + var_163_float), var_180_float, var_181_float);
	var_161_object->SetProperty(var_162_string, var_178_float);
	var_160_bool = true;
}


// @pe
void func_8210(bool var_726_bool)
{
	int var_728_int;
	func_7536(var_728_int, "k7q01");
	if(var_728_int == 1)
		var_726_bool = true;
	var_726_bool = false;
}


// @pe
void func_4115(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1029_object, object var_1030_object)
{
	var_0_object = var_1030_object;
	var_1_object = var_1029_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1036_bool;
		func_8270(var_1_object);
		if(var_1036_bool != 0) {
			object var_1042_object; object var_1043_object;
			var_1042_object = var_1_object;
			var_1043_object = var_0_object;
			func_7843();
			object var_1046_object; object var_1047_object;
			var_1046_object = var_1_object;
			var_1047_object = var_0_object;
			func_8119();
			func_4331(var_1030_object, "Isee");
			var_0_object->SetMessage(527173); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(527174, 28483, 28482); //@t
			var_0_object->AddReply(527255, 28483, 28565); //@t
		} else {
					func_4331(var_1030_object, "Neutral");
					var_0_object->SetMessage(527177); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1075_bool;
					func_8282(var_1_object);
					if(var_1075_bool != 0)
						var_0_object->AddReply(527179, 28488, 28487); //@t
					bool var_1084_bool;
					func_8294(var_1_object);
					if(var_1084_bool != 0)
						var_0_object->AddReply(527225, 28534, 28533); //@t
					bool var_1093_bool = false;
					bool var_1094_bool = false;
					bool var_1095_bool;
					func_8388(var_1095_bool, var_1_object);
					if(var_1095_bool != 0) {
						bool var_1097_bool;
						func_8398(var_1097_bool, var_1_object);
						if(var_1097_bool != 0)
							var_1094_bool = true;
					}
					if(var_1094_bool != 0) {
						bool var_1099_bool;
						func_8592(var_1_object);
						if(var_1099_bool != 0)
							var_1093_bool = true;
					}
					if(var_1093_bool != 0)
						var_0_object->AddReply(539811, 41764, 41763); //@t
					bool var_1108_bool = false;
					bool var_1109_bool = false;
					bool var_1110_bool;
					func_8428(var_1110_bool, var_1_object);
					if(var_1110_bool != 0) {
						bool var_1120_bool;
						func_8408(var_1120_bool, var_1_object);
						if(var_1120_bool != 0)
							var_1109_bool = true;
					}
					if(var_1109_bool != 0) {
						bool var_1122_bool;
						func_8604(var_1_object);
						if(var_1122_bool != 0)
							var_1108_bool = true;
					}
					if(var_1108_bool != 0)
						var_0_object->AddReply(539814, 41767, 41766); //@t
					bool var_1131_bool = false;
					bool var_1132_bool = false;
					bool var_1133_bool;
					func_8428(var_1133_bool, var_1_object);
					if(var_1133_bool != 0) {
						bool var_1135_bool;
						func_8438(var_1135_bool, var_1_object);
						if(var_1135_bool != 0)
							var_1132_bool = true;
					}
					if(var_1132_bool != 0) {
						bool var_1149_bool;
						func_8616(var_1_object);
						if(var_1149_bool != 0)
							var_1131_bool = true;
					}
					if(var_1131_bool != 0)
						var_0_object->AddReply(539817, 41770, 41769); //@t
					bool var_1158_bool = false;
					bool var_1159_bool;
					func_8342(var_1159_bool, var_1_object);
					if(var_1159_bool != 0) {
						bool var_1161_bool;
						func_8628(var_1_object);
						if(var_1161_bool != 0)
							var_1158_bool = true;
					}
					if(var_1158_bool != 0)
						var_0_object->AddReply(539820, 41773, 41772); //@t
					var_0_object->AddReply(527182, -1, 28490); //@t
					var_0_object->AddReply(538653, -1, 40547); //@t
		}
	}
	for(;;) {
		bool var_1065_bool;
		func_7739(var_1065_bool);
		if(var_1065_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_7456(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_4330;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4330:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1017";


void func_8724(void)
{
	object var_52_object;
	@CreateDiaryEntry(var_52_object, 480, 1, 528047);
	bool var_56_bool; object var_57_object;
	var_52_object = var_57_object;
	func_8919(var_56_bool, var_57_object, -1);
}
EMIT "Stack[-1] = 0";


void func_7707(string var_65_string, int var_66_int)
{
	string var_68_string = "idle";
	if(var_66_int != 0)
		var_68_string += var_66_int;
	var_68_string = var_65_string;
}


// @pe
void func_8222(bool var_496_bool)
{
	int var_498_int;
	func_7536(var_498_int, "k7q01");
	if(var_498_int == 9)
		var_496_bool = true;
	var_496_bool = false;
}


void func_7200(object var_94_object, string var_95_string, int var_96_int)
{
	int var_98_int;
	var_94_object->GetProperty(var_95_string, var_98_int);
	var_94_object->SetProperty(var_95_string, (var_98_int + var_96_int));
}


void func_8737(void)
{
	object var_97_object;
	@CreateDiaryEntry(var_97_object, 491, 1, 528058);
	bool var_101_bool; object var_102_object;
	var_97_object = var_102_object;
	func_8919(var_101_bool, var_102_object, 480);
}
EMIT "Stack[-1] = 0";


void func_7714(int var_59_int)
{
	int var_62_int; bool var_63_bool;
	var_62_int = 0;
	
	for(;;) {
		string var_65_string; int var_66_int;
		var_62_int = var_66_int;
		func_7707(var_65_string, var_66_int);
		@HasAnimation(var_63_bool, "all", var_65_string);
		if(!var_63_bool) //@nz
			break;
		var_62_int += 1;
	}
	var_62_int = var_59_int;
}


void func_7207(bool var_49_bool, cvector var_50_cvector)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector = var_50_cvector - var_54_cvector;
	var_57_float = GetByIndex(var_55_cvector, 0);
	var_58_float = GetByIndex(var_55_cvector, 2);
	bool var_56_bool;
	@Rotate(var_57_float, var_58_float, var_56_bool);
	var_56_bool = var_49_bool;
}


// @pe
void func_8234(bool var_584_bool)
{
	int var_586_int;
	func_7536(var_586_int, "ook8Aglaja1");
	if(var_586_int == 0) {
		var_584_bool = true;
		return 0;
	}
	var_584_bool = false;
}


void func_6699(object var_0_object, int var_1178_int, object var_1179_object)
{
	var_0_object = var_1179_object;
	bool var_1189_bool; object var_1190_object;
	var_1179_object = var_1190_object;
	func_7231(var_1189_bool, var_1190_object, 70.0);
	if(!var_1189_bool) { //@nz
		var_1178_int = -2;
		return 8;
	}
	object var_1185_object;
	@CreateDialog(var_1185_object);
	int var_1193_int;
	func_7733(var_1193_int);
	var_1185_object->SetNPCName(var_1193_int);
	int var_1194_int;
	func_7731(var_1194_int);
	var_1185_object->SetNPCDescription(var_1194_int);
	string var_1195_string;
	func_7735(var_1195_string);
	var_1185_object->SetPhoto(var_1195_string);
	string var_1196_string;
	func_7737(var_1196_string);
	var_1185_object->SetPhoto2(var_1196_string);
	int var_1197_int;
	func_8964(var_1197_int);
	var_1185_object->SetPlayerName(var_1197_int);
	bool var_1186_bool;
	@IsOverrideActive(var_1186_bool);
	if(var_1186_bool != 0) {
		var_1178_int = -2;
		return 8;
	}
	@DoDialog(var_1185_object);
	bool var_1199_bool; object var_1200_object;
	object var_1201_object;
	func_7509(var_1201_object);
	var_1201_object = var_1200_object;
	func_7318(var_1199_bool, var_1200_object);
	object var_1202_object; object var_1203_object;
	var_1179_object = var_1202_object;
	var_1185_object = var_1203_object;
	TaskCall(15);
	func_6780(var_1204_object, var_1205_object, var_1206_string, var_1207_bool, var_1202_object, var_1203_object);
	TaskReturn();
	bool var_1188_bool;
	var_1185_object->IsDialogEnd(var_1188_bool);
	
	for(;;) {
		var_1232_bool = !var_1188_bool; //@nz
		if(var_1232_bool == 0) goto Label_6769;
		@sync();
		var_1185_object->IsDialogEnd(var_1188_bool);
	}
	
Label_6769:
	object var_1233_object;
	var_1179_object = var_1233_object;
	func_7300();
	@StopDialog(var_1185_object);
	var_1185_object->GetReturnValue(-1);
	int var_1187_int = var_1178_int;
}
EMIT "Stack[-4] = 0";


void func_8750(void)
{
	object var_75_object;
	@CreateDiaryEntry(var_75_object, 481, 1, 528048);
	bool var_79_bool; object var_80_object;
	var_75_object = var_80_object;
	func_8919(var_79_bool, var_80_object, 480);
}
EMIT "Stack[-1] = 0";


void func_7217(bool var_45_bool, object var_46_object)
{
	cvector var_48_cvector;
	var_46_object->GetPosition(var_48_cvector);
	bool var_49_bool; cvector var_50_cvector;
	var_48_cvector = var_50_cvector;
	func_7207(var_49_bool, var_50_cvector);
	var_49_bool = var_45_bool;
}


void func_7731(int var_124_int)
{
	var_124_int = 515527;
}


void func_7733(int var_123_int)
{
	var_123_int = 513334;
}


// @pe
void func_8246(bool var_623_bool)
{
	int var_625_int;
	func_7536(var_625_int, "k8q01");
	if(var_625_int == 0) {
		var_623_bool = true;
		return 0;
	}
	var_623_bool = false;
}


void func_7735(string var_125_string)
{
	var_125_string = "ui/NPC_Aglaja.png";
}


void func_7737(string var_126_string)
{
	var_126_string = "ui/NPC_Aglaja_b.png";
}


void func_7226(bool var_41_bool)
{
	bool var_43_bool;
	@IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
}


void func_7739(bool var_118_bool)
{
	var_118_bool = true;
}


void func_8763(void)
{
	object var_62_object;
	@CreateDiaryEntry(var_62_object, 756, 2, 539741);
	bool var_66_bool; object var_67_object;
	var_62_object = var_67_object;
	func_8919(var_66_bool, var_67_object, 751);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7741(object var_136_object)
{
	object var_139_object;
	var_136_object = var_139_object;
	bool var_138_bool;
	func_7604(var_138_bool, var_139_object, 0.05);
}


void func_7231(bool var_75_bool, object var_76_object, float var_77_float)
{
	cvector var_88_cvector; bool var_95_bool;
	var_76_object->GetPosition(var_88_cvector);
	float var_87_float;
	var_76_object->GetEyesHeight(var_87_float);
	var_96_float = GetByIndex(var_88_cvector, 1);
	SetByIndex(var_88_cvector, 1) = (var_96_float + var_87_float);
	cvector var_89_cvector;
	@GetPosition(var_89_cvector);
	@GetEyesHeight(var_87_float);
	var_97_float = GetByIndex(var_89_cvector, 1);
	SetByIndex(var_89_cvector, 1) = (var_97_float + var_87_float);
	cvector var_90_cvector = var_88_cvector - var_89_cvector;
	var_98_float = GetByIndex(var_90_cvector, 1);
	SetByIndex(var_90_cvector, 1) = (float)0;
	var_100_float = sqrt(var_90_cvector | var_90_cvector);
	var_90_cvector /= var_100_float;
	cvector var_91_cvector = -var_90_cvector;
	cvector var_102_cvector;
	func_7515(var_102_cvector, (var_91_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_92_cvector = ((var_90_cvector * var_77_float) + (var_102_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_94_bool;
	@IsOverrideActive(var_94_bool);
	if(var_94_bool != 0)
		var_75_bool = false;
	@StopWorld();
	@CameraTransit((var_89_cvector + var_92_cvector), var_91_cvector, true);
	var_116_float = GetByIndex(var_92_cvector, 0);
	var_117_float = GetByIndex(var_92_cvector, 2);
	@Rotate(var_116_float, var_117_float);
	bool var_118_bool;
	func_7739(var_118_bool);
	if(var_118_bool != 0) {
	} else {
		@HasAnimationTrack(var_95_bool, "head");
		if(var_95_bool == 0) goto Label_7294;
		@LookAsyncCamera("head");
	}
Label_7294:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_75_bool = true;
	
}


// @pe
void func_8258(bool var_632_bool)
{
	int var_634_int;
	func_7536(var_634_int, "k8q01");
	if(var_634_int == 7)
		var_632_bool = true;
	var_632_bool = false;
}


// @pe
void func_5698(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_330_object, object var_331_object)
{
	var_0_object = var_331_object;
	var_1_object = var_330_object;
	var_3_string = false;
	if(1 != 0) {
		func_5771(var_331_object, "Neutral");
		var_0_object->SetMessage(542794); //@t
		var_0_object->ClearReplies(); //@t
		bool var_346_bool;
		func_8652(var_1_object);
		if(var_346_bool != 0)
			var_0_object->AddReply(542798, 45222, 45221); //@t
		bool var_357_bool;
		func_8652(var_1_object);
		if(var_357_bool != 0)
			var_0_object->AddReply(542802, 45224, 45225); //@t
		var_0_object->AddReply(543009, -1, 45461); //@t
		goto Label_5741;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1646";
	}
Label_5741:
	bool var_365_bool;
	func_7739(var_365_bool);
	if(var_365_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7456(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_5770;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5770:
		return 0;

	}
	
}


// @pe
void func_7748(object var_147_object)
{
	object var_150_object;
	var_147_object = var_150_object;
	bool var_149_bool;
	func_7604(var_149_bool, var_150_object, -0.05);
}


void func_8776(void)
{
	object var_52_object;
	@CreateDiaryEntry(var_52_object, 416, 1, 526215);
	bool var_56_bool; object var_57_object;
	var_52_object = var_57_object;
	func_8919(var_56_bool, var_57_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7755(object var_204_object)
{
	@Trace("beta_pills 5 is given");
	object var_207_object;
	var_204_object = var_207_object;
	func_7591(var_207_object, "beta_pills", 5);
}


// @pe
void func_8270(bool var_1036_bool)
{
	int var_1038_int;
	func_7536(var_1038_int, "ook11Aglaja1");
	if(var_1038_int == 0) {
		var_1036_bool = true;
		return 0;
	}
	var_1036_bool = false;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_402_object, object var_403_object)
{
	var_0_object = var_403_object;
	var_1_object = var_402_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_409_bool;
		func_8198(var_1_object);
		if(var_409_bool != 0) {
			object var_415_object; object var_416_object;
			var_415_object = var_1_object;
			var_416_object = var_0_object;
			func_8071();
			object var_456_object; object var_457_object;
			var_456_object = var_1_object;
			var_457_object = var_0_object;
			func_8101();
			func_233(var_403_object, "Confusion");
			var_0_object->SetMessage(526139); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528171, 29526, 29525); //@t
			var_0_object->AddReply(528185, 29500, 29540); //@t
		} else {
					object var_483_object; object var_484_object;
					var_483_object = var_1_object;
					var_484_object = var_0_object;
					func_8101();
					func_233(var_403_object, "Neutral");
					var_0_object->SetMessage(526149); //@t
					var_0_object->ClearReplies(); //@t
					bool var_487_bool;
					func_8640(var_1_object);
					if(var_487_bool != 0)
						var_0_object->AddReply(541891, 44131, 44129); //@t
					bool var_496_bool;
					func_8222(var_1_object);
					if(var_496_bool != 0)
						var_0_object->AddReply(526208, 29542, 27489); //@t
					bool var_505_bool;
					func_8448(var_1_object);
					if(var_505_bool != 0)
						var_0_object->AddReply(528192, 29552, 29548); //@t
					bool var_514_bool;
					func_8460(var_1_object);
					if(var_514_bool != 0)
						var_0_object->AddReply(528193, 29562, 29549); //@t
					bool var_523_bool = false;
					bool var_524_bool;
					func_8342(var_524_bool, var_1_object);
					if(var_524_bool != 0) {
						bool var_537_bool;
						func_8352(var_1_object);
						if(var_537_bool != 0)
							var_523_bool = true;
					}
					if(var_523_bool != 0)
						var_0_object->AddReply(538631, 40523, 40522); //@t
					var_0_object->AddReply(526150, -1, 27429); //@t
		}
	}
	for(;;) {
		bool var_475_bool;
		func_7739(var_475_bool);
		if(var_475_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_7456(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_232;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_232:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_8789(void)
{
	object var_75_object;
	@CreateDiaryEntry(var_75_object, 417, 1, 526216);
	bool var_79_bool; object var_80_object;
	var_75_object = var_80_object;
	func_8919(var_79_bool, var_80_object, 416);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7766(void)
{
	@SetVariable("k7q01", 1);
	func_8776();
	func_8789();
	bool var_82_bool;
	func_7649(var_82_bool, "quest_k7_01", "place_danko");
}


// @pe
void func_8282(bool var_1075_bool)
{
	int var_1077_int;
	func_7536(var_1077_int, "k11q01");
	if(var_1077_int == 0) {
		var_1075_bool = true;
		return 0;
	}
	var_1075_bool = false;
}


// @pe
void func_1627(object var_2_object, string var_598_string)
{
	bool var_599_bool;
	func_7739(var_599_bool);
	if(!var_599_bool) //@nz
		return 0;
	if(var_598_string == var_2_object)
		return 0;
	string var_602_string; bool var_603_bool;
	var_598_string = var_602_string;
	if(var_598_string == "")
		var_603_bool = false;
	else
		var_603_bool = true;
	func_7472(var_602_string, var_603_bool);
	var_2_object = var_598_string;
	
}


void func_8802(void)
{
	object var_99_object;
	@CreateDiaryEntry(var_99_object, 428, 1, 526227);
	bool var_103_bool; object var_104_object;
	var_99_object = var_104_object;
	func_8919(var_103_bool, var_104_object, 416);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8294(bool var_1084_bool)
{
	int var_1086_int;
	func_7536(var_1086_int, "k11q01");
	if(var_1086_int == 7)
		var_1084_bool = true;
	var_1084_bool = false;
}


// @pe
void func_7783(void)
{
	func_8802();
	bool var_106_bool;
	func_7661(var_106_bool, "volonteers_klara", "disease", "alexandr");
	bool var_113_bool;
	func_7661(var_113_bool, "volonteers_klara", "disease", "katerina");
	bool var_117_bool;
	func_7649(var_117_bool, "quest_k7_01", "completed");
}


void func_8815(void)
{
	object var_165_object;
	@CreateDiaryEntry(var_165_object, 429, 1, 526228);
	bool var_169_bool; object var_170_object;
	var_165_object = var_170_object;
	func_8919(var_169_bool, var_170_object, 416);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8306(bool var_766_bool)
{
	int var_768_int;
	func_7536(var_768_int, "ook9Aglaja1");
	if(var_768_int == 0) {
		var_766_bool = true;
		return 0;
	}
	var_766_bool = false;
}


void func_8828(void)
{
	object var_52_object;
	@CreateDiaryEntry(var_52_object, 438, 1, 526463);
	bool var_56_bool; object var_57_object;
	var_52_object = var_57_object;
	func_8919(var_56_bool, var_57_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6780(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1202_object, object var_1203_object)
{
	var_0_object = var_1203_object;
	var_1_object = var_1202_object;
	var_3_string = false;
	if(1 != 0) {
		func_6838(var_1203_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_6808;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a80";
	}
Label_6808:
	bool var_1224_bool;
	func_7739(var_1224_bool);
	if(var_1224_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7456(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_6837;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_6837:
		return 0;

	}
	
}


// @pe
void func_7805(void)
{
	func_8815();
	bool var_172_bool;
	func_7649(var_172_bool, "quest_k7_01", "completed");
}


// @pe
void func_8318(bool var_805_bool)
{
	int var_807_int;
	func_7536(var_807_int, "k9q01");
	if(var_807_int == 0) {
		var_805_bool = true;
		return 0;
	}
	var_805_bool = false;
}


void func_7300(void)
{
	bool var_283_bool;
	@CameraSwitchToNormal(true);
	bool var_285_bool;
	func_7739(var_285_bool);
	if(var_285_bool != 0) {
	} else {
		@HasAnimationTrack(var_283_bool, "head");
		if(var_283_bool == 0) goto Label_7317;
		@UnlookAsync("head");
	}
Label_7317:
	
}


// @pe
void func_7815(void)
{
	@SetVariable("ook8Aglaja1", 1);
}


void func_8841(void)
{
	object var_75_object;
	@CreateDiaryEntry(var_75_object, 439, 1, 526464);
	bool var_79_bool; object var_80_object;
	var_75_object = var_80_object;
	func_8919(var_79_bool, var_80_object, 438);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8330(bool var_814_bool)
{
	int var_816_int;
	func_7536(var_816_int, "k9q01");
	if(var_816_int == 7)
		var_814_bool = true;
	var_814_bool = false;
}


// @pe
void func_5771(object var_2_object, string var_337_string)
{
	bool var_338_bool;
	func_7739(var_338_bool);
	if(!var_338_bool) //@nz
		return 0;
	if(var_337_string == var_2_object)
		return 0;
	string var_341_string; bool var_342_bool;
	var_337_string = var_341_string;
	if(var_337_string == "")
		var_342_bool = false;
	else
		var_342_bool = true;
	func_7472(var_341_string, var_342_bool);
	var_2_object = var_337_string;
	
}


// @pe
void func_7821(void)
{
	@SetVariable("k8q01", 1);
	func_8828();
	func_8841();
}


void func_7318(bool var_136_bool, object var_137_object)
{
	int var_143_int; int var_144_int;
	@GetVariable("voice_common", var_143_int);
	if(var_143_int != 0) {
		bool var_147_bool; object var_148_object;
		var_137_object = var_148_object;
		func_7376(var_147_bool, var_148_object);
		if(!var_147_bool) { //@nz
			bool var_178_bool; object var_179_object;
			var_137_object = var_179_object;
			func_7413(var_178_bool, var_179_object);
			if(!var_178_bool) { //@nz
				var_136_bool = false;
				return 4;
			}
		}
		@irand(var_144_int, 2);
		if(var_144_int != 0)
			@SetVariable("voice_common", ((var_143_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_223_bool; object var_224_object;
		var_137_object = var_224_object;
		func_7413(var_223_bool, var_224_object);
		if(!var_223_bool) { //@nz
			bool var_226_bool; object var_227_object;
			var_137_object = var_227_object;
			func_7376(var_226_bool, var_227_object);
			if(!var_226_bool) { //@nz
				var_136_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_7374;
	
Label_7374:
	var_136_bool = true;
	
}


// @pe
void func_8342(bool var_524_bool, object var_525_object)
{
	object var_527_object;
	var_525_object = var_527_object;
	func_8664(var_527_object);
	bool var_526_bool;
	if(var_526_bool != 0) {
		var_524_bool = true;
		return 0;
	}
	var_524_bool = false;
}


// @pe
void func_6295(object var_2_object, string var_921_string)
{
	bool var_922_bool;
	func_7739(var_922_bool);
	if(!var_922_bool) //@nz
		return 0;
	if(var_921_string == var_2_object)
		return 0;
	string var_925_string; bool var_926_bool;
	var_921_string = var_925_string;
	if(var_921_string == "")
		var_926_bool = false;
	else
		var_926_bool = true;
	func_7472(var_925_string, var_926_bool);
	var_2_object = var_921_string;
	
}


// @pe
void func_7833(void)
{
	func_8854();
	bool var_98_bool;
	func_7649(var_98_bool, "quest_k8_01", "completed");
}


void func_8854(void)
{
	object var_91_object;
	@CreateDiaryEntry(var_91_object, 446, 1, 526471);
	bool var_95_bool; object var_96_object;
	var_91_object = var_96_object;
	func_8919(var_95_bool, var_96_object, 438);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8352(bool var_537_bool)
{
	int var_539_int;
	func_7536(var_539_int, "ook7Aglaja1");
	if(var_539_int == 0) {
		var_537_bool = true;
		return 0;
	}
	var_537_bool = false;
}


// @pe
void func_7843(void)
{
	@SetVariable("ook11Aglaja1", 1);
}


void func_8867(void)
{
	object var_52_object;
	@CreateDiaryEntry(var_52_object, 517, 1, 529809);
	bool var_56_bool; object var_57_object;
	var_52_object = var_57_object;
	func_8919(var_56_bool, var_57_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7849(void)
{
	@SetVariable("k11q01", 1);
	func_8724();
	func_8750();
}


// @pe
void func_8364(bool var_699_bool)
{
	int var_701_int;
	func_7536(var_701_int, "ook8Aglaja2");
	if(var_701_int == 0) {
		var_699_bool = true;
		return 0;
	}
	var_699_bool = false;
}


void func_8880(void)
{
	object var_105_object;
	@CreateDiaryEntry(var_105_object, 525, 1, 529817);
	bool var_109_bool; object var_110_object;
	var_105_object = var_110_object;
	func_8919(var_109_bool, var_110_object, 517);
}
EMIT "Stack[-1] = 0";


void func_5299(object var_0_object, int var_64_int, object var_65_object)
{
	var_0_object = var_65_object;
	bool var_75_bool; object var_76_object;
	var_65_object = var_76_object;
	func_7231(var_75_bool, var_76_object, 70.0);
	if(!var_75_bool) { //@nz
		var_64_int = -2;
		return 8;
	}
	object var_71_object;
	@CreateDialog(var_71_object);
	int var_123_int;
	func_7733(var_123_int);
	var_71_object->SetNPCName(var_123_int);
	int var_124_int;
	func_7731(var_124_int);
	var_71_object->SetNPCDescription(var_124_int);
	string var_125_string;
	func_7735(var_125_string);
	var_71_object->SetPhoto(var_125_string);
	string var_126_string;
	func_7737(var_126_string);
	var_71_object->SetPhoto2(var_126_string);
	int var_127_int;
	func_8964(var_127_int);
	var_71_object->SetPlayerName(var_127_int);
	bool var_72_bool;
	@IsOverrideActive(var_72_bool);
	if(var_72_bool != 0) {
		var_64_int = -2;
		return 8;
	}
	@DoDialog(var_71_object);
	bool var_136_bool; object var_137_object;
	object var_138_object;
	func_7509(var_138_object);
	var_138_object = var_137_object;
	func_7318(var_136_bool, var_137_object);
	object var_231_object; object var_232_object;
	var_65_object = var_231_object;
	var_71_object = var_232_object;
	TaskCall(9);
	func_5380(var_233_object, var_234_object, var_235_string, var_236_bool, var_231_object, var_232_object);
	TaskReturn();
	bool var_74_bool;
	var_71_object->IsDialogEnd(var_74_bool);
	
	for(;;) {
		var_280_bool = !var_74_bool; //@nz
		if(var_280_bool == 0) goto Label_5369;
		@sync();
		var_71_object->IsDialogEnd(var_74_bool);
	}
	
Label_5369:
	object var_281_object;
	var_65_object = var_281_object;
	func_7300();
	@StopDialog(var_71_object);
	var_71_object->GetReturnValue(-1);
	int var_73_int = var_64_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7861(void)
{
	@SetVariable("k11q01", 8);
	func_8737();
}


// @pe
void func_6838(object var_2_object, string var_1209_string)
{
	bool var_1210_bool;
	func_7739(var_1210_bool);
	if(!var_1210_bool) //@nz
		return 0;
	if(var_1209_string == var_2_object)
		return 0;
	string var_1213_string; bool var_1214_bool;
	var_1209_string = var_1213_string;
	if(var_1209_string == "")
		var_1214_bool = false;
	else
		var_1214_bool = true;
	func_7472(var_1213_string, var_1214_bool);
	var_2_object = var_1209_string;
	
}


// @pe
void func_8376(bool var_826_bool)
{
	int var_828_int;
	func_7536(var_828_int, "ook9Aglaja2");
	if(var_828_int == 0) {
		var_826_bool = true;
		return 0;
	}
	var_826_bool = false;
}


void func_8893(void)
{
	object var_75_object;
	@CreateDiaryEntry(var_75_object, 518, 1, 529810);
	bool var_79_bool; object var_80_object;
	var_75_object = var_80_object;
	func_8919(var_79_bool, var_80_object, 517);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7870(void)
{
	@SetVariable("ook9Aglaja1", 1);
}


// @pe
void func_8388(bool var_643_bool, object var_644_object)
{
	object var_646_object;
	var_644_object = var_646_object;
	func_8675(var_646_object);
	bool var_645_bool;
	if(var_645_bool != 0) {
		var_643_bool = true;
		return 0;
	}
	var_643_bool = false;
}


// @pe
void func_7876(void)
{
	@SetVariable("k9q01", 1);
	func_8867();
	func_8893();
}


void func_2761(object var_0_object, int var_735_int, object var_736_object)
{
	var_0_object = var_736_object;
	bool var_746_bool; object var_747_object;
	var_736_object = var_747_object;
	func_7231(var_746_bool, var_747_object, 70.0);
	if(!var_746_bool) { //@nz
		var_735_int = -2;
		return 8;
	}
	object var_742_object;
	@CreateDialog(var_742_object);
	int var_750_int;
	func_7733(var_750_int);
	var_742_object->SetNPCName(var_750_int);
	int var_751_int;
	func_7731(var_751_int);
	var_742_object->SetNPCDescription(var_751_int);
	string var_752_string;
	func_7735(var_752_string);
	var_742_object->SetPhoto(var_752_string);
	string var_753_string;
	func_7737(var_753_string);
	var_742_object->SetPhoto2(var_753_string);
	int var_754_int;
	func_8964(var_754_int);
	var_742_object->SetPlayerName(var_754_int);
	bool var_743_bool;
	@IsOverrideActive(var_743_bool);
	if(var_743_bool != 0) {
		var_735_int = -2;
		return 8;
	}
	@DoDialog(var_742_object);
	bool var_756_bool; object var_757_object;
	object var_758_object;
	func_7509(var_758_object);
	var_758_object = var_757_object;
	func_7318(var_756_bool, var_757_object);
	object var_759_object; object var_760_object;
	var_736_object = var_759_object;
	var_742_object = var_760_object;
	TaskCall(5);
	func_2842(var_761_object, var_762_object, var_763_string, var_764_bool, var_759_object, var_760_object);
	TaskReturn();
	bool var_745_bool;
	var_742_object->IsDialogEnd(var_745_bool);
	
	for(;;) {
		var_886_bool = !var_745_bool; //@nz
		if(var_886_bool == 0) goto Label_2831;
		@sync();
		var_742_object->IsDialogEnd(var_745_bool);
	}
	
Label_2831:
	object var_887_object;
	var_736_object = var_887_object;
	func_7300();
	@StopDialog(var_742_object);
	var_742_object->GetReturnValue(-1);
	int var_744_int = var_735_int;
}
EMIT "Stack[-4] = 0";


void func_8906(object var_437_object)
{
	object var_439_object;
	@GetDiaryRoot(var_439_object);
	if(!var_439_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_437_object = false;
	}
	var_439_object = var_437_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_8398(bool var_653_bool, object var_654_object)
{
	object var_656_object;
	var_654_object = var_656_object;
	func_8681(var_656_object);
	bool var_655_bool;
	if(var_655_bool != 0) {
		var_653_bool = true;
		return 0;
	}
	var_653_bool = false;
}


// @pe
void func_7888(void)
{
	@SetVariable("k9q01", 8);
	func_8880();
}


void func_7376(bool var_147_bool, object var_148_object)
{
	string var_154_string; bool var_156_bool; int var_157_int; string var_158_string;
	var_154_string = "c";
	int var_155_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_148_object->HasProperty((var_154_string + (var_155_int + 1)), var_156_bool);
			if(!var_156_bool) { //@nz
			} else {
				var_155_int += 1;
			}
		}
		if(!var_155_int) { //@nz
			var_147_bool = false;
			return 10;
		}
		var_157_int = 0;
		if(var_155_int > 1)
			@irand(var_157_int, var_155_int);
		var_148_object->GetProperty((var_154_string + (var_157_int + 1)), var_158_string);
		bool var_170_bool; string var_171_string;
		var_158_string = var_171_string;
		func_7487(var_170_bool, var_171_string);
		var_170_bool = var_147_bool;
		return 10;

	}
}


void func_8919(bool var_428_bool, object var_429_object, int var_430_int)
{
	object var_437_object;
	func_8906(var_437_object);
	object var_434_object;
	var_437_object = var_434_object;
	object var_435_object;
	var_434_object->Find(var_430_int, var_435_object);
	if(!var_435_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_430_int);
		var_428_bool = false;
	}
	var_435_object->AddChild(var_429_object);
	@SendWorldWndMessage(7);
	int var_436_int;
	var_429_object->GetCategory(var_436_int);
	@SetDiarySection(var_436_int);
	var_428_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_8408(bool var_680_bool, object var_681_object)
{
	object var_683_object;
	var_681_object = var_683_object;
	func_8687(var_683_object);
	bool var_682_bool;
	if(var_682_bool != 0) {
		var_680_bool = true;
		return 0;
	}
	var_680_bool = false;
}


// @pe
void func_7897(object var_176_object)
{
	@Trace("money1000 is given");
	object var_179_object;
	var_176_object = var_179_object;
	func_7553(var_179_object, 1000);
}


// @pe
void func_8418(bool var_712_bool, object var_713_object)
{
	object var_715_object;
	var_713_object = var_715_object;
	func_8693(var_715_object);
	bool var_714_bool;
	if(var_714_bool != 0) {
		var_712_bool = true;
		return 0;
	}
	var_712_bool = false;
}


// @pe
void func_7907(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_8187(object var_108_object)
{
	@Trace("monomicin is given");
	object var_111_object;
	var_108_object = var_111_object;
	func_7591(var_111_object, "monomicin", 1);
}


// @pe
void func_233(object var_2_object, string var_460_string)
{
	bool var_461_bool;
	func_7739(var_461_bool);
	if(!var_461_bool) //@nz
		return 0;
	if(var_460_string == var_2_object)
		return 0;
	string var_464_string; bool var_465_bool;
	var_460_string = var_464_string;
	if(var_460_string == "")
		var_465_bool = false;
	else
		var_465_bool = true;
	func_7472(var_464_string, var_465_bool);
	var_2_object = var_460_string;
	
}


// @pe
void func_7913(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_4331(object var_2_object, string var_1050_string)
{
	bool var_1051_bool;
	func_7739(var_1051_bool);
	if(!var_1051_bool) //@nz
		return 0;
	if(var_1050_string == var_2_object)
		return 0;
	string var_1054_string; bool var_1055_bool;
	var_1050_string = var_1054_string;
	if(var_1050_string == "")
		var_1055_bool = false;
	else
		var_1055_bool = true;
	func_7472(var_1054_string, var_1055_bool);
	var_2_object = var_1050_string;
	
}


// @pe
void func_8428(bool var_1110_bool, object var_1111_object)
{
	object var_1113_object;
	var_1111_object = var_1113_object;
	func_8699(var_1113_object);
	bool var_1112_bool;
	if(var_1112_bool != 0) {
		var_1110_bool = true;
		return 0;
	}
	var_1110_bool = false;
}


// @pe
void func_7919(void)
{
	@SetVariable("ook7Aglaja1", 1);
}


void func_8947(bool var_446_bool, int var_447_int)
{
	object var_452_object;
	func_8906(var_452_object);
	object var_450_object;
	var_452_object = var_450_object;
	object var_451_object;
	var_450_object->Find(var_447_int, var_451_object);
	if(!var_451_object) //@nz
		var_446_bool = false;
	var_451_object->Remove();
	var_446_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_7925(void)
{
	@SetVariable("ook8Aglaja2", 1);
}


// @pe
void func_8438(bool var_1135_bool, object var_1136_object)
{
	object var_1138_object;
	var_1136_object = var_1138_object;
	func_8705(var_1138_object);
	bool var_1137_bool;
	if(var_1137_bool != 0) {
		var_1135_bool = true;
		return 0;
	}
	var_1135_bool = false;
}


void func_7413(bool var_178_bool, object var_179_object)
{
	bool var_187_bool; int var_188_int; string var_189_string;
	int var_191_int;
	func_7673(var_191_int);
	string var_185_string = ("d" + var_191_int) + "m";
	int var_186_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_179_object->HasProperty((var_185_string + (var_186_int + 1)), var_187_bool);
			if(!var_187_bool) { //@nz
			} else {
				var_186_int += 1;
			}
		}
		if(!var_186_int) { //@nz
			var_178_bool = false;
			return 10;
		}
		var_188_int = 0;
		if(var_186_int > 1)
			@irand(var_188_int, var_186_int);
		var_179_object->GetProperty((var_185_string + (var_188_int + 1)), var_189_string);
		bool var_210_bool; string var_211_string;
		var_189_string = var_211_string;
		func_7487(var_210_bool, var_211_string);
		var_210_bool = var_178_bool;
		return 10;

	}
}


void func_6906(object var_0_object)
{
	bool var_41_bool;
	func_7226(var_41_bool);
	if(!var_41_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_7082();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_7931(void)
{
	@SetVariable("ook9Aglaja2", 1);
}


// @pe
void func_8448(bool var_505_bool)
{
	int var_507_int;
	func_7536(var_507_int, "ook7Aglaja2");
	if(var_507_int == 0) {
		var_505_bool = true;
		return 0;
	}
	var_505_bool = false;
}


// @pe
void func_7937(void)
{
	@SetVariable("ook7Aglaja2", 1);
}


void func_8964(int var_127_int)
{
	int var_129_int;
	@GetVariable("branch", var_129_int);
	if(var_129_int == 0) {
		var_127_int = 1;
		return 2;
	EMIT "GOTO 0x2313";
	}
	if(var_129_int == 1) {
		var_127_int = 2;
		return 2;
	}
	var_127_int = 3;
}


// @pe
void func_5380(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_231_object, object var_232_object)
{
	var_0_object = var_232_object;
	var_1_object = var_231_object;
	var_3_string = false;
	if(1 != 0) {
		func_5438(var_232_object, "Threat");
		var_0_object->SetMessage(528157); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(528158, 29511, 29510); //@t
		var_0_object->AddReply(528163, 29516, 29515); //@t
		goto Label_5408;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1508";
	}
Label_5408:
	bool var_262_bool;
	func_7739(var_262_bool);
	if(var_262_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7456(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_5437;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5437:
		return 0;

	}
	
}


// @pe
void func_7943(void)
{
	@SetVariable("ook7Aglaja3", 1);
}


void func_6920(bool var_66_bool)
{
	object var_68_object;
	@FindActor(var_68_object, "player");
	if(!var_68_object) //@nz
		var_66_bool = false;
	bool var_71_bool; object var_72_object;
	var_68_object = var_72_object;
	func_7217(var_71_bool, var_72_object);
	var_71_bool = var_66_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_8460(bool var_514_bool)
{
	int var_516_int;
	func_7536(var_516_int, "ook7Aglaja3");
	if(var_516_int == 0) {
		var_514_bool = true;
		return 0;
	}
	var_514_bool = false;
}


// @pe
void func_7949(void)
{
	@SetVariable("ook8Aglaja3", 1);
}


// @pe
void func_7955(void)
{
	@SetVariable("ook8Aglaja4", 1);
}


void func_8981(bool var_528_bool, int var_529_int)
{
	int var_533_int;
	@GetVariable(("K2System" + var_529_int), var_533_int);
	var_528_bool = var_533_int != 0;
}


void func_6935(object var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0);
	var_119_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_118_float, var_119_float);
}


// @pe
void func_8472(bool var_667_bool)
{
	int var_669_int;
	func_7536(var_669_int, "ook8Aglaja3");
	if(var_669_int == 0) {
		var_667_bool = true;
		return 0;
	}
	var_667_bool = false;
}


// @pe
void func_7961(void)
{
	@SetVariable("ook8Aglaja5", 1);
}


// @pe
void func_2842(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_759_object, object var_760_object)
{
	var_0_object = var_760_object;
	var_1_object = var_759_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_766_bool;
		func_8306(var_1_object);
		if(var_766_bool != 0) {
			object var_772_object; object var_773_object;
			var_772_object = var_1_object;
			var_773_object = var_0_object;
			func_7870();
			object var_776_object; object var_777_object;
			var_776_object = var_1_object;
			var_777_object = var_0_object;
			func_8113();
			func_3058(var_760_object, "Neutral");
			var_0_object->SetMessage(526473); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(541959, 44218, 44216); //@t
			var_0_object->AddReply(541960, 44218, 44217); //@t
		} else {
					func_3058(var_760_object, "Neutral");
					var_0_object->SetMessage(526478); //@t
					var_0_object->ClearReplies(); //@t
					bool var_805_bool;
					func_8318(var_1_object);
					if(var_805_bool != 0)
						var_0_object->AddReply(529716, 31170, 31169); //@t
					bool var_814_bool;
					func_8330(var_1_object);
					if(var_814_bool != 0)
						var_0_object->AddReply(529721, 31178, 31175); //@t
					bool var_823_bool = false;
					bool var_824_bool;
					func_8342(var_824_bool, var_1_object);
					if(var_824_bool != 0) {
						bool var_826_bool;
						func_8376(var_1_object);
						if(var_826_bool != 0)
							var_823_bool = true;
					}
					if(var_823_bool != 0)
						var_0_object->AddReply(538649, 40544, 40543); //@t
					bool var_835_bool = false;
					bool var_836_bool = false;
					bool var_837_bool;
					func_8388(var_837_bool, var_1_object);
					if(var_837_bool != 0) {
						bool var_839_bool;
						func_8398(var_839_bool, var_1_object);
						if(var_839_bool != 0)
							var_836_bool = true;
					}
					if(var_836_bool != 0) {
						bool var_841_bool;
						func_8508(var_1_object);
						if(var_841_bool != 0)
							var_835_bool = true;
					}
					if(var_835_bool != 0)
						var_0_object->AddReply(539783, 41736, 41735); //@t
					bool var_850_bool = false;
					bool var_851_bool = false;
					bool var_852_bool;
					func_8388(var_852_bool, var_1_object);
					if(var_852_bool != 0) {
						bool var_854_bool;
						func_8520(var_1_object);
						if(var_854_bool != 0)
							var_851_bool = true;
					}
					if(var_851_bool != 0) {
						bool var_860_bool;
						func_8408(var_860_bool, var_1_object);
						if(var_860_bool != 0)
							var_850_bool = true;
					}
					if(var_850_bool != 0)
						var_0_object->AddReply(539786, 41739, 41738); //@t
					bool var_865_bool = false;
					bool var_866_bool = false;
					bool var_867_bool;
					func_8388(var_867_bool, var_1_object);
					if(var_867_bool != 0) {
						bool var_869_bool;
						func_8418(var_869_bool, var_1_object);
						if(var_869_bool != 0)
							var_866_bool = true;
					}
					if(var_866_bool != 0) {
						bool var_871_bool;
						func_8532(var_1_object);
						if(var_871_bool != 0)
							var_865_bool = true;
					}
					if(var_865_bool != 0)
						var_0_object->AddReply(539789, 41742, 41741); //@t
					var_0_object->AddReply(526479, -1, 27745); //@t
					var_0_object->AddReply(541970, -1, 44231); //@t
		}
	}
	for(;;) {
		bool var_795_bool;
		func_7739(var_795_bool);
		if(var_795_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_7456(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_3057;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3057:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xb1e";


void func_6940(bool var_49_bool)
{
	object var_52_object;
	@FindActor(var_52_object, "player");
	if(!var_52_object) { //@nz
		var_49_bool = false;
		return 4;
	}
	float var_56_float; object var_57_object;
	func_7158(var_56_float, var_57_object);
	if(var_56_float > 90000.0) {
		var_49_bool = false;
		return 4;
	}
	bool var_53_bool;
	@CanSee(var_53_bool, var_57_object);
	var_53_bool = var_49_bool;
}
EMIT "Stack[-2] = 0";


void func_8989(int var_649_int)
{
	int var_651_int;
	@GetVariable("k2system_burah_day", var_651_int);
	var_651_int = var_649_int;
}


// @pe
void func_7967(void)
{
	func_8763();
}


void func_7456(string var_264_string)
{
	bool var_268_bool; float var_269_float; float var_270_float;
	@lshHasAnimation(var_268_bool, var_264_string);
	if(var_268_bool != 0) {
		@lshGetAnimTimes(var_264_string, var_269_float, var_270_float);
		@lshPlayAnimation(var_269_float, var_270_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_264_string);
	}
	
}


void func_8995(int var_1116_int)
{
	int var_1118_int;
	@GetVariable("k2system_danko_day", var_1118_int);
	var_1118_int = var_1116_int;
}


// @pe
void func_8484(bool var_687_bool)
{
	int var_689_int;
	func_7536(var_689_int, "ook8Aglaja4");
	if(var_689_int == 0) {
		var_687_bool = true;
		return 0;
	}
	var_687_bool = false;
}


// @pe
void func_7972(void)
{
	@SetVariable("ook9Aglaja3", 1);
}


void func_9001(int var_658_int)
{
	int var_663_int;
	func_8989(var_663_int);
	int var_661_int;
	var_663_int = var_661_int;
	int var_662_int;
	@GetVariable(("k2system_burah_state" + var_661_int), var_662_int);
	var_662_int = var_658_int;
}


// @pe
void func_7978(void)
{
	@SetVariable("ook9Aglaja4", 1);
}


void func_7472(string var_242_string, bool var_243_bool)
{
	bool var_249_bool; float var_250_float; float var_251_float;
	@lshHasAnimation(var_249_bool, var_242_string);
	if(var_249_bool != 0) {
		@lshGetAnimTimes(var_242_string, var_250_float, var_251_float);
		@lshPlayAnimation(var_250_float, var_251_float, var_243_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_242_string);
	}
	
}


// @pe
void func_8496(bool var_719_bool)
{
	int var_721_int;
	func_7536(var_721_int, "ook8Aglaja5");
	if(var_721_int == 0) {
		var_719_bool = true;
		return 0;
	}
	var_719_bool = false;
}


// @pe
void func_7984(void)
{
	@SetVariable("ook9Aglaja5", 1);
}


void func_6962(void)
{
	float var_1237_float;
	@rand(var_1237_float, 8, 16);
	@SetTimer(10, var_1237_float);
}


void func_9012(int var_1140_int)
{
	int var_1145_int;
	func_8995(var_1145_int);
	int var_1143_int;
	var_1145_int = var_1143_int;
	int var_1144_int;
	@GetVariable(("k2system_danko_state" + var_1143_int), var_1144_int);
	var_1144_int = var_1140_int;
}


// @pe
void func_7990(void)
{
	@SetVariable("ook10Aglaja1", 1);
}


void func_1335(object var_0_object, int var_553_int, object var_554_object)
{
	var_0_object = var_554_object;
	bool var_564_bool; object var_565_object;
	var_554_object = var_565_object;
	func_7231(var_564_bool, var_565_object, 70.0);
	if(!var_564_bool) { //@nz
		var_553_int = -2;
		return 8;
	}
	object var_560_object;
	@CreateDialog(var_560_object);
	int var_568_int;
	func_7733(var_568_int);
	var_560_object->SetNPCName(var_568_int);
	int var_569_int;
	func_7731(var_569_int);
	var_560_object->SetNPCDescription(var_569_int);
	string var_570_string;
	func_7735(var_570_string);
	var_560_object->SetPhoto(var_570_string);
	string var_571_string;
	func_7737(var_571_string);
	var_560_object->SetPhoto2(var_571_string);
	int var_572_int;
	func_8964(var_572_int);
	var_560_object->SetPlayerName(var_572_int);
	bool var_561_bool;
	@IsOverrideActive(var_561_bool);
	if(var_561_bool != 0) {
		var_553_int = -2;
		return 8;
	}
	@DoDialog(var_560_object);
	bool var_574_bool; object var_575_object;
	object var_576_object;
	func_7509(var_576_object);
	var_576_object = var_575_object;
	func_7318(var_574_bool, var_575_object);
	object var_577_object; object var_578_object;
	var_554_object = var_577_object;
	var_560_object = var_578_object;
	TaskCall(3);
	func_1416(var_579_object, var_580_object, var_581_string, var_582_bool, var_577_object, var_578_object);
	TaskReturn();
	bool var_563_bool;
	var_560_object->IsDialogEnd(var_563_bool);
	
	for(;;) {
		var_731_bool = !var_563_bool; //@nz
		if(var_731_bool == 0) goto Label_1405;
		@sync();
		var_560_object->IsDialogEnd(var_563_bool);
	}
	
Label_1405:
	object var_732_object;
	var_554_object = var_732_object;
	func_7300();
	@StopDialog(var_560_object);
	var_560_object->GetReturnValue(-1);
	int var_562_int = var_553_int;
}
EMIT "Stack[-4] = 0";


void func_6971(void)
{
	@KillTimer(10);
}


// @pe
void func_8508(bool var_841_bool)
{
	int var_843_int;
	func_7536(var_843_int, "ook9Aglaja3");
	if(var_843_int == 0) {
		var_841_bool = true;
		return 0;
	}
	var_841_bool = false;
}


// @pe
void func_7996(void)
{
	@SetVariable("ook10Aglaja2", 1);
}


// @pe
void func_5438(object var_2_object, string var_238_string)
{
	bool var_239_bool;
	func_7739(var_239_bool);
	if(!var_239_bool) //@nz
		return 0;
	if(var_238_string == var_2_object)
		return 0;
	string var_242_string; bool var_243_bool;
	var_238_string = var_242_string;
	if(var_238_string == "")
		var_243_bool = false;
	else
		var_243_bool = true;
	func_7472(var_242_string, var_243_bool);
	var_2_object = var_238_string;
	
}


void func_7487(bool var_170_bool, string var_171_string)
{
	bool var_173_bool;
	bool var_174_bool;
	func_7739(var_174_bool);
	if(var_174_bool != 0) {
		@lshHasSpeech(var_173_bool, var_171_string);
		if(var_173_bool != 0) {
			@lshPlaySpeech(var_171_string);
			var_170_bool = true;
		}
	}
	var_170_bool = false;
}


void func_9023(bool var_1114_bool)
{
	int var_1115_int;
	func_7673(var_1115_int);
	int var_1116_int;
	func_8995(var_1116_int);
	var_1114_bool = var_1115_int == var_1116_int;
}


// @pe
void func_8002(void)
{
	@SetVariable("ook10Aglaja3", 1);
}


void func_9031(bool var_1139_bool)
{
	int var_1140_int;
	func_9012(var_1140_int);
	var_1139_bool = var_1140_int == 3;
}


// @pe
void func_8520(bool var_854_bool)
{
	int var_856_int;
	func_7536(var_856_int, "ook9Aglaja4");
	if(var_856_int == 0) {
		var_854_bool = true;
		return 0;
	}
	var_854_bool = false;
}


// @pe
void func_8008(void)
{
	@SetVariable("ook10Aglaja4", 1);
}


void func_9037(bool var_647_bool)
{
	int var_648_int;
	func_7673(var_648_int);
	int var_649_int;
	func_8989(var_649_int);
	var_647_bool = var_648_int == var_649_int;
}


void func_7502(void)
{
	bool var_44_bool;
	func_7739(var_44_bool);
	if(var_44_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_8014(void)
{
	@SetVariable("ook11Aglaja2", 1);
}


// @pe
void func_8532(bool var_871_bool)
{
	int var_873_int;
	func_7536(var_873_int, "ook9Aglaja5");
	if(var_873_int == 0) {
		var_871_bool = true;
		return 0;
	}
	var_871_bool = false;
}


void func_7509(object var_138_object)
{
	object var_140_object;
	@self(var_140_object);
	var_140_object = var_138_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_8020(void)
{
	@SetVariable("ook11Aglaja3", 1);
}


void func_9045(bool var_684_bool)
{
	int var_685_int;
	func_9001(var_685_int);
	var_684_bool = var_685_int == 2;
}


// @pe
void func_8026(void)
{
	@SetVariable("ook11Aglaja4", 1);
}


void func_7515(cvector var_102_cvector, cvector var_103_cvector)
{
	float var_106_float = sqrt(var_103_cvector | var_103_cvector);
	if(var_106_float < 0.000001)
		var_102_cvector = [0.0, 0.0, 0.0];
	var_102_cvector = var_103_cvector / var_106_float;
}


void func_9051(bool var_716_bool)
{
	int var_717_int;
	func_9001(var_717_int);
	var_716_bool = var_717_int == 3;
}


// @pe
void func_8032(void)
{
	@SetVariable("ook11Aglaja5", 1);
}


// @pe
void func_8544(bool var_936_bool)
{
	int var_938_int;
	func_7536(var_938_int, "ook10Aglaja1");
	if(var_938_int == 0) {
		var_936_bool = true;
		return 0;
	}
	var_936_bool = false;
}


void func_9057(bool var_657_bool)
{
	int var_658_int;
	func_9001(var_658_int);
	var_657_bool = var_658_int == 0;
}


// @pe
void func_7525(float var_178_float, float var_179_float, float var_180_float, float var_181_float)
{
	if(var_179_float < var_180_float) {
		var_180_float = var_178_float;
		return 0;
	}
	if(var_179_float > var_181_float) {
		var_181_float = var_178_float;
		return 0;
	}
	var_179_float = var_178_float;
}


void func_8038(object var_255_object)
{
	int var_258_int;
	@irand(var_258_int, 1000);
	object var_260_object;
	var_255_object = var_260_object;
	func_7553(var_260_object, (var_258_int + 2000));
}


void func_9063(object var_59_object)
{
	int var_61_int;
	@GetVariable("mt_aglaja", var_61_int);
	if(!var_61_int) { //@nz
		int var_64_int; object var_65_object;
		var_59_object = var_65_object;
		TaskCall(8);
		func_5299(var_66_object, var_64_int, var_65_object);
		TaskReturn();
		@SetVariable("mt_aglaja", 1);
	}
	bool var_291_bool;
	func_7688(var_291_bool, 12);
	if(var_291_bool != 0) {
		int var_306_int; object var_307_object;
		var_59_object = var_307_object;
		TaskCall(10);
		func_5617(var_308_object, var_306_int, var_307_object);
		TaskReturn();
		return 2;
	}
	bool var_375_bool;
	func_7682(var_375_bool, 7);
	if(var_375_bool != 0) {
		int var_378_int; object var_379_object;
		var_59_object = var_379_object;
		TaskCall(0);
		func_0(var_380_object, var_378_int, var_379_object);
		TaskReturn();
		return 2;
	}
	bool var_551_bool;
	func_7682(var_551_bool, 8);
	if(var_551_bool != 0) {
		int var_553_int; object var_554_object;
		var_59_object = var_554_object;
		TaskCall(2);
		func_1335(var_555_object, var_553_int, var_554_object);
		TaskReturn();
		return 2;
	}
	bool var_733_bool;
	func_7682(var_733_bool, 9);
	if(var_733_bool != 0) {
		int var_735_int; object var_736_object;
		var_59_object = var_736_object;
		TaskCall(4);
		func_2761(var_737_object, var_735_int, var_736_object);
		TaskReturn();
		return 2;
	}
	bool var_888_bool;
	func_7682(var_888_bool, 10);
	if(var_888_bool != 0) {
		int var_890_int; object var_891_object;
		var_59_object = var_891_object;
		TaskCall(12);
		func_6053(var_892_object, var_890_int, var_891_object);
		TaskReturn();
		return 2;
	}
	bool var_1003_bool;
	func_7682(var_1003_bool, 11);
	if(var_1003_bool != 0) {
		int var_1005_int; object var_1006_object;
		var_59_object = var_1006_object;
		TaskCall(6);
		func_4034(var_1007_object, var_1005_int, var_1006_object);
		TaskReturn();
		return 2;
	}
	int var_1178_int; object var_1179_object;
	var_59_object = var_1179_object;
	TaskCall(14);
	func_6699(var_1180_object, var_1178_int, var_1179_object);
	TaskReturn();
}


// @pe
void func_8556(bool var_949_bool)
{
	int var_951_int;
	func_7536(var_951_int, "ook10Aglaja2");
	if(var_951_int == 0) {
		var_949_bool = true;
		return 0;
	}
	var_949_bool = false;
}


void func_7536(int var_348_int, string var_349_string)
{
	int var_351_int;
	@GetVariable(var_349_string, var_351_int);
	var_351_int = var_348_int;
}


void func_8049(object var_164_object)
{
	int var_167_int;
	@irand(var_167_int, 1000);
	object var_169_object;
	var_164_object = var_169_object;
	func_7553(var_169_object, (var_167_int + 3000));
}


void func_7541(int var_103_int, int var_104_int)
{
	object var_106_object;
	@CreateIntVector(var_106_object);
	var_106_object->add(var_103_int);
	var_106_object->add(var_104_int);
	@SendWorldWndMessage(3, var_106_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8568(bool var_966_bool)
{
	int var_968_int;
	func_7536(var_968_int, "ook10Aglaja3");
	if(var_968_int == 0) {
		var_966_bool = true;
		return 0;
	}
	var_966_bool = false;
}


void func_8060(object var_84_object)
{
	int var_87_int;
	@irand(var_87_int, 1000);
	object var_89_object;
	var_84_object = var_89_object;
	func_7553(var_89_object, (var_87_int + 4000));
}


void func_7553(object var_89_object, int var_90_int)
{
	int var_93_int;
	object var_94_object;
	var_89_object = var_94_object;
	int var_96_int;
	func_7200(var_94_object, "money", var_96_int);
	if(var_96_int > 0) {
		@GetInvItemByName(var_93_int, "Money");
		int var_103_int; int var_104_int;
		var_93_int = var_103_int;
		var_90_int = var_104_int;
		func_7541(var_103_int, var_104_int);
	}
}


// @pe
void func_8580(bool var_978_bool)
{
	int var_980_int;
	func_7536(var_980_int, "ook10Aglaja4");
	if(var_980_int == 0) {
		var_978_bool = true;
		return 0;
	}
	var_978_bool = false;
}


// @pe
void func_8071(void)
{
	int var_417_int;
	func_7536(var_417_int, "K_Mission3");
	if(var_417_int == 0) {
		@SetVariable("K_Mission3", 1);
		func_8711();
		bool var_446_bool;
		func_8947(var_446_bool, 567);
		bool var_454_bool;
		func_8947(var_454_bool, 568);
	}
}


// @pe
void func_1416(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_577_object, object var_578_object)
{
	var_0_object = var_578_object;
	var_1_object = var_577_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_584_bool;
		func_8234(var_1_object);
		if(var_584_bool != 0) {
			object var_590_object; object var_591_object;
			var_590_object = var_1_object;
			var_591_object = var_0_object;
			func_7815();
			object var_594_object; object var_595_object;
			var_594_object = var_1_object;
			var_595_object = var_0_object;
			func_8107();
			func_1627(var_578_object, "Neutral");
			var_0_object->SetMessage(526396); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528207, 29565, 29564); //@t
			var_0_object->AddReply(528219, 29577, 29576); //@t
		} else {
					func_1627(var_578_object, "Neutral");
					var_0_object->SetMessage(526399); //@t
					var_0_object->ClearReplies(); //@t
					bool var_623_bool;
					func_8246(var_1_object);
					if(var_623_bool != 0)
						var_0_object->AddReply(526400, 27676, 27675); //@t
					bool var_632_bool;
					func_8258(var_1_object);
					if(var_632_bool != 0)
						var_0_object->AddReply(526460, 29590, 27735); //@t
					bool var_641_bool = false;
					bool var_642_bool = false;
					bool var_643_bool;
					func_8388(var_643_bool, var_1_object);
					if(var_643_bool != 0) {
						bool var_653_bool;
						func_8398(var_653_bool, var_1_object);
						if(var_653_bool != 0)
							var_642_bool = true;
					}
					if(var_642_bool != 0) {
						bool var_667_bool;
						func_8472(var_1_object);
						if(var_667_bool != 0)
							var_641_bool = true;
					}
					if(var_641_bool != 0)
						var_0_object->AddReply(539774, 41727, 41726); //@t
					bool var_676_bool = false;
					bool var_677_bool = false;
					bool var_678_bool;
					func_8388(var_678_bool, var_1_object);
					if(var_678_bool != 0) {
						bool var_680_bool;
						func_8408(var_680_bool, var_1_object);
						if(var_680_bool != 0)
							var_677_bool = true;
					}
					if(var_677_bool != 0) {
						bool var_687_bool;
						func_8484(var_1_object);
						if(var_687_bool != 0)
							var_676_bool = true;
					}
					if(var_676_bool != 0)
						var_0_object->AddReply(539777, 41730, 41729); //@t
					bool var_696_bool = false;
					bool var_697_bool;
					func_8342(var_697_bool, var_1_object);
					if(var_697_bool != 0) {
						bool var_699_bool;
						func_8364(var_1_object);
						if(var_699_bool != 0)
							var_696_bool = true;
					}
					if(var_696_bool != 0)
						var_0_object->AddReply(538642, 40537, 40536); //@t
					bool var_708_bool = false;
					bool var_709_bool = false;
					bool var_710_bool;
					func_8388(var_710_bool, var_1_object);
					if(var_710_bool != 0) {
						bool var_712_bool;
						func_8418(var_712_bool, var_1_object);
						if(var_712_bool != 0)
							var_709_bool = true;
					}
					if(var_709_bool != 0) {
						bool var_719_bool;
						func_8496(var_1_object);
						if(var_719_bool != 0)
							var_708_bool = true;
					}
					if(var_708_bool != 0)
						var_0_object->AddReply(539780, 44208, 41732); //@t
					var_0_object->AddReply(526403, -1, 27678); //@t
		}
	}
	for(;;) {
		bool var_613_bool;
		func_7739(var_613_bool);
		if(var_613_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_7456(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1626;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1626:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x58c";


// @pe
void func_8592(bool var_1099_bool)
{
	int var_1101_int;
	func_7536(var_1101_int, "ook11Aglaja2");
	if(var_1101_int == 0) {
		var_1099_bool = true;
		return 0;
	}
	var_1099_bool = false;
}


void func_7572(object var_116_object, object var_117_object, int var_118_int)
{
	int var_122_int;
	var_117_object->GetItemID(var_122_int);
	int var_123_int;
	@GetInvItemProperty(var_123_int, var_122_int, "Category");
	bool var_124_bool;
	var_116_object->AddItem(var_124_bool, var_117_object, var_123_int, var_118_int);
	if(!var_124_bool) { //@nz
		var_116_object->DropItems(var_117_object, var_118_int);
	} else {
		int var_127_int; int var_128_int;
		var_122_int = var_127_int;
		var_118_int = var_128_int;
		func_7541(var_127_int, var_128_int);
	}
	
}


// @pe
void func_8604(bool var_1122_bool)
{
	int var_1124_int;
	func_7536(var_1124_int, "ook11Aglaja3");
	if(var_1124_int == 0) {
		var_1122_bool = true;
		return 0;
	}
	var_1122_bool = false;
}


// @pe
void func_8095(void)
{
	@SetVariable("ook7Aglaja4", 1);
}


// @pe
void func_8101(void)
{
	@SetVariable("k7AglajaVisit", 1);
}


void func_6053(object var_0_object, int var_890_int, object var_891_object)
{
	var_0_object = var_891_object;
	bool var_901_bool; object var_902_object;
	var_891_object = var_902_object;
	func_7231(var_901_bool, var_902_object, 70.0);
	if(!var_901_bool) { //@nz
		var_890_int = -2;
		return 8;
	}
	object var_897_object;
	@CreateDialog(var_897_object);
	int var_905_int;
	func_7733(var_905_int);
	var_897_object->SetNPCName(var_905_int);
	int var_906_int;
	func_7731(var_906_int);
	var_897_object->SetNPCDescription(var_906_int);
	string var_907_string;
	func_7735(var_907_string);
	var_897_object->SetPhoto(var_907_string);
	string var_908_string;
	func_7737(var_908_string);
	var_897_object->SetPhoto2(var_908_string);
	int var_909_int;
	func_8964(var_909_int);
	var_897_object->SetPlayerName(var_909_int);
	bool var_898_bool;
	@IsOverrideActive(var_898_bool);
	if(var_898_bool != 0) {
		var_890_int = -2;
		return 8;
	}
	@DoDialog(var_897_object);
	bool var_911_bool; object var_912_object;
	object var_913_object;
	func_7509(var_913_object);
	var_913_object = var_912_object;
	func_7318(var_911_bool, var_912_object);
	object var_914_object; object var_915_object;
	var_891_object = var_914_object;
	var_897_object = var_915_object;
	TaskCall(13);
	func_6134(var_916_object, var_917_object, var_918_string, var_919_bool, var_914_object, var_915_object);
	TaskReturn();
	bool var_900_bool;
	var_897_object->IsDialogEnd(var_900_bool);
	
	for(;;) {
		var_1001_bool = !var_900_bool; //@nz
		if(var_1001_bool == 0) goto Label_6123;
		@sync();
		var_897_object->IsDialogEnd(var_900_bool);
	}
	
Label_6123:
	object var_1002_object;
	var_891_object = var_1002_object;
	func_7300();
	@StopDialog(var_897_object);
	var_897_object->GetReturnValue(-1);
	int var_899_int = var_890_int;
}
EMIT "Stack[-4] = 0";


void func_7591(object var_111_object, string var_112_string, int var_113_int)
{
	object var_115_object;
	@CreateInvItem(var_115_object);
	var_115_object->SetItemName(var_112_string);
	object var_116_object; object var_117_object; int var_118_int;
	var_111_object = var_116_object;
	var_115_object = var_117_object;
	var_113_int = var_118_int;
	func_7572(var_116_object, var_117_object, var_118_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8616(bool var_1149_bool)
{
	int var_1151_int;
	func_7536(var_1151_int, "ook11Aglaja4");
	if(var_1151_int == 0) {
		var_1149_bool = true;
		return 0;
	}
	var_1149_bool = false;
}


void func_7082(void)
{
	bool var_53_bool; int var_54_int; int var_55_int; bool var_56_bool;
	@WaitForAnimEnd();
	bool var_57_bool;
	func_7226(var_57_bool);
	if(!var_57_bool) //@nz
		return 12;
	int var_59_int;
	func_7714(var_59_int);
	int var_51_int;
	var_59_int = var_51_int;
	int var_52_int = 0;
	
	for(;;) {
		bool var_72_bool = false;
		if(var_52_int < 5) {
			bool var_75_bool;
			func_7226(var_75_bool);
			if(var_75_bool != 0)
				var_72_bool = true;
		}
		if(var_72_bool != 0) {
			if(!var_51_int) { //@nz
				@Sleep(3, var_53_bool);
				if(!var_53_bool) { //@nz
				} else {
			} else {
			@irand(var_54_int, var_51_int);
			@irand(var_55_int, 5);
			if(var_55_int != 0)
				var_54_int = 0;
			string var_86_string; int var_87_int;
			var_54_int = var_87_int;
			func_7707(var_86_string, var_87_int);
			@PlayAnimation("all", var_86_string);
			@WaitForAnimEnd(var_56_bool);
			var_88_bool = !var_56_bool; //@nz
			if(var_88_bool == 0) goto Label_7137;
			goto Label_7148;
			}
				Label_7137:
					bool var_79_bool;
					func_7151(var_79_bool);
					var_80_bool = !var_79_bool; //@nz
					if(var_80_bool == 0) goto Label_7143;
			}
		}
	Label_7148:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_7143:
		@ResetAAS();
		var_52_int += 1;
	}
	
}


// @pe
void func_8107(void)
{
	@SetVariable("k8AglajaVisit", 1);
}


// @pe
void func_8113(void)
{
	@SetVariable("k9AglajaVisit", 1);
}


// @pe
void func_8628(bool var_1161_bool)
{
	int var_1163_int;
	func_7536(var_1163_int, "ook11Aglaja5");
	if(var_1163_int == 0) {
		var_1161_bool = true;
		return 0;
	}
	var_1161_bool = false;
}


// @pe
void func_7604(bool var_149_bool, object var_150_object, float var_151_float)
{
	if(!var_150_object) { //@nz
		var_149_bool = false;
		return 0;
	}
	if(var_151_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_151_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_156_float;
		var_151_float = var_156_float;
		func_7639(var_156_float);
		bool var_160_bool; object var_161_object; float var_163_float;
		var_150_object = var_161_object;
		var_151_float = var_163_float;
		func_7178(var_160_bool, var_161_object, "reputation", var_163_float, (float)0, (float)1);
		var_149_bool = true;
		return 0;

	}
	
	var_149_bool = false;
}


// @pe
void func_8119(void)
{
	@SetVariable("k11AglajaVisit", 1);
}


// @pe
void func_8125(void)
{
	@SetVariable("ook12AglajaNight1", 1);
}


// @pe
void func_8640(bool var_487_bool)
{
	int var_489_int;
	func_7536(var_489_int, "ook7Aglaja4");
	if(var_489_int == 0) {
		var_487_bool = true;
		return 0;
	}
	var_487_bool = false;
}


void func_4034(object var_0_object, int var_1005_int, object var_1006_object)
{
	var_0_object = var_1006_object;
	bool var_1016_bool; object var_1017_object;
	var_1006_object = var_1017_object;
	func_7231(var_1016_bool, var_1017_object, 70.0);
	if(!var_1016_bool) { //@nz
		var_1005_int = -2;
		return 8;
	}
	object var_1012_object;
	@CreateDialog(var_1012_object);
	int var_1020_int;
	func_7733(var_1020_int);
	var_1012_object->SetNPCName(var_1020_int);
	int var_1021_int;
	func_7731(var_1021_int);
	var_1012_object->SetNPCDescription(var_1021_int);
	string var_1022_string;
	func_7735(var_1022_string);
	var_1012_object->SetPhoto(var_1022_string);
	string var_1023_string;
	func_7737(var_1023_string);
	var_1012_object->SetPhoto2(var_1023_string);
	int var_1024_int;
	func_8964(var_1024_int);
	var_1012_object->SetPlayerName(var_1024_int);
	bool var_1013_bool;
	@IsOverrideActive(var_1013_bool);
	if(var_1013_bool != 0) {
		var_1005_int = -2;
		return 8;
	}
	@DoDialog(var_1012_object);
	bool var_1026_bool; object var_1027_object;
	object var_1028_object;
	func_7509(var_1028_object);
	var_1028_object = var_1027_object;
	func_7318(var_1026_bool, var_1027_object);
	object var_1029_object; object var_1030_object;
	var_1006_object = var_1029_object;
	var_1012_object = var_1030_object;
	TaskCall(7);
	func_4115(var_1031_object, var_1032_object, var_1033_string, var_1034_bool, var_1029_object, var_1030_object);
	TaskReturn();
	bool var_1015_bool;
	var_1012_object->IsDialogEnd(var_1015_bool);
	
	for(;;) {
		var_1176_bool = !var_1015_bool; //@nz
		if(var_1176_bool == 0) goto Label_4104;
		@sync();
		var_1012_object->IsDialogEnd(var_1015_bool);
	}
	
Label_4104:
	object var_1177_object;
	var_1006_object = var_1177_object;
	func_7300();
	@StopDialog(var_1012_object);
	var_1012_object->GetReturnValue(-1);
	int var_1014_int = var_1005_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8131(object var_195_object)
{
	object var_198_object;
	var_195_object = var_198_object;
	bool var_197_bool;
	func_7604(var_197_bool, var_198_object, 0.3);
}


// @pe
void func_8138(object var_175_object)
{
	object var_178_object;
	var_175_object = var_178_object;
	bool var_177_bool;
	func_7604(var_177_bool, var_178_object, 0.5);
}


// @pe
void func_8652(bool var_346_bool)
{
	int var_348_int;
	func_7536(var_348_int, "ook12AglajaNight1");
	if(var_348_int == 0) {
		var_346_bool = true;
		return 0;
	}
	var_346_bool = false;
}


// @pe
void func_8145(object var_120_object)
{
	object var_123_object;
	var_120_object = var_123_object;
	bool var_122_bool;
	func_7604(var_122_bool, var_123_object, -0.5);
}


void func_7639(float var_156_float)
{
	object var_158_object;
	@CreateFloatVector(var_158_object);
	var_158_object->add(var_156_float);
	@SendWorldWndMessage(16, var_158_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8152(void)
{
}


// @pe
void func_8664(bool var_526_bool)
{
	int var_530_int;
	func_7673(var_530_int);
	bool var_528_bool;
	func_8981(var_528_bool, (var_530_int - 1));
	var_526_bool = !var_528_bool;
}


// @pe
void func_8154(object var_129_object)
{
	@Trace("feromicin is given");
	object var_132_object;
	var_129_object = var_132_object;
	func_7591(var_132_object, "feromicin", 1);
}


void func_7649(bool var_98_bool, string var_99_string, string var_100_string)
{
	object var_102_object;
	@FindActor(var_102_object, var_99_string);
	if(var_102_object == null)
		var_98_bool = false;
	@Trigger(var_102_object, var_100_string);
	var_98_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_8675(bool var_645_bool)
{
	bool var_647_bool;
	func_9037(var_647_bool);
	var_647_bool = var_645_bool;
}


// @pe
void func_8165(object var_260_object)
{
	@Trace("gamma_pills is given");
	object var_263_object;
	var_260_object = var_263_object;
	func_7591(var_263_object, "gamma_pills", 1);
}


// @pe
void func_8681(bool var_655_bool)
{
	bool var_657_bool;
	func_9057(var_657_bool);
	var_657_bool = var_655_bool;
}


void func_7661(bool var_106_bool, string var_107_string, string var_108_string, string var_109_string)
{
	object var_111_object;
	@FindActor(var_111_object, var_107_string);
	if(var_111_object == null)
		var_106_bool = false;
	@Trigger(var_111_object, var_108_string, var_109_string);
	var_106_bool = true;
}
EMIT "Stack[-1] = 0";


void func_7151(bool var_79_bool)
{
	var_79_bool = true;
}


// @pe
void func_8176(object var_181_object)
{
	@Trace("delta_pills is given");
	object var_184_object;
	var_181_object = var_184_object;
	func_7591(var_184_object, "delta_pills", 1);
}


void func_7153(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_3058(object var_2_object, string var_780_string)
{
	bool var_781_bool;
	func_7739(var_781_bool);
	if(!var_781_bool) //@nz
		return 0;
	if(var_780_string == var_2_object)
		return 0;
	string var_784_string; bool var_785_bool;
	var_780_string = var_784_string;
	if(var_780_string == "")
		var_785_bool = false;
	else
		var_785_bool = true;
	func_7472(var_784_string, var_785_bool);
	var_2_object = var_780_string;
	
}


// @pe
void func_8687(bool var_682_bool)
{
	bool var_684_bool;
	func_9045(var_684_bool);
	var_684_bool = var_682_bool;
}


void func_5617(object var_0_object, int var_306_int, object var_307_object)
{
	var_0_object = var_307_object;
	bool var_317_bool; object var_318_object;
	var_307_object = var_318_object;
	func_7231(var_317_bool, var_318_object, 70.0);
	if(!var_317_bool) { //@nz
		var_306_int = -2;
		return 8;
	}
	object var_313_object;
	@CreateDialog(var_313_object);
	int var_321_int;
	func_7733(var_321_int);
	var_313_object->SetNPCName(var_321_int);
	int var_322_int;
	func_7731(var_322_int);
	var_313_object->SetNPCDescription(var_322_int);
	string var_323_string;
	func_7735(var_323_string);
	var_313_object->SetPhoto(var_323_string);
	string var_324_string;
	func_7737(var_324_string);
	var_313_object->SetPhoto2(var_324_string);
	int var_325_int;
	func_8964(var_325_int);
	var_313_object->SetPlayerName(var_325_int);
	bool var_314_bool;
	@IsOverrideActive(var_314_bool);
	if(var_314_bool != 0) {
		var_306_int = -2;
		return 8;
	}
	@DoDialog(var_313_object);
	bool var_327_bool; object var_328_object;
	object var_329_object;
	func_7509(var_329_object);
	var_329_object = var_328_object;
	func_7318(var_327_bool, var_328_object);
	object var_330_object; object var_331_object;
	var_307_object = var_330_object;
	var_313_object = var_331_object;
	TaskCall(11);
	func_5698(var_332_object, var_333_object, var_334_string, var_335_bool, var_330_object, var_331_object);
	TaskReturn();
	bool var_316_bool;
	var_313_object->IsDialogEnd(var_316_bool);
	
	for(;;) {
		var_373_bool = !var_316_bool; //@nz
		if(var_373_bool == 0) goto Label_5687;
		@sync();
		var_313_object->IsDialogEnd(var_316_bool);
	}
	
Label_5687:
	object var_374_object;
	var_307_object = var_374_object;
	func_7300();
	@StopDialog(var_313_object);
	var_313_object->GetReturnValue(-1);
	int var_315_int = var_306_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8693(bool var_714_bool)
{
	bool var_716_bool;
	func_9051(var_716_bool);
	var_716_bool = var_714_bool;
}


// @pe
void func_6134(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_914_object, object var_915_object)
{
	var_0_object = var_915_object;
	var_1_object = var_914_object;
	var_3_string = false;
	if(1 != 0) {
		func_6295(var_915_object, "Neutral");
		var_0_object->SetMessage(539793); //@t
		var_0_object->ClearReplies(); //@t
		bool var_930_bool = false;
		bool var_931_bool = false;
		bool var_932_bool;
		func_8388(var_932_bool, var_1_object);
		if(var_932_bool != 0) {
			bool var_934_bool;
			func_8398(var_934_bool, var_1_object);
			if(var_934_bool != 0)
				var_931_bool = true;
		}
		if(var_931_bool != 0) {
			bool var_936_bool;
			func_8544(var_1_object);
			if(var_936_bool != 0)
				var_930_bool = true;
		}
		if(var_930_bool != 0)
			var_0_object->AddReply(539794, 41747, 41746); //@t
		bool var_945_bool = false;
		bool var_946_bool = false;
		bool var_947_bool;
		func_8388(var_947_bool, var_1_object);
		if(var_947_bool != 0) {
			bool var_949_bool;
			func_8556(var_1_object);
			if(var_949_bool != 0)
				var_946_bool = true;
		}
		if(var_946_bool != 0) {
			bool var_955_bool;
			func_8408(var_955_bool, var_1_object);
			if(var_955_bool != 0)
				var_945_bool = true;
		}
		if(var_945_bool != 0)
			var_0_object->AddReply(539797, 41750, 41749); //@t
		bool var_960_bool = false;
		bool var_961_bool = false;
		bool var_962_bool;
		func_8388(var_962_bool, var_1_object);
		if(var_962_bool != 0) {
			bool var_964_bool;
			func_8418(var_964_bool, var_1_object);
			if(var_964_bool != 0)
				var_961_bool = true;
		}
		if(var_961_bool != 0) {
			bool var_966_bool;
			func_8568(var_1_object);
			if(var_966_bool != 0)
				var_960_bool = true;
		}
		if(var_960_bool != 0)
			var_0_object->AddReply(539800, 41753, 41752); //@t
		bool var_975_bool = false;
		bool var_976_bool;
		func_8342(var_976_bool, var_1_object);
		if(var_976_bool != 0) {
			bool var_978_bool;
			func_8580(var_1_object);
			if(var_978_bool != 0)
				var_975_bool = true;
		}
		if(var_975_bool != 0)
			var_0_object->AddReply(539803, 41756, 41755); //@t
		var_0_object->AddReply(539810, -1, 41762); //@t
		var_0_object->AddReply(541106, -1, 43219); //@t
		goto Label_6265;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x17fa";
	}
Label_6265:
	bool var_993_bool;
	func_7739(var_993_bool);
	if(var_993_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7456(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_6294;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_6294:
		return 0;

	}
	
}


void func_7158(float var_56_float, object var_57_object)
{
	cvector var_61_cvector;
	@GetPosition(var_61_cvector);
	cvector var_62_cvector;
	var_57_object->GetPosition(var_62_cvector);
	var_56_float = (var_62_cvector - var_61_cvector) | (var_62_cvector - var_61_cvector);
}


void func_7673(int var_191_int)
{
	float var_193_float;
	@GetGameTime(var_193_float);
	var_191_int = 1 + (var_193_float / 24);
}


// @pe
void func_8699(bool var_1112_bool)
{
	bool var_1114_bool;
	func_9023(var_1114_bool);
	var_1114_bool = var_1112_bool;
}


void func_7166(bool var_168_bool, object var_169_object, string var_170_string)
{
	var_175_bool = IsFuncExist(var_169_object, "HasProperty", 2);
	if(!var_175_bool) { //@nz
		var_168_bool = false;
		return 2;
	}
	bool var_172_bool;
	var_169_object->HasProperty(var_170_string, var_172_bool);
	var_172_bool = var_168_bool;
}


