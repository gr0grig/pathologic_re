GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:pt_gatherer_fire2
	W:scripted
	W:bonfire.xml
	W:init_kabak
	W:shouse1_kabak
	W:noandrei
	W:pt_d7q04_wastedmale1
	W:pers_wasted_male
	W:d7q04_wastedmale.xml
	W:pt_d7q04_wastedmale2
	W:init_andrei
	W:pt_d7q04_andrei
	W:NPC_Andrei
	W:d7q04_andrei.xml
	W:pt_d7q04_nude
	W:pers_nudegirl
	W:d7q04_nudegirl.xml
	W:pt_d7q04_enemy1
	W:pers_morlok
	W:d7q04_e_morlok.xml
	A:add
	W:pt_d7q04_enemy2
	W:pers_butcher
	W:d7q04_e_butcher.xml
	W:pt_d7q04_enemy3
	W:pt_d7q04_enemy4
	W:pt_d7q04_enemy5
	W:pt_d7q04_enemy6
	W:fail
	W:completed
	W:d7q04
	W:cleanup
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:size
	A:get
// @pool_raw:700074005f00670061007400680065007200650072005f0066006900720065003200000073006300720069007000740065006400000062006f006e0066006900720065002e0078006d006c00000069006e00690074005f006b006100620061006b000000730068006f0075007300650031005f006b006100620061006b0000006e006f0061006e0064007200650069000000700074005f00640037007100300034005f007700610073007400650064006d0061006c0065003100000070006500720073005f007700610073007400650064005f006d0061006c0065000000640037007100300034005f007700610073007400650064006d0061006c0065002e0078006d006c000000700074005f00640037007100300034005f007700610073007400650064006d0061006c0065003200000069006e00690074005f0061006e0064007200650069000000700074005f00640037007100300034005f0061006e00640072006500690000004e00500043005f0041006e0064007200650069000000640037007100300034005f0061006e0064007200650069002e0078006d006c000000700074005f00640037007100300034005f006e00750064006500000070006500720073005f006e007500640065006700690072006c000000640037007100300034005f006e007500640065006700690072006c002e0078006d006c000000700074005f00640037007100300034005f0065006e0065006d0079003100000070006500720073005f006d006f0072006c006f006b000000640037007100300034005f0065005f006d006f0072006c006f006b002e0078006d006c00000061646400700074005f00640037007100300034005f0065006e0065006d0079003200000070006500720073005f0062007500740063006800650072000000640037007100300034005f0065005f0062007500740063006800650072002e0078006d006c000000700074005f00640037007100300034005f0065006e0065006d00790033000000700074005f00640037007100300034005f0065006e0065006d00790034000000700074005f00640037007100300034005f0065006e0065006d00790035000000700074005f00640037007100300034005f0065006e0065006d007900360000006600610069006c00000063006f006d0070006c006500740065006400000064003700710030003400000063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000073697a650067657400

Import:
	GetMainOutdoorScene (1 args)
	CreateObjectVector (1 args)
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	AddActorByType (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x12 Vars = (string)
		EVENT_9 Op = 0xe0 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: PushEmpty(object, object, string, string, string)
0x4: Stack[-6] = Stack[-4]
0x5: Stack[-3] = "pt_gatherer_fire2" // @poff=0
0x6: Stack[-2] = "scripted" // @poff=36
0x7: Stack[-1] = "bonfire.xml" // @poff=54
0x8: Call2 0xfd

0x9: Pop(5)
0xa: @ CreateObjectVector(Stack[-0]T)
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Stack[-1] = (int) 7
0xe: Call2 0xcd

0xf: Pop(1)
0x10: Return(); Pop(2)

0x11: Stack[-1] = 0
0x12: PushEmpty(object, object, object, object)
0x13: @ Trace(Stack[-5])
0x14: Pop(0)
0x15: Push("init_kabak") // @poff=78
0x16: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x18: Push("shouse1_kabak") // @poff=100
0x19: @ GetSceneByName(Stack[-3], Stack[-1])
0x1a: Pop(1)
0x1b: Push("noandrei") // @poff=128
0x1c: @ Trigger(Stack[-3], Stack[-1])
0x1d: Pop(1)
0x1e: PushEmpty(object, object, string, string, string)
0x1f: Stack[-7] = Stack[-4]
0x20: Stack[-3] = "pt_d7q04_wastedmale1" // @poff=146
0x21: Stack[-2] = "pers_wasted_male" // @poff=188
0x22: Stack[-1] = "d7q04_wastedmale.xml" // @poff=222
0x23: Call2 0xeb

0x24: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x25: Pop(5)
0x26: PushEmpty(object, object, string, string, string)
0x27: Stack[-7] = Stack[-4]
0x28: Stack[-3] = "pt_d7q04_wastedmale2" // @poff=264
0x29: Stack[-2] = "pers_wasted_male" // @poff=188
0x2a: Stack[-1] = "d7q04_wastedmale.xml" // @poff=222
0x2b: Call2 0xeb

0x2c: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x2d: Pop(5)
0x2e: Stack[-2] = 0
0x2f: Push("init_andrei") // @poff=306
0x30: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x32: @ GetMainOutdoorScene(Stack[-1])
0x33: Pop(0)
0x34: PushEmpty(object, object, string, string, string)
0x35: Stack[-6] = Stack[-4]
0x36: Stack[-3] = "pt_d7q04_andrei" // @poff=330
0x37: Stack[-2] = "NPC_Andrei" // @poff=362
0x38: Stack[-1] = "d7q04_andrei.xml" // @poff=384
0x39: Call2 0xeb

0x3a: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x3b: Pop(5)
0x3c: PushEmpty(object, object, string, string, string)
0x3d: Stack[-6] = Stack[-4]
0x3e: Stack[-3] = "pt_d7q04_nude" // @poff=418
0x3f: Stack[-2] = "pers_nudegirl" // @poff=446
0x40: Stack[-1] = "d7q04_nudegirl.xml" // @poff=474
0x41: Call2 0xeb

0x42: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x43: Pop(5)
0x44: PushEmpty(object, object, string, string, string)
0x45: Stack[-6] = Stack[-4]
0x46: Stack[-3] = "pt_d7q04_enemy1" // @poff=512
0x47: Stack[-2] = "pers_morlok" // @poff=544
0x48: Stack[-1] = "d7q04_e_morlok.xml" // @poff=568
0x49: Call2 0xeb

0x4a: Pop(4)
0x4b: @@@ add(Stack[-1]); Obj=0 // @poff=606
0x4c: Pop(1)
0x4d: PushEmpty(object, object, string, string, string)
0x4e: Stack[-6] = Stack[-4]
0x4f: Stack[-3] = "pt_d7q04_enemy2" // @poff=610
0x50: Stack[-2] = "pers_butcher" // @poff=642
0x51: Stack[-1] = "d7q04_e_butcher.xml" // @poff=668
0x52: Call2 0xeb

0x53: Pop(4)
0x54: @@@ add(Stack[-1]); Obj=0 // @poff=606
0x55: Pop(1)
0x56: PushEmpty(object, object, string, string, string)
0x57: Stack[-6] = Stack[-4]
0x58: Stack[-3] = "pt_d7q04_enemy3" // @poff=708
0x59: Stack[-2] = "pers_morlok" // @poff=544
0x5a: Stack[-1] = "d7q04_e_morlok.xml" // @poff=568
0x5b: Call2 0xeb

0x5c: Pop(4)
0x5d: @@@ add(Stack[-1]); Obj=0 // @poff=606
0x5e: Pop(1)
0x5f: PushEmpty(object, object, string, string, string)
0x60: Stack[-6] = Stack[-4]
0x61: Stack[-3] = "pt_d7q04_enemy4" // @poff=740
0x62: Stack[-2] = "pers_butcher" // @poff=642
0x63: Stack[-1] = "d7q04_e_butcher.xml" // @poff=668
0x64: Call2 0xeb

0x65: Pop(4)
0x66: @@@ add(Stack[-1]); Obj=0 // @poff=606
0x67: Pop(1)
0x68: PushEmpty(object, object, string, string, string)
0x69: Stack[-6] = Stack[-4]
0x6a: Stack[-3] = "pt_d7q04_enemy5" // @poff=772
0x6b: Stack[-2] = "pers_morlok" // @poff=544
0x6c: Stack[-1] = "d7q04_e_morlok.xml" // @poff=568
0x6d: Call2 0xeb

0x6e: Pop(4)
0x6f: @@@ add(Stack[-1]); Obj=0 // @poff=606
0x70: Pop(1)
0x71: PushEmpty(object, object, string, string, string)
0x72: Stack[-6] = Stack[-4]
0x73: Stack[-3] = "pt_d7q04_enemy6" // @poff=804
0x74: Stack[-2] = "pers_butcher" // @poff=642
0x75: Stack[-1] = "d7q04_e_butcher.xml" // @poff=668
0x76: Call2 0xeb

0x77: Pop(4)
0x78: @@@ add(Stack[-1]); Obj=0 // @poff=606
0x79: Pop(1)
0x7a: Stack[-1] = 0
0x7b: GOTO 0x89

0x7c: Push("fail") // @poff=836
0x7d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7f: PushEmpty()
0x80: Call2 0x95

0x81: Pop(0)
0x82: GOTO 0x89

0x83: Push("completed") // @poff=846
0x84: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x86: PushEmpty()
0x87: Call2 0x9d

0x88: Pop(0)
0x89: Return(); Pop(4)

0x8a: PushEmpty(int, int)
0x8b: Push("d7q04") // @poff=866
0x8c: @ GetVariable(Stack[-1], Stack[-2])
0x8d: Pop(1)
0x8e: Push((int) 1000)
0x8f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x91: PushEmpty()
0x92: Call2 0x95

0x93: Pop(0)
0x94: Return(); Pop(2)

0x95: Push("d7q04") // @poff=866
0x96: Push((int) -1)
0x97: @ SetVariable(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: PushEmpty()
0x9a: Call2 0xa5

0x9b: Pop(0)
0x9c: Return(); Pop(0)

0x9d: Push("d7q04") // @poff=866
0x9e: Push((int) 1000)
0x9f: @ SetVariable(Stack[-2], Stack[-1])
0xa0: Pop(2)
0xa1: PushEmpty()
0xa2: Call2 0xa5

0xa3: Pop(0)
0xa4: Return(); Pop(0)

0xa5: PushEmpty(object, object)
0xa6: EventDisable(26)
0xa7: PushEmpty(object, string)
0xa8: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xa9: Stack[-1] = "cleanup" // @poff=878
0xaa: Call2 0x10f

0xab: Pop(2)
0xac: Push( Stack[2 + Tasks[-1].StackPointer] )
0xad: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xae: Push("cleanup") // @poff=878
0xaf: @ Trigger(Stack[-2]T, Stack[-1])
0xb0: Pop(1)
0xb1: Push( Stack[1 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb3: Push("cleanup") // @poff=878
0xb4: @ Trigger(Stack[-1]T, Stack[-1])
0xb5: Pop(1)
0xb6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb7: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb8: Push("cleanup") // @poff=878
0xb9: @ Trigger(Stack[-3]T, Stack[-1])
0xba: Pop(1)
0xbb: Push( Stack[4 + Tasks[-1].StackPointer] )
0xbc: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbd: Push("cleanup") // @poff=878
0xbe: @ Trigger(Stack[-4]T, Stack[-1])
0xbf: Pop(1)
0xc0: Push("shouse1_kabak") // @poff=100
0xc1: @ GetSceneByName(Stack[-2], Stack[-1])
0xc2: Pop(1)
0xc3: Push("andrei") // @poff=132
0xc4: @ Trigger(Stack[-2], Stack[-1])
0xc5: Pop(1)
0xc6: PushEmpty(object)
0xc7: Call2 0xe5

0xc8: Pop(0)
0xc9: @ RemoveActor(Stack[-1])
0xca: Pop(1)
0xcb: Return(); Pop(2)

0xcc: Stack[-1] = 0
0xcd: PushEmpty(float, float)
0xce: @ GetGameTime(Stack[-1])
0xcf: Pop(0)
0xd0: Push((int) 24)
0xd1: Pop(1); Push(Stack[-4] * Stack[-1]);
0xd2: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd4: PushEmpty()
0xd5: Call2 0xa5

0xd6: Pop(0)
0xd7: GOTO 0xdf

0xd8: Push((int) 0)
0xd9: Push((int) 24)
0xda: Pop(1); Push(Stack[-5] * Stack[-1]);
0xdb: @ SetTimeEvent(Stack[-2], Stack[-1])
0xdc: Pop(2)
0xdd: @ Hold()
0xde: Pop(0)
0xdf: Return(); Pop(2)

0xe0: PushEmpty()
0xe1: PushEmpty()
0xe2: Call2 0x8a

0xe3: Pop(0)
0xe4: Return(); Pop(0)

0xe5: PushEmpty(object, object)
0xe6: @ self(Stack[-1])
0xe7: Pop(0)
0xe8: Stack[-1] = Stack[-3]
0xe9: Return(); Pop(2)

0xea: Stack[-1] = 0
0xeb: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xec: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=894
0xed: Pop(0)
0xee: Pop(0); Push((bool) Stack[-4] == 0)
0xef: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf0: Push("Locator ") // @poff=905
0xf1: Pop(1); Push(Stack[-1] + Stack[-12]);
0xf2: Push(" doesn't exist") // @poff=923
0xf3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf4: @ Trace(Stack[-1])
0xf5: Pop(1)
0xf6: Stack[-1] = 0
0xf7: GOTO 0xfa

0xf8: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xf9: Pop(0)
0xfa: Stack[-1] = Stack[-13]
0xfb: Return(); Pop(8)

0xfc: Stack[-1] = 0
0xfd: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xfe: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=894
0xff: Pop(0)
0x100: Pop(0); Push((bool) Stack[-4] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x102: Push("Locator ") // @poff=905
0x103: Pop(1); Push(Stack[-1] + Stack[-12]);
0x104: Push(" doesn't exist") // @poff=923
0x105: Pop(2); Push(Stack[-2] + Stack[-1]);
0x106: @ Trace(Stack[-1])
0x107: Pop(1)
0x108: Stack[-1] = 0
0x109: GOTO 0x10c

0x10a: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x10b: Pop(0)
0x10c: Stack[-1] = Stack[-13]
0x10d: Return(); Pop(8)

0x10e: Stack[-1] = 0
0x10f: PushEmpty(int, int, object, int, int, object)
0x110: Push(Stack[-8])
0x111: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x112: @@ size(Stack[-3]); Obj=8 // @poff=953
0x113: Pop(0)
0x114: Stack[-2] = (int) 0
0x115: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x116: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x117: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=958
0x118: Pop(0)
0x119: Push(Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11b: @ Trigger(Stack[-1], Stack[-7])
0x11c: Pop(0)
0x11d: Stack[-1] = 0
0x11e: Push((int) 1)
0x11f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x120: GOTO 0x115

0x121: Return(); Pop(6)

