GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	Neutral
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	No
	ui/NPC_Burah.png
	playsound
	giveitem
	d9TalkToPolkovodec
	ood9Block1
	Rifle is given
	Rifle
	durability
	SetProperty
	ood11Block1
	ood11Block2
	ood11Block3
	rifle ammo10 is given
	rifle_ammo
	ood9Block2
	d9q01
	d11q02
	d11q01
	player

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetGameTime (1 args)
	lshWaitForAnimEnd (1 args)
	TriggerWorld (2 args)
	SetVariable (2 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_0 Op = 0x23 Vars = (object)
		EVENT_10 Op = 0x29 Vars = (object)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe1 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x421 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x770

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x5fb

0xb: Pop(0)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: PushEmpty()
0xf: Push(-0, 0); TaskCall(0)
0x10: Call 0x0

0x11: Pop(-0, 0); TaskReturn
0x12: Pop(0)
0x13: PushEmpty(string)
0x14: Stack[-1] = "Neutral"
0x15: Call 0x63c

0x16: Pop(1)
0x17: @ lshWaitForAnimEnd()
0x18: Pop(0)
0x19: GOTO 0x13

0x1a: @ Hold()
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(0)
0x1f: Call 0x0

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty()
0x24: PushEmpty(object)
0x25: Stack[-1] = Stack[-2]
0x26: Call 0x771

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x5ef

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x600

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x696

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x698

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x75f

0x49: Pop(0)
0x4a: @@ SetPlayerName(Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-2] = (int) -1
0x4d: @ IsOverrideActive(Stack[-3])
0x4e: Pop(0)
0x4f: Push(Stack[-3])
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-10] = (int) -2
0x52: Return(); Pop(8)

0x53: @ DoDialog(Stack[-4])
0x54: Pop(0)
0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[-11]
0x57: Stack[-1] = Stack[-6]
0x58: Push(-2, 4); TaskCall(3)
0x59: Call 0x70

0x5a: Pop(-2, 4); TaskReturn
0x5b: Pop(2)
0x5c: @@ IsDialogEnd(Stack[-1])
0x5d: Pop(0)
0x5e: Pop(0); Push((bool) Stack[-1] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x60: @ sync()
0x61: Pop(0)
0x62: @@ IsDialogEnd(Stack[-1])
0x63: Pop(0)
0x64: GOTO 0x5e

0x65: PushEmpty(object)
0x66: Stack[-1] = Stack[-10]
0x67: Call 0x638

0x68: Pop(1)
0x69: @ StopDialog(Stack[-4])
0x6a: Pop(0)
0x6b: @@ GetReturnValue(Stack[-2])
0x6c: Pop(0)
0x6d: Stack[-10] = Stack[-2]
0x6e: Return(); Pop(8)

0x6f: Stack[-4] = 0
0x70: PushEmpty()
0x71: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x72: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x73: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x74: Push((int) 1)
0x75: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0x76: PushEmpty(object, object)
0x77: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79: Call 0x6a2

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xd1

0x7e: Pop(1)
0x7f: Push((int) 13882)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: PushEmpty(bool, object)
0x85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86: Call 0x6e6

0x87: Pop(1)
0x88: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x89: Push((int) 13883)
0x8a: Push((int) 15111)
0x8b: Push((int) 15110)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: PushEmpty(bool)
0x8f: Stack[-1] = (bool) 0
0x90: PushEmpty(bool, object)
0x91: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92: Call 0x6f0

0x93: Pop(1)
0x94: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call 0x6fc

0x98: Pop(1)
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: Stack[-1] = (bool) 1
0x9b: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9c: Push((int) 13906)
0x9d: Push((int) 15138)
0x9e: Push((int) 15137)
0x9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0: Pop(3)
0xa1: PushEmpty(bool, object)
0xa2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa3: Call 0x750

0xa4: Pop(1)
0xa5: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa6: Push((int) 13924)
0xa7: Push((int) 15156)
0xa8: Push((int) 15155)
0xa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(3)
0xab: Push((int) 13947)
0xac: Push((int) -1)
0xad: Push((int) 15182)
0xae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf: Pop(3)
0xb0: GOTO 0xb3

0xb1: Return(); Pop(0)

0xb2: GOTO 0x74

0xb3: PushEmpty(bool)
0xb4: Call 0x69a

0xb5: Pop(0)
0xb6: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb7: @ lshWaitForAnimEnd()
0xb8: Pop(0)
0xb9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: GOTO 0xc1

0xbc: PushEmpty(string)
0xbd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbe: Call 0x63c

0xbf: Pop(1)
0xc0: GOTO 0xb7

0xc1: GOTO 0xd0

0xc2: Push("all")
0xc3: Push("idle")
0xc4: @ PlayAnimation(Stack[-2], Stack[-1])
0xc5: Pop(2)
0xc6: @ WaitForAnimEnd()
0xc7: Pop(0)
0xc8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: GOTO 0xd0

0xcb: Push("all")
0xcc: Push("idle")
0xcd: @ PlayAnimation(Stack[-2], Stack[-1])
0xce: Pop(2)
0xcf: GOTO 0xc6

0xd0: Return(); Pop(0)

0xd1: PushEmpty()
0xd2: PushEmpty(bool)
0xd3: Call 0x69a

0xd4: Pop(0)
0xd5: Pop(1); Push((bool) Stack[-1] == 0)
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: Return(); Pop(0)

0xd8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: Return(); Pop(0)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = Stack[-2]
0xdd: Call 0x63c

0xde: Pop(1)
0xdf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe0: Return(); Pop(0)

0xe1: PushEmpty()
0xe2: Push((int) 1)
0xe3: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0xe4: PushEmpty()
0xe5: Call 0x64e

0xe6: Pop(0)
0xe7: Push((int) 15137)
0xe8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xea: PushEmpty(object, object)
0xeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed: Call 0x6a8

0xee: Pop(2)
0xef: Push((int) 15149)
0xf0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call 0x6ae

0xf6: Pop(2)
0xf7: PushEmpty(object, object)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Call 0x69c

0xfb: Pop(2)
0xfc: PushEmpty(object, object)
0xfd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff: Call 0x6d5

0x100: Pop(2)
0x101: Push((int) 15150)
0x102: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x104: PushEmpty(object, object)
0x105: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x106: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x107: Call 0x6ae

0x108: Pop(2)
0x109: PushEmpty(object, object)
0x10a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Call 0x69c

0x10d: Pop(2)
0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call 0x6d5

0x112: Pop(2)
0x113: Push((int) 15155)
0x114: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x116: PushEmpty(object, object)
0x117: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x118: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x119: Call 0x6e0

0x11a: Pop(2)
0x11b: Push((int) 15109)
0x11c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x11e: PushEmpty(object, object)
0x11f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x120: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x121: Call 0x6a2

0x122: Pop(2)
0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral"
0x125: Call 0xd1

0x126: Pop(1)
0x127: Push((int) 13882)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: PushEmpty(bool, object)
0x12d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Call 0x6e6

0x12f: Pop(1)
0x130: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x131: Push((int) 13883)
0x132: Push((int) 15111)
0x133: Push((int) 15110)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: PushEmpty(bool)
0x137: Stack[-1] = (bool) 0
0x138: PushEmpty(bool, object)
0x139: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Call 0x6f0

0x13b: Pop(1)
0x13c: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13d: PushEmpty(bool, object)
0x13e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13f: Call 0x6fc

0x140: Pop(1)
0x141: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x142: Stack[-1] = (bool) 1
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: Push((int) 13906)
0x145: Push((int) 15138)
0x146: Push((int) 15137)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: PushEmpty(bool, object)
0x14a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Call 0x750

0x14c: Pop(1)
0x14d: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14e: Push((int) 13924)
0x14f: Push((int) 15156)
0x150: Push((int) 15155)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Push((int) 13947)
0x154: Push((int) -1)
0x155: Push((int) 15182)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Return(); Pop(0)

0x159: Push((int) 15156)
0x15a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Neutral"
0x15e: Call 0xd1

0x15f: Pop(1)
0x160: Push((int) 13925)
0x161: @@ SetMessage(Stack[-1])
0x162: Pop(1)
0x163: @@ ClearReplies()
0x164: Pop(0)
0x165: Push((int) 13926)
0x166: Push((int) 15158)
0x167: Push((int) 15157)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Push((int) 13946)
0x16b: Push((int) 15158)
0x16c: Push((int) 15180)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: Return(); Pop(0)

0x170: Push((int) 15158)
0x171: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x173: PushEmpty(string)
0x174: Stack[-1] = "Neutral"
0x175: Call 0xd1

0x176: Pop(1)
0x177: Push((int) 13927)
0x178: @@ SetMessage(Stack[-1])
0x179: Pop(1)
0x17a: @@ ClearReplies()
0x17b: Pop(0)
0x17c: Push((int) 13928)
0x17d: Push((int) 15160)
0x17e: Push((int) 15159)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: Push((int) 13945)
0x182: Push((int) 15160)
0x183: Push((int) 15178)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Return(); Pop(0)

0x187: Push((int) 15160)
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x18a: PushEmpty(string)
0x18b: Stack[-1] = "Neutral"
0x18c: Call 0xd1

0x18d: Pop(1)
0x18e: Push((int) 13929)
0x18f: @@ SetMessage(Stack[-1])
0x190: Pop(1)
0x191: @@ ClearReplies()
0x192: Pop(0)
0x193: Push((int) 13930)
0x194: Push((int) 15162)
0x195: Push((int) 15161)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: Push((int) 13944)
0x199: Push((int) 15162)
0x19a: Push((int) 15176)
0x19b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19c: Pop(3)
0x19d: Return(); Pop(0)

0x19e: Push((int) 15162)
0x19f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1a1: PushEmpty(string)
0x1a2: Stack[-1] = "Neutral"
0x1a3: Call 0xd1

0x1a4: Pop(1)
0x1a5: Push((int) 13931)
0x1a6: @@ SetMessage(Stack[-1])
0x1a7: Pop(1)
0x1a8: @@ ClearReplies()
0x1a9: Pop(0)
0x1aa: Push((int) 13932)
0x1ab: Push((int) 15164)
0x1ac: Push((int) 15163)
0x1ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ae: Pop(3)
0x1af: Push((int) 13941)
0x1b0: Push((int) 15173)
0x1b1: Push((int) 15172)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Return(); Pop(0)

0x1b5: Push((int) 15173)
0x1b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1b8: PushEmpty(string)
0x1b9: Stack[-1] = "Neutral"
0x1ba: Call 0xd1

0x1bb: Pop(1)
0x1bc: Push((int) 13942)
0x1bd: @@ SetMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ ClearReplies()
0x1c0: Pop(0)
0x1c1: Push((int) 13943)
0x1c2: Push((int) 15166)
0x1c3: Push((int) 15174)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: Return(); Pop(0)

0x1c7: Push((int) 15164)
0x1c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1ca: PushEmpty(string)
0x1cb: Stack[-1] = "Neutral"
0x1cc: Call 0xd1

0x1cd: Pop(1)
0x1ce: Push((int) 13933)
0x1cf: @@ SetMessage(Stack[-1])
0x1d0: Pop(1)
0x1d1: @@ ClearReplies()
0x1d2: Pop(0)
0x1d3: Push((int) 13934)
0x1d4: Push((int) 15166)
0x1d5: Push((int) 15165)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: Return(); Pop(0)

0x1d9: Push((int) 15166)
0x1da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1dc: PushEmpty(string)
0x1dd: Stack[-1] = "Neutral"
0x1de: Call 0xd1

0x1df: Pop(1)
0x1e0: Push((int) 13935)
0x1e1: @@ SetMessage(Stack[-1])
0x1e2: Pop(1)
0x1e3: @@ ClearReplies()
0x1e4: Pop(0)
0x1e5: Push((int) 13936)
0x1e6: Push((int) 15168)
0x1e7: Push((int) 15167)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: Push((int) 15168)
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Neutral"
0x1f0: Call 0xd1

0x1f1: Pop(1)
0x1f2: Push((int) 13937)
0x1f3: @@ SetMessage(Stack[-1])
0x1f4: Pop(1)
0x1f5: @@ ClearReplies()
0x1f6: Pop(0)
0x1f7: Push((int) 13938)
0x1f8: Push((int) 15170)
0x1f9: Push((int) 15169)
0x1fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(3)
0x1fc: Return(); Pop(0)

0x1fd: Push((int) 15170)
0x1fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x200: PushEmpty(string)
0x201: Stack[-1] = "Neutral"
0x202: Call 0xd1

0x203: Pop(1)
0x204: Push((int) 13939)
0x205: @@ SetMessage(Stack[-1])
0x206: Pop(1)
0x207: @@ ClearReplies()
0x208: Pop(0)
0x209: Push((int) 13940)
0x20a: Push((int) -1)
0x20b: Push((int) 15171)
0x20c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20d: Pop(3)
0x20e: Return(); Pop(0)

0x20f: Push((int) 15138)
0x210: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x212: PushEmpty(string)
0x213: Stack[-1] = "Neutral"
0x214: Call 0xd1

0x215: Pop(1)
0x216: Push((int) 13907)
0x217: @@ SetMessage(Stack[-1])
0x218: Pop(1)
0x219: @@ ClearReplies()
0x21a: Pop(0)
0x21b: Push((int) 13908)
0x21c: Push((int) 15140)
0x21d: Push((int) 15139)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Return(); Pop(0)

0x221: Push((int) 15140)
0x222: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x224: PushEmpty(string)
0x225: Stack[-1] = "Neutral"
0x226: Call 0xd1

0x227: Pop(1)
0x228: Push((int) 13909)
0x229: @@ SetMessage(Stack[-1])
0x22a: Pop(1)
0x22b: @@ ClearReplies()
0x22c: Pop(0)
0x22d: Push((int) 13910)
0x22e: Push((int) 15142)
0x22f: Push((int) 15141)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Return(); Pop(0)

0x233: Push((int) 15142)
0x234: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x236: PushEmpty(string)
0x237: Stack[-1] = "Neutral"
0x238: Call 0xd1

0x239: Pop(1)
0x23a: Push((int) 13911)
0x23b: @@ SetMessage(Stack[-1])
0x23c: Pop(1)
0x23d: @@ ClearReplies()
0x23e: Pop(0)
0x23f: Push((int) 13912)
0x240: Push((int) 15144)
0x241: Push((int) 15143)
0x242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: Push((int) 13920)
0x245: Push((int) 15152)
0x246: Push((int) 15151)
0x247: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x248: Pop(3)
0x249: Return(); Pop(0)

0x24a: Push((int) 15152)
0x24b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x24d: PushEmpty(string)
0x24e: Stack[-1] = "Neutral"
0x24f: Call 0xd1

0x250: Pop(1)
0x251: Push((int) 13921)
0x252: @@ SetMessage(Stack[-1])
0x253: Pop(1)
0x254: @@ ClearReplies()
0x255: Pop(0)
0x256: Push((int) 13922)
0x257: Push((int) 15154)
0x258: Push((int) 15153)
0x259: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(3)
0x25b: Return(); Pop(0)

0x25c: Push((int) 15154)
0x25d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x25f: PushEmpty(string)
0x260: Stack[-1] = "Neutral"
0x261: Call 0xd1

0x262: Pop(1)
0x263: Push((int) 13923)
0x264: @@ SetMessage(Stack[-1])
0x265: Pop(1)
0x266: @@ ClearReplies()
0x267: Pop(0)
0x268: Push((int) 14067)
0x269: Push((int) -1)
0x26a: Push((int) 15304)
0x26b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26c: Pop(3)
0x26d: Return(); Pop(0)

0x26e: Push((int) 15144)
0x26f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x271: PushEmpty(string)
0x272: Stack[-1] = "Neutral"
0x273: Call 0xd1

0x274: Pop(1)
0x275: Push((int) 13913)
0x276: @@ SetMessage(Stack[-1])
0x277: Pop(1)
0x278: @@ ClearReplies()
0x279: Pop(0)
0x27a: Push((int) 13914)
0x27b: Push((int) 15146)
0x27c: Push((int) 15145)
0x27d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27e: Pop(3)
0x27f: Push((int) 13919)
0x280: Push((int) -1)
0x281: Push((int) 15150)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: Return(); Pop(0)

0x285: Push((int) 15146)
0x286: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x288: PushEmpty(string)
0x289: Stack[-1] = "Neutral"
0x28a: Call 0xd1

0x28b: Pop(1)
0x28c: Push((int) 13915)
0x28d: @@ SetMessage(Stack[-1])
0x28e: Pop(1)
0x28f: @@ ClearReplies()
0x290: Pop(0)
0x291: Push((int) 13916)
0x292: Push((int) 15148)
0x293: Push((int) 15147)
0x294: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(3)
0x296: Return(); Pop(0)

0x297: Push((int) 15148)
0x298: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x29a: PushEmpty(string)
0x29b: Stack[-1] = "Neutral"
0x29c: Call 0xd1

0x29d: Pop(1)
0x29e: Push((int) 13917)
0x29f: @@ SetMessage(Stack[-1])
0x2a0: Pop(1)
0x2a1: @@ ClearReplies()
0x2a2: Pop(0)
0x2a3: Push((int) 13918)
0x2a4: Push((int) -1)
0x2a5: Push((int) 15149)
0x2a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a7: Pop(3)
0x2a8: Return(); Pop(0)

0x2a9: Push((int) 15111)
0x2aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2ac: PushEmpty(string)
0x2ad: Stack[-1] = "Neutral"
0x2ae: Call 0xd1

0x2af: Pop(1)
0x2b0: Push((int) 13884)
0x2b1: @@ SetMessage(Stack[-1])
0x2b2: Pop(1)
0x2b3: @@ ClearReplies()
0x2b4: Pop(0)
0x2b5: Push((int) 13885)
0x2b6: Push((int) 15113)
0x2b7: Push((int) 15112)
0x2b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b9: Pop(3)
0x2ba: Push((int) 13905)
0x2bb: Push((int) 15113)
0x2bc: Push((int) 15135)
0x2bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2be: Pop(3)
0x2bf: Return(); Pop(0)

0x2c0: Push((int) 15113)
0x2c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2c3: PushEmpty(string)
0x2c4: Stack[-1] = "Neutral"
0x2c5: Call 0xd1

0x2c6: Pop(1)
0x2c7: Push((int) 13886)
0x2c8: @@ SetMessage(Stack[-1])
0x2c9: Pop(1)
0x2ca: @@ ClearReplies()
0x2cb: Pop(0)
0x2cc: Push((int) 13887)
0x2cd: Push((int) 15115)
0x2ce: Push((int) 15114)
0x2cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d0: Pop(3)
0x2d1: Push((int) 13899)
0x2d2: Push((int) 15128)
0x2d3: Push((int) 15127)
0x2d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d5: Pop(3)
0x2d6: Return(); Pop(0)

0x2d7: Push((int) 15128)
0x2d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2da: PushEmpty(string)
0x2db: Stack[-1] = "Neutral"
0x2dc: Call 0xd1

0x2dd: Pop(1)
0x2de: Push((int) 13900)
0x2df: @@ SetMessage(Stack[-1])
0x2e0: Pop(1)
0x2e1: @@ ClearReplies()
0x2e2: Pop(0)
0x2e3: Push((int) 13901)
0x2e4: Push((int) 15130)
0x2e5: Push((int) 15129)
0x2e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(3)
0x2e8: Push((int) 13904)
0x2e9: Push((int) 15115)
0x2ea: Push((int) 15133)
0x2eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ec: Pop(3)
0x2ed: Return(); Pop(0)

0x2ee: Push((int) 15130)
0x2ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2f1: PushEmpty(string)
0x2f2: Stack[-1] = "Neutral"
0x2f3: Call 0xd1

0x2f4: Pop(1)
0x2f5: Push((int) 13902)
0x2f6: @@ SetMessage(Stack[-1])
0x2f7: Pop(1)
0x2f8: @@ ClearReplies()
0x2f9: Pop(0)
0x2fa: Push((int) 13903)
0x2fb: Push((int) 15121)
0x2fc: Push((int) 15131)
0x2fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fe: Pop(3)
0x2ff: Return(); Pop(0)

0x300: Push((int) 15115)
0x301: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x303: PushEmpty(string)
0x304: Stack[-1] = "Neutral"
0x305: Call 0xd1

0x306: Pop(1)
0x307: Push((int) 13888)
0x308: @@ SetMessage(Stack[-1])
0x309: Pop(1)
0x30a: @@ ClearReplies()
0x30b: Pop(0)
0x30c: Push((int) 13889)
0x30d: Push((int) 15117)
0x30e: Push((int) 15116)
0x30f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x310: Pop(3)
0x311: Push((int) 13898)
0x312: Push((int) 15117)
0x313: Push((int) 15125)
0x314: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x315: Pop(3)
0x316: Return(); Pop(0)

0x317: Push((int) 15117)
0x318: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x31a: PushEmpty(string)
0x31b: Stack[-1] = "Neutral"
0x31c: Call 0xd1

0x31d: Pop(1)
0x31e: Push((int) 13890)
0x31f: @@ SetMessage(Stack[-1])
0x320: Pop(1)
0x321: @@ ClearReplies()
0x322: Pop(0)
0x323: Push((int) 13891)
0x324: Push((int) 15119)
0x325: Push((int) 15118)
0x326: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x327: Pop(3)
0x328: Push((int) 13897)
0x329: Push((int) -1)
0x32a: Push((int) 15124)
0x32b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32c: Pop(3)
0x32d: Return(); Pop(0)

0x32e: Push((int) 15119)
0x32f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x331: PushEmpty(string)
0x332: Stack[-1] = "Neutral"
0x333: Call 0xd1

0x334: Pop(1)
0x335: Push((int) 13892)
0x336: @@ SetMessage(Stack[-1])
0x337: Pop(1)
0x338: @@ ClearReplies()
0x339: Pop(0)
0x33a: Push((int) 13893)
0x33b: Push((int) 15121)
0x33c: Push((int) 15120)
0x33d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33e: Pop(3)
0x33f: Return(); Pop(0)

0x340: Push((int) 15121)
0x341: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x343: PushEmpty(string)
0x344: Stack[-1] = "Neutral"
0x345: Call 0xd1

0x346: Pop(1)
0x347: Push((int) 13894)
0x348: @@ SetMessage(Stack[-1])
0x349: Pop(1)
0x34a: @@ ClearReplies()
0x34b: Pop(0)
0x34c: Push((int) 13895)
0x34d: Push((int) -1)
0x34e: Push((int) 15122)
0x34f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x350: Pop(3)
0x351: Push((int) 13896)
0x352: Push((int) -1)
0x353: Push((int) 15123)
0x354: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(3)
0x356: Return(); Pop(0)

0x357: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x358: PushEmpty(bool)
0x359: Call 0x69a

0x35a: Pop(0)
0x35b: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35c: @ lshStopAnimation()
0x35d: Pop(0)
0x35e: GOTO 0x361

0x35f: @ StopAnimation()
0x360: Pop(0)
0x361: Return(); Pop(0)

0x362: GOTO 0xe2

0x363: Return(); Pop(0)

0x364: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x365: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x366: PushEmpty(bool, object)
0x367: Stack[-1] = Stack[-11]
0x368: Call 0x600

0x369: Pop(1)
0x36a: Pop(1); Push((bool) Stack[-1] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36c: Stack[-10] = (int) -2
0x36d: Return(); Pop(8)

0x36e: @ CreateDialog(Stack[-4])
0x36f: Pop(0)
0x370: PushEmpty(int)
0x371: Call 0x696

0x372: Pop(0)
0x373: @@ SetNPCName(Stack[-1])
0x374: Pop(1)
0x375: PushEmpty(string)
0x376: Call 0x698

0x377: Pop(0)
0x378: @@ SetPhoto(Stack[-1])
0x379: Pop(1)
0x37a: PushEmpty(int)
0x37b: Call 0x75f

0x37c: Pop(0)
0x37d: @@ SetPlayerName(Stack[-1])
0x37e: Pop(1)
0x37f: Stack[-2] = (int) -1
0x380: @ IsOverrideActive(Stack[-3])
0x381: Pop(0)
0x382: Push(Stack[-3])
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: Stack[-10] = (int) -2
0x385: Return(); Pop(8)

0x386: @ DoDialog(Stack[-4])
0x387: Pop(0)
0x388: PushEmpty(object, object)
0x389: Stack[-2] = Stack[-11]
0x38a: Stack[-1] = Stack[-6]
0x38b: Push(-2, 4); TaskCall(5)
0x38c: Call 0x3a3

0x38d: Pop(-2, 4); TaskReturn
0x38e: Pop(2)
0x38f: @@ IsDialogEnd(Stack[-1])
0x390: Pop(0)
0x391: Pop(0); Push((bool) Stack[-1] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x393: @ sync()
0x394: Pop(0)
0x395: @@ IsDialogEnd(Stack[-1])
0x396: Pop(0)
0x397: GOTO 0x391

0x398: PushEmpty(object)
0x399: Stack[-1] = Stack[-10]
0x39a: Call 0x638

0x39b: Pop(1)
0x39c: @ StopDialog(Stack[-4])
0x39d: Pop(0)
0x39e: @@ GetReturnValue(Stack[-2])
0x39f: Pop(0)
0x3a0: Stack[-10] = Stack[-2]
0x3a1: Return(); Pop(8)

0x3a2: Stack[-4] = 0
0x3a3: PushEmpty()
0x3a4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3a5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3a6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3a7: Push((int) 1)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3a9: PushEmpty(string)
0x3aa: Stack[-1] = "Neutral"
0x3ab: Call 0x411

0x3ac: Pop(1)
0x3ad: Push((int) 14280)
0x3ae: @@ SetMessage(Stack[-1])
0x3af: Pop(1)
0x3b0: @@ ClearReplies()
0x3b1: Pop(0)
0x3b2: PushEmpty(bool)
0x3b3: Stack[-1] = (bool) 0
0x3b4: PushEmpty(bool, object)
0x3b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b6: Call 0x714

0x3b7: Pop(1)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3b9: PushEmpty(bool, object)
0x3ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3bb: Call 0x720

0x3bc: Pop(1)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3be: Stack[-1] = (bool) 1
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c0: Push((int) 14281)
0x3c1: Push((int) 15502)
0x3c2: Push((int) 15501)
0x3c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c4: Pop(3)
0x3c5: PushEmpty(bool)
0x3c6: Stack[-1] = (bool) 0
0x3c7: PushEmpty(bool, object)
0x3c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c9: Call 0x72c

0x3ca: Pop(1)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3cc: PushEmpty(bool, object)
0x3cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ce: Call 0x738

0x3cf: Pop(1)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d1: Stack[-1] = (bool) 1
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d3: Push((int) 14306)
0x3d4: Push((int) 15529)
0x3d5: Push((int) 15528)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: PushEmpty(bool)
0x3d9: Stack[-1] = (bool) 0
0x3da: PushEmpty(bool, object)
0x3db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3dc: Call 0x708

0x3dd: Pop(1)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3df: PushEmpty(bool, object)
0x3e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e1: Call 0x744

0x3e2: Pop(1)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e4: Stack[-1] = (bool) 1
0x3e5: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e6: Push((int) 14317)
0x3e7: Push((int) 15540)
0x3e8: Push((int) 15539)
0x3e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: Push((int) 14324)
0x3ec: Push((int) -1)
0x3ed: Push((int) 15546)
0x3ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ef: Pop(3)
0x3f0: GOTO 0x3f3

0x3f1: Return(); Pop(0)

0x3f2: GOTO 0x3a7

0x3f3: PushEmpty(bool)
0x3f4: Call 0x69a

0x3f5: Pop(0)
0x3f6: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3f7: @ lshWaitForAnimEnd()
0x3f8: Pop(0)
0x3f9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fb: GOTO 0x401

0x3fc: PushEmpty(string)
0x3fd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3fe: Call 0x63c

0x3ff: Pop(1)
0x400: GOTO 0x3f7

0x401: GOTO 0x410

0x402: Push("all")
0x403: Push("idle")
0x404: @ PlayAnimation(Stack[-2], Stack[-1])
0x405: Pop(2)
0x406: @ WaitForAnimEnd()
0x407: Pop(0)
0x408: Push( Stack[3 + Tasks[-1].StackPointer] )
0x409: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x40a: GOTO 0x410

0x40b: Push("all")
0x40c: Push("idle")
0x40d: @ PlayAnimation(Stack[-2], Stack[-1])
0x40e: Pop(2)
0x40f: GOTO 0x406

0x410: Return(); Pop(0)

0x411: PushEmpty()
0x412: PushEmpty(bool)
0x413: Call 0x69a

0x414: Pop(0)
0x415: Pop(1); Push((bool) Stack[-1] == 0)
0x416: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x417: Return(); Pop(0)

0x418: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x419: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x41a: Return(); Pop(0)

0x41b: PushEmpty(string)
0x41c: Stack[-1] = Stack[-2]
0x41d: Call 0x63c

0x41e: Pop(1)
0x41f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x420: Return(); Pop(0)

0x421: PushEmpty()
0x422: Push((int) 1)
0x423: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x424: PushEmpty()
0x425: Call 0x64e

0x426: Pop(0)
0x427: Push((int) 15501)
0x428: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42a: PushEmpty(object, object)
0x42b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x42c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x42d: Call 0x6c3

0x42e: Pop(2)
0x42f: Push((int) 15528)
0x430: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x431: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x432: PushEmpty(object, object)
0x433: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x434: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x435: Call 0x6c9

0x436: Pop(2)
0x437: Push((int) 15539)
0x438: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43a: PushEmpty(object, object)
0x43b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x43c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x43d: Call 0x6cf

0x43e: Pop(2)
0x43f: Push((int) 15500)
0x440: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x442: PushEmpty(string)
0x443: Stack[-1] = "Neutral"
0x444: Call 0x411

0x445: Pop(1)
0x446: Push((int) 14280)
0x447: @@ SetMessage(Stack[-1])
0x448: Pop(1)
0x449: @@ ClearReplies()
0x44a: Pop(0)
0x44b: PushEmpty(bool)
0x44c: Stack[-1] = (bool) 0
0x44d: PushEmpty(bool, object)
0x44e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44f: Call 0x714

0x450: Pop(1)
0x451: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x452: PushEmpty(bool, object)
0x453: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x454: Call 0x720

0x455: Pop(1)
0x456: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x457: Stack[-1] = (bool) 1
0x458: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x459: Push((int) 14281)
0x45a: Push((int) 15502)
0x45b: Push((int) 15501)
0x45c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45d: Pop(3)
0x45e: PushEmpty(bool)
0x45f: Stack[-1] = (bool) 0
0x460: PushEmpty(bool, object)
0x461: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x462: Call 0x72c

0x463: Pop(1)
0x464: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x465: PushEmpty(bool, object)
0x466: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x467: Call 0x738

0x468: Pop(1)
0x469: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x46a: Stack[-1] = (bool) 1
0x46b: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46c: Push((int) 14306)
0x46d: Push((int) 15529)
0x46e: Push((int) 15528)
0x46f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x470: Pop(3)
0x471: PushEmpty(bool)
0x472: Stack[-1] = (bool) 0
0x473: PushEmpty(bool, object)
0x474: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x475: Call 0x708

0x476: Pop(1)
0x477: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x478: PushEmpty(bool, object)
0x479: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47a: Call 0x744

0x47b: Pop(1)
0x47c: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47d: Stack[-1] = (bool) 1
0x47e: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x47f: Push((int) 14317)
0x480: Push((int) 15540)
0x481: Push((int) 15539)
0x482: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x483: Pop(3)
0x484: Push((int) 14324)
0x485: Push((int) -1)
0x486: Push((int) 15546)
0x487: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(3)
0x489: Return(); Pop(0)

0x48a: Push((int) 15540)
0x48b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x48d: PushEmpty(string)
0x48e: Stack[-1] = "Neutral"
0x48f: Call 0x411

0x490: Pop(1)
0x491: Push((int) 14318)
0x492: @@ SetMessage(Stack[-1])
0x493: Pop(1)
0x494: @@ ClearReplies()
0x495: Pop(0)
0x496: Push((int) 14319)
0x497: Push((int) 15542)
0x498: Push((int) 15541)
0x499: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49a: Pop(3)
0x49b: Return(); Pop(0)

0x49c: Push((int) 15542)
0x49d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x49f: PushEmpty(string)
0x4a0: Stack[-1] = "Neutral"
0x4a1: Call 0x411

0x4a2: Pop(1)
0x4a3: Push((int) 14320)
0x4a4: @@ SetMessage(Stack[-1])
0x4a5: Pop(1)
0x4a6: @@ ClearReplies()
0x4a7: Pop(0)
0x4a8: Push((int) 14321)
0x4a9: Push((int) 15544)
0x4aa: Push((int) 15543)
0x4ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ac: Pop(3)
0x4ad: Return(); Pop(0)

0x4ae: Push((int) 15544)
0x4af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4b1: PushEmpty(string)
0x4b2: Stack[-1] = "Neutral"
0x4b3: Call 0x411

0x4b4: Pop(1)
0x4b5: Push((int) 14322)
0x4b6: @@ SetMessage(Stack[-1])
0x4b7: Pop(1)
0x4b8: @@ ClearReplies()
0x4b9: Pop(0)
0x4ba: Push((int) 14323)
0x4bb: Push((int) -1)
0x4bc: Push((int) 15545)
0x4bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4be: Pop(3)
0x4bf: Return(); Pop(0)

0x4c0: Push((int) 15529)
0x4c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4c3: PushEmpty(string)
0x4c4: Stack[-1] = "Neutral"
0x4c5: Call 0x411

0x4c6: Pop(1)
0x4c7: Push((int) 14307)
0x4c8: @@ SetMessage(Stack[-1])
0x4c9: Pop(1)
0x4ca: @@ ClearReplies()
0x4cb: Pop(0)
0x4cc: Push((int) 14308)
0x4cd: Push((int) 15531)
0x4ce: Push((int) 15530)
0x4cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d0: Pop(3)
0x4d1: Return(); Pop(0)

0x4d2: Push((int) 15531)
0x4d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4d5: PushEmpty(string)
0x4d6: Stack[-1] = "Neutral"
0x4d7: Call 0x411

0x4d8: Pop(1)
0x4d9: Push((int) 14309)
0x4da: @@ SetMessage(Stack[-1])
0x4db: Pop(1)
0x4dc: @@ ClearReplies()
0x4dd: Pop(0)
0x4de: Push((int) 14310)
0x4df: Push((int) 15533)
0x4e0: Push((int) 15532)
0x4e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e2: Pop(3)
0x4e3: Return(); Pop(0)

0x4e4: Push((int) 15533)
0x4e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4e7: PushEmpty(string)
0x4e8: Stack[-1] = "Neutral"
0x4e9: Call 0x411

0x4ea: Pop(1)
0x4eb: Push((int) 14311)
0x4ec: @@ SetMessage(Stack[-1])
0x4ed: Pop(1)
0x4ee: @@ ClearReplies()
0x4ef: Pop(0)
0x4f0: Push((int) 14312)
0x4f1: Push((int) 15535)
0x4f2: Push((int) 15534)
0x4f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f4: Pop(3)
0x4f5: Return(); Pop(0)

0x4f6: Push((int) 15535)
0x4f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x4f9: PushEmpty(string)
0x4fa: Stack[-1] = "Neutral"
0x4fb: Call 0x411

0x4fc: Pop(1)
0x4fd: Push((int) 14313)
0x4fe: @@ SetMessage(Stack[-1])
0x4ff: Pop(1)
0x500: @@ ClearReplies()
0x501: Pop(0)
0x502: Push((int) 14314)
0x503: Push((int) 15537)
0x504: Push((int) 15536)
0x505: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x506: Pop(3)
0x507: Return(); Pop(0)

0x508: Push((int) 15537)
0x509: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50a: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x50b: PushEmpty(string)
0x50c: Stack[-1] = "Neutral"
0x50d: Call 0x411

0x50e: Pop(1)
0x50f: Push((int) 14315)
0x510: @@ SetMessage(Stack[-1])
0x511: Pop(1)
0x512: @@ ClearReplies()
0x513: Pop(0)
0x514: Push((int) 14316)
0x515: Push((int) -1)
0x516: Push((int) 15538)
0x517: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x518: Pop(3)
0x519: Return(); Pop(0)

0x51a: Push((int) 15502)
0x51b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51c: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x51d: PushEmpty(string)
0x51e: Stack[-1] = "Neutral"
0x51f: Call 0x411

0x520: Pop(1)
0x521: Push((int) 14282)
0x522: @@ SetMessage(Stack[-1])
0x523: Pop(1)
0x524: @@ ClearReplies()
0x525: Pop(0)
0x526: Push((int) 14283)
0x527: Push((int) 15504)
0x528: Push((int) 15503)
0x529: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52a: Pop(3)
0x52b: Return(); Pop(0)

0x52c: Push((int) 15504)
0x52d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x52f: PushEmpty(string)
0x530: Stack[-1] = "Neutral"
0x531: Call 0x411

0x532: Pop(1)
0x533: Push((int) 14284)
0x534: @@ SetMessage(Stack[-1])
0x535: Pop(1)
0x536: @@ ClearReplies()
0x537: Pop(0)
0x538: Push((int) 14285)
0x539: Push((int) 15506)
0x53a: Push((int) 15505)
0x53b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53c: Pop(3)
0x53d: Push((int) 14290)
0x53e: Push((int) 15511)
0x53f: Push((int) 15510)
0x540: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x541: Pop(3)
0x542: Return(); Pop(0)

0x543: Push((int) 15511)
0x544: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x545: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x546: PushEmpty(string)
0x547: Stack[-1] = "Neutral"
0x548: Call 0x411

0x549: Pop(1)
0x54a: Push((int) 14291)
0x54b: @@ SetMessage(Stack[-1])
0x54c: Pop(1)
0x54d: @@ ClearReplies()
0x54e: Pop(0)
0x54f: Push((int) 14292)
0x550: Push((int) 15513)
0x551: Push((int) 15512)
0x552: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x553: Pop(3)
0x554: Push((int) 14299)
0x555: Push((int) 15520)
0x556: Push((int) 15519)
0x557: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x558: Pop(3)
0x559: Return(); Pop(0)

0x55a: Push((int) 15520)
0x55b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55c: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x55d: PushEmpty(string)
0x55e: Stack[-1] = "Neutral"
0x55f: Call 0x411

0x560: Pop(1)
0x561: Push((int) 14300)
0x562: @@ SetMessage(Stack[-1])
0x563: Pop(1)
0x564: @@ ClearReplies()
0x565: Pop(0)
0x566: Push((int) 14301)
0x567: Push((int) 15513)
0x568: Push((int) 15521)
0x569: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56a: Pop(3)
0x56b: Push((int) 14302)
0x56c: Push((int) 15524)
0x56d: Push((int) 15523)
0x56e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56f: Pop(3)
0x570: Return(); Pop(0)

0x571: Push((int) 15524)
0x572: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x574: PushEmpty(string)
0x575: Stack[-1] = "Neutral"
0x576: Call 0x411

0x577: Pop(1)
0x578: Push((int) 14303)
0x579: @@ SetMessage(Stack[-1])
0x57a: Pop(1)
0x57b: @@ ClearReplies()
0x57c: Pop(0)
0x57d: Push((int) 14304)
0x57e: Push((int) 15513)
0x57f: Push((int) 15525)
0x580: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x581: Pop(3)
0x582: Push((int) 14305)
0x583: Push((int) -1)
0x584: Push((int) 15527)
0x585: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x586: Pop(3)
0x587: Return(); Pop(0)

0x588: Push((int) 15513)
0x589: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x58b: PushEmpty(string)
0x58c: Stack[-1] = "Neutral"
0x58d: Call 0x411

0x58e: Pop(1)
0x58f: Push((int) 14293)
0x590: @@ SetMessage(Stack[-1])
0x591: Pop(1)
0x592: @@ ClearReplies()
0x593: Pop(0)
0x594: Push((int) 14294)
0x595: Push((int) 15515)
0x596: Push((int) 15514)
0x597: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x598: Pop(3)
0x599: Return(); Pop(0)

0x59a: Push((int) 15515)
0x59b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59c: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x59d: PushEmpty(string)
0x59e: Stack[-1] = "Neutral"
0x59f: Call 0x411

0x5a0: Pop(1)
0x5a1: Push((int) 14295)
0x5a2: @@ SetMessage(Stack[-1])
0x5a3: Pop(1)
0x5a4: @@ ClearReplies()
0x5a5: Pop(0)
0x5a6: Push((int) 14296)
0x5a7: Push((int) 15517)
0x5a8: Push((int) 15516)
0x5a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5aa: Pop(3)
0x5ab: Return(); Pop(0)

0x5ac: Push((int) 15517)
0x5ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ae: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5af: PushEmpty(string)
0x5b0: Stack[-1] = "Neutral"
0x5b1: Call 0x411

0x5b2: Pop(1)
0x5b3: Push((int) 14297)
0x5b4: @@ SetMessage(Stack[-1])
0x5b5: Pop(1)
0x5b6: @@ ClearReplies()
0x5b7: Pop(0)
0x5b8: Push((int) 14298)
0x5b9: Push((int) -1)
0x5ba: Push((int) 15518)
0x5bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bc: Pop(3)
0x5bd: Return(); Pop(0)

0x5be: Push((int) 15506)
0x5bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c0: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5c1: PushEmpty(string)
0x5c2: Stack[-1] = "Neutral"
0x5c3: Call 0x411

0x5c4: Pop(1)
0x5c5: Push((int) 14286)
0x5c6: @@ SetMessage(Stack[-1])
0x5c7: Pop(1)
0x5c8: @@ ClearReplies()
0x5c9: Pop(0)
0x5ca: Push((int) 14287)
0x5cb: Push((int) 15508)
0x5cc: Push((int) 15507)
0x5cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ce: Pop(3)
0x5cf: Return(); Pop(0)

0x5d0: Push((int) 15508)
0x5d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5d3: PushEmpty(string)
0x5d4: Stack[-1] = "Neutral"
0x5d5: Call 0x411

0x5d6: Pop(1)
0x5d7: Push((int) 14288)
0x5d8: @@ SetMessage(Stack[-1])
0x5d9: Pop(1)
0x5da: @@ ClearReplies()
0x5db: Pop(0)
0x5dc: Push((int) 14289)
0x5dd: Push((int) -1)
0x5de: Push((int) 15509)
0x5df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e0: Pop(3)
0x5e1: Return(); Pop(0)

0x5e2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5e3: PushEmpty(bool)
0x5e4: Call 0x69a

0x5e5: Pop(0)
0x5e6: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e7: @ lshStopAnimation()
0x5e8: Pop(0)
0x5e9: GOTO 0x5ec

0x5ea: @ StopAnimation()
0x5eb: Pop(0)
0x5ec: Return(); Pop(0)

0x5ed: GOTO 0x422

0x5ee: Return(); Pop(0)

0x5ef: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x5f0: @@ GetPosition(Stack[-4])
0x5f1: Pop(0)
0x5f2: @ GetPosition(Stack[-3])
0x5f3: Pop(0)
0x5f4: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x5f5: Push(CvectorIndex(Stack[-2], 0))
0x5f6: Push(CvectorIndex(Stack[-3], 2))
0x5f7: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x5f8: Pop(2)
0x5f9: Stack[-10] = Stack[-1]
0x5fa: Return(); Pop(8)

0x5fb: PushEmpty(bool, bool)
0x5fc: @ IsLoaded(Stack[-1])
0x5fd: Pop(0)
0x5fe: Stack[-3] = Stack[-1]
0x5ff: Return(); Pop(2)

0x600: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x601: @@ GetPosition(Stack[-7])
0x602: Pop(0)
0x603: @@ GetEyesHeight(Stack[-8])
0x604: Pop(0)
0x605: Push(CvectorIndex(Stack[-7], 1))
0x606: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x607: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x608: @ GetPosition(Stack[-6])
0x609: Pop(0)
0x60a: @ GetEyesHeight(Stack[-8])
0x60b: Pop(0)
0x60c: Push(CvectorIndex(Stack[-6], 1))
0x60d: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x60e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x60f: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x610: Push(CvectorIndex(Stack[-5], 1))
0x611: Stack[-1] = (int) 0
0x612: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x613: Pop(0); Push(Stack[-5] | Stack[-5]);
0x614: Pop(1); Push(Sqrt(Stack[-1]))
0x615: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x616: Stack[-4] = -Stack[-5]; Pop(0);
0x617: Push((int) 70)
0x618: Pop(1); Push(Stack[-6] * Stack[-1]);
0x619: PushEmpty(cvector, cvector)
0x61a: Push(CVector(0.0, 1.0, 0.0))
0x61b: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x61c: Call 0x655

0x61d: Pop(1)
0x61e: Push((int) 25)
0x61f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x620: Pop(2); Push(Stack[-2] + Stack[-1]);
0x621: Push(CVector(0.0, 10.0, 0.0))
0x622: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x623: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x624: @ IsOverrideActive(Stack[-1])
0x625: Pop(0)
0x626: Push(Stack[-1])
0x627: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x628: Stack[-18] = (bool) 0
0x629: Return(); Pop(16)

0x62a: @ StopWorld()
0x62b: Pop(0)
0x62c: @ CameraTransit(Stack[-2], Stack[-4])
0x62d: Pop(0)
0x62e: Push(CvectorIndex(Stack[-3], 0))
0x62f: Push(CvectorIndex(Stack[-4], 2))
0x630: @ Rotate(Stack[-2], Stack[-1])
0x631: Pop(2)
0x632: @ CameraWaitForPlayFinish()
0x633: Pop(0)
0x634: @ ResumeWorld()
0x635: Pop(0)
0x636: Stack[-18] = (bool) 1
0x637: Return(); Pop(16)

0x638: PushEmpty()
0x639: @ CameraSwitchToNormal()
0x63a: Pop(0)
0x63b: Return(); Pop(0)

0x63c: PushEmpty(float, float, float, float)
0x63d: Push("playing ")
0x63e: Pop(1); Push(Stack[-1] + Stack[-6]);
0x63f: @ Trace(Stack[-1])
0x640: Pop(1)
0x641: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x642: Pop(0)
0x643: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x644: Pop(0)
0x645: Push("start: ")
0x646: Pop(1); Push(Stack[-1] + Stack[-3]);
0x647: @ Trace(Stack[-1])
0x648: Pop(1)
0x649: Push("end: ")
0x64a: Pop(1); Push(Stack[-1] + Stack[-2]);
0x64b: @ Trace(Stack[-1])
0x64c: Pop(1)
0x64d: Return(); Pop(4)

0x64e: PushEmpty(bool)
0x64f: Call 0x69a

0x650: Pop(0)
0x651: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x652: @ lshStopSpeech()
0x653: Pop(0)
0x654: Return(); Pop(0)

0x655: PushEmpty(float, float)
0x656: Pop(0); Push(Stack[-3] | Stack[-3]);
0x657: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x658: Push((float)0.0)
0x659: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x65a: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x65c: Return(); Pop(2)

0x65d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x65e: Return(); Pop(2)

0x65f: PushEmpty(int, int)
0x660: @ GetVariable(Stack[-3], Stack[-1])
0x661: Pop(0)
0x662: Stack[-4] = Stack[-1]
0x663: Return(); Pop(2)

0x664: PushEmpty(int, int, bool, int, int, bool)
0x665: @@ GetItemID(Stack[-3])
0x666: Pop(0)
0x667: Push("Category")
0x668: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x669: Pop(1)
0x66a: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x66b: Pop(0)
0x66c: Pop(0); Push((bool) Stack[-1] == 0)
0x66d: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66e: @@ DropItems(Stack[-8], Stack[-7])
0x66f: Pop(0)
0x670: Return(); Pop(6)

0x671: PushEmpty(object, object)
0x672: @ CreateInvItem(Stack[-1])
0x673: Pop(0)
0x674: @@ SetItemName(Stack[-4])
0x675: Pop(0)
0x676: PushEmpty(object, object, int)
0x677: Stack[-3] = Stack[-8]
0x678: Stack[-2] = Stack[-4]
0x679: Stack[-1] = Stack[-6]
0x67a: Call 0x664

0x67b: Pop(3)
0x67c: Return(); Pop(2)

0x67d: Stack[-1] = 0
0x67e: PushEmpty(float, float)
0x67f: @ GetGameTime(Stack[-1])
0x680: Pop(0)
0x681: Push((int) 1)
0x682: PushEmpty(int)
0x683: Push((int) 24)
0x684: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x685: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x686: Return(); Pop(2)

0x687: PushEmpty()
0x688: PushEmpty(int)
0x689: Call 0x67e

0x68a: Pop(0)
0x68b: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x68c: Return(); Pop(0)

0x68d: PushEmpty(bool, bool)
0x68e: PushEmpty(string)
0x68f: Stack[-1] = "No"
0x690: Call 0x63c

0x691: Pop(1)
0x692: @ lshWaitForAnimEnd(Stack[-1])
0x693: Pop(0)
0x694: Stack[-3] = Stack[-1]
0x695: Return(); Pop(2)

0x696: Stack[-1] = (int) 11961
0x697: Return(); Pop(0)

0x698: Stack[-1] = "ui/NPC_Burah.png"
0x699: Return(); Pop(0)

0x69a: Stack[-1] = (bool) 1
0x69b: Return(); Pop(0)

0x69c: PushEmpty()
0x69d: Push("playsound")
0x69e: Push("giveitem")
0x69f: @ TriggerWorld(Stack[-2], Stack[-1])
0x6a0: Pop(2)
0x6a1: Return(); Pop(0)

0x6a2: PushEmpty()
0x6a3: Push("d9TalkToPolkovodec")
0x6a4: Push((int) 1)
0x6a5: @ SetVariable(Stack[-2], Stack[-1])
0x6a6: Pop(2)
0x6a7: Return(); Pop(0)

0x6a8: PushEmpty()
0x6a9: Push("ood9Block1")
0x6aa: Push((int) 1)
0x6ab: @ SetVariable(Stack[-2], Stack[-1])
0x6ac: Pop(2)
0x6ad: Return(); Pop(0)

0x6ae: PushEmpty(object, object)
0x6af: Push("Rifle is given")
0x6b0: @ Trace(Stack[-1])
0x6b1: Pop(1)
0x6b2: @ CreateInvItem(Stack[-1])
0x6b3: Pop(0)
0x6b4: Push("Rifle")
0x6b5: @@ SetItemName(Stack[-1])
0x6b6: Pop(1)
0x6b7: Push("durability")
0x6b8: Push((int) 100)
0x6b9: @@ SetProperty(Stack[-2], Stack[-1])
0x6ba: Pop(2)
0x6bb: PushEmpty(object, object, int)
0x6bc: Stack[-3] = Stack[-7]
0x6bd: Stack[-2] = Stack[-4]
0x6be: Stack[-1] = (int) 1
0x6bf: Call 0x664

0x6c0: Pop(3)
0x6c1: Return(); Pop(2)

0x6c2: Stack[-1] = 0
0x6c3: PushEmpty()
0x6c4: Push("ood11Block1")
0x6c5: Push((int) 1)
0x6c6: @ SetVariable(Stack[-2], Stack[-1])
0x6c7: Pop(2)
0x6c8: Return(); Pop(0)

0x6c9: PushEmpty()
0x6ca: Push("ood11Block2")
0x6cb: Push((int) 1)
0x6cc: @ SetVariable(Stack[-2], Stack[-1])
0x6cd: Pop(2)
0x6ce: Return(); Pop(0)

0x6cf: PushEmpty()
0x6d0: Push("ood11Block3")
0x6d1: Push((int) 1)
0x6d2: @ SetVariable(Stack[-2], Stack[-1])
0x6d3: Pop(2)
0x6d4: Return(); Pop(0)

0x6d5: PushEmpty()
0x6d6: Push("rifle ammo10 is given")
0x6d7: @ Trace(Stack[-1])
0x6d8: Pop(1)
0x6d9: PushEmpty(object, string, int)
0x6da: Stack[-3] = Stack[-5]
0x6db: Stack[-2] = "rifle_ammo"
0x6dc: Stack[-1] = (int) 10
0x6dd: Call 0x671

0x6de: Pop(3)
0x6df: Return(); Pop(0)

0x6e0: PushEmpty()
0x6e1: Push("ood9Block2")
0x6e2: Push((int) 1)
0x6e3: @ SetVariable(Stack[-2], Stack[-1])
0x6e4: Pop(2)
0x6e5: Return(); Pop(0)

0x6e6: PushEmpty()
0x6e7: PushEmpty(bool, object)
0x6e8: Stack[-1] = Stack[-3]
0x6e9: Call 0x75c

0x6ea: Pop(1)
0x6eb: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6ec: Stack[-2] = (bool) 1
0x6ed: Return(); Pop(0)

0x6ee: Stack[-2] = (bool) 0
0x6ef: Return(); Pop(0)

0x6f0: PushEmpty()
0x6f1: PushEmpty(int, string)
0x6f2: Stack[-1] = "d9q01"
0x6f3: Call 0x65f

0x6f4: Pop(1)
0x6f5: Push((int) 2)
0x6f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6f7: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f8: Stack[-2] = (bool) 1
0x6f9: Return(); Pop(0)

0x6fa: Stack[-2] = (bool) 0
0x6fb: Return(); Pop(0)

0x6fc: PushEmpty()
0x6fd: PushEmpty(int, string)
0x6fe: Stack[-1] = "ood9Block1"
0x6ff: Call 0x65f

0x700: Pop(1)
0x701: Push((int) 0)
0x702: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x703: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x704: Stack[-2] = (bool) 1
0x705: Return(); Pop(0)

0x706: Stack[-2] = (bool) 0
0x707: Return(); Pop(0)

0x708: PushEmpty()
0x709: PushEmpty(int, string)
0x70a: Stack[-1] = "d11q02"
0x70b: Call 0x65f

0x70c: Pop(1)
0x70d: Push((int) 1)
0x70e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x70f: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x710: Stack[-2] = (bool) 1
0x711: Return(); Pop(0)

0x712: Stack[-2] = (bool) 0
0x713: Return(); Pop(0)

0x714: PushEmpty()
0x715: PushEmpty(int, string)
0x716: Stack[-1] = "d11q01"
0x717: Call 0x65f

0x718: Pop(1)
0x719: Push((int) 2)
0x71a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x71b: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x71c: Stack[-2] = (bool) 1
0x71d: Return(); Pop(0)

0x71e: Stack[-2] = (bool) 0
0x71f: Return(); Pop(0)

0x720: PushEmpty()
0x721: PushEmpty(int, string)
0x722: Stack[-1] = "ood11Block1"
0x723: Call 0x65f

0x724: Pop(1)
0x725: Push((int) 0)
0x726: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x727: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x728: Stack[-2] = (bool) 1
0x729: Return(); Pop(0)

0x72a: Stack[-2] = (bool) 0
0x72b: Return(); Pop(0)

0x72c: PushEmpty()
0x72d: PushEmpty(int, string)
0x72e: Stack[-1] = "d11q01"
0x72f: Call 0x65f

0x730: Pop(1)
0x731: Push((int) 3)
0x732: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x733: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x734: Stack[-2] = (bool) 1
0x735: Return(); Pop(0)

0x736: Stack[-2] = (bool) 0
0x737: Return(); Pop(0)

0x738: PushEmpty()
0x739: PushEmpty(int, string)
0x73a: Stack[-1] = "ood11Block2"
0x73b: Call 0x65f

0x73c: Pop(1)
0x73d: Push((int) 0)
0x73e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x73f: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x740: Stack[-2] = (bool) 1
0x741: Return(); Pop(0)

0x742: Stack[-2] = (bool) 0
0x743: Return(); Pop(0)

0x744: PushEmpty()
0x745: PushEmpty(int, string)
0x746: Stack[-1] = "ood11Block3"
0x747: Call 0x65f

0x748: Pop(1)
0x749: Push((int) 0)
0x74a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x74b: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74c: Stack[-2] = (bool) 1
0x74d: Return(); Pop(0)

0x74e: Stack[-2] = (bool) 0
0x74f: Return(); Pop(0)

0x750: PushEmpty()
0x751: PushEmpty(int, string)
0x752: Stack[-1] = "ood9Block2"
0x753: Call 0x65f

0x754: Pop(1)
0x755: Push((int) 0)
0x756: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x757: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x758: Stack[-2] = (bool) 1
0x759: Return(); Pop(0)

0x75a: Stack[-2] = (bool) 0
0x75b: Return(); Pop(0)

0x75c: PushEmpty()
0x75d: Stack[-2] = (bool) 0
0x75e: Return(); Pop(0)

0x75f: PushEmpty(int, int)
0x760: Push("player")
0x761: @ GetVariable(Stack[-1], Stack[-2])
0x762: Pop(1)
0x763: Push((int) 0)
0x764: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x765: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x766: Stack[-3] = (int) 200001
0x767: Return(); Pop(2)

0x768: GOTO 0x76e

0x769: Push((int) 1)
0x76a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x76b: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76c: Stack[-3] = (int) 200002
0x76d: Return(); Pop(2)

0x76e: Stack[-3] = (int) 200003
0x76f: Return(); Pop(2)

0x770: Return(); Pop(0)

0x771: PushEmpty()
0x772: PushEmpty(bool, int)
0x773: Stack[-1] = (int) 9
0x774: Call 0x687

0x775: Pop(1)
0x776: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x777: PushEmpty(int, object)
0x778: Stack[-1] = Stack[-3]
0x779: Push(-2, 1); TaskCall(2)
0x77a: Call 0x31

0x77b: Pop(-2, 1); TaskReturn
0x77c: Pop(2)
0x77d: Return(); Pop(0)

0x77e: PushEmpty(bool, int)
0x77f: Stack[-1] = (int) 11
0x780: Call 0x687

0x781: Pop(1)
0x782: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x783: PushEmpty(int, object)
0x784: Stack[-1] = Stack[-3]
0x785: Push(-2, 1); TaskCall(4)
0x786: Call 0x364

0x787: Pop(-2, 1); TaskReturn
0x788: Pop(2)
0x789: Return(); Pop(0)

0x78a: PushEmpty(bool)
0x78b: Call 0x68d

0x78c: Pop(1)
0x78d: Return(); Pop(0)

