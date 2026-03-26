// @IMPORTS: SetVariable/2,SetSaveProperty/2,AdvanceGameTime/1,Hold/0,FindActor/2,GetMainOutdoorScene/1,Trace/1,Teleport/4,CreateObjectVector/1,GetVariable/2,AddBlankActor/4,AddBlankActorFromXml/4,Trigger/2,Trigger/3,GetGameTime/1,SetSepia/2,GetSceneByName/2,ReplaceScene/2,irand/2,AddActor/6,AddActor/4,RemoveActor/1,PlaySound/1,_strtoi/2,AddActorByType/6,CreateStringVector/1,SendWorldWndMessage/1,UnlockAchievement/1,GameOver/1,AddScriptedActor/5,RandOneOf/13,RandOneOf/5,SetTimeEvent/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,AddMessage/4,QueuePlayMovie/1,CreateIntVector/1
// @STRINGS: W:branch|W:quest_b1_02|W:player|W:Starting scene not found|W:pt_birth_Burah|A:GetLocator|W:HasProperty|A:HasProperty|W:.bin|W:.xml|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W:locked|A:SetProperty|A:Close|A:size|A:get|A:Remove|A:clear|W:Region|W:State|W:s_|W:n_|W:.isc|W:City manager: can't replace indoor scene "|W:" because it doesn't exist|W:Diseased Region: |W:City manager: main outdoor scene not found|A:RemoveAllRegionActors|W:City manager: Can't find main outdoor scene|A:SetRegionActorCount|A:SetRegionActorCountByType|A:GetGroupActors|A:Next|W:Actor "|W:" can't be locked|A:add|W:fog_stat.xml|W:fog|A:AddStationaryActorByType|W:pt_blockpost|W:_1_|W:pers_patrool|W:patrol_stat.xml|W:pt_fog|W:pers_soldat|W:soldier.xml|W:_2_|W:pers_sanitar|W:sanitar_stat.xml|A:EnableSubsets|W:street_rags|W:do_invis.xml|A:RemoveOnUnload|W:dr_mark|W:disease_object.xml|W:restore|W:cleanup|W:br_|W:pers_grabitel|W:grabitel.xml|W:pers_unosha|W:unosha_attacker.xml|W:unosha2_attacker.xml|W:pers_worker|W:worker_attacker.xml|W:worker2_attacker.xml|W:pers_wasted_girl|W:wasted_girl.xml|W:pers_wasted_male|W:wasted_male.xml|W:pers_woman|W:woman.xml|W:pers_boy|W:boy.xml|W:pers_girl|W:girl2.xml|W:unosha.xml|W:unosha2.xml|W:wasted_girl_killme.xml|W:soldier_marauder.xml|W:pers_alkash|W:alkash.xml|W:pers_littleboy|W:littleboy.xml|W:pers_littlegirl|W:littlegirl.xml|W:pers_dohodyaga|W:dohodyaga.xml|W:worker.xml|W:worker2.xml|W:pers_butcher|W:butcher.xml|W:woman_killme.xml|W:pers_nudegirl|W:nudegirl.xml|W:pers_dog|W:dog.xml|W:pers_vaxxabit|W:vaxxabit_d.xml|W:pers_vaxxabitka|W:vaxxabitka_d.xml|W:pers_rat_big|W:rat_big.xml|W:fog.xml|W:fog_hunter.xml|W:pers_bomber|W:bomber.xml|W:agony1_man.xml|W:agony1_woman.xml|W:sanitar.xml|W:pers_rat|W:rat.xml|W:patrol.xml|W:pers_soldat_hand|W:soldier_patrol.xml|W:dt_house3_05_i2|W:dt_house3_05|W:dt_house3_06_i2|W:dt_house_1_10|W:house5_10|W:house5_07|W:dt_house_1_03|W:dt_house1_union2_04l|W:dt_house1_union2_04r|W:house5_22|W:house5_08|W:dt_house1_union2_02l|W:dt_house1_union2_02r|W:dt_house1_union2_05l|W:dt_house1_union2_05r|W:dt_house2_01|W:dt_house2_02|W:dt_house2_03|W:dt_house2_04|W:dt_house2_05|W:dt_house3_10_i2|W:dt_house3_10|W:dt_house3_11_i2|W:dt_house3_11|W:dt_house3_12_i2|W:dt_house3_12|W:dt_house_1_06|W:dt_house3_07_i2|W:dt_house3_07|W:house5_02|W:dt_house1_union2_03l|W:dt_house1_union2_03r|W:dt_house1_union2_01l|W:dt_house1_union2_01r|W:house5_unoinl|W:house5_unoinr|W:dt_house_1_01|W:house5_05|W:house5_06|W:dt_house_1_02|W:house5_unoin_solid01l|W:house5_unoin_solid01r|W:house5_03|W:house5_04|W:house1_se_02l|W:house1_se_02r|W:dt_house3_01_i2|W:dt_house3_02_i2|W:dt_house3_02|W:dt_house3_03_i2|W:dt_house3_03|W:dt_house3_04_i2|W:house5_21|W:dt_house3_08_i2|W:dt_house3_09|W:dt_house3_09_i2|W:house1_se_03l|W:house1_se_03r|W:house1_se_01l|W:house1_se_01r|W:house1_se_04l|W:house1_se_04r|W:house5_11|W:house5_09|W:house5_13|W:house5_12|W:house5_14|W:house5_unoin03l|W:house5_unoin03r|W:house5_unoin02l|W:house5_unoin02r|W:house5_unoin01l|W:house5_unoin01r|W:dt_house3_14_i2|W:dt_house3_14|W:house1_arc_01l|W:house1_arc_01r|W:dt_House6_01|W:dt_house_1_09|W:house5_24|W:dt_House6_03|W:dt_House6_04|W:dt_house_1_08|W:house5_unoin_solidl|W:house5_unoin_solidr|W:dt_house2_12|W:dt_house2_11|W:dt_house2_13|W:dt_house2_09|W:dt_house2_08|W:dt_house2_07|W:dt_house2_06|W:house5_01|W:house5_15|W:house5_16|W:house5_17|W:house5_unoin04l|W:house5_unoin04r|W:house5_23|W:house1_se_05r|W:house1_se_05l|W:dt_house2_10|W:House6_02|W:house_2_01|W:house7_03|W:house7_02|W:house3_01|W:house_2_03|W:house_2_02|W:house4_01_i2|W:house4_01|W:House6_05|W:r2_house_2_01|W:r2_house_2_02|W:r2_house_2_03|W:r2_house7_02|W:r2_house01_01|W:r2_house7_01|W:r2_house3_01_i2|W:r2_house3_01|W:r2_house3_02_i2|W:r2_house3_02|W:r2_house3_03_i2|W:r2_house3_03|W:r3_house7_01|W:r3_house7_02|W:r3_house_2_02|W:r3_house3_02_i2|W:r3_house3_02|W:r3_house4_05_i2|W:r3_house4_05|W:r3_house4_03_i2|W:r3_house4_04_i2|W:r3_house4_04|W:r3_house4_01_i2|W:r3_house4_01|W:r3_house_2_01|W:r3_house4_02_i2|W:r3_house4_02|W:r3_house3_01_i2|W:r3_house3_01|W:r4_house_2_02|W:r4_house3_03_i2|W:r4_house3_03|W:r4_house4_02_i2|W:r4_house4_02|W:r4_house4_01_i2|W:r4_house4_01|W:r4_house3_02_i2|W:r4_house3_02|W:r4_house_2_01|W:r4_house3_01_i2|W:r4_house3_01|W:r4_house7_01|W:r4_House6_01|W:r4_house_2_03|W:r4_House6_03|W:r4_house_2_04|W:r5_house2_01|W:r5_house2_02|W:r5_house2_03|W:r5_house3_01_i2|W:r5_house3_01|W:r5_house3_02_i2|W:r5_house3_02|W:r5_house3_03_i2|W:r5_house3_03|W:r5_house3_04_i2|W:r5_house3_04|W:r5_house3_05_i2|W:r5_house3_05|W:r5_house3_06_i2|W:r5_house3_06|W:r5_house3_07_i2|W:r5_house3_07|W:r5_House6_01|W:r6_house2_03|W:r6_house4_01_i2|W:r6_house4_02_i2|W:r6_house4_02|W:r6_house3_02_i2|W:r6_house3_02|W:r6_house3_01_i2|W:r6_house3_01|W:r6_house2_01|W:r6_house7_01|W:r6_house7_02|W:r6_House6_01|W:r6_house2_02|W:r7_house2_01|W:r7_house2_02|W:r7_house2_03|W:r7_house2_04|W:r7_house3_03_i2|W:r7_house3_03|W:r7_house3_04_i2|W:r7_house3_04|W:r7_house3_05_i2|W:r7_house3_05|W:r7_house3_06_i2|W:r7_house3_01_i2|W:r7_house3_01|W:r7_house3_02_i2|W:r7_house3_02|W:lc_house7_02|W:lc_house7_03|W:lc_house7_04|W:lc_house7_05|W:lc_house7_06|W:lc_house7_07|W:lc_House6_02|W:lc_house7_01|W:lc_house_2_02|W:lc_House6_01|W:lc_house3_03_i2|W:lc_house3_03|W:lc_House6_03|W:lc_House6_04|W:lc_house3_05_i2|W:lc_house3_05|W:lc_house3_06_i2|W:lc_house3_06|W:lc_House6_06|W:lc_house3_04_i2|W:lc_house3_04|W:house3_plus_03_i2|W:playsound|W:enable_bonfire|W:disable_bonfire|W:horror|W:Replaced|W:Invalid region index|W:nail|W:fogme|A:GetScene|A:GetPosition|W:sepia|W:nosepia|W:Wrong bonfire index |W:bonfire_light|W:Bofire  light |A:Switch|W:pt_bonfire|W:Locator for bonfire doesn't exist|W:scripted|W:bonfire_big.xml|A:set|W:Setting bonfire |W:... ok|W:Cleanup bonfire |W:pt_guard_|W:Locator doesn't exist for guard |W:term|W:guard_term.xml|W:arena_light|W:Setting arena...|W:pt_arena_manager|W:Locator doesn't exist for arena manager|W:pt_arena_torch|W:Locator doesn't exist for arena torch |W:torch.xml|W:Cleaning arena...|W:remove|W:pt_bull|W:pers_bull|W:bull.xml|W:pt_plant|A:resize|W:Total plants: |W:pt_grave_supply|W:Total grave supplies: |W:Total bonfires: |W:d1q01|W:ACHIEVEMENT_UP|W:gameover_fail.xml|W:b1q01|W:ACHIEVEMENT_BACH_1|W:ACHIEVEMENT_BACH_2|W:ACHIEVEMENT_BACH_3|W:ACHIEVEMENT_BACH_4|W:ACHIEVEMENT_BACH_5|W:ACHIEVEMENT_BACH_6|W:ACHIEVEMENT_BACH_7|W:ACHIEVEMENT_BACH_8|W:ACHIEVEMENT_BACH_9|W:ACHIEVEMENT_BACH_10|W:ACHIEVEMENT_BACH_11|W:ACHIEVEMENT_BURAH_1|W:ACHIEVEMENT_BURAH_2|W:ACHIEVEMENT_BURAH_3|W:ACHIEVEMENT_BURAH_4|W:ACHIEVEMENT_BURAH_5|W:ACHIEVEMENT_BURAH_6|W:ACHIEVEMENT_BURAH_7|W:ACHIEVEMENT_BURAH_8|W:ACHIEVEMENT_BURAH_9|W:ACHIEVEMENT_BURAH_10|W:ACHIEVEMENT_BURAH_11|W:ACHIEVEMENT_CLARA_1|W:ACHIEVEMENT_CLARA_2|W:ACHIEVEMENT_CLARA_3|W:ACHIEVEMENT_CLARA_4|W:ACHIEVEMENT_CLARA_5|W:ACHIEVEMENT_CLARA_6|W:ACHIEVEMENT_CLARA_7|W:ACHIEVEMENT_CLARA_8|W:ACHIEVEMENT_CLARA_9|W:ACHIEVEMENT_CLARA_10|W:ACHIEVEMENT_CLARA_11|W:c_iWM_RealDayChange|W:shed_corpse|W:splash_object_wo_pf.bin|W:b|W:volonteers_burah|W:volonteers_danko|W:volonteers_klara|W:rescue_locked|W:update|W:Plant point not found|W:grass_black_tvir|W:grass_blood_tvir|W:grass_brown_tvir|W:grass_savyur|W:grass_white_plet|W:item_|W:New plant: "|W:" at location #|W:Grave supply point not found|W:bread|W:milk|W:big_gun|W:big_gun.bin|W:vagon_martira|W:d9q01_trigger_wagon|W:quest_d9_01_wagon.bin|W:dt_house_1_07|A:EnableSubset|A:SwitchLights|W:City update|W:kolokol|W:day time|W:night time|W:cot_lara@door1|W:icot_eva_door|W:cot_alexandr@door1|W:cot_katerina@door1|W:burah_home@door1|W:b1BigVlad|W:pt_map_bigvlad|A:AddMark|W:termitnik2@door1|W:cot_viktor@door1|W:cot_anna@door1|W:house_vlad@door2|W:cot_maria@door1|W:warehouse_rubin@door1|A:FindMark|W:b1BigVlad11Hours|W:b1KapellaGotoLaska|W:b1KapellaGotoNotkin|W:b1MladVladGotoGrif|W:b1q01BakWillBeAt18|W:b1q01BigVladGotoKapella|W:b1q01BigVladGotoMladVlad|W:b1q01GrifGotoDanko|W:b1q01NotkinGotoGrif|W:b1q02GrifGotoLaska|W:b1q02LaskaGotoGorbin|W:b1q02LaskaSelf|W:b1q03GrifGotoDoberman|W:b1q03NotkinGotoDoberman|W:b1GrifGotoNotkin|W:b1q03NotkinGotoDobermanSelf|W:b1LaskaGotoMishka|W:b1q05Spi4kaGotoLaska|W:b1q05Spi4kaGotoMishka|W:b1q05PatrolGroup|W:b1BurahFatherHome|W:b2BurahHome|W:b2DankoGotoMladVlad|W:b2q01AlexandrGotoOspina|W:b2q01BigVladGotoAlexandr|W:b2q01BigVladGotoKaterina|W:b2q01BigVladGotoMladVlad|W:b2Travnik1|W:b2Travnik2|W:b2Travnik3|W:b2q01BigVladGotoDanko|W:b2q03GoodShop|W:b2AndreiKabak|W:b3q01BigVladGotoOspina|W:b3q01ButcherGotoBigVlad|W:b3q01OspinaGotoButcher|W:b3q02GrifGotoDanko|W:b3q02GrifGotoNotkin|W:b3q02KapellaGotoNotkin|W:b3q02NotkinGotoKapella|W:b3q03BurahHome|W:b4q01DankoGotoLara|W:b4q01DankoGotoLaraSelf|W:b4q01LaraGotoRubin|W:b4Spi4kaMapMark|W:b5q01DankoGotoAndrei|W:b5q01DankoGotoOspina|W:b5q01VeraGotoStvorki|W:b5q01GathererWife|W:b6q01KlaraGotoTermitnik2|W:b6q02KlaraGotoRat|W:b6q03MariaGotoNina|W:b6q03ViktorGotoMaria|W:b6q02LetterGotoAnna|W:b6q01MatGotoByk|W:b7q01AglajaGotoStarshina|W:b7q01BirdmaskGotoMat|W:b7q01DankoGotoSobor|W:b7q01MatGotoPrison|W:b7q01PatrolGotoGorbun|W:b7q01ViktorGotoSobor|W:b7q01WastedGotoViktor|W:b7q03AglajaGotoTheater|W:b8q01GrifGotoKlara|W:b8q01KapellaGotoKlara|W:b8q01NotkinGotoKlara|W:b8q03GeorgGotoKaterina|W:b8q03KaterinaGotoMat|W:b9q01MDobermanGotoFactory|W:b9q03Bonfire1|W:b9q03Bonfire2|W:b9q03Bonfire3|W:b9q03Bonfire4|W:b9q03DobermanGotoFollower|W:b9q03KapellaGotoSpi4ka|W:b9q01BlockGotoBoiny|W:b9Block|W:b10q04GirlGotoKapella|W:b10q04MatGotoMorlok|W:b10q04BlockGotoOfficer|W:b10q04KapellaGotoBlock|W:b10q04MorlokGotoLaska|W:b10q04MorlokGotoMishka|W:b10q04MorlokGotoNotkin|W:b10q04MorlokGotoSpi4ka|W:b10q03KapellaGotoMishka|W:b10q03MishkaGotoDoll|W:b10q01StarshinaGotoKurgan|W:b11q04NotkinGotoSanitar|W:b11q04SanitarGotoOfficer|W:B_Mission3|W:B_Mission4|W:pt_map_spi4ka|W:pt_map_uprava_admin|W:pt_map_andrei|W:vagon_army@door1|W:house1_kabak@door1|W:mnogogrannik_han@door1|W:b8DankoLetter2|W:b9KlaraLetter|W:map_chertez_state|W:map_chertez_force|W:termitnik@door1|W:resque_list|W:mnogogrannik@door1|W:sobor@door1|W:cot_bigvlad@door1|W:vagon_mishka@door1|W:warehouse_notkin@door1|W:b7q02|W:b7q01|W:b8q01|W:b10q01DankoTalk|W:b11q01|W:b12q01BlockVisit|W:b12q01DankoVisit|W:b12q01KlaraVisit|W:b4NotkinMapVisit|W:b6q01|W:b9q03AglajaTalk|W:b9q03|W:b9q03BadInit|W:b11q04|W:b3KapellaVisit|W:b8GeorgVisit|W:b10MatVisit|W:b6ViktorVisit|W:b2AndreiVisit|W:b4Spi4kaVisit|W:b10KapellaVisit|W:b9BlockVisit|W:b5MladVladVisit|W:b3BigVladVisit|W:b3DankoVisit|W:b3NotkinVisit|W:b8DankoVisit|W:b4q01|W:b5q01|W:b2q01|W:b2MladVladBurahHomeTalk|W:b2DankoTalk|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|A:GetMap|W:quest_b7_01|W:quest_b8_01|W:quest_b8_03|W:quest_b6_02|W:place_klara|W:quest_b9_01|W:quest_b10_01|W:quest_b11_01|W:quest_b12_01|W:b8q03MladVladIsVictim|W:kill|W:mladvlad|W:Mlad Vlad is dead|W:Big Vlad is dead|W:quest_b1_05|W:quest_b9_03|W:quest_b10_04|W:quest_b11_04|W:quest_b6_01|W:quest_b2_01|W:quest_b3_01|W:quest_b1_01|W:quest_b2_03|W:quest_b4_01|W:quest_b5_01|W:aglaja.wmv|W:remove_whitemask|W:army.wmv|W:vol_|W:Updating game |W:sobor|W:aglaja|W:Disease update|W:Diseased regions : |W:Special diseased region: 6|W:Special diseased house: house5_unoin03l|W:Special diseased house: house5_unoin03r|W:s_house5_unoin03l.isc|W:s_house5_unoin03r.isc|W:theater|W:dtheater_burah.isc|W:Special replaced house: uprava_admin|W:uprava_admin_army_burah.isc|W:pers_morlok|W:Burah_arena_manager.xml
// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:,7:object:,8:object:,9:object:,10:object:,11:object:,12:object:,13:object:,14:object:,15:object:,16:object:
// @RUN_OP: 0x15
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_9: op=0x0 vars=int,float
// @STANDALONE_EVENT_26: op=0x1cfa vars=string,string
// @STANDALONE_EVENT_1000: op=0x1d17 vars=string,string
// @PE: 0x0,0xf9,0x23c,0x24f,0x29e,0x3a5,0x3ca,0x3e8,0x40d,0x443,0x45b,0x4b5,0x50f,0x519,0x52a,0x10ef,0x10f1,0x1125,0x1159,0x118d,0x11b6,0x11ea,0x121e,0x1252,0x1284,0x12b8,0x12ec,0x1320,0x136a,0x139e,0x13d2,0x1406,0x1444,0x1478,0x14ac,0x14e0,0x1539,0x156d,0x15a1,0x15d5,0x15d7,0x15de,0x15e5,0x15ec,0x1618,0x164c,0x1680,0x16b4,0x16e0,0x1714,0x1748,0x177c,0x17ab,0x17df,0x1813,0x1847,0x187c,0x18b0,0x18e4,0x1918,0x1950,0x1984,0x19b8,0x19ec,0x1a15,0x1a49,0x1a7d,0x1ab1,0x1ae0,0x1b14,0x1b48,0x1b7c,0x1ba8,0x1bdc,0x1c10,0x1c44,0x1c5e,0x1c92,0x1cc6,0x1e20,0x2630,0x2639,0x2642,0x264b,0x2654,0x265d,0x2666,0x266f,0x2678,0x2681,0x268a,0x2693,0x269c,0x26a5,0x26ae,0x26b7,0x26c0,0x26c9,0x26d2,0x26db,0x26e4,0x26ed,0x26f6,0x26ff,0x2708,0x2711,0x271a,0x2723,0x272c,0x2735,0x273e,0x2747,0x2750,0x2759,0x2762,0x276b,0x2774,0x277d,0x2786,0x278f,0x2798,0x27a1,0x27aa,0x27b3,0x27bc,0x27c5,0x27ce,0x27d7,0x27e0,0x27e9,0x27f2,0x27fb,0x2804,0x280d,0x2816,0x281f,0x2828,0x2831,0x283a,0x2843,0x284c,0x2855,0x285e,0x2867,0x2870,0x2879,0x2882,0x288b,0x2894,0x289d,0x28a6,0x28af,0x28b8,0x28c1,0x28ca,0x28d1,0x28d8,0x28df,0x28e6,0x28ed,0x28f4,0x28fb,0x2902,0x2904,0x2906,0x290d,0x2924,0x292b,0x2932,0x2939,0x2940,0x2947,0x294e,0x2cb6,0x2cbb,0x2cd3,0x2d1f,0x2d26,0x2d2d,0x2d34,0x2d3a,0x2d40,0x2d51,0x2d62,0x2d73,0x2d84,0x2d95,0x2d9c,0x2da3,0x2dac,0x2db3,0x2dba,0x2dc1,0x2dc8,0x2dcf,0x2dd6,0x2ddd,0x2de4,0x2df0,0x2dfc,0x2e08,0x2e14,0x2e20,0x2e2c,0x2e38,0x2e44,0x2e50,0x2e5c,0x2e68,0x2e74,0x2e80,0x2e8c,0x2e98,0x2ea4,0x2eb0,0x2ebc,0x2ec8,0x2ed4,0x2ee0,0x2eec,0x2ef8,0x2f04,0x2f10,0x2f1c,0x2f28,0x2f34,0x2f3e,0x2f4a,0x2f56,0x2f62,0x2f6e,0x2f7a,0x2f86,0x2f92,0x363f,0x38b4,0x38fa,0x3903

task_0_event_9(var_0_int, var_1_float)
{
	var_2_bool = 0; var_3_int = 0; var_4_float = 0;
	var_0_int = var_3_int;
	var_1_float = var_4_float;
	func_8843(var_3_int, var_4_float);
	if(var_2_bool != 0) {
		return 0;
	}
	var_4097_bool = 0; var_4098_int = 0; var_4099_float = 0;
	var_0_int = var_4098_int;
	var_1_float = var_4099_float;
	func_12309(var_4098_int, var_4099_float);
	if(var_4097_bool != 0) {
		return 0;
	}
	var_4649_int = 0; var_4650_float = 0;
	var_0_int = var_4649_int;
	var_1_float = var_4650_float;
	func_12405(var_4649_int, var_4650_float);
	return 0;
}


event_26(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0;
	var_7_bool = var_0_string == "playsound";
	if(var_7_bool != 0) {
		PlaySound(var_1_string);
	} else {
		var_9_bool = var_0_string == "enable_bonfire";
		if(var_9_bool != 0) {
			_strtoi(var_4_int, var_1_string);
			var_10_int = 0;
			var_10_int = var_4_int - (int)1;
			func_7558(var_10_int);
			goto Label_7446;
		}
		var_65_bool = var_0_string == "disable_bonfire";
		if(var_65_bool == 0) goto Label_7446;
		_strtoi(var_5_int, var_1_string);
		var_66_int = 0;
		var_66_int = var_5_int - (int)1;
		func_7635(var_66_int);
	}
Label_7446:
	return 4;
	
}


event_1000(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_object = Obj();
	var_23_bool = var_0_string == "horror";
	if(var_23_bool != 0) {
		_strtoi(var_12_int, var_1_string);
		var_24_int = 0;
		var_12_int = var_24_int;
		func_392(var_24_int);
		var_39_object = GlobalVars[13];
		@@var_39_object:size(var_13_int);
		var_40_bool = 0;
		var_40_bool = 0;
		var_42_bool = var_12_int >= (int)0;
		if(var_42_bool != 0) {
			var_43_bool = var_12_int < var_13_int;
			if(var_43_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_44_object = GlobalVars[13];
			@@var_44_object:get(var_14_object, var_12_int);
			var_45_object = Obj(); var_46_int = 0;
			var_14_object = var_45_object;
			func_255(var_45_object, (int)1);
			Trace("Replaced");
			var_14_object = 0;
		} else {
			Trace("Invalid region index");
	}
		var_75_bool = var_0_string == "nail";
		if(var_75_bool != 0) {
			_strtoi(var_15_int, var_1_string);
			var_76_int = 0;
			var_15_int = var_76_int;
			func_422(var_76_int);
			var_88_object = GlobalVars[13];
			@@var_88_object:size(var_16_int);
			var_89_bool = 0;
			var_89_bool = 0;
			var_91_bool = var_15_int >= (int)0;
			if(var_91_bool != 0) {
				var_92_bool = var_15_int < var_16_int;
				if(var_92_bool != 0) {
					var_89_bool = 1;
				}
			}
			if(var_89_bool != 0) {
				var_93_object = GlobalVars[13];
				@@var_93_object:get(var_17_object, var_15_int);
				var_94_object = Obj(); var_95_int = 0;
				var_17_object = var_94_object;
				func_255(var_94_object, (int)2);
				Trace("Replaced");
				var_17_object = 0;
			} else {
				Trace("Invalid region index");
		}
			var_99_bool = var_0_string == "fogme";
			if(var_99_bool != 0) {
				func_81(Obj());
				var_100_object = var_18_object;
				@@var_18_object:GetScene(var_19_object);
				@@var_18_object:GetPosition(var_20_cvector);
				AddActorByType(var_21_object, "fog", var_19_object, var_20_cvector, CVector(0.0, 0.0, 1.0), "fog_stat.xml");
				var_21_object = 0;
				var_19_object = 0;
				var_18_object = 0;
				goto Label_7557;
			}
			var_108_bool = var_0_string == "sepia";
			if(var_108_bool != 0) {
				func_239();
				goto Label_7557;
			}
			var_112_bool = var_0_string == "nosepia";
			if(var_112_bool == 0) goto Label_7557;
			func_244();
		}
		goto Label_7557;
	}
	goto Label_7557;
	
Label_7557:
	return 20;
	
}


main()
{
	SetVariable("branch", (int)1);
	SetSaveProperty((int)0, (int)1);
	func_59();
	func_7858();
	func_8898();
	func_12370();
	var_4580_float = 0;
	func_234((float)0);
	var_4581_float = var_4580_float;
	func_13887(var_4580_float);
	var_4988_object = Obj(); var_4989_string = "";
	func_111(var_4988_object, "quest_b1_02");
	AdvanceGameTime((float)0.6666666865348816);
	
Label_55:
	Hold();
	goto Label_55;
}
EMIT "Return(); Pop(0)";


func_10244(var_5524_int, var_5525_float)
{
	var_5526_int = 0; var_5527_int = 0; var_5528_int = 0; var_5529_float = 0;
	var_5525_float = var_5529_float;
	func_12278(var_5526_int, (int)530813, (int)530812, var_5529_float);
	var_5526_int = var_5524_int;
	return 0;
}


func_5126(var_122_object)
{
	@@var_122_object:add("dt_house3_08_i2");
	@@var_122_object:add("dt_house3_09");
	@@var_122_object:add("dt_house3_09_i2");
	@@var_122_object:add("house1_se_03l");
	@@var_122_object:add("house1_se_03r");
	@@var_122_object:add("house1_se_01l");
	@@var_122_object:add("house1_se_01r");
	@@var_122_object:add("house1_se_04l");
	@@var_122_object:add("house1_se_04r");
	@@var_122_object:add("house5_11");
	@@var_122_object:add("house5_09");
	@@var_122_object:add("house5_13");
	@@var_122_object:add("house5_12");
	@@var_122_object:add("house5_14");
	@@var_122_object:add("house5_unoin03l");
	@@var_122_object:add("house5_unoin03r");
	@@var_122_object:add("house5_unoin02l");
	@@var_122_object:add("house5_unoin02r");
	@@var_122_object:add("house5_unoin01l");
	@@var_122_object:add("house5_unoin01r");
	return 0;
}


func_10253(var_5844_int, var_5845_float)
{
	var_5846_int = 0; var_5847_int = 0; var_5848_int = 0; var_5849_float = 0;
	var_5845_float = var_5849_float;
	func_12278(var_5846_int, (int)530183, (int)530182, var_5849_float);
	var_5846_int = var_5844_int;
	return 0;
}


func_1037(var_1795_int, var_1796_int)
{
	var_1797_bool = 0;
	var_1797_bool = 1;
	var_1799_bool = var_1796_int >= (int)22;
	if(var_1799_bool != 1) {
		var_1801_bool = var_1796_int < (int)6;
		if(var_1801_bool != 1) {
			var_1797_bool = 0;
		}
	}
	if(var_1797_bool != 0) {
		var_1802_int = 0; var_1803_bool = 0;
		var_1795_int = var_1802_int;
		func_729(var_1802_int, (bool)1);
	} else {
		var_1804_int = 0; var_1805_bool = 0;
		var_1795_int = var_1804_int;
		func_729(var_1804_int, (bool)0);
	}
	return 0;
	
}


func_12303(var_796_int)
{
	var_797_int = 0; var_798_int = 0;
	GetVariable("branch", var_798_int);
	var_798_int = var_796_int;
	return 2;
}


func_3087(var_2118_int, var_2119_int, var_2120_int)
{
	var_2121_int = 0; var_2122_int = 0; var_2123_int = 0; var_2124_int = 0;
	var_2125_bool = 0;
	var_2125_bool = 0;
	var_2127_bool = var_2120_int > (int)8;
	if(var_2127_bool != 0) {
		var_2129_bool = var_2120_int < (int)21;
		if(var_2129_bool != 0) {
			var_2125_bool = 1;
		}
	}
	if(var_2125_bool != 0) {
		var_2130_int = 0; var_2131_string = ""; var_2132_string = ""; var_2133_int = 0;
		var_2118_int = var_2130_int;
		func_453(var_2130_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)5);
		var_2134_int = 0; var_2135_string = ""; var_2136_string = ""; var_2137_int = 0;
		var_2118_int = var_2134_int;
		func_453(var_2134_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_2138_int = 0; var_2139_string = ""; var_2140_string = ""; var_2141_int = 0;
		var_2118_int = var_2138_int;
		func_453(var_2138_int, "pers_rat_big", "rat_big.xml", (int)2);
		var_2142_int = 0; var_2143_string = ""; var_2144_string = ""; var_2145_int = 0;
		var_2118_int = var_2142_int;
		func_479(var_2142_int, "fog", "fog.xml", (int)6);
		var_2151_bool = var_2119_int >= (int)5;
		if(var_2151_bool != 0) {
			var_2152_int = 0; var_2153_string = ""; var_2154_string = ""; var_2155_int = 0;
			var_2118_int = var_2152_int;
			func_479(var_2152_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2157_float = 0; var_2158_int = 0;
		var_2119_int = var_2158_int;
		func_1205(var_2157_float, var_2158_int);
		var_2123_int = (int)1 * var_2157_float;
		var_2203_int = var_2123_int;
		if(var_2203_int != 0) {
			var_2204_int = 0; var_2205_string = ""; var_2206_string = ""; var_2207_int = 0;
			var_2118_int = var_2204_int;
			var_2123_int = var_2207_int;
			func_453(var_2204_int, "pers_bomber", "bomber.xml", var_2207_int);
		}
	} else {
		var_2243_int = 0; var_2244_string = ""; var_2245_string = ""; var_2246_int = 0;
		var_2118_int = var_2243_int;
		func_453(var_2243_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)4);
		var_2247_int = 0; var_2248_string = ""; var_2249_string = ""; var_2250_int = 0;
		var_2118_int = var_2247_int;
		func_453(var_2247_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)4);
		var_2251_int = 0; var_2252_string = ""; var_2253_string = ""; var_2254_int = 0;
		var_2118_int = var_2251_int;
		func_453(var_2251_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_2255_int = 0; var_2256_string = ""; var_2257_string = ""; var_2258_int = 0;
		var_2118_int = var_2255_int;
		func_479(var_2255_int, "fog", "fog.xml", (int)6);
		var_2260_bool = var_2119_int >= (int)5;
		if(var_2260_bool != 0) {
			var_2261_int = 0; var_2262_string = ""; var_2263_string = ""; var_2264_int = 0;
			var_2118_int = var_2261_int;
			func_479(var_2261_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2266_float = 0; var_2267_int = 0;
		var_2119_int = var_2267_int;
		func_1205(var_2266_float, var_2267_int);
		var_2124_int = (int)2 * var_2266_float;
		var_2268_int = var_2124_int;
		if(var_2268_int == 0) goto Label_3205;
		var_2269_int = 0; var_2270_string = ""; var_2271_string = ""; var_2272_int = 0;
		var_2118_int = var_2269_int;
		var_2124_int = var_2272_int;
		func_453(var_2269_int, "pers_bomber", "bomber.xml", var_2272_int);
	}
Label_3205:
	var_2208_bool = 0; var_2209_int = 0;
	var_2119_int = var_2209_int;
	func_1322(var_2208_bool, var_2209_int);
	if(var_2208_bool != 0) {
		var_2211_int = 0; var_2212_string = ""; var_2213_string = ""; var_2214_int = 0;
		var_2118_int = var_2211_int;
		func_453(var_2211_int, "pers_sanitar", "sanitar.xml", (int)2);
	}
	var_2215_int = 0; var_2216_string = ""; var_2217_string = ""; var_2218_int = 0; var_2219_int = 0; var_2220_int = 0;
	var_2118_int = var_2215_int;
	func_466(var_2215_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2225_int = 0; var_2226_string = ""; var_2227_string = ""; var_2228_int = 0; var_2229_int = 0; var_2230_int = 0;
	var_2118_int = var_2225_int;
	func_466(var_2225_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2231_int = 0; var_2232_string = ""; var_2233_string = ""; var_2234_int = 0; var_2235_int = 0; var_2236_int = 0;
	var_2118_int = var_2231_int;
	func_466(var_2231_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2237_int = 0; var_2238_string = ""; var_2239_string = ""; var_2240_int = 0; var_2241_int = 0; var_2242_int = 0;
	var_2118_int = var_2237_int;
	func_466(var_2237_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	return 4;
	
}


func_7184(var_4129_int, var_4130_int, var_4131_object, var_4132_object, var_4133_object, var_4134_object)
{
	var_4136_bool = var_4130_int == (int)0;
	if(var_4136_bool != 0) {
		var_4137_int = 0; var_4138_bool = 0;
		func_746((int)14, (bool)0);
		var_4139_int = 0; var_4140_bool = 0; var_4141_int = 0;
		func_763((int)14, (bool)0, (int)1);
		var_4142_int = 0; var_4143_int = 0; var_4144_object = Obj(); var_4145_object = Obj(); var_4146_object = Obj();
		var_4129_int = var_4143_int;
		var_4131_object = var_4144_object;
		var_4132_object = var_4145_object;
		var_4133_object = var_4146_object;
		func_670((int)14, var_4143_int, var_4144_object, var_4145_object, var_4146_object);
		var_4147_object = Obj(); var_4148_int = 0;
		var_4134_object = var_4147_object;
		func_255(var_4147_object, (int)2);
		var_4149_int = 0; var_4150_bool = 0; var_4151_int = 0;
		func_820((int)14, (bool)0, (int)5);
		var_4152_int = 0; var_4153_bool = 0; var_4154_int = 0;
		func_882((int)14, (bool)1, (int)5);
	}
	var_4155_int = 0; var_4156_bool = 0;
	func_729((int)14, (bool)0);
	var_4157_int = 0; var_4158_int = 0; var_4159_int = 0;
	var_4129_int = var_4158_int;
	var_4130_int = var_4159_int;
	func_3421((int)14, var_4158_int, var_4159_int);
	return 0;
}


func_6163(var_3964_int, var_3965_int, var_3966_object, var_3967_object, var_3968_object, var_3969_object)
{
	var_3971_bool = var_3965_int == (int)0;
	if(var_3971_bool != 0) {
		var_3972_int = 0; var_3973_bool = 0;
		func_746((int)9, (bool)0);
		var_3974_int = 0; var_3975_bool = 0; var_3976_int = 0;
		func_763((int)9, (bool)0, (int)1);
		var_3977_int = 0; var_3978_int = 0; var_3979_object = Obj(); var_3980_object = Obj(); var_3981_object = Obj();
		var_3964_int = var_3978_int;
		var_3966_object = var_3979_object;
		var_3967_object = var_3980_object;
		var_3968_object = var_3981_object;
		func_670((int)9, var_3978_int, var_3979_object, var_3980_object, var_3981_object);
		var_3982_object = Obj(); var_3983_int = 0;
		var_3969_object = var_3982_object;
		func_255(var_3982_object, (int)2);
		var_3984_int = 0; var_3985_bool = 0; var_3986_int = 0;
		func_820((int)9, (bool)0, (int)7);
		var_3987_int = 0; var_3988_bool = 0; var_3989_int = 0;
		func_882((int)9, (bool)1, (int)7);
	}
	var_3990_int = 0; var_3991_bool = 0;
	func_729((int)9, (bool)0);
	var_3992_int = 0; var_3993_int = 0; var_3994_int = 0;
	var_3964_int = var_3993_int;
	var_3965_int = var_3994_int;
	func_3609((int)9, var_3993_int, var_3994_int);
	return 0;
}


func_12309(var_4097_bool, var_4098_int)
{
	var_4100_int = 0; var_4101_int = 0; var_4102_int = 0; var_4103_int = 0; var_4104_int = 0; var_4105_int = 0; var_4106_int = 0; var_4107_int = 0;
	var_4108_bool = 0;
	var_4108_bool = 0;
	var_4110_bool = var_4098_int > (int)42000;
	if(var_4110_bool != 0) {
		var_4112_bool = var_4098_int < (int)42288;
		if(var_4112_bool != 0) {
			var_4108_bool = 1;
		}
	}
	if(var_4108_bool != 0) {
		var_4114_int = var_4098_int - (int)42000;
		var_4104_int = var_4114_int / (int)24;
		var_4117_int = var_4098_int - (int)42000;
		var_4105_int = var_4117_int % (int)24;
		var_4119_int = 0; var_4120_int = 0;
		var_4119_int = var_4104_int + (int)1;
		var_4105_int = var_4120_int;
		func_8222(var_4119_int, var_4120_int);
		var_4097_bool = 1;
		return 8;
	}
	var_4256_bool = 0;
	var_4256_bool = 0;
	var_4258_bool = var_4098_int > (int)40000;
	if(var_4258_bool != 0) {
		var_4260_bool = var_4098_int < (int)40288;
		if(var_4260_bool != 0) {
			var_4256_bool = 1;
		}
	}
	if(var_4256_bool != 0) {
		var_4262_int = var_4098_int - (int)40000;
		var_4106_int = var_4262_int / (int)24;
		var_4265_int = var_4098_int - (int)40000;
		var_4107_int = var_4265_int % (int)24;
		var_4267_int = 0; var_4268_int = 0;
		var_4267_int = var_4106_int + (int)1;
		var_4107_int = var_4268_int;
		func_8520(var_4267_int, var_4268_int);
		var_4589_int = 0; var_4590_int = 0;
		var_4589_int = var_4106_int + (int)1;
		var_4107_int = var_4590_int;
		func_14634(var_4589_int, var_4590_int);
		var_4097_bool = 1;
		return 8;
	}
	var_4097_bool = 0;
	return 8;
}


func_10262(var_4863_int, var_4864_float)
{
	var_4865_int = 0; var_4866_int = 0; var_4867_int = 0; var_4868_float = 0;
	var_4864_float = var_4868_float;
	func_12278(var_4865_int, (int)530855, (int)530854, var_4868_float);
	var_4865_int = var_4863_int;
	return 0;
}


func_8222(var_4119_int, var_4120_int)
{
	var_4122_bool = 0; var_4123_int = 0; var_4124_int = 0; var_4125_bool = 0; var_4126_int = 0; var_4127_int = 0;
	var_4129_bool = var_4120_int == (int)0;
	if(var_4129_bool != 0) {
		var_4125_bool = 0;
		var_4131_bool = var_4119_int == (int)2;
		if(var_4131_bool != 0) {
			var_4132_int = 0;
			func_12303(var_4132_int);
			var_4134_bool = var_4132_int == (int)0;
			if(var_4134_bool != 0) {
				GetVariable("d1q01", var_4126_int);
				var_4137_bool = var_4126_int != (int)1000;
				if(var_4137_bool != 0) {
					var_4125_bool = 1;
					UnlockAchievement("ACHIEVEMENT_UP");
					GameOver("gameover_fail.xml");
				}
			} else {
							var_4248_int = 0;
							func_12303(var_4248_int);
							var_4250_bool = var_4248_int == (int)1;
							if(var_4250_bool == 0) goto Label_8269;
							GetVariable("b1q01", var_4127_int);
							var_4253_bool = var_4127_int != (int)1000;
							if(var_4253_bool == 0) goto Label_8269;
							var_4125_bool = 1;
							UnlockAchievement("ACHIEVEMENT_UP");
							GameOver("gameover_fail.xml");
			}
		}
	Label_8269:
		var_4140_bool = var_4125_bool == 0; //@nz
		if(var_4140_bool != 0) {
			var_4141_int = 0;
			func_12303(var_4141_int);
			var_4143_bool = var_4141_int == (int)0;
			if(var_4143_bool != 0) {
				var_4145_bool = var_4119_int == (int)2;
				if(var_4145_bool != 0) {
					UnlockAchievement("ACHIEVEMENT_BACH_1");
				} else {
					var_4150_bool = var_4119_int == (int)3;
					if(var_4150_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_2");
						goto Label_8353;
					}
					var_4153_bool = var_4119_int == (int)4;
					if(var_4153_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_3");
						goto Label_8353;
					}
					var_4156_bool = var_4119_int == (int)5;
					if(var_4156_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_4");
						goto Label_8353;
					}
					var_4159_bool = var_4119_int == (int)6;
					if(var_4159_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_5");
						goto Label_8353;
					}
					var_4162_bool = var_4119_int == (int)7;
					if(var_4162_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_6");
						goto Label_8353;
					}
					var_4165_bool = var_4119_int == (int)8;
					if(var_4165_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_7");
						goto Label_8353;
					}
					var_4168_bool = var_4119_int == (int)9;
					if(var_4168_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_8");
						goto Label_8353;
					}
					var_4171_bool = var_4119_int == (int)10;
					if(var_4171_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_9");
						goto Label_8353;
					}
					var_4174_bool = var_4119_int == (int)11;
					if(var_4174_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BACH_10");
						goto Label_8353;
					}
					var_4177_bool = var_4119_int == (int)12;
					if(var_4177_bool == 0) goto Label_8353;
					UnlockAchievement("ACHIEVEMENT_BACH_11");
			}
				var_4179_int = 0;
				func_12303(var_4179_int);
				var_4181_bool = var_4179_int == (int)1;
				if(var_4181_bool != 0) {
					var_4183_bool = var_4119_int == (int)2;
					if(var_4183_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_BURAH_1");
					} else {
						var_4186_bool = var_4119_int == (int)3;
						if(var_4186_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_2");
							goto Label_8436;
						}
						var_4189_bool = var_4119_int == (int)4;
						if(var_4189_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_3");
							goto Label_8436;
						}
						var_4192_bool = var_4119_int == (int)5;
						if(var_4192_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_4");
							goto Label_8436;
						}
						var_4195_bool = var_4119_int == (int)6;
						if(var_4195_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_5");
							goto Label_8436;
						}
						var_4198_bool = var_4119_int == (int)7;
						if(var_4198_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_6");
							goto Label_8436;
						}
						var_4201_bool = var_4119_int == (int)8;
						if(var_4201_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_7");
							goto Label_8436;
						}
						var_4204_bool = var_4119_int == (int)9;
						if(var_4204_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_8");
							goto Label_8436;
						}
						var_4207_bool = var_4119_int == (int)10;
						if(var_4207_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_9");
							goto Label_8436;
						}
						var_4210_bool = var_4119_int == (int)11;
						if(var_4210_bool != 0) {
							UnlockAchievement("ACHIEVEMENT_BURAH_10");
							goto Label_8436;
						}
						var_4213_bool = var_4119_int == (int)12;
						if(var_4213_bool == 0) goto Label_8436;
						UnlockAchievement("ACHIEVEMENT_BURAH_11");
				}
					var_4216_bool = var_4119_int == (int)2;
					if(var_4216_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_1");
						goto Label_8513;
					}
					var_4219_bool = var_4119_int == (int)3;
					if(var_4219_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_2");
						goto Label_8513;
					}
					var_4222_bool = var_4119_int == (int)4;
					if(var_4222_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_3");
						goto Label_8513;
					}
					var_4225_bool = var_4119_int == (int)5;
					if(var_4225_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_4");
						goto Label_8513;
					}
					var_4228_bool = var_4119_int == (int)6;
					if(var_4228_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_5");
						goto Label_8513;
					}
					var_4231_bool = var_4119_int == (int)7;
					if(var_4231_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_6");
						goto Label_8513;
					}
					var_4234_bool = var_4119_int == (int)8;
					if(var_4234_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_7");
						goto Label_8513;
					}
					var_4237_bool = var_4119_int == (int)9;
					if(var_4237_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_8");
						goto Label_8513;
					}
					var_4240_bool = var_4119_int == (int)10;
					if(var_4240_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_9");
						goto Label_8513;
					}
					var_4243_bool = var_4119_int == (int)11;
					if(var_4243_bool != 0) {
						UnlockAchievement("ACHIEVEMENT_CLARA_10");
						goto Label_8513;
					}
					var_4246_bool = var_4119_int == (int)12;
					if(var_4246_bool == 0) goto Label_8513;
					UnlockAchievement("ACHIEVEMENT_CLARA_11");

				}
			Label_8436:
				goto Label_8513;
			}
		Label_8353:
			goto Label_8513;
		}
	Label_8513:
		SendWorldWndMessage((int)101);
		SetVariable("c_iWM_RealDayChange", var_4119_int);
	}
	return 6;
	
}


func_10271(var_5307_int, var_5308_float)
{
	var_5309_int = 0; var_5310_int = 0; var_5311_int = 0; var_5312_float = 0;
	var_5308_float = var_5312_float;
	func_12278(var_5309_int, (int)529874, (int)529873, var_5312_float);
	var_5309_int = var_5307_int;
	return 0;
}


func_1060(var_791_bool, var_792_int, var_793_int)
{
	var_794_int = 0; var_795_int = 0;
	func_12303((int)0);
	var_796_int = var_795_int;
	var_801_bool = var_795_int == (int)1;
	if(var_801_bool != 0) {
		var_802_bool = 0;
		var_802_bool = 0;
		var_804_bool = var_792_int == (int)0;
		if(var_804_bool != 0) {
			var_806_bool = var_793_int < (int)21;
			if(var_806_bool != 0) {
				var_802_bool = 1;
			}
		}
		if(var_802_bool != 0) {
			var_791_bool = 1;
			return 2;
		}
	} else {
		var_808_bool = var_795_int == (int)2;
		if(var_808_bool == 0) goto Label_1089;
		var_810_bool = var_792_int == (int)5;
		if(var_810_bool == 0) goto Label_1089;
		var_791_bool = 1;
		return 2;
	}
Label_1089:
	var_791_bool = 0;
	return 2;
	
}


func_10280(var_5315_int, var_5316_float)
{
	var_5317_int = 0; var_5318_int = 0; var_5319_int = 0; var_5320_float = 0;
	var_5316_float = var_5320_float;
	func_12278(var_5317_int, (int)529872, (int)529871, var_5320_float);
	var_5317_int = var_5315_int;
	return 0;
}


func_10289(var_4748_int, var_4749_float)
{
	var_4750_int = 0; var_4751_int = 0; var_4752_int = 0; var_4753_float = 0;
	var_4749_float = var_4753_float;
	func_12278(var_4750_int, (int)529858, (int)529857, var_4753_float);
	var_4750_int = var_4748_int;
	return 0;
}


func_11315()
{
	var_4991_object = Obj(); var_4992_object = Obj(); var_4993_object = Obj(); var_4994_object = Obj();
	func_12286(Obj());
	var_4995_object = var_4993_object;
	@@var_4993_object:FindMark(var_4994_object, "b10q04GirlGotoKapella");
	var_4997_object = var_4994_object;
	if(var_4997_object != 0) {
		@@var_4994_object:Remove();
	}
	@@var_4993_object:FindMark(var_4994_object, "b10q04MatGotoMorlok");
	var_4999_object = var_4994_object;
	if(var_4999_object != 0) {
		@@var_4994_object:Remove();
	}
	@@var_4993_object:FindMark(var_4994_object, "b10q04BlockGotoOfficer");
	var_5001_object = var_4994_object;
	if(var_5001_object != 0) {
		@@var_4994_object:Remove();
	}
	@@var_4993_object:FindMark(var_4994_object, "b10q04KapellaGotoBlock");
	var_5003_object = var_4994_object;
	if(var_5003_object != 0) {
		@@var_4994_object:Remove();
	}
	@@var_4993_object:FindMark(var_4994_object, "b10q04MorlokGotoLaska");
	var_5005_object = var_4994_object;
	if(var_5005_object != 0) {
		@@var_4994_object:Remove();
	}
	@@var_4993_object:FindMark(var_4994_object, "b10q04MorlokGotoMishka");
	var_5007_object = var_4994_object;
	if(var_5007_object != 0) {
		@@var_4994_object:Remove();
	}
	@@var_4993_object:FindMark(var_4994_object, "b10q04MorlokGotoNotkin");
	var_5009_object = var_4994_object;
	if(var_5009_object != 0) {
		@@var_4994_object:Remove();
	}
	@@var_4993_object:FindMark(var_4994_object, "b10q04MorlokGotoSpi4ka");
	var_5011_object = var_4994_object;
	if(var_5011_object != 0) {
		@@var_4994_object:Remove();
	}
	@@var_4993_object:FindMark(var_4994_object, "b10q03KapellaGotoMishka");
	var_5013_object = var_4994_object;
	if(var_5013_object != 0) {
		@@var_4994_object:Remove();
	}
	@@var_4993_object:FindMark(var_4994_object, "b10q03MishkaGotoDoll");
	var_5015_object = var_4994_object;
	if(var_5015_object != 0) {
		@@var_4994_object:Remove();
	}
	@@var_4993_object:FindMark(var_4994_object, "b10q01StarshinaGotoKurgan");
	var_5017_object = var_4994_object;
	if(var_5017_object != 0) {
		@@var_4994_object:Remove();
	}
	var_5018_bool = 0; var_5019_int = 0;
	func_12261(var_5018_bool, (int)305);
	var_5020_bool = 0; var_5021_int = 0;
	func_12261(var_5020_bool, (int)545);
	var_5022_bool = 0; var_5023_int = 0;
	func_12261(var_5022_bool, (int)594);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10298(var_5627_int, var_5628_float)
{
	var_5629_int = 0; var_5630_int = 0; var_5631_int = 0; var_5632_float = 0;
	var_5628_float = var_5632_float;
	func_12278(var_5629_int, (int)530666, (int)530665, var_5632_float);
	var_5629_int = var_5627_int;
	return 0;
}


func_59()
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_object = Obj(); var_10_object = Obj(); var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0);
	FindActor(var_9_object, "player");
	GetMainOutdoorScene(var_10_object);
	var_15_bool = var_10_object == 0; //@nz
	if(var_15_bool != 0) {
		Trace("Starting scene not found");
		return 10;
	}
	@@var_10_object:GetLocator("pt_birth_Burah", var_11_bool, var_12_cvector, var_13_cvector);
	var_18_bool = var_11_bool;
	if(var_18_bool != 0) {
		Teleport(var_9_object, var_10_object, var_12_cvector, var_13_cvector);
	}
	return 10;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


func_4160(var_3428_int, var_3429_int, var_3430_int)
{
	var_3431_int = 0; var_3432_int = 0; var_3433_int = 0; var_3434_int = 0; var_3435_int = 0; var_3436_int = 0; var_3437_int = 0; var_3438_int = 0;
	var_3439_bool = 0;
	var_3439_bool = 0;
	var_3441_bool = var_3430_int > (int)8;
	if(var_3441_bool != 0) {
		var_3443_bool = var_3430_int < (int)21;
		if(var_3443_bool != 0) {
			var_3439_bool = 1;
		}
	}
	if(var_3439_bool != 0) {
		var_3444_int = 0; var_3445_string = ""; var_3446_string = ""; var_3447_int = 0;
		var_3428_int = var_3444_int;
		func_453(var_3444_int, "pers_rat", "rat.xml", (int)4);
		var_3448_int = 0; var_3449_string = ""; var_3450_string = ""; var_3451_int = 0;
		var_3428_int = var_3448_int;
		func_453(var_3448_int, "pers_alkash", "alkash.xml", (int)2);
		var_3452_int = 0; var_3453_string = ""; var_3454_string = ""; var_3455_int = 0;
		var_3428_int = var_3452_int;
		func_453(var_3452_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3457_float = 0; var_3458_int = 0;
		var_3429_int = var_3458_int;
		func_1115(var_3457_float, var_3458_int);
		var_3435_int = (int)2 * var_3457_float;
		var_3459_int = var_3435_int;
		if(var_3459_int != 0) {
			var_3460_int = 0; var_3461_string = ""; var_3462_string = ""; var_3463_int = 0;
			var_3428_int = var_3460_int;
			var_3435_int = var_3463_int;
			func_453(var_3460_int, "pers_grabitel", "grabitel.xml", var_3463_int);
		}
		var_3465_int = var_3429_int + (int)1;
		var_3467_bool = var_3465_int >= (int)2;
		if(var_3467_bool != 0) {
			var_3468_int = 0; var_3469_string = ""; var_3470_string = ""; var_3471_int = 0;
			var_3428_int = var_3468_int;
			func_453(var_3468_int, "pers_patrool", "patrol.xml", (int)2);
			var_3472_bool = 0; var_3473_int = 0;
			var_3429_int = var_3473_int;
			func_1322(var_3472_bool, var_3473_int);
			if(var_3472_bool != 0) {
				var_3474_int = 0; var_3475_string = ""; var_3476_string = ""; var_3477_int = 0;
				var_3428_int = var_3474_int;
				func_453(var_3474_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3479_float = 0; var_3480_int = 0;
		var_3429_int = var_3480_int;
		func_1205(var_3479_float, var_3480_int);
		var_3436_int = (int)1 * var_3479_float;
		var_3481_int = var_3436_int;
		if(var_3481_int != 0) {
			var_3482_int = 0; var_3483_string = ""; var_3484_string = ""; var_3485_int = 0;
			var_3428_int = var_3482_int;
			var_3436_int = var_3485_int;
			func_453(var_3482_int, "pers_bomber", "bomber.xml", var_3485_int);
		}
	} else {
		var_3492_int = 0; var_3493_string = ""; var_3494_string = ""; var_3495_int = 0;
		var_3428_int = var_3492_int;
		func_453(var_3492_int, "pers_rat", "rat.xml", (int)8);
		var_3496_int = 0; var_3497_string = ""; var_3498_string = ""; var_3499_int = 0;
		var_3428_int = var_3496_int;
		func_453(var_3496_int, "pers_alkash", "alkash.xml", (int)1);
		var_3500_int = 0; var_3501_string = ""; var_3502_string = ""; var_3503_int = 0;
		var_3428_int = var_3500_int;
		func_453(var_3500_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3505_float = 0; var_3506_int = 0;
		var_3429_int = var_3506_int;
		func_1115(var_3505_float, var_3506_int);
		var_3437_int = (int)3 * var_3505_float;
		var_3507_int = var_3437_int;
		if(var_3507_int != 0) {
			var_3508_int = 0; var_3509_string = ""; var_3510_string = ""; var_3511_int = 0;
			var_3428_int = var_3508_int;
			var_3437_int = var_3511_int;
			func_453(var_3508_int, "pers_grabitel", "grabitel.xml", var_3511_int);
		}
		var_3513_int = var_3429_int + (int)1;
		var_3515_bool = var_3513_int >= (int)2;
		if(var_3515_bool != 0) {
			var_3516_int = 0; var_3517_string = ""; var_3518_string = ""; var_3519_int = 0;
			var_3428_int = var_3516_int;
			func_453(var_3516_int, "pers_patrool", "patrol.xml", (int)1);
			var_3520_bool = 0; var_3521_int = 0;
			var_3429_int = var_3521_int;
			func_1322(var_3520_bool, var_3521_int);
			if(var_3520_bool != 0) {
				var_3522_int = 0; var_3523_string = ""; var_3524_string = ""; var_3525_int = 0;
				var_3428_int = var_3522_int;
				func_453(var_3522_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3527_float = 0; var_3528_int = 0;
		var_3429_int = var_3528_int;
		func_1205(var_3527_float, var_3528_int);
		var_3438_int = (int)1 * var_3527_float;
		var_3529_int = var_3438_int;
		if(var_3529_int == 0) goto Label_4322;
		var_3530_int = 0; var_3531_string = ""; var_3532_string = ""; var_3533_int = 0;
		var_3428_int = var_3530_int;
		var_3438_int = var_3533_int;
		func_453(var_3530_int, "pers_bomber", "bomber.xml", var_3533_int);
	}
Label_4322:
	var_3486_bool = 0; var_3487_int = 0;
	var_3429_int = var_3487_int;
	func_1322(var_3486_bool, var_3487_int);
	if(var_3486_bool != 0) {
		var_3488_int = 0; var_3489_string = ""; var_3490_string = ""; var_3491_int = 0;
		var_3428_int = var_3488_int;
		func_453(var_3488_int, "pers_sanitar", "sanitar.xml", (int)2);
	}
	return 8;
	
}


func_10307(var_5191_int, var_5192_float)
{
	var_5193_int = 0; var_5194_int = 0; var_5195_int = 0; var_5196_float = 0;
	var_5192_float = var_5196_float;
	func_12278(var_5193_int, (int)529878, (int)529877, var_5196_float);
	var_5193_int = var_5191_int;
	return 0;
}


func_1091(var_768_float, var_769_int)
{
	var_771_int = var_769_int + (int)1;
	var_773_bool = var_771_int == (int)7;
	if(var_773_bool != 0) {
		var_768_float = 2;
		return 0;
	}
	var_775_int = var_769_int + (int)1;
	var_777_bool = var_775_int == (int)8;
	if(var_777_bool != 0) {
		var_768_float = 0;
		return 0;
	}
	var_779_int = var_769_int + (int)1;
	var_781_bool = var_779_int == (int)1;
	if(var_781_bool != 0) {
		var_768_float = 0;
		return 0;
	}
	var_768_float = 1;
	return 0;
}


func_7236(var_313_object)
{
	@@var_313_object:add("lc_house3_05_i2");
	@@var_313_object:add("lc_house3_05");
	@@var_313_object:add("lc_house3_06_i2");
	@@var_313_object:add("lc_house3_06");
	@@var_313_object:add("lc_House6_06");
	@@var_313_object:add("lc_house3_04_i2");
	@@var_313_object:add("lc_house3_04");
	@@var_313_object:add("house3_plus_03_i2");
	return 0;
}


func_5188(var_1296_int, var_1297_int, var_1298_object, var_1299_object, var_1300_object, var_1301_object)
{
	var_1303_bool = var_1297_int == (int)0;
	if(var_1303_bool != 0) {
		var_1304_int = 0; var_1305_bool = 0;
		func_746((int)4, (bool)0);
		var_1306_int = 0; var_1307_bool = 0; var_1308_int = 0;
		func_763((int)4, (bool)0, (int)1);
		var_1309_int = 0; var_1310_int = 0; var_1311_object = Obj(); var_1312_object = Obj(); var_1313_object = Obj();
		var_1309_int = 4;
		var_1296_int = var_1310_int;
		var_1298_object = var_1311_object;
		var_1299_object = var_1312_object;
		var_1300_object = var_1313_object;
		func_572(var_1310_int, var_1311_object, var_1312_object, var_1313_object);
		var_1314_object = Obj(); var_1315_int = 0;
		var_1301_object = var_1314_object;
		func_255(var_1314_object, (int)0);
		var_1316_int = 0; var_1317_bool = 0; var_1318_int = 0;
		func_820((int)4, (bool)0, (int)4);
		var_1319_int = 0; var_1320_bool = 0; var_1321_int = 0;
		func_882((int)4, (bool)0, (int)4);
	}
	var_1322_int = 0; var_1323_int = 0;
	var_1297_int = var_1323_int;
	func_970((int)4, var_1323_int);
	var_1336_int = 0; var_1337_int = 0; var_1338_int = 0;
	var_1296_int = var_1337_int;
	var_1297_int = var_1338_int;
	func_1847((int)4, var_1337_int, var_1338_int);
	return 0;
}


func_6215(var_226_object)
{
	@@var_226_object:add("r4_house_2_02");
	@@var_226_object:add("r4_house3_03_i2");
	@@var_226_object:add("r4_house3_03");
	@@var_226_object:add("r4_house4_02_i2");
	@@var_226_object:add("r4_house4_02");
	@@var_226_object:add("r4_house4_01_i2");
	@@var_226_object:add("r4_house4_01");
	@@var_226_object:add("r4_house3_02_i2");
	@@var_226_object:add("r4_house3_02");
	@@var_226_object:add("r4_house_2_01");
	@@var_226_object:add("r4_house3_01_i2");
	@@var_226_object:add("r4_house3_01");
	@@var_226_object:add("r4_house7_01");
	@@var_226_object:add("r4_House6_01");
	@@var_226_object:add("r4_house_2_03");
	@@var_226_object:add("r4_House6_03");
	@@var_226_object:add("r4_house_2_04");
	return 0;
}


func_10316(var_5245_int, var_5246_float)
{
	var_5247_int = 0; var_5248_int = 0; var_5249_int = 0; var_5250_float = 0;
	var_5246_float = var_5250_float;
	func_12278(var_5247_int, (int)520962, (int)520961, var_5250_float);
	var_5247_int = var_5245_int;
	return 0;
}


func_81(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	FindActor(var_102_object, "player");
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_12370()
{
	var_4365_float = 0; var_4366_int = 0; var_4367_float = 0; var_4368_float = 0; var_4369_int = 0; var_4370_float = 0;
	GetGameTime(var_4368_float);
	var_4369_int = 1;
	
Label_12374:
	var_4372_bool = var_4369_int < (int)288;
	if(var_4372_bool != 0) {
		var_4370_float = (float)1.0 * var_4369_int;
		var_4374_bool = var_4370_float < var_4368_float;
		if(var_4374_bool != 0) {
		} else {
			var_4377_int = (int)40000 + var_4369_int;
			SetTimeEvent(var_4377_int, var_4370_float);
			var_4370_float = var_4370_float - (float)0.0033333334140479565;
			var_4379_bool = var_4370_float < var_4368_float;
			if(var_4379_bool != 0) {
				goto Label_12395;
			}
			var_4381_int = (int)42000 + var_4369_int;
			SetTimeEvent(var_4381_int, var_4370_float);
	}
		func_8150();
		func_14590();
		var_4369_int = var_4369_int + (int)1;
		goto Label_12374;
	}
	return 6;
	
}


func_10325(var_4756_int, var_4757_float)
{
	var_4758_int = 0; var_4759_int = 0; var_4760_int = 0; var_4761_float = 0;
	var_4757_float = var_4761_float;
	func_12278(var_4758_int, (int)529860, (int)529859, var_4761_float);
	var_4758_int = var_4756_int;
	return 0;
}


func_88(var_585_bool, var_586_object, var_587_string)
{
	var_588_bool = 0; var_589_bool = 0;
	var_592_bool = IsFuncExist(var_586_object, "HasProperty", (int)2);
	var_593_bool = var_592_bool == 0; //@nz
	if(var_593_bool != 0) {
		var_585_bool = 0;
		return 2;
	}
	@@var_586_object:HasProperty(var_587_string, var_589_bool);
	var_589_bool = var_585_bool;
	return 2;
}


func_1115(var_3277_float, var_3278_int)
{
	var_3280_int = var_3278_int + (int)1;
	var_3282_bool = var_3280_int == (int)1;
	if(var_3282_bool != 0) {
		var_3277_float = 0;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	var_3284_int = var_3278_int + (int)1;
	var_3286_bool = var_3284_int == (int)2;
	if(var_3286_bool != 0) {
		var_3277_float = 0;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	var_3288_int = var_3278_int + (int)1;
	var_3290_bool = var_3288_int == (int)3;
	if(var_3290_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	var_3292_int = var_3278_int + (int)1;
	var_3294_bool = var_3292_int == (int)4;
	if(var_3294_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	var_3296_int = var_3278_int + (int)1;
	var_3298_bool = var_3296_int == (int)5;
	if(var_3298_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	var_3300_int = var_3278_int + (int)1;
	var_3302_bool = var_3300_int == (int)6;
	if(var_3302_bool != 0) {
		var_3277_float = 2;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	var_3304_int = var_3278_int + (int)1;
	var_3306_bool = var_3304_int == (int)7;
	if(var_3306_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	var_3308_int = var_3278_int + (int)1;
	var_3310_bool = var_3308_int == (int)8;
	if(var_3310_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	var_3312_int = var_3278_int + (int)1;
	var_3314_bool = var_3312_int == (int)9;
	if(var_3314_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	var_3316_int = var_3278_int + (int)1;
	var_3318_bool = var_3316_int == (int)10;
	if(var_3318_bool != 0) {
		var_3277_float = 1;
		return 0;
	EMIT "GOTO 0x4b3";
	}
	var_3320_int = var_3278_int + (int)1;
	var_3322_bool = var_3320_int == (int)11;
	if(var_3322_bool != 0) {
		var_3277_float = 1;
		return 0;
	}
	var_3277_float = 0;
	return 0;
}


func_10334(var_5260_int, var_5261_float)
{
	var_5262_int = 0; var_5263_int = 0; var_5264_int = 0; var_5265_float = 0;
	var_5261_float = var_5265_float;
	func_12278(var_5262_int, (int)520964, (int)520963, var_5265_float);
	var_5262_int = var_5260_int;
	return 0;
}


func_7262(var_1947_int, var_1948_int, var_1949_object, var_1950_object, var_1951_object, var_1952_object)
{
	var_1954_bool = var_1948_int == (int)0;
	if(var_1954_bool != 0) {
		var_1955_int = 0; var_1956_bool = 0;
		func_746((int)15, (bool)0);
		var_1957_int = 0; var_1958_bool = 0; var_1959_int = 0;
		func_763((int)15, (bool)0, (int)1);
		var_1960_int = 0; var_1961_int = 0; var_1962_object = Obj(); var_1963_object = Obj(); var_1964_object = Obj();
		var_1960_int = 15;
		var_1947_int = var_1961_int;
		var_1949_object = var_1962_object;
		var_1950_object = var_1963_object;
		var_1951_object = var_1964_object;
		func_572(var_1961_int, var_1962_object, var_1963_object, var_1964_object);
		var_1965_object = Obj(); var_1966_int = 0;
		var_1952_object = var_1965_object;
		func_255(var_1965_object, (int)0);
		var_1967_int = 0; var_1968_bool = 0; var_1969_int = 0;
		func_820((int)15, (bool)0, (int)5);
		var_1970_int = 0; var_1971_bool = 0; var_1972_int = 0;
		func_882((int)15, (bool)0, (int)5);
	}
	var_1973_int = 0; var_1974_int = 0;
	var_1948_int = var_1974_int;
	func_1037((int)15, var_1974_int);
	var_1975_int = 0; var_1976_int = 0; var_1977_int = 0;
	var_1947_int = var_1976_int;
	var_1948_int = var_1977_int;
	func_1326((int)15, var_1976_int, var_1977_int);
	return 0;
}


func_100(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj();
	CreateObjectVector(var_42_object);
	var_42_object = var_40_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_10343(var_5362_int, var_5363_float)
{
	var_5364_int = 0; var_5365_int = 0; var_5366_int = 0; var_5367_float = 0;
	var_5363_float = var_5367_float;
	func_12278(var_5364_int, (int)529876, (int)529875, var_5367_float);
	var_5364_int = var_5362_int;
	return 0;
}


func_106(var_4658_int, var_4659_string)
{
	var_4660_int = 0; var_4661_int = 0;
	GetVariable(var_4659_string, var_4661_int);
	var_4661_int = var_4658_int;
	return 2;
}


func_2156(var_750_int, var_751_int, var_752_int)
{
	var_753_int = 0; var_754_int = 0;
	var_756_int = var_751_int + (int)1;
	var_758_bool = var_756_int == (int)12;
	if(var_758_bool != 0) {
		return 2;
	}
	var_759_bool = 0;
	var_759_bool = 0;
	var_760_bool = 0;
	var_760_bool = 1;
	var_762_bool = var_752_int < (int)7;
	if(var_762_bool != 1) {
		var_764_bool = var_752_int > (int)21;
		if(var_764_bool != 1) {
			var_760_bool = 0;
		}
	}
	if(var_760_bool != 0) {
		var_766_bool = var_751_int != (int)0;
		if(var_766_bool != 0) {
			var_759_bool = 1;
		}
	}
	if(var_759_bool != 0) {
		var_768_float = 0; var_769_int = 0;
		var_751_int = var_769_int;
		func_1091(var_768_float, var_769_int);
		var_754_int = (int)1 * var_768_float;
		var_782_int = var_754_int;
		if(var_782_int != 0) {
			var_783_int = 0; var_784_string = ""; var_785_string = ""; var_786_int = 0;
			var_750_int = var_783_int;
			var_754_int = var_786_int;
			func_453(var_783_int, "pers_grabitel", "grabitel.xml", var_786_int);
		}
	}
	var_791_bool = 0; var_792_int = 0; var_793_int = 0;
	var_751_int = var_792_int;
	var_752_int = var_793_int;
	func_1060(var_791_bool, var_792_int, var_793_int);
	if(var_791_bool != 0) {
		var_811_int = 0; var_812_string = ""; var_813_string = ""; var_814_int = 0;
		var_750_int = var_811_int;
		func_453(var_811_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_815_int = 0; var_816_string = ""; var_817_string = ""; var_818_int = 0;
		var_750_int = var_815_int;
		func_453(var_815_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_819_int = 0; var_820_string = ""; var_821_string = ""; var_822_int = 0;
		var_750_int = var_819_int;
		func_453(var_819_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_823_int = 0; var_824_string = ""; var_825_string = ""; var_826_int = 0;
		var_750_int = var_823_int;
		func_453(var_823_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_827_int = 0; var_828_string = ""; var_829_string = ""; var_830_int = 0;
		var_750_int = var_827_int;
		func_453(var_827_int, "pers_boy", "boy.xml", (int)1);
		var_831_int = 0; var_832_string = ""; var_833_string = ""; var_834_int = 0;
		var_750_int = var_831_int;
		func_453(var_831_int, "pers_alkash", "alkash.xml", (int)1);
		var_835_int = 0; var_836_string = ""; var_837_string = ""; var_838_int = 0;
		var_750_int = var_835_int;
		func_453(var_835_int, "pers_girl", "girl.xml", (int)1);
		var_839_int = 0; var_840_string = ""; var_841_string = ""; var_842_int = 0;
		var_750_int = var_839_int;
		func_453(var_839_int, "pers_girl", "girl2.xml", (int)1);
	} else {
		var_843_bool = 0;
		var_843_bool = 0;
		var_845_bool = var_752_int > (int)8;
		if(var_845_bool != 0) {
			var_847_bool = var_752_int < (int)21;
			if(var_847_bool != 0) {
				var_843_bool = 1;
			}
		}
		if(var_843_bool != 0) {
			var_848_int = 0; var_849_string = ""; var_850_string = ""; var_851_int = 0;
			var_750_int = var_848_int;
			func_453(var_848_int, "pers_boy", "boy.xml", (int)1);
			var_852_int = 0; var_853_string = ""; var_854_string = ""; var_855_int = 0;
			var_750_int = var_852_int;
			func_453(var_852_int, "pers_alkash", "alkash.xml", (int)1);
			var_856_int = 0; var_857_string = ""; var_858_string = ""; var_859_int = 0;
			var_750_int = var_856_int;
			func_453(var_856_int, "pers_girl", "girl.xml", (int)1);
			var_860_int = 0; var_861_string = ""; var_862_string = ""; var_863_int = 0;
			var_750_int = var_860_int;
			func_453(var_860_int, "pers_girl", "girl2.xml", (int)1);
			var_864_int = 0; var_865_string = ""; var_866_string = ""; var_867_int = 0;
			var_750_int = var_864_int;
			func_453(var_864_int, "pers_worker", "worker.xml", (int)2);
			var_868_int = 0; var_869_string = ""; var_870_string = ""; var_871_int = 0;
			var_750_int = var_868_int;
			func_453(var_868_int, "pers_worker", "worker2.xml", (int)2);
			goto Label_2332;
		}
		var_872_int = 0; var_873_string = ""; var_874_string = ""; var_875_int = 0;
		var_750_int = var_872_int;
		func_453(var_872_int, "pers_alkash", "alkash.xml", (int)1);
		var_876_int = 0; var_877_string = ""; var_878_string = ""; var_879_int = 0;
		var_750_int = var_876_int;
		func_453(var_876_int, "pers_worker", "worker.xml", (int)1);
		var_880_int = 0; var_881_string = ""; var_882_string = ""; var_883_int = 0;
		var_750_int = var_880_int;
		func_453(var_880_int, "pers_worker", "worker2.xml", (int)1);
	}
Label_2332:
	return 2;
	
}


func_9326(var_1988_int, var_1989_int, var_1990_int)
{
	var_1991_object = Obj(); var_1992_object = Obj(); var_1993_object = Obj(); var_1994_object = Obj(); var_1995_object = Obj(); var_1996_object = Obj(); var_1997_object = Obj(); var_1998_object = Obj();
	var_1999_object = GlobalVars[8];
	@@var_1999_object:get(var_1995_object, var_1988_int);
	var_2000_object = GlobalVars[9];
	@@var_2000_object:get(var_1996_object, var_1988_int);
	var_2001_object = GlobalVars[10];
	@@var_2001_object:get(var_1997_object, var_1988_int);
	var_2002_object = GlobalVars[13];
	@@var_2002_object:get(var_1998_object, var_1988_int);
	var_2004_bool = var_1988_int == (int)0;
	if(var_2004_bool != 0) {
		var_2005_int = 0; var_2006_int = 0; var_2007_object = Obj(); var_2008_object = Obj(); var_2009_object = Obj(); var_2010_object = Obj();
		var_1989_int = var_2005_int;
		var_1990_int = var_2006_int;
		var_1995_object = var_2007_object;
		var_1996_object = var_2008_object;
		var_1997_object = var_2009_object;
		var_1998_object = var_2010_object;
		func_4389(var_2005_int, var_2006_int, var_2007_object, var_2008_object, var_2009_object, var_2010_object);
	} else {
		var_2274_bool = var_1988_int == (int)1;
		if(var_2274_bool != 0) {
			var_2275_int = 0; var_2276_int = 0; var_2277_object = Obj(); var_2278_object = Obj(); var_2279_object = Obj(); var_2280_object = Obj();
			var_1989_int = var_2275_int;
			var_1990_int = var_2276_int;
			var_1995_object = var_2277_object;
			var_1996_object = var_2278_object;
			var_1997_object = var_2279_object;
			var_1998_object = var_2280_object;
			func_4586(var_2275_int, var_2276_int, var_2277_object, var_2278_object, var_2279_object, var_2280_object);
			goto Label_9546;
		}
		var_2406_bool = var_1988_int == (int)2;
		if(var_2406_bool != 0) {
			var_2407_int = 0; var_2408_int = 0; var_2409_object = Obj(); var_2410_object = Obj(); var_2411_object = Obj(); var_2412_object = Obj();
			var_1989_int = var_2407_int;
			var_1990_int = var_2408_int;
			var_1995_object = var_2409_object;
			var_1996_object = var_2410_object;
			var_1997_object = var_2411_object;
			var_1998_object = var_2412_object;
			func_4792(var_2407_int, var_2408_int, var_2409_object, var_2410_object, var_2411_object, var_2412_object);
			goto Label_9546;
		}
		var_2552_bool = var_1988_int == (int)3;
		if(var_2552_bool != 0) {
			var_2553_int = 0; var_2554_int = 0; var_2555_object = Obj(); var_2556_object = Obj(); var_2557_object = Obj(); var_2558_object = Obj();
			var_1989_int = var_2553_int;
			var_1990_int = var_2554_int;
			var_1995_object = var_2555_object;
			var_1996_object = var_2556_object;
			var_1997_object = var_2557_object;
			var_1998_object = var_2558_object;
			func_5022(var_2553_int, var_2554_int, var_2555_object, var_2556_object, var_2557_object, var_2558_object);
			goto Label_9546;
		}
		var_2585_bool = var_1988_int == (int)4;
		if(var_2585_bool != 0) {
			var_2586_int = 0; var_2587_int = 0; var_2588_object = Obj(); var_2589_object = Obj(); var_2590_object = Obj(); var_2591_object = Obj();
			var_1989_int = var_2586_int;
			var_1990_int = var_2587_int;
			var_1995_object = var_2588_object;
			var_1996_object = var_2589_object;
			var_1997_object = var_2590_object;
			var_1998_object = var_2591_object;
			func_5240(var_2586_int, var_2587_int, var_2588_object, var_2589_object, var_2590_object, var_2591_object);
			goto Label_9546;
		}
		var_2618_bool = var_1988_int == (int)5;
		if(var_2618_bool != 0) {
			var_2619_int = 0; var_2620_int = 0; var_2621_object = Obj(); var_2622_object = Obj(); var_2623_object = Obj(); var_2624_object = Obj();
			var_1989_int = var_2619_int;
			var_1990_int = var_2620_int;
			var_1995_object = var_2621_object;
			var_1996_object = var_2622_object;
			var_1997_object = var_2623_object;
			var_1998_object = var_2624_object;
			func_5485(var_2619_int, var_2620_int, var_2621_object, var_2622_object, var_2623_object, var_2624_object);
			goto Label_9546;
		}
		var_2651_bool = var_1988_int == (int)6;
		if(var_2651_bool != 0) {
			var_2652_int = 0; var_2653_int = 0; var_2654_object = Obj(); var_2655_object = Obj(); var_2656_object = Obj(); var_2657_object = Obj();
			var_1989_int = var_2652_int;
			var_1990_int = var_2653_int;
			var_1995_object = var_2654_object;
			var_1996_object = var_2655_object;
			var_1997_object = var_2656_object;
			var_1998_object = var_2657_object;
			func_5598();
			goto Label_9546;
		}
		var_2661_bool = var_1988_int == (int)7;
		if(var_2661_bool != 0) {
			var_2662_int = 0; var_2663_int = 0; var_2664_object = Obj(); var_2665_object = Obj(); var_2666_object = Obj(); var_2667_object = Obj();
			var_1989_int = var_2662_int;
			var_1990_int = var_2663_int;
			var_1995_object = var_2664_object;
			var_1996_object = var_2665_object;
			var_1997_object = var_2666_object;
			var_1998_object = var_2667_object;
			func_5708(var_2662_int, var_2663_int, var_2664_object, var_2665_object, var_2666_object, var_2667_object);
			goto Label_9546;
		}
		var_2800_bool = var_1988_int == (int)8;
		if(var_2800_bool != 0) {
			var_2801_int = 0; var_2802_int = 0; var_2803_object = Obj(); var_2804_object = Obj(); var_2805_object = Obj(); var_2806_object = Obj();
			var_1989_int = var_2801_int;
			var_1990_int = var_2802_int;
			var_1995_object = var_2803_object;
			var_1996_object = var_2804_object;
			var_1997_object = var_2805_object;
			var_1998_object = var_2806_object;
			func_5908(var_2801_int, var_2802_int, var_2803_object, var_2804_object, var_2805_object, var_2806_object);
			goto Label_9546;
		}
		var_2833_bool = var_1988_int == (int)9;
		if(var_2833_bool != 0) {
			var_2834_int = 0; var_2835_int = 0; var_2836_object = Obj(); var_2837_object = Obj(); var_2838_object = Obj(); var_2839_object = Obj();
			var_1989_int = var_2834_int;
			var_1990_int = var_2835_int;
			var_1995_object = var_2836_object;
			var_1996_object = var_2837_object;
			var_1997_object = var_2838_object;
			var_1998_object = var_2839_object;
			func_6111(var_2834_int, var_2835_int, var_2836_object, var_2837_object, var_2838_object, var_2839_object);
			goto Label_9546;
		}
		var_2866_bool = var_1988_int == (int)10;
		if(var_2866_bool != 0) {
			var_2867_int = 0; var_2868_int = 0; var_2869_object = Obj(); var_2870_object = Obj(); var_2871_object = Obj(); var_2872_object = Obj();
			var_1989_int = var_2867_int;
			var_1990_int = var_2868_int;
			var_1995_object = var_2869_object;
			var_1996_object = var_2870_object;
			var_1997_object = var_2871_object;
			var_1998_object = var_2872_object;
			func_6320(var_2867_int, var_2868_int, var_2869_object, var_2870_object, var_2871_object, var_2872_object);
			goto Label_9546;
		}
		var_2899_bool = var_1988_int == (int)11;
		if(var_2899_bool != 0) {
			var_2900_int = 0; var_2901_int = 0; var_2902_object = Obj(); var_2903_object = Obj(); var_2904_object = Obj(); var_2905_object = Obj();
			var_1989_int = var_2900_int;
			var_1990_int = var_2901_int;
			var_1995_object = var_2902_object;
			var_1996_object = var_2903_object;
			var_1997_object = var_2904_object;
			var_1998_object = var_2905_object;
			func_6532(var_2900_int, var_2901_int, var_2902_object, var_2903_object, var_2904_object, var_2905_object);
			goto Label_9546;
		}
		var_2932_bool = var_1988_int == (int)12;
		if(var_2932_bool != 0) {
			var_2933_int = 0; var_2934_int = 0; var_2935_object = Obj(); var_2936_object = Obj(); var_2937_object = Obj(); var_2938_object = Obj();
			var_1989_int = var_2933_int;
			var_1990_int = var_2934_int;
			var_1995_object = var_2935_object;
			var_1996_object = var_2936_object;
			var_1997_object = var_2937_object;
			var_1998_object = var_2938_object;
			func_6729(var_2933_int, var_2934_int, var_2935_object, var_2936_object, var_2937_object, var_2938_object);
			goto Label_9546;
		}
		var_2965_bool = var_1988_int == (int)13;
		if(var_2965_bool != 0) {
			var_2966_int = 0; var_2967_int = 0; var_2968_object = Obj(); var_2969_object = Obj(); var_2970_object = Obj(); var_2971_object = Obj();
			var_1989_int = var_2966_int;
			var_1990_int = var_2967_int;
			var_1995_object = var_2968_object;
			var_1996_object = var_2969_object;
			var_1997_object = var_2970_object;
			var_1998_object = var_2971_object;
			func_6932(var_2966_int, var_2967_int, var_2968_object, var_2969_object, var_2970_object, var_2971_object);
			goto Label_9546;
		}
		var_2998_bool = var_1988_int == (int)14;
		if(var_2998_bool != 0) {
			var_2999_int = 0; var_3000_int = 0; var_3001_object = Obj(); var_3002_object = Obj(); var_3003_object = Obj(); var_3004_object = Obj();
			var_1989_int = var_2999_int;
			var_1990_int = var_3000_int;
			var_1995_object = var_3001_object;
			var_1996_object = var_3002_object;
			var_1997_object = var_3003_object;
			var_1998_object = var_3004_object;
			func_7132(var_2999_int, var_3000_int, var_3001_object, var_3002_object, var_3003_object, var_3004_object);
			goto Label_9546;
		}
		var_3137_bool = var_1988_int == (int)15;
		if(var_3137_bool == 0) goto Label_9546;
		var_3138_int = 0; var_3139_int = 0; var_3140_object = Obj(); var_3141_object = Obj(); var_3142_object = Obj(); var_3143_object = Obj();
		var_1989_int = var_3138_int;
		var_1990_int = var_3139_int;
		var_1995_object = var_3140_object;
		var_1996_object = var_3141_object;
		var_1997_object = var_3142_object;
		var_1998_object = var_3143_object;
		func_7314(var_3138_int, var_3139_int, var_3140_object, var_3141_object, var_3142_object, var_3143_object);
	}
Label_9546:
	return 8;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_111(var_4956_object, var_4957_string)
{
	var_4958_object = Obj(); var_4959_object = Obj(); var_4960_object = Obj(); var_4961_object = Obj();
	GetMainOutdoorScene(var_4960_object);
	var_4963_int = var_4957_string + ".bin";
	AddBlankActor(var_4961_object, var_4960_object, var_4957_string, var_4963_int);
	var_4961_object = var_4956_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10352(var_5323_int, var_5324_float)
{
	var_5325_int = 0; var_5326_int = 0; var_5327_int = 0; var_5328_float = 0;
	var_5324_float = var_5328_float;
	func_12278(var_5325_int, (int)521369, (int)521368, var_5328_float);
	var_5325_int = var_5323_int;
	return 0;
}


func_12405(var_4649_int, var_4650_float)
{
	var_4651_int = 0; var_4652_int = 0;
	var_4654_bool = var_4649_int == (int)45091;
	if(var_4654_bool != 0) {
		var_4655_bool = 0; var_4656_object = Obj();
		var_4657_object = GlobalVars[16];
		var_4657_object = var_4656_object;
		func_11820(var_4656_object);
		var_4664_bool = var_4655_bool == 0; //@nz
		if(var_4664_bool != 0) {
			var_4665_int = 0; var_4666_float = 0;
			var_4650_float = var_4666_float;
			func_9974(var_4665_int, var_4666_float);
		}
	}
	var_4675_bool = var_4649_int == (int)45116;
	if(var_4675_bool != 0) {
		var_4676_bool = 0; var_4677_object = Obj();
		var_4678_object = GlobalVars[16];
		var_4678_object = var_4677_object;
		func_12048(var_4677_object);
		var_4683_bool = var_4676_bool == 0; //@nz
		if(var_4683_bool != 0) {
			var_4684_int = 0; var_4685_float = 0;
			var_4650_float = var_4685_float;
			func_10100(var_4684_int, var_4685_float);
		}
	}
	var_4691_bool = var_4649_int == (int)45113;
	if(var_4691_bool != 0) {
		var_4692_int = 0; var_4693_float = 0;
		var_4650_float = var_4693_float;
		func_10082(var_4692_int, var_4693_float);
	}
	var_4699_bool = var_4649_int == (int)45090;
	if(var_4699_bool != 0) {
		var_4700_bool = 0; var_4701_object = Obj();
		var_4702_object = GlobalVars[16];
		var_4702_object = var_4701_object;
		func_11808(var_4701_object);
		var_4707_bool = var_4700_bool == 0; //@nz
		if(var_4707_bool != 0) {
			var_4708_int = 0; var_4709_float = 0;
			var_4650_float = var_4709_float;
			func_9965(var_4708_int, var_4709_float);
		}
	}
	var_4715_bool = var_4649_int == (int)45117;
	if(var_4715_bool != 0) {
		var_4716_int = 0; var_4717_float = 0;
		var_4650_float = var_4717_float;
		func_10064(var_4716_int, var_4717_float);
	}
	var_4723_bool = var_4649_int == (int)45118;
	if(var_4723_bool != 0) {
		var_4724_int = 0; var_4725_float = 0;
		var_4650_float = var_4725_float;
		func_10127(var_4724_int, var_4725_float);
	}
	var_4731_bool = var_4649_int == (int)45119;
	if(var_4731_bool != 0) {
		var_4732_int = 0; var_4733_float = 0;
		var_4650_float = var_4733_float;
		func_10181(var_4732_int, var_4733_float);
	}
	var_4739_bool = var_4649_int == (int)45120;
	if(var_4739_bool != 0) {
		var_4740_int = 0; var_4741_float = 0;
		var_4650_float = var_4741_float;
		func_10235(var_4740_int, var_4741_float);
	}
	var_4747_bool = var_4649_int == (int)45121;
	if(var_4747_bool != 0) {
		var_4748_int = 0; var_4749_float = 0;
		var_4650_float = var_4749_float;
		func_10289(var_4748_int, var_4749_float);
	}
	var_4755_bool = var_4649_int == (int)45122;
	if(var_4755_bool != 0) {
		var_4756_int = 0; var_4757_float = 0;
		var_4650_float = var_4757_float;
		func_10325(var_4756_int, var_4757_float);
	}
	var_4763_bool = var_4649_int == (int)45089;
	if(var_4763_bool != 0) {
		var_4764_bool = 0; var_4765_object = Obj();
		var_4766_object = GlobalVars[16];
		var_4766_object = var_4765_object;
		func_11796(var_4765_object);
		if(var_4764_bool != 0) {
			var_4771_int = 0; var_4772_float = 0;
			var_4650_float = var_4772_float;
			func_9920(var_4771_int, var_4772_float);
		}
	}
	var_4778_bool = var_4649_int == (int)45080;
	if(var_4778_bool != 0) {
		var_4779_object = Obj(); var_4780_object = Obj();
		var_4781_object = GlobalVars[16];
		var_4781_object = var_4779_object;
		var_4782_object = GlobalVars[16];
		var_4782_object = var_4780_object;
		func_11105();
		var_4826_bool = 0; var_4827_string = ""; var_4828_string = "";
		func_189(var_4826_bool, "quest_b7_01", "cleanup");
		var_4829_object = Obj(); var_4830_string = "";
		func_111(var_4829_object, "quest_b8_01");
		var_4837_object = Obj(); var_4838_string = "";
		func_111(var_4837_object, "quest_b8_03");
	}
	var_4840_bool = var_4649_int == (int)45081;
	if(var_4840_bool != 0) {
		var_4841_object = Obj(); var_4842_object = Obj();
		var_4843_object = GlobalVars[16];
		var_4843_object = var_4841_object;
		var_4844_object = GlobalVars[16];
		var_4844_object = var_4842_object;
		func_10539();
	}
	var_4856_bool = var_4649_int == (int)45082;
	if(var_4856_bool != 0) {
		var_4857_object = Obj(); var_4858_object = Obj();
		var_4859_object = GlobalVars[16];
		var_4859_object = var_4857_object;
		var_4860_object = GlobalVars[16];
		var_4860_object = var_4858_object;
		func_10553();
		var_4863_int = 0; var_4864_float = 0;
		var_4650_float = var_4864_float;
		func_10262(var_4863_int, var_4864_float);
		var_4869_object = Obj(); var_4870_string = "";
		func_111(var_4869_object, "quest_b6_02");
		var_4871_bool = 0; var_4872_string = ""; var_4873_string = "";
		func_189(var_4871_bool, "quest_b6_02", "place_klara");
	}
	var_4875_bool = var_4649_int == (int)45092;
	if(var_4875_bool != 0) {
		var_4876_bool = 0; var_4877_object = Obj();
		var_4878_object = GlobalVars[16];
		var_4878_object = var_4877_object;
		func_11832(var_4877_object);
		var_4883_bool = var_4876_bool == 0; //@nz
		if(var_4883_bool != 0) {
			var_4884_int = 0; var_4885_float = 0;
			var_4650_float = var_4885_float;
			func_9983(var_4884_int, var_4885_float);
		}
	}
	var_4891_bool = var_4649_int == (int)45093;
	if(var_4891_bool != 0) {
		var_4892_int = 0; var_4893_float = 0;
		var_4650_float = var_4893_float;
		func_9956(var_4892_int, var_4893_float);
	}
	var_4899_bool = var_4649_int == (int)45083;
	if(var_4899_bool != 0) {
		var_4900_object = Obj(); var_4901_object = Obj();
		var_4902_object = GlobalVars[16];
		var_4902_object = var_4900_object;
		var_4903_object = GlobalVars[16];
		var_4903_object = var_4901_object;
		func_11451();
		var_4933_object = Obj(); var_4934_object = Obj();
		var_4935_object = GlobalVars[16];
		var_4935_object = var_4933_object;
		var_4936_object = GlobalVars[16];
		var_4936_object = var_4934_object;
		func_11181();
		var_4958_bool = 0; var_4959_string = ""; var_4960_string = "";
		func_189(var_4958_bool, "quest_b8_01", "cleanup");
		var_4961_object = Obj(); var_4962_string = "";
		func_122(var_4961_object, "quest_b9_01");
	}
	var_4970_bool = var_4649_int == (int)45111;
	if(var_4970_bool != 0) {
		var_4971_int = 0; var_4972_float = 0;
		var_4650_float = var_4972_float;
		func_10019(var_4971_int, var_4972_float);
	}
	var_4978_bool = var_4649_int == (int)45079;
	if(var_4978_bool != 0) {
		var_4979_object = Obj(); var_4980_object = Obj();
		var_4981_object = GlobalVars[16];
		var_4981_object = var_4979_object;
		var_4982_object = GlobalVars[16];
		var_4982_object = var_4980_object;
		func_11706();
	}
	var_4986_bool = var_4649_int == (int)45086;
	if(var_4986_bool != 0) {
		var_4987_object = Obj(); var_4988_object = Obj();
		var_4989_object = GlobalVars[16];
		var_4989_object = var_4987_object;
		var_4990_object = GlobalVars[16];
		var_4990_object = var_4988_object;
		func_11315();
		var_5024_bool = 0; var_5025_string = ""; var_5026_string = "";
		func_189(var_5024_bool, "quest_b10_01", "cleanup");
		var_5027_object = Obj(); var_5028_string = "";
		func_122(var_5027_object, "quest_b11_01");
	}
	var_5030_bool = var_4649_int == (int)45087;
	if(var_5030_bool != 0) {
		var_5031_object = Obj(); var_5032_object = Obj();
		var_5033_object = GlobalVars[16];
		var_5033_object = var_5031_object;
		var_5034_object = GlobalVars[16];
		var_5034_object = var_5032_object;
		func_11412();
		var_5050_object = Obj(); var_5051_object = Obj();
		var_5052_object = GlobalVars[16];
		var_5052_object = var_5050_object;
		var_5053_object = GlobalVars[16];
		var_5053_object = var_5051_object;
		func_11475();
		var_5074_bool = 0; var_5075_string = ""; var_5076_string = "";
		func_189(var_5074_bool, "quest_b11_01", "cleanup");
		var_5077_object = Obj(); var_5078_string = "";
		func_111(var_5077_object, "quest_b12_01");
	}
	var_5080_bool = var_4649_int == (int)45112;
	if(var_5080_bool != 0) {
		var_5081_int = 0; var_5082_float = 0;
		var_4650_float = var_5082_float;
		func_10001(var_5081_int, var_5082_float);
	}
	var_5088_bool = var_4649_int == (int)45115;
	if(var_5088_bool != 0) {
		var_5089_int = 0; var_5090_float = 0;
		var_4650_float = var_5090_float;
		func_10154(var_5089_int, var_5090_float);
	}
	var_5096_bool = var_4649_int == (int)45114;
	if(var_5096_bool != 0) {
		var_5097_bool = 0; var_5098_object = Obj();
		var_5099_object = GlobalVars[16];
		var_5099_object = var_5098_object;
		func_12142(var_5098_object);
		if(var_5097_bool != 0) {
			var_5104_int = 0; var_5105_float = 0;
			var_4650_float = var_5105_float;
			func_10037(var_5104_int, var_5105_float);
		}
	}
	var_5111_bool = var_4649_int == (int)45088;
	if(var_5111_bool != 0) {
		var_5112_bool = 0; var_5113_object = Obj();
		var_5114_object = GlobalVars[16];
		var_5114_object = var_5113_object;
		func_11784(var_5113_object);
		var_5119_bool = var_5112_bool == 0; //@nz
		if(var_5119_bool != 0) {
			var_5120_int = 0; var_5121_float = 0;
			var_4650_float = var_5121_float;
			func_9866(var_5120_int, var_5121_float);
		}
	}
	var_5127_bool = var_4649_int == (int)45084;
	if(var_5127_bool != 0) {
		GetVariable("b8q03MladVladIsVictim", var_4652_int);
		var_5130_bool = var_4652_int != (int)0;
		if(var_5130_bool != 0) {
			var_5131_bool = 0; var_5132_string = ""; var_5133_string = ""; var_5134_string = "";
			func_201(var_5131_bool, "volonteers_danko", "kill", "mladvlad");
			Trace("Mlad Vlad is dead");
		} else {
			var_6386_bool = 0; var_6387_string = ""; var_6388_string = ""; var_6389_string = "";
			func_201(var_6386_bool, "volonteers_danko", "kill", "bigvlad");
			Trace("Big Vlad is dead");
		}
	}
	var_5137_bool = var_4649_int == (int)45085;
	if(var_5137_bool != 0) {
		var_5138_object = Obj(); var_5139_object = Obj();
		var_5140_object = GlobalVars[16];
		var_5140_object = var_5138_object;
		var_5141_object = GlobalVars[16];
		var_5141_object = var_5139_object;
		func_11236();
		var_5169_bool = 0; var_5170_string = ""; var_5171_string = "";
		func_189(var_5169_bool, "quest_b9_01", "cleanup");
		var_5172_object = Obj(); var_5173_string = "";
		func_111(var_5172_object, "quest_b10_01");
	}
	var_5175_bool = var_4649_int == (int)45127;
	if(var_5175_bool != 0) {
		var_5176_int = 0; var_5177_float = 0;
		var_4650_float = var_5177_float;
		func_10226(var_5176_int, var_5177_float);
	}
	var_5183_bool = var_4649_int == (int)45133;
	if(var_5183_bool != 0) {
		var_5184_bool = 0; var_5185_object = Obj();
		var_5186_object = GlobalVars[16];
		var_5186_object = var_5185_object;
		func_11760(var_5185_object);
		if(var_5184_bool != 0) {
			var_5191_int = 0; var_5192_float = 0;
			var_4650_float = var_5192_float;
			func_10307(var_5191_int, var_5192_float);
		}
	}
	var_5198_bool = var_4649_int == (int)45136;
	if(var_5198_bool != 0) {
		var_5199_int = 0; var_5200_float = 0;
		var_4650_float = var_5200_float;
		func_10388(var_5199_int, var_5200_float);
	}
	var_5206_bool = var_4649_int == (int)45123;
	if(var_5206_bool != 0) {
		var_5207_bool = 0; var_5208_object = Obj();
		var_5209_object = GlobalVars[16];
		var_5209_object = var_5208_object;
		func_12094(var_5208_object);
		if(var_5207_bool != 0) {
			var_5214_int = 0; var_5215_float = 0;
			var_4650_float = var_5215_float;
			func_10163(var_5214_int, var_5215_float);
		}
	}
	var_5221_bool = var_4649_int == (int)45124;
	if(var_5221_bool != 0) {
		var_5222_bool = 0; var_5223_object = Obj();
		var_5224_object = GlobalVars[16];
		var_5224_object = var_5223_object;
		func_11844(var_5223_object);
		var_5229_bool = var_5222_bool == 0; //@nz
		if(var_5229_bool != 0) {
			var_5230_int = 0; var_5231_float = 0;
			var_4650_float = var_5231_float;
			func_10190(var_5230_int, var_5231_float);
		}
	}
	var_5237_bool = var_4649_int == (int)45130;
	if(var_5237_bool != 0) {
		var_5238_bool = 0; var_5239_object = Obj();
		var_5240_object = GlobalVars[16];
		var_5240_object = var_5239_object;
		func_12166(var_5239_object);
		if(var_5238_bool != 0) {
			var_5245_int = 0; var_5246_float = 0;
			var_4650_float = var_5246_float;
			func_10316(var_5245_int, var_5246_float);
		}
	}
	var_5252_bool = var_4649_int == (int)45131;
	if(var_5252_bool != 0) {
		var_5253_bool = 0; var_5254_object = Obj();
		var_5255_object = GlobalVars[16];
		var_5255_object = var_5254_object;
		func_11748(var_5254_object);
		if(var_5253_bool != 0) {
			var_5260_int = 0; var_5261_float = 0;
			var_4650_float = var_5261_float;
			func_10334(var_5260_int, var_5261_float);
		}
	}
	var_5267_bool = var_4649_int == (int)45135;
	if(var_5267_bool != 0) {
		var_5268_bool = 0;
		var_5268_bool = 0;
		var_5269_bool = 0; var_5270_object = Obj();
		var_5271_object = GlobalVars[16];
		var_5271_object = var_5270_object;
		func_11772(var_5270_object);
		if(var_5269_bool != 0) {
			var_5276_bool = 0; var_5277_object = Obj();
			var_5278_object = GlobalVars[16];
			var_5278_object = var_5277_object;
			func_12072(var_5277_object);
			var_5283_bool = var_5276_bool == 0; //@nz
			if(var_5283_bool != 0) {
				var_5268_bool = 1;
			}
		}
		if(var_5268_bool != 0) {
			var_5284_int = 0; var_5285_float = 0;
			var_4650_float = var_5285_float;
			func_10361(var_5284_int, var_5285_float);
		}
	}
	var_5291_bool = var_4649_int == (int)45125;
	if(var_5291_bool != 0) {
		var_5292_int = 0; var_5293_float = 0;
		var_4650_float = var_5293_float;
		func_10172(var_5292_int, var_5293_float);
	}
	var_5299_bool = var_4649_int == (int)45128;
	if(var_5299_bool != 0) {
		var_5300_bool = 0; var_5301_object = Obj();
		var_5302_object = GlobalVars[16];
		var_5302_object = var_5301_object;
		func_11856(var_5301_object);
		if(var_5300_bool != 0) {
			var_5307_int = 0; var_5308_float = 0;
			var_4650_float = var_5308_float;
			func_10271(var_5307_int, var_5308_float);
		}
	}
	var_5314_bool = var_4649_int == (int)45129;
	if(var_5314_bool != 0) {
		var_5315_int = 0; var_5316_float = 0;
		var_4650_float = var_5316_float;
		func_10280(var_5315_int, var_5316_float);
	}
	var_5322_bool = var_4649_int == (int)45134;
	if(var_5322_bool != 0) {
		var_5323_int = 0; var_5324_float = 0;
		var_4650_float = var_5324_float;
		func_10352(var_5323_int, var_5324_float);
	}
	var_5330_bool = var_4649_int == (int)45126;
	if(var_5330_bool != 0) {
		var_5331_bool = 0; var_5332_object = Obj();
		var_5333_object = GlobalVars[16];
		var_5333_object = var_5332_object;
		func_12106(var_5332_object);
		if(var_5331_bool != 0) {
			var_5338_int = 0; var_5339_float = 0;
			var_4650_float = var_5339_float;
			func_10217(var_5338_int, var_5339_float);
		}
	}
	var_5345_bool = var_4649_int == (int)45137;
	if(var_5345_bool != 0) {
		var_5346_int = 0; var_5347_float = 0;
		var_4650_float = var_5347_float;
		func_10415(var_5346_int, var_5347_float);
	}
	var_5353_bool = var_4649_int == (int)45138;
	if(var_5353_bool != 0) {
		var_5354_int = 0; var_5355_float = 0;
		var_4650_float = var_5355_float;
		func_10397(var_5354_int, var_5355_float);
	}
	var_5361_bool = var_4649_int == (int)45132;
	if(var_5361_bool != 0) {
		var_5362_int = 0; var_5363_float = 0;
		var_4650_float = var_5363_float;
		func_10343(var_5362_int, var_5363_float);
	}
	var_5369_bool = var_4649_int == (int)45198;
	if(var_5369_bool != 0) {
		var_5370_bool = 0; var_5371_object = Obj();
		var_5372_object = GlobalVars[16];
		var_5372_object = var_5371_object;
		func_12024(var_5371_object);
		var_5377_bool = var_5370_bool == 0; //@nz
		if(var_5377_bool != 0) {
			var_5378_object = Obj(); var_5379_object = Obj();
			var_5380_object = GlobalVars[16];
			var_5380_object = var_5378_object;
			var_5381_object = GlobalVars[16];
			var_5381_object = var_5379_object;
			func_11683();
		}
	}
	var_5419_bool = var_4649_int == (int)45262;
	if(var_5419_bool != 0) {
		var_5420_object = Obj(); var_5421_object = Obj();
		var_5422_object = GlobalVars[16];
		var_5422_object = var_5420_object;
		var_5423_object = GlobalVars[16];
		var_5423_object = var_5421_object;
		func_11584();
	}
	var_5433_bool = var_4649_int == (int)45190;
	if(var_5433_bool != 0) {
		var_5434_int = 0; var_5435_float = 0;
		var_4650_float = var_5435_float;
		func_10109(var_5434_int, var_5435_float);
	}
	var_5441_bool = var_4649_int == (int)45263;
	if(var_5441_bool != 0) {
		var_5442_object = Obj(); var_5443_object = Obj();
		var_5444_object = GlobalVars[16];
		var_5444_object = var_5442_object;
		var_5445_object = GlobalVars[16];
		var_5445_object = var_5443_object;
		func_11601();
	}
	var_5455_bool = var_4649_int == (int)45264;
	if(var_5455_bool != 0) {
		var_5456_object = Obj(); var_5457_object = Obj();
		var_5458_object = GlobalVars[16];
		var_5458_object = var_5456_object;
		var_5459_object = GlobalVars[16];
		var_5459_object = var_5457_object;
		func_11618();
	}
	var_5469_bool = var_4649_int == (int)45266;
	if(var_5469_bool != 0) {
		var_5470_object = Obj(); var_5471_object = Obj();
		var_5472_object = GlobalVars[16];
		var_5472_object = var_5470_object;
		var_5473_object = GlobalVars[16];
		var_5473_object = var_5471_object;
		func_11652();
	}
	var_5483_bool = var_4649_int == (int)45185;
	if(var_5483_bool != 0) {
		var_5484_bool = 0; var_5485_object = Obj();
		var_5486_object = GlobalVars[16];
		var_5486_object = var_5485_object;
		func_11916(var_5485_object);
		var_5491_bool = var_5484_bool == 0; //@nz
		if(var_5491_bool != 0) {
			var_5492_int = 0; var_5493_float = 0;
			var_4650_float = var_5493_float;
			func_10136(var_5492_int, var_5493_float);
		}
	}
	var_5499_bool = var_4649_int == (int)45196;
	if(var_5499_bool != 0) {
		var_5500_bool = 0; var_5501_object = Obj();
		var_5502_object = GlobalVars[16];
		var_5502_object = var_5501_object;
		func_11988(var_5501_object);
		var_5507_bool = var_5500_bool == 0; //@nz
		if(var_5507_bool != 0) {
			var_5508_int = 0; var_5509_float = 0;
			var_4650_float = var_5509_float;
			func_9776(var_5508_int, var_5509_float);
		}
	}
	var_5515_bool = var_4649_int == (int)45189;
	if(var_5515_bool != 0) {
		var_5516_bool = 0; var_5517_object = Obj();
		var_5518_object = GlobalVars[16];
		var_5518_object = var_5517_object;
		func_12012(var_5517_object);
		var_5523_bool = var_5516_bool == 0; //@nz
		if(var_5523_bool != 0) {
			var_5524_int = 0; var_5525_float = 0;
			var_4650_float = var_5525_float;
			func_10244(var_5524_int, var_5525_float);
		}
	}
	var_5531_bool = var_4649_int == (int)45265;
	if(var_5531_bool != 0) {
		var_5532_object = Obj(); var_5533_object = Obj();
		var_5534_object = GlobalVars[16];
		var_5534_object = var_5532_object;
		var_5535_object = GlobalVars[16];
		var_5535_object = var_5533_object;
		func_11635();
	}
	var_5545_bool = var_4649_int == (int)45157;
	if(var_5545_bool != 0) {
		var_5546_bool = 0; var_5547_object = Obj();
		var_5548_object = GlobalVars[16];
		var_5548_object = var_5547_object;
		func_12084(var_5546_bool, var_5547_object);
		if(var_5546_bool != 0) {
			var_5551_int = 0; var_5552_float = 0;
			var_4650_float = var_5552_float;
			func_9830(var_5551_int, var_5552_float);
		}
	}
	var_5558_bool = var_4649_int == (int)45160;
	if(var_5558_bool != 0) {
		var_5559_bool = 0; var_5560_object = Obj();
		var_5561_object = GlobalVars[16];
		var_5561_object = var_5560_object;
		func_12084(var_5559_bool, var_5560_object);
		if(var_5559_bool != 0) {
			var_5562_int = 0; var_5563_float = 0;
			var_4650_float = var_5563_float;
			func_9884(var_5562_int, var_5563_float);
		}
	}
	var_5569_bool = var_4649_int == (int)45161;
	if(var_5569_bool != 0) {
		var_5570_bool = 0; var_5571_object = Obj();
		var_5572_object = GlobalVars[16];
		var_5572_object = var_5571_object;
		func_12084(var_5570_bool, var_5571_object);
		if(var_5570_bool != 0) {
			var_5573_int = 0; var_5574_float = 0;
			var_4650_float = var_5574_float;
			func_9947(var_5573_int, var_5574_float);
		}
	}
	var_5580_bool = var_4649_int == (int)45158;
	if(var_5580_bool != 0) {
		var_5581_bool = 0; var_5582_object = Obj();
		var_5583_object = GlobalVars[16];
		var_5583_object = var_5582_object;
		func_12084(var_5581_bool, var_5582_object);
		if(var_5581_bool != 0) {
			var_5584_int = 0; var_5585_float = 0;
			var_4650_float = var_5585_float;
			func_9839(var_5584_int, var_5585_float);
		}
	}
	var_5591_bool = var_4649_int == (int)45159;
	if(var_5591_bool != 0) {
		var_5592_bool = 0; var_5593_object = Obj();
		var_5594_object = GlobalVars[16];
		var_5594_object = var_5593_object;
		func_12084(var_5592_bool, var_5593_object);
		if(var_5592_bool != 0) {
			var_5595_int = 0; var_5596_float = 0;
			var_4650_float = var_5596_float;
			func_9848(var_5595_int, var_5596_float);
		}
	}
	var_5602_bool = var_4649_int == (int)45187;
	if(var_5602_bool != 0) {
		var_5603_bool = 0; var_5604_object = Obj();
		var_5605_object = GlobalVars[16];
		var_5605_object = var_5604_object;
		func_11940(var_5604_object);
		var_5610_bool = var_5603_bool == 0; //@nz
		if(var_5610_bool != 0) {
			var_5611_int = 0; var_5612_float = 0;
			var_4650_float = var_5612_float;
			func_9875(var_5611_int, var_5612_float);
		}
	}
	var_5618_bool = var_4649_int == (int)45188;
	if(var_5618_bool != 0) {
		var_5619_bool = 0; var_5620_object = Obj();
		var_5621_object = GlobalVars[16];
		var_5621_object = var_5620_object;
		func_11952(var_5620_object);
		var_5626_bool = var_5619_bool == 0; //@nz
		if(var_5626_bool != 0) {
			var_5627_int = 0; var_5628_float = 0;
			var_4650_float = var_5628_float;
			func_10298(var_5627_int, var_5628_float);
		}
	}
	var_5634_bool = var_4649_int == (int)45193;
	if(var_5634_bool != 0) {
		var_5635_object = Obj(); var_5636_string = "";
		func_111(var_5635_object, "quest_b1_05");
	}
	var_5638_bool = var_4649_int == (int)45194;
	if(var_5638_bool != 0) {
		var_5639_bool = 0; var_5640_object = Obj();
		var_5641_object = GlobalVars[16];
		var_5641_object = var_5640_object;
		func_11964(var_5640_object);
		var_5646_bool = var_5639_bool == 0; //@nz
		if(var_5646_bool != 0) {
			var_5647_object = Obj(); var_5648_object = Obj();
			var_5649_object = GlobalVars[16];
			var_5649_object = var_5647_object;
			var_5650_object = GlobalVars[16];
			var_5650_object = var_5648_object;
			func_11535();
			var_5661_int = 0; var_5662_float = 0;
			var_4650_float = var_5662_float;
			func_10028(var_5661_int, var_5662_float);
		}
	}
	var_5668_bool = var_4649_int == (int)45197;
	if(var_5668_bool != 0) {
		var_5669_bool = 0; var_5670_object = Obj();
		var_5671_object = GlobalVars[16];
		var_5671_object = var_5670_object;
		func_12000(var_5670_object);
		var_5676_bool = var_5669_bool == 0; //@nz
		if(var_5676_bool != 0) {
			var_5677_object = Obj(); var_5678_object = Obj();
			var_5679_object = GlobalVars[16];
			var_5679_object = var_5677_object;
			var_5680_object = GlobalVars[16];
			var_5680_object = var_5678_object;
			func_11519();
			var_5689_int = 0; var_5690_float = 0;
			var_4650_float = var_5690_float;
			func_10406(var_5689_int, var_5690_float);
		}
	}
	var_5696_bool = var_4649_int == (int)45191;
	if(var_5696_bool != 0) {
		var_5697_int = 0; var_5698_float = 0;
		var_4650_float = var_5698_float;
		func_10118(var_5697_int, var_5698_float);
	}
	var_5704_bool = var_4649_int == (int)45235;
	if(var_5704_bool != 0) {
		var_5705_int = 0; var_5706_float = 0;
		var_4650_float = var_5706_float;
		func_10208(var_5705_int, var_5706_float);
	}
	var_5712_bool = var_4649_int == (int)45192;
	if(var_5712_bool != 0) {
		var_5713_object = Obj(); var_5714_object = Obj();
		var_5715_object = GlobalVars[16];
		var_5715_object = var_5713_object;
		var_5716_object = GlobalVars[16];
		var_5716_object = var_5714_object;
		func_10546();
	}
	var_5720_bool = var_4649_int == (int)45186;
	if(var_5720_bool != 0) {
		var_5721_bool = 0; var_5722_object = Obj();
		var_5723_object = GlobalVars[16];
		var_5723_object = var_5722_object;
		func_11928(var_5722_object);
		var_5728_bool = var_5721_bool == 0; //@nz
		if(var_5728_bool != 0) {
			var_5729_int = 0; var_5730_float = 0;
			var_4650_float = var_5730_float;
			func_10379(var_5729_int, var_5730_float);
		}
	}
	var_5736_bool = var_4649_int == (int)45195;
	if(var_5736_bool != 0) {
		var_5737_bool = 0; var_5738_object = Obj();
		var_5739_object = GlobalVars[16];
		var_5739_object = var_5738_object;
		func_11976(var_5738_object);
		var_5744_bool = var_5737_bool == 0; //@nz
		if(var_5744_bool != 0) {
			var_5745_object = Obj(); var_5746_object = Obj();
			var_5747_object = GlobalVars[16];
			var_5747_object = var_5745_object;
			var_5748_object = GlobalVars[16];
			var_5748_object = var_5746_object;
			func_11503();
			var_5757_int = 0; var_5758_float = 0;
			var_4650_float = var_5758_float;
			func_10199(var_5757_int, var_5758_float);
		}
	}
	var_5764_bool = var_4649_int == (int)45234;
	if(var_5764_bool != 0) {
		var_5765_bool = 0; var_5766_object = Obj();
		var_5767_object = GlobalVars[16];
		var_5767_object = var_5766_object;
		func_12060(var_5766_object);
		var_5772_bool = var_5765_bool == 0; //@nz
		if(var_5772_bool != 0) {
			var_5773_int = 0; var_5774_float = 0;
			var_4650_float = var_5774_float;
			func_10145(var_5773_int, var_5774_float);
		}
	}
	var_5780_bool = var_4649_int == (int)45237;
	if(var_5780_bool != 0) {
		var_5781_object = Obj(); var_5782_object = Obj();
		var_5783_object = GlobalVars[16];
		var_5783_object = var_5781_object;
		var_5784_object = GlobalVars[16];
		var_5784_object = var_5782_object;
		func_11572();
		var_5787_int = 0; var_5788_float = 0;
		var_4650_float = var_5788_float;
		func_10370(var_5787_int, var_5788_float);
	}
	var_5794_bool = var_4649_int == (int)45238;
	if(var_5794_bool != 0) {
		var_5795_object = Obj(); var_5796_object = Obj();
		var_5797_object = GlobalVars[16];
		var_5797_object = var_5795_object;
		var_5798_object = GlobalVars[16];
		var_5798_object = var_5796_object;
		func_11578();
		var_5801_int = 0; var_5802_float = 0;
		var_4650_float = var_5802_float;
		func_10433(var_5801_int, var_5802_float);
	}
	var_5808_bool = var_4649_int == (int)45162;
	if(var_5808_bool != 0) {
		var_5809_bool = 0; var_5810_object = Obj();
		var_5811_object = GlobalVars[16];
		var_5811_object = var_5810_object;
		func_12084(var_5809_bool, var_5810_object);
		if(var_5809_bool != 0) {
			var_5812_int = 0; var_5813_float = 0;
			var_4650_float = var_5813_float;
			func_9992(var_5812_int, var_5813_float);
		}
	}
	var_5819_bool = var_4649_int == (int)45139;
	if(var_5819_bool != 0) {
		var_5820_int = 0; var_5821_float = 0;
		var_4650_float = var_5821_float;
		func_9857(var_5820_int, var_5821_float);
	}
	var_5827_bool = var_4649_int == (int)45141;
	if(var_5827_bool != 0) {
		var_5828_int = 0; var_5829_float = 0;
		var_4650_float = var_5829_float;
		func_9929(var_5828_int, var_5829_float);
	}
	var_5835_bool = var_4649_int == (int)45140;
	if(var_5835_bool != 0) {
		var_5836_int = 0; var_5837_float = 0;
		var_4650_float = var_5837_float;
		func_9902(var_5836_int, var_5837_float);
	}
	var_5843_bool = var_4649_int == (int)45144;
	if(var_5843_bool != 0) {
		var_5844_int = 0; var_5845_float = 0;
		var_4650_float = var_5845_float;
		func_10253(var_5844_int, var_5845_float);
	}
	var_5851_bool = var_4649_int == (int)45148;
	if(var_5851_bool != 0) {
		var_5852_object = Obj(); var_5853_string = "";
		func_122(var_5852_object, "quest_b9_03");
	}
	var_5855_bool = var_4649_int == (int)45149;
	if(var_5855_bool != 0) {
		var_5856_object = Obj(); var_5857_string = "";
		func_111(var_5856_object, "quest_b10_04");
	}
	var_5859_bool = var_4649_int == (int)45150;
	if(var_5859_bool != 0) {
		var_5860_object = Obj(); var_5861_string = "";
		func_111(var_5860_object, "quest_b11_04");
	}
	var_5863_bool = var_4649_int == (int)45151;
	if(var_5863_bool != 0) {
		var_5864_bool = 0; var_5865_object = Obj();
		var_5866_object = GlobalVars[16];
		var_5866_object = var_5865_object;
		func_11904(var_5865_object);
		if(var_5864_bool != 0) {
			var_5871_int = 0; var_5872_float = 0;
			var_4650_float = var_5872_float;
			func_9938(var_5871_int, var_5872_float);
		}
	}
	var_5878_bool = var_4649_int == (int)45155;
	if(var_5878_bool != 0) {
		var_5879_bool = 0; var_5880_object = Obj();
		var_5881_object = GlobalVars[16];
		var_5881_object = var_5880_object;
		func_12084(var_5879_bool, var_5880_object);
		if(var_5879_bool != 0) {
			var_5882_int = 0; var_5883_float = 0;
			var_4650_float = var_5883_float;
			func_9812(var_5882_int, var_5883_float);
		}
	}
	var_5889_bool = var_4649_int == (int)45142;
	if(var_5889_bool != 0) {
		var_5890_int = 0; var_5891_float = 0;
		var_4650_float = var_5891_float;
		func_9893(var_5890_int, var_5891_float);
	}
	var_5897_bool = var_4649_int == (int)45147;
	if(var_5897_bool != 0) {
		var_5898_bool = 0;
		var_5898_bool = 0;
		var_5899_bool = 0;
		var_5899_bool = 0;
		var_5900_bool = 0; var_5901_object = Obj();
		var_5902_object = GlobalVars[16];
		var_5902_object = var_5901_object;
		func_11868(var_5901_object);
		var_5907_bool = var_5900_bool == 0; //@nz
		if(var_5907_bool != 0) {
			var_5908_bool = 0; var_5909_object = Obj();
			var_5910_object = GlobalVars[16];
			var_5910_object = var_5909_object;
			func_11880(var_5909_object);
			if(var_5908_bool != 0) {
				var_5899_bool = 1;
			}
		}
		if(var_5899_bool != 0) {
			var_5915_bool = 0; var_5916_object = Obj();
			var_5917_object = GlobalVars[16];
			var_5917_object = var_5916_object;
			func_11892(var_5916_object);
			var_5922_bool = var_5915_bool == 0; //@nz
			if(var_5922_bool != 0) {
				var_5898_bool = 1;
			}
		}
		if(var_5898_bool != 0) {
			var_5923_int = 0; var_5924_float = 0;
			var_4650_float = var_5924_float;
			func_10424(var_5923_int, var_5924_float);
		}
	}
	var_5930_bool = var_4649_int == (int)45152;
	if(var_5930_bool != 0) {
		var_5931_bool = 0; var_5932_object = Obj();
		var_5933_object = GlobalVars[16];
		var_5933_object = var_5932_object;
		func_12084(var_5931_bool, var_5932_object);
		if(var_5931_bool != 0) {
			var_5934_int = 0; var_5935_float = 0;
			var_4650_float = var_5935_float;
			func_9785(var_5934_int, var_5935_float);
		}
	}
	var_5941_bool = var_4649_int == (int)45156;
	if(var_5941_bool != 0) {
		var_5942_bool = 0; var_5943_object = Obj();
		var_5944_object = GlobalVars[16];
		var_5944_object = var_5943_object;
		func_12084(var_5942_bool, var_5943_object);
		if(var_5942_bool != 0) {
			var_5945_int = 0; var_5946_float = 0;
			var_4650_float = var_5946_float;
			func_9821(var_5945_int, var_5946_float);
		}
	}
	var_5952_bool = var_4649_int == (int)45153;
	if(var_5952_bool != 0) {
		var_5953_bool = 0; var_5954_object = Obj();
		var_5955_object = GlobalVars[16];
		var_5955_object = var_5954_object;
		func_12084(var_5953_bool, var_5954_object);
		if(var_5953_bool != 0) {
			var_5956_int = 0; var_5957_float = 0;
			var_4650_float = var_5957_float;
			func_9794(var_5956_int, var_5957_float);
		}
	}
	var_5963_bool = var_4649_int == (int)45154;
	if(var_5963_bool != 0) {
		var_5964_bool = 0; var_5965_object = Obj();
		var_5966_object = GlobalVars[16];
		var_5966_object = var_5965_object;
		func_12084(var_5964_bool, var_5965_object);
		if(var_5964_bool != 0) {
			var_5967_int = 0; var_5968_float = 0;
			var_4650_float = var_5968_float;
			func_9803(var_5967_int, var_5968_float);
		}
	}
	var_5974_bool = var_4649_int == (int)45143;
	if(var_5974_bool != 0) {
		var_5975_int = 0; var_5976_float = 0;
		var_4650_float = var_5976_float;
		func_9911(var_5975_int, var_5976_float);
	}
	var_5982_bool = var_4649_int == (int)45078;
	if(var_5982_bool != 0) {
		var_5983_object = Obj(); var_5984_object = Obj();
		var_5985_object = GlobalVars[16];
		var_5985_object = var_5983_object;
		var_5986_object = GlobalVars[16];
		var_5986_object = var_5984_object;
		func_11676();
		var_5989_object = Obj(); var_5990_object = Obj();
		var_5991_object = GlobalVars[16];
		var_5991_object = var_5989_object;
		var_5992_object = GlobalVars[16];
		var_5992_object = var_5990_object;
		func_11043();
		var_6016_bool = 0; var_6017_string = ""; var_6018_string = "";
		func_189(var_6016_bool, "quest_b6_01", "cleanup");
		var_6019_object = Obj(); var_6020_string = "";
		func_111(var_6019_object, "quest_b7_01");
	}
	var_6022_bool = var_4649_int == (int)45070;
	if(var_6022_bool != 0) {
		var_6023_object = Obj(); var_6024_object = Obj();
		var_6025_object = GlobalVars[16];
		var_6025_object = var_6023_object;
		var_6026_object = GlobalVars[16];
		var_6026_object = var_6024_object;
		func_10449();
	}
	var_6030_bool = var_4649_int == (int)45059;
	if(var_6030_bool != 0) {
		var_6031_object = Obj(); var_6032_object = Obj();
		var_6033_object = GlobalVars[16];
		var_6033_object = var_6031_object;
		var_6034_object = GlobalVars[16];
		var_6034_object = var_6032_object;
		func_11734();
		var_6037_object = Obj(); var_6038_object = Obj();
		var_6039_object = GlobalVars[16];
		var_6039_object = var_6037_object;
		var_6040_object = GlobalVars[16];
		var_6040_object = var_6038_object;
		func_10763();
		var_6078_bool = 0; var_6079_string = ""; var_6080_string = "";
		func_189(var_6078_bool, "quest_b2_01", "cleanup");
		var_6081_object = Obj(); var_6082_string = "";
		func_111(var_6081_object, "quest_b3_01");
	}
	var_6084_bool = var_4649_int == (int)45071;
	if(var_6084_bool != 0) {
		var_6085_object = Obj(); var_6086_object = Obj();
		var_6087_object = GlobalVars[16];
		var_6087_object = var_6085_object;
		var_6088_object = GlobalVars[16];
		var_6088_object = var_6086_object;
		func_10463();
	}
	var_6101_bool = var_4649_int == (int)45073;
	if(var_6101_bool != 0) {
		var_6102_object = Obj(); var_6103_object = Obj();
		var_6104_object = GlobalVars[16];
		var_6104_object = var_6102_object;
		var_6105_object = GlobalVars[16];
		var_6105_object = var_6103_object;
		func_10500();
	}
	var_6107_bool = var_4649_int == (int)45072;
	if(var_6107_bool != 0) {
		var_6108_object = Obj(); var_6109_object = Obj();
		var_6110_object = GlobalVars[16];
		var_6110_object = var_6108_object;
		var_6111_object = GlobalVars[16];
		var_6111_object = var_6109_object;
		func_10477();
		var_6114_object = Obj(); var_6115_object = Obj();
		var_6116_object = GlobalVars[16];
		var_6116_object = var_6114_object;
		var_6117_object = GlobalVars[16];
		var_6117_object = var_6115_object;
		func_10491();
	}
	var_6121_bool = var_4649_int == (int)45076;
	if(var_6121_bool != 0) {
		var_6122_bool = 0; var_6123_object = Obj();
		var_6124_object = GlobalVars[16];
		var_6124_object = var_6123_object;
		func_12118(var_6123_object);
		if(var_6122_bool != 0) {
			var_6129_int = 0; var_6130_float = 0;
			var_4650_float = var_6130_float;
			func_10046(var_6129_int, var_6130_float);
		}
	}
	var_6136_bool = var_4649_int == (int)45077;
	if(var_6136_bool != 0) {
		var_6137_bool = 0; var_6138_object = Obj();
		var_6139_object = GlobalVars[16];
		var_6139_object = var_6138_object;
		func_12154(var_6138_object);
		var_6144_bool = var_6137_bool == 0; //@nz
		if(var_6144_bool != 0) {
			var_6145_int = 0; var_6146_float = 0;
			var_4650_float = var_6146_float;
			func_10055(var_6145_int, var_6146_float);
		}
	}
	var_6152_bool = var_4649_int == (int)45075;
	if(var_6152_bool != 0) {
		var_6153_bool = 0; var_6154_object = Obj();
		var_6155_object = GlobalVars[16];
		var_6155_object = var_6154_object;
		func_12130(var_6154_object);
		var_6160_bool = var_6153_bool == 0; //@nz
		if(var_6160_bool != 0) {
			var_6161_int = 0; var_6162_float = 0;
			var_4650_float = var_6162_float;
			func_10073(var_6161_int, var_6162_float);
		}
	}
	var_6168_bool = var_4649_int == (int)45058;
	if(var_6168_bool != 0) {
		var_6169_object = Obj(); var_6170_object = Obj();
		var_6171_object = GlobalVars[16];
		var_6171_object = var_6169_object;
		var_6172_object = GlobalVars[16];
		var_6172_object = var_6170_object;
		func_10581();
		var_6232_bool = 0; var_6233_string = ""; var_6234_string = "";
		func_189(var_6232_bool, "quest_b1_01", "cleanup");
		var_6235_object = Obj(); var_6236_string = "";
		func_111(var_6235_object, "quest_b2_01");
		var_6237_object = Obj(); var_6238_string = "";
		func_111(var_6237_object, "quest_b2_03");
	}
	var_6240_bool = var_4649_int == (int)45060;
	if(var_6240_bool != 0) {
		var_6241_object = Obj(); var_6242_object = Obj();
		var_6243_object = GlobalVars[16];
		var_6243_object = var_6241_object;
		var_6244_object = GlobalVars[16];
		var_6244_object = var_6242_object;
		func_10871();
		var_6274_bool = 0; var_6275_string = ""; var_6276_string = "";
		func_189(var_6274_bool, "quest_b3_01", "cleanup");
		var_6277_object = Obj(); var_6278_string = "";
		func_122(var_6277_object, "quest_b4_01");
	}
	var_6280_bool = var_4649_int == (int)45065;
	if(var_6280_bool != 0) {
		var_6281_object = Obj(); var_6282_object = Obj();
		var_6283_object = GlobalVars[16];
		var_6283_object = var_6281_object;
		var_6284_object = GlobalVars[16];
		var_6284_object = var_6282_object;
		func_10951();
		var_6304_bool = 0; var_6305_string = ""; var_6306_string = "";
		func_189(var_6304_bool, "quest_b4_01", "cleanup");
		var_6307_object = Obj(); var_6308_string = "";
		func_111(var_6307_object, "quest_b5_01");
	}
	var_6310_bool = var_4649_int == (int)45061;
	if(var_6310_bool != 0) {
		QueuePlayMovie("aglaja.wmv");
	}
	var_6313_bool = var_4649_int == (int)45067;
	if(var_6313_bool != 0) {
		var_6314_bool = 0; var_6315_object = Obj();
		var_6316_object = GlobalVars[16];
		var_6316_object = var_6315_object;
		func_12036(var_6315_object);
		var_6321_bool = var_6314_bool == 0; //@nz
		if(var_6321_bool != 0) {
			var_6322_int = 0; var_6323_float = 0;
			var_4650_float = var_6323_float;
			func_10091(var_6322_int, var_6323_float);
		}
	}
	var_6329_bool = var_4649_int == (int)45068;
	if(var_6329_bool != 0) {
		var_6330_object = Obj(); var_6331_object = Obj();
		var_6332_object = GlobalVars[16];
		var_6332_object = var_6330_object;
		var_6333_object = GlobalVars[16];
		var_6333_object = var_6331_object;
		func_11720();
		var_6336_bool = 0; var_6337_string = ""; var_6338_string = "";
		func_189(var_6336_bool, "quest_b1_01", "remove_whitemask");
	}
	var_6340_bool = var_4649_int == (int)45062;
	if(var_6340_bool != 0) {
		QueuePlayMovie("army.wmv");
	}
	var_6343_bool = var_4649_int == (int)45069;
	if(var_6343_bool != 0) {
		var_6344_object = Obj(); var_6345_object = Obj();
		var_6346_object = GlobalVars[16];
		var_6346_object = var_6344_object;
		var_6347_object = GlobalVars[16];
		var_6347_object = var_6345_object;
		func_11741();
	}
	var_6351_bool = var_4649_int == (int)45066;
	if(var_6351_bool != 0) {
		var_6352_object = Obj(); var_6353_object = Obj();
		var_6354_object = GlobalVars[16];
		var_6354_object = var_6352_object;
		var_6355_object = GlobalVars[16];
		var_6355_object = var_6353_object;
		func_10999();
		var_6373_bool = 0; var_6374_string = ""; var_6375_string = "";
		func_189(var_6373_bool, "quest_b5_01", "cleanup");
		var_6376_object = Obj(); var_6377_string = "";
		func_111(var_6376_object, "quest_b6_01");
	}
	var_6379_bool = var_4649_int == (int)45074;
	if(var_6379_bool != 0) {
		var_6380_object = Obj(); var_6381_object = Obj();
		var_6382_object = GlobalVars[16];
		var_6382_object = var_6380_object;
		var_6383_object = GlobalVars[16];
		var_6383_object = var_6381_object;
		func_10509();
	}
	return 2;
	
}


func_5240(var_2586_int, var_2587_int, var_2588_object, var_2589_object, var_2590_object, var_2591_object)
{
	var_2593_bool = var_2587_int == (int)0;
	if(var_2593_bool != 0) {
		var_2594_int = 0; var_2595_bool = 0;
		func_746((int)4, (bool)1);
		var_2596_int = 0; var_2597_bool = 0; var_2598_int = 0;
		func_763((int)4, (bool)1, (int)1);
		var_2599_int = 0; var_2600_int = 0; var_2601_object = Obj(); var_2602_object = Obj(); var_2603_object = Obj();
		var_2586_int = var_2600_int;
		var_2588_object = var_2601_object;
		var_2589_object = var_2602_object;
		var_2590_object = var_2603_object;
		func_591((int)4, var_2600_int, var_2601_object, var_2602_object, var_2603_object);
		var_2604_object = Obj(); var_2605_int = 0;
		var_2591_object = var_2604_object;
		func_255(var_2604_object, (int)1);
		var_2606_int = 0; var_2607_bool = 0; var_2608_int = 0;
		func_820((int)4, (bool)1, (int)4);
		var_2609_int = 0; var_2610_bool = 0; var_2611_int = 0;
		func_882((int)4, (bool)0, (int)4);
	}
	var_2612_int = 0; var_2613_bool = 0;
	func_729((int)4, (bool)0);
	var_2614_int = 0; var_2615_int = 0; var_2616_int = 0;
	var_2586_int = var_2615_int;
	var_2587_int = var_2616_int;
	func_2894((int)4, var_2615_int, var_2616_int);
	return 0;
}


func_10361(var_5284_int, var_5285_float)
{
	var_5286_int = 0; var_5287_int = 0; var_5288_int = 0; var_5289_float = 0;
	var_5285_float = var_5289_float;
	func_12278(var_5286_int, (int)521371, (int)521370, var_5289_float);
	var_5286_int = var_5284_int;
	return 0;
}


func_122(var_4961_object, var_4962_string)
{
	var_4963_object = Obj(); var_4964_object = Obj(); var_4965_object = Obj(); var_4966_object = Obj();
	GetMainOutdoorScene(var_4965_object);
	var_4968_int = var_4962_string + ".xml";
	AddBlankActorFromXml(var_4966_object, var_4965_object, var_4962_string, var_4968_int);
	var_4966_object = var_4961_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6268(var_1637_int, var_1638_int, var_1639_object, var_1640_object, var_1641_object, var_1642_object)
{
	var_1644_bool = var_1638_int == (int)0;
	if(var_1644_bool != 0) {
		var_1645_int = 0; var_1646_bool = 0;
		func_746((int)10, (bool)0);
		var_1647_int = 0; var_1648_bool = 0; var_1649_int = 0;
		func_763((int)10, (bool)0, (int)1);
		var_1650_int = 0; var_1651_int = 0; var_1652_object = Obj(); var_1653_object = Obj(); var_1654_object = Obj();
		var_1650_int = 10;
		var_1637_int = var_1651_int;
		var_1639_object = var_1652_object;
		var_1640_object = var_1653_object;
		var_1641_object = var_1654_object;
		func_572(var_1651_int, var_1652_object, var_1653_object, var_1654_object);
		var_1655_object = Obj(); var_1656_int = 0;
		var_1642_object = var_1655_object;
		func_255(var_1655_object, (int)0);
		var_1657_int = 0; var_1658_bool = 0; var_1659_int = 0;
		func_820((int)10, (bool)0, (int)7);
		var_1660_int = 0; var_1661_bool = 0; var_1662_int = 0;
		func_882((int)10, (bool)0, (int)7);
	}
	var_1663_int = 0; var_1664_int = 0;
	var_1638_int = var_1664_int;
	func_933((int)10, var_1664_int);
	var_1665_int = 0; var_1666_int = 0; var_1667_int = 0;
	var_1637_int = var_1666_int;
	var_1638_int = var_1667_int;
	func_1574((int)10, var_1666_int, var_1667_int);
	return 0;
}


func_10370(var_5787_int, var_5788_float)
{
	var_5789_int = 0; var_5790_int = 0; var_5791_int = 0; var_5792_float = 0;
	var_5788_float = var_5792_float;
	func_12278(var_5789_int, (int)533052, (int)533051, var_5792_float);
	var_5789_int = var_5787_int;
	return 0;
}


func_133(var_329_object, var_330_object, var_331_string, var_332_string, var_333_string)
{
	var_335_bool = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_object = Obj(); var_339_bool = 0; var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_object = Obj();
	@@var_330_object:GetLocator(var_331_string, var_339_bool, var_340_cvector, var_341_cvector);
	var_343_bool = var_339_bool == 0; //@nz
	if(var_343_bool != 0) {
		var_345_int = "Locator " + var_331_string;
		var_347_int = var_345_int + " doesn't exist";
		Trace(var_347_int);
	} else {
		@@var_330_object:AddStationaryActor(Obj(), var_340_cvector, var_341_cvector, var_332_string, var_333_string);
	}
	var_342_object = var_329_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_10379(var_5729_int, var_5730_float)
{
	var_5731_int = 0; var_5732_int = 0; var_5733_int = 0; var_5734_float = 0;
	var_5730_float = var_5734_float;
	func_12278(var_5731_int, (int)530654, (int)530653, var_5734_float);
	var_5731_int = var_5729_int;
	return 0;
}


func_7314(var_3138_int, var_3139_int, var_3140_object, var_3141_object, var_3142_object, var_3143_object)
{
	var_3145_bool = var_3139_int == (int)0;
	if(var_3145_bool != 0) {
		var_3146_int = 0; var_3147_bool = 0;
		func_746((int)15, (bool)1);
		var_3148_int = 0; var_3149_bool = 0; var_3150_int = 0;
		func_763((int)15, (bool)1, (int)1);
		var_3151_int = 0; var_3152_int = 0; var_3153_object = Obj(); var_3154_object = Obj(); var_3155_object = Obj();
		var_3138_int = var_3152_int;
		var_3140_object = var_3153_object;
		var_3141_object = var_3154_object;
		var_3142_object = var_3155_object;
		func_591((int)15, var_3152_int, var_3153_object, var_3154_object, var_3155_object);
		var_3156_object = Obj(); var_3157_int = 0;
		var_3143_object = var_3156_object;
		func_255(var_3156_object, (int)1);
		var_3158_int = 0; var_3159_bool = 0; var_3160_int = 0;
		func_820((int)15, (bool)1, (int)5);
		var_3161_int = 0; var_3162_bool = 0; var_3163_int = 0;
		func_882((int)15, (bool)0, (int)5);
	}
	var_3164_int = 0; var_3165_bool = 0;
	func_729((int)15, (bool)0);
	var_3166_int = 0; var_3167_int = 0; var_3168_int = 0;
	var_3138_int = var_3167_int;
	var_3139_int = var_3168_int;
	func_2534((int)15, var_3167_int, var_3168_int);
	return 0;
}


func_10388(var_5199_int, var_5200_float)
{
	var_5201_int = 0; var_5202_int = 0; var_5203_int = 0; var_5204_float = 0;
	var_5200_float = var_5204_float;
	func_12278(var_5201_int, (int)529880, (int)529879, var_5204_float);
	var_5201_int = var_5199_int;
	return 0;
}


func_11412()
{
	var_5035_object = Obj(); var_5036_object = Obj(); var_5037_object = Obj(); var_5038_object = Obj();
	func_12286(Obj());
	var_5039_object = var_5037_object;
	@@var_5037_object:FindMark(var_5038_object, "b11q04NotkinGotoSanitar");
	var_5041_object = var_5038_object;
	if(var_5041_object != 0) {
		@@var_5038_object:Remove();
	}
	@@var_5037_object:FindMark(var_5038_object, "b11q04SanitarGotoOfficer");
	var_5043_object = var_5038_object;
	if(var_5043_object != 0) {
		@@var_5038_object:Remove();
	}
	var_5044_bool = 0; var_5045_int = 0;
	func_12261(var_5044_bool, (int)313);
	var_5046_bool = 0; var_5047_int = 0;
	func_12261(var_5046_bool, (int)551);
	var_5048_bool = 0; var_5049_int = 0;
	func_12261(var_5048_bool, (int)598);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_151(var_4783_string, var_4784_bool)
{
	var_4785_object = Obj(); var_4786_object = Obj();
	FindActor(var_4786_object, var_4783_string);
	var_4787_bool = var_4786_object == 0; //@nz
	if(var_4787_bool != 0) {
		var_4789_int = "Door " + var_4783_string;
		var_4791_int = var_4789_int + " not found";
		Trace(var_4791_int);
	} else {
		@@var_4786_object:SetProperty("locked", var_4784_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_10397(var_5354_int, var_5355_float)
{
	var_5356_int = 0; var_5357_int = 0; var_5358_int = 0; var_5359_float = 0;
	var_5355_float = var_5359_float;
	func_12278(var_5356_int, (int)529882, (int)529881, var_5359_float);
	var_5356_int = var_5354_int;
	return 0;
}


func_10406(var_5689_int, var_5690_float)
{
	var_5691_int = 0; var_5692_int = 0; var_5693_int = 0; var_5694_float = 0;
	var_5690_float = var_5694_float;
	func_12278(var_5691_int, (int)531549, (int)531548, var_5694_float);
	var_5691_int = var_5689_int;
	return 0;
}


func_168(var_4815_string, var_4816_bool)
{
	var_4817_object = Obj(); var_4818_object = Obj();
	FindActor(var_4818_object, var_4815_string);
	var_4819_bool = var_4818_object == 0; //@nz
	if(var_4819_bool != 0) {
		var_4821_int = "Door " + var_4815_string;
		var_4823_int = var_4821_int + " not found";
		Trace(var_4823_int);
	} else {
		var_4824_bool = var_4816_bool;
		if(var_4824_bool != 0) {
			@@var_4818_object:Close();
		}
		@@var_4818_object:SetProperty("locked", var_4816_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_5292(var_3712_int, var_3713_int, var_3714_object, var_3715_object, var_3716_object, var_3717_object)
{
	var_3719_bool = var_3713_int == (int)0;
	if(var_3719_bool != 0) {
		var_3720_int = 0; var_3721_bool = 0;
		func_746((int)4, (bool)0);
		var_3722_int = 0; var_3723_bool = 0; var_3724_int = 0;
		func_763((int)4, (bool)0, (int)1);
		var_3725_int = 0; var_3726_int = 0; var_3727_object = Obj(); var_3728_object = Obj(); var_3729_object = Obj();
		var_3712_int = var_3726_int;
		var_3714_object = var_3727_object;
		var_3715_object = var_3728_object;
		var_3716_object = var_3729_object;
		func_670((int)4, var_3726_int, var_3727_object, var_3728_object, var_3729_object);
		var_3730_object = Obj(); var_3731_int = 0;
		var_3717_object = var_3730_object;
		func_255(var_3730_object, (int)2);
		var_3732_int = 0; var_3733_bool = 0; var_3734_int = 0;
		func_820((int)4, (bool)0, (int)4);
		var_3735_int = 0; var_3736_bool = 0; var_3737_int = 0;
		func_882((int)4, (bool)1, (int)4);
	}
	var_3738_int = 0; var_3739_bool = 0;
	func_729((int)4, (bool)0);
	var_3740_int = 0; var_3741_int = 0; var_3742_int = 0;
	var_3712_int = var_3741_int;
	var_3713_int = var_3742_int;
	func_3797((int)4, var_3741_int, var_3742_int);
	return 0;
}


func_10415(var_5346_int, var_5347_float)
{
	var_5348_int = 0; var_5349_int = 0; var_5350_int = 0; var_5351_float = 0;
	var_5347_float = var_5351_float;
	func_12278(var_5348_int, (int)529884, (int)529883, var_5351_float);
	var_5348_int = var_5346_int;
	return 0;
}


func_6320(var_2867_int, var_2868_int, var_2869_object, var_2870_object, var_2871_object, var_2872_object)
{
	var_2874_bool = var_2868_int == (int)0;
	if(var_2874_bool != 0) {
		var_2875_int = 0; var_2876_bool = 0;
		func_746((int)10, (bool)1);
		var_2877_int = 0; var_2878_bool = 0; var_2879_int = 0;
		func_763((int)10, (bool)1, (int)1);
		var_2880_int = 0; var_2881_int = 0; var_2882_object = Obj(); var_2883_object = Obj(); var_2884_object = Obj();
		var_2867_int = var_2881_int;
		var_2869_object = var_2882_object;
		var_2870_object = var_2883_object;
		var_2871_object = var_2884_object;
		func_591((int)10, var_2881_int, var_2882_object, var_2883_object, var_2884_object);
		var_2885_object = Obj(); var_2886_int = 0;
		var_2872_object = var_2885_object;
		func_255(var_2885_object, (int)1);
		var_2887_int = 0; var_2888_bool = 0; var_2889_int = 0;
		func_820((int)10, (bool)1, (int)7);
		var_2890_int = 0; var_2891_bool = 0; var_2892_int = 0;
		func_882((int)10, (bool)0, (int)7);
	}
	var_2893_int = 0; var_2894_bool = 0;
	func_729((int)10, (bool)0);
	var_2895_int = 0; var_2896_int = 0; var_2897_int = 0;
	var_2867_int = var_2896_int;
	var_2868_int = var_2897_int;
	func_2714((int)10, var_2896_int, var_2897_int);
	return 0;
}


func_14516(var_5392_object, var_5393_bool, var_5394_int)
{
	@@var_5392_object:add((int)18);
	@@var_5392_object:add((int)24);
	@@var_5392_object:add((int)20);
	@@var_5392_object:add((int)14);
	var_5400_bool = var_5393_bool == (bool)0;
	if(var_5400_bool != 0) {
		@@var_5392_object:add((int)10);
		@@var_5392_object:add((int)17);
		@@var_5392_object:add((int)8);
	} else {
		var_5405_bool = var_5394_int != (int)1;
		if(var_5405_bool == 0) goto Label_14548;
		@@var_5392_object:add((int)10);
	}
Label_14548:
	return 0;
	
}


func_1205(var_2157_float, var_2158_int)
{
	var_2160_int = var_2158_int + (int)1;
	var_2162_bool = var_2160_int == (int)1;
	if(var_2162_bool != 0) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x50d";
	}
	var_2164_int = var_2158_int + (int)1;
	var_2166_bool = var_2164_int == (int)2;
	if(var_2166_bool != 0) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x50d";
	}
	var_2168_int = var_2158_int + (int)1;
	var_2170_bool = var_2168_int == (int)3;
	if(var_2170_bool != 0) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x50d";
	}
	var_2172_int = var_2158_int + (int)1;
	var_2174_bool = var_2172_int == (int)4;
	if(var_2174_bool != 0) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x50d";
	}
	var_2176_int = var_2158_int + (int)1;
	var_2178_bool = var_2176_int == (int)5;
	if(var_2178_bool != 0) {
		var_2157_float = 0;
		return 0;
	EMIT "GOTO 0x50d";
	}
	var_2180_int = var_2158_int + (int)1;
	var_2182_bool = var_2180_int == (int)6;
	if(var_2182_bool != 0) {
		var_2157_float = 2;
		return 0;
	EMIT "GOTO 0x50d";
	}
	var_2184_int = var_2158_int + (int)1;
	var_2186_bool = var_2184_int == (int)7;
	if(var_2186_bool != 0) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x50d";
	}
	var_2188_int = var_2158_int + (int)1;
	var_2190_bool = var_2188_int == (int)8;
	if(var_2190_bool != 0) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x50d";
	}
	var_2192_int = var_2158_int + (int)1;
	var_2194_bool = var_2192_int == (int)9;
	if(var_2194_bool != 0) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x50d";
	}
	var_2196_int = var_2158_int + (int)1;
	var_2198_bool = var_2196_int == (int)10;
	if(var_2198_bool != 0) {
		var_2157_float = 1;
		return 0;
	EMIT "GOTO 0x50d";
	}
	var_2200_int = var_2158_int + (int)1;
	var_2202_bool = var_2200_int == (int)11;
	if(var_2202_bool != 0) {
		var_2157_float = 1;
		return 0;
	}
	var_2157_float = 0;
	return 0;
}


func_3254(var_2303_int, var_2304_int, var_2305_int)
{
	var_2306_int = 0; var_2307_int = 0; var_2308_int = 0; var_2309_int = 0;
	var_2310_bool = 0;
	var_2310_bool = 0;
	var_2312_bool = var_2305_int > (int)8;
	if(var_2312_bool != 0) {
		var_2314_bool = var_2305_int < (int)21;
		if(var_2314_bool != 0) {
			var_2310_bool = 1;
		}
	}
	if(var_2310_bool != 0) {
		var_2315_int = 0; var_2316_string = ""; var_2317_string = ""; var_2318_int = 0;
		var_2303_int = var_2315_int;
		func_453(var_2315_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)7);
		var_2319_int = 0; var_2320_string = ""; var_2321_string = ""; var_2322_int = 0;
		var_2303_int = var_2319_int;
		func_453(var_2319_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)7);
		var_2323_int = 0; var_2324_string = ""; var_2325_string = ""; var_2326_int = 0;
		var_2303_int = var_2323_int;
		func_453(var_2323_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_2327_int = 0; var_2328_string = ""; var_2329_string = ""; var_2330_int = 0;
		var_2303_int = var_2327_int;
		func_479(var_2327_int, "fog", "fog.xml", (int)7);
		var_2332_bool = var_2304_int >= (int)5;
		if(var_2332_bool != 0) {
			var_2333_int = 0; var_2334_string = ""; var_2335_string = ""; var_2336_int = 0;
			var_2303_int = var_2333_int;
			func_479(var_2333_int, "fog", "fog_hunter.xml", (int)3);
		}
		var_2338_float = 0; var_2339_int = 0;
		var_2304_int = var_2339_int;
		func_1205(var_2338_float, var_2339_int);
		var_2308_int = (int)2 * var_2338_float;
		var_2340_int = var_2308_int;
		if(var_2340_int != 0) {
			var_2341_int = 0; var_2342_string = ""; var_2343_string = ""; var_2344_int = 0;
			var_2303_int = var_2341_int;
			var_2308_int = var_2344_int;
			func_453(var_2341_int, "pers_bomber", "bomber.xml", var_2344_int);
		}
	} else {
		var_2375_int = 0; var_2376_string = ""; var_2377_string = ""; var_2378_int = 0;
		var_2303_int = var_2375_int;
		func_453(var_2375_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)5);
		var_2379_int = 0; var_2380_string = ""; var_2381_string = ""; var_2382_int = 0;
		var_2303_int = var_2379_int;
		func_453(var_2379_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_2383_int = 0; var_2384_string = ""; var_2385_string = ""; var_2386_int = 0;
		var_2303_int = var_2383_int;
		func_453(var_2383_int, "pers_rat_big", "rat_big.xml", (int)4);
		var_2387_int = 0; var_2388_string = ""; var_2389_string = ""; var_2390_int = 0;
		var_2303_int = var_2387_int;
		func_479(var_2387_int, "fog", "fog.xml", (int)7);
		var_2392_bool = var_2304_int >= (int)5;
		if(var_2392_bool != 0) {
			var_2393_int = 0; var_2394_string = ""; var_2395_string = ""; var_2396_int = 0;
			var_2303_int = var_2393_int;
			func_479(var_2393_int, "fog", "fog_hunter.xml", (int)3);
		}
		var_2398_float = 0; var_2399_int = 0;
		var_2304_int = var_2399_int;
		func_1205(var_2398_float, var_2399_int);
		var_2309_int = (int)2 * var_2398_float;
		var_2400_int = var_2309_int;
		if(var_2400_int == 0) goto Label_3372;
		var_2401_int = 0; var_2402_string = ""; var_2403_string = ""; var_2404_int = 0;
		var_2303_int = var_2401_int;
		var_2309_int = var_2404_int;
		func_453(var_2401_int, "pers_bomber", "bomber.xml", var_2404_int);
	}
Label_3372:
	var_2345_bool = 0; var_2346_int = 0;
	var_2304_int = var_2346_int;
	func_1322(var_2345_bool, var_2346_int);
	if(var_2345_bool != 0) {
		var_2347_int = 0; var_2348_string = ""; var_2349_string = ""; var_2350_int = 0;
		var_2303_int = var_2347_int;
		func_453(var_2347_int, "pers_sanitar", "sanitar.xml", (int)2);
	}
	var_2351_int = 0; var_2352_string = ""; var_2353_string = ""; var_2354_int = 0; var_2355_int = 0; var_2356_int = 0;
	var_2303_int = var_2351_int;
	func_466(var_2351_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2357_int = 0; var_2358_string = ""; var_2359_string = ""; var_2360_int = 0; var_2361_int = 0; var_2362_int = 0;
	var_2303_int = var_2357_int;
	func_466(var_2357_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2363_int = 0; var_2364_string = ""; var_2365_string = ""; var_2366_int = 0; var_2367_int = 0; var_2368_int = 0;
	var_2303_int = var_2363_int;
	func_466(var_2363_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2369_int = 0; var_2370_string = ""; var_2371_string = ""; var_2372_int = 0; var_2373_int = 0; var_2374_int = 0;
	var_2303_int = var_2369_int;
	func_466(var_2369_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	return 4;
	
}


func_11446()
{
	func_12181();
	return 0;
}


func_10424(var_5923_int, var_5924_float)
{
	var_5925_int = 0; var_5926_int = 0; var_5927_int = 0; var_5928_float = 0;
	var_5924_float = var_5928_float;
	func_12278(var_5925_int, (int)530276, (int)530275, var_5928_float);
	var_5925_int = var_5923_int;
	return 0;
}


func_11451()
{
	var_4904_int = 0; var_4905_string = "";
	func_106(var_4904_int, "B_Mission3");
	var_4907_bool = var_4904_int == (int)0;
	if(var_4907_bool != 0) {
		SetVariable("B_Mission3", (int)1);
		func_12194();
		var_4929_bool = 0; var_4930_int = 0;
		func_12261(var_4929_bool, (int)562);
		var_4931_bool = 0; var_4932_int = 0;
		func_12261(var_4931_bool, (int)563);
	}
	return 0;
}


func_189(var_672_bool, var_673_string, var_674_string)
{
	var_675_object = Obj(); var_676_object = Obj();
	FindActor(var_676_object, var_673_string);
	var_677_bool = var_676_object == 0; //@ne
	if(var_677_bool != 0) {
		var_672_bool = 0;
		return 2;
	}
	Trigger(var_676_object, var_674_string);
	var_672_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_10433(var_5801_int, var_5802_float)
{
	var_5803_int = 0; var_5804_int = 0; var_5805_int = 0; var_5806_float = 0;
	var_5802_float = var_5806_float;
	func_12278(var_5803_int, (int)533054, (int)533053, var_5806_float);
	var_5803_int = var_5801_int;
	return 0;
}


func_7366(var_4272_int, var_4273_int, var_4274_object, var_4275_object, var_4276_object, var_4277_object)
{
	var_4279_bool = var_4273_int == (int)0;
	if(var_4279_bool != 0) {
		var_4280_int = 0; var_4281_bool = 0;
		func_746((int)15, (bool)0);
		var_4282_int = 0; var_4283_bool = 0; var_4284_int = 0;
		func_763((int)15, (bool)0, (int)1);
		var_4285_int = 0; var_4286_int = 0; var_4287_object = Obj(); var_4288_object = Obj(); var_4289_object = Obj();
		var_4272_int = var_4286_int;
		var_4274_object = var_4287_object;
		var_4275_object = var_4288_object;
		var_4276_object = var_4289_object;
		func_670((int)15, var_4286_int, var_4287_object, var_4288_object, var_4289_object);
		var_4290_object = Obj(); var_4291_int = 0;
		var_4277_object = var_4290_object;
		func_255(var_4290_object, (int)2);
		var_4292_int = 0; var_4293_bool = 0; var_4294_int = 0;
		func_820((int)15, (bool)0, (int)5);
		var_4295_int = 0; var_4296_bool = 0; var_4297_int = 0;
		func_882((int)15, (bool)1, (int)5);
	}
	var_4298_int = 0; var_4299_bool = 0;
	func_729((int)15, (bool)0);
	var_4300_int = 0; var_4301_int = 0; var_4302_int = 0;
	var_4272_int = var_4301_int;
	var_4273_int = var_4302_int;
	func_3421((int)15, var_4301_int, var_4302_int);
	return 0;
}


func_201(var_4470_bool, var_4471_string, var_4472_string, var_4473_string)
{
	var_4474_object = Obj(); var_4475_object = Obj();
	FindActor(var_4475_object, var_4471_string);
	var_4476_bool = var_4475_object == 0; //@ne
	if(var_4476_bool != 0) {
		var_4470_bool = 0;
		return 2;
	}
	Trigger(var_4475_object, var_4472_string, var_4473_string);
	var_4470_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_10442()
{
	var_4809_string = ""; var_4810_bool = 0;
	func_151("cot_lara@door1", (bool)1);
	return 0;
}


func_10449()
{
	var_6027_string = ""; var_6028_bool = 0;
	func_151("cot_lara@door1", (bool)0);
	return 0;
}


func_11475()
{
	var_5054_int = 0; var_5055_string = "";
	func_106(var_5054_int, "B_Mission4");
	var_5057_bool = var_5054_int == (int)0;
	if(var_5057_bool != 0) {
		SetVariable("B_Mission4", (int)1);
		func_12207();
		var_5068_bool = 0; var_5069_int = 0;
		func_12261(var_5068_bool, (int)562);
		var_5070_bool = 0; var_5071_int = 0;
		func_12261(var_5070_bool, (int)563);
		var_5072_bool = 0; var_5073_int = 0;
		func_12261(var_5072_bool, (int)564);
	}
	return 0;
}


func_213(var_599_object)
{
	var_600_int = 0; var_601_int = 0; var_602_object = Obj(); var_603_int = 0; var_604_int = 0; var_605_object = Obj();
	var_606_object = var_599_object;
	if(var_606_object != 0) {
		@@var_599_object:size(var_603_int);
		var_604_int = 0;

	Label_219:
		var_607_bool = var_604_int < var_603_int;
		if(var_607_bool != 0) {
			@@var_599_object:get(var_605_object, var_604_int);
			var_608_object = var_605_object;
			if(var_608_object != 0) {
				@@var_605_object:Remove();
			}
			var_605_object = 0;
			var_604_int = var_604_int + (int)1;
			goto Label_219;
		}
		@@var_599_object:clear();
	}
	return 6;
}


func_14549(var_5408_int)
{
	var_5409_int = 0; var_5410_int = 0;
	var_5412_int = "vol_" + var_5408_int;
	GetVariable(var_5412_int, var_5410_int);
	var_5414_int = "vol_" + var_5408_int;
	var_5416_int = var_5410_int | (int)8;
	SetVariable(var_5414_int, var_5416_int);
	return 2;
}


func_10456()
{
	var_4815_string = ""; var_4816_bool = 0;
	func_168("icot_eva_door", (bool)1);
	return 0;
}


func_10463()
{
	var_6089_string = ""; var_6090_bool = 0;
	func_168("icot_eva_door", (bool)0);
	return 0;
}


func_5344(var_144_object)
{
	@@var_144_object:add("dt_house3_14_i2");
	@@var_144_object:add("dt_house3_14");
	@@var_144_object:add("house1_arc_01l");
	@@var_144_object:add("house1_arc_01r");
	@@var_144_object:add("dt_House6_01");
	@@var_144_object:add("dt_house_1_09");
	@@var_144_object:add("house5_24");
	@@var_144_object:add("dt_House6_03");
	@@var_144_object:add("dt_House6_04");
	@@var_144_object:add("dt_house_1_08");
	@@var_144_object:add("house5_unoin_solidl");
	@@var_144_object:add("house5_unoin_solidr");
	@@var_144_object:add("dt_house2_12");
	@@var_144_object:add("dt_house2_11");
	@@var_144_object:add("dt_house2_13");
	@@var_144_object:add("dt_house2_09");
	@@var_144_object:add("dt_house2_08");
	@@var_144_object:add("dt_house2_07");
	@@var_144_object:add("dt_house2_06");
	@@var_144_object:add("house5_01");
	@@var_144_object:add("house5_15");
	@@var_144_object:add("house5_16");
	@@var_144_object:add("house5_17");
	@@var_144_object:add("house5_unoin04l");
	@@var_144_object:add("house5_unoin04r");
	@@var_144_object:add("house5_23");
	@@var_144_object:add("house1_se_05r");
	@@var_144_object:add("house1_se_05l");
	@@var_144_object:add("dt_house2_10");
	return 0;
}


func_14561()
{
	var_5384_object = Obj(); var_5385_int = 0; var_5386_int = 0; var_5387_int = 0; var_5388_object = Obj(); var_5389_int = 0; var_5390_int = 0; var_5391_int = 0;
	CreateIntVector(var_5388_object);
	var_5392_object = Obj(); var_5393_bool = 0; var_5394_int = 0;
	var_5388_object = var_5392_object;
	func_14516(var_5392_object, (bool)0, (int)-1);
	@@var_5388_object:size(var_5389_int);
	var_5390_int = 0;
	
Label_14573:
	var_5407_bool = var_5390_int < var_5389_int;
	if(var_5407_bool != 0) {
		@@var_5388_object:get(var_5391_int, var_5390_int);
		var_5408_int = 0;
		var_5391_int = var_5408_int;
		func_14549(var_5408_int);
		var_5390_int = var_5390_int + (int)1;
		goto Label_14573;
	}
	return 8;
}
EMIT "Stack[-4] = 0";


func_6372(var_3997_int, var_3998_int, var_3999_object, var_4000_object, var_4001_object, var_4002_object)
{
	var_4004_bool = var_3998_int == (int)0;
	if(var_4004_bool != 0) {
		var_4005_int = 0; var_4006_bool = 0;
		func_746((int)10, (bool)0);
		var_4007_int = 0; var_4008_bool = 0; var_4009_int = 0;
		func_763((int)10, (bool)0, (int)1);
		var_4010_int = 0; var_4011_int = 0; var_4012_object = Obj(); var_4013_object = Obj(); var_4014_object = Obj();
		var_3997_int = var_4011_int;
		var_3999_object = var_4012_object;
		var_4000_object = var_4013_object;
		var_4001_object = var_4014_object;
		func_670((int)10, var_4011_int, var_4012_object, var_4013_object, var_4014_object);
		var_4015_object = Obj(); var_4016_int = 0;
		var_4002_object = var_4015_object;
		func_255(var_4015_object, (int)2);
		var_4017_int = 0; var_4018_bool = 0; var_4019_int = 0;
		func_820((int)10, (bool)0, (int)7);
		var_4020_int = 0; var_4021_bool = 0; var_4022_int = 0;
		func_882((int)10, (bool)1, (int)7);
	}
	var_4023_int = 0; var_4024_bool = 0;
	func_729((int)10, (bool)0);
	var_4025_int = 0; var_4026_int = 0; var_4027_int = 0;
	var_3997_int = var_4026_int;
	var_3998_int = var_4027_int;
	func_3609((int)10, var_4026_int, var_4027_int);
	return 0;
}


func_10470()
{
	var_4830_string = ""; var_4831_bool = 0;
	func_151("cot_alexandr@door1", (bool)1);
	return 0;
}


func_234(var_4581_float)
{
	var_4582_float = 0; var_4583_float = 0;
	GetGameTime(var_4583_float);
	var_4583_float = var_4581_float;
	return 2;
}


func_10477()
{
	var_6112_string = ""; var_6113_bool = 0;
	func_151("cot_alexandr@door1", (bool)0);
	return 0;
}


func_239()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_4335()
{
	return 0;
}


func_4337(var_518_int, var_519_int, var_520_object, var_521_object, var_522_object, var_523_object)
{
	var_525_bool = var_519_int == (int)0;
	if(var_525_bool != 0) {
		var_526_int = 0; var_527_bool = 0;
		func_746((int)0, (bool)0);
		var_528_int = 0; var_529_bool = 0; var_530_int = 0;
		func_763((int)0, (bool)0, (int)1);
		var_566_int = 0; var_567_int = 0; var_568_object = Obj(); var_569_object = Obj(); var_570_object = Obj();
		var_566_int = 0;
		var_518_int = var_567_int;
		var_520_object = var_568_object;
		var_521_object = var_569_object;
		var_522_object = var_570_object;
		func_572(var_567_int, var_568_object, var_569_object, var_570_object);
		var_612_object = Obj(); var_613_int = 0;
		var_523_object = var_612_object;
		func_255(var_612_object, (int)0);
		var_639_int = 0; var_640_bool = 0; var_641_int = 0;
		func_820((int)0, (bool)0, (int)4);
		var_686_int = 0; var_687_bool = 0; var_688_int = 0;
		func_882((int)0, (bool)0, (int)4);
	}
	var_724_int = 0; var_725_int = 0;
	var_519_int = var_725_int;
	func_1000((int)0, var_725_int);
	var_750_int = 0; var_751_int = 0; var_752_int = 0;
	var_518_int = var_751_int;
	var_519_int = var_752_int;
	func_2156((int)0, var_751_int, var_752_int);
	return 0;
}


func_11503()
{
	var_5749_object = Obj(); var_5750_object = Obj();
	func_12286(Obj());
	var_5751_object = var_5750_object;
	var_5756_float = 0;
	func_234(var_5756_float);
	@@var_5750_object:AddMark("b4Spi4kaMapMark", "pt_map_spi4ka", (int)3, (int)531086, var_5756_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_244()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_10484()
{
	var_4836_string = ""; var_4837_bool = 0;
	func_151("cot_katerina@door1", (bool)1);
	return 0;
}


func_249(var_446_string, var_447_int)
{
	var_449_int = "Region" + var_447_int;
	var_446_string = var_449_int + "State";
	return 0;
}


func_14586()
{
	func_14561();
	return 0;
}


func_10491()
{
	var_6118_string = ""; var_6119_bool = 0;
	func_151("cot_katerina@door1", (bool)0);
	return 0;
}


func_14590()
{
	var_4527_int = 0;
	func_7558((int)7);
	return 0;
}


func_255(var_612_object, var_613_int)
{
	var_614_int = 0; var_615_string = ""; var_616_int = 0; var_617_string = ""; var_618_string = ""; var_619_object = Obj(); var_620_int = 0; var_621_string = ""; var_622_int = 0; var_623_string = ""; var_624_string = ""; var_625_object = Obj();
	@@var_612_object:size(var_620_int);
	var_627_bool = var_613_int == (int)1;
	if(var_627_bool != 0) {
		var_621_string = "s_";
	} else {
			var_638_bool = var_613_int == (int)2;
			if(var_638_bool == 0) goto Label_267;
			var_621_string = "n_";
	}
Label_267:
	var_622_int = 0;
	
Label_268:
	var_628_bool = var_622_int < var_620_int;
	if(var_628_bool != 0) {
		@@var_612_object:get(var_623_string, var_622_int);
		var_629_int = var_621_string + var_623_string;
		var_624_string = var_629_int + ".isc";
		GetSceneByName(var_625_object, var_623_string);
		var_631_bool = var_625_object == 0; //@nz
		if(var_631_bool != 0) {
			var_633_int = "City manager: can't replace indoor scene \"" + var_623_string;
			var_635_int = var_633_int + "\" because it doesn't exist";
			Trace(var_635_int);
		} else {
			ReplaceScene(var_625_object, var_624_string);
	}
		var_625_object = 0;
		var_622_int = var_622_int + (int)1;
		goto Label_268;
	}
	return 12;
	
}


func_11519()
{
	var_5681_object = Obj(); var_5682_object = Obj();
	func_12286(Obj());
	var_5683_object = var_5682_object;
	var_5688_float = 0;
	func_234(var_5688_float);
	@@var_5682_object:AddMark("b9Block", "pt_map_uprava_admin", (int)3, (int)531551, var_5688_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10498()
{
	return 0;
}


func_14595(var_144_bool, var_145_int, var_146_int)
{
	var_148_bool = var_145_int == (int)6;
	if(var_148_bool != 0) {
		var_144_bool = 0;
		return 0;
	}
	var_150_bool = var_146_int == (int)4;
	if(var_150_bool != 0) {
		var_152_bool = var_145_int == (int)15;
		if(var_152_bool != 0) {
			var_144_bool = 0;
			return 0;
		}
		var_154_bool = var_145_int == (int)9;
		if(var_154_bool != 0) {
			var_144_bool = 0;
			return 0;
		}
	} else {
		var_156_bool = var_146_int == (int)5;
		if(var_156_bool != 0) {
			var_158_bool = var_145_int == (int)15;
			if(var_158_bool != 0) {
				var_144_bool = 0;
				return 0;
			}
			goto Label_14632;
		}
		var_160_bool = var_146_int == (int)6;
		if(var_160_bool == 0) goto Label_14632;
		var_162_bool = var_145_int == (int)15;
		if(var_162_bool == 0) goto Label_14632;
		var_144_bool = 0;
		return 0;
	}
Label_14632:
	var_144_bool = 1;
	return 0;
	
}


func_10500()
{
	return 0;
}


func_10502()
{
	var_4846_string = ""; var_4847_bool = 0;
	func_151("burah_home@door1", (bool)1);
	return 0;
}


func_10509()
{
	var_6384_string = ""; var_6385_bool = 0;
	func_151("burah_home@door1", (bool)0);
	return 0;
}


func_1295(var_1128_bool, var_1129_int, var_1130_int)
{
	var_1128_bool = 0;
	var_1132_bool = var_1129_int >= (int)10;
	if(var_1132_bool != 0) {
		var_1134_bool = var_1130_int < (int)6;
		if(var_1134_bool != 0) {
			var_1128_bool = 1;
		}
	}
	return 0;
}


func_11535()
{
	var_5651_object = Obj(); var_5652_object = Obj();
	func_12286(Obj());
	var_5653_object = var_5652_object;
	var_5658_float = 0;
	func_234(var_5658_float);
	@@var_5652_object:AddMark("b2AndreiKabak", "pt_map_andrei", (int)0, (int)531558, var_5658_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10516()
{
	var_4852_object = Obj(); var_4853_object = Obj();
	func_12286(Obj());
	var_4854_object = var_4853_object;
	var_4865_float = 0;
	func_234(var_4865_float);
	@@var_4853_object:AddMark("b1BigVlad", "pt_map_bigvlad", (int)3, (int)520525, var_4865_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6424(var_245_object)
{
	@@var_245_object:add("r5_house2_01");
	@@var_245_object:add("r5_house2_02");
	@@var_245_object:add("r5_house2_03");
	@@var_245_object:add("r5_house3_01_i2");
	@@var_245_object:add("r5_house3_01");
	@@var_245_object:add("r5_house3_02_i2");
	@@var_245_object:add("r5_house3_02");
	@@var_245_object:add("r5_house3_03_i2");
	@@var_245_object:add("r5_house3_03");
	@@var_245_object:add("r5_house3_04_i2");
	@@var_245_object:add("r5_house3_04");
	@@var_245_object:add("r5_house3_05_i2");
	@@var_245_object:add("r5_house3_05");
	@@var_245_object:add("r5_house3_06_i2");
	@@var_245_object:add("r5_house3_06");
	@@var_245_object:add("r5_house3_07_i2");
	@@var_245_object:add("r5_house3_07");
	@@var_245_object:add("r5_House6_01");
	return 0;
}


func_1305(var_1139_bool, var_1140_int, var_1141_int)
{
	var_1139_bool = 0;
	var_1143_bool = var_1140_int >= (int)3;
	if(var_1143_bool != 0) {
		var_1144_bool = 0;
		var_1144_bool = 1;
		var_1146_bool = var_1141_int > (int)22;
		if(var_1146_bool != 1) {
			var_1148_bool = var_1141_int < (int)5;
			if(var_1148_bool != 1) {
				var_1144_bool = 0;
			}
		}
		if(var_1144_bool != 0) {
			var_1139_bool = 1;
		}
	}
	return 0;
}


func_2333(var_914_int, var_915_int, var_916_int)
{
	var_917_int = 0; var_918_int = 0;
	var_920_int = var_915_int + (int)1;
	var_922_bool = var_920_int == (int)12;
	if(var_922_bool != 0) {
		return 2;
	}
	var_923_bool = 0;
	var_923_bool = 0;
	var_924_bool = 0;
	var_924_bool = 1;
	var_926_bool = var_916_int < (int)7;
	if(var_926_bool != 1) {
		var_928_bool = var_916_int > (int)21;
		if(var_928_bool != 1) {
			var_924_bool = 0;
		}
	}
	if(var_924_bool != 0) {
		var_930_bool = var_915_int != (int)0;
		if(var_930_bool != 0) {
			var_923_bool = 1;
		}
	}
	if(var_923_bool != 0) {
		var_932_float = 0; var_933_int = 0;
		var_915_int = var_933_int;
		func_1091(var_932_float, var_933_int);
		var_918_int = (int)1 * var_932_float;
		var_934_int = var_918_int;
		if(var_934_int != 0) {
			var_935_int = 0; var_936_string = ""; var_937_string = ""; var_938_int = 0;
			var_914_int = var_935_int;
			var_918_int = var_938_int;
			func_453(var_935_int, "pers_grabitel", "grabitel.xml", var_938_int);
		}
	}
	var_939_bool = 0; var_940_int = 0; var_941_int = 0;
	var_915_int = var_940_int;
	var_916_int = var_941_int;
	func_1060(var_939_bool, var_940_int, var_941_int);
	if(var_939_bool != 0) {
		var_942_int = 0; var_943_string = ""; var_944_string = ""; var_945_int = 0;
		var_914_int = var_942_int;
		func_453(var_942_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_946_int = 0; var_947_string = ""; var_948_string = ""; var_949_int = 0;
		var_914_int = var_946_int;
		func_453(var_946_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_950_int = 0; var_951_string = ""; var_952_string = ""; var_953_int = 0;
		var_914_int = var_950_int;
		func_453(var_950_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_954_int = 0; var_955_string = ""; var_956_string = ""; var_957_int = 0;
		var_914_int = var_954_int;
		func_453(var_954_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_958_int = 0; var_959_string = ""; var_960_string = ""; var_961_int = 0;
		var_914_int = var_958_int;
		func_453(var_958_int, "pers_alkash", "alkash.xml", (int)1);
		var_962_int = 0; var_963_string = ""; var_964_string = ""; var_965_int = 0;
		var_914_int = var_962_int;
		func_453(var_962_int, "pers_woman", "woman.xml", (int)2);
	} else {
		var_978_bool = 0;
		var_978_bool = 0;
		var_980_bool = var_916_int > (int)8;
		if(var_980_bool != 0) {
			var_982_bool = var_916_int < (int)21;
			if(var_982_bool != 0) {
				var_978_bool = 1;
			}
		}
		if(var_978_bool != 0) {
			var_983_int = 0; var_984_string = ""; var_985_string = ""; var_986_int = 0;
			var_914_int = var_983_int;
			func_453(var_983_int, "pers_worker", "worker.xml", (int)2);
			var_987_int = 0; var_988_string = ""; var_989_string = ""; var_990_int = 0;
			var_914_int = var_987_int;
			func_453(var_987_int, "pers_worker", "worker2.xml", (int)2);
			var_991_int = 0; var_992_string = ""; var_993_string = ""; var_994_int = 0;
			var_914_int = var_991_int;
			func_453(var_991_int, "pers_alkash", "alkash.xml", (int)1);
			var_995_int = 0; var_996_string = ""; var_997_string = ""; var_998_int = 0;
			var_914_int = var_995_int;
			func_453(var_995_int, "pers_woman", "woman.xml", (int)2);
			var_999_int = 0; var_1000_string = ""; var_1001_string = ""; var_1002_int = 0;
			var_914_int = var_999_int;
			func_453(var_999_int, "pers_unosha", "unosha.xml", (int)1);
			var_1003_int = 0; var_1004_string = ""; var_1005_string = ""; var_1006_int = 0;
			var_914_int = var_1003_int;
			func_453(var_1003_int, "pers_unosha", "unosha2.xml", (int)1);
			goto Label_2509;
		}
		var_1007_int = 0; var_1008_string = ""; var_1009_string = ""; var_1010_int = 0;
		var_914_int = var_1007_int;
		func_453(var_1007_int, "pers_alkash", "alkash.xml", (int)1);
		var_1011_int = 0; var_1012_string = ""; var_1013_string = ""; var_1014_int = 0;
		var_914_int = var_1011_int;
		func_453(var_1011_int, "pers_worker", "worker.xml", (int)1);
		var_1015_int = 0; var_1016_string = ""; var_1017_string = ""; var_1018_int = 0;
		var_914_int = var_1015_int;
		func_453(var_1015_int, "pers_worker", "worker2.xml", (int)1);
		var_1019_int = 0; var_1020_string = ""; var_1021_string = ""; var_1022_int = 0;
		var_914_int = var_1019_int;
		func_453(var_1019_int, "pers_unosha", "unosha2.xml", (int)1);
		var_1023_int = 0; var_1024_string = ""; var_1025_string = ""; var_1026_int = 0;
		var_914_int = var_1023_int;
		func_453(var_1023_int, "pers_dog", "dog.xml", (int)1);
	}
Label_2509:
	var_966_bool = 0;
	var_966_bool = 0;
	var_967_bool = 0;
	var_967_bool = 0;
	var_969_bool = var_915_int == (int)0;
	if(var_969_bool != 0) {
		var_971_bool = var_916_int > (int)12;
		if(var_971_bool != 0) {
			var_967_bool = 1;
		}
	}
	if(var_967_bool != 0) {
		var_973_bool = var_916_int < (int)22;
		if(var_973_bool != 0) {
			var_966_bool = 1;
		}
	}
	if(var_966_bool != 0) {
		var_974_int = 0; var_975_string = ""; var_976_string = ""; var_977_int = 0;
		var_914_int = var_974_int;
		func_453(var_974_int, "pers_woman", "woman_killme.xml", (int)1);
	}
	return 2;
	
}


func_11551()
{
	var_4921_string = ""; var_4922_bool = 0;
	func_151("vagon_army@door1", (bool)1);
	return 0;
}


func_10532()
{
	var_4870_string = ""; var_4871_bool = 0;
	func_151("termitnik2@door1", (bool)1);
	return 0;
}


func_4389(var_2005_int, var_2006_int, var_2007_object, var_2008_object, var_2009_object, var_2010_object)
{
	var_2012_bool = var_2006_int == (int)0;
	if(var_2012_bool != 0) {
		var_2013_int = 0; var_2014_bool = 0;
		func_746((int)0, (bool)1);
		var_2015_int = 0; var_2016_bool = 0; var_2017_int = 0;
		func_763((int)0, (bool)1, (int)1);
		var_2018_int = 0; var_2019_int = 0; var_2020_object = Obj(); var_2021_object = Obj(); var_2022_object = Obj();
		var_2005_int = var_2019_int;
		var_2007_object = var_2020_object;
		var_2008_object = var_2021_object;
		var_2009_object = var_2022_object;
		func_591((int)0, var_2019_int, var_2020_object, var_2021_object, var_2022_object);
		var_2108_object = Obj(); var_2109_int = 0;
		var_2010_object = var_2108_object;
		func_255(var_2108_object, (int)1);
		var_2110_int = 0; var_2111_bool = 0; var_2112_int = 0;
		func_820((int)0, (bool)1, (int)4);
		var_2113_int = 0; var_2114_bool = 0; var_2115_int = 0;
		func_882((int)0, (bool)0, (int)4);
	}
	var_2116_int = 0; var_2117_bool = 0;
	func_729((int)0, (bool)0);
	var_2118_int = 0; var_2119_int = 0; var_2120_int = 0;
	var_2005_int = var_2119_int;
	var_2006_int = var_2120_int;
	func_3087((int)0, var_2119_int, var_2120_int);
	return 0;
}


func_293(var_108_int)
{
	var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0;
	
Label_296:
	var_114_bool = (int)0 < (int)16;
	if(var_114_bool != 0) {
		var_115_bool = 0; var_116_int = 0;
		var_112_int = var_116_int;
		func_380(var_115_bool, var_116_int);
		if(var_115_bool != 0) {
			(int)0 = (int)0 + (int)1;
		}
		var_112_int = var_112_int + (int)1;
		goto Label_296;
	}
	var_111_int = var_108_int;
	return 4;
}


func_11558()
{
	var_4933_string = ""; var_4934_bool = 0;
	func_151("house1_kabak@door1", (bool)1);
	return 0;
}


func_14634(var_4589_int, var_4590_int)
{
	var_4592_object = Obj(); var_4593_object = Obj();
	var_4595_int = "Updating game " + var_4589_int;
	var_4597_int = var_4595_int + " ";
	var_4598_int = var_4597_int + var_4590_int;
	Trace(var_4598_int);
	var_4599_bool = 0;
	var_4599_bool = 0;
	var_4601_bool = var_4589_int == (int)8;
	if(var_4601_bool != 0) {
		var_4603_bool = var_4590_int == (int)0;
		if(var_4603_bool != 0) {
			var_4599_bool = 1;
		}
	}
	if(var_4599_bool != 0) {
		GetSceneByName(var_4593_object, "sobor");
		Trigger(var_4593_object, "aglaja");
		var_4593_object = 0;
	}
	var_4606_bool = 0;
	var_4606_bool = 0;
	var_4608_bool = var_4589_int == (int)9;
	if(var_4608_bool != 0) {
		var_4610_bool = var_4590_int == (int)0;
		if(var_4610_bool != 0) {
			var_4606_bool = 1;
		}
	}
	if(var_4606_bool != 0) {
		var_4611_int = 0;
		func_7635((int)0);
		var_4646_int = 0;
		func_7635((int)1);
		var_4647_int = 0;
		func_7635((int)2);
		var_4648_int = 0;
		func_7635((int)3);
	}
	return 2;
}


func_10539()
{
	var_4845_string = ""; var_4846_bool = 0;
	func_151("cot_viktor@door1", (bool)0);
	return 0;
}


func_1322(var_2208_bool, var_2209_int)
{
	var_2208_bool = var_2209_int >= (int)8;
	return 0;
}


func_11565()
{
	var_4939_string = ""; var_4940_bool = 0;
	func_151("mnogogrannik_han@door1", (bool)1);
	return 0;
}


func_1326(var_1806_int, var_1807_int, var_1808_int)
{
	var_1809_int = 0; var_1810_int = 0;
	var_1812_int = var_1807_int + (int)1;
	var_1814_bool = var_1812_int == (int)12;
	if(var_1814_bool != 0) {
		return 2;
	}
	var_1815_bool = 0;
	var_1815_bool = 0;
	var_1816_bool = 0;
	var_1816_bool = 1;
	var_1818_bool = var_1808_int < (int)7;
	if(var_1818_bool != 1) {
		var_1820_bool = var_1808_int > (int)21;
		if(var_1820_bool != 1) {
			var_1816_bool = 0;
		}
	}
	if(var_1816_bool != 0) {
		var_1822_bool = var_1807_int != (int)0;
		if(var_1822_bool != 0) {
			var_1815_bool = 1;
		}
	}
	if(var_1815_bool != 0) {
		var_1823_float = 0; var_1824_int = 0;
		var_1807_int = var_1824_int;
		func_1091(var_1823_float, var_1824_int);
		var_1823_float = var_1810_int;
		var_1825_int = var_1810_int;
		if(var_1825_int != 0) {
			var_1826_int = 0; var_1827_string = ""; var_1828_string = ""; var_1829_int = 0;
			var_1806_int = var_1826_int;
			var_1810_int = var_1829_int;
			func_453(var_1826_int, "pers_grabitel", "grabitel.xml", var_1829_int);
		}
	}
	var_1830_bool = 0; var_1831_int = 0; var_1832_int = 0;
	var_1807_int = var_1831_int;
	var_1808_int = var_1832_int;
	func_1060(var_1830_bool, var_1831_int, var_1832_int);
	if(var_1830_bool != 0) {
		var_1833_int = 0; var_1834_string = ""; var_1835_string = ""; var_1836_int = 0;
		var_1806_int = var_1833_int;
		func_453(var_1833_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_1837_int = 0; var_1838_string = ""; var_1839_string = ""; var_1840_int = 0;
		var_1806_int = var_1837_int;
		func_453(var_1837_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_1841_int = 0; var_1842_string = ""; var_1843_string = ""; var_1844_int = 0;
		var_1806_int = var_1841_int;
		func_453(var_1841_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_1845_int = 0; var_1846_string = ""; var_1847_string = ""; var_1848_int = 0;
		var_1806_int = var_1845_int;
		func_453(var_1845_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_1849_int = 0; var_1850_string = ""; var_1851_string = ""; var_1852_int = 0;
		var_1806_int = var_1849_int;
		func_453(var_1849_int, "pers_wasted_girl", "wasted_girl.xml", (int)2);
		var_1853_int = 0; var_1854_string = ""; var_1855_string = ""; var_1856_int = 0;
		var_1806_int = var_1853_int;
		func_453(var_1853_int, "pers_wasted_male", "wasted_male.xml", (int)3);
		var_1857_int = 0; var_1858_string = ""; var_1859_string = ""; var_1860_int = 0;
		var_1806_int = var_1857_int;
		func_453(var_1857_int, "pers_woman", "woman.xml", (int)3);
		var_1861_int = 0; var_1862_string = ""; var_1863_string = ""; var_1864_int = 0;
		var_1806_int = var_1861_int;
		func_453(var_1861_int, "pers_boy", "boy.xml", (int)1);
		var_1865_int = 0; var_1866_string = ""; var_1867_string = ""; var_1868_int = 0;
		var_1806_int = var_1865_int;
		func_453(var_1865_int, "pers_girl", "girl.xml", (int)1);
		var_1869_int = 0; var_1870_string = ""; var_1871_string = ""; var_1872_int = 0;
		var_1806_int = var_1869_int;
		func_453(var_1869_int, "pers_girl", "girl2.xml", (int)1);
	} else {
		var_1892_bool = 0;
		var_1892_bool = 0;
		var_1894_bool = var_1808_int > (int)8;
		if(var_1894_bool != 0) {
			var_1896_bool = var_1808_int < (int)21;
			if(var_1896_bool != 0) {
				var_1892_bool = 1;
			}
		}
		if(var_1892_bool != 0) {
			var_1897_int = 0; var_1898_string = ""; var_1899_string = ""; var_1900_int = 0;
			var_1806_int = var_1897_int;
			func_453(var_1897_int, "pers_wasted_girl", "wasted_girl.xml", (int)2);
			var_1901_int = 0; var_1902_string = ""; var_1903_string = ""; var_1904_int = 0;
			var_1806_int = var_1901_int;
			func_453(var_1901_int, "pers_wasted_male", "wasted_male.xml", (int)3);
			var_1905_int = 0; var_1906_string = ""; var_1907_string = ""; var_1908_int = 0;
			var_1806_int = var_1905_int;
			func_453(var_1905_int, "pers_woman", "woman.xml", (int)3);
			var_1909_int = 0; var_1910_string = ""; var_1911_string = ""; var_1912_int = 0;
			var_1806_int = var_1909_int;
			func_453(var_1909_int, "pers_unosha", "unosha.xml", (int)2);
			var_1913_int = 0; var_1914_string = ""; var_1915_string = ""; var_1916_int = 0;
			var_1806_int = var_1913_int;
			func_453(var_1913_int, "pers_unosha", "unosha2.xml", (int)2);
			var_1917_int = 0; var_1918_string = ""; var_1919_string = ""; var_1920_int = 0;
			var_1806_int = var_1917_int;
			func_453(var_1917_int, "pers_boy", "boy.xml", (int)2);
			var_1921_int = 0; var_1922_string = ""; var_1923_string = ""; var_1924_int = 0;
			var_1806_int = var_1921_int;
			func_453(var_1921_int, "pers_girl", "girl.xml", (int)1);
			var_1925_int = 0; var_1926_string = ""; var_1927_string = ""; var_1928_int = 0;
			var_1806_int = var_1925_int;
			func_453(var_1925_int, "pers_girl", "girl2.xml", (int)1);
			goto Label_1536;
		}
		var_1929_int = 0; var_1930_string = ""; var_1931_string = ""; var_1932_int = 0;
		var_1806_int = var_1929_int;
		func_453(var_1929_int, "pers_wasted_girl", "wasted_girl.xml", (int)1);
		var_1933_int = 0; var_1934_string = ""; var_1935_string = ""; var_1936_int = 0;
		var_1806_int = var_1933_int;
		func_453(var_1933_int, "pers_wasted_male", "wasted_male.xml", (int)2);
		var_1937_int = 0; var_1938_string = ""; var_1939_string = ""; var_1940_int = 0;
		var_1806_int = var_1937_int;
		func_453(var_1937_int, "pers_unosha", "unosha.xml", (int)1);
		var_1941_int = 0; var_1942_string = ""; var_1943_string = ""; var_1944_int = 0;
		var_1806_int = var_1941_int;
		func_453(var_1941_int, "pers_unosha", "unosha2.xml", (int)1);
	}
Label_1536:
	var_1873_bool = 0;
	var_1873_bool = 0;
	var_1874_bool = 0;
	var_1874_bool = 0;
	var_1876_bool = var_1807_int == (int)0;
	if(var_1876_bool != 0) {
		var_1878_bool = var_1808_int > (int)12;
		if(var_1878_bool != 0) {
			var_1874_bool = 1;
		}
	}
	if(var_1874_bool != 0) {
		var_1880_bool = var_1808_int < (int)22;
		if(var_1880_bool != 0) {
			var_1873_bool = 1;
		}
	}
	if(var_1873_bool != 0) {
		var_1881_int = 0; var_1882_string = ""; var_1883_string = ""; var_1884_int = 0;
		var_1806_int = var_1881_int;
		func_453(var_1881_int, "pers_wasted_girl", "wasted_girl_killme.xml", (int)1);
	}
	var_1885_bool = 0; var_1886_int = 0; var_1887_int = 0;
	var_1807_int = var_1886_int;
	var_1808_int = var_1887_int;
	func_1295(var_1885_bool, var_1886_int, var_1887_int);
	if(var_1885_bool != 0) {
		var_1888_int = 0; var_1889_string = ""; var_1890_string = ""; var_1891_int = 0;
		var_1806_int = var_1888_int;
		func_453(var_1888_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 2;
	
}


func_10546()
{
	var_5717_string = ""; var_5718_bool = 0;
	func_151("cot_anna@door1", (bool)1);
	return 0;
}


func_11572()
{
	SetVariable("b8DankoLetter2", (int)1);
	return 0;
}


func_311(var_121_int)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0;
	irand(var_126_int, (int)16);
	var_127_int = 0;
	
Label_316:
	var_131_bool = var_127_int < (int)16;
	if(var_131_bool != 0) {
		var_132_int = var_127_int + var_126_int;
		var_128_int = var_132_int % (int)16;
		var_134_bool = 0;
		var_134_bool = 0;
		var_135_bool = 0; var_136_int = 0;
		var_128_int = var_136_int;
		func_350(var_135_bool, var_136_int);
		if(var_135_bool != 0) {
			var_144_bool = 0; var_145_int = 0; var_146_int = 0;
			var_128_int = var_145_int;
			var_121_int = var_146_int;
			func_14595(var_144_bool, var_145_int, var_146_int);
			if(var_144_bool != 0) {
				var_134_bool = 1;
			}
		}
		if(var_134_bool != 0) {
			var_163_int = 0;
			var_128_int = var_163_int;
			func_392(var_163_int);
			var_165_int = "Diseased Region: " + var_128_int;
			Trace(var_165_int);
			var_127_int = var_127_int + (int)1;
			goto Label_316;
		}
		return 6;
	}
	return 6;
}


func_10553()
{
	var_4861_string = ""; var_4862_bool = 0;
	func_151("cot_anna@door1", (bool)0);
	return 0;
}


func_5433(var_1341_int, var_1342_int, var_1343_object, var_1344_object, var_1345_object, var_1346_object)
{
	var_1348_bool = var_1342_int == (int)0;
	if(var_1348_bool != 0) {
		var_1349_int = 0; var_1350_bool = 0;
		func_746((int)5, (bool)0);
		var_1351_int = 0; var_1352_bool = 0; var_1353_int = 0;
		func_763((int)5, (bool)0, (int)1);
		var_1354_int = 0; var_1355_int = 0; var_1356_object = Obj(); var_1357_object = Obj(); var_1358_object = Obj();
		var_1354_int = 5;
		var_1341_int = var_1355_int;
		var_1343_object = var_1356_object;
		var_1344_object = var_1357_object;
		var_1345_object = var_1358_object;
		func_572(var_1355_int, var_1356_object, var_1357_object, var_1358_object);
		var_1359_object = Obj(); var_1360_int = 0;
		var_1346_object = var_1359_object;
		func_255(var_1359_object, (int)0);
		var_1361_int = 0; var_1362_bool = 0; var_1363_int = 0;
		func_820((int)5, (bool)0, (int)4);
		var_1364_int = 0; var_1365_bool = 0; var_1366_int = 0;
		func_882((int)5, (bool)0, (int)4);
	}
	var_1367_int = 0; var_1368_int = 0;
	var_1342_int = var_1368_int;
	func_933((int)5, var_1368_int);
	var_1369_int = 0; var_1370_int = 0; var_1371_int = 0;
	var_1341_int = var_1370_int;
	var_1342_int = var_1371_int;
	func_1847((int)5, var_1370_int, var_1371_int);
	return 0;
}


func_11578()
{
	SetVariable("b9KlaraLetter", (int)1);
	return 0;
}


func_10560()
{
	var_4915_string = ""; var_4916_bool = 0;
	func_151("house_vlad@door2", (bool)1);
	return 0;
}


func_11584()
{
	var_5424_int = 0; var_5425_string = "";
	func_106(var_5424_int, "map_chertez_state");
	var_5427_bool = var_5424_int <= (int)2;
	if(var_5427_bool != 0) {
		SetVariable("map_chertez_state", (int)2);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_10567()
{
	var_4927_string = ""; var_4928_bool = 0;
	func_151("cot_maria@door1", (bool)1);
	return 0;
}


func_8520(var_4267_int, var_4268_int)
{
	var_4270_object = Obj(); var_4271_object = Obj(); var_4272_string = ""; var_4273_int = 0; var_4274_int = 0; var_4275_int = 0; var_4276_object = Obj(); var_4277_object = Obj(); var_4278_string = ""; var_4279_int = 0; var_4280_int = 0; var_4281_int = 0;
	var_4282_bool = 0;
	var_4282_bool = 0;
	var_4284_bool = var_4268_int == (int)5;
	if(var_4284_bool != 0) {
		var_4286_bool = var_4267_int >= (int)7;
		if(var_4286_bool != 0) {
			var_4282_bool = 1;
		}
	}
	if(var_4282_bool != 0) {
		var_4287_int = 0;
		func_12303(var_4287_int);
		var_4289_bool = var_4287_int != (int)2;
		if(var_4289_bool != 0) {
			func_7731();
		}
	} else {
					var_4564_bool = 0;
					var_4564_bool = 0;
					var_4566_bool = var_4268_int == (int)22;
					if(var_4566_bool != 0) {
						var_4568_bool = var_4267_int >= (int)7;
						if(var_4568_bool != 0) {
							var_4564_bool = 1;
						}
					}
					if(var_4564_bool == 0) goto Label_8560;
					var_4569_int = 0;
					func_12303(var_4569_int);
					var_4571_bool = var_4569_int != (int)2;
					if(var_4571_bool == 0) goto Label_8560;
					func_7794();
	}
Label_8560:
	var_4336_bool = 0;
	var_4336_bool = 0;
	var_4338_bool = var_4268_int == (int)7;
	if(var_4338_bool != 0) {
		var_4340_bool = var_4267_int != (int)1;
		if(var_4340_bool != 0) {
			var_4336_bool = 1;
		}
	}
	if(var_4336_bool != 0) {
		SendWorldWndMessage((int)100);
	}
	var_4343_bool = var_4268_int == (int)0;
	if(var_4343_bool != 0) {
		func_8698();
		func_8773();
		var_4438_bool = var_4267_int == (int)6;
		if(var_4438_bool != 0) {
			GetMainOutdoorScene(var_4276_object);
			AddScriptedActor(var_4277_object, "shed_corpse", "splash_object_wo_pf.bin", var_4276_object, CVector(0.0, 0.0, 0.0));
			var_4277_object = 0;
			var_4276_object = 0;
		}
		var_4443_bool = var_4267_int == (int)9;
		if(var_4443_bool != 0) {
			func_8822();
		}
		var_4458_bool = var_4267_int != (int)1;
		if(var_4458_bool != 0) {
			var_4459_int = 0;
			func_12303(var_4459_int);
			var_4461_bool = var_4459_int == (int)1;
			if(var_4461_bool != 0) {
				var_4464_int = var_4267_int - (int)1;
				var_4465_int = "b" + var_4464_int;
				var_4467_int = var_4465_int + "q01";
				GetVariable(var_4467_int, var_4279_int);
				var_4278_string = "volonteers_burah";
			} else {
				var_4549_int = 0;
				func_12303(var_4549_int);
				var_4551_bool = var_4549_int == (int)0;
				if(var_4551_bool != 0) {
					var_4554_int = var_4267_int - (int)1;
					var_4555_int = "d" + var_4554_int;
					var_4557_int = var_4555_int + "q01";
					GetVariable(var_4557_int, var_4279_int);
					var_4278_string = "volonteers_danko";
					goto Label_8644;
				}
				var_4560_int = var_4267_int - (int)1;
				var_4561_int = "k" + var_4560_int;
				var_4563_int = var_4561_int + "q01";
				GetVariable(var_4563_int, var_4279_int);
				var_4278_string = "volonteers_klara";

			}
		Label_8644:
			Trace(var_4278_string);
			var_4469_bool = var_4279_int == (int)1000;
			if(var_4469_bool != 0) {
				var_4470_bool = 0; var_4471_string = ""; var_4472_string = ""; var_4473_string = "";
				var_4278_string = var_4471_string;
				func_201(var_4470_bool, var_4471_string, "rescue_locked", "");
			}
			var_4477_bool = 0; var_4478_string = ""; var_4479_string = ""; var_4480_string = "";
			var_4278_string = var_4478_string;
			func_201(var_4477_bool, var_4478_string, "update", "");
		}
	}
	var_4481_bool = 0;
	var_4481_bool = 0;
	var_4483_bool = var_4267_int == (int)6;
	if(var_4483_bool != 0) {
		var_4485_bool = var_4268_int == (int)0;
		if(var_4485_bool != 0) {
			var_4481_bool = 1;
		}
	}
	if(var_4481_bool != 0) {
		func_7851();
	}
	var_4488_bool = 0;
	var_4488_bool = 0;
	var_4490_bool = var_4267_int == (int)7;
	if(var_4490_bool != 0) {
		var_4492_bool = var_4268_int == (int)0;
		if(var_4492_bool != 0) {
			var_4488_bool = 1;
		}
	}
	if(var_4488_bool != 0) {
		var_4493_object = GlobalVars[14];
		@@var_4493_object:size(var_4280_int);

	Label_8688:
		var_4494_bool = (int)0 < var_4280_int;
		if(var_4494_bool != 0) {
			var_4495_int = 0;
			var_4281_int = var_4495_int;
			func_7558(var_4495_int);
			var_4281_int = var_4281_int + (int)1;
			goto Label_8688;
		}
	}
	return 12;
	
}


func_10574()
{
	var_4803_string = ""; var_4804_bool = 0;
	func_151("warehouse_rubin@door1", (bool)1);
	return 0;
}


func_9551(var_3169_int, var_3170_int, var_3171_int)
{
	var_3172_object = Obj(); var_3173_object = Obj(); var_3174_object = Obj(); var_3175_object = Obj(); var_3176_object = Obj(); var_3177_object = Obj(); var_3178_object = Obj(); var_3179_object = Obj();
	var_3180_object = GlobalVars[8];
	@@var_3180_object:get(var_3176_object, var_3169_int);
	var_3181_object = GlobalVars[9];
	@@var_3181_object:get(var_3177_object, var_3169_int);
	var_3182_object = GlobalVars[10];
	@@var_3182_object:get(var_3178_object, var_3169_int);
	var_3183_object = GlobalVars[13];
	@@var_3183_object:get(var_3179_object, var_3169_int);
	var_3185_bool = var_3169_int == (int)0;
	if(var_3185_bool != 0) {
		var_3186_int = 0; var_3187_int = 0; var_3188_object = Obj(); var_3189_object = Obj(); var_3190_object = Obj(); var_3191_object = Obj();
		var_3170_int = var_3186_int;
		var_3171_int = var_3187_int;
		var_3176_object = var_3188_object;
		var_3177_object = var_3189_object;
		var_3178_object = var_3190_object;
		var_3179_object = var_3191_object;
		func_4441(var_3186_int, var_3187_int, var_3188_object, var_3189_object, var_3190_object, var_3191_object);
	} else {
		var_3399_bool = var_3169_int == (int)1;
		if(var_3399_bool != 0) {
			var_3400_int = 0; var_3401_int = 0; var_3402_object = Obj(); var_3403_object = Obj(); var_3404_object = Obj(); var_3405_object = Obj();
			var_3170_int = var_3400_int;
			var_3171_int = var_3401_int;
			var_3176_object = var_3402_object;
			var_3177_object = var_3403_object;
			var_3178_object = var_3404_object;
			var_3179_object = var_3405_object;
			func_4638(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object);
			goto Label_9771;
		}
		var_3535_bool = var_3169_int == (int)2;
		if(var_3535_bool != 0) {
			var_3536_int = 0; var_3537_int = 0; var_3538_object = Obj(); var_3539_object = Obj(); var_3540_object = Obj(); var_3541_object = Obj();
			var_3170_int = var_3536_int;
			var_3171_int = var_3537_int;
			var_3176_object = var_3538_object;
			var_3177_object = var_3539_object;
			var_3178_object = var_3540_object;
			var_3179_object = var_3541_object;
			func_4844(var_3536_int, var_3537_int, var_3538_object, var_3539_object, var_3540_object, var_3541_object);
			goto Label_9771;
		}
		var_3678_bool = var_3169_int == (int)3;
		if(var_3678_bool != 0) {
			var_3679_int = 0; var_3680_int = 0; var_3681_object = Obj(); var_3682_object = Obj(); var_3683_object = Obj(); var_3684_object = Obj();
			var_3170_int = var_3679_int;
			var_3171_int = var_3680_int;
			var_3176_object = var_3681_object;
			var_3177_object = var_3682_object;
			var_3178_object = var_3683_object;
			var_3179_object = var_3684_object;
			func_5074(var_3679_int, var_3680_int, var_3681_object, var_3682_object, var_3683_object, var_3684_object);
			goto Label_9771;
		}
		var_3711_bool = var_3169_int == (int)4;
		if(var_3711_bool != 0) {
			var_3712_int = 0; var_3713_int = 0; var_3714_object = Obj(); var_3715_object = Obj(); var_3716_object = Obj(); var_3717_object = Obj();
			var_3170_int = var_3712_int;
			var_3171_int = var_3713_int;
			var_3176_object = var_3714_object;
			var_3177_object = var_3715_object;
			var_3178_object = var_3716_object;
			var_3179_object = var_3717_object;
			func_5292(var_3712_int, var_3713_int, var_3714_object, var_3715_object, var_3716_object, var_3717_object);
			goto Label_9771;
		}
		var_3744_bool = var_3169_int == (int)5;
		if(var_3744_bool != 0) {
			var_3745_int = 0; var_3746_int = 0; var_3747_object = Obj(); var_3748_object = Obj(); var_3749_object = Obj(); var_3750_object = Obj();
			var_3170_int = var_3745_int;
			var_3171_int = var_3746_int;
			var_3176_object = var_3747_object;
			var_3177_object = var_3748_object;
			var_3178_object = var_3749_object;
			var_3179_object = var_3750_object;
			func_5537(var_3745_int, var_3746_int, var_3747_object, var_3748_object, var_3749_object, var_3750_object);
			goto Label_9771;
		}
		var_3777_bool = var_3169_int == (int)6;
		if(var_3777_bool != 0) {
			var_3778_int = 0; var_3779_int = 0; var_3780_object = Obj(); var_3781_object = Obj(); var_3782_object = Obj(); var_3783_object = Obj();
			var_3170_int = var_3778_int;
			var_3171_int = var_3779_int;
			var_3176_object = var_3780_object;
			var_3177_object = var_3781_object;
			var_3178_object = var_3782_object;
			var_3179_object = var_3783_object;
			func_5605();
			goto Label_9771;
		}
		var_3787_bool = var_3169_int == (int)7;
		if(var_3787_bool != 0) {
			var_3788_int = 0; var_3789_int = 0; var_3790_object = Obj(); var_3791_object = Obj(); var_3792_object = Obj(); var_3793_object = Obj();
			var_3170_int = var_3788_int;
			var_3171_int = var_3789_int;
			var_3176_object = var_3790_object;
			var_3177_object = var_3791_object;
			var_3178_object = var_3792_object;
			var_3179_object = var_3793_object;
			func_5760(var_3788_int, var_3789_int, var_3790_object, var_3791_object, var_3792_object, var_3793_object);
			goto Label_9771;
		}
		var_3930_bool = var_3169_int == (int)8;
		if(var_3930_bool != 0) {
			var_3931_int = 0; var_3932_int = 0; var_3933_object = Obj(); var_3934_object = Obj(); var_3935_object = Obj(); var_3936_object = Obj();
			var_3170_int = var_3931_int;
			var_3171_int = var_3932_int;
			var_3176_object = var_3933_object;
			var_3177_object = var_3934_object;
			var_3178_object = var_3935_object;
			var_3179_object = var_3936_object;
			func_5960(var_3931_int, var_3932_int, var_3933_object, var_3934_object, var_3935_object, var_3936_object);
			goto Label_9771;
		}
		var_3963_bool = var_3169_int == (int)9;
		if(var_3963_bool != 0) {
			var_3964_int = 0; var_3965_int = 0; var_3966_object = Obj(); var_3967_object = Obj(); var_3968_object = Obj(); var_3969_object = Obj();
			var_3170_int = var_3964_int;
			var_3171_int = var_3965_int;
			var_3176_object = var_3966_object;
			var_3177_object = var_3967_object;
			var_3178_object = var_3968_object;
			var_3179_object = var_3969_object;
			func_6163(var_3964_int, var_3965_int, var_3966_object, var_3967_object, var_3968_object, var_3969_object);
			goto Label_9771;
		}
		var_3996_bool = var_3169_int == (int)10;
		if(var_3996_bool != 0) {
			var_3997_int = 0; var_3998_int = 0; var_3999_object = Obj(); var_4000_object = Obj(); var_4001_object = Obj(); var_4002_object = Obj();
			var_3170_int = var_3997_int;
			var_3171_int = var_3998_int;
			var_3176_object = var_3999_object;
			var_3177_object = var_4000_object;
			var_3178_object = var_4001_object;
			var_3179_object = var_4002_object;
			func_6372(var_3997_int, var_3998_int, var_3999_object, var_4000_object, var_4001_object, var_4002_object);
			goto Label_9771;
		}
		var_4029_bool = var_3169_int == (int)11;
		if(var_4029_bool != 0) {
			var_4030_int = 0; var_4031_int = 0; var_4032_object = Obj(); var_4033_object = Obj(); var_4034_object = Obj(); var_4035_object = Obj();
			var_3170_int = var_4030_int;
			var_3171_int = var_4031_int;
			var_3176_object = var_4032_object;
			var_3177_object = var_4033_object;
			var_3178_object = var_4034_object;
			var_3179_object = var_4035_object;
			func_6584(var_4030_int, var_4031_int, var_4032_object, var_4033_object, var_4034_object, var_4035_object);
			goto Label_9771;
		}
		var_4062_bool = var_3169_int == (int)12;
		if(var_4062_bool != 0) {
			var_4063_int = 0; var_4064_int = 0; var_4065_object = Obj(); var_4066_object = Obj(); var_4067_object = Obj(); var_4068_object = Obj();
			var_3170_int = var_4063_int;
			var_3171_int = var_4064_int;
			var_3176_object = var_4065_object;
			var_3177_object = var_4066_object;
			var_3178_object = var_4067_object;
			var_3179_object = var_4068_object;
			func_6781(var_4063_int, var_4064_int, var_4065_object, var_4066_object, var_4067_object, var_4068_object);
			goto Label_9771;
		}
		var_4095_bool = var_3169_int == (int)13;
		if(var_4095_bool != 0) {
			var_4096_int = 0; var_4097_int = 0; var_4098_object = Obj(); var_4099_object = Obj(); var_4100_object = Obj(); var_4101_object = Obj();
			var_3170_int = var_4096_int;
			var_3171_int = var_4097_int;
			var_3176_object = var_4098_object;
			var_3177_object = var_4099_object;
			var_3178_object = var_4100_object;
			var_3179_object = var_4101_object;
			func_6984(var_4096_int, var_4097_int, var_4098_object, var_4099_object, var_4100_object, var_4101_object);
			goto Label_9771;
		}
		var_4128_bool = var_3169_int == (int)14;
		if(var_4128_bool != 0) {
			var_4129_int = 0; var_4130_int = 0; var_4131_object = Obj(); var_4132_object = Obj(); var_4133_object = Obj(); var_4134_object = Obj();
			var_3170_int = var_4129_int;
			var_3171_int = var_4130_int;
			var_3176_object = var_4131_object;
			var_3177_object = var_4132_object;
			var_3178_object = var_4133_object;
			var_3179_object = var_4134_object;
			func_7184(var_4129_int, var_4130_int, var_4131_object, var_4132_object, var_4133_object, var_4134_object);
			goto Label_9771;
		}
		var_4271_bool = var_3169_int == (int)15;
		if(var_4271_bool == 0) goto Label_9771;
		var_4272_int = 0; var_4273_int = 0; var_4274_object = Obj(); var_4275_object = Obj(); var_4276_object = Obj(); var_4277_object = Obj();
		var_3170_int = var_4272_int;
		var_3171_int = var_4273_int;
		var_3176_object = var_4274_object;
		var_3177_object = var_4275_object;
		var_3178_object = var_4276_object;
		var_3179_object = var_4277_object;
		func_7366(var_4272_int, var_4273_int, var_4274_object, var_4275_object, var_4276_object, var_4277_object);
	}
Label_9771:
	return 8;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_6480(var_1670_int, var_1671_int, var_1672_object, var_1673_object, var_1674_object, var_1675_object)
{
	var_1677_bool = var_1671_int == (int)0;
	if(var_1677_bool != 0) {
		var_1678_int = 0; var_1679_bool = 0;
		func_746((int)11, (bool)0);
		var_1680_int = 0; var_1681_bool = 0; var_1682_int = 0;
		func_763((int)11, (bool)0, (int)1);
		var_1683_int = 0; var_1684_int = 0; var_1685_object = Obj(); var_1686_object = Obj(); var_1687_object = Obj();
		var_1683_int = 11;
		var_1670_int = var_1684_int;
		var_1672_object = var_1685_object;
		var_1673_object = var_1686_object;
		var_1674_object = var_1687_object;
		func_572(var_1684_int, var_1685_object, var_1686_object, var_1687_object);
		var_1688_object = Obj(); var_1689_int = 0;
		var_1675_object = var_1688_object;
		func_255(var_1688_object, (int)0);
		var_1690_int = 0; var_1691_bool = 0; var_1692_int = 0;
		func_820((int)11, (bool)0, (int)5);
		var_1693_int = 0; var_1694_bool = 0; var_1695_int = 0;
		func_882((int)11, (bool)0, (int)5);
	}
	var_1696_int = 0; var_1697_int = 0;
	var_1671_int = var_1697_int;
	func_933((int)11, var_1697_int);
	var_1698_int = 0; var_1699_int = 0; var_1700_int = 0;
	var_1670_int = var_1699_int;
	var_1671_int = var_1700_int;
	func_1574((int)11, var_1699_int, var_1700_int);
	return 0;
}


func_11601()
{
	var_5446_int = 0; var_5447_string = "";
	func_106(var_5446_int, "map_chertez_state");
	var_5449_bool = var_5446_int <= (int)3;
	if(var_5449_bool != 0) {
		SetVariable("map_chertez_state", (int)3);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_10581()
{
	var_6173_object = Obj(); var_6174_object = Obj(); var_6175_object = Obj(); var_6176_object = Obj();
	func_12286(Obj());
	var_6177_object = var_6175_object;
	@@var_6175_object:FindMark(var_6176_object, "b1BigVlad");
	var_6179_object = var_6176_object;
	if(var_6179_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1BigVlad11Hours");
	var_6181_object = var_6176_object;
	if(var_6181_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1KapellaGotoLaska");
	var_6183_object = var_6176_object;
	if(var_6183_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1KapellaGotoNotkin");
	var_6185_object = var_6176_object;
	if(var_6185_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1MladVladGotoGrif");
	var_6187_object = var_6176_object;
	if(var_6187_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q01BakWillBeAt18");
	var_6189_object = var_6176_object;
	if(var_6189_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q01BigVladGotoKapella");
	var_6191_object = var_6176_object;
	if(var_6191_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q01BigVladGotoMladVlad");
	var_6193_object = var_6176_object;
	if(var_6193_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q01GrifGotoDanko");
	var_6195_object = var_6176_object;
	if(var_6195_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q01NotkinGotoGrif");
	var_6197_object = var_6176_object;
	if(var_6197_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q02GrifGotoLaska");
	var_6199_object = var_6176_object;
	if(var_6199_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q02LaskaGotoGorbin");
	var_6201_object = var_6176_object;
	if(var_6201_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q02LaskaSelf");
	var_6203_object = var_6176_object;
	if(var_6203_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q03GrifGotoDoberman");
	var_6205_object = var_6176_object;
	if(var_6205_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q03NotkinGotoDoberman");
	var_6207_object = var_6176_object;
	if(var_6207_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1GrifGotoNotkin");
	var_6209_object = var_6176_object;
	if(var_6209_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q03NotkinGotoDobermanSelf");
	var_6211_object = var_6176_object;
	if(var_6211_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1LaskaGotoMishka");
	var_6213_object = var_6176_object;
	if(var_6213_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q05Spi4kaGotoLaska");
	var_6215_object = var_6176_object;
	if(var_6215_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q05Spi4kaGotoMishka");
	var_6217_object = var_6176_object;
	if(var_6217_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1q05PatrolGroup");
	var_6219_object = var_6176_object;
	if(var_6219_object != 0) {
		@@var_6176_object:Remove();
	}
	@@var_6175_object:FindMark(var_6176_object, "b1BurahFatherHome");
	var_6221_object = var_6176_object;
	if(var_6221_object != 0) {
		@@var_6176_object:Remove();
	}
	var_6222_bool = 0; var_6223_int = 0;
	func_12261(var_6222_bool, (int)200);
	var_6224_bool = 0; var_6225_int = 0;
	func_12261(var_6224_bool, (int)205);
	var_6226_bool = 0; var_6227_int = 0;
	func_12261(var_6226_bool, (int)209);
	var_6228_bool = 0; var_6229_int = 0;
	func_12261(var_6228_bool, (int)242);
	var_6230_bool = 0; var_6231_int = 0;
	func_12261(var_6230_bool, (int)582);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4441(var_3186_int, var_3187_int, var_3188_object, var_3189_object, var_3190_object, var_3191_object)
{
	var_3193_bool = var_3187_int == (int)0;
	if(var_3193_bool != 0) {
		var_3194_int = 0; var_3195_bool = 0;
		func_746((int)0, (bool)0);
		var_3196_int = 0; var_3197_bool = 0; var_3198_int = 0;
		func_763((int)0, (bool)0, (int)1);
		var_3199_int = 0; var_3200_int = 0; var_3201_object = Obj(); var_3202_object = Obj(); var_3203_object = Obj();
		var_3186_int = var_3200_int;
		var_3188_object = var_3201_object;
		var_3189_object = var_3202_object;
		var_3190_object = var_3203_object;
		func_670((int)0, var_3200_int, var_3201_object, var_3202_object, var_3203_object);
		var_3238_object = Obj(); var_3239_int = 0;
		var_3191_object = var_3238_object;
		func_255(var_3238_object, (int)2);
		var_3240_int = 0; var_3241_bool = 0; var_3242_int = 0;
		func_820((int)0, (bool)0, (int)4);
		var_3243_int = 0; var_3244_bool = 0; var_3245_int = 0;
		func_882((int)0, (bool)1, (int)4);
	}
	var_3246_int = 0; var_3247_bool = 0;
	func_729((int)0, (bool)0);
	var_3248_int = 0; var_3249_int = 0; var_3250_int = 0;
	var_3186_int = var_3249_int;
	var_3187_int = var_3250_int;
	func_3985((int)0, var_3249_int, var_3250_int);
	return 0;
}


func_3421(var_4157_int, var_4158_int, var_4159_int)
{
	var_4160_int = 0; var_4161_int = 0; var_4162_int = 0; var_4163_int = 0; var_4164_int = 0; var_4165_int = 0; var_4166_int = 0; var_4167_int = 0;
	var_4168_bool = 0;
	var_4168_bool = 0;
	var_4170_bool = var_4159_int > (int)8;
	if(var_4170_bool != 0) {
		var_4172_bool = var_4159_int < (int)21;
		if(var_4172_bool != 0) {
			var_4168_bool = 1;
		}
	}
	if(var_4168_bool != 0) {
		var_4173_int = 0; var_4174_string = ""; var_4175_string = ""; var_4176_int = 0;
		var_4157_int = var_4173_int;
		func_453(var_4173_int, "pers_rat", "rat.xml", (int)3);
		var_4177_int = 0; var_4178_string = ""; var_4179_string = ""; var_4180_int = 0;
		var_4157_int = var_4177_int;
		func_453(var_4177_int, "pers_alkash", "alkash.xml", (int)2);
		var_4181_int = 0; var_4182_string = ""; var_4183_string = ""; var_4184_int = 0;
		var_4157_int = var_4181_int;
		func_453(var_4181_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_4186_float = 0; var_4187_int = 0;
		var_4158_int = var_4187_int;
		func_1115(var_4186_float, var_4187_int);
		var_4164_int = (int)2 * var_4186_float;
		var_4188_int = var_4164_int;
		if(var_4188_int != 0) {
			var_4189_int = 0; var_4190_string = ""; var_4191_string = ""; var_4192_int = 0;
			var_4157_int = var_4189_int;
			var_4164_int = var_4192_int;
			func_453(var_4189_int, "pers_grabitel", "grabitel.xml", var_4192_int);
		}
		var_4194_int = var_4158_int + (int)1;
		var_4196_bool = var_4194_int >= (int)2;
		if(var_4196_bool != 0) {
			var_4197_int = 0; var_4198_string = ""; var_4199_string = ""; var_4200_int = 0;
			var_4157_int = var_4197_int;
			func_453(var_4197_int, "pers_patrool", "patrol.xml", (int)2);
			var_4201_bool = 0; var_4202_int = 0;
			var_4158_int = var_4202_int;
			func_1322(var_4201_bool, var_4202_int);
			if(var_4201_bool != 0) {
				var_4203_int = 0; var_4204_string = ""; var_4205_string = ""; var_4206_int = 0;
				var_4157_int = var_4203_int;
				func_453(var_4203_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_4208_float = 0; var_4209_int = 0;
		var_4158_int = var_4209_int;
		func_1205(var_4208_float, var_4209_int);
		var_4165_int = (int)1 * var_4208_float;
		var_4210_int = var_4165_int;
		if(var_4210_int != 0) {
			var_4211_int = 0; var_4212_string = ""; var_4213_string = ""; var_4214_int = 0;
			var_4157_int = var_4211_int;
			var_4165_int = var_4214_int;
			func_453(var_4211_int, "pers_bomber", "bomber.xml", var_4214_int);
		}
	} else {
		var_4228_int = 0; var_4229_string = ""; var_4230_string = ""; var_4231_int = 0;
		var_4157_int = var_4228_int;
		func_453(var_4228_int, "pers_rat", "rat.xml", (int)5);
		var_4232_int = 0; var_4233_string = ""; var_4234_string = ""; var_4235_int = 0;
		var_4157_int = var_4232_int;
		func_453(var_4232_int, "pers_alkash", "alkash.xml", (int)1);
		var_4237_int = var_4158_int + (int)1;
		var_4239_bool = var_4237_int >= (int)2;
		if(var_4239_bool != 0) {
			var_4240_int = 0; var_4241_string = ""; var_4242_string = ""; var_4243_int = 0;
			var_4157_int = var_4240_int;
			func_453(var_4240_int, "pers_patrool", "patrol.xml", (int)1);
			var_4244_bool = 0; var_4245_int = 0;
			var_4158_int = var_4245_int;
			func_1322(var_4244_bool, var_4245_int);
			if(var_4244_bool != 0) {
				var_4246_int = 0; var_4247_string = ""; var_4248_string = ""; var_4249_int = 0;
				var_4157_int = var_4246_int;
				func_453(var_4246_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_4250_int = 0; var_4251_string = ""; var_4252_string = ""; var_4253_int = 0;
		var_4157_int = var_4250_int;
		func_453(var_4250_int, "pers_rat", "rat.xml", (int)2);
		var_4255_float = 0; var_4256_int = 0;
		var_4158_int = var_4256_int;
		func_1115(var_4255_float, var_4256_int);
		var_4166_int = (int)3 * var_4255_float;
		var_4257_int = var_4166_int;
		if(var_4257_int != 0) {
			var_4258_int = 0; var_4259_string = ""; var_4260_string = ""; var_4261_int = 0;
			var_4157_int = var_4258_int;
			var_4166_int = var_4261_int;
			func_453(var_4258_int, "pers_grabitel", "grabitel.xml", var_4261_int);
		}
		var_4263_float = 0; var_4264_int = 0;
		var_4158_int = var_4264_int;
		func_1205(var_4263_float, var_4264_int);
		var_4167_int = (int)1 * var_4263_float;
		var_4265_int = var_4167_int;
		if(var_4265_int == 0) goto Label_3583;
		var_4266_int = 0; var_4267_string = ""; var_4268_string = ""; var_4269_int = 0;
		var_4157_int = var_4266_int;
		var_4167_int = var_4269_int;
		func_453(var_4266_int, "pers_bomber", "bomber.xml", var_4269_int);
	}
Label_3583:
	var_4215_bool = 0; var_4216_int = 0; var_4217_int = 0;
	var_4158_int = var_4216_int;
	var_4159_int = var_4217_int;
	func_1295(var_4215_bool, var_4216_int, var_4217_int);
	if(var_4215_bool != 0) {
		var_4218_int = 0; var_4219_string = ""; var_4220_string = ""; var_4221_int = 0;
		var_4157_int = var_4218_int;
		func_453(var_4218_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_4222_bool = 0; var_4223_int = 0;
	var_4158_int = var_4223_int;
	func_1322(var_4222_bool, var_4223_int);
	if(var_4222_bool != 0) {
		var_4224_int = 0; var_4225_string = ""; var_4226_string = ""; var_4227_int = 0;
		var_4157_int = var_4224_int;
		func_453(var_4224_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 8;
	
}


func_350(var_492_bool, var_493_int)
{
	var_494_int = 0; var_495_int = 0;
	var_496_string = ""; var_497_int = 0;
	var_493_int = var_497_int;
	func_249(var_496_string, var_497_int);
	GetVariable(var_496_string, var_495_int);
	var_499_int = var_495_int & (int)3;
	var_492_bool = var_499_int == (int)0;
	return 2;
}


func_14686(var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0;
	Trace("Disease update");
	var_30_int = 0;
	var_38_bool = var_23_int == (int)0;
	if(var_38_bool != 0) {
		var_30_int = 0;
	} else {
			var_178_bool = var_23_int == (int)1;
			if(var_178_bool != 0) {
				var_30_int = 0;
				goto Label_14750;
			}
			var_180_bool = var_23_int == (int)2;
			if(var_180_bool != 0) {
				var_30_int = 1;
				goto Label_14750;
			}
			var_182_bool = var_23_int == (int)3;
			if(var_182_bool != 0) {
				var_30_int = 2;
				goto Label_14750;
			}
			var_184_bool = var_23_int == (int)4;
			if(var_184_bool != 0) {
				var_30_int = 3;
				goto Label_14750;
			}
			var_186_bool = var_23_int == (int)5;
			if(var_186_bool != 0) {
				var_30_int = 4;
				goto Label_14750;
			}
			var_188_bool = var_23_int == (int)6;
			if(var_188_bool != 0) {
				var_30_int = 5;
				goto Label_14750;
			}
			var_190_bool = var_23_int == (int)7;
			if(var_190_bool != 0) {
				var_30_int = 5;
				goto Label_14750;
			}
			var_192_bool = var_23_int == (int)8;
			if(var_192_bool != 0) {
				var_30_int = 6;
				goto Label_14750;
			}
			var_194_bool = var_23_int == (int)9;
			if(var_194_bool != 0) {
				var_30_int = 6;
				goto Label_14750;
			}
			var_196_bool = var_23_int == (int)10;
			if(var_196_bool != 0) {
				var_30_int = 7;
				goto Label_14750;
			}
			var_198_bool = var_23_int == (int)11;
			if(var_198_bool == 0) goto Label_14750;
			var_30_int = 8;
	}
Label_14750:
	var_40_int = var_23_int + (int)1;
	var_42_bool = var_40_int != (int)12;
	if(var_42_bool != 0) {
		var_44_int = "Diseased regions : " + var_30_int;
		Trace(var_44_int);

	Label_14760:
		var_46_bool = (int)0 < (int)16;
		if(var_46_bool != 0) {
			var_47_bool = 0; var_48_int = 0;
			var_31_int = var_48_int;
			func_380(var_47_bool, var_48_int);
			if(var_47_bool != 0) {
				var_59_int = 0;
				var_31_int = var_59_int;
				func_422(var_59_int);
			} else {
				var_72_bool = 0; var_73_int = 0;
				var_31_int = var_73_int;
				func_410(var_72_bool, var_73_int);
				if(var_72_bool != 0) {
					var_81_int = 0;
					var_31_int = var_81_int;
					func_362(var_81_int);
		}
				var_94_bool = var_23_int == (int)2;
				if(var_94_bool != 0) {
					Trace("Special diseased region: 6");
					var_96_int = 0;
					func_392((int)5);
				}
				func_293((int)0);
				var_108_int = var_32_int;
				var_119_bool = var_32_int < var_30_int;
				if(var_119_bool != 0) {
					var_33_int = var_30_int - var_32_int;
					var_34_int = 0;

				Label_14803:
					var_120_bool = var_34_int < var_33_int;
					if(var_120_bool != 0) {
						var_121_int = 0;
						var_121_int = var_23_int + (int)1;
						func_311(var_121_int);
						var_34_int = var_34_int + (int)1;
						goto Label_14803;
					}
				}
			} else {
			var_31_int = var_31_int + (int)1;
			goto Label_14760;
			}
		Label_14839:
			return 12;
	}

	Label_14815:
		var_169_bool = (int)0 < (int)16;
		if(var_169_bool == 0) goto Label_14839;
		var_170_bool = 0;
		var_170_bool = 1;
		var_171_bool = 0; var_172_int = 0;
		var_35_int = var_172_int;
		func_380(var_171_bool, var_172_int);
		if(var_171_bool != 1) {
			var_173_bool = 0; var_174_int = 0;
			var_35_int = var_174_int;
			func_410(var_173_bool, var_174_int);
			if(var_173_bool != 1) {
				var_170_bool = 0;
			}
		}
		if(var_170_bool != 0) {
			var_175_int = 0;
			var_35_int = var_175_int;
			func_362(var_175_int);
		}
		var_35_int = var_35_int + (int)1;
		goto Label_14815;

	}
}


func_11618()
{
	var_5460_int = 0; var_5461_string = "";
	func_106(var_5460_int, "map_chertez_state");
	var_5463_bool = var_5460_int <= (int)4;
	if(var_5463_bool != 0) {
		SetVariable("map_chertez_state", (int)4);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_362(var_81_int)
{
	var_82_int = 0; var_83_int = 0; var_84_int = 0; var_85_int = 0;
	var_86_string = ""; var_87_int = 0;
	var_81_int = var_87_int;
	func_249(var_86_string, var_87_int);
	GetVariable(var_86_string, var_84_int);
	var_89_int = var_84_int & (int)252;
	var_85_int = var_89_int | (int)0;
	var_91_string = ""; var_92_int = 0;
	var_81_int = var_92_int;
	func_249(var_91_string, var_92_int);
	SetVariable(var_91_string, var_85_int);
	return 4;
}


func_5485(var_2619_int, var_2620_int, var_2621_object, var_2622_object, var_2623_object, var_2624_object)
{
	var_2626_bool = var_2620_int == (int)0;
	if(var_2626_bool != 0) {
		var_2627_int = 0; var_2628_bool = 0;
		func_746((int)5, (bool)1);
		var_2629_int = 0; var_2630_bool = 0; var_2631_int = 0;
		func_763((int)5, (bool)1, (int)1);
		var_2632_int = 0; var_2633_int = 0; var_2634_object = Obj(); var_2635_object = Obj(); var_2636_object = Obj();
		var_2619_int = var_2633_int;
		var_2621_object = var_2634_object;
		var_2622_object = var_2635_object;
		var_2623_object = var_2636_object;
		func_591((int)5, var_2633_int, var_2634_object, var_2635_object, var_2636_object);
		var_2637_object = Obj(); var_2638_int = 0;
		var_2624_object = var_2637_object;
		func_255(var_2637_object, (int)1);
		var_2639_int = 0; var_2640_bool = 0; var_2641_int = 0;
		func_820((int)5, (bool)1, (int)4);
		var_2642_int = 0; var_2643_bool = 0; var_2644_int = 0;
		func_882((int)5, (bool)0, (int)4);
	}
	var_2645_int = 0; var_2646_bool = 0;
	func_729((int)5, (bool)0);
	var_2647_int = 0; var_2648_int = 0; var_2649_int = 0;
	var_2619_int = var_2648_int;
	var_2620_int = var_2649_int;
	func_2894((int)5, var_2648_int, var_2649_int);
	return 0;
}


func_11635()
{
	var_5536_int = 0; var_5537_string = "";
	func_106(var_5536_int, "map_chertez_state");
	var_5539_bool = var_5536_int <= (int)5;
	if(var_5539_bool != 0) {
		SetVariable("map_chertez_state", (int)5);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_380(var_1979_bool, var_1980_int)
{
	var_1981_int = 0; var_1982_int = 0;
	var_1983_string = ""; var_1984_int = 0;
	var_1980_int = var_1984_int;
	func_249(var_1983_string, var_1984_int);
	GetVariable(var_1983_string, var_1982_int);
	var_1986_int = var_1982_int & (int)3;
	var_1979_bool = var_1986_int == (int)1;
	return 2;
}


func_6532(var_2900_int, var_2901_int, var_2902_object, var_2903_object, var_2904_object, var_2905_object)
{
	var_2907_bool = var_2901_int == (int)0;
	if(var_2907_bool != 0) {
		var_2908_int = 0; var_2909_bool = 0;
		func_746((int)11, (bool)0);
		var_2910_int = 0; var_2911_bool = 0; var_2912_int = 0;
		func_763((int)11, (bool)1, (int)1);
		var_2913_int = 0; var_2914_int = 0; var_2915_object = Obj(); var_2916_object = Obj(); var_2917_object = Obj();
		var_2900_int = var_2914_int;
		var_2902_object = var_2915_object;
		var_2903_object = var_2916_object;
		var_2904_object = var_2917_object;
		func_591((int)11, var_2914_int, var_2915_object, var_2916_object, var_2917_object);
		var_2918_object = Obj(); var_2919_int = 0;
		var_2905_object = var_2918_object;
		func_255(var_2918_object, (int)1);
		var_2920_int = 0; var_2921_bool = 0; var_2922_int = 0;
		func_820((int)11, (bool)1, (int)5);
		var_2923_int = 0; var_2924_bool = 0; var_2925_int = 0;
		func_882((int)11, (bool)0, (int)5);
	}
	var_2926_int = 0; var_2927_bool = 0;
	func_729((int)11, (bool)0);
	var_2928_int = 0; var_2929_int = 0; var_2930_int = 0;
	var_2900_int = var_2929_int;
	var_2901_int = var_2930_int;
	func_2714((int)11, var_2929_int, var_2930_int);
	return 0;
}


func_11652()
{
	var_5474_int = 0; var_5475_string = "";
	func_106(var_5474_int, "map_chertez_state");
	var_5477_bool = var_5474_int <= (int)6;
	if(var_5477_bool != 0) {
		SetVariable("map_chertez_state", (int)6);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_7558(var_4527_int)
{
	var_4528_int = 0; var_4529_object = Obj(); var_4530_object = Obj(); var_4531_object = Obj(); var_4532_cvector = CVector(0,0,0); var_4533_cvector = CVector(0,0,0); var_4534_bool = 0; var_4535_object = Obj(); var_4536_int = 0; var_4537_object = Obj(); var_4538_object = Obj(); var_4539_object = Obj(); var_4540_cvector = CVector(0,0,0); var_4541_cvector = CVector(0,0,0); var_4542_bool = 0; var_4543_object = Obj();
	var_4544_object = GlobalVars[14];
	@@var_4544_object:size(var_4536_int);
	var_4545_bool = 0;
	var_4545_bool = 1;
	var_4546_bool = var_4527_int >= var_4536_int;
	if(var_4546_bool != 1) {
		var_4548_bool = var_4527_int == (int)-1;
		if(var_4548_bool != 1) {
			var_4545_bool = 0;
		}
	}
	if(var_4545_bool != 0) {
		var_4550_int = "Wrong bonfire index " + var_4527_int;
		Trace(var_4550_int);
		return 16;
	}
	var_4551_object = GlobalVars[14];
	@@var_4551_object:get(var_4537_object, var_4527_int);
	var_4554_int = var_4527_int + (int)1;
	var_4555_int = "bonfire_light" + var_4554_int;
	FindActor(var_4538_object, var_4555_int);
	var_4556_bool = var_4538_object == 0; //@nz
	if(var_4556_bool != 0) {
		var_4559_int = var_4527_int + (int)1;
		var_4560_int = "Bofire  light " + var_4559_int;
		var_4562_int = var_4560_int + " not found";
		Trace(var_4562_int);
	} else {
		@@var_4538_object:Switch((bool)1);
	}
	GetMainOutdoorScene(var_4539_object);
	var_4565_int = var_4527_int + (int)1;
	var_4566_int = "pt_bonfire" + var_4565_int;
	@@var_4539_object:GetLocator(var_4566_int, var_4542_bool, var_4540_cvector, var_4541_cvector);
	var_4567_bool = var_4542_bool == 0; //@nz
	if(var_4567_bool != 0) {
		Trace("Locator for bonfire doesn't exist");
		return 16;
	}
	var_4569_bool = var_4537_object == 0; //@nz
	if(var_4569_bool != 0) {
		AddActorByType(var_4543_object, "scripted", var_4539_object, var_4540_cvector, var_4541_cvector, "bonfire_big.xml");
		var_4572_object = GlobalVars[14];
		@@var_4572_object:set(var_4527_int, var_4543_object);
		var_4543_object = 0;
	}
	var_4575_int = var_4527_int + (int)1;
	var_4576_int = "Setting bonfire " + var_4575_int;
	var_4578_int = var_4576_int + "... ok";
	Trace(var_4578_int);
	return 16;
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


func_392(var_24_int)
{
	var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0;
	var_29_string = ""; var_30_int = 0;
	var_24_int = var_30_int;
	func_249(var_29_string, var_30_int);
	GetVariable(var_29_string, var_27_int);
	var_35_int = var_27_int & (int)252;
	var_28_int = var_35_int | (int)1;
	var_37_string = ""; var_38_int = 0;
	var_24_int = var_38_int;
	func_249(var_37_string, var_38_int);
	SetVariable(var_37_string, var_28_int);
	return 4;
}


func_4493(var_63_object)
{
	@@var_63_object:add("dt_house3_05_i2");
	@@var_63_object:add("dt_house3_05");
	@@var_63_object:add("dt_house3_06_i2");
	@@var_63_object:add("dt_house_1_10");
	@@var_63_object:add("house5_10");
	@@var_63_object:add("house5_07");
	@@var_63_object:add("dt_house_1_03");
	@@var_63_object:add("dt_house1_union2_04l");
	@@var_63_object:add("dt_house1_union2_04r");
	@@var_63_object:add("house5_22");
	@@var_63_object:add("house5_08");
	@@var_63_object:add("dt_house1_union2_02l");
	@@var_63_object:add("dt_house1_union2_02r");
	return 0;
}


func_11669()
{
	var_4876_string = ""; var_4877_bool = 0;
	func_151("termitnik@door1", (bool)1);
	return 0;
}


func_410(var_72_bool, var_73_int)
{
	var_74_int = 0; var_75_int = 0;
	var_76_string = ""; var_77_int = 0;
	var_73_int = var_77_int;
	func_249(var_76_string, var_77_int);
	GetVariable(var_76_string, var_75_int);
	var_79_int = var_75_int & (int)3;
	var_72_bool = var_79_int == (int)2;
	return 2;
}


func_11676()
{
	var_5987_string = ""; var_5988_bool = 0;
	func_151("termitnik@door1", (bool)0);
	return 0;
}


func_5537(var_3745_int, var_3746_int, var_3747_object, var_3748_object, var_3749_object, var_3750_object)
{
	var_3752_bool = var_3746_int == (int)0;
	if(var_3752_bool != 0) {
		var_3753_int = 0; var_3754_bool = 0;
		func_746((int)5, (bool)0);
		var_3755_int = 0; var_3756_bool = 0; var_3757_int = 0;
		func_763((int)5, (bool)0, (int)1);
		var_3758_int = 0; var_3759_int = 0; var_3760_object = Obj(); var_3761_object = Obj(); var_3762_object = Obj();
		var_3745_int = var_3759_int;
		var_3747_object = var_3760_object;
		var_3748_object = var_3761_object;
		var_3749_object = var_3762_object;
		func_670((int)5, var_3759_int, var_3760_object, var_3761_object, var_3762_object);
		var_3763_object = Obj(); var_3764_int = 0;
		var_3750_object = var_3763_object;
		func_255(var_3763_object, (int)2);
		var_3765_int = 0; var_3766_bool = 0; var_3767_int = 0;
		func_820((int)5, (bool)0, (int)4);
		var_3768_int = 0; var_3769_bool = 0; var_3770_int = 0;
		func_882((int)5, (bool)1, (int)4);
	}
	var_3771_int = 0; var_3772_bool = 0;
	func_729((int)5, (bool)0);
	var_3773_int = 0; var_3774_int = 0; var_3775_int = 0;
	var_3745_int = var_3774_int;
	var_3746_int = var_3775_int;
	func_3797((int)5, var_3774_int, var_3775_int);
	return 0;
}


func_11683()
{
	SetVariable("resque_list", (int)1);
	func_14586();
	return 0;
}


func_422(var_76_int)
{
	var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0;
	var_81_string = ""; var_82_int = 0;
	var_76_int = var_82_int;
	func_249(var_81_string, var_82_int);
	GetVariable(var_81_string, var_79_int);
	var_84_int = var_79_int & (int)252;
	var_80_int = var_84_int | (int)2;
	var_86_string = ""; var_87_int = 0;
	var_76_int = var_87_int;
	func_249(var_86_string, var_87_int);
	SetVariable(var_86_string, var_80_int);
	return 4;
}


func_11692()
{
	var_4945_string = ""; var_4946_bool = 0;
	func_151("mnogogrannik@door1", (bool)1);
	return 0;
}


func_11699()
{
	var_4909_string = ""; var_4910_bool = 0;
	func_151("sobor@door1", (bool)1);
	return 0;
}


func_4534(var_886_int, var_887_int, var_888_object, var_889_object, var_890_object, var_891_object)
{
	var_893_bool = var_887_int == (int)0;
	if(var_893_bool != 0) {
		var_894_int = 0; var_895_bool = 0;
		func_746((int)1, (bool)0);
		var_896_int = 0; var_897_bool = 0; var_898_int = 0;
		func_763((int)1, (bool)0, (int)1);
		var_899_int = 0; var_900_int = 0; var_901_object = Obj(); var_902_object = Obj(); var_903_object = Obj();
		var_899_int = 1;
		var_886_int = var_900_int;
		var_888_object = var_901_object;
		var_889_object = var_902_object;
		var_890_object = var_903_object;
		func_572(var_900_int, var_901_object, var_902_object, var_903_object);
		var_904_object = Obj(); var_905_int = 0;
		var_891_object = var_904_object;
		func_255(var_904_object, (int)0);
		var_906_int = 0; var_907_bool = 0; var_908_int = 0;
		func_820((int)1, (bool)0, (int)8);
		var_909_int = 0; var_910_bool = 0; var_911_int = 0;
		func_882((int)1, (bool)0, (int)8);
	}
	var_912_int = 0; var_913_int = 0;
	var_887_int = var_913_int;
	func_1000((int)1, var_913_int);
	var_914_int = 0; var_915_int = 0; var_916_int = 0;
	var_886_int = var_915_int;
	var_887_int = var_916_int;
	func_2333((int)1, var_915_int, var_916_int);
	return 0;
}


func_440(var_487_int)
{
	var_488_object = Obj(); var_489_object = Obj();
	GetMainOutdoorScene(var_489_object);
	var_490_bool = var_489_object == 0; //@ne
	if(var_490_bool != 0) {
		Trace("City manager: main outdoor scene not found");
		return 2;
	}
	@@var_489_object:RemoveAllRegionActors(var_487_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6584(var_4030_int, var_4031_int, var_4032_object, var_4033_object, var_4034_object, var_4035_object)
{
	var_4037_bool = var_4031_int == (int)0;
	if(var_4037_bool != 0) {
		var_4038_int = 0; var_4039_bool = 0;
		func_746((int)11, (bool)1);
		var_4040_int = 0; var_4041_bool = 0; var_4042_int = 0;
		func_763((int)11, (bool)0, (int)1);
		var_4043_int = 0; var_4044_int = 0; var_4045_object = Obj(); var_4046_object = Obj(); var_4047_object = Obj();
		var_4030_int = var_4044_int;
		var_4032_object = var_4045_object;
		var_4033_object = var_4046_object;
		var_4034_object = var_4047_object;
		func_670((int)11, var_4044_int, var_4045_object, var_4046_object, var_4047_object);
		var_4048_object = Obj(); var_4049_int = 0;
		var_4035_object = var_4048_object;
		func_255(var_4048_object, (int)2);
		var_4050_int = 0; var_4051_bool = 0; var_4052_int = 0;
		func_820((int)11, (bool)0, (int)5);
		var_4053_int = 0; var_4054_bool = 0; var_4055_int = 0;
		func_882((int)11, (bool)1, (int)5);
	}
	var_4056_int = 0; var_4057_bool = 0;
	func_729((int)11, (bool)0);
	var_4058_int = 0; var_4059_int = 0; var_4060_int = 0;
	var_4030_int = var_4059_int;
	var_4031_int = var_4060_int;
	func_3609((int)11, var_4059_int, var_4060_int);
	return 0;
}


func_11706()
{
	var_4983_string = ""; var_4984_bool = 0;
	func_151("sobor@door1", (bool)0);
	return 0;
}


func_11713()
{
	var_4783_string = ""; var_4784_bool = 0;
	func_151("cot_bigvlad@door1", (bool)1);
	return 0;
}


func_453(var_783_int, var_784_string, var_785_string, var_786_int)
{
	var_787_object = Obj(); var_788_object = Obj();
	GetMainOutdoorScene(var_788_object);
	var_789_bool = var_788_object == 0; //@ne
	if(var_789_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 2;
	}
	@@var_788_object:SetRegionActorCount(var_783_int, var_784_string, var_785_string, var_786_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11720()
{
	var_6334_string = ""; var_6335_bool = 0;
	func_151("cot_bigvlad@door1", (bool)0);
	return 0;
}


func_11727()
{
	var_4797_string = ""; var_4798_bool = 0;
	func_151("vagon_mishka@door1", (bool)1);
	return 0;
}


func_466(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int)
{
	var_2221_object = Obj(); var_2222_object = Obj();
	GetMainOutdoorScene(var_2222_object);
	var_2223_bool = var_2222_object == 0; //@ne
	if(var_2223_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 2;
	}
	@@var_2222_object:SetRegionActorCount(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7635(var_379_int)
{
	var_380_int = 0; var_381_object = Obj(); var_382_object = Obj(); var_383_int = 0; var_384_object = Obj(); var_385_object = Obj();
	var_386_object = GlobalVars[14];
	@@var_386_object:size(var_383_int);
	var_387_bool = 0;
	var_387_bool = 1;
	var_388_bool = var_379_int >= var_383_int;
	if(var_388_bool != 1) {
		var_390_bool = var_379_int == (int)-1;
		if(var_390_bool != 1) {
			var_387_bool = 0;
		}
	}
	if(var_387_bool != 0) {
		var_392_int = "Wrong bonfire index " + var_379_int;
		Trace(var_392_int);
		return 6;
	}
	var_393_object = GlobalVars[14];
	@@var_393_object:get(var_384_object, var_379_int);
	var_396_int = var_379_int + (int)1;
	var_397_int = "bonfire_light" + var_396_int;
	FindActor(var_385_object, var_397_int);
	var_398_bool = var_385_object == 0; //@nz
	if(var_398_bool != 0) {
		var_401_int = var_379_int + (int)1;
		var_402_int = "Bofire  light " + var_401_int;
		var_404_int = var_402_int + " not found";
		Trace(var_404_int);
	} else {
		@@var_385_object:Switch((bool)0);
	}
	var_405_object = var_384_object;
	if(var_405_object != 0) {
		RemoveActor(var_384_object);
	}
	var_406_object = GlobalVars[14];
	@@var_406_object:set(var_379_int, Obj());
	var_409_int = var_379_int + (int)1;
	var_410_int = "Cleanup bonfire " + var_409_int;
	var_412_int = var_410_int + "... ok";
	Trace(var_412_int);
	return 6;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5589()
{
	return 0;
}


func_11734()
{
	var_6035_string = ""; var_6036_bool = 0;
	func_151("warehouse_notkin@door1", (bool)1);
	return 0;
}


func_5591(var_1375_int)
{
	var_1380_int = 0; var_1381_int = 0;
	var_1375_int = var_1381_int;
	func_1000((int)6, var_1381_int);
	return 0;
}


func_11741()
{
	var_6348_string = ""; var_6349_bool = 0;
	func_151("warehouse_notkin@door1", (bool)0);
	return 0;
}


func_5598()
{
	var_2658_int = 0; var_2659_bool = 0;
	func_729((int)6, (bool)0);
	return 0;
}


func_479(var_2142_int, var_2143_string, var_2144_string, var_2145_int)
{
	var_2146_object = Obj(); var_2147_object = Obj();
	GetMainOutdoorScene(var_2147_object);
	var_2148_bool = var_2147_object == 0; //@ne
	if(var_2148_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 2;
	}
	@@var_2147_object:SetRegionActorCountByType(var_2142_int, var_2143_string, var_2144_string, var_2145_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11748(var_5253_bool)
{
	var_5256_int = 0; var_5257_string = "";
	func_106(var_5256_int, "b7q02");
	var_5259_bool = var_5256_int == (int)0;
	if(var_5259_bool != 0) {
		var_5253_bool = 1;
		return 0;
	}
	var_5253_bool = 0;
	return 0;
}


func_5605()
{
	var_3784_int = 0; var_3785_bool = 0;
	func_729((int)6, (bool)0);
	return 0;
}


func_2534(var_3027_int, var_3028_int, var_3029_int)
{
	var_3030_int = 0; var_3031_int = 0; var_3032_int = 0; var_3033_int = 0;
	var_3034_bool = 0;
	var_3034_bool = 0;
	var_3036_bool = var_3029_int > (int)8;
	if(var_3036_bool != 0) {
		var_3038_bool = var_3029_int < (int)21;
		if(var_3038_bool != 0) {
			var_3034_bool = 1;
		}
	}
	if(var_3034_bool != 0) {
		var_3039_int = 0; var_3040_string = ""; var_3041_string = ""; var_3042_int = 0;
		var_3027_int = var_3039_int;
		func_453(var_3039_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)6);
		var_3043_int = 0; var_3044_string = ""; var_3045_string = ""; var_3046_int = 0;
		var_3027_int = var_3043_int;
		func_453(var_3043_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)6);
		var_3047_int = 0; var_3048_string = ""; var_3049_string = ""; var_3050_int = 0;
		var_3027_int = var_3047_int;
		func_453(var_3047_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_3051_int = 0; var_3052_string = ""; var_3053_string = ""; var_3054_int = 0;
		var_3027_int = var_3051_int;
		func_479(var_3051_int, "fog", "fog.xml", (int)8);
		var_3056_bool = var_3028_int >= (int)5;
		if(var_3056_bool != 0) {
			var_3057_int = 0; var_3058_string = ""; var_3059_string = ""; var_3060_int = 0;
			var_3027_int = var_3057_int;
			func_479(var_3057_int, "fog", "fog_hunter.xml", (int)3);
		}
		var_3062_float = 0; var_3063_int = 0;
		var_3028_int = var_3063_int;
		func_1205(var_3062_float, var_3063_int);
		var_3032_int = (int)1 * var_3062_float;
		var_3064_int = var_3032_int;
		if(var_3064_int != 0) {
			var_3065_int = 0; var_3066_string = ""; var_3067_string = ""; var_3068_int = 0;
			var_3027_int = var_3065_int;
			var_3032_int = var_3068_int;
			func_453(var_3065_int, "pers_bomber", "bomber.xml", var_3068_int);
		}
	} else {
		var_3106_int = 0; var_3107_string = ""; var_3108_string = ""; var_3109_int = 0;
		var_3027_int = var_3106_int;
		func_453(var_3106_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)6);
		var_3110_int = 0; var_3111_string = ""; var_3112_string = ""; var_3113_int = 0;
		var_3027_int = var_3110_int;
		func_453(var_3110_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_3114_int = 0; var_3115_string = ""; var_3116_string = ""; var_3117_int = 0;
		var_3027_int = var_3114_int;
		func_453(var_3114_int, "pers_rat_big", "rat_big.xml", (int)4);
		var_3118_int = 0; var_3119_string = ""; var_3120_string = ""; var_3121_int = 0;
		var_3027_int = var_3118_int;
		func_479(var_3118_int, "fog", "fog.xml", (int)6);
		var_3123_bool = var_3028_int >= (int)5;
		if(var_3123_bool != 0) {
			var_3124_int = 0; var_3125_string = ""; var_3126_string = ""; var_3127_int = 0;
			var_3027_int = var_3124_int;
			func_479(var_3124_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_3129_float = 0; var_3130_int = 0;
		var_3028_int = var_3130_int;
		func_1205(var_3129_float, var_3130_int);
		var_3033_int = (int)1 * var_3129_float;
		var_3131_int = var_3033_int;
		if(var_3131_int == 0) goto Label_2652;
		var_3132_int = 0; var_3133_string = ""; var_3134_string = ""; var_3135_int = 0;
		var_3027_int = var_3132_int;
		var_3033_int = var_3135_int;
		func_453(var_3132_int, "pers_bomber", "bomber.xml", var_3135_int);
	}
Label_2652:
	var_3069_int = 0; var_3070_string = ""; var_3071_string = ""; var_3072_int = 0; var_3073_int = 0; var_3074_int = 0;
	var_3027_int = var_3069_int;
	func_466(var_3069_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_3075_int = 0; var_3076_string = ""; var_3077_string = ""; var_3078_int = 0; var_3079_int = 0; var_3080_int = 0;
	var_3027_int = var_3075_int;
	func_466(var_3075_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_3081_int = 0; var_3082_string = ""; var_3083_string = ""; var_3084_int = 0; var_3085_int = 0; var_3086_int = 0;
	var_3027_int = var_3081_int;
	func_466(var_3081_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_3087_int = 0; var_3088_string = ""; var_3089_string = ""; var_3090_int = 0; var_3091_int = 0; var_3092_int = 0;
	var_3027_int = var_3087_int;
	func_466(var_3087_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_3093_bool = 0; var_3094_int = 0; var_3095_int = 0;
	var_3028_int = var_3094_int;
	var_3029_int = var_3095_int;
	func_1295(var_3093_bool, var_3094_int, var_3095_int);
	if(var_3093_bool != 0) {
		var_3096_int = 0; var_3097_string = ""; var_3098_string = ""; var_3099_int = 0;
		var_3027_int = var_3096_int;
		func_453(var_3096_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_3100_bool = 0; var_3101_int = 0;
	var_3028_int = var_3101_int;
	func_1322(var_3100_bool, var_3101_int);
	if(var_3100_bool != 0) {
		var_3102_int = 0; var_3103_string = ""; var_3104_string = ""; var_3105_int = 0;
		var_3027_int = var_3102_int;
		func_453(var_3102_int, "pers_sanitar", "sanitar.xml", (int)2);
	}
	return 4;
	
}


func_4586(var_2275_int, var_2276_int, var_2277_object, var_2278_object, var_2279_object, var_2280_object)
{
	var_2282_bool = var_2276_int == (int)0;
	if(var_2282_bool != 0) {
		var_2283_int = 0; var_2284_bool = 0;
		func_746((int)1, (bool)1);
		var_2285_int = 0; var_2286_bool = 0; var_2287_int = 0;
		func_763((int)1, (bool)1, (int)1);
		var_2288_int = 0; var_2289_int = 0; var_2290_object = Obj(); var_2291_object = Obj(); var_2292_object = Obj();
		var_2275_int = var_2289_int;
		var_2277_object = var_2290_object;
		var_2278_object = var_2291_object;
		var_2279_object = var_2292_object;
		func_591((int)1, var_2289_int, var_2290_object, var_2291_object, var_2292_object);
		var_2293_object = Obj(); var_2294_int = 0;
		var_2280_object = var_2293_object;
		func_255(var_2293_object, (int)1);
		var_2295_int = 0; var_2296_bool = 0; var_2297_int = 0;
		func_820((int)1, (bool)1, (int)8);
		var_2298_int = 0; var_2299_bool = 0; var_2300_int = 0;
		func_882((int)1, (bool)0, (int)8);
	}
	var_2301_int = 0; var_2302_bool = 0;
	func_729((int)1, (bool)0);
	var_2303_int = 0; var_2304_int = 0; var_2305_int = 0;
	var_2275_int = var_2304_int;
	var_2276_int = var_2305_int;
	func_3254((int)1, var_2304_int, var_2305_int);
	return 0;
}


func_492(var_571_int, var_572_bool)
{
	var_573_object = Obj(); var_574_object = Obj(); var_575_bool = 0; var_576_object = Obj(); var_577_object = Obj(); var_578_object = Obj(); var_579_bool = 0; var_580_object = Obj();
	GetMainOutdoorScene(var_577_object);
	var_582_int = (int)101 + var_571_int;
	@@var_577_object:GetGroupActors(var_578_object, var_582_int);
	var_583_object = var_578_object;
	if(var_583_object != 0) {

	Label_501:
		@@var_578_object:Next(var_579_bool, var_580_object);
		var_584_bool = var_579_bool;
		if(var_584_bool != 0) {
			var_585_bool = 0; var_586_object = Obj(); var_587_string = "";
			var_580_object = var_586_object;
			func_88(var_585_bool, var_586_object, "locked");
			if(var_585_bool != 0) {
				@@var_580_object:SetProperty("locked", var_572_bool);
			} else {
				var_596_int = "Actor \"" + var_580_object;
				var_598_int = var_596_int + "\" can't be locked";
				Trace(var_598_int);
		}
			var_580_object = 0;
	}
		return 8;
	}
	goto Label_501;
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_6636(var_265_object)
{
	@@var_265_object:add("r6_house2_03");
	@@var_265_object:add("r6_house4_01_i2");
	@@var_265_object:add("r6_house4_02_i2");
	@@var_265_object:add("r6_house4_02");
	@@var_265_object:add("r6_house3_02_i2");
	@@var_265_object:add("r6_house3_02");
	@@var_265_object:add("r6_house3_01_i2");
	@@var_265_object:add("r6_house3_01");
	@@var_265_object:add("r6_house2_01");
	@@var_265_object:add("r6_house7_01");
	@@var_265_object:add("r6_house7_02");
	@@var_265_object:add("r6_House6_01");
	@@var_265_object:add("r6_house2_02");
	return 0;
}


func_5612(var_177_object)
{
	@@var_177_object:add("House6_02");
	@@var_177_object:add("House6_01");
	@@var_177_object:add("house_2_01");
	@@var_177_object:add("house7_03");
	@@var_177_object:add("house7_02");
	@@var_177_object:add("house3_01_i2");
	@@var_177_object:add("house3_01");
	@@var_177_object:add("house_2_03");
	@@var_177_object:add("house_2_02");
	@@var_177_object:add("house4_01_i2");
	@@var_177_object:add("house4_01");
	@@var_177_object:add("House6_05");
	@@var_177_object:add("House6_04");
	@@var_177_object:add("House6_03");
	return 0;
}


func_11760(var_5184_bool)
{
	var_5187_int = 0; var_5188_string = "";
	func_106(var_5187_int, "b7q01");
	var_5190_bool = var_5187_int == (int)1000;
	if(var_5190_bool != 0) {
		var_5184_bool = 1;
		return 0;
	}
	var_5184_bool = 0;
	return 0;
}


func_14840(var_4305_int)
{
	var_4306_object = Obj(); var_4307_object = Obj(); var_4308_object = Obj(); var_4309_object = Obj(); var_4310_object = Obj(); var_4311_object = Obj(); var_4312_object = Obj(); var_4313_object = Obj();
	var_4315_bool = var_4305_int == (int)3;
	if(var_4315_bool != 0) {
		Trace("Special diseased house: house5_unoin03l");
		Trace("Special diseased house: house5_unoin03r");
		GetSceneByName(var_4310_object, "house5_unoin03l");
		ReplaceScene(var_4310_object, "s_house5_unoin03l.isc");
		GetSceneByName(var_4310_object, "house5_unoin03r");
		ReplaceScene(var_4310_object, "s_house5_unoin03r.isc");
		var_4310_object = 0;
	} else {
		var_4323_bool = var_4305_int == (int)4;
		if(var_4323_bool != 0) {
			GetSceneByName(var_4311_object, "theater");
			ReplaceScene(var_4311_object, "dtheater_burah.isc");
			var_4311_object = 0;
			goto Label_14899;
		}
		var_4327_bool = var_4305_int == (int)8;
		if(var_4327_bool != 0) {
			Trace("Special replaced house: uprava_admin");
			GetSceneByName(var_4312_object, "uprava_admin");
			ReplaceScene(var_4312_object, "uprava_admin_army_burah.isc");
			var_4312_object = 0;
			goto Label_14899;
		}
		var_4332_bool = var_4305_int == (int)11;
		if(var_4332_bool == 0) goto Label_14899;
		GetSceneByName(var_4313_object, "theater");
		ReplaceScene(var_4313_object, "theater_burah.isc");
		var_4313_object = 0;
	}
Label_14899:
	return 8;
	
}


func_8698()
{
	var_4433_int = 0; var_4434_object = Obj(); var_4435_int = 0; var_4436_object = Obj(); var_4437_bool = 0; var_4438_cvector = CVector(0,0,0); var_4439_cvector = CVector(0,0,0); var_4440_string = ""; var_4441_int = 0; var_4442_object = Obj(); var_4443_int = 0; var_4444_object = Obj(); var_4445_bool = 0; var_4446_cvector = CVector(0,0,0); var_4447_cvector = CVector(0,0,0); var_4448_string = "";
	var_4449_int = 0;
	func_12303(var_4449_int);
	var_4451_bool = var_4449_int == (int)0;
	if(var_4451_bool != 0) {
		return 16;
	}
	var_4452_object = GlobalVars[6];
	@@var_4452_object:size(var_4441_int);
	GetMainOutdoorScene(var_4442_object);
	var_4443_int = 0;
	
Label_8712:
	var_4453_bool = var_4443_int < var_4441_int;
	if(var_4453_bool != 0) {
		var_4454_object = GlobalVars[6];
		@@var_4454_object:get(var_4444_object, var_4443_int);
		var_4455_object = var_4444_object;
		if(var_4455_object != 0) {
		} else {
			var_4459_int = var_4443_int + (int)1;
			var_4460_int = "pt_plant" + var_4459_int;
			@@var_4442_object:GetLocator(var_4460_int, var_4445_bool, var_4446_cvector, var_4447_cvector);
			var_4461_bool = var_4445_bool == 0; //@nz
			if(var_4461_bool != 0) {
				Trace("Plant point not found");
				goto Label_8768;
			}
			RandOneOf(var_4448_string, (int)6, (int)3, (int)3, (int)3, (int)1, (int)1, "", "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
			var_4475_string = var_4448_string;
			if(var_4475_string != 0) {
				var_4478_int = "item_" + var_4448_string;
				var_4480_int = var_4478_int + "_stat.xml";
				@@var_4442_object:AddStationaryActorByType(var_4444_object, var_4446_cvector, var_4447_cvector, "scripted", var_4480_int);
				var_4481_object = GlobalVars[6];
				@@var_4481_object:set(var_4443_int, var_4444_object);
				var_4483_int = "New plant: \"" + var_4448_string;
				var_4485_int = var_4483_int + "\" at location #";
				var_4487_int = var_4443_int + (int)1;
				var_4488_int = var_4485_int + var_4487_int;
				Trace(var_4488_int);
			}
			var_4444_object = 0;
	}
		var_4443_int = var_4443_int + (int)1;
		goto Label_8712;
	}
	return 16;
	
}
EMIT "Stack[-7] = 0";


func_11772(var_5269_bool)
{
	var_5272_int = 0; var_5273_string = "";
	func_106(var_5272_int, "b8q01");
	var_5275_bool = var_5272_int == (int)0;
	if(var_5275_bool != 0) {
		var_5269_bool = 1;
		return 0;
	}
	var_5269_bool = 0;
	return 0;
}


func_11784(var_5112_bool)
{
	var_5115_int = 0; var_5116_string = "";
	func_106(var_5115_int, "b10q01DankoTalk");
	var_5118_bool = var_5115_int == (int)1;
	if(var_5118_bool != 0) {
		var_5112_bool = 1;
		return 0;
	}
	var_5112_bool = 0;
	return 0;
}


func_10763()
{
	var_6041_object = Obj(); var_6042_object = Obj(); var_6043_object = Obj(); var_6044_object = Obj();
	func_12286(Obj());
	var_6045_object = var_6043_object;
	@@var_6043_object:FindMark(var_6044_object, "b2BurahHome");
	var_6047_object = var_6044_object;
	if(var_6047_object != 0) {
		@@var_6044_object:Remove();
	}
	@@var_6043_object:FindMark(var_6044_object, "b2DankoGotoMladVlad");
	var_6049_object = var_6044_object;
	if(var_6049_object != 0) {
		@@var_6044_object:Remove();
	}
	@@var_6043_object:FindMark(var_6044_object, "b2q01AlexandrGotoOspina");
	var_6051_object = var_6044_object;
	if(var_6051_object != 0) {
		@@var_6044_object:Remove();
	}
	@@var_6043_object:FindMark(var_6044_object, "b2q01BigVladGotoAlexandr");
	var_6053_object = var_6044_object;
	if(var_6053_object != 0) {
		@@var_6044_object:Remove();
	}
	@@var_6043_object:FindMark(var_6044_object, "b2q01BigVladGotoKaterina");
	var_6055_object = var_6044_object;
	if(var_6055_object != 0) {
		@@var_6044_object:Remove();
	}
	@@var_6043_object:FindMark(var_6044_object, "b2q01BigVladGotoMladVlad");
	var_6057_object = var_6044_object;
	if(var_6057_object != 0) {
		@@var_6044_object:Remove();
	}
	@@var_6043_object:FindMark(var_6044_object, "b2Travnik1");
	var_6059_object = var_6044_object;
	if(var_6059_object != 0) {
		@@var_6044_object:Remove();
	}
	@@var_6043_object:FindMark(var_6044_object, "b2Travnik2");
	var_6061_object = var_6044_object;
	if(var_6061_object != 0) {
		@@var_6044_object:Remove();
	}
	@@var_6043_object:FindMark(var_6044_object, "b2Travnik3");
	var_6063_object = var_6044_object;
	if(var_6063_object != 0) {
		@@var_6044_object:Remove();
	}
	@@var_6043_object:FindMark(var_6044_object, "b2q01BigVladGotoDanko");
	var_6065_object = var_6044_object;
	if(var_6065_object != 0) {
		@@var_6044_object:Remove();
	}
	@@var_6043_object:FindMark(var_6044_object, "b2q03GoodShop");
	var_6067_object = var_6044_object;
	if(var_6067_object != 0) {
		@@var_6044_object:Remove();
	}
	@@var_6043_object:FindMark(var_6044_object, "b2AndreiKabak");
	var_6069_object = var_6044_object;
	if(var_6069_object != 0) {
		@@var_6044_object:Remove();
	}
	var_6070_bool = 0; var_6071_int = 0;
	func_12261(var_6070_bool, (int)245);
	var_6072_bool = 0; var_6073_int = 0;
	func_12261(var_6072_bool, (int)456);
	var_6074_bool = 0; var_6075_int = 0;
	func_12261(var_6074_bool, (int)585);
	var_6076_bool = 0; var_6077_int = 0;
	func_12261(var_6076_bool, (int)588);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_526(var_2030_string, var_2031_object, var_2032_string, var_2033_string)
{
	var_2039_object = Obj(); var_2040_int = 0; var_2041_bool = 0; var_2042_cvector = CVector(0,0,0); var_2043_cvector = CVector(0,0,0); var_2044_object = Obj(); var_2045_object = Obj(); var_2046_int = 0; var_2047_bool = 0; var_2048_cvector = CVector(0,0,0); var_2049_cvector = CVector(0,0,0); var_2050_object = Obj();
	GetMainOutdoorScene(var_2045_object);
	var_2046_int = 0;
	
Label_530:
	var_2052_int = var_2046_int + (int)1;
	var_2053_int = var_2030_string + var_2052_int;
	@@var_2045_object:GetLocator(var_2053_int, var_2047_bool, var_2048_cvector, var_2049_cvector);
	var_2054_bool = var_2047_bool == 0; //@nz
	if(var_2054_bool != 0) {
	} else {
		@@var_2045_object:AddStationaryActor(var_2050_object, var_2048_cvector, var_2049_cvector, var_2032_string, var_2033_string);
		@@var_2031_object:add(var_2050_object);
		var_2050_object = 0;
		var_2046_int = var_2046_int + (int)1;
		goto Label_530;
	}
	return 12;
	
}
EMIT "Stack[-6] = 0";


func_7695(var_4388_object, var_4389_object, var_4390_string, var_4391_string, var_4392_string)
{
	var_4394_bool = 0; var_4395_cvector = CVector(0,0,0); var_4396_cvector = CVector(0,0,0); var_4397_object = Obj(); var_4398_bool = 0; var_4399_cvector = CVector(0,0,0); var_4400_cvector = CVector(0,0,0); var_4401_object = Obj();
	var_4403_int = "pt_guard_" + var_4390_string;
	@@var_4389_object:GetLocator(var_4403_int, var_4398_bool, var_4399_cvector, var_4400_cvector);
	var_4404_bool = var_4398_bool == 0; //@nz
	if(var_4404_bool != 0) {
		var_4406_int = "Locator doesn't exist for guard " + var_4390_string;
		Trace(var_4406_int);
	} else {
		@@var_4389_object:AddStationaryActor(var_4401_object, var_4399_cvector, var_4400_cvector, var_4391_string, var_4392_string);
	}
	var_4401_object = var_4388_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_11796(var_4764_bool)
{
	var_4767_int = 0; var_4768_string = "";
	func_106(var_4767_int, "b11q01");
	var_4770_bool = var_4767_int == (int)0;
	if(var_4770_bool != 0) {
		var_4764_bool = 1;
		return 0;
	}
	var_4764_bool = 0;
	return 0;
}


func_6677(var_1703_int, var_1704_int, var_1705_object, var_1706_object, var_1707_object, var_1708_object)
{
	var_1710_bool = var_1704_int == (int)0;
	if(var_1710_bool != 0) {
		var_1711_int = 0; var_1712_bool = 0;
		func_746((int)12, (bool)0);
		var_1713_int = 0; var_1714_bool = 0; var_1715_int = 0;
		func_763((int)12, (bool)0, (int)1);
		var_1716_int = 0; var_1717_int = 0; var_1718_object = Obj(); var_1719_object = Obj(); var_1720_object = Obj();
		var_1716_int = 12;
		var_1703_int = var_1717_int;
		var_1705_object = var_1718_object;
		var_1706_object = var_1719_object;
		var_1707_object = var_1720_object;
		func_572(var_1717_int, var_1718_object, var_1719_object, var_1720_object);
		var_1721_object = Obj(); var_1722_int = 0;
		var_1708_object = var_1721_object;
		func_255(var_1721_object, (int)0);
		var_1723_int = 0; var_1724_bool = 0; var_1725_int = 0;
		func_820((int)12, (bool)0, (int)4);
		var_1726_int = 0; var_1727_bool = 0; var_1728_int = 0;
		func_882((int)12, (bool)0, (int)4);
	}
	var_1729_int = 0; var_1730_int = 0;
	var_1704_int = var_1730_int;
	func_970((int)12, var_1730_int);
	var_1731_int = 0; var_1732_int = 0; var_1733_int = 0;
	var_1703_int = var_1732_int;
	var_1704_int = var_1733_int;
	func_1574((int)12, var_1732_int, var_1733_int);
	return 0;
}


func_5656(var_1384_int, var_1385_int, var_1386_object, var_1387_object, var_1388_object, var_1389_object)
{
	var_1391_bool = var_1385_int == (int)0;
	if(var_1391_bool != 0) {
		var_1392_int = 0; var_1393_bool = 0;
		func_746((int)7, (bool)0);
		var_1394_int = 0; var_1395_bool = 0; var_1396_int = 0;
		func_763((int)7, (bool)0, (int)1);
		var_1397_int = 0; var_1398_int = 0; var_1399_object = Obj(); var_1400_object = Obj(); var_1401_object = Obj();
		var_1397_int = 7;
		var_1384_int = var_1398_int;
		var_1386_object = var_1399_object;
		var_1387_object = var_1400_object;
		var_1388_object = var_1401_object;
		func_572(var_1398_int, var_1399_object, var_1400_object, var_1401_object);
		var_1402_object = Obj(); var_1403_int = 0;
		var_1389_object = var_1402_object;
		func_255(var_1402_object, (int)0);
		var_1404_int = 0; var_1405_bool = 0; var_1406_int = 0;
		func_820((int)7, (bool)0, (int)6);
		var_1407_int = 0; var_1408_bool = 0; var_1409_int = 0;
		func_882((int)7, (bool)0, (int)6);
	}
	var_1410_int = 0; var_1411_int = 0;
	var_1385_int = var_1411_int;
	func_970((int)7, var_1411_int);
	var_1412_int = 0; var_1413_int = 0; var_1414_int = 0;
	var_1384_int = var_1413_int;
	var_1385_int = var_1414_int;
	func_1574((int)7, var_1413_int, var_1414_int);
	return 0;
}


func_3609(var_3816_int, var_3817_int, var_3818_int)
{
	var_3819_int = 0; var_3820_int = 0; var_3821_int = 0; var_3822_int = 0; var_3823_int = 0; var_3824_int = 0; var_3825_int = 0; var_3826_int = 0;
	var_3827_bool = 0;
	var_3827_bool = 0;
	var_3829_bool = var_3818_int > (int)8;
	if(var_3829_bool != 0) {
		var_3831_bool = var_3818_int < (int)21;
		if(var_3831_bool != 0) {
			var_3827_bool = 1;
		}
	}
	if(var_3827_bool != 0) {
		var_3832_int = 0; var_3833_string = ""; var_3834_string = ""; var_3835_int = 0;
		var_3816_int = var_3832_int;
		func_453(var_3832_int, "pers_rat", "rat.xml", (int)1);
		var_3836_int = 0; var_3837_string = ""; var_3838_string = ""; var_3839_int = 0;
		var_3816_int = var_3836_int;
		func_453(var_3836_int, "pers_alkash", "alkash.xml", (int)2);
		var_3840_int = 0; var_3841_string = ""; var_3842_string = ""; var_3843_int = 0;
		var_3816_int = var_3840_int;
		func_453(var_3840_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3845_float = 0; var_3846_int = 0;
		var_3817_int = var_3846_int;
		func_1115(var_3845_float, var_3846_int);
		var_3823_int = (int)2 * var_3845_float;
		var_3847_int = var_3823_int;
		if(var_3847_int != 0) {
			var_3848_int = 0; var_3849_string = ""; var_3850_string = ""; var_3851_int = 0;
			var_3816_int = var_3848_int;
			var_3823_int = var_3851_int;
			func_453(var_3848_int, "pers_grabitel", "grabitel.xml", var_3851_int);
		}
		var_3853_int = var_3817_int + (int)1;
		var_3855_bool = var_3853_int >= (int)2;
		if(var_3855_bool != 0) {
			var_3856_int = 0; var_3857_string = ""; var_3858_string = ""; var_3859_int = 0;
			var_3816_int = var_3856_int;
			func_453(var_3856_int, "pers_patrool", "patrol.xml", (int)1);
			var_3860_bool = 0; var_3861_int = 0;
			var_3817_int = var_3861_int;
			func_1322(var_3860_bool, var_3861_int);
			if(var_3860_bool != 0) {
				var_3862_int = 0; var_3863_string = ""; var_3864_string = ""; var_3865_int = 0;
				var_3816_int = var_3862_int;
				func_453(var_3862_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3867_float = 0; var_3868_int = 0;
		var_3817_int = var_3868_int;
		func_1205(var_3867_float, var_3868_int);
		var_3824_int = (int)1 * var_3867_float;
		var_3869_int = var_3824_int;
		if(var_3869_int != 0) {
			var_3870_int = 0; var_3871_string = ""; var_3872_string = ""; var_3873_int = 0;
			var_3816_int = var_3870_int;
			var_3824_int = var_3873_int;
			func_453(var_3870_int, "pers_bomber", "bomber.xml", var_3873_int);
		}
	} else {
		var_3887_int = 0; var_3888_string = ""; var_3889_string = ""; var_3890_int = 0;
		var_3816_int = var_3887_int;
		func_453(var_3887_int, "pers_rat", "rat.xml", (int)3);
		var_3891_int = 0; var_3892_string = ""; var_3893_string = ""; var_3894_int = 0;
		var_3816_int = var_3891_int;
		func_453(var_3891_int, "pers_alkash", "alkash.xml", (int)1);
		var_3895_int = 0; var_3896_string = ""; var_3897_string = ""; var_3898_int = 0;
		var_3816_int = var_3895_int;
		func_453(var_3895_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3900_float = 0; var_3901_int = 0;
		var_3817_int = var_3901_int;
		func_1115(var_3900_float, var_3901_int);
		var_3825_int = (int)3 * var_3900_float;
		var_3902_int = var_3825_int;
		if(var_3902_int != 0) {
			var_3903_int = 0; var_3904_string = ""; var_3905_string = ""; var_3906_int = 0;
			var_3816_int = var_3903_int;
			var_3825_int = var_3906_int;
			func_453(var_3903_int, "pers_grabitel", "grabitel.xml", var_3906_int);
		}
		var_3908_int = var_3817_int + (int)1;
		var_3910_bool = var_3908_int >= (int)2;
		if(var_3910_bool != 0) {
			var_3911_int = 0; var_3912_string = ""; var_3913_string = ""; var_3914_int = 0;
			var_3816_int = var_3911_int;
			func_453(var_3911_int, "pers_patrool", "patrol.xml", (int)1);
			var_3915_bool = 0; var_3916_int = 0;
			var_3817_int = var_3916_int;
			func_1322(var_3915_bool, var_3916_int);
			if(var_3915_bool != 0) {
				var_3917_int = 0; var_3918_string = ""; var_3919_string = ""; var_3920_int = 0;
				var_3816_int = var_3917_int;
				func_453(var_3917_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3922_float = 0; var_3923_int = 0;
		var_3817_int = var_3923_int;
		func_1205(var_3922_float, var_3923_int);
		var_3826_int = (int)1 * var_3922_float;
		var_3924_int = var_3826_int;
		if(var_3924_int == 0) goto Label_3771;
		var_3925_int = 0; var_3926_string = ""; var_3927_string = ""; var_3928_int = 0;
		var_3816_int = var_3925_int;
		var_3826_int = var_3928_int;
		func_453(var_3925_int, "pers_bomber", "bomber.xml", var_3928_int);
	}
Label_3771:
	var_3874_bool = 0; var_3875_int = 0; var_3876_int = 0;
	var_3817_int = var_3875_int;
	var_3818_int = var_3876_int;
	func_1295(var_3874_bool, var_3875_int, var_3876_int);
	if(var_3874_bool != 0) {
		var_3877_int = 0; var_3878_string = ""; var_3879_string = ""; var_3880_int = 0;
		var_3816_int = var_3877_int;
		func_453(var_3877_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_3881_bool = 0; var_3882_int = 0;
	var_3817_int = var_3882_int;
	func_1322(var_3881_bool, var_3882_int);
	if(var_3881_bool != 0) {
		var_3883_int = 0; var_3884_string = ""; var_3885_string = ""; var_3886_int = 0;
		var_3816_int = var_3883_int;
		func_453(var_3883_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 8;
	
}


func_4638(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object)
{
	var_3407_bool = var_3401_int == (int)0;
	if(var_3407_bool != 0) {
		var_3408_int = 0; var_3409_bool = 0;
		func_746((int)1, (bool)0);
		var_3410_int = 0; var_3411_bool = 0; var_3412_int = 0;
		func_763((int)1, (bool)0, (int)1);
		var_3413_int = 0; var_3414_int = 0; var_3415_object = Obj(); var_3416_object = Obj(); var_3417_object = Obj();
		var_3400_int = var_3414_int;
		var_3402_object = var_3415_object;
		var_3403_object = var_3416_object;
		var_3404_object = var_3417_object;
		func_670((int)1, var_3414_int, var_3415_object, var_3416_object, var_3417_object);
		var_3418_object = Obj(); var_3419_int = 0;
		var_3405_object = var_3418_object;
		func_255(var_3418_object, (int)2);
		var_3420_int = 0; var_3421_bool = 0; var_3422_int = 0;
		func_820((int)1, (bool)0, (int)8);
		var_3423_int = 0; var_3424_bool = 0; var_3425_int = 0;
		func_882((int)1, (bool)1, (int)8);
	}
	var_3426_int = 0; var_3427_bool = 0;
	func_729((int)1, (bool)0);
	var_3428_int = 0; var_3429_int = 0; var_3430_int = 0;
	var_3400_int = var_3429_int;
	var_3401_int = var_3430_int;
	func_4160((int)1, var_3429_int, var_3430_int);
	return 0;
}


func_7712(var_4385_object, var_4386_object, var_4387_int)
{
	var_4388_object = Obj(); var_4389_object = Obj(); var_4390_string = ""; var_4391_string = ""; var_4392_string = "";
	var_4386_object = var_4389_object;
	var_4390_string = "term" + var_4387_int;
	func_7695(var_4388_object, var_4389_object, var_4390_string, "pers_patrool", "guard_term.xml");
	var_4388_object = var_4385_object;
	return 0;
}


func_11808(var_4700_bool)
{
	var_4703_int = 0; var_4704_string = "";
	func_106(var_4703_int, "b12q01BlockVisit");
	var_4706_bool = var_4703_int != (int)0;
	if(var_4706_bool != 0) {
		var_4700_bool = 1;
		return 0;
	}
	var_4700_bool = 0;
	return 0;
}


func_548(var_2056_string, var_2057_object)
{
	var_2063_object = Obj(); var_2064_int = 0; var_2065_bool = 0; var_2066_cvector = CVector(0,0,0); var_2067_cvector = CVector(0,0,0); var_2068_object = Obj(); var_2069_string = ""; var_2070_object = Obj(); var_2071_int = 0; var_2072_bool = 0; var_2073_cvector = CVector(0,0,0); var_2074_cvector = CVector(0,0,0); var_2075_object = Obj(); var_2076_string = "";
	GetMainOutdoorScene(var_2070_object);
	var_2071_int = 0;
	
Label_552:
	var_2078_int = var_2071_int + (int)1;
	var_2079_int = var_2056_string + var_2078_int;
	@@var_2070_object:GetLocator(var_2079_int, var_2072_bool, var_2073_cvector, var_2074_cvector);
	var_2080_bool = var_2072_bool == 0; //@nz
	if(var_2080_bool != 0) {
	} else {
		@@var_2070_object:AddStationaryActorByType(var_2075_object, var_2073_cvector, var_2074_cvector, "fog", "fog_stat.xml");
		@@var_2057_object:add(var_2075_object);
		var_2075_object = 0;
		var_2071_int = var_2071_int + (int)1;
		goto Label_552;
	}
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_1574(var_1412_int, var_1413_int, var_1414_int)
{
	var_1415_int = 0; var_1416_int = 0;
	var_1418_int = var_1413_int + (int)1;
	var_1420_bool = var_1418_int == (int)12;
	if(var_1420_bool != 0) {
		return 2;
	}
	var_1421_bool = 0;
	var_1421_bool = 0;
	var_1422_bool = 0;
	var_1422_bool = 1;
	var_1424_bool = var_1414_int < (int)7;
	if(var_1424_bool != 1) {
		var_1426_bool = var_1414_int > (int)21;
		if(var_1426_bool != 1) {
			var_1422_bool = 0;
		}
	}
	if(var_1422_bool != 0) {
		var_1428_bool = var_1413_int != (int)0;
		if(var_1428_bool != 0) {
			var_1421_bool = 1;
		}
	}
	if(var_1421_bool != 0) {
		var_1430_float = 0; var_1431_int = 0;
		var_1413_int = var_1431_int;
		func_1091(var_1430_float, var_1431_int);
		var_1416_int = (int)1 * var_1430_float;
		var_1432_int = var_1416_int;
		if(var_1432_int != 0) {
			var_1433_int = 0; var_1434_string = ""; var_1435_string = ""; var_1436_int = 0;
			var_1412_int = var_1433_int;
			var_1416_int = var_1436_int;
			func_453(var_1433_int, "pers_grabitel", "grabitel.xml", var_1436_int);
		}
	}
	var_1437_bool = 0; var_1438_int = 0; var_1439_int = 0;
	var_1413_int = var_1438_int;
	var_1414_int = var_1439_int;
	func_1060(var_1437_bool, var_1438_int, var_1439_int);
	if(var_1437_bool != 0) {
		var_1440_int = 0; var_1441_string = ""; var_1442_string = ""; var_1443_int = 0;
		var_1412_int = var_1440_int;
		func_453(var_1440_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_1444_int = 0; var_1445_string = ""; var_1446_string = ""; var_1447_int = 0;
		var_1412_int = var_1444_int;
		func_453(var_1444_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_1448_int = 0; var_1449_string = ""; var_1450_string = ""; var_1451_int = 0;
		var_1412_int = var_1448_int;
		func_453(var_1448_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_1452_int = 0; var_1453_string = ""; var_1454_string = ""; var_1455_int = 0;
		var_1412_int = var_1452_int;
		func_453(var_1452_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_1456_int = 0; var_1457_string = ""; var_1458_string = ""; var_1459_int = 0;
		var_1412_int = var_1456_int;
		func_453(var_1456_int, "pers_woman", "woman.xml", (int)1);
		var_1460_int = 0; var_1461_string = ""; var_1462_string = ""; var_1463_int = 0;
		var_1412_int = var_1460_int;
		func_453(var_1460_int, "pers_alkash", "alkash.xml", (int)1);
		var_1464_bool = 0;
		var_1464_bool = 0;
		var_1466_bool = var_1414_int > (int)8;
		if(var_1466_bool != 0) {
			var_1468_bool = var_1414_int < (int)21;
			if(var_1468_bool != 0) {
				var_1464_bool = 1;
			}
		}
		if(var_1464_bool != 0) {
			var_1469_int = 0; var_1470_string = ""; var_1471_string = ""; var_1472_int = 0;
			var_1412_int = var_1469_int;
			func_453(var_1469_int, "pers_boy", "boy.xml", (int)1);
			var_1473_int = 0; var_1474_string = ""; var_1475_string = ""; var_1476_int = 0;
			var_1412_int = var_1473_int;
			func_453(var_1473_int, "pers_girl", "girl.xml", (int)1);
			var_1477_int = 0; var_1478_string = ""; var_1479_string = ""; var_1480_int = 0;
			var_1412_int = var_1477_int;
			func_453(var_1477_int, "pers_girl", "girl2.xml", (int)1);
			var_1481_int = 0; var_1482_string = ""; var_1483_string = ""; var_1484_int = 0;
			var_1412_int = var_1481_int;
			func_453(var_1481_int, "pers_littleboy", "littleboy.xml", (int)1);
			var_1485_int = 0; var_1486_string = ""; var_1487_string = ""; var_1488_int = 0;
			var_1412_int = var_1485_int;
			func_453(var_1485_int, "pers_littlegirl", "littlegirl.xml", (int)1);
		}
	} else {
		var_1496_bool = 0;
		var_1496_bool = 0;
		var_1498_bool = var_1414_int > (int)8;
		if(var_1498_bool != 0) {
			var_1500_bool = var_1414_int < (int)21;
			if(var_1500_bool != 0) {
				var_1496_bool = 1;
			}
		}
		if(var_1496_bool != 0) {
			var_1501_int = 0; var_1502_string = ""; var_1503_string = ""; var_1504_int = 0;
			var_1412_int = var_1501_int;
			func_453(var_1501_int, "pers_woman", "woman.xml", (int)1);
			var_1505_int = 0; var_1506_string = ""; var_1507_string = ""; var_1508_int = 0;
			var_1412_int = var_1505_int;
			func_453(var_1505_int, "pers_unosha", "unosha.xml", (int)1);
			var_1509_int = 0; var_1510_string = ""; var_1511_string = ""; var_1512_int = 0;
			var_1412_int = var_1509_int;
			func_453(var_1509_int, "pers_unosha", "unosha2.xml", (int)1);
			var_1513_int = 0; var_1514_string = ""; var_1515_string = ""; var_1516_int = 0;
			var_1412_int = var_1513_int;
			func_453(var_1513_int, "pers_boy", "boy.xml", (int)1);
			var_1517_int = 0; var_1518_string = ""; var_1519_string = ""; var_1520_int = 0;
			var_1412_int = var_1517_int;
			func_453(var_1517_int, "pers_girl", "girl.xml", (int)1);
			var_1521_int = 0; var_1522_string = ""; var_1523_string = ""; var_1524_int = 0;
			var_1412_int = var_1521_int;
			func_453(var_1521_int, "pers_girl", "girl2.xml", (int)1);
			var_1525_int = 0; var_1526_string = ""; var_1527_string = ""; var_1528_int = 0;
			var_1412_int = var_1525_int;
			func_453(var_1525_int, "pers_littleboy", "littleboy.xml", (int)1);
			var_1529_int = 0; var_1530_string = ""; var_1531_string = ""; var_1532_int = 0;
			var_1412_int = var_1529_int;
			func_453(var_1529_int, "pers_littlegirl", "littlegirl.xml", (int)1);
			var_1533_int = 0; var_1534_string = ""; var_1535_string = ""; var_1536_int = 0;
			var_1412_int = var_1533_int;
			func_453(var_1533_int, "pers_alkash", "alkash.xml", (int)1);
			var_1538_int = var_1413_int + (int)1;
			var_1540_bool = var_1538_int >= (int)3;
			if(var_1540_bool != 0) {
				var_1541_int = 0; var_1542_string = ""; var_1543_string = ""; var_1544_int = 0;
				var_1412_int = var_1541_int;
				func_453(var_1541_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
			}
			goto Label_1833;
		}
		var_1545_int = 0; var_1546_string = ""; var_1547_string = ""; var_1548_int = 0;
		var_1412_int = var_1545_int;
		func_453(var_1545_int, "pers_woman", "woman.xml", (int)1);
		var_1549_int = 0; var_1550_string = ""; var_1551_string = ""; var_1552_int = 0;
		var_1412_int = var_1549_int;
		func_453(var_1549_int, "pers_unosha", "unosha.xml", (int)1);
		var_1553_int = 0; var_1554_string = ""; var_1555_string = ""; var_1556_int = 0;
		var_1412_int = var_1553_int;
		func_453(var_1553_int, "pers_unosha", "unosha2.xml", (int)1);
		var_1557_int = 0; var_1558_string = ""; var_1559_string = ""; var_1560_int = 0;
		var_1412_int = var_1557_int;
		func_453(var_1557_int, "pers_alkash", "alkash.xml", (int)1);
		var_1562_int = var_1413_int + (int)1;
		var_1564_bool = var_1562_int >= (int)3;
		if(var_1564_bool == 0) goto Label_1833;
		var_1565_int = 0; var_1566_string = ""; var_1567_string = ""; var_1568_int = 0;
		var_1412_int = var_1565_int;
		func_453(var_1565_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
	}
Label_1833:
	var_1489_bool = 0; var_1490_int = 0; var_1491_int = 0;
	var_1413_int = var_1490_int;
	var_1414_int = var_1491_int;
	func_1295(var_1489_bool, var_1490_int, var_1491_int);
	if(var_1489_bool != 0) {
		var_1492_int = 0; var_1493_string = ""; var_1494_string = ""; var_1495_int = 0;
		var_1412_int = var_1492_int;
		func_453(var_1492_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 2;
	
}


func_7723(var_4429_bool)
{
	var_4430_object = Obj(); var_4431_object = Obj();
	FindActor(var_4431_object, "arena_light");
	@@var_4431_object:Switch(var_4429_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11820(var_4655_bool)
{
	var_4658_int = 0; var_4659_string = "";
	func_106(var_4658_int, "b12q01DankoVisit");
	var_4663_bool = var_4658_int != (int)0;
	if(var_4663_bool != 0) {
		var_4655_bool = 1;
		return 0;
	}
	var_4655_bool = 0;
	return 0;
}


func_9776(var_5508_int, var_5509_float)
{
	var_5510_int = 0; var_5511_int = 0; var_5512_int = 0; var_5513_float = 0;
	var_5509_float = var_5513_float;
	func_12278(var_5510_int, (int)531503, (int)531502, var_5513_float);
	var_5510_int = var_5508_int;
	return 0;
}


func_7731()
{
	var_4290_object = Obj(); var_4291_bool = 0; var_4292_cvector = CVector(0,0,0); var_4293_cvector = CVector(0,0,0); var_4294_int = 0; var_4295_object = Obj(); var_4296_object = Obj(); var_4297_bool = 0; var_4298_cvector = CVector(0,0,0); var_4299_cvector = CVector(0,0,0); var_4300_int = 0; var_4301_object = Obj();
	Trace("Setting arena...");
	var_4303_object = GlobalVars[11];
	var_4304_bool = var_4303_object == 0; //@ne
	if(var_4304_bool != 0) {
		GetMainOutdoorScene(var_4296_object);
		@@var_4296_object:GetLocator("pt_arena_manager", var_4297_bool, var_4298_cvector, var_4299_cvector);
		var_4306_bool = var_4297_bool == 0; //@nz
		if(var_4306_bool != 0) {
			Trace("Locator doesn't exist for arena manager");
		} else {
				var_4327_object = GlobalVars[11];
				var_4328_object = Obj(); var_4329_object = Obj(); var_4330_cvector = CVector(0,0,0); var_4331_cvector = CVector(0,0,0);
				var_4296_object = var_4329_object;
				var_4298_cvector = var_4330_cvector;
				var_4299_cvector = var_4331_cvector;
				func_14900(var_4328_object, var_4329_object, var_4330_cvector, var_4331_cvector);
				var_4328_object = var_4327_object;
				GlobalVars[11] = var_4327_object;
		}
		var_4300_int = 0;

	Label_7759:
		var_4309_bool = var_4300_int < (int)6;
		if(var_4309_bool != 0) {
			var_4312_int = var_4300_int + (int)1;
			var_4313_int = "pt_arena_torch" + var_4312_int;
			@@var_4296_object:GetLocator(var_4313_int, var_4297_bool, var_4298_cvector, var_4299_cvector);
			var_4314_bool = var_4297_bool == 0; //@nz
			if(var_4314_bool != 0) {
				var_4317_int = var_4300_int + (int)1;
				var_4318_int = "Locator doesn't exist for arena torch " + var_4317_int;
				Trace(var_4318_int);
			} else {
				AddActorByType(var_4301_object, "scripted", var_4296_object, var_4298_cvector, var_4299_cvector, "torch.xml");
				var_4322_object = GlobalVars[12];
				@@var_4322_object:add(var_4301_object);
				var_4301_object = 0;
		}
			var_4323_bool = 0;
			func_7723((bool)1);
			var_4296_object = 0;
	}
		return 12;

	}
	var_4300_int = var_4300_int + (int)1;
	goto Label_7759;
	
}


func_14900(var_4328_object, var_4329_object, var_4330_cvector, var_4331_cvector)
{
	var_4332_object = Obj(); var_4333_object = Obj();
	@@var_4329_object:AddStationaryActor(var_4333_object, var_4330_cvector, var_4331_cvector, "pers_morlok", "Burah_arena_manager.xml");
	var_4333_object = var_4328_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_11832(var_4876_bool)
{
	var_4879_int = 0; var_4880_string = "";
	func_106(var_4879_int, "b12q01KlaraVisit");
	var_4882_bool = var_4879_int != (int)0;
	if(var_4882_bool != 0) {
		var_4876_bool = 1;
		return 0;
	}
	var_4876_bool = 0;
	return 0;
}


func_9785(var_5934_int, var_5935_float)
{
	var_5936_int = 0; var_5937_int = 0; var_5938_int = 0; var_5939_float = 0;
	var_5935_float = var_5939_float;
	func_12278(var_5936_int, (int)530554, (int)530553, var_5939_float);
	var_5936_int = var_5934_int;
	return 0;
}


func_572(var_566_int, var_568_object, var_569_object, var_570_object)
{
	var_571_int = 0; var_572_bool = 0;
	var_566_int = var_571_int;
	func_492(var_571_int, (bool)1);
	var_599_object = Obj();
	var_568_object = var_599_object;
	func_213(var_599_object);
	var_610_object = Obj();
	var_569_object = var_610_object;
	func_213(var_610_object);
	var_611_object = Obj();
	var_570_object = var_611_object;
	func_213(var_611_object);
	return 0;
}


func_13887(var_4580_float)
{
	var_4584_object = GlobalVars[16];
	GlobalVars[16] = Obj();
	SetTimeEvent((int)45091, (float)271.5);
	SetTimeEvent((int)45116, (float)58.0);
	SetTimeEvent((int)45113, (float)36.0);
	SetTimeEvent((int)45090, (float)281.0);
	SetTimeEvent((int)45117, (float)48.08000183105469);
	SetTimeEvent((int)45118, (float)72.08000183105469);
	SetTimeEvent((int)45119, (float)96.08000183105469);
	SetTimeEvent((int)45120, (float)120.08000183105469);
	SetTimeEvent((int)45121, (float)144.0800018310547);
	SetTimeEvent((int)45122, (float)168.0800018310547);
	SetTimeEvent((int)45089, (float)247.25);
	SetTimeEvent((int)45080, (float)168.0);
	SetTimeEvent((int)45081, (float)144.0);
	SetTimeEvent((int)45082, (float)127.0);
	SetTimeEvent((int)45092, (float)271.25);
	SetTimeEvent((int)45093, (float)282.0);
	SetTimeEvent((int)45083, (float)192.0);
	SetTimeEvent((int)45111, (float)12.0);
	SetTimeEvent((int)45079, (float)168.0);
	SetTimeEvent((int)45086, (float)240.0);
	SetTimeEvent((int)45087, (float)264.0);
	SetTimeEvent((int)45112, (float)24.049999237060547);
	SetTimeEvent((int)45115, (float)60.0);
	SetTimeEvent((int)45114, (float)48.04999923706055);
	SetTimeEvent((int)45088, (float)223.25);
	SetTimeEvent((int)45084, (float)192.0);
	SetTimeEvent((int)45085, (float)216.0);
	SetTimeEvent((int)45127, (float)120.05000305175781);
	SetTimeEvent((int)45133, (float)168.0500030517578);
	SetTimeEvent((int)45136, (float)180.0);
	SetTimeEvent((int)45123, (float)79.25);
	SetTimeEvent((int)45124, (float)84.0);
	SetTimeEvent((int)45130, (float)151.25);
	SetTimeEvent((int)45131, (float)152.0);
	SetTimeEvent((int)45135, (float)175.25);
	SetTimeEvent((int)45125, (float)96.05000305175781);
	SetTimeEvent((int)45128, (float)127.25);
	SetTimeEvent((int)45129, (float)144.0500030517578);
	SetTimeEvent((int)45134, (float)192.0500030517578);
	SetTimeEvent((int)45126, (float)103.25);
	SetTimeEvent((int)45137, (float)199.25);
	SetTimeEvent((int)45138, (float)216.0500030517578);
	SetTimeEvent((int)45132, (float)156.0);
	SetTimeEvent((int)45198, (float)24.0);
	SetTimeEvent((int)45262, (float)168.0);
	SetTimeEvent((int)45190, (float)64.0);
	SetTimeEvent((int)45263, (float)192.0);
	SetTimeEvent((int)45264, (float)216.0);
	SetTimeEvent((int)45266, (float)264.0);
	SetTimeEvent((int)45185, (float)63.0);
	SetTimeEvent((int)45196, (float)227.5);
	SetTimeEvent((int)45189, (float)111.5);
	SetTimeEvent((int)45265, (float)240.0);
	SetTimeEvent((int)45157, (float)151.02000427246094);
	SetTimeEvent((int)45160, (float)223.02000427246094);
	SetTimeEvent((int)45161, (float)247.02000427246094);
	SetTimeEvent((int)45158, (float)175.02000427246094);
	SetTimeEvent((int)45159, (float)199.02000427246094);
	SetTimeEvent((int)45187, (float)230.0);
	SetTimeEvent((int)45188, (float)135.0);
	SetTimeEvent((int)45193, (float)11.0);
	SetTimeEvent((int)45194, (float)39.0);
	SetTimeEvent((int)45197, (float)199.3300018310547);
	SetTimeEvent((int)45191, (float)64.25);
	SetTimeEvent((int)45235, (float)90.0);
	SetTimeEvent((int)45192, (float)120.0);
	SetTimeEvent((int)45186, (float)184.5);
	SetTimeEvent((int)45195, (float)82.5);
	SetTimeEvent((int)45234, (float)67.5);
	SetTimeEvent((int)45237, (float)178.5);
	SetTimeEvent((int)45238, (float)205.25);
	SetTimeEvent((int)45162, (float)271.0199890136719);
	SetTimeEvent((int)45139, (float)240.0500030517578);
	SetTimeEvent((int)45141, (float)263.5);
	SetTimeEvent((int)45140, (float)263.25);
	SetTimeEvent((int)45144, (float)108.0);
	SetTimeEvent((int)45148, (float)210.0);
	SetTimeEvent((int)45149, (float)222.0);
	SetTimeEvent((int)45150, (float)240.0);
	SetTimeEvent((int)45151, (float)250.5);
	SetTimeEvent((int)45155, (float)103.0199966430664);
	SetTimeEvent((int)45142, (float)264.04998779296875);
	SetTimeEvent((int)45147, (float)210.0);
	SetTimeEvent((int)45152, (float)31.020000457763672);
	SetTimeEvent((int)45156, (float)127.0199966430664);
	SetTimeEvent((int)45153, (float)55.02000045776367);
	SetTimeEvent((int)45154, (float)79.0199966430664);
	SetTimeEvent((int)45143, (float)252.0);
	SetTimeEvent((int)45078, (float)144.0);
	SetTimeEvent((int)45070, (float)72.0);
	SetTimeEvent((int)45059, (float)48.0);
	SetTimeEvent((int)45071, (float)18.0);
	SetTimeEvent((int)45073, (float)48.0);
	SetTimeEvent((int)45072, (float)48.0);
	SetTimeEvent((int)45076, (float)31.25);
	SetTimeEvent((int)45077, (float)33.0);
	SetTimeEvent((int)45075, (float)41.0);
	var_4779_object = Obj(); var_4780_object = Obj();
	var_4781_object = GlobalVars[16];
	var_4781_object = var_4779_object;
	var_4782_object = GlobalVars[16];
	var_4782_object = var_4780_object;
	func_11713();
	var_4793_object = Obj(); var_4794_object = Obj();
	var_4795_object = GlobalVars[16];
	var_4795_object = var_4793_object;
	var_4796_object = GlobalVars[16];
	var_4796_object = var_4794_object;
	func_11727();
	var_4799_object = Obj(); var_4800_object = Obj();
	var_4801_object = GlobalVars[16];
	var_4801_object = var_4799_object;
	var_4802_object = GlobalVars[16];
	var_4802_object = var_4800_object;
	func_10574();
	var_4805_object = Obj(); var_4806_object = Obj();
	var_4807_object = GlobalVars[16];
	var_4807_object = var_4805_object;
	var_4808_object = GlobalVars[16];
	var_4808_object = var_4806_object;
	func_10442();
	var_4811_object = Obj(); var_4812_object = Obj();
	var_4813_object = GlobalVars[16];
	var_4813_object = var_4811_object;
	var_4814_object = GlobalVars[16];
	var_4814_object = var_4812_object;
	func_10456();
	var_4826_object = Obj(); var_4827_object = Obj();
	var_4828_object = GlobalVars[16];
	var_4828_object = var_4826_object;
	var_4829_object = GlobalVars[16];
	var_4829_object = var_4827_object;
	func_10470();
	var_4832_object = Obj(); var_4833_object = Obj();
	var_4834_object = GlobalVars[16];
	var_4834_object = var_4832_object;
	var_4835_object = GlobalVars[16];
	var_4835_object = var_4833_object;
	func_10484();
	var_4838_object = Obj(); var_4839_object = Obj();
	var_4840_object = GlobalVars[16];
	var_4840_object = var_4838_object;
	var_4841_object = GlobalVars[16];
	var_4841_object = var_4839_object;
	func_10498();
	var_4842_object = Obj(); var_4843_object = Obj();
	var_4844_object = GlobalVars[16];
	var_4844_object = var_4842_object;
	var_4845_object = GlobalVars[16];
	var_4845_object = var_4843_object;
	func_10502();
	var_4848_object = Obj(); var_4849_object = Obj();
	var_4850_object = GlobalVars[16];
	var_4850_object = var_4848_object;
	var_4851_object = GlobalVars[16];
	var_4851_object = var_4849_object;
	func_10516();
	var_4866_object = Obj(); var_4867_object = Obj();
	var_4868_object = GlobalVars[16];
	var_4868_object = var_4866_object;
	var_4869_object = GlobalVars[16];
	var_4869_object = var_4867_object;
	func_10532();
	var_4872_object = Obj(); var_4873_object = Obj();
	var_4874_object = GlobalVars[16];
	var_4874_object = var_4872_object;
	var_4875_object = GlobalVars[16];
	var_4875_object = var_4873_object;
	func_11669();
	var_4878_object = Obj(); var_4879_object = Obj();
	var_4880_object = GlobalVars[16];
	var_4880_object = var_4878_object;
	var_4881_object = GlobalVars[16];
	var_4881_object = var_4879_object;
	func_11446();
	var_4905_object = Obj(); var_4906_object = Obj();
	var_4907_object = GlobalVars[16];
	var_4907_object = var_4905_object;
	var_4908_object = GlobalVars[16];
	var_4908_object = var_4906_object;
	func_11699();
	var_4911_object = Obj(); var_4912_object = Obj();
	var_4913_object = GlobalVars[16];
	var_4913_object = var_4911_object;
	var_4914_object = GlobalVars[16];
	var_4914_object = var_4912_object;
	func_10560();
	var_4917_object = Obj(); var_4918_object = Obj();
	var_4919_object = GlobalVars[16];
	var_4919_object = var_4917_object;
	var_4920_object = GlobalVars[16];
	var_4920_object = var_4918_object;
	func_11551();
	var_4923_object = Obj(); var_4924_object = Obj();
	var_4925_object = GlobalVars[16];
	var_4925_object = var_4923_object;
	var_4926_object = GlobalVars[16];
	var_4926_object = var_4924_object;
	func_10567();
	var_4929_object = Obj(); var_4930_object = Obj();
	var_4931_object = GlobalVars[16];
	var_4931_object = var_4929_object;
	var_4932_object = GlobalVars[16];
	var_4932_object = var_4930_object;
	func_11558();
	var_4935_object = Obj(); var_4936_object = Obj();
	var_4937_object = GlobalVars[16];
	var_4937_object = var_4935_object;
	var_4938_object = GlobalVars[16];
	var_4938_object = var_4936_object;
	func_11565();
	var_4941_object = Obj(); var_4942_object = Obj();
	var_4943_object = GlobalVars[16];
	var_4943_object = var_4941_object;
	var_4944_object = GlobalVars[16];
	var_4944_object = var_4942_object;
	func_11692();
	var_4947_int = 0; var_4948_float = 0;
	var_4580_float = var_4948_float;
	func_10010(var_4947_int, var_4948_float);
	var_4956_object = Obj(); var_4957_string = "";
	func_111(var_4956_object, "volonteers_burah");
	var_4964_object = Obj(); var_4965_string = "";
	func_111(var_4964_object, "quest_b1_01");
	var_4966_object = Obj(); var_4967_string = "";
	func_111(var_4966_object, "quest_b1_05");
	SetTimeEvent((int)45058, (float)24.0);
	SetTimeEvent((int)45060, (float)72.0);
	SetTimeEvent((int)45065, (float)96.0);
	SetTimeEvent((int)45061, (float)144.0);
	SetTimeEvent((int)45067, (float)55.25);
	SetTimeEvent((int)45068, (float)11.0);
	SetTimeEvent((int)45062, (float)192.0);
	SetTimeEvent((int)45069, (float)72.0);
	SetTimeEvent((int)45066, (float)120.0);
	SetTimeEvent((int)45074, (float)48.0);
	return 0;
}


func_9794(var_5956_int, var_5957_float)
{
	var_5958_int = 0; var_5959_int = 0; var_5960_int = 0; var_5961_float = 0;
	var_5957_float = var_5961_float;
	func_12278(var_5958_int, (int)530556, (int)530555, var_5961_float);
	var_5958_int = var_5956_int;
	return 0;
}


func_11844(var_5222_bool)
{
	var_5225_int = 0; var_5226_string = "";
	func_106(var_5225_int, "b4NotkinMapVisit");
	var_5228_bool = var_5225_int != (int)0;
	if(var_5228_bool != 0) {
		var_5222_bool = 1;
		return 0;
	}
	var_5222_bool = 0;
	return 0;
}


func_8773()
{
	var_4489_object = Obj(); var_4490_int = 0; var_4491_int = 0; var_4492_object = Obj(); var_4493_bool = 0; var_4494_cvector = CVector(0,0,0); var_4495_cvector = CVector(0,0,0); var_4496_string = ""; var_4497_object = Obj(); var_4498_int = 0; var_4499_int = 0; var_4500_object = Obj(); var_4501_bool = 0; var_4502_cvector = CVector(0,0,0); var_4503_cvector = CVector(0,0,0); var_4504_string = "";
	GetMainOutdoorScene(var_4497_object);
	var_4505_object = GlobalVars[7];
	@@var_4505_object:size(var_4498_int);
	var_4499_int = 0;
	
Label_8780:
	var_4506_bool = var_4499_int < var_4498_int;
	if(var_4506_bool != 0) {
		var_4507_object = GlobalVars[7];
		@@var_4507_object:get(var_4500_object, var_4499_int);
		var_4508_object = var_4500_object;
		if(var_4508_object != 0) {
		} else {
			var_4512_int = var_4499_int + (int)1;
			var_4513_int = "pt_grave_supply" + var_4512_int;
			@@var_4497_object:GetLocator(var_4513_int, var_4501_bool, var_4502_cvector, var_4503_cvector);
			var_4514_bool = var_4501_bool == 0; //@nz
			if(var_4514_bool != 0) {
				Trace("Grave supply point not found");
				goto Label_8817;
			}
			RandOneOf(var_4504_string, (int)1, (int)1, "bread", "milk");
			var_4522_int = "item_" + var_4504_string;
			var_4524_int = var_4522_int + "_stat.xml";
			@@var_4497_object:AddStationaryActorByType(var_4500_object, var_4502_cvector, var_4503_cvector, "scripted", var_4524_int);
			var_4525_object = GlobalVars[7];
			@@var_4525_object:set(var_4499_int, var_4500_object);
			var_4500_object = 0;
	}
		var_4499_int = var_4499_int + (int)1;
		goto Label_8780;
	}
	return 16;
	
}
EMIT "Stack[-8] = 0";


func_6729(var_2933_int, var_2934_int, var_2935_object, var_2936_object, var_2937_object, var_2938_object)
{
	var_2940_bool = var_2934_int == (int)0;
	if(var_2940_bool != 0) {
		var_2941_int = 0; var_2942_bool = 0;
		func_746((int)12, (bool)1);
		var_2943_int = 0; var_2944_bool = 0; var_2945_int = 0;
		func_763((int)12, (bool)1, (int)1);
		var_2946_int = 0; var_2947_int = 0; var_2948_object = Obj(); var_2949_object = Obj(); var_2950_object = Obj();
		var_2933_int = var_2947_int;
		var_2935_object = var_2948_object;
		var_2936_object = var_2949_object;
		var_2937_object = var_2950_object;
		func_591((int)12, var_2947_int, var_2948_object, var_2949_object, var_2950_object);
		var_2951_object = Obj(); var_2952_int = 0;
		var_2938_object = var_2951_object;
		func_255(var_2951_object, (int)1);
		var_2953_int = 0; var_2954_bool = 0; var_2955_int = 0;
		func_820((int)12, (bool)1, (int)4);
		var_2956_int = 0; var_2957_bool = 0; var_2958_int = 0;
		func_882((int)12, (bool)0, (int)4);
	}
	var_2959_int = 0; var_2960_bool = 0;
	func_729((int)12, (bool)0);
	var_2961_int = 0; var_2962_int = 0; var_2963_int = 0;
	var_2933_int = var_2962_int;
	var_2934_int = var_2963_int;
	func_2714((int)12, var_2962_int, var_2963_int);
	return 0;
}


func_9803(var_5967_int, var_5968_float)
{
	var_5969_int = 0; var_5970_int = 0; var_5971_int = 0; var_5972_float = 0;
	var_5968_float = var_5972_float;
	func_12278(var_5969_int, (int)530558, (int)530557, var_5972_float);
	var_5969_int = var_5967_int;
	return 0;
}


func_5708(var_2662_int, var_2663_int, var_2664_object, var_2665_object, var_2666_object, var_2667_object)
{
	var_2669_bool = var_2663_int == (int)0;
	if(var_2669_bool != 0) {
		var_2670_int = 0; var_2671_bool = 0;
		func_746((int)7, (bool)1);
		var_2672_int = 0; var_2673_bool = 0; var_2674_int = 0;
		func_763((int)7, (bool)1, (int)1);
		var_2675_int = 0; var_2676_int = 0; var_2677_object = Obj(); var_2678_object = Obj(); var_2679_object = Obj();
		var_2662_int = var_2676_int;
		var_2664_object = var_2677_object;
		var_2665_object = var_2678_object;
		var_2666_object = var_2679_object;
		func_591((int)7, var_2676_int, var_2677_object, var_2678_object, var_2679_object);
		var_2680_object = Obj(); var_2681_int = 0;
		var_2667_object = var_2680_object;
		func_255(var_2680_object, (int)1);
		var_2682_int = 0; var_2683_bool = 0; var_2684_int = 0;
		func_820((int)7, (bool)1, (int)6);
		var_2685_int = 0; var_2686_bool = 0; var_2687_int = 0;
		func_882((int)7, (bool)0, (int)6);
	}
	var_2688_int = 0; var_2689_bool = 0;
	func_729((int)7, (bool)0);
	var_2690_int = 0; var_2691_int = 0; var_2692_int = 0;
	var_2662_int = var_2691_int;
	var_2663_int = var_2692_int;
	func_2714((int)7, var_2691_int, var_2692_int);
	return 0;
}


func_591(var_2018_int, var_2019_int, var_2020_object, var_2021_object, var_2022_object)
{
	var_2023_int = 0; var_2024_bool = 0;
	var_2018_int = var_2023_int;
	func_492(var_2023_int, (bool)0);
	var_2025_object = Obj();
	var_2020_object = var_2025_object;
	func_213(var_2025_object);
	var_2026_object = Obj();
	var_2021_object = var_2026_object;
	func_213(var_2026_object);
	var_2027_object = Obj();
	var_2022_object = var_2027_object;
	func_213(var_2027_object);
	var_2029_bool = var_2019_int < (int)8;
	if(var_2029_bool != 0) {
		var_2030_string = ""; var_2031_object = Obj(); var_2032_string = ""; var_2033_string = "";
		var_2036_int = var_2018_int + (int)1;
		var_2037_int = "pt_blockpost" + var_2036_int;
		var_2030_string = var_2037_int + "_1_";
		var_2020_object = var_2031_object;
		func_526(var_2030_string, var_2031_object, "pers_patrool", "patrol_stat.xml");
		var_2056_string = ""; var_2057_object = Obj();
		var_2060_int = var_2018_int + (int)1;
		var_2061_int = "pt_fog" + var_2060_int;
		var_2056_string = var_2061_int + "_";
		var_2022_object = var_2057_object;
		func_548(var_2056_string, var_2057_object);
	} else {
		var_2083_string = ""; var_2084_object = Obj(); var_2085_string = ""; var_2086_string = "";
		var_2089_int = var_2018_int + (int)1;
		var_2090_int = "pt_blockpost" + var_2089_int;
		var_2083_string = var_2090_int + "_1_";
		var_2020_object = var_2084_object;
		func_526(var_2083_string, var_2084_object, "pers_soldat", "soldier.xml");
		var_2092_string = ""; var_2093_object = Obj(); var_2094_string = ""; var_2095_string = "";
		var_2098_int = var_2018_int + (int)1;
		var_2099_int = "pt_blockpost" + var_2098_int;
		var_2092_string = var_2099_int + "_2_";
		var_2021_object = var_2093_object;
		func_526(var_2092_string, var_2093_object, "pers_sanitar", "sanitar_stat.xml");
		var_2101_string = ""; var_2102_object = Obj();
		var_2105_int = var_2018_int + (int)1;
		var_2106_int = "pt_fog" + var_2105_int;
		var_2101_string = var_2106_int + "_";
		var_2022_object = var_2102_object;
		func_548(var_2101_string, var_2102_object);
	}
	return 0;
	
}


func_11856(var_5300_bool)
{
	var_5303_int = 0; var_5304_string = "";
	func_106(var_5303_int, "b6q01");
	var_5306_bool = var_5303_int == (int)0;
	if(var_5306_bool != 0) {
		var_5300_bool = 1;
		return 0;
	}
	var_5300_bool = 0;
	return 0;
}


func_4690(var_78_object)
{
	@@var_78_object:add("dt_house1_union2_05l");
	@@var_78_object:add("dt_house1_union2_05r");
	@@var_78_object:add("dt_house2_01");
	@@var_78_object:add("dt_house2_02");
	@@var_78_object:add("dt_house2_03");
	@@var_78_object:add("dt_house2_04");
	@@var_78_object:add("dt_house2_05");
	@@var_78_object:add("dt_house3_10_i2");
	@@var_78_object:add("dt_house3_10");
	@@var_78_object:add("dt_house3_11_i2");
	@@var_78_object:add("dt_house3_11");
	@@var_78_object:add("dt_house3_12_i2");
	@@var_78_object:add("dt_house3_12");
	@@var_78_object:add("dt_house_1_06");
	@@var_78_object:add("dt_house3_07_i2");
	@@var_78_object:add("dt_house3_07");
	return 0;
}


func_9812(var_5882_int, var_5883_float)
{
	var_5884_int = 0; var_5885_int = 0; var_5886_int = 0; var_5887_float = 0;
	var_5883_float = var_5887_float;
	func_12278(var_5884_int, (int)530560, (int)530559, var_5887_float);
	var_5884_int = var_5882_int;
	return 0;
}


func_11868(var_5900_bool)
{
	var_5903_int = 0; var_5904_string = "";
	func_106(var_5903_int, "b9q03AglajaTalk");
	var_5906_bool = var_5903_int != (int)0;
	if(var_5906_bool != 0) {
		var_5900_bool = 1;
		return 0;
	}
	var_5900_bool = 0;
	return 0;
}


func_9821(var_5945_int, var_5946_float)
{
	var_5947_int = 0; var_5948_int = 0; var_5949_int = 0; var_5950_float = 0;
	var_5946_float = var_5950_float;
	func_12278(var_5947_int, (int)530562, (int)530561, var_5950_float);
	var_5947_int = var_5945_int;
	return 0;
}


func_9830(var_5551_int, var_5552_float)
{
	var_5553_int = 0; var_5554_int = 0; var_5555_int = 0; var_5556_float = 0;
	var_5552_float = var_5556_float;
	func_12278(var_5553_int, (int)530564, (int)530563, var_5556_float);
	var_5553_int = var_5551_int;
	return 0;
}


func_11880(var_5908_bool)
{
	var_5911_int = 0; var_5912_string = "";
	func_106(var_5911_int, "b9q03");
	var_5914_bool = var_5911_int == (int)0;
	if(var_5914_bool != 0) {
		var_5908_bool = 1;
		return 0;
	}
	var_5908_bool = 0;
	return 0;
}


func_9839(var_5584_int, var_5585_float)
{
	var_5586_int = 0; var_5587_int = 0; var_5588_int = 0; var_5589_float = 0;
	var_5585_float = var_5589_float;
	func_12278(var_5586_int, (int)530566, (int)530565, var_5589_float);
	var_5586_int = var_5584_int;
	return 0;
}


func_7794()
{
	var_4572_int = 0; var_4573_int = 0; var_4574_object = Obj(); var_4575_int = 0; var_4576_int = 0; var_4577_object = Obj();
	Trace("Cleaning arena...");
	var_4579_object = GlobalVars[11];
	var_4580_bool = var_4579_object != 0; //@nn
	if(var_4580_bool != 0) {
		var_4581_object = GlobalVars[11];
		@@var_4581_object:Remove();
		var_4582_object = GlobalVars[12];
		@@var_4582_object:size(var_4575_int);
		var_4576_int = 0;

	Label_7808:
		var_4583_bool = var_4576_int < var_4575_int;
		if(var_4583_bool != 0) {
			var_4584_object = GlobalVars[12];
			@@var_4584_object:get(var_4577_object, var_4576_int);
			Trigger(var_4577_object, "remove");
			var_4577_object = 0;
			var_4576_int = var_4576_int + (int)1;
			goto Label_7808;
		}
		var_4587_object = GlobalVars[12];
		@@var_4587_object:clear();
		var_4588_bool = 0;
		func_7723((bool)0);
	}
	return 6;
}


func_11892(var_5915_bool)
{
	var_5918_int = 0; var_5919_string = "";
	func_106(var_5918_int, "b9q03BadInit");
	var_5921_bool = var_5918_int != (int)0;
	if(var_5921_bool != 0) {
		var_5915_bool = 1;
		return 0;
	}
	var_5915_bool = 0;
	return 0;
}


func_8822()
{
	var_4444_object = Obj(); var_4445_object = Obj(); var_4446_object = Obj(); var_4447_object = Obj();
	GetMainOutdoorScene(var_4446_object);
	AddScriptedActor(var_4447_object, "big_gun", "big_gun.bin", var_4446_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_4447_object, "vagon_martira", "big_gun.bin", var_4446_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_4447_object, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", var_4446_object, CVector(0.0, 0.0, 0.0));
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10871()
{
	var_6245_object = Obj(); var_6246_object = Obj(); var_6247_object = Obj(); var_6248_object = Obj();
	func_12286(Obj());
	var_6249_object = var_6247_object;
	@@var_6247_object:FindMark(var_6248_object, "b3q01BigVladGotoOspina");
	var_6251_object = var_6248_object;
	if(var_6251_object != 0) {
		@@var_6248_object:Remove();
	}
	@@var_6247_object:FindMark(var_6248_object, "b3q01ButcherGotoBigVlad");
	var_6253_object = var_6248_object;
	if(var_6253_object != 0) {
		@@var_6248_object:Remove();
	}
	@@var_6247_object:FindMark(var_6248_object, "b3q01OspinaGotoButcher");
	var_6255_object = var_6248_object;
	if(var_6255_object != 0) {
		@@var_6248_object:Remove();
	}
	@@var_6247_object:FindMark(var_6248_object, "b3q02GrifGotoDanko");
	var_6257_object = var_6248_object;
	if(var_6257_object != 0) {
		@@var_6248_object:Remove();
	}
	@@var_6247_object:FindMark(var_6248_object, "b3q02GrifGotoNotkin");
	var_6259_object = var_6248_object;
	if(var_6259_object != 0) {
		@@var_6248_object:Remove();
	}
	@@var_6247_object:FindMark(var_6248_object, "b3q02KapellaGotoNotkin");
	var_6261_object = var_6248_object;
	if(var_6261_object != 0) {
		@@var_6248_object:Remove();
	}
	@@var_6247_object:FindMark(var_6248_object, "b3q02NotkinGotoKapella");
	var_6263_object = var_6248_object;
	if(var_6263_object != 0) {
		@@var_6248_object:Remove();
	}
	@@var_6247_object:FindMark(var_6248_object, "b3q03BurahHome");
	var_6265_object = var_6248_object;
	if(var_6265_object != 0) {
		@@var_6248_object:Remove();
	}
	var_6266_bool = 0; var_6267_int = 0;
	func_12261(var_6266_bool, (int)221);
	var_6268_bool = 0; var_6269_int = 0;
	func_12261(var_6268_bool, (int)227);
	var_6270_bool = 0; var_6271_int = 0;
	func_12261(var_6270_bool, (int)235);
	var_6272_bool = 0; var_6273_int = 0;
	func_12261(var_6272_bool, (int)631);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_9848(var_5595_int, var_5596_float)
{
	var_5597_int = 0; var_5598_int = 0; var_5599_int = 0; var_5600_float = 0;
	var_5596_float = var_5600_float;
	func_12278(var_5597_int, (int)530568, (int)530567, var_5600_float);
	var_5597_int = var_5595_int;
	return 0;
}


func_6781(var_4063_int, var_4064_int, var_4065_object, var_4066_object, var_4067_object, var_4068_object)
{
	var_4070_bool = var_4064_int == (int)0;
	if(var_4070_bool != 0) {
		var_4071_int = 0; var_4072_bool = 0;
		func_746((int)12, (bool)0);
		var_4073_int = 0; var_4074_bool = 0; var_4075_int = 0;
		func_763((int)12, (bool)0, (int)1);
		var_4076_int = 0; var_4077_int = 0; var_4078_object = Obj(); var_4079_object = Obj(); var_4080_object = Obj();
		var_4063_int = var_4077_int;
		var_4065_object = var_4078_object;
		var_4066_object = var_4079_object;
		var_4067_object = var_4080_object;
		func_670((int)12, var_4077_int, var_4078_object, var_4079_object, var_4080_object);
		var_4081_object = Obj(); var_4082_int = 0;
		var_4068_object = var_4081_object;
		func_255(var_4081_object, (int)2);
		var_4083_int = 0; var_4084_bool = 0; var_4085_int = 0;
		func_820((int)12, (bool)0, (int)4);
		var_4086_int = 0; var_4087_bool = 0; var_4088_int = 0;
		func_882((int)12, (bool)1, (int)4);
	}
	var_4089_int = 0; var_4090_bool = 0;
	func_729((int)12, (bool)0);
	var_4091_int = 0; var_4092_int = 0; var_4093_int = 0;
	var_4063_int = var_4092_int;
	var_4064_int = var_4093_int;
	func_3609((int)12, var_4092_int, var_4093_int);
	return 0;
}


func_5760(var_3788_int, var_3789_int, var_3790_object, var_3791_object, var_3792_object, var_3793_object)
{
	var_3795_bool = var_3789_int == (int)0;
	if(var_3795_bool != 0) {
		var_3796_int = 0; var_3797_bool = 0;
		func_746((int)7, (bool)0);
		var_3798_int = 0; var_3799_bool = 0; var_3800_int = 0;
		func_763((int)7, (bool)0, (int)1);
		var_3801_int = 0; var_3802_int = 0; var_3803_object = Obj(); var_3804_object = Obj(); var_3805_object = Obj();
		var_3788_int = var_3802_int;
		var_3790_object = var_3803_object;
		var_3791_object = var_3804_object;
		var_3792_object = var_3805_object;
		func_670((int)7, var_3802_int, var_3803_object, var_3804_object, var_3805_object);
		var_3806_object = Obj(); var_3807_int = 0;
		var_3793_object = var_3806_object;
		func_255(var_3806_object, (int)2);
		var_3808_int = 0; var_3809_bool = 0; var_3810_int = 0;
		func_820((int)7, (bool)0, (int)6);
		var_3811_int = 0; var_3812_bool = 0; var_3813_int = 0;
		func_882((int)7, (bool)1, (int)6);
	}
	var_3814_int = 0; var_3815_bool = 0;
	func_729((int)7, (bool)0);
	var_3816_int = 0; var_3817_int = 0; var_3818_int = 0;
	var_3788_int = var_3817_int;
	var_3789_int = var_3818_int;
	func_3609((int)7, var_3817_int, var_3818_int);
	return 0;
}


func_9857(var_5820_int, var_5821_float)
{
	var_5822_int = 0; var_5823_int = 0; var_5824_int = 0; var_5825_float = 0;
	var_5821_float = var_5825_float;
	func_12278(var_5822_int, (int)529886, (int)529885, var_5825_float);
	var_5822_int = var_5820_int;
	return 0;
}


func_11904(var_5864_bool)
{
	var_5867_int = 0; var_5868_string = "";
	func_106(var_5867_int, "b11q04");
	var_5870_bool = var_5867_int == (int)0;
	if(var_5870_bool != 0) {
		var_5864_bool = 1;
		return 0;
	}
	var_5864_bool = 0;
	return 0;
}


func_4740(var_1029_int, var_1030_int, var_1031_object, var_1032_object, var_1033_object, var_1034_object)
{
	var_1036_bool = var_1030_int == (int)0;
	if(var_1036_bool != 0) {
		var_1037_int = 0; var_1038_bool = 0;
		func_746((int)2, (bool)0);
		var_1039_int = 0; var_1040_bool = 0; var_1041_int = 0;
		func_763((int)2, (bool)0, (int)1);
		var_1042_int = 0; var_1043_int = 0; var_1044_object = Obj(); var_1045_object = Obj(); var_1046_object = Obj();
		var_1042_int = 2;
		var_1029_int = var_1043_int;
		var_1031_object = var_1044_object;
		var_1032_object = var_1045_object;
		var_1033_object = var_1046_object;
		func_572(var_1043_int, var_1044_object, var_1045_object, var_1046_object);
		var_1047_object = Obj(); var_1048_int = 0;
		var_1034_object = var_1047_object;
		func_255(var_1047_object, (int)0);
		var_1049_int = 0; var_1050_bool = 0; var_1051_int = 0;
		func_820((int)2, (bool)0, (int)5);
		var_1052_int = 0; var_1053_bool = 0; var_1054_int = 0;
		func_882((int)2, (bool)0, (int)5);
	}
	var_1055_int = 0; var_1056_int = 0;
	var_1030_int = var_1056_int;
	func_1000((int)2, var_1056_int);
	var_1057_int = 0; var_1058_int = 0; var_1059_int = 0;
	var_1029_int = var_1058_int;
	var_1030_int = var_1059_int;
	func_1847((int)2, var_1058_int, var_1059_int);
	return 0;
}


func_9866(var_5120_int, var_5121_float)
{
	var_5122_int = 0; var_5123_int = 0; var_5124_int = 0; var_5125_float = 0;
	var_5121_float = var_5125_float;
	func_12278(var_5122_int, (int)521908, (int)521907, var_5125_float);
	var_5122_int = var_5120_int;
	return 0;
}


func_8843(var_2_bool, var_3_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_float = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_float = 0; var_15_int = 0; var_16_int = 0;
	var_17_bool = 0;
	var_17_bool = 0;
	var_19_bool = var_3_int > (int)16384;
	if(var_19_bool != 0) {
		var_21_bool = var_3_int < (int)16396;
		if(var_21_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_11_int = var_3_int - (int)16384;
		var_23_int = 0;
		var_11_int = var_23_int;
		func_14686(var_23_int);
		var_2_bool = 1;
		return 12;
	}
	var_199_bool = 0;
	var_199_bool = 0;
	var_201_bool = var_3_int > (int)32768;
	if(var_201_bool != 0) {
		var_203_bool = var_3_int < (int)33056;
		if(var_203_bool != 0) {
			var_199_bool = 1;
		}
	}
	if(var_199_bool != 0) {
		var_205_int = var_3_int - (int)32768;
		var_12_int = var_205_int / (int)24;
		var_208_int = var_3_int - (int)32768;
		var_13_int = var_208_int % (int)24;
		GetGameTime(var_14_float);
		var_15_int = var_14_float / (int)24;
		var_14_float = var_16_int;
		var_16_int = var_16_int % (int)24;
		var_212_int = 0; var_213_int = 0; var_214_int = 0; var_215_int = 0;
		var_12_int = var_212_int;
		var_13_int = var_213_int;
		var_15_int = var_214_int;
		var_16_int = var_215_int;
		func_8981(var_212_int, var_213_int, var_214_int, var_215_int);
		var_2_bool = 1;
		return 12;
	}
	var_2_bool = 0;
	return 12;
}


func_11916(var_5484_bool)
{
	var_5487_int = 0; var_5488_string = "";
	func_106(var_5487_int, "b3KapellaVisit");
	var_5490_bool = var_5487_int != (int)0;
	if(var_5490_bool != 0) {
		var_5484_bool = 1;
		return 0;
	}
	var_5484_bool = 0;
	return 0;
}


func_9875(var_5611_int, var_5612_float)
{
	var_5613_int = 0; var_5614_int = 0; var_5615_int = 0; var_5616_float = 0;
	var_5612_float = var_5616_float;
	func_12278(var_5613_int, (int)530492, (int)530491, var_5616_float);
	var_5613_int = var_5611_int;
	return 0;
}


func_7828()
{
	var_322_object = Obj(); var_323_int = 0; var_324_object = Obj(); var_325_int = 0;
	GetMainOutdoorScene(var_324_object);
	var_325_int = 1;
	
Label_7832:
	var_327_bool = var_325_int <= (int)17;
	if(var_327_bool != 0) {
		var_328_object = GlobalVars[15];
		var_329_object = Obj(); var_330_object = Obj(); var_331_string = ""; var_332_string = ""; var_333_string = "";
		var_324_object = var_330_object;
		var_331_string = "pt_bull" + var_325_int;
		func_133(var_329_object, var_330_object, var_331_string, "pers_bull", "bull.xml");
		@@var_328_object:add(var_329_object);
		var_325_int = var_325_int + (int)1;
		goto Label_7832;
	}
	return 4;
}
EMIT "Stack[-2] = 0";


func_11928(var_5721_bool)
{
	var_5724_int = 0; var_5725_string = "";
	func_106(var_5724_int, "b8GeorgVisit");
	var_5727_bool = var_5724_int != (int)0;
	if(var_5727_bool != 0) {
		var_5721_bool = 1;
		return 0;
	}
	var_5721_bool = 0;
	return 0;
}


func_2714(var_2690_int, var_2691_int, var_2692_int)
{
	var_2693_int = 0; var_2694_int = 0; var_2695_int = 0; var_2696_int = 0;
	var_2697_bool = 0;
	var_2697_bool = 0;
	var_2699_bool = var_2692_int > (int)8;
	if(var_2699_bool != 0) {
		var_2701_bool = var_2692_int < (int)21;
		if(var_2701_bool != 0) {
			var_2697_bool = 1;
		}
	}
	if(var_2697_bool != 0) {
		var_2702_int = 0; var_2703_string = ""; var_2704_string = ""; var_2705_int = 0;
		var_2690_int = var_2702_int;
		func_453(var_2702_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)6);
		var_2706_int = 0; var_2707_string = ""; var_2708_string = ""; var_2709_int = 0;
		var_2690_int = var_2706_int;
		func_453(var_2706_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_2710_int = 0; var_2711_string = ""; var_2712_string = ""; var_2713_int = 0;
		var_2690_int = var_2710_int;
		func_453(var_2710_int, "pers_rat_big", "rat_big.xml", (int)2);
		var_2714_int = 0; var_2715_string = ""; var_2716_string = ""; var_2717_int = 0;
		var_2690_int = var_2714_int;
		func_479(var_2714_int, "fog", "fog.xml", (int)6);
		var_2719_bool = var_2691_int >= (int)5;
		if(var_2719_bool != 0) {
			var_2720_int = 0; var_2721_string = ""; var_2722_string = ""; var_2723_int = 0;
			var_2690_int = var_2720_int;
			func_479(var_2720_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2725_float = 0; var_2726_int = 0;
		var_2691_int = var_2726_int;
		func_1205(var_2725_float, var_2726_int);
		var_2695_int = (int)1 * var_2725_float;
		var_2727_int = var_2695_int;
		if(var_2727_int != 0) {
			var_2728_int = 0; var_2729_string = ""; var_2730_string = ""; var_2731_int = 0;
			var_2690_int = var_2728_int;
			var_2695_int = var_2731_int;
			func_453(var_2728_int, "pers_bomber", "bomber.xml", var_2731_int);
		}
	} else {
		var_2769_int = 0; var_2770_string = ""; var_2771_string = ""; var_2772_int = 0;
		var_2690_int = var_2769_int;
		func_453(var_2769_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)4);
		var_2773_int = 0; var_2774_string = ""; var_2775_string = ""; var_2776_int = 0;
		var_2690_int = var_2773_int;
		func_453(var_2773_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)4);
		var_2777_int = 0; var_2778_string = ""; var_2779_string = ""; var_2780_int = 0;
		var_2690_int = var_2777_int;
		func_453(var_2777_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_2781_int = 0; var_2782_string = ""; var_2783_string = ""; var_2784_int = 0;
		var_2690_int = var_2781_int;
		func_479(var_2781_int, "fog", "fog.xml", (int)6);
		var_2786_bool = var_2691_int >= (int)5;
		if(var_2786_bool != 0) {
			var_2787_int = 0; var_2788_string = ""; var_2789_string = ""; var_2790_int = 0;
			var_2690_int = var_2787_int;
			func_479(var_2787_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2792_float = 0; var_2793_int = 0;
		var_2691_int = var_2793_int;
		func_1205(var_2792_float, var_2793_int);
		var_2696_int = (int)1 * var_2792_float;
		var_2794_int = var_2696_int;
		if(var_2794_int == 0) goto Label_2832;
		var_2795_int = 0; var_2796_string = ""; var_2797_string = ""; var_2798_int = 0;
		var_2690_int = var_2795_int;
		var_2696_int = var_2798_int;
		func_453(var_2795_int, "pers_bomber", "bomber.xml", var_2798_int);
	}
Label_2832:
	var_2732_int = 0; var_2733_string = ""; var_2734_string = ""; var_2735_int = 0; var_2736_int = 0; var_2737_int = 0;
	var_2690_int = var_2732_int;
	func_466(var_2732_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2738_int = 0; var_2739_string = ""; var_2740_string = ""; var_2741_int = 0; var_2742_int = 0; var_2743_int = 0;
	var_2690_int = var_2738_int;
	func_466(var_2738_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2744_int = 0; var_2745_string = ""; var_2746_string = ""; var_2747_int = 0; var_2748_int = 0; var_2749_int = 0;
	var_2690_int = var_2744_int;
	func_466(var_2744_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2750_int = 0; var_2751_string = ""; var_2752_string = ""; var_2753_int = 0; var_2754_int = 0; var_2755_int = 0;
	var_2690_int = var_2750_int;
	func_466(var_2750_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2756_bool = 0; var_2757_int = 0; var_2758_int = 0;
	var_2691_int = var_2757_int;
	var_2692_int = var_2758_int;
	func_1295(var_2756_bool, var_2757_int, var_2758_int);
	if(var_2756_bool != 0) {
		var_2759_int = 0; var_2760_string = ""; var_2761_string = ""; var_2762_int = 0;
		var_2690_int = var_2759_int;
		func_453(var_2759_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_2763_bool = 0; var_2764_int = 0;
	var_2691_int = var_2764_int;
	func_1322(var_2763_bool, var_2764_int);
	if(var_2763_bool != 0) {
		var_2765_int = 0; var_2766_string = ""; var_2767_string = ""; var_2768_int = 0;
		var_2690_int = var_2765_int;
		func_453(var_2765_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 4;
	
}


func_9884(var_5562_int, var_5563_float)
{
	var_5564_int = 0; var_5565_int = 0; var_5566_int = 0; var_5567_float = 0;
	var_5563_float = var_5567_float;
	func_12278(var_5564_int, (int)530570, (int)530569, var_5567_float);
	var_5564_int = var_5562_int;
	return 0;
}


func_670(var_3199_int, var_3200_int, var_3201_object, var_3202_object, var_3203_object)
{
	var_3204_int = 0; var_3205_bool = 0;
	var_3199_int = var_3204_int;
	func_492(var_3204_int, (bool)0);
	var_3206_object = Obj();
	var_3201_object = var_3206_object;
	func_213(var_3206_object);
	var_3207_object = Obj();
	var_3202_object = var_3207_object;
	func_213(var_3207_object);
	var_3208_object = Obj();
	var_3203_object = var_3208_object;
	func_213(var_3208_object);
	var_3210_bool = var_3200_int < (int)8;
	if(var_3210_bool != 0) {
		var_3211_string = ""; var_3212_object = Obj(); var_3213_string = ""; var_3214_string = "";
		var_3217_int = var_3199_int + (int)1;
		var_3218_int = "pt_blockpost" + var_3217_int;
		var_3211_string = var_3218_int + "_1_";
		var_3201_object = var_3212_object;
		func_526(var_3211_string, var_3212_object, "pers_patrool", "patrol_stat.xml");
	} else {
		var_3220_string = ""; var_3221_object = Obj(); var_3222_string = ""; var_3223_string = "";
		var_3226_int = var_3199_int + (int)1;
		var_3227_int = "pt_blockpost" + var_3226_int;
		var_3220_string = var_3227_int + "_1_";
		var_3201_object = var_3221_object;
		func_526(var_3220_string, var_3221_object, "pers_soldat", "soldier.xml");
		var_3229_string = ""; var_3230_object = Obj(); var_3231_string = ""; var_3232_string = "";
		var_3235_int = var_3199_int + (int)1;
		var_3236_int = "pt_blockpost" + var_3235_int;
		var_3229_string = var_3236_int + "_2_";
		var_3202_object = var_3230_object;
		func_526(var_3229_string, var_3230_object, "pers_sanitar", "sanitar_stat.xml");
	}
	return 0;
	
}


func_11940(var_5603_bool)
{
	var_5606_int = 0; var_5607_string = "";
	func_106(var_5606_int, "b10MatVisit");
	var_5609_bool = var_5606_int != (int)0;
	if(var_5609_bool != 0) {
		var_5603_bool = 1;
		return 0;
	}
	var_5603_bool = 0;
	return 0;
}


func_9893(var_5890_int, var_5891_float)
{
	var_5892_int = 0; var_5893_int = 0; var_5894_int = 0; var_5895_float = 0;
	var_5891_float = var_5895_float;
	func_12278(var_5892_int, (int)529890, (int)529889, var_5895_float);
	var_5892_int = var_5890_int;
	return 0;
}


func_7851()
{
	var_4486_object = Obj();
	var_4487_object = GlobalVars[15];
	var_4487_object = var_4486_object;
	func_213(var_4486_object);
	return 0;
}


func_9902(var_5836_int, var_5837_float)
{
	var_5838_int = 0; var_5839_int = 0; var_5840_int = 0; var_5841_float = 0;
	var_5837_float = var_5841_float;
	func_12278(var_5838_int, (int)529894, (int)529893, var_5841_float);
	var_5838_int = var_5836_int;
	return 0;
}


func_11952(var_5619_bool)
{
	var_5622_int = 0; var_5623_string = "";
	func_106(var_5622_int, "b6ViktorVisit");
	var_5625_bool = var_5622_int != (int)0;
	if(var_5625_bool != 0) {
		var_5619_bool = 1;
		return 0;
	}
	var_5619_bool = 0;
	return 0;
}


func_6833(var_280_object)
{
	@@var_280_object:add("r7_house2_01");
	@@var_280_object:add("r7_house2_02");
	@@var_280_object:add("r7_house2_03");
	@@var_280_object:add("r7_house2_04");
	@@var_280_object:add("r7_house3_03_i2");
	@@var_280_object:add("r7_house3_03");
	@@var_280_object:add("r7_house3_04_i2");
	@@var_280_object:add("r7_house3_04");
	@@var_280_object:add("r7_house3_05_i2");
	@@var_280_object:add("r7_house3_05");
	@@var_280_object:add("r7_house3_06_i2");
	@@var_280_object:add("r7_house3_01_i2");
	@@var_280_object:add("r7_house3_01");
	@@var_280_object:add("r7_house3_02_i2");
	@@var_280_object:add("r7_house3_02");
	return 0;
}


func_7858()
{
	var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj();
	var_39_object = GlobalVars[15];
	func_100(Obj());
	var_40_object = var_39_object;
	GlobalVars[15] = var_39_object;
	var_43_object = GlobalVars[13];
	func_100(Obj());
	var_44_object = var_43_object;
	GlobalVars[13] = var_43_object;
	var_45_object = GlobalVars[8];
	func_100(Obj());
	var_46_object = var_45_object;
	GlobalVars[8] = var_45_object;
	var_47_object = GlobalVars[9];
	func_100(Obj());
	var_48_object = var_47_object;
	GlobalVars[9] = var_47_object;
	var_49_object = GlobalVars[10];
	func_100(Obj());
	var_50_object = var_49_object;
	GlobalVars[10] = var_49_object;
	var_29_int = 0;
	
Label_7890:
	var_52_bool = var_29_int < (int)16;
	if(var_52_bool != 0) {
		var_53_object = GlobalVars[8];
		var_54_object = Obj();
		func_100(var_54_object);
		@@var_53_object:add(var_54_object);
		var_55_object = GlobalVars[9];
		var_56_object = Obj();
		func_100(var_56_object);
		@@var_55_object:add(var_56_object);
		var_57_object = GlobalVars[10];
		var_58_object = Obj();
		func_100(var_58_object);
		@@var_57_object:add(var_58_object);
		var_29_int = var_29_int + (int)1;
		goto Label_7890;
	}
	CreateStringVector(var_30_object);
	var_60_object = GlobalVars[13];
	@@var_60_object:add(var_30_object);
	var_30_object = Obj();
	func_4335();
	CreateStringVector(var_30_object);
	var_62_object = GlobalVars[13];
	@@var_62_object:add(var_30_object);
	var_63_object = Obj();
	var_30_object = var_63_object;
	func_4493(var_63_object);
	CreateStringVector(var_30_object);
	var_77_object = GlobalVars[13];
	@@var_77_object:add(var_30_object);
	var_78_object = Obj();
	var_30_object = var_78_object;
	func_4690(var_78_object);
	CreateStringVector(var_30_object);
	var_95_object = GlobalVars[13];
	@@var_95_object:add(var_30_object);
	var_96_object = Obj();
	var_30_object = var_96_object;
	func_4896(var_96_object);
	CreateStringVector(var_30_object);
	var_121_object = GlobalVars[13];
	@@var_121_object:add(var_30_object);
	var_122_object = Obj();
	var_30_object = var_122_object;
	func_5126(var_122_object);
	CreateStringVector(var_30_object);
	var_143_object = GlobalVars[13];
	@@var_143_object:add(var_30_object);
	var_144_object = Obj();
	var_30_object = var_144_object;
	func_5344(var_144_object);
	CreateStringVector(var_30_object);
	var_174_object = GlobalVars[13];
	@@var_174_object:add(var_30_object);
	var_30_object = Obj();
	func_5589();
	CreateStringVector(var_30_object);
	var_176_object = GlobalVars[13];
	@@var_176_object:add(var_30_object);
	var_177_object = Obj();
	var_30_object = var_177_object;
	func_5612(var_177_object);
	CreateStringVector(var_30_object);
	var_192_object = GlobalVars[13];
	@@var_192_object:add(var_30_object);
	var_193_object = Obj();
	var_30_object = var_193_object;
	func_5812(var_193_object);
	CreateStringVector(var_30_object);
	var_208_object = GlobalVars[13];
	@@var_208_object:add(var_30_object);
	var_209_object = Obj();
	var_30_object = var_209_object;
	func_6012(var_209_object);
	CreateStringVector(var_30_object);
	var_225_object = GlobalVars[13];
	@@var_225_object:add(var_30_object);
	var_226_object = Obj();
	var_30_object = var_226_object;
	func_6215(var_226_object);
	CreateStringVector(var_30_object);
	var_244_object = GlobalVars[13];
	@@var_244_object:add(var_30_object);
	var_245_object = Obj();
	var_30_object = var_245_object;
	func_6424(var_245_object);
	CreateStringVector(var_30_object);
	var_264_object = GlobalVars[13];
	@@var_264_object:add(var_30_object);
	var_265_object = Obj();
	var_30_object = var_265_object;
	func_6636(var_265_object);
	CreateStringVector(var_30_object);
	var_279_object = GlobalVars[13];
	@@var_279_object:add(var_30_object);
	var_280_object = Obj();
	var_30_object = var_280_object;
	func_6833(var_280_object);
	CreateStringVector(var_30_object);
	var_296_object = GlobalVars[13];
	@@var_296_object:add(var_30_object);
	var_297_object = Obj();
	var_30_object = var_297_object;
	func_7036(var_297_object);
	CreateStringVector(var_30_object);
	var_312_object = GlobalVars[13];
	@@var_312_object:add(var_30_object);
	var_313_object = Obj();
	var_30_object = var_313_object;
	func_7236(var_313_object);
	func_7828();
	GetMainOutdoorScene(var_31_object);
	var_349_object = GlobalVars[6];
	func_100(Obj());
	var_350_object = var_349_object;
	GlobalVars[6] = var_349_object;
	var_32_int = 0;
	
Label_8070:
	var_353_int = var_32_int + (int)1;
	var_354_int = "pt_plant" + var_353_int;
	@@var_31_object:GetLocator(var_354_int, var_33_bool);
	var_355_bool = var_33_bool == 0; //@nz
	if(var_355_bool != 0) {
	} else {
				var_32_int = var_32_int + (int)1;
				goto Label_8070;
	}
	var_356_object = GlobalVars[6];
	@@var_356_object:resize(var_32_int);
	var_358_int = "Total plants: " + var_32_int;
	Trace(var_358_int);
	var_359_object = GlobalVars[7];
	func_100(Obj());
	var_360_object = var_359_object;
	GlobalVars[7] = var_359_object;
	var_34_int = 0;
	
Label_8096:
	var_363_int = var_34_int + (int)1;
	var_364_int = "pt_grave_supply" + var_363_int;
	@@var_31_object:GetLocator(var_364_int, var_35_bool);
	var_365_bool = var_35_bool == 0; //@nz
	if(var_365_bool != 0) {
	} else {
			var_34_int = var_34_int + (int)1;
			goto Label_8096;

	}
	var_366_object = GlobalVars[7];
	@@var_366_object:resize(var_34_int);
	var_368_int = "Total grave supplies: " + var_34_int;
	Trace(var_368_int);
	var_369_object = GlobalVars[14];
	func_100(Obj());
	var_370_object = var_369_object;
	GlobalVars[14] = var_369_object;
	
Label_8122:
	var_373_int = (int)0 + (int)1;
	var_374_int = "pt_bonfire" + var_373_int;
	@@var_31_object:GetLocator(var_374_int, var_37_bool);
	var_375_bool = var_37_bool == 0; //@nz
	if(var_375_bool != 0) {
	} else {
		var_378_object = GlobalVars[14];
		@@var_378_object:add(Obj());
		var_379_int = 0;
		var_36_int = var_379_int;
		func_7635(var_379_int);
		var_38_object = 0;
		var_36_int = var_36_int + (int)1;
		goto Label_8122;

	}
	var_377_int = "Total bonfires: " + var_36_int;
	Trace(var_377_int);
	return 20;
	
}
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


func_5812(var_193_object)
{
	@@var_193_object:add("r2_house_2_01");
	@@var_193_object:add("r2_house_2_02");
	@@var_193_object:add("r2_house_2_03");
	@@var_193_object:add("r2_house7_02");
	@@var_193_object:add("r2_house01_01");
	@@var_193_object:add("r2_house7_01");
	@@var_193_object:add("r2_house3_01_i2");
	@@var_193_object:add("r2_house3_01");
	@@var_193_object:add("r2_house3_02_i2");
	@@var_193_object:add("r2_house3_02");
	@@var_193_object:add("r2_house3_03_i2");
	@@var_193_object:add("r2_house3_03");
	@@var_193_object:add("r3_house7_01");
	@@var_193_object:add("r3_house7_02");
	return 0;
}


func_9911(var_5975_int, var_5976_float)
{
	var_5977_int = 0; var_5978_int = 0; var_5979_int = 0; var_5980_float = 0;
	var_5976_float = var_5980_float;
	func_12278(var_5977_int, (int)529888, (int)529887, var_5980_float);
	var_5977_int = var_5975_int;
	return 0;
}


func_4792(var_2407_int, var_2408_int, var_2409_object, var_2410_object, var_2411_object, var_2412_object)
{
	var_2414_bool = var_2408_int == (int)0;
	if(var_2414_bool != 0) {
		var_2415_int = 0; var_2416_bool = 0;
		func_746((int)2, (bool)1);
		var_2417_int = 0; var_2418_bool = 0; var_2419_int = 0;
		func_763((int)2, (bool)1, (int)1);
		var_2420_int = 0; var_2421_int = 0; var_2422_object = Obj(); var_2423_object = Obj(); var_2424_object = Obj();
		var_2407_int = var_2421_int;
		var_2409_object = var_2422_object;
		var_2410_object = var_2423_object;
		var_2411_object = var_2424_object;
		func_591((int)2, var_2421_int, var_2422_object, var_2423_object, var_2424_object);
		var_2425_object = Obj(); var_2426_int = 0;
		var_2412_object = var_2425_object;
		func_255(var_2425_object, (int)1);
		var_2427_int = 0; var_2428_bool = 0; var_2429_int = 0;
		func_820((int)2, (bool)1, (int)5);
		var_2430_int = 0; var_2431_bool = 0; var_2432_int = 0;
		func_882((int)2, (bool)0, (int)5);
	}
	var_2433_int = 0; var_2434_bool = 0;
	func_729((int)2, (bool)0);
	var_2435_int = 0; var_2436_int = 0; var_2437_int = 0;
	var_2407_int = var_2436_int;
	var_2408_int = var_2437_int;
	func_2894((int)2, var_2436_int, var_2437_int);
	return 0;
}


func_11964(var_5639_bool)
{
	var_5642_int = 0; var_5643_string = "";
	func_106(var_5642_int, "b2AndreiVisit");
	var_5645_bool = var_5642_int != (int)0;
	if(var_5645_bool != 0) {
		var_5639_bool = 1;
		return 0;
	}
	var_5639_bool = 0;
	return 0;
}


func_9920(var_4771_int, var_4772_float)
{
	var_4773_int = 0; var_4774_int = 0; var_4775_int = 0; var_4776_float = 0;
	var_4772_float = var_4776_float;
	func_12278(var_4773_int, (int)522099, (int)522098, var_4776_float);
	var_4773_int = var_4771_int;
	return 0;
}


func_8898()
{
	var_417_float = 0; var_418_int = 0; var_419_int = 0; var_420_float = 0; var_421_int = 0; var_422_object = Obj(); var_423_object = Obj(); var_424_float = 0; var_425_int = 0; var_426_int = 0; var_427_float = 0; var_428_int = 0; var_429_object = Obj(); var_430_object = Obj();
	GetGameTime(var_424_float);
	var_425_int = 1;
	
Label_8902:
	var_432_bool = var_425_int < (int)12;
	if(var_432_bool != 0) {
		var_434_int = (int)16384 + var_425_int;
		var_436_float = (int)24 * var_425_int;
		SetTimeEvent(var_434_int, var_436_float);
		var_425_int = var_425_int + (int)1;
		goto Label_8902;
	}
	
Label_8915:
	var_439_bool = (int)0 < (int)288;
	if(var_439_bool != 0) {
		var_426_int = var_427_float;
		var_440_bool = var_427_float < var_424_float;
		if(var_440_bool != 0) {
		} else {
			var_443_int = (int)32768 + var_426_int;
			SetTimeEvent(var_443_int, var_427_float);
	}

	Label_8930:
		var_445_bool = (int)0 < (int)16;
		if(var_445_bool != 0) {
			var_446_string = ""; var_447_int = 0;
			var_428_int = var_447_int;
			func_249(var_446_string, var_447_int);
			SetVariable(var_446_string, (int)0);
			var_452_int = 0; var_453_bool = 0;
			var_428_int = var_452_int;
			func_746(var_452_int, (bool)0);
			var_428_int = var_428_int + (int)1;
			goto Label_8930;
		}
		var_464_int = 0; var_465_int = 0; var_466_int = 0; var_467_int = 0;
		var_465_int = var_424_float % (int)24;
		var_467_int = var_424_float % (int)24;
		func_8981((int)0, var_465_int, (int)0, var_467_int);
		FindActor(var_429_object, "dt_house_1_07");
		@@var_429_object:EnableSubset((int)200, (bool)0);
		GetMainOutdoorScene(var_430_object);
		var_4360_bool = 0;
		var_4360_bool = 1;
		var_4362_bool = var_424_float < (int)7;
		if(var_4362_bool != 1) {
			var_4364_bool = var_424_float >= (int)20;
			if(var_4364_bool != 1) {
				var_4360_bool = 0;
			}
		}
		@@var_430_object:SwitchLights((int)0, var_4360_bool);
		var_426_int = var_426_int + (int)1;
		goto Label_8915;
	}
	return 14;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10951()
{
	var_6285_object = Obj(); var_6286_object = Obj(); var_6287_object = Obj(); var_6288_object = Obj();
	func_12286(Obj());
	var_6289_object = var_6287_object;
	@@var_6287_object:FindMark(var_6288_object, "b4q01DankoGotoLara");
	var_6291_object = var_6288_object;
	if(var_6291_object != 0) {
		@@var_6288_object:Remove();
	}
	@@var_6287_object:FindMark(var_6288_object, "b4q01DankoGotoLaraSelf");
	var_6293_object = var_6288_object;
	if(var_6293_object != 0) {
		@@var_6288_object:Remove();
	}
	@@var_6287_object:FindMark(var_6288_object, "b4q01LaraGotoRubin");
	var_6295_object = var_6288_object;
	if(var_6295_object != 0) {
		@@var_6288_object:Remove();
	}
	@@var_6287_object:FindMark(var_6288_object, "b4Spi4kaMapMark");
	var_6297_object = var_6288_object;
	if(var_6297_object != 0) {
		@@var_6288_object:Remove();
	}
	var_6298_bool = 0; var_6299_int = 0;
	func_12261(var_6298_bool, (int)213);
	var_6300_bool = 0; var_6301_int = 0;
	func_12261(var_6300_bool, (int)216);
	var_6302_bool = 0; var_6303_int = 0;
	func_12261(var_6302_bool, (int)527);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_11976(var_5737_bool)
{
	var_5740_int = 0; var_5741_string = "";
	func_106(var_5740_int, "b4Spi4kaVisit");
	var_5743_bool = var_5740_int != (int)0;
	if(var_5743_bool != 0) {
		var_5737_bool = 1;
		return 0;
	}
	var_5737_bool = 0;
	return 0;
}


func_9929(var_5828_int, var_5829_float)
{
	var_5830_int = 0; var_5831_int = 0; var_5832_int = 0; var_5833_float = 0;
	var_5829_float = var_5833_float;
	func_12278(var_5830_int, (int)529892, (int)529891, var_5833_float);
	var_5830_int = var_5828_int;
	return 0;
}


func_9938(var_5871_int, var_5872_float)
{
	var_5873_int = 0; var_5874_int = 0; var_5875_int = 0; var_5876_float = 0;
	var_5872_float = var_5876_float;
	func_12278(var_5873_int, (int)530533, (int)530532, var_5876_float);
	var_5873_int = var_5871_int;
	return 0;
}


func_11988(var_5500_bool)
{
	var_5503_int = 0; var_5504_string = "";
	func_106(var_5503_int, "b10KapellaVisit");
	var_5506_bool = var_5503_int != (int)0;
	if(var_5506_bool != 0) {
		var_5500_bool = 1;
		return 0;
	}
	var_5500_bool = 0;
	return 0;
}


func_3797(var_3564_int, var_3565_int, var_3566_int)
{
	var_3567_int = 0; var_3568_int = 0; var_3569_int = 0; var_3570_int = 0; var_3571_int = 0; var_3572_int = 0; var_3573_int = 0; var_3574_int = 0;
	var_3575_bool = 0;
	var_3575_bool = 0;
	var_3577_bool = var_3566_int > (int)8;
	if(var_3577_bool != 0) {
		var_3579_bool = var_3566_int < (int)21;
		if(var_3579_bool != 0) {
			var_3575_bool = 1;
		}
	}
	if(var_3575_bool != 0) {
		var_3580_int = 0; var_3581_string = ""; var_3582_string = ""; var_3583_int = 0;
		var_3564_int = var_3580_int;
		func_453(var_3580_int, "pers_rat", "rat.xml", (int)2);
		var_3584_int = 0; var_3585_string = ""; var_3586_string = ""; var_3587_int = 0;
		var_3564_int = var_3584_int;
		func_453(var_3584_int, "pers_alkash", "alkash.xml", (int)2);
		var_3588_int = 0; var_3589_string = ""; var_3590_string = ""; var_3591_int = 0;
		var_3564_int = var_3588_int;
		func_453(var_3588_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3593_float = 0; var_3594_int = 0;
		var_3565_int = var_3594_int;
		func_1115(var_3593_float, var_3594_int);
		var_3571_int = (int)2 * var_3593_float;
		var_3595_int = var_3571_int;
		if(var_3595_int != 0) {
			var_3596_int = 0; var_3597_string = ""; var_3598_string = ""; var_3599_int = 0;
			var_3564_int = var_3596_int;
			var_3571_int = var_3599_int;
			func_453(var_3596_int, "pers_grabitel", "grabitel.xml", var_3599_int);
		}
		var_3601_int = var_3565_int + (int)1;
		var_3603_bool = var_3601_int >= (int)2;
		if(var_3603_bool != 0) {
			var_3604_int = 0; var_3605_string = ""; var_3606_string = ""; var_3607_int = 0;
			var_3564_int = var_3604_int;
			func_453(var_3604_int, "pers_patrool", "patrol.xml", (int)2);
			var_3608_bool = 0; var_3609_int = 0;
			var_3565_int = var_3609_int;
			func_1322(var_3608_bool, var_3609_int);
			if(var_3608_bool != 0) {
				var_3610_int = 0; var_3611_string = ""; var_3612_string = ""; var_3613_int = 0;
				var_3564_int = var_3610_int;
				func_453(var_3610_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3615_float = 0; var_3616_int = 0;
		var_3565_int = var_3616_int;
		func_1205(var_3615_float, var_3616_int);
		var_3572_int = (int)1 * var_3615_float;
		var_3617_int = var_3572_int;
		if(var_3617_int != 0) {
			var_3618_int = 0; var_3619_string = ""; var_3620_string = ""; var_3621_int = 0;
			var_3564_int = var_3618_int;
			var_3572_int = var_3621_int;
			func_453(var_3618_int, "pers_bomber", "bomber.xml", var_3621_int);
		}
	} else {
		var_3635_int = 0; var_3636_string = ""; var_3637_string = ""; var_3638_int = 0;
		var_3564_int = var_3635_int;
		func_453(var_3635_int, "pers_rat", "rat.xml", (int)4);
		var_3639_int = 0; var_3640_string = ""; var_3641_string = ""; var_3642_int = 0;
		var_3564_int = var_3639_int;
		func_453(var_3639_int, "pers_alkash", "alkash.xml", (int)1);
		var_3643_int = 0; var_3644_string = ""; var_3645_string = ""; var_3646_int = 0;
		var_3564_int = var_3643_int;
		func_453(var_3643_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3648_float = 0; var_3649_int = 0;
		var_3565_int = var_3649_int;
		func_1115(var_3648_float, var_3649_int);
		var_3573_int = (int)3 * var_3648_float;
		var_3650_int = var_3573_int;
		if(var_3650_int != 0) {
			var_3651_int = 0; var_3652_string = ""; var_3653_string = ""; var_3654_int = 0;
			var_3564_int = var_3651_int;
			var_3573_int = var_3654_int;
			func_453(var_3651_int, "pers_grabitel", "grabitel.xml", var_3654_int);
		}
		var_3656_int = var_3565_int + (int)1;
		var_3658_bool = var_3656_int >= (int)2;
		if(var_3658_bool != 0) {
			var_3659_int = 0; var_3660_string = ""; var_3661_string = ""; var_3662_int = 0;
			var_3564_int = var_3659_int;
			func_453(var_3659_int, "pers_patrool", "patrol.xml", (int)1);
			var_3663_bool = 0; var_3664_int = 0;
			var_3565_int = var_3664_int;
			func_1322(var_3663_bool, var_3664_int);
			if(var_3663_bool != 0) {
				var_3665_int = 0; var_3666_string = ""; var_3667_string = ""; var_3668_int = 0;
				var_3564_int = var_3665_int;
				func_453(var_3665_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3670_float = 0; var_3671_int = 0;
		var_3565_int = var_3671_int;
		func_1205(var_3670_float, var_3671_int);
		var_3574_int = (int)1 * var_3670_float;
		var_3672_int = var_3574_int;
		if(var_3672_int == 0) goto Label_3959;
		var_3673_int = 0; var_3674_string = ""; var_3675_string = ""; var_3676_int = 0;
		var_3564_int = var_3673_int;
		var_3574_int = var_3676_int;
		func_453(var_3673_int, "pers_bomber", "bomber.xml", var_3676_int);
	}
Label_3959:
	var_3622_bool = 0; var_3623_int = 0; var_3624_int = 0;
	var_3565_int = var_3623_int;
	var_3566_int = var_3624_int;
	func_1295(var_3622_bool, var_3623_int, var_3624_int);
	if(var_3622_bool != 0) {
		var_3625_int = 0; var_3626_string = ""; var_3627_string = ""; var_3628_int = 0;
		var_3564_int = var_3625_int;
		func_453(var_3625_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_3629_bool = 0; var_3630_int = 0;
	var_3565_int = var_3630_int;
	func_1322(var_3629_bool, var_3630_int);
	if(var_3629_bool != 0) {
		var_3631_int = 0; var_3632_string = ""; var_3633_string = ""; var_3634_int = 0;
		var_3564_int = var_3631_int;
		func_453(var_3631_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 8;
	
}


func_729(var_737_int, var_738_bool)
{
	var_739_object = Obj(); var_740_int = 0; var_741_object = Obj(); var_742_int = 0;
	GetMainOutdoorScene(var_741_object);
	var_743_bool = var_741_object == 0; //@ne
	if(var_743_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 4;
	}
	var_742_int = var_737_int + (int)1;
	@@var_741_object:EnableSubsets(var_742_int, (int)100, var_738_bool, (bool)1);
	return 4;
}
EMIT "Stack[-2] = 0";


func_9947(var_5573_int, var_5574_float)
{
	var_5575_int = 0; var_5576_int = 0; var_5577_int = 0; var_5578_float = 0;
	var_5574_float = var_5578_float;
	func_12278(var_5575_int, (int)530572, (int)530571, var_5578_float);
	var_5575_int = var_5573_int;
	return 0;
}


func_6880(var_1736_int, var_1737_int, var_1738_object, var_1739_object, var_1740_object, var_1741_object)
{
	var_1743_bool = var_1737_int == (int)0;
	if(var_1743_bool != 0) {
		var_1744_int = 0; var_1745_bool = 0;
		func_746((int)13, (bool)0);
		var_1746_int = 0; var_1747_bool = 0; var_1748_int = 0;
		func_763((int)13, (bool)0, (int)1);
		var_1749_int = 0; var_1750_int = 0; var_1751_object = Obj(); var_1752_object = Obj(); var_1753_object = Obj();
		var_1749_int = 13;
		var_1736_int = var_1750_int;
		var_1738_object = var_1751_object;
		var_1739_object = var_1752_object;
		var_1740_object = var_1753_object;
		func_572(var_1750_int, var_1751_object, var_1752_object, var_1753_object);
		var_1754_object = Obj(); var_1755_int = 0;
		var_1741_object = var_1754_object;
		func_255(var_1754_object, (int)0);
		var_1756_int = 0; var_1757_bool = 0; var_1758_int = 0;
		func_820((int)13, (bool)0, (int)4);
		var_1759_int = 0; var_1760_bool = 0; var_1761_int = 0;
		func_882((int)13, (bool)0, (int)4);
	}
	var_1762_int = 0; var_1763_int = 0;
	var_1737_int = var_1763_int;
	func_1000((int)13, var_1763_int);
	var_1764_int = 0; var_1765_int = 0; var_1766_int = 0;
	var_1736_int = var_1765_int;
	var_1737_int = var_1766_int;
	func_1574((int)13, var_1765_int, var_1766_int);
	return 0;
}


func_5856(var_1571_int, var_1572_int, var_1573_object, var_1574_object, var_1575_object, var_1576_object)
{
	var_1578_bool = var_1572_int == (int)0;
	if(var_1578_bool != 0) {
		var_1579_int = 0; var_1580_bool = 0;
		func_746((int)8, (bool)0);
		var_1581_int = 0; var_1582_bool = 0; var_1583_int = 0;
		func_763((int)8, (bool)0, (int)1);
		var_1584_int = 0; var_1585_int = 0; var_1586_object = Obj(); var_1587_object = Obj(); var_1588_object = Obj();
		var_1584_int = 8;
		var_1571_int = var_1585_int;
		var_1573_object = var_1586_object;
		var_1574_object = var_1587_object;
		var_1575_object = var_1588_object;
		func_572(var_1585_int, var_1586_object, var_1587_object, var_1588_object);
		var_1589_object = Obj(); var_1590_int = 0;
		var_1576_object = var_1589_object;
		func_255(var_1589_object, (int)0);
		var_1591_int = 0; var_1592_bool = 0; var_1593_int = 0;
		func_820((int)8, (bool)0, (int)4);
		var_1594_int = 0; var_1595_bool = 0; var_1596_int = 0;
		func_882((int)8, (bool)0, (int)4);
	}
	var_1597_int = 0; var_1598_int = 0;
	var_1572_int = var_1598_int;
	func_933((int)8, var_1598_int);
	var_1599_int = 0; var_1600_int = 0; var_1601_int = 0;
	var_1571_int = var_1600_int;
	var_1572_int = var_1601_int;
	func_1574((int)8, var_1600_int, var_1601_int);
	return 0;
}


func_12000(var_5669_bool)
{
	var_5672_int = 0; var_5673_string = "";
	func_106(var_5672_int, "b9BlockVisit");
	var_5675_bool = var_5672_int != (int)0;
	if(var_5675_bool != 0) {
		var_5669_bool = 1;
		return 0;
	}
	var_5669_bool = 0;
	return 0;
}


func_9956(var_4892_int, var_4893_float)
{
	var_4894_int = 0; var_4895_int = 0; var_4896_int = 0; var_4897_float = 0;
	var_4893_float = var_4897_float;
	func_12278(var_4894_int, (int)522713, (int)522712, var_4897_float);
	var_4894_int = var_4892_int;
	return 0;
}


func_746(var_452_int, var_453_bool)
{
	var_454_object = Obj(); var_455_int = 0; var_456_object = Obj(); var_457_int = 0;
	GetMainOutdoorScene(var_456_object);
	var_458_bool = var_456_object == 0; //@ne
	if(var_458_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 4;
	}
	var_457_int = var_452_int + (int)1;
	@@var_456_object:EnableSubsets(var_457_int, (int)200, var_453_bool, (bool)0);
	return 4;
}
EMIT "Stack[-2] = 0";


func_4844(var_3536_int, var_3537_int, var_3538_object, var_3539_object, var_3540_object, var_3541_object)
{
	var_3543_bool = var_3537_int == (int)0;
	if(var_3543_bool != 0) {
		var_3544_int = 0; var_3545_bool = 0;
		func_746((int)2, (bool)0);
		var_3546_int = 0; var_3547_bool = 0; var_3548_int = 0;
		func_763((int)2, (bool)0, (int)1);
		var_3549_int = 0; var_3550_int = 0; var_3551_object = Obj(); var_3552_object = Obj(); var_3553_object = Obj();
		var_3536_int = var_3550_int;
		var_3538_object = var_3551_object;
		var_3539_object = var_3552_object;
		var_3540_object = var_3553_object;
		func_670((int)2, var_3550_int, var_3551_object, var_3552_object, var_3553_object);
		var_3554_object = Obj(); var_3555_int = 0;
		var_3541_object = var_3554_object;
		func_255(var_3554_object, (int)2);
		var_3556_int = 0; var_3557_bool = 0; var_3558_int = 0;
		func_820((int)2, (bool)0, (int)5);
		var_3559_int = 0; var_3560_bool = 0; var_3561_int = 0;
		func_882((int)2, (bool)1, (int)5);
	}
	var_3562_int = 0; var_3563_bool = 0;
	func_729((int)2, (bool)0);
	var_3564_int = 0; var_3565_int = 0; var_3566_int = 0;
	var_3536_int = var_3565_int;
	var_3537_int = var_3566_int;
	func_3797((int)2, var_3565_int, var_3566_int);
	return 0;
}


func_12012(var_5516_bool)
{
	var_5519_int = 0; var_5520_string = "";
	func_106(var_5519_int, "b5MladVladVisit");
	var_5522_bool = var_5519_int != (int)0;
	if(var_5522_bool != 0) {
		var_5516_bool = 1;
		return 0;
	}
	var_5516_bool = 0;
	return 0;
}


func_9965(var_4708_int, var_4709_float)
{
	var_4710_int = 0; var_4711_int = 0; var_4712_int = 0; var_4713_float = 0;
	var_4709_float = var_4713_float;
	func_12278(var_4710_int, (int)522715, (int)522714, var_4713_float);
	var_4710_int = var_4708_int;
	return 0;
}


func_9974(var_4665_int, var_4666_float)
{
	var_4667_int = 0; var_4668_int = 0; var_4669_int = 0; var_4670_float = 0;
	var_4666_float = var_4670_float;
	func_12278(var_4667_int, (int)522719, (int)522718, var_4670_float);
	var_4667_int = var_4665_int;
	return 0;
}


func_10999()
{
	var_6356_object = Obj(); var_6357_object = Obj(); var_6358_object = Obj(); var_6359_object = Obj();
	func_12286(Obj());
	var_6360_object = var_6358_object;
	@@var_6358_object:FindMark(var_6359_object, "b5q01DankoGotoAndrei");
	var_6362_object = var_6359_object;
	if(var_6362_object != 0) {
		@@var_6359_object:Remove();
	}
	@@var_6358_object:FindMark(var_6359_object, "b5q01DankoGotoOspina");
	var_6364_object = var_6359_object;
	if(var_6364_object != 0) {
		@@var_6359_object:Remove();
	}
	@@var_6358_object:FindMark(var_6359_object, "b5q01VeraGotoStvorki");
	var_6366_object = var_6359_object;
	if(var_6366_object != 0) {
		@@var_6359_object:Remove();
	}
	@@var_6358_object:FindMark(var_6359_object, "b5q01GathererWife");
	var_6368_object = var_6359_object;
	if(var_6368_object != 0) {
		@@var_6359_object:Remove();
	}
	var_6369_bool = 0; var_6370_int = 0;
	func_12261(var_6369_bool, (int)238);
	var_6371_bool = 0; var_6372_int = 0;
	func_12261(var_6371_bool, (int)249);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_12024(var_5370_bool)
{
	var_5373_int = 0; var_5374_string = "";
	func_106(var_5373_int, "resque_list");
	var_5376_bool = var_5373_int != (int)0;
	if(var_5376_bool != 0) {
		var_5370_bool = 1;
		return 0;
	}
	var_5370_bool = 0;
	return 0;
}


func_763(var_528_int, var_529_bool, var_530_int)
{
	var_531_string = ""; var_532_object = Obj(); var_533_int = 0; var_534_string = ""; var_535_object = Obj(); var_536_int = 0; var_537_object = Obj(); var_538_string = ""; var_539_object = Obj(); var_540_int = 0; var_541_string = ""; var_542_object = Obj(); var_543_int = 0; var_544_object = Obj();
	var_547_int = var_528_int + (int)1;
	var_538_string = "street_rags" + var_547_int;
	var_548_bool = var_529_bool;
	if(var_548_bool != 0) {
		GetMainOutdoorScene(var_539_object);
		var_549_bool = var_539_object == 0; //@ne
		if(var_549_bool != 0) {
			Trace("City manager: Can't find main outdoor scene");
			return 14;
		}
		var_540_int = 1;

	Label_779:
		var_551_bool = var_540_int <= var_530_int;
		if(var_551_bool != 0) {
			var_553_int = var_538_string + "_";
			var_541_string = var_553_int + var_540_int;
			FindActor(var_542_object, var_541_string);
			var_554_bool = var_542_object == 0; //@nz
			if(var_554_bool != 0) {
				AddActor(var_542_object, var_541_string, var_539_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "do_invis.xml");
			} else {
				@@var_542_object:RemoveOnUnload((bool)0);
		}
			var_539_object = 0;
	} else {
			var_543_int = 1;

		Label_804:
			var_560_bool = var_543_int <= var_530_int;
			if(var_560_bool == 0) goto Label_819;
			var_562_int = var_538_string + "_";
			var_563_int = var_562_int + var_543_int;
			FindActor(var_544_object, var_563_int);
			var_564_object = var_544_object;
			if(var_564_object != 0) {
				@@var_544_object:RemoveOnUnload();
			}
			var_544_object = 0;
			var_543_int = var_543_int + (int)1;
			goto Label_804;
	}
	Label_819:
		return 14;

	}
	var_542_object = 0;
	var_540_int = var_540_int + (int)1;
	goto Label_779;
	
}


func_9983(var_4884_int, var_4885_float)
{
	var_4886_int = 0; var_4887_int = 0; var_4888_int = 0; var_4889_float = 0;
	var_4885_float = var_4889_float;
	func_12278(var_4886_int, (int)522717, (int)522716, var_4889_float);
	var_4886_int = var_4884_int;
	return 0;
}


func_12036(var_6314_bool)
{
	var_6317_int = 0; var_6318_string = "";
	func_106(var_6317_int, "b3BigVladVisit");
	var_6320_bool = var_6317_int != (int)0;
	if(var_6320_bool != 0) {
		var_6314_bool = 1;
		return 0;
	}
	var_6314_bool = 0;
	return 0;
}


func_9992(var_5812_int, var_5813_float)
{
	var_5814_int = 0; var_5815_int = 0; var_5816_int = 0; var_5817_float = 0;
	var_5813_float = var_5817_float;
	func_12278(var_5814_int, (int)530574, (int)530573, var_5817_float);
	var_5814_int = var_5812_int;
	return 0;
}


func_12048(var_4676_bool)
{
	var_4679_int = 0; var_4680_string = "";
	func_106(var_4679_int, "b3DankoVisit");
	var_4682_bool = var_4679_int != (int)0;
	if(var_4682_bool != 0) {
		var_4676_bool = 1;
		return 0;
	}
	var_4676_bool = 0;
	return 0;
}


func_10001(var_5081_int, var_5082_float)
{
	var_5083_int = 0; var_5084_int = 0; var_5085_int = 0; var_5086_float = 0;
	var_5082_float = var_5086_float;
	func_12278(var_5083_int, (int)529840, (int)529839, var_5086_float);
	var_5083_int = var_5081_int;
	return 0;
}


func_6932(var_2966_int, var_2967_int, var_2968_object, var_2969_object, var_2970_object, var_2971_object)
{
	var_2973_bool = var_2967_int == (int)0;
	if(var_2973_bool != 0) {
		var_2974_int = 0; var_2975_bool = 0;
		func_746((int)13, (bool)1);
		var_2976_int = 0; var_2977_bool = 0; var_2978_int = 0;
		func_763((int)13, (bool)1, (int)1);
		var_2979_int = 0; var_2980_int = 0; var_2981_object = Obj(); var_2982_object = Obj(); var_2983_object = Obj();
		var_2966_int = var_2980_int;
		var_2968_object = var_2981_object;
		var_2969_object = var_2982_object;
		var_2970_object = var_2983_object;
		func_591((int)13, var_2980_int, var_2981_object, var_2982_object, var_2983_object);
		var_2984_object = Obj(); var_2985_int = 0;
		var_2971_object = var_2984_object;
		func_255(var_2984_object, (int)1);
		var_2986_int = 0; var_2987_bool = 0; var_2988_int = 0;
		func_820((int)13, (bool)1, (int)4);
		var_2989_int = 0; var_2990_bool = 0; var_2991_int = 0;
		func_882((int)13, (bool)0, (int)4);
	}
	var_2992_int = 0; var_2993_bool = 0;
	func_729((int)13, (bool)0);
	var_2994_int = 0; var_2995_int = 0; var_2996_int = 0;
	var_2966_int = var_2995_int;
	var_2967_int = var_2996_int;
	func_2714((int)13, var_2995_int, var_2996_int);
	return 0;
}


func_8981(var_464_int, var_465_int, var_466_int, var_467_int)
{
	var_470_int = 0; var_471_object = Obj(); var_472_object = Obj(); var_473_object = Obj(); var_474_object = Obj(); var_475_int = 0; var_476_object = Obj(); var_477_object = Obj(); var_478_object = Obj(); var_479_object = Obj();
	Trace("City update");
	var_481_bool = 0;
	var_481_bool = 0;
	var_482_bool = var_464_int == var_466_int;
	if(var_482_bool != 0) {
		var_483_bool = var_465_int == var_467_int;
		if(var_483_bool != 0) {
			var_481_bool = 1;
		}
	}
	if(var_481_bool != 0) {
		PlaySound("kolokol");
	}
	
Label_8997:
	var_486_bool = (int)0 < (int)16;
	if(var_486_bool != 0) {
		var_487_int = 0;
		var_475_int = var_487_int;
		func_440(var_487_int);
		var_492_bool = 0; var_493_int = 0;
		var_475_int = var_493_int;
		func_350(var_492_bool, var_493_int);
		if(var_492_bool != 0) {
			var_501_int = 0; var_502_int = 0; var_503_int = 0;
			var_475_int = var_501_int;
			var_464_int = var_502_int;
			var_465_int = var_503_int;
			func_9101(var_501_int, var_502_int, var_503_int);
		} else {
			var_1979_bool = 0; var_1980_int = 0;
			var_475_int = var_1980_int;
			func_380(var_1979_bool, var_1980_int);
			if(var_1979_bool != 0) {
				var_1988_int = 0; var_1989_int = 0; var_1990_int = 0;
				var_475_int = var_1988_int;
				var_464_int = var_1989_int;
				var_465_int = var_1990_int;
				func_9326(var_1988_int, var_1989_int, var_1990_int);
				goto Label_9034;
			}
			var_3169_int = 0; var_3170_int = 0; var_3171_int = 0;
			var_475_int = var_3169_int;
			var_464_int = var_3170_int;
			var_465_int = var_3171_int;
			func_9551(var_3169_int, var_3170_int, var_3171_int);
	}
		var_4304_bool = var_465_int == (int)0;
		if(var_4304_bool != 0) {
			var_4305_int = 0;
			var_464_int = var_4305_int;
			func_14840(var_4305_int);
			var_4335_bool = 0;
			var_4335_bool = 1;
			var_4337_bool = var_464_int == (int)1;
			if(var_4337_bool != 1) {
				var_4338_bool = 0; var_4339_int = 0;
				func_380(var_4338_bool, (int)5);
				if(var_4338_bool != 1) {
					var_4335_bool = 0;
				}
			}
			if(var_4335_bool != 0) {
				FindActor(var_476_object, "dt_house_1_07");
				@@var_476_object:EnableSubset((int)200, (bool)1);
				var_476_object = 0;
			} else {
					FindActor(var_477_object, "dt_house_1_07");
					@@var_477_object:EnableSubset((int)200, (bool)0);
					var_477_object = 0;
			}
		}
		var_4344_bool = var_465_int == (int)7;
		if(var_4344_bool != 0) {
			Trace("day time");
			GetMainOutdoorScene(var_478_object);
			@@var_478_object:SwitchLights((int)0, (bool)0);
			var_478_object = 0;
		} else {
			var_4349_bool = var_465_int == (int)20;
			if(var_4349_bool == 0) goto Label_9100;
			Trace("night time");
			GetMainOutdoorScene(var_479_object);
			@@var_479_object:SwitchLights((int)0, (bool)1);
			var_479_object = 0;

		}
	Label_9100:
		var_475_int = var_475_int + (int)1;
		goto Label_8997;
	}
	return 10;
	
}


func_5908(var_2801_int, var_2802_int, var_2803_object, var_2804_object, var_2805_object, var_2806_object)
{
	var_2808_bool = var_2802_int == (int)0;
	if(var_2808_bool != 0) {
		var_2809_int = 0; var_2810_bool = 0;
		func_746((int)8, (bool)1);
		var_2811_int = 0; var_2812_bool = 0; var_2813_int = 0;
		func_763((int)8, (bool)1, (int)1);
		var_2814_int = 0; var_2815_int = 0; var_2816_object = Obj(); var_2817_object = Obj(); var_2818_object = Obj();
		var_2801_int = var_2815_int;
		var_2803_object = var_2816_object;
		var_2804_object = var_2817_object;
		var_2805_object = var_2818_object;
		func_591((int)8, var_2815_int, var_2816_object, var_2817_object, var_2818_object);
		var_2819_object = Obj(); var_2820_int = 0;
		var_2806_object = var_2819_object;
		func_255(var_2819_object, (int)1);
		var_2821_int = 0; var_2822_bool = 0; var_2823_int = 0;
		func_820((int)8, (bool)1, (int)4);
		var_2824_int = 0; var_2825_bool = 0; var_2826_int = 0;
		func_882((int)8, (bool)0, (int)4);
	}
	var_2827_int = 0; var_2828_bool = 0;
	func_729((int)8, (bool)0);
	var_2829_int = 0; var_2830_int = 0; var_2831_int = 0;
	var_2801_int = var_2830_int;
	var_2802_int = var_2831_int;
	func_2714((int)8, var_2830_int, var_2831_int);
	return 0;
}


func_10010(var_4947_int, var_4948_float)
{
	var_4949_int = 0; var_4950_int = 0; var_4951_int = 0; var_4952_float = 0;
	var_4948_float = var_4952_float;
	func_12278(var_4949_int, (int)518132, (int)518131, var_4952_float);
	var_4949_int = var_4947_int;
	return 0;
}


func_12060(var_5765_bool)
{
	var_5768_int = 0; var_5769_string = "";
	func_106(var_5768_int, "b3NotkinVisit");
	var_5771_bool = var_5768_int != (int)0;
	if(var_5771_bool != 0) {
		var_5765_bool = 1;
		return 0;
	}
	var_5765_bool = 0;
	return 0;
}


func_4896(var_96_object)
{
	@@var_96_object:add("house5_02");
	@@var_96_object:add("dt_house1_union2_03l");
	@@var_96_object:add("dt_house1_union2_03r");
	@@var_96_object:add("dt_house1_union2_01l");
	@@var_96_object:add("dt_house1_union2_01r");
	@@var_96_object:add("house5_unoinl");
	@@var_96_object:add("house5_unoinr");
	@@var_96_object:add("dt_house_1_01");
	@@var_96_object:add("house5_05");
	@@var_96_object:add("house5_06");
	@@var_96_object:add("dt_house_1_02");
	@@var_96_object:add("house5_unoin_solid01l");
	@@var_96_object:add("house5_unoin_solid01r");
	@@var_96_object:add("house5_03");
	@@var_96_object:add("house5_04");
	@@var_96_object:add("house1_se_02l");
	@@var_96_object:add("house1_se_02r");
	@@var_96_object:add("dt_house3_01_i2");
	@@var_96_object:add("dt_house3_02_i2");
	@@var_96_object:add("dt_house3_02");
	@@var_96_object:add("dt_house3_03_i2");
	@@var_96_object:add("dt_house3_03");
	@@var_96_object:add("dt_house3_04_i2");
	@@var_96_object:add("house5_21");
	return 0;
}


func_11043()
{
	var_5993_object = Obj(); var_5994_object = Obj(); var_5995_object = Obj(); var_5996_object = Obj();
	func_12286(Obj());
	var_5997_object = var_5995_object;
	@@var_5995_object:FindMark(var_5996_object, "b6q01KlaraGotoTermitnik2");
	var_5999_object = var_5996_object;
	if(var_5999_object != 0) {
		@@var_5996_object:Remove();
	}
	@@var_5995_object:FindMark(var_5996_object, "b6q02KlaraGotoRat");
	var_6001_object = var_5996_object;
	if(var_6001_object != 0) {
		@@var_5996_object:Remove();
	}
	@@var_5995_object:FindMark(var_5996_object, "b6q03MariaGotoNina");
	var_6003_object = var_5996_object;
	if(var_6003_object != 0) {
		@@var_5996_object:Remove();
	}
	@@var_5995_object:FindMark(var_5996_object, "b6q03ViktorGotoMaria");
	var_6005_object = var_5996_object;
	if(var_6005_object != 0) {
		@@var_5996_object:Remove();
	}
	@@var_5995_object:FindMark(var_5996_object, "b6q02LetterGotoAnna");
	var_6007_object = var_5996_object;
	if(var_6007_object != 0) {
		@@var_5996_object:Remove();
	}
	@@var_5995_object:FindMark(var_5996_object, "b6q01MatGotoByk");
	var_6009_object = var_5996_object;
	if(var_6009_object != 0) {
		@@var_5996_object:Remove();
	}
	var_6010_bool = 0; var_6011_int = 0;
	func_12261(var_6010_bool, (int)265);
	var_6012_bool = 0; var_6013_int = 0;
	func_12261(var_6012_bool, (int)266);
	var_6014_bool = 0; var_6015_int = 0;
	func_12261(var_6014_bool, (int)276);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10019(var_4971_int, var_4972_float)
{
	var_4973_int = 0; var_4974_int = 0; var_4975_int = 0; var_4976_float = 0;
	var_4972_float = var_4976_float;
	func_12278(var_4973_int, (int)529838, (int)529837, var_4976_float);
	var_4973_int = var_4971_int;
	return 0;
}


func_12072(var_5276_bool)
{
	var_5279_int = 0; var_5280_string = "";
	func_106(var_5279_int, "b8DankoVisit");
	var_5282_bool = var_5279_int != (int)0;
	if(var_5282_bool != 0) {
		var_5276_bool = 1;
		return 0;
	}
	var_5276_bool = 0;
	return 0;
}


func_10028(var_5661_int, var_5662_float)
{
	var_5663_int = 0; var_5664_int = 0; var_5665_int = 0; var_5666_float = 0;
	var_5662_float = var_5666_float;
	func_12278(var_5663_int, (int)531053, (int)531052, var_5666_float);
	var_5663_int = var_5661_int;
	return 0;
}


func_820(var_639_int, var_640_bool, var_641_int)
{
	var_642_string = ""; var_643_object = Obj(); var_644_int = 0; var_645_string = ""; var_646_object = Obj(); var_647_int = 0; var_648_string = ""; var_649_object = Obj(); var_650_string = ""; var_651_object = Obj(); var_652_int = 0; var_653_string = ""; var_654_object = Obj(); var_655_int = 0; var_656_string = ""; var_657_object = Obj();
	var_660_int = var_639_int + (int)1;
	var_650_string = "dr_mark" + var_660_int;
	var_661_bool = var_640_bool;
	if(var_661_bool != 0) {
		GetMainOutdoorScene(var_651_object);
		var_662_bool = var_651_object == 0; //@ne
		if(var_662_bool != 0) {
			Trace("City manager: Can't find main outdoor scene");
			return 16;
		}
		var_652_int = 1;

	Label_836:
		var_664_bool = var_652_int <= var_641_int;
		if(var_664_bool != 0) {
			var_666_int = var_650_string + "_";
			var_653_string = var_666_int + var_652_int;
			FindActor(var_654_object, var_653_string);
			var_667_bool = var_654_object == 0; //@nz
			if(var_667_bool != 0) {
				AddActor(var_654_object, var_653_string, var_651_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "disease_object.xml");
			} else {
				var_672_bool = 0; var_673_string = ""; var_674_string = "";
				var_653_string = var_673_string;
				func_189(var_672_bool, var_673_string, "restore");
		}
			var_651_object = 0;
	} else {
			var_655_int = 1;

		Label_863:
			var_678_bool = var_655_int <= var_641_int;
			if(var_678_bool == 0) goto Label_881;
			var_680_int = var_650_string + "_";
			var_656_string = var_680_int + var_655_int;
			FindActor(var_657_object, var_656_string);
			var_681_object = var_657_object;
			if(var_681_object != 0) {
				var_682_bool = 0; var_683_string = ""; var_684_string = "";
				var_656_string = var_683_string;
				func_189(var_682_bool, var_683_string, "cleanup");
			}
			var_657_object = 0;
			var_655_int = var_655_int + (int)1;
			goto Label_863;
	}
	Label_881:
		return 16;

	}
	var_654_object = 0;
	var_652_int = var_652_int + (int)1;
	goto Label_836;
	
}


func_12084(var_5546_bool, var_5547_object)
{
	var_5549_bool = 0; var_5550_object = Obj();
	var_5547_object = var_5550_object;
	func_12178(var_5550_object);
	if(var_5549_bool != 0) {
		var_5546_bool = 1;
		return 0;
	}
	var_5546_bool = 0;
	return 0;
}


func_10037(var_5104_int, var_5105_float)
{
	var_5106_int = 0; var_5107_int = 0; var_5108_int = 0; var_5109_float = 0;
	var_5105_float = var_5109_float;
	func_12278(var_5106_int, (int)529844, (int)529843, var_5109_float);
	var_5106_int = var_5104_int;
	return 0;
}


func_1847(var_1057_int, var_1058_int, var_1059_int)
{
	var_1060_int = 0; var_1061_int = 0;
	var_1063_int = var_1058_int + (int)1;
	var_1065_bool = var_1063_int == (int)12;
	if(var_1065_bool != 0) {
		return 2;
	}
	var_1066_bool = 0;
	var_1066_bool = 0;
	var_1067_bool = 0;
	var_1067_bool = 1;
	var_1069_bool = var_1059_int < (int)7;
	if(var_1069_bool != 1) {
		var_1071_bool = var_1059_int > (int)21;
		if(var_1071_bool != 1) {
			var_1067_bool = 0;
		}
	}
	if(var_1067_bool != 0) {
		var_1073_bool = var_1058_int != (int)0;
		if(var_1073_bool != 0) {
			var_1066_bool = 1;
		}
	}
	if(var_1066_bool != 0) {
		var_1074_float = 0; var_1075_int = 0;
		var_1058_int = var_1075_int;
		func_1091(var_1074_float, var_1075_int);
		var_1074_float = var_1061_int;
		var_1076_int = var_1061_int;
		if(var_1076_int != 0) {
			var_1077_int = 0; var_1078_string = ""; var_1079_string = ""; var_1080_int = 0;
			var_1057_int = var_1077_int;
			var_1061_int = var_1080_int;
			func_453(var_1077_int, "pers_grabitel", "grabitel.xml", var_1080_int);
		}
	}
	var_1081_bool = 0; var_1082_int = 0; var_1083_int = 0;
	var_1058_int = var_1082_int;
	var_1059_int = var_1083_int;
	func_1060(var_1081_bool, var_1082_int, var_1083_int);
	if(var_1081_bool != 0) {
		var_1084_int = 0; var_1085_string = ""; var_1086_string = ""; var_1087_int = 0;
		var_1057_int = var_1084_int;
		func_453(var_1084_int, "pers_unosha", "unosha_attacker.xml", (int)1);
		var_1088_int = 0; var_1089_string = ""; var_1090_string = ""; var_1091_int = 0;
		var_1057_int = var_1088_int;
		func_453(var_1088_int, "pers_unosha", "unosha2_attacker.xml", (int)1);
		var_1092_int = 0; var_1093_string = ""; var_1094_string = ""; var_1095_int = 0;
		var_1057_int = var_1092_int;
		func_453(var_1092_int, "pers_worker", "worker_attacker.xml", (int)1);
		var_1096_int = 0; var_1097_string = ""; var_1098_string = ""; var_1099_int = 0;
		var_1057_int = var_1096_int;
		func_453(var_1096_int, "pers_worker", "worker2_attacker.xml", (int)1);
		var_1100_int = 0; var_1101_string = ""; var_1102_string = ""; var_1103_int = 0;
		var_1057_int = var_1100_int;
		func_453(var_1100_int, "pers_woman", "woman.xml", (int)1);
		var_1104_int = 0; var_1105_string = ""; var_1106_string = ""; var_1107_int = 0;
		var_1057_int = var_1104_int;
		func_453(var_1104_int, "pers_alkash", "alkash.xml", (int)1);
		var_1108_int = 0; var_1109_string = ""; var_1110_string = ""; var_1111_int = 0;
		var_1057_int = var_1108_int;
		func_453(var_1108_int, "pers_girl", "girl.xml", (int)1);
		var_1112_int = 0; var_1113_string = ""; var_1114_string = ""; var_1115_int = 0;
		var_1057_int = var_1112_int;
		func_453(var_1112_int, "pers_girl", "girl2.xml", (int)1);
	} else {
		var_1153_bool = 0;
		var_1153_bool = 0;
		var_1155_bool = var_1059_int > (int)8;
		if(var_1155_bool != 0) {
			var_1157_bool = var_1059_int < (int)21;
			if(var_1157_bool != 0) {
				var_1153_bool = 1;
			}
		}
		if(var_1153_bool != 0) {
			var_1158_int = 0; var_1159_string = ""; var_1160_string = ""; var_1161_int = 0;
			var_1057_int = var_1158_int;
			func_453(var_1158_int, "pers_woman", "woman.xml", (int)1);
			var_1162_int = 0; var_1163_string = ""; var_1164_string = ""; var_1165_int = 0;
			var_1057_int = var_1162_int;
			func_453(var_1162_int, "pers_unosha", "unosha.xml", (int)1);
			var_1166_int = 0; var_1167_string = ""; var_1168_string = ""; var_1169_int = 0;
			var_1057_int = var_1166_int;
			func_453(var_1166_int, "pers_unosha", "unosha2.xml", (int)1);
			var_1170_int = 0; var_1171_string = ""; var_1172_string = ""; var_1173_int = 0;
			var_1057_int = var_1170_int;
			func_453(var_1170_int, "pers_worker", "worker.xml", (int)1);
			var_1174_int = 0; var_1175_string = ""; var_1176_string = ""; var_1177_int = 0;
			var_1057_int = var_1174_int;
			func_453(var_1174_int, "pers_worker", "worker2.xml", (int)1);
			var_1178_int = 0; var_1179_string = ""; var_1180_string = ""; var_1181_int = 0;
			var_1057_int = var_1178_int;
			func_453(var_1178_int, "pers_alkash", "alkash.xml", (int)1);
			var_1182_int = 0; var_1183_string = ""; var_1184_string = ""; var_1185_int = 0;
			var_1057_int = var_1182_int;
			func_453(var_1182_int, "pers_girl", "girl.xml", (int)1);
			var_1186_int = 0; var_1187_string = ""; var_1188_string = ""; var_1189_int = 0;
			var_1057_int = var_1186_int;
			func_453(var_1186_int, "pers_girl", "girl2.xml", (int)1);
			var_1191_int = var_1058_int + (int)1;
			var_1193_bool = var_1191_int >= (int)3;
			if(var_1193_bool != 0) {
				var_1194_int = 0; var_1195_string = ""; var_1196_string = ""; var_1197_int = 0;
				var_1057_int = var_1194_int;
				func_453(var_1194_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
			}
			var_1199_int = var_1058_int + (int)1;
			var_1201_bool = var_1199_int >= (int)7;
			if(var_1201_bool != 0) {
				var_1202_int = 0; var_1203_string = ""; var_1204_string = ""; var_1205_int = 0;
				var_1057_int = var_1202_int;
				func_453(var_1202_int, "pers_butcher", "butcher.xml", (int)2);
			}
			goto Label_2105;
		}
		var_1206_int = 0; var_1207_string = ""; var_1208_string = ""; var_1209_int = 0;
		var_1057_int = var_1206_int;
		func_453(var_1206_int, "pers_woman", "woman.xml", (int)1);
		var_1210_int = 0; var_1211_string = ""; var_1212_string = ""; var_1213_int = 0;
		var_1057_int = var_1210_int;
		func_453(var_1210_int, "pers_unosha", "unosha.xml", (int)1);
		var_1214_int = 0; var_1215_string = ""; var_1216_string = ""; var_1217_int = 0;
		var_1057_int = var_1214_int;
		func_453(var_1214_int, "pers_unosha", "unosha2.xml", (int)1);
		var_1218_int = 0; var_1219_string = ""; var_1220_string = ""; var_1221_int = 0;
		var_1057_int = var_1218_int;
		func_453(var_1218_int, "pers_worker", "worker.xml", (int)1);
		var_1222_int = 0; var_1223_string = ""; var_1224_string = ""; var_1225_int = 0;
		var_1057_int = var_1222_int;
		func_453(var_1222_int, "pers_worker", "worker2.xml", (int)1);
		var_1226_int = 0; var_1227_string = ""; var_1228_string = ""; var_1229_int = 0;
		var_1057_int = var_1226_int;
		func_453(var_1226_int, "pers_alkash", "alkash.xml", (int)1);
		var_1231_int = var_1058_int + (int)1;
		var_1233_bool = var_1231_int >= (int)3;
		if(var_1233_bool != 0) {
			var_1234_int = 0; var_1235_string = ""; var_1236_string = ""; var_1237_int = 0;
			var_1057_int = var_1234_int;
			func_453(var_1234_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		}
		var_1239_int = var_1058_int + (int)1;
		var_1241_bool = var_1239_int >= (int)7;
		if(var_1241_bool == 0) goto Label_2105;
		var_1242_int = 0; var_1243_string = ""; var_1244_string = ""; var_1245_int = 0;
		var_1057_int = var_1242_int;
		func_453(var_1242_int, "pers_butcher", "butcher.xml", (int)3);
	}
Label_2105:
	var_1116_bool = 0;
	var_1116_bool = 0;
	var_1117_bool = 0;
	var_1117_bool = 0;
	var_1119_bool = var_1058_int == (int)0;
	if(var_1119_bool != 0) {
		var_1121_bool = var_1059_int > (int)12;
		if(var_1121_bool != 0) {
			var_1117_bool = 1;
		}
	}
	if(var_1117_bool != 0) {
		var_1123_bool = var_1059_int < (int)22;
		if(var_1123_bool != 0) {
			var_1116_bool = 1;
		}
	}
	if(var_1116_bool != 0) {
		var_1124_int = 0; var_1125_string = ""; var_1126_string = ""; var_1127_int = 0;
		var_1057_int = var_1124_int;
		func_453(var_1124_int, "pers_woman", "woman_killme.xml", (int)1);
	}
	var_1128_bool = 0; var_1129_int = 0; var_1130_int = 0;
	var_1058_int = var_1129_int;
	var_1059_int = var_1130_int;
	func_1295(var_1128_bool, var_1129_int, var_1130_int);
	if(var_1128_bool != 0) {
		var_1135_int = 0; var_1136_string = ""; var_1137_string = ""; var_1138_int = 0;
		var_1057_int = var_1135_int;
		func_453(var_1135_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_1139_bool = 0; var_1140_int = 0; var_1141_int = 0;
	var_1058_int = var_1140_int;
	var_1059_int = var_1141_int;
	func_1305(var_1139_bool, var_1140_int, var_1141_int);
	if(var_1139_bool != 0) {
		var_1149_int = 0; var_1150_string = ""; var_1151_string = ""; var_1152_int = 0;
		var_1057_int = var_1149_int;
		func_453(var_1149_int, "pers_nudegirl", "nudegirl.xml", (int)1);
	}
	return 2;
	
}


func_12094(var_5207_bool)
{
	var_5210_int = 0; var_5211_string = "";
	func_106(var_5210_int, "b4q01");
	var_5213_bool = var_5210_int == (int)0;
	if(var_5213_bool != 0) {
		var_5207_bool = 1;
		return 0;
	}
	var_5207_bool = 0;
	return 0;
}


func_10046(var_6129_int, var_6130_float)
{
	var_6131_int = 0; var_6132_int = 0; var_6133_int = 0; var_6134_float = 0;
	var_6130_float = var_6134_float;
	func_12278(var_6131_int, (int)518218, (int)518217, var_6134_float);
	var_6131_int = var_6129_int;
	return 0;
}


func_10055(var_6145_int, var_6146_float)
{
	var_6147_int = 0; var_6148_int = 0; var_6149_int = 0; var_6150_float = 0;
	var_6146_float = var_6150_float;
	func_12278(var_6147_int, (int)518220, (int)518219, var_6150_float);
	var_6147_int = var_6145_int;
	return 0;
}


func_6984(var_4096_int, var_4097_int, var_4098_object, var_4099_object, var_4100_object, var_4101_object)
{
	var_4103_bool = var_4097_int == (int)0;
	if(var_4103_bool != 0) {
		var_4104_int = 0; var_4105_bool = 0;
		func_746((int)13, (bool)0);
		var_4106_int = 0; var_4107_bool = 0; var_4108_int = 0;
		func_763((int)13, (bool)0, (int)1);
		var_4109_int = 0; var_4110_int = 0; var_4111_object = Obj(); var_4112_object = Obj(); var_4113_object = Obj();
		var_4096_int = var_4110_int;
		var_4098_object = var_4111_object;
		var_4099_object = var_4112_object;
		var_4100_object = var_4113_object;
		func_670((int)13, var_4110_int, var_4111_object, var_4112_object, var_4113_object);
		var_4114_object = Obj(); var_4115_int = 0;
		var_4101_object = var_4114_object;
		func_255(var_4114_object, (int)2);
		var_4116_int = 0; var_4117_bool = 0; var_4118_int = 0;
		func_820((int)13, (bool)0, (int)4);
		var_4119_int = 0; var_4120_bool = 0; var_4121_int = 0;
		func_882((int)13, (bool)1, (int)4);
	}
	var_4122_int = 0; var_4123_bool = 0;
	func_729((int)13, (bool)0);
	var_4124_int = 0; var_4125_int = 0; var_4126_int = 0;
	var_4096_int = var_4125_int;
	var_4097_int = var_4126_int;
	func_3609((int)13, var_4125_int, var_4126_int);
	return 0;
}


func_5960(var_3931_int, var_3932_int, var_3933_object, var_3934_object, var_3935_object, var_3936_object)
{
	var_3938_bool = var_3932_int == (int)0;
	if(var_3938_bool != 0) {
		var_3939_int = 0; var_3940_bool = 0;
		func_746((int)8, (bool)0);
		var_3941_int = 0; var_3942_bool = 0; var_3943_int = 0;
		func_763((int)8, (bool)0, (int)1);
		var_3944_int = 0; var_3945_int = 0; var_3946_object = Obj(); var_3947_object = Obj(); var_3948_object = Obj();
		var_3931_int = var_3945_int;
		var_3933_object = var_3946_object;
		var_3934_object = var_3947_object;
		var_3935_object = var_3948_object;
		func_670((int)8, var_3945_int, var_3946_object, var_3947_object, var_3948_object);
		var_3949_object = Obj(); var_3950_int = 0;
		var_3936_object = var_3949_object;
		func_255(var_3949_object, (int)2);
		var_3951_int = 0; var_3952_bool = 0; var_3953_int = 0;
		func_820((int)8, (bool)0, (int)4);
		var_3954_int = 0; var_3955_bool = 0; var_3956_int = 0;
		func_882((int)8, (bool)1, (int)4);
	}
	var_3957_int = 0; var_3958_bool = 0;
	func_729((int)8, (bool)0);
	var_3959_int = 0; var_3960_int = 0; var_3961_int = 0;
	var_3931_int = var_3960_int;
	var_3932_int = var_3961_int;
	func_3609((int)8, var_3960_int, var_3961_int);
	return 0;
}


func_12106(var_5331_bool)
{
	var_5334_int = 0; var_5335_string = "";
	func_106(var_5334_int, "b5q01");
	var_5337_bool = var_5334_int == (int)0;
	if(var_5337_bool != 0) {
		var_5331_bool = 1;
		return 0;
	}
	var_5331_bool = 0;
	return 0;
}


func_2894(var_2435_int, var_2436_int, var_2437_int)
{
	var_2438_int = 0; var_2439_int = 0; var_2440_int = 0; var_2441_int = 0;
	var_2442_bool = 0;
	var_2442_bool = 0;
	var_2444_bool = var_2437_int > (int)8;
	if(var_2444_bool != 0) {
		var_2446_bool = var_2437_int < (int)21;
		if(var_2446_bool != 0) {
			var_2442_bool = 1;
		}
	}
	if(var_2442_bool != 0) {
		var_2447_int = 0; var_2448_string = ""; var_2449_string = ""; var_2450_int = 0;
		var_2435_int = var_2447_int;
		func_453(var_2447_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)6);
		var_2451_int = 0; var_2452_string = ""; var_2453_string = ""; var_2454_int = 0;
		var_2435_int = var_2451_int;
		func_453(var_2451_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)6);
		var_2455_int = 0; var_2456_string = ""; var_2457_string = ""; var_2458_int = 0;
		var_2435_int = var_2455_int;
		func_453(var_2455_int, "pers_rat_big", "rat_big.xml", (int)2);
		var_2459_int = 0; var_2460_string = ""; var_2461_string = ""; var_2462_int = 0;
		var_2435_int = var_2459_int;
		func_479(var_2459_int, "fog", "fog.xml", (int)6);
		var_2464_bool = var_2436_int >= (int)5;
		if(var_2464_bool != 0) {
			var_2465_int = 0; var_2466_string = ""; var_2467_string = ""; var_2468_int = 0;
			var_2435_int = var_2465_int;
			func_479(var_2465_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2470_float = 0; var_2471_int = 0;
		var_2436_int = var_2471_int;
		func_1205(var_2470_float, var_2471_int);
		var_2440_int = (int)1 * var_2470_float;
		var_2472_int = var_2440_int;
		if(var_2472_int != 0) {
			var_2473_int = 0; var_2474_string = ""; var_2475_string = ""; var_2476_int = 0;
			var_2435_int = var_2473_int;
			var_2440_int = var_2476_int;
			func_453(var_2473_int, "pers_bomber", "bomber.xml", var_2476_int);
		}
	} else {
		var_2521_int = 0; var_2522_string = ""; var_2523_string = ""; var_2524_int = 0;
		var_2435_int = var_2521_int;
		func_453(var_2521_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)5);
		var_2525_int = 0; var_2526_string = ""; var_2527_string = ""; var_2528_int = 0;
		var_2435_int = var_2525_int;
		func_453(var_2525_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)5);
		var_2529_int = 0; var_2530_string = ""; var_2531_string = ""; var_2532_int = 0;
		var_2435_int = var_2529_int;
		func_453(var_2529_int, "pers_rat_big", "rat_big.xml", (int)3);
		var_2533_int = 0; var_2534_string = ""; var_2535_string = ""; var_2536_int = 0;
		var_2435_int = var_2533_int;
		func_479(var_2533_int, "fog", "fog.xml", (int)6);
		var_2538_bool = var_2436_int >= (int)5;
		if(var_2538_bool != 0) {
			var_2539_int = 0; var_2540_string = ""; var_2541_string = ""; var_2542_int = 0;
			var_2435_int = var_2539_int;
			func_479(var_2539_int, "fog", "fog_hunter.xml", (int)2);
		}
		var_2544_float = 0; var_2545_int = 0;
		var_2436_int = var_2545_int;
		func_1205(var_2544_float, var_2545_int);
		var_2441_int = (int)1 * var_2544_float;
		var_2546_int = var_2441_int;
		if(var_2546_int == 0) goto Label_3012;
		var_2547_int = 0; var_2548_string = ""; var_2549_string = ""; var_2550_int = 0;
		var_2435_int = var_2547_int;
		var_2441_int = var_2550_int;
		func_453(var_2547_int, "pers_bomber", "bomber.xml", var_2550_int);
	}
Label_3012:
	var_2477_int = 0; var_2478_string = ""; var_2479_string = ""; var_2480_int = 0; var_2481_int = 0; var_2482_int = 0;
	var_2435_int = var_2477_int;
	func_466(var_2477_int, "pers_worker", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2483_int = 0; var_2484_string = ""; var_2485_string = ""; var_2486_int = 0; var_2487_int = 0; var_2488_int = 0;
	var_2435_int = var_2483_int;
	func_466(var_2483_int, "pers_unosha", "agony1_man.xml", (int)2, (int)4, (int)4);
	var_2489_int = 0; var_2490_string = ""; var_2491_string = ""; var_2492_int = 0; var_2493_int = 0; var_2494_int = 0;
	var_2435_int = var_2489_int;
	func_466(var_2489_int, "pers_woman", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2495_int = 0; var_2496_string = ""; var_2497_string = ""; var_2498_int = 0; var_2499_int = 0; var_2500_int = 0;
	var_2435_int = var_2495_int;
	func_466(var_2495_int, "pers_wasted_girl", "agony1_woman.xml", (int)2, (int)4, (int)4);
	var_2501_bool = 0; var_2502_int = 0; var_2503_int = 0;
	var_2436_int = var_2502_int;
	var_2437_int = var_2503_int;
	func_1295(var_2501_bool, var_2502_int, var_2503_int);
	if(var_2501_bool != 0) {
		var_2504_int = 0; var_2505_string = ""; var_2506_string = ""; var_2507_int = 0;
		var_2435_int = var_2504_int;
		func_453(var_2504_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	var_2508_bool = 0; var_2509_int = 0; var_2510_int = 0;
	var_2436_int = var_2509_int;
	var_2437_int = var_2510_int;
	func_1305(var_2508_bool, var_2509_int, var_2510_int);
	if(var_2508_bool != 0) {
		var_2511_int = 0; var_2512_string = ""; var_2513_string = ""; var_2514_int = 0;
		var_2435_int = var_2511_int;
		func_453(var_2511_int, "pers_nudegirl", "nudegirl.xml", (int)1);
	}
	var_2515_bool = 0; var_2516_int = 0;
	var_2436_int = var_2516_int;
	func_1322(var_2515_bool, var_2516_int);
	if(var_2515_bool != 0) {
		var_2517_int = 0; var_2518_string = ""; var_2519_string = ""; var_2520_int = 0;
		var_2435_int = var_2517_int;
		func_453(var_2517_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 4;
	
}


func_10064(var_4716_int, var_4717_float)
{
	var_4718_int = 0; var_4719_int = 0; var_4720_int = 0; var_4721_float = 0;
	var_4717_float = var_4721_float;
	func_12278(var_4718_int, (int)529846, (int)529845, var_4721_float);
	var_4718_int = var_4716_int;
	return 0;
}


func_12118(var_6122_bool)
{
	var_6125_int = 0; var_6126_string = "";
	func_106(var_6125_int, "b2q01");
	var_6128_bool = var_6125_int == (int)0;
	if(var_6128_bool != 0) {
		var_6122_bool = 1;
		return 0;
	}
	var_6122_bool = 0;
	return 0;
}


func_10073(var_6161_int, var_6162_float)
{
	var_6163_int = 0; var_6164_int = 0; var_6165_int = 0; var_6166_float = 0;
	var_6162_float = var_6166_float;
	func_12278(var_6163_int, (int)520462, (int)520461, var_6166_float);
	var_6163_int = var_6161_int;
	return 0;
}


func_11105()
{
	var_4783_object = Obj(); var_4784_object = Obj(); var_4785_object = Obj(); var_4786_object = Obj();
	func_12286(Obj());
	var_4787_object = var_4785_object;
	@@var_4785_object:FindMark(var_4786_object, "b7q01AglajaGotoStarshina");
	var_4795_object = var_4786_object;
	if(var_4795_object != 0) {
		@@var_4786_object:Remove();
	}
	@@var_4785_object:FindMark(var_4786_object, "b7q01BirdmaskGotoMat");
	var_4797_object = var_4786_object;
	if(var_4797_object != 0) {
		@@var_4786_object:Remove();
	}
	@@var_4785_object:FindMark(var_4786_object, "b7q01DankoGotoSobor");
	var_4799_object = var_4786_object;
	if(var_4799_object != 0) {
		@@var_4786_object:Remove();
	}
	@@var_4785_object:FindMark(var_4786_object, "b7q01MatGotoPrison");
	var_4801_object = var_4786_object;
	if(var_4801_object != 0) {
		@@var_4786_object:Remove();
	}
	@@var_4785_object:FindMark(var_4786_object, "b7q01PatrolGotoGorbun");
	var_4803_object = var_4786_object;
	if(var_4803_object != 0) {
		@@var_4786_object:Remove();
	}
	@@var_4785_object:FindMark(var_4786_object, "b7q01ViktorGotoSobor");
	var_4805_object = var_4786_object;
	if(var_4805_object != 0) {
		@@var_4786_object:Remove();
	}
	@@var_4785_object:FindMark(var_4786_object, "b7q01WastedGotoViktor");
	var_4807_object = var_4786_object;
	if(var_4807_object != 0) {
		@@var_4786_object:Remove();
	}
	@@var_4785_object:FindMark(var_4786_object, "b7q03AglajaGotoTheater");
	var_4809_object = var_4786_object;
	if(var_4809_object != 0) {
		@@var_4786_object:Remove();
	}
	var_4810_bool = 0; var_4811_int = 0;
	func_12261(var_4810_bool, (int)253);
	var_4822_bool = 0; var_4823_int = 0;
	func_12261(var_4822_bool, (int)270);
	var_4824_bool = 0; var_4825_int = 0;
	func_12261(var_4824_bool, (int)280);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10082(var_4692_int, var_4693_float)
{
	var_4694_int = 0; var_4695_int = 0; var_4696_int = 0; var_4697_float = 0;
	var_4693_float = var_4697_float;
	func_12278(var_4694_int, (int)529842, (int)529841, var_4697_float);
	var_4694_int = var_4692_int;
	return 0;
}


func_12130(var_6153_bool)
{
	var_6156_int = 0; var_6157_string = "";
	func_106(var_6156_int, "b2MladVladBurahHomeTalk");
	var_6159_bool = var_6156_int == (int)1;
	if(var_6159_bool != 0) {
		var_6153_bool = 1;
		return 0;
	}
	var_6153_bool = 0;
	return 0;
}


func_4970(var_1248_int, var_1249_int, var_1250_object, var_1251_object, var_1252_object, var_1253_object)
{
	var_1255_bool = var_1249_int == (int)0;
	if(var_1255_bool != 0) {
		var_1256_int = 0; var_1257_bool = 0;
		func_746((int)3, (bool)0);
		var_1258_int = 0; var_1259_bool = 0; var_1260_int = 0;
		func_763((int)3, (bool)0, (int)1);
		var_1261_int = 0; var_1262_int = 0; var_1263_object = Obj(); var_1264_object = Obj(); var_1265_object = Obj();
		var_1261_int = 3;
		var_1248_int = var_1262_int;
		var_1250_object = var_1263_object;
		var_1251_object = var_1264_object;
		var_1252_object = var_1265_object;
		func_572(var_1262_int, var_1263_object, var_1264_object, var_1265_object);
		var_1266_object = Obj(); var_1267_int = 0;
		var_1253_object = var_1266_object;
		func_255(var_1266_object, (int)0);
		var_1268_int = 0; var_1269_bool = 0; var_1270_int = 0;
		func_820((int)3, (bool)0, (int)7);
		var_1271_int = 0; var_1272_bool = 0; var_1273_int = 0;
		func_882((int)3, (bool)0, (int)7);
	}
	var_1274_int = 0; var_1275_int = 0;
	var_1249_int = var_1275_int;
	func_933((int)3, var_1275_int);
	var_1291_int = 0; var_1292_int = 0; var_1293_int = 0;
	var_1248_int = var_1292_int;
	var_1249_int = var_1293_int;
	func_1847((int)3, var_1292_int, var_1293_int);
	return 0;
}


func_10091(var_6322_int, var_6323_float)
{
	var_6324_int = 0; var_6325_int = 0; var_6326_int = 0; var_6327_float = 0;
	var_6323_float = var_6327_float;
	func_12278(var_6324_int, (int)519684, (int)519683, var_6327_float);
	var_6324_int = var_6322_int;
	return 0;
}


func_12142(var_5097_bool)
{
	var_5100_int = 0; var_5101_string = "";
	func_106(var_5100_int, "b2q01");
	var_5103_bool = var_5100_int == (int)1000;
	if(var_5103_bool != 0) {
		var_5097_bool = 1;
		return 0;
	}
	var_5097_bool = 0;
	return 0;
}


func_882(var_686_int, var_687_bool, var_688_int)
{
	var_689_string = ""; var_690_object = Obj(); var_691_object = Obj(); var_692_int = 0; var_693_string = ""; var_694_object = Obj(); var_695_string = ""; var_696_object = Obj(); var_697_object = Obj(); var_698_int = 0; var_699_string = ""; var_700_object = Obj();
	var_703_int = var_686_int + (int)1;
	var_695_string = "dr_mark" + var_703_int;
	var_706_int = var_686_int + (int)1;
	var_707_int = "br_" + var_706_int;
	FindActor(var_696_object, var_707_int);
	var_708_bool = var_687_bool;
	if(var_708_bool != 0) {
		var_709_bool = var_696_object == 0; //@nz
		if(var_709_bool != 0) {
			GetMainOutdoorScene(var_697_object);
			var_712_int = var_686_int + (int)1;
			var_713_int = "br_" + var_712_int;
			AddActor(var_696_object, var_713_int, var_697_object, CVector(0.0, 0.0, 0.0));
			var_697_object = 0;
		}
	} else {
		var_723_object = var_696_object;
		if(var_723_object == 0) goto Label_912;
		RemoveActor(var_696_object);
	}
Label_912:
	var_698_int = 1;
	
Label_913:
	var_715_bool = var_698_int <= var_688_int;
	if(var_715_bool != 0) {
		var_717_int = var_695_string + "_";
		var_699_string = var_717_int + var_698_int;
		FindActor(var_700_object, var_699_string);
		var_718_object = var_700_object;
		if(var_718_object != 0) {
			var_719_bool = 0; var_720_string = ""; var_721_string = "";
			var_699_string = var_720_string;
			func_189(var_719_bool, var_720_string, "cleanup");
		}
		var_700_object = 0;
		var_698_int = var_698_int + (int)1;
		goto Label_913;
	}
	return 12;
	
}
EMIT "Stack[-5] = 0";


func_10100(var_4684_int, var_4685_float)
{
	var_4686_int = 0; var_4687_int = 0; var_4688_int = 0; var_4689_float = 0;
	var_4685_float = var_4689_float;
	func_12278(var_4686_int, (int)529848, (int)529847, var_4689_float);
	var_4686_int = var_4684_int;
	return 0;
}


func_12154(var_6137_bool)
{
	var_6140_int = 0; var_6141_string = "";
	func_106(var_6140_int, "b2DankoTalk");
	var_6143_bool = var_6140_int == (int)1;
	if(var_6143_bool != 0) {
		var_6137_bool = 1;
		return 0;
	}
	var_6137_bool = 0;
	return 0;
}


func_7036(var_297_object)
{
	@@var_297_object:add("lc_house7_02");
	@@var_297_object:add("lc_house7_03");
	@@var_297_object:add("lc_house7_04");
	@@var_297_object:add("lc_house7_05");
	@@var_297_object:add("lc_house7_06");
	@@var_297_object:add("lc_house7_07");
	@@var_297_object:add("lc_House6_02");
	@@var_297_object:add("lc_house7_01");
	@@var_297_object:add("lc_house_2_02");
	@@var_297_object:add("lc_House6_01");
	@@var_297_object:add("lc_house3_03_i2");
	@@var_297_object:add("lc_house3_03");
	@@var_297_object:add("lc_House6_03");
	@@var_297_object:add("lc_House6_04");
	return 0;
}


func_6012(var_209_object)
{
	@@var_209_object:add("r3_house_2_02");
	@@var_209_object:add("r3_house3_02_i2");
	@@var_209_object:add("r3_house3_02");
	@@var_209_object:add("r3_house4_05_i2");
	@@var_209_object:add("r3_house4_05");
	@@var_209_object:add("r3_house4_03_i2");
	@@var_209_object:add("r3_house4_04_i2");
	@@var_209_object:add("r3_house4_04");
	@@var_209_object:add("r3_house4_01_i2");
	@@var_209_object:add("r3_house4_01");
	@@var_209_object:add("r3_house_2_01");
	@@var_209_object:add("r3_house4_02_i2");
	@@var_209_object:add("r3_house4_02");
	@@var_209_object:add("r3_house3_01_i2");
	@@var_209_object:add("r3_house3_01");
	return 0;
}


func_10109(var_5434_int, var_5435_float)
{
	var_5436_int = 0; var_5437_int = 0; var_5438_int = 0; var_5439_float = 0;
	var_5435_float = var_5439_float;
	func_12278(var_5436_int, (int)530678, (int)530677, var_5439_float);
	var_5436_int = var_5434_int;
	return 0;
}


func_12166(var_5238_bool)
{
	var_5241_int = 0; var_5242_string = "";
	func_106(var_5241_int, "b7q01");
	var_5244_bool = var_5241_int == (int)0;
	if(var_5244_bool != 0) {
		var_5238_bool = 1;
		return 0;
	}
	var_5238_bool = 0;
	return 0;
}


func_10118(var_5697_int, var_5698_float)
{
	var_5699_int = 0; var_5700_int = 0; var_5701_int = 0; var_5702_float = 0;
	var_5698_float = var_5702_float;
	func_12278(var_5699_int, (int)530680, (int)530679, var_5702_float);
	var_5699_int = var_5697_int;
	return 0;
}


func_9101(var_501_int, var_502_int, var_503_int)
{
	var_504_object = Obj(); var_505_object = Obj(); var_506_object = Obj(); var_507_object = Obj(); var_508_object = Obj(); var_509_object = Obj(); var_510_object = Obj(); var_511_object = Obj();
	var_512_object = GlobalVars[8];
	@@var_512_object:get(var_508_object, var_501_int);
	var_513_object = GlobalVars[9];
	@@var_513_object:get(var_509_object, var_501_int);
	var_514_object = GlobalVars[10];
	@@var_514_object:get(var_510_object, var_501_int);
	var_515_object = GlobalVars[13];
	@@var_515_object:get(var_511_object, var_501_int);
	var_517_bool = var_501_int == (int)0;
	if(var_517_bool != 0) {
		var_518_int = 0; var_519_int = 0; var_520_object = Obj(); var_521_object = Obj(); var_522_object = Obj(); var_523_object = Obj();
		var_502_int = var_518_int;
		var_503_int = var_519_int;
		var_508_object = var_520_object;
		var_509_object = var_521_object;
		var_510_object = var_522_object;
		var_511_object = var_523_object;
		func_4337(var_518_int, var_519_int, var_520_object, var_521_object, var_522_object, var_523_object);
	} else {
		var_885_bool = var_501_int == (int)1;
		if(var_885_bool != 0) {
			var_886_int = 0; var_887_int = 0; var_888_object = Obj(); var_889_object = Obj(); var_890_object = Obj(); var_891_object = Obj();
			var_502_int = var_886_int;
			var_503_int = var_887_int;
			var_508_object = var_888_object;
			var_509_object = var_889_object;
			var_510_object = var_890_object;
			var_511_object = var_891_object;
			func_4534(var_886_int, var_887_int, var_888_object, var_889_object, var_890_object, var_891_object);
			goto Label_9321;
		}
		var_1028_bool = var_501_int == (int)2;
		if(var_1028_bool != 0) {
			var_1029_int = 0; var_1030_int = 0; var_1031_object = Obj(); var_1032_object = Obj(); var_1033_object = Obj(); var_1034_object = Obj();
			var_502_int = var_1029_int;
			var_503_int = var_1030_int;
			var_508_object = var_1031_object;
			var_509_object = var_1032_object;
			var_510_object = var_1033_object;
			var_511_object = var_1034_object;
			func_4740(var_1029_int, var_1030_int, var_1031_object, var_1032_object, var_1033_object, var_1034_object);
			goto Label_9321;
		}
		var_1247_bool = var_501_int == (int)3;
		if(var_1247_bool != 0) {
			var_1248_int = 0; var_1249_int = 0; var_1250_object = Obj(); var_1251_object = Obj(); var_1252_object = Obj(); var_1253_object = Obj();
			var_502_int = var_1248_int;
			var_503_int = var_1249_int;
			var_508_object = var_1250_object;
			var_509_object = var_1251_object;
			var_510_object = var_1252_object;
			var_511_object = var_1253_object;
			func_4970(var_1248_int, var_1249_int, var_1250_object, var_1251_object, var_1252_object, var_1253_object);
			goto Label_9321;
		}
		var_1295_bool = var_501_int == (int)4;
		if(var_1295_bool != 0) {
			var_1296_int = 0; var_1297_int = 0; var_1298_object = Obj(); var_1299_object = Obj(); var_1300_object = Obj(); var_1301_object = Obj();
			var_502_int = var_1296_int;
			var_503_int = var_1297_int;
			var_508_object = var_1298_object;
			var_509_object = var_1299_object;
			var_510_object = var_1300_object;
			var_511_object = var_1301_object;
			func_5188(var_1296_int, var_1297_int, var_1298_object, var_1299_object, var_1300_object, var_1301_object);
			goto Label_9321;
		}
		var_1340_bool = var_501_int == (int)5;
		if(var_1340_bool != 0) {
			var_1341_int = 0; var_1342_int = 0; var_1343_object = Obj(); var_1344_object = Obj(); var_1345_object = Obj(); var_1346_object = Obj();
			var_502_int = var_1341_int;
			var_503_int = var_1342_int;
			var_508_object = var_1343_object;
			var_509_object = var_1344_object;
			var_510_object = var_1345_object;
			var_511_object = var_1346_object;
			func_5433(var_1341_int, var_1342_int, var_1343_object, var_1344_object, var_1345_object, var_1346_object);
			goto Label_9321;
		}
		var_1373_bool = var_501_int == (int)6;
		if(var_1373_bool != 0) {
			var_1374_int = 0; var_1375_int = 0; var_1376_object = Obj(); var_1377_object = Obj(); var_1378_object = Obj(); var_1379_object = Obj();
			var_502_int = var_1374_int;
			var_503_int = var_1375_int;
			var_508_object = var_1376_object;
			var_509_object = var_1377_object;
			var_510_object = var_1378_object;
			var_511_object = var_1379_object;
			func_5591(var_1379_object);
			goto Label_9321;
		}
		var_1383_bool = var_501_int == (int)7;
		if(var_1383_bool != 0) {
			var_1384_int = 0; var_1385_int = 0; var_1386_object = Obj(); var_1387_object = Obj(); var_1388_object = Obj(); var_1389_object = Obj();
			var_502_int = var_1384_int;
			var_503_int = var_1385_int;
			var_508_object = var_1386_object;
			var_509_object = var_1387_object;
			var_510_object = var_1388_object;
			var_511_object = var_1389_object;
			func_5656(var_1384_int, var_1385_int, var_1386_object, var_1387_object, var_1388_object, var_1389_object);
			goto Label_9321;
		}
		var_1570_bool = var_501_int == (int)8;
		if(var_1570_bool != 0) {
			var_1571_int = 0; var_1572_int = 0; var_1573_object = Obj(); var_1574_object = Obj(); var_1575_object = Obj(); var_1576_object = Obj();
			var_502_int = var_1571_int;
			var_503_int = var_1572_int;
			var_508_object = var_1573_object;
			var_509_object = var_1574_object;
			var_510_object = var_1575_object;
			var_511_object = var_1576_object;
			func_5856(var_1571_int, var_1572_int, var_1573_object, var_1574_object, var_1575_object, var_1576_object);
			goto Label_9321;
		}
		var_1603_bool = var_501_int == (int)9;
		if(var_1603_bool != 0) {
			var_1604_int = 0; var_1605_int = 0; var_1606_object = Obj(); var_1607_object = Obj(); var_1608_object = Obj(); var_1609_object = Obj();
			var_502_int = var_1604_int;
			var_503_int = var_1605_int;
			var_508_object = var_1606_object;
			var_509_object = var_1607_object;
			var_510_object = var_1608_object;
			var_511_object = var_1609_object;
			func_6059(var_1604_int, var_1605_int, var_1606_object, var_1607_object, var_1608_object, var_1609_object);
			goto Label_9321;
		}
		var_1636_bool = var_501_int == (int)10;
		if(var_1636_bool != 0) {
			var_1637_int = 0; var_1638_int = 0; var_1639_object = Obj(); var_1640_object = Obj(); var_1641_object = Obj(); var_1642_object = Obj();
			var_502_int = var_1637_int;
			var_503_int = var_1638_int;
			var_508_object = var_1639_object;
			var_509_object = var_1640_object;
			var_510_object = var_1641_object;
			var_511_object = var_1642_object;
			func_6268(var_1637_int, var_1638_int, var_1639_object, var_1640_object, var_1641_object, var_1642_object);
			goto Label_9321;
		}
		var_1669_bool = var_501_int == (int)11;
		if(var_1669_bool != 0) {
			var_1670_int = 0; var_1671_int = 0; var_1672_object = Obj(); var_1673_object = Obj(); var_1674_object = Obj(); var_1675_object = Obj();
			var_502_int = var_1670_int;
			var_503_int = var_1671_int;
			var_508_object = var_1672_object;
			var_509_object = var_1673_object;
			var_510_object = var_1674_object;
			var_511_object = var_1675_object;
			func_6480(var_1670_int, var_1671_int, var_1672_object, var_1673_object, var_1674_object, var_1675_object);
			goto Label_9321;
		}
		var_1702_bool = var_501_int == (int)12;
		if(var_1702_bool != 0) {
			var_1703_int = 0; var_1704_int = 0; var_1705_object = Obj(); var_1706_object = Obj(); var_1707_object = Obj(); var_1708_object = Obj();
			var_502_int = var_1703_int;
			var_503_int = var_1704_int;
			var_508_object = var_1705_object;
			var_509_object = var_1706_object;
			var_510_object = var_1707_object;
			var_511_object = var_1708_object;
			func_6677(var_1703_int, var_1704_int, var_1705_object, var_1706_object, var_1707_object, var_1708_object);
			goto Label_9321;
		}
		var_1735_bool = var_501_int == (int)13;
		if(var_1735_bool != 0) {
			var_1736_int = 0; var_1737_int = 0; var_1738_object = Obj(); var_1739_object = Obj(); var_1740_object = Obj(); var_1741_object = Obj();
			var_502_int = var_1736_int;
			var_503_int = var_1737_int;
			var_508_object = var_1738_object;
			var_509_object = var_1739_object;
			var_510_object = var_1740_object;
			var_511_object = var_1741_object;
			func_6880(var_1736_int, var_1737_int, var_1738_object, var_1739_object, var_1740_object, var_1741_object);
			goto Label_9321;
		}
		var_1768_bool = var_501_int == (int)14;
		if(var_1768_bool != 0) {
			var_1769_int = 0; var_1770_int = 0; var_1771_object = Obj(); var_1772_object = Obj(); var_1773_object = Obj(); var_1774_object = Obj();
			var_502_int = var_1769_int;
			var_503_int = var_1770_int;
			var_508_object = var_1771_object;
			var_509_object = var_1772_object;
			var_510_object = var_1773_object;
			var_511_object = var_1774_object;
			func_7080(var_1769_int, var_1770_int, var_1771_object, var_1772_object, var_1773_object, var_1774_object);
			goto Label_9321;
		}
		var_1946_bool = var_501_int == (int)15;
		if(var_1946_bool == 0) goto Label_9321;
		var_1947_int = 0; var_1948_int = 0; var_1949_object = Obj(); var_1950_object = Obj(); var_1951_object = Obj(); var_1952_object = Obj();
		var_502_int = var_1947_int;
		var_503_int = var_1948_int;
		var_508_object = var_1949_object;
		var_509_object = var_1950_object;
		var_510_object = var_1951_object;
		var_511_object = var_1952_object;
		func_7262(var_1947_int, var_1948_int, var_1949_object, var_1950_object, var_1951_object, var_1952_object);
	}
Label_9321:
	return 8;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_10127(var_4724_int, var_4725_float)
{
	var_4726_int = 0; var_4727_int = 0; var_4728_int = 0; var_4729_float = 0;
	var_4725_float = var_4729_float;
	func_12278(var_4726_int, (int)529852, (int)529851, var_4729_float);
	var_4726_int = var_4724_int;
	return 0;
}


func_3985(var_3248_int, var_3249_int, var_3250_int)
{
	var_3251_int = 0; var_3252_int = 0; var_3253_int = 0; var_3254_int = 0; var_3255_int = 0; var_3256_int = 0; var_3257_int = 0; var_3258_int = 0;
	var_3259_bool = 0;
	var_3259_bool = 0;
	var_3261_bool = var_3250_int > (int)8;
	if(var_3261_bool != 0) {
		var_3263_bool = var_3250_int < (int)21;
		if(var_3263_bool != 0) {
			var_3259_bool = 1;
		}
	}
	if(var_3259_bool != 0) {
		var_3264_int = 0; var_3265_string = ""; var_3266_string = ""; var_3267_int = 0;
		var_3248_int = var_3264_int;
		func_453(var_3264_int, "pers_rat", "rat.xml", (int)4);
		var_3268_int = 0; var_3269_string = ""; var_3270_string = ""; var_3271_int = 0;
		var_3248_int = var_3268_int;
		func_453(var_3268_int, "pers_alkash", "alkash.xml", (int)2);
		var_3272_int = 0; var_3273_string = ""; var_3274_string = ""; var_3275_int = 0;
		var_3248_int = var_3272_int;
		func_453(var_3272_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3277_float = 0; var_3278_int = 0;
		var_3249_int = var_3278_int;
		func_1115(var_3277_float, var_3278_int);
		var_3255_int = (int)2 * var_3277_float;
		var_3323_int = var_3255_int;
		if(var_3323_int != 0) {
			var_3324_int = 0; var_3325_string = ""; var_3326_string = ""; var_3327_int = 0;
			var_3248_int = var_3324_int;
			var_3255_int = var_3327_int;
			func_453(var_3324_int, "pers_grabitel", "grabitel.xml", var_3327_int);
		}
		var_3329_int = var_3249_int + (int)1;
		var_3331_bool = var_3329_int >= (int)2;
		if(var_3331_bool != 0) {
			var_3332_int = 0; var_3333_string = ""; var_3334_string = ""; var_3335_int = 0;
			var_3248_int = var_3332_int;
			func_453(var_3332_int, "pers_patrool", "patrol.xml", (int)2);
			var_3336_bool = 0; var_3337_int = 0;
			var_3249_int = var_3337_int;
			func_1322(var_3336_bool, var_3337_int);
			if(var_3336_bool != 0) {
				var_3338_int = 0; var_3339_string = ""; var_3340_string = ""; var_3341_int = 0;
				var_3248_int = var_3338_int;
				func_453(var_3338_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3343_float = 0; var_3344_int = 0;
		var_3249_int = var_3344_int;
		func_1205(var_3343_float, var_3344_int);
		var_3256_int = (int)1 * var_3343_float;
		var_3345_int = var_3256_int;
		if(var_3345_int != 0) {
			var_3346_int = 0; var_3347_string = ""; var_3348_string = ""; var_3349_int = 0;
			var_3248_int = var_3346_int;
			var_3256_int = var_3349_int;
			func_453(var_3346_int, "pers_bomber", "bomber.xml", var_3349_int);
		}
	} else {
		var_3356_int = 0; var_3357_string = ""; var_3358_string = ""; var_3359_int = 0;
		var_3248_int = var_3356_int;
		func_453(var_3356_int, "pers_rat", "rat.xml", (int)7);
		var_3360_int = 0; var_3361_string = ""; var_3362_string = ""; var_3363_int = 0;
		var_3248_int = var_3360_int;
		func_453(var_3360_int, "pers_alkash", "alkash.xml", (int)1);
		var_3364_int = 0; var_3365_string = ""; var_3366_string = ""; var_3367_int = 0;
		var_3248_int = var_3364_int;
		func_453(var_3364_int, "pers_dohodyaga", "dohodyaga.xml", (int)1);
		var_3369_float = 0; var_3370_int = 0;
		var_3249_int = var_3370_int;
		func_1115(var_3369_float, var_3370_int);
		var_3257_int = (int)2 * var_3369_float;
		var_3371_int = var_3257_int;
		if(var_3371_int != 0) {
			var_3372_int = 0; var_3373_string = ""; var_3374_string = ""; var_3375_int = 0;
			var_3248_int = var_3372_int;
			var_3257_int = var_3375_int;
			func_453(var_3372_int, "pers_grabitel", "grabitel.xml", var_3375_int);
		}
		var_3377_int = var_3249_int + (int)1;
		var_3379_bool = var_3377_int >= (int)2;
		if(var_3379_bool != 0) {
			var_3380_int = 0; var_3381_string = ""; var_3382_string = ""; var_3383_int = 0;
			var_3248_int = var_3380_int;
			func_453(var_3380_int, "pers_patrool", "patrol.xml", (int)1);
			var_3384_bool = 0; var_3385_int = 0;
			var_3249_int = var_3385_int;
			func_1322(var_3384_bool, var_3385_int);
			if(var_3384_bool != 0) {
				var_3386_int = 0; var_3387_string = ""; var_3388_string = ""; var_3389_int = 0;
				var_3248_int = var_3386_int;
				func_453(var_3386_int, "pers_soldat_hand", "soldier_patrol.xml", (int)1);
			}
		}
		var_3391_float = 0; var_3392_int = 0;
		var_3249_int = var_3392_int;
		func_1205(var_3391_float, var_3392_int);
		var_3258_int = (int)1 * var_3391_float;
		var_3393_int = var_3258_int;
		if(var_3393_int == 0) goto Label_4147;
		var_3394_int = 0; var_3395_string = ""; var_3396_string = ""; var_3397_int = 0;
		var_3248_int = var_3394_int;
		var_3258_int = var_3397_int;
		func_453(var_3394_int, "pers_bomber", "bomber.xml", var_3397_int);
	}
Label_4147:
	var_3350_bool = 0; var_3351_int = 0;
	var_3249_int = var_3351_int;
	func_1322(var_3350_bool, var_3351_int);
	if(var_3350_bool != 0) {
		var_3352_int = 0; var_3353_string = ""; var_3354_string = ""; var_3355_int = 0;
		var_3248_int = var_3352_int;
		func_453(var_3352_int, "pers_sanitar", "sanitar.xml", (int)1);
	}
	return 8;
	
}


func_12178(var_5549_bool)
{
	var_5549_bool = 0;
	return 0;
}


func_12181()
{
	var_4882_object = Obj(); var_4883_object = Obj();
	CreateDiaryEntry(var_4883_object, (int)562, (int)0, (int)530576);
	var_4887_bool = 0; var_4888_object = Obj(); var_4889_int = 0;
	var_4883_object = var_4888_object;
	func_12233(var_4887_bool, var_4888_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10136(var_5492_int, var_5493_float)
{
	var_5494_int = 0; var_5495_int = 0; var_5496_int = 0; var_5497_float = 0;
	var_5493_float = var_5497_float;
	func_12278(var_5494_int, (int)530601, (int)530600, var_5497_float);
	var_5494_int = var_5492_int;
	return 0;
}


func_5022(var_2553_int, var_2554_int, var_2555_object, var_2556_object, var_2557_object, var_2558_object)
{
	var_2560_bool = var_2554_int == (int)0;
	if(var_2560_bool != 0) {
		var_2561_int = 0; var_2562_bool = 0;
		func_746((int)3, (bool)1);
		var_2563_int = 0; var_2564_bool = 0; var_2565_int = 0;
		func_763((int)3, (bool)1, (int)1);
		var_2566_int = 0; var_2567_int = 0; var_2568_object = Obj(); var_2569_object = Obj(); var_2570_object = Obj();
		var_2553_int = var_2567_int;
		var_2555_object = var_2568_object;
		var_2556_object = var_2569_object;
		var_2557_object = var_2570_object;
		func_591((int)3, var_2567_int, var_2568_object, var_2569_object, var_2570_object);
		var_2571_object = Obj(); var_2572_int = 0;
		var_2558_object = var_2571_object;
		func_255(var_2571_object, (int)1);
		var_2573_int = 0; var_2574_bool = 0; var_2575_int = 0;
		func_820((int)3, (bool)1, (int)7);
		var_2576_int = 0; var_2577_bool = 0; var_2578_int = 0;
		func_882((int)3, (bool)0, (int)7);
	}
	var_2579_int = 0; var_2580_bool = 0;
	func_729((int)3, (bool)0);
	var_2581_int = 0; var_2582_int = 0; var_2583_int = 0;
	var_2553_int = var_2582_int;
	var_2554_int = var_2583_int;
	func_2894((int)3, var_2582_int, var_2583_int);
	return 0;
}


func_10145(var_5773_int, var_5774_float)
{
	var_5775_int = 0; var_5776_int = 0; var_5777_int = 0; var_5778_float = 0;
	var_5774_float = var_5778_float;
	func_12278(var_5775_int, (int)533050, (int)533049, var_5778_float);
	var_5775_int = var_5773_int;
	return 0;
}


func_12194()
{
	var_4910_object = Obj(); var_4911_object = Obj();
	CreateDiaryEntry(var_4911_object, (int)564, (int)0, (int)530578);
	var_4915_bool = 0; var_4916_object = Obj(); var_4917_int = 0;
	var_4911_object = var_4916_object;
	func_12233(var_4915_bool, var_4916_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_933(var_1274_int, var_1275_int)
{
	var_1276_bool = 0;
	var_1276_bool = 1;
	var_1277_bool = 0;
	var_1277_bool = 1;
	var_1279_bool = var_1275_int >= (int)20;
	if(var_1279_bool != 1) {
		var_1281_bool = var_1275_int < (int)2;
		if(var_1281_bool != 1) {
			var_1277_bool = 0;
		}
	}
	if(var_1277_bool != 1) {
		var_1282_bool = 0;
		var_1282_bool = 0;
		var_1284_bool = var_1275_int >= (int)6;
		if(var_1284_bool != 0) {
			var_1286_bool = var_1275_int < (int)10;
			if(var_1286_bool != 0) {
				var_1282_bool = 1;
			}
		}
		if(var_1282_bool != 1) {
			var_1276_bool = 0;
		}
	}
	if(var_1276_bool != 0) {
		var_1287_int = 0; var_1288_bool = 0;
		var_1274_int = var_1287_int;
		func_729(var_1287_int, (bool)1);
	} else {
		var_1289_int = 0; var_1290_bool = 0;
		var_1274_int = var_1289_int;
		func_729(var_1289_int, (bool)0);
	}
	return 0;
	
}


func_7080(var_1769_int, var_1770_int, var_1771_object, var_1772_object, var_1773_object, var_1774_object)
{
	var_1776_bool = var_1770_int == (int)0;
	if(var_1776_bool != 0) {
		var_1777_int = 0; var_1778_bool = 0;
		func_746((int)14, (bool)0);
		var_1779_int = 0; var_1780_bool = 0; var_1781_int = 0;
		func_763((int)14, (bool)0, (int)1);
		var_1782_int = 0; var_1783_int = 0; var_1784_object = Obj(); var_1785_object = Obj(); var_1786_object = Obj();
		var_1782_int = 14;
		var_1769_int = var_1783_int;
		var_1771_object = var_1784_object;
		var_1772_object = var_1785_object;
		var_1773_object = var_1786_object;
		func_572(var_1783_int, var_1784_object, var_1785_object, var_1786_object);
		var_1787_object = Obj(); var_1788_int = 0;
		var_1774_object = var_1787_object;
		func_255(var_1787_object, (int)0);
		var_1789_int = 0; var_1790_bool = 0; var_1791_int = 0;
		func_820((int)14, (bool)0, (int)5);
		var_1792_int = 0; var_1793_bool = 0; var_1794_int = 0;
		func_882((int)14, (bool)0, (int)5);
	}
	var_1795_int = 0; var_1796_int = 0;
	var_1770_int = var_1796_int;
	func_1037((int)14, var_1796_int);
	var_1806_int = 0; var_1807_int = 0; var_1808_int = 0;
	var_1769_int = var_1807_int;
	var_1770_int = var_1808_int;
	func_1326((int)14, var_1807_int, var_1808_int);
	return 0;
}


func_10154(var_5089_int, var_5090_float)
{
	var_5091_int = 0; var_5092_int = 0; var_5093_int = 0; var_5094_float = 0;
	var_5090_float = var_5094_float;
	func_12278(var_5091_int, (int)529850, (int)529849, var_5094_float);
	var_5091_int = var_5089_int;
	return 0;
}


func_6059(var_1604_int, var_1605_int, var_1606_object, var_1607_object, var_1608_object, var_1609_object)
{
	var_1611_bool = var_1605_int == (int)0;
	if(var_1611_bool != 0) {
		var_1612_int = 0; var_1613_bool = 0;
		func_746((int)9, (bool)0);
		var_1614_int = 0; var_1615_bool = 0; var_1616_int = 0;
		func_763((int)9, (bool)0, (int)1);
		var_1617_int = 0; var_1618_int = 0; var_1619_object = Obj(); var_1620_object = Obj(); var_1621_object = Obj();
		var_1617_int = 9;
		var_1604_int = var_1618_int;
		var_1606_object = var_1619_object;
		var_1607_object = var_1620_object;
		var_1608_object = var_1621_object;
		func_572(var_1618_int, var_1619_object, var_1620_object, var_1621_object);
		var_1622_object = Obj(); var_1623_int = 0;
		var_1609_object = var_1622_object;
		func_255(var_1622_object, (int)0);
		var_1624_int = 0; var_1625_bool = 0; var_1626_int = 0;
		func_820((int)9, (bool)0, (int)7);
		var_1627_int = 0; var_1628_bool = 0; var_1629_int = 0;
		func_882((int)9, (bool)0, (int)7);
	}
	var_1630_int = 0; var_1631_int = 0;
	var_1605_int = var_1631_int;
	func_1000((int)9, var_1631_int);
	var_1632_int = 0; var_1633_int = 0; var_1634_int = 0;
	var_1604_int = var_1633_int;
	var_1605_int = var_1634_int;
	func_1574((int)9, var_1633_int, var_1634_int);
	return 0;
}


func_11181()
{
	var_4937_object = Obj(); var_4938_object = Obj(); var_4939_object = Obj(); var_4940_object = Obj();
	func_12286(Obj());
	var_4941_object = var_4939_object;
	@@var_4939_object:FindMark(var_4940_object, "b8q01GrifGotoKlara");
	var_4943_object = var_4940_object;
	if(var_4943_object != 0) {
		@@var_4940_object:Remove();
	}
	@@var_4939_object:FindMark(var_4940_object, "b8q01KapellaGotoKlara");
	var_4945_object = var_4940_object;
	if(var_4945_object != 0) {
		@@var_4940_object:Remove();
	}
	@@var_4939_object:FindMark(var_4940_object, "b8q01NotkinGotoKlara");
	var_4947_object = var_4940_object;
	if(var_4947_object != 0) {
		@@var_4940_object:Remove();
	}
	@@var_4939_object:FindMark(var_4940_object, "b8q03GeorgGotoKaterina");
	var_4949_object = var_4940_object;
	if(var_4949_object != 0) {
		@@var_4940_object:Remove();
	}
	@@var_4939_object:FindMark(var_4940_object, "b8q03KaterinaGotoMat");
	var_4951_object = var_4940_object;
	if(var_4951_object != 0) {
		@@var_4940_object:Remove();
	}
	var_4952_bool = 0; var_4953_int = 0;
	func_12261(var_4952_bool, (int)293);
	var_4954_bool = 0; var_4955_int = 0;
	func_12261(var_4954_bool, (int)284);
	var_4956_bool = 0; var_4957_int = 0;
	func_12261(var_4956_bool, (int)575);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_12207()
{
	var_5060_object = Obj(); var_5061_object = Obj();
	CreateDiaryEntry(var_5061_object, (int)565, (int)0, (int)530579);
	var_5065_bool = 0; var_5066_object = Obj(); var_5067_int = 0;
	var_5061_object = var_5066_object;
	func_12233(var_5065_bool, var_5066_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10163(var_5214_int, var_5215_float)
{
	var_5216_int = 0; var_5217_int = 0; var_5218_int = 0; var_5219_float = 0;
	var_5215_float = var_5219_float;
	func_12278(var_5216_int, (int)529862, (int)529861, var_5219_float);
	var_5216_int = var_5214_int;
	return 0;
}


func_12220(var_4896_object)
{
	var_4897_object = Obj(); var_4898_object = Obj();
	GetDiaryRoot(var_4898_object);
	var_4899_bool = var_4898_object == 0; //@nz
	if(var_4899_bool != 0) {
		Trace("Can't retrieve diary root");
		var_4896_object = 0;
		return 2;
	}
	var_4898_object = var_4896_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_10172(var_5292_int, var_5293_float)
{
	var_5294_int = 0; var_5295_int = 0; var_5296_int = 0; var_5297_float = 0;
	var_5293_float = var_5297_float;
	func_12278(var_5294_int, (int)529866, (int)529865, var_5297_float);
	var_5294_int = var_5292_int;
	return 0;
}


func_10181(var_4732_int, var_4733_float)
{
	var_4734_int = 0; var_4735_int = 0; var_4736_int = 0; var_4737_float = 0;
	var_4733_float = var_4737_float;
	func_12278(var_4734_int, (int)529854, (int)529853, var_4737_float);
	var_4734_int = var_4732_int;
	return 0;
}


func_12233(var_4887_bool, var_4888_object, var_4889_int)
{
	var_4890_object = Obj(); var_4891_object = Obj(); var_4892_int = 0; var_4893_object = Obj(); var_4894_object = Obj(); var_4895_int = 0;
	func_12220(Obj());
	var_4896_object = var_4893_object;
	@@var_4893_object:Find(var_4889_int, var_4894_object);
	var_4901_bool = var_4894_object == 0; //@nz
	if(var_4901_bool != 0) {
		var_4903_int = "Can't find diary parent with id: " + var_4889_int;
		Trace(var_4903_int);
		var_4887_bool = 0;
		return 6;
	}
	@@var_4894_object:AddChild(var_4888_object);
	SendWorldWndMessage((int)7);
	@@var_4888_object:GetCategory(var_4895_int);
	SetDiarySection(var_4895_int);
	var_4887_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_970(var_1322_int, var_1323_int)
{
	var_1324_bool = 0;
	var_1324_bool = 1;
	var_1326_bool = var_1323_int >= (int)20;
	if(var_1326_bool != 1) {
		var_1327_bool = 0;
		var_1327_bool = 0;
		var_1329_bool = var_1323_int >= (int)6;
		if(var_1329_bool != 0) {
			var_1331_bool = var_1323_int < (int)10;
			if(var_1331_bool != 0) {
				var_1327_bool = 1;
			}
		}
		if(var_1327_bool != 1) {
			var_1324_bool = 0;
		}
	}
	if(var_1324_bool != 0) {
		var_1332_int = 0; var_1333_bool = 0;
		var_1322_int = var_1332_int;
		func_729(var_1332_int, (bool)1);
	} else {
		var_1334_int = 0; var_1335_bool = 0;
		var_1322_int = var_1334_int;
		func_729(var_1334_int, (bool)0);
	}
	return 0;
	
}


func_10190(var_5230_int, var_5231_float)
{
	var_5232_int = 0; var_5233_int = 0; var_5234_int = 0; var_5235_float = 0;
	var_5231_float = var_5235_float;
	func_12278(var_5232_int, (int)529864, (int)529863, var_5235_float);
	var_5232_int = var_5230_int;
	return 0;
}


func_5074(var_3679_int, var_3680_int, var_3681_object, var_3682_object, var_3683_object, var_3684_object)
{
	var_3686_bool = var_3680_int == (int)0;
	if(var_3686_bool != 0) {
		var_3687_int = 0; var_3688_bool = 0;
		func_746((int)3, (bool)0);
		var_3689_int = 0; var_3690_bool = 0; var_3691_int = 0;
		func_763((int)3, (bool)0, (int)1);
		var_3692_int = 0; var_3693_int = 0; var_3694_object = Obj(); var_3695_object = Obj(); var_3696_object = Obj();
		var_3679_int = var_3693_int;
		var_3681_object = var_3694_object;
		var_3682_object = var_3695_object;
		var_3683_object = var_3696_object;
		func_670((int)3, var_3693_int, var_3694_object, var_3695_object, var_3696_object);
		var_3697_object = Obj(); var_3698_int = 0;
		var_3684_object = var_3697_object;
		func_255(var_3697_object, (int)2);
		var_3699_int = 0; var_3700_bool = 0; var_3701_int = 0;
		func_820((int)3, (bool)0, (int)7);
		var_3702_int = 0; var_3703_bool = 0; var_3704_int = 0;
		func_882((int)3, (bool)1, (int)7);
	}
	var_3705_int = 0; var_3706_bool = 0;
	func_729((int)3, (bool)0);
	var_3707_int = 0; var_3708_int = 0; var_3709_int = 0;
	var_3679_int = var_3708_int;
	var_3680_int = var_3709_int;
	func_3797((int)3, var_3708_int, var_3709_int);
	return 0;
}


func_8150()
{
	var_4382_object = Obj(); var_4383_object = Obj();
	GetMainOutdoorScene(var_4383_object);
	var_4384_object = GlobalVars[0];
	var_4385_object = Obj(); var_4386_object = Obj(); var_4387_int = 0;
	var_4383_object = var_4386_object;
	func_7712(var_4385_object, var_4386_object, (int)1);
	var_4385_object = var_4384_object;
	GlobalVars[0] = var_4384_object;
	var_4407_object = GlobalVars[1];
	var_4408_object = Obj(); var_4409_object = Obj(); var_4410_int = 0;
	var_4383_object = var_4409_object;
	func_7712(var_4408_object, var_4409_object, (int)2);
	var_4408_object = var_4407_object;
	GlobalVars[1] = var_4407_object;
	var_4411_object = GlobalVars[2];
	var_4412_object = Obj(); var_4413_object = Obj(); var_4414_int = 0;
	var_4383_object = var_4413_object;
	func_7712(var_4412_object, var_4413_object, (int)3);
	var_4412_object = var_4411_object;
	GlobalVars[2] = var_4411_object;
	var_4415_object = GlobalVars[3];
	var_4416_object = Obj(); var_4417_object = Obj(); var_4418_int = 0;
	var_4383_object = var_4417_object;
	func_7712(var_4416_object, var_4417_object, (int)4);
	var_4416_object = var_4415_object;
	GlobalVars[3] = var_4415_object;
	var_4419_object = GlobalVars[4];
	var_4420_object = Obj(); var_4421_object = Obj(); var_4422_int = 0;
	var_4383_object = var_4421_object;
	func_7712(var_4420_object, var_4421_object, (int)5);
	var_4420_object = var_4419_object;
	GlobalVars[4] = var_4419_object;
	var_4423_object = GlobalVars[5];
	var_4424_object = Obj(); var_4425_object = Obj(); var_4426_int = 0;
	var_4383_object = var_4425_object;
	func_7712(var_4424_object, var_4425_object, (int)6);
	var_4424_object = var_4423_object;
	GlobalVars[5] = var_4423_object;
	var_4427_object = GlobalVars[12];
	func_100(Obj());
	var_4428_object = var_4427_object;
	GlobalVars[12] = var_4427_object;
	var_4429_bool = 0;
	func_7723((bool)0);
	func_8698();
	func_8773();
	SendWorldWndMessage((int)100);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10199(var_5757_int, var_5758_float)
{
	var_5759_int = 0; var_5760_int = 0; var_5761_int = 0; var_5762_float = 0;
	var_5758_float = var_5762_float;
	func_12278(var_5759_int, (int)531085, (int)531084, var_5762_float);
	var_5759_int = var_5757_int;
	return 0;
}


func_7132(var_2999_int, var_3000_int, var_3001_object, var_3002_object, var_3003_object, var_3004_object)
{
	var_3006_bool = var_3000_int == (int)0;
	if(var_3006_bool != 0) {
		var_3007_int = 0; var_3008_bool = 0;
		func_746((int)14, (bool)1);
		var_3009_int = 0; var_3010_bool = 0; var_3011_int = 0;
		func_763((int)14, (bool)1, (int)1);
		var_3012_int = 0; var_3013_int = 0; var_3014_object = Obj(); var_3015_object = Obj(); var_3016_object = Obj();
		var_2999_int = var_3013_int;
		var_3001_object = var_3014_object;
		var_3002_object = var_3015_object;
		var_3003_object = var_3016_object;
		func_591((int)14, var_3013_int, var_3014_object, var_3015_object, var_3016_object);
		var_3017_object = Obj(); var_3018_int = 0;
		var_3004_object = var_3017_object;
		func_255(var_3017_object, (int)1);
		var_3019_int = 0; var_3020_bool = 0; var_3021_int = 0;
		func_820((int)14, (bool)1, (int)5);
		var_3022_int = 0; var_3023_bool = 0; var_3024_int = 0;
		func_882((int)14, (bool)0, (int)5);
	}
	var_3025_int = 0; var_3026_bool = 0;
	func_729((int)14, (bool)0);
	var_3027_int = 0; var_3028_int = 0; var_3029_int = 0;
	var_2999_int = var_3028_int;
	var_3000_int = var_3029_int;
	func_2534((int)14, var_3028_int, var_3029_int);
	return 0;
}


func_6111(var_2834_int, var_2835_int, var_2836_object, var_2837_object, var_2838_object, var_2839_object)
{
	var_2841_bool = var_2835_int == (int)0;
	if(var_2841_bool != 0) {
		var_2842_int = 0; var_2843_bool = 0;
		func_746((int)9, (bool)1);
		var_2844_int = 0; var_2845_bool = 0; var_2846_int = 0;
		func_763((int)9, (bool)1, (int)1);
		var_2847_int = 0; var_2848_int = 0; var_2849_object = Obj(); var_2850_object = Obj(); var_2851_object = Obj();
		var_2834_int = var_2848_int;
		var_2836_object = var_2849_object;
		var_2837_object = var_2850_object;
		var_2838_object = var_2851_object;
		func_591((int)9, var_2848_int, var_2849_object, var_2850_object, var_2851_object);
		var_2852_object = Obj(); var_2853_int = 0;
		var_2839_object = var_2852_object;
		func_255(var_2852_object, (int)1);
		var_2854_int = 0; var_2855_bool = 0; var_2856_int = 0;
		func_820((int)9, (bool)1, (int)7);
		var_2857_int = 0; var_2858_bool = 0; var_2859_int = 0;
		func_882((int)9, (bool)0, (int)7);
	}
	var_2860_int = 0; var_2861_bool = 0;
	func_729((int)9, (bool)0);
	var_2862_int = 0; var_2863_int = 0; var_2864_int = 0;
	var_2834_int = var_2863_int;
	var_2835_int = var_2864_int;
	func_2714((int)9, var_2863_int, var_2864_int);
	return 0;
}


func_10208(var_5705_int, var_5706_float)
{
	var_5707_int = 0; var_5708_int = 0; var_5709_int = 0; var_5710_float = 0;
	var_5706_float = var_5710_float;
	func_12278(var_5707_int, (int)538402, (int)538401, var_5710_float);
	var_5707_int = var_5705_int;
	return 0;
}


func_11236()
{
	var_5142_object = Obj(); var_5143_object = Obj(); var_5144_object = Obj(); var_5145_object = Obj();
	func_12286(Obj());
	var_5146_object = var_5144_object;
	@@var_5144_object:FindMark(var_5145_object, "b9q01MDobermanGotoFactory");
	var_5148_object = var_5145_object;
	if(var_5148_object != 0) {
		@@var_5145_object:Remove();
	}
	@@var_5144_object:FindMark(var_5145_object, "b9q03Bonfire1");
	var_5150_object = var_5145_object;
	if(var_5150_object != 0) {
		@@var_5145_object:Remove();
	}
	@@var_5144_object:FindMark(var_5145_object, "b9q03Bonfire2");
	var_5152_object = var_5145_object;
	if(var_5152_object != 0) {
		@@var_5145_object:Remove();
	}
	@@var_5144_object:FindMark(var_5145_object, "b9q03Bonfire3");
	var_5154_object = var_5145_object;
	if(var_5154_object != 0) {
		@@var_5145_object:Remove();
	}
	@@var_5144_object:FindMark(var_5145_object, "b9q03Bonfire4");
	var_5156_object = var_5145_object;
	if(var_5156_object != 0) {
		@@var_5145_object:Remove();
	}
	@@var_5144_object:FindMark(var_5145_object, "b9q03DobermanGotoFollower");
	var_5158_object = var_5145_object;
	if(var_5158_object != 0) {
		@@var_5145_object:Remove();
	}
	@@var_5144_object:FindMark(var_5145_object, "b9q03KapellaGotoSpi4ka");
	var_5160_object = var_5145_object;
	if(var_5160_object != 0) {
		@@var_5145_object:Remove();
	}
	@@var_5144_object:FindMark(var_5145_object, "b9q01BlockGotoBoiny");
	var_5162_object = var_5145_object;
	if(var_5162_object != 0) {
		@@var_5145_object:Remove();
	}
	@@var_5144_object:FindMark(var_5145_object, "b9Block");
	var_5164_object = var_5145_object;
	if(var_5164_object != 0) {
		@@var_5145_object:Remove();
	}
	var_5165_bool = 0; var_5166_int = 0;
	func_12261(var_5165_bool, (int)297);
	var_5167_bool = 0; var_5168_int = 0;
	func_12261(var_5167_bool, (int)532);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_12261(var_4810_bool, var_4811_int)
{
	var_4812_object = Obj(); var_4813_object = Obj(); var_4814_object = Obj(); var_4815_object = Obj();
	func_12220(Obj());
	var_4816_object = var_4814_object;
	@@var_4814_object:Find(var_4811_int, var_4815_object);
	var_4821_bool = var_4815_object == 0; //@nz
	if(var_4821_bool != 0) {
		var_4810_bool = 0;
		return 4;
	}
	@@var_4815_object:Remove();
	var_4810_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1000(var_724_int, var_725_int)
{
	var_726_bool = 0;
	var_726_bool = 1;
	var_727_bool = 0;
	var_727_bool = 1;
	var_729_bool = var_725_int >= (int)22;
	if(var_729_bool != 1) {
		var_731_bool = var_725_int < (int)4;
		if(var_731_bool != 1) {
			var_727_bool = 0;
		}
	}
	if(var_727_bool != 1) {
		var_732_bool = 0;
		var_732_bool = 0;
		var_734_bool = var_725_int >= (int)6;
		if(var_734_bool != 0) {
			var_736_bool = var_725_int < (int)8;
			if(var_736_bool != 0) {
				var_732_bool = 1;
			}
		}
		if(var_732_bool != 1) {
			var_726_bool = 0;
		}
	}
	if(var_726_bool != 0) {
		var_737_int = 0; var_738_bool = 0;
		var_724_int = var_737_int;
		func_729(var_737_int, (bool)1);
	} else {
		var_748_int = 0; var_749_bool = 0;
		var_724_int = var_748_int;
		func_729(var_748_int, (bool)0);
	}
	return 0;
	
}


func_10217(var_5338_int, var_5339_float)
{
	var_5340_int = 0; var_5341_int = 0; var_5342_int = 0; var_5343_float = 0;
	var_5339_float = var_5343_float;
	func_12278(var_5340_int, (int)529868, (int)529867, var_5343_float);
	var_5340_int = var_5338_int;
	return 0;
}


func_10226(var_5176_int, var_5177_float)
{
	var_5178_int = 0; var_5179_int = 0; var_5180_int = 0; var_5181_float = 0;
	var_5177_float = var_5181_float;
	func_12278(var_5178_int, (int)529870, (int)529869, var_5181_float);
	var_5178_int = var_5176_int;
	return 0;
}


func_12278(var_4949_int, var_4950_int, var_4951_int, var_4952_float)
{
	var_4953_int = 0; var_4954_int = 0;
	AddMessage(var_4950_int, var_4951_int, var_4952_float, var_4954_int);
	SendWorldWndMessage((int)6);
	var_4954_int = var_4949_int;
	return 2;
}


func_10235(var_4740_int, var_4741_float)
{
	var_4742_int = 0; var_4743_int = 0; var_4744_int = 0; var_4745_float = 0;
	var_4741_float = var_4745_float;
	func_12278(var_4742_int, (int)529856, (int)529855, var_4745_float);
	var_4742_int = var_4740_int;
	return 0;
}


func_12286(var_4854_object)
{
	var_4855_object = Obj(); var_4856_object = Obj(); var_4857_object = Obj(); var_4858_object = Obj();
	GetMainOutdoorScene(var_4857_object);
	var_4859_bool = var_4857_object == 0; //@ne
	if(var_4859_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_4858_object = 0;
		var_4858_object = var_4854_object;
		return 4;
	}
	@@var_4857_object:GetMap(var_4858_object);
	var_4858_object = var_4854_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


