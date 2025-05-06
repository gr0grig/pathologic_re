GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	restore
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
	ood10Petr1
	d10q01
	ood10Petr2
	blueprint is given
	d10q01_blueprint
	ood10Petr3
	d10q01MariaSavePetr
	tvirin
	GetItemCountOfType
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	player
	Adding diary entry
	ui/NPC_Black.png

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
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
	self (1 args)
	GetVariable (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x2c3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdf Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x2bb Vars = (object)
		EVENT_26 Op = 0x2c7 Vars = (string)
		EVENT_6 Op = 0x2e3 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x2f5

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x46a

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x46c

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x439

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x32d

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0x45: PushEmpty(bool)
0x46: Stack[-1] = (bool) 0
0x47: PushEmpty(bool, object)
0x48: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49: Call 0x3a6

0x4a: Pop(1)
0x4b: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4c: PushEmpty(bool, object)
0x4d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e: Call 0x3b2

0x4f: Pop(1)
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Stack[-1] = (bool) 1
0x52: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x53: PushEmpty(object, object)
0x54: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x55: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56: Call 0x379

0x57: Pop(2)
0x58: PushEmpty(string)
0x59: Stack[-1] = "Neutral"
0x5a: Call 0xcf

0x5b: Pop(1)
0x5c: Push((int) 12853)
0x5d: @@ SetMessage(Stack[-1])
0x5e: Pop(1)
0x5f: @@ ClearReplies()
0x60: Pop(0)
0x61: Push((int) 12854)
0x62: Push((int) 14056)
0x63: Push((int) 14055)
0x64: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65: Pop(3)
0x66: GOTO 0xb1

0x67: PushEmpty(string)
0x68: Stack[-1] = "Neutral"
0x69: Call 0xcf

0x6a: Pop(1)
0x6b: Push((int) 12871)
0x6c: @@ SetMessage(Stack[-1])
0x6d: Pop(1)
0x6e: @@ ClearReplies()
0x6f: Pop(0)
0x70: PushEmpty(bool)
0x71: Stack[-1] = (bool) 0
0x72: PushEmpty(bool, object)
0x73: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74: Call 0x3be

0x75: Pop(1)
0x76: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x77: PushEmpty(bool, object)
0x78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79: Call 0x3ca

0x7a: Pop(1)
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: Stack[-1] = (bool) 1
0x7d: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7e: Push((int) 12872)
0x7f: Push((int) 14075)
0x80: Push((int) 14074)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: PushEmpty(bool)
0x84: Stack[-1] = (bool) 0
0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call 0x3d6

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8a: PushEmpty(bool, object)
0x8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c: Call 0x3e2

0x8d: Pop(1)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Stack[-1] = (bool) 1
0x90: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x91: Push((int) 15468)
0x92: Push((int) 16586)
0x93: Push((int) 16585)
0x94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95: Pop(3)
0x96: PushEmpty(bool)
0x97: Stack[-1] = (bool) 0
0x98: PushEmpty(bool, object)
0x99: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a: Call 0x3ec

0x9b: Pop(1)
0x9c: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9d: PushEmpty(bool, object)
0x9e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f: Call 0x3f8

0xa0: Pop(1)
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: Stack[-1] = (bool) 1
0xa3: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa4: Push((int) 12879)
0xa5: Push((int) 14082)
0xa6: Push((int) 14081)
0xa7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8: Pop(3)
0xa9: Push((int) 12890)
0xaa: Push((int) -1)
0xab: Push((int) 14092)
0xac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad: Pop(3)
0xae: GOTO 0xb1

0xaf: Return(); Pop(0)

0xb0: GOTO 0x43

0xb1: PushEmpty(bool)
0xb2: Call 0x46e

0xb3: Pop(0)
0xb4: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb5: @ lshWaitForAnimEnd()
0xb6: Pop(0)
0xb7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: GOTO 0xbf

0xba: PushEmpty(string)
0xbb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbc: Call 0x331

0xbd: Pop(1)
0xbe: GOTO 0xb5

0xbf: GOTO 0xce

0xc0: Push("all")
0xc1: Push("idle")
0xc2: @ PlayAnimation(Stack[-2], Stack[-1])
0xc3: Pop(2)
0xc4: @ WaitForAnimEnd()
0xc5: Pop(0)
0xc6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc7: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc8: GOTO 0xce

0xc9: Push("all")
0xca: Push("idle")
0xcb: @ PlayAnimation(Stack[-2], Stack[-1])
0xcc: Pop(2)
0xcd: GOTO 0xc4

0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty(bool)
0xd1: Call 0x46e

0xd2: Pop(0)
0xd3: Pop(1); Push((bool) Stack[-1] == 0)
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: Return(); Pop(0)

0xd6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd7: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd8: Return(); Pop(0)

0xd9: PushEmpty(string)
0xda: Stack[-1] = Stack[-2]
0xdb: Call 0x331

0xdc: Pop(1)
0xdd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xde: Return(); Pop(0)

0xdf: PushEmpty()
0xe0: Push((int) 1)
0xe1: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0xe2: PushEmpty()
0xe3: Call 0x343

0xe4: Pop(0)
0xe5: Push((int) 14074)
0xe6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call 0x388

0xec: Pop(2)
0xed: Push((int) 14080)
0xee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf0: PushEmpty(object, object)
0xf1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf3: Call 0x37f

0xf4: Pop(2)
0xf5: Push((int) 16589)
0xf6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: PushEmpty(object, object)
0xf9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb: Call 0x38e

0xfc: Pop(2)
0xfd: Push((int) 14081)
0xfe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call 0x3a0

0x104: Pop(2)
0x105: Push((int) 14054)
0x106: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x108: PushEmpty(bool)
0x109: Stack[-1] = (bool) 0
0x10a: PushEmpty(bool, object)
0x10b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Call 0x3a6

0x10d: Pop(1)
0x10e: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x10f: PushEmpty(bool, object)
0x110: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x111: Call 0x3b2

0x112: Pop(1)
0x113: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x114: Stack[-1] = (bool) 1
0x115: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x116: PushEmpty(object, object)
0x117: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x118: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x119: Call 0x379

0x11a: Pop(2)
0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral"
0x11d: Call 0xcf

0x11e: Pop(1)
0x11f: Push((int) 12853)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: Push((int) 12854)
0x125: Push((int) 14056)
0x126: Push((int) 14055)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: PushEmpty(string)
0x12b: Stack[-1] = "Neutral"
0x12c: Call 0xcf

0x12d: Pop(1)
0x12e: Push((int) 12871)
0x12f: @@ SetMessage(Stack[-1])
0x130: Pop(1)
0x131: @@ ClearReplies()
0x132: Pop(0)
0x133: PushEmpty(bool)
0x134: Stack[-1] = (bool) 0
0x135: PushEmpty(bool, object)
0x136: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x137: Call 0x3be

0x138: Pop(1)
0x139: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13a: PushEmpty(bool, object)
0x13b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13c: Call 0x3ca

0x13d: Pop(1)
0x13e: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13f: Stack[-1] = (bool) 1
0x140: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x141: Push((int) 12872)
0x142: Push((int) 14075)
0x143: Push((int) 14074)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: PushEmpty(bool)
0x147: Stack[-1] = (bool) 0
0x148: PushEmpty(bool, object)
0x149: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14a: Call 0x3d6

0x14b: Pop(1)
0x14c: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14d: PushEmpty(bool, object)
0x14e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14f: Call 0x3e2

0x150: Pop(1)
0x151: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x152: Stack[-1] = (bool) 1
0x153: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x154: Push((int) 15468)
0x155: Push((int) 16586)
0x156: Push((int) 16585)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: PushEmpty(bool)
0x15a: Stack[-1] = (bool) 0
0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call 0x3ec

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x160: PushEmpty(bool, object)
0x161: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x162: Call 0x3f8

0x163: Pop(1)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Stack[-1] = (bool) 1
0x166: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x167: Push((int) 12879)
0x168: Push((int) 14082)
0x169: Push((int) 14081)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Push((int) 12890)
0x16d: Push((int) -1)
0x16e: Push((int) 14092)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Return(); Pop(0)

0x172: Push((int) 14082)
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x175: PushEmpty(string)
0x176: Stack[-1] = "Neutral"
0x177: Call 0xcf

0x178: Pop(1)
0x179: Push((int) 12880)
0x17a: @@ SetMessage(Stack[-1])
0x17b: Pop(1)
0x17c: @@ ClearReplies()
0x17d: Pop(0)
0x17e: Push((int) 12881)
0x17f: Push((int) 14084)
0x180: Push((int) 14083)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: Return(); Pop(0)

0x184: Push((int) 14084)
0x185: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x187: PushEmpty(string)
0x188: Stack[-1] = "Neutral"
0x189: Call 0xcf

0x18a: Pop(1)
0x18b: Push((int) 12882)
0x18c: @@ SetMessage(Stack[-1])
0x18d: Pop(1)
0x18e: @@ ClearReplies()
0x18f: Pop(0)
0x190: Push((int) 12883)
0x191: Push((int) 14086)
0x192: Push((int) 14085)
0x193: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x194: Pop(3)
0x195: Return(); Pop(0)

0x196: Push((int) 14086)
0x197: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x199: PushEmpty(string)
0x19a: Stack[-1] = "Neutral"
0x19b: Call 0xcf

0x19c: Pop(1)
0x19d: Push((int) 12884)
0x19e: @@ SetMessage(Stack[-1])
0x19f: Pop(1)
0x1a0: @@ ClearReplies()
0x1a1: Pop(0)
0x1a2: Push((int) 12885)
0x1a3: Push((int) 14088)
0x1a4: Push((int) 14087)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: Return(); Pop(0)

0x1a8: Push((int) 14088)
0x1a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1ab: PushEmpty(string)
0x1ac: Stack[-1] = "Neutral"
0x1ad: Call 0xcf

0x1ae: Pop(1)
0x1af: Push((int) 12886)
0x1b0: @@ SetMessage(Stack[-1])
0x1b1: Pop(1)
0x1b2: @@ ClearReplies()
0x1b3: Pop(0)
0x1b4: Push((int) 12887)
0x1b5: Push((int) 14090)
0x1b6: Push((int) 14089)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: Return(); Pop(0)

0x1ba: Push((int) 14090)
0x1bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1bd: PushEmpty(string)
0x1be: Stack[-1] = "Neutral"
0x1bf: Call 0xcf

0x1c0: Pop(1)
0x1c1: Push((int) 12888)
0x1c2: @@ SetMessage(Stack[-1])
0x1c3: Pop(1)
0x1c4: @@ ClearReplies()
0x1c5: Pop(0)
0x1c6: Push((int) 12889)
0x1c7: Push((int) -1)
0x1c8: Push((int) 14091)
0x1c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ca: Pop(3)
0x1cb: Return(); Pop(0)

0x1cc: Push((int) 16586)
0x1cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1cf: PushEmpty(string)
0x1d0: Stack[-1] = "Neutral"
0x1d1: Call 0xcf

0x1d2: Pop(1)
0x1d3: Push((int) 15469)
0x1d4: @@ SetMessage(Stack[-1])
0x1d5: Pop(1)
0x1d6: @@ ClearReplies()
0x1d7: Pop(0)
0x1d8: Push((int) 15470)
0x1d9: Push((int) 16588)
0x1da: Push((int) 16587)
0x1db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(3)
0x1dd: Return(); Pop(0)

0x1de: Push((int) 16588)
0x1df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1e1: PushEmpty(string)
0x1e2: Stack[-1] = "Neutral"
0x1e3: Call 0xcf

0x1e4: Pop(1)
0x1e5: Push((int) 15471)
0x1e6: @@ SetMessage(Stack[-1])
0x1e7: Pop(1)
0x1e8: @@ ClearReplies()
0x1e9: Pop(0)
0x1ea: Push((int) 15472)
0x1eb: Push((int) -1)
0x1ec: Push((int) 16589)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: Return(); Pop(0)

0x1f0: Push((int) 14075)
0x1f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1f3: PushEmpty(string)
0x1f4: Stack[-1] = "Neutral"
0x1f5: Call 0xcf

0x1f6: Pop(1)
0x1f7: Push((int) 12873)
0x1f8: @@ SetMessage(Stack[-1])
0x1f9: Pop(1)
0x1fa: @@ ClearReplies()
0x1fb: Pop(0)
0x1fc: Push((int) 12874)
0x1fd: Push((int) 14077)
0x1fe: Push((int) 14076)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Return(); Pop(0)

0x202: Push((int) 14077)
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x205: PushEmpty(string)
0x206: Stack[-1] = "Neutral"
0x207: Call 0xcf

0x208: Pop(1)
0x209: Push((int) 12875)
0x20a: @@ SetMessage(Stack[-1])
0x20b: Pop(1)
0x20c: @@ ClearReplies()
0x20d: Pop(0)
0x20e: Push((int) 12876)
0x20f: Push((int) 14079)
0x210: Push((int) 14078)
0x211: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x212: Pop(3)
0x213: Return(); Pop(0)

0x214: Push((int) 14079)
0x215: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x217: PushEmpty(string)
0x218: Stack[-1] = "Neutral"
0x219: Call 0xcf

0x21a: Pop(1)
0x21b: Push((int) 12877)
0x21c: @@ SetMessage(Stack[-1])
0x21d: Pop(1)
0x21e: @@ ClearReplies()
0x21f: Pop(0)
0x220: Push((int) 12878)
0x221: Push((int) -1)
0x222: Push((int) 14080)
0x223: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x224: Pop(3)
0x225: Return(); Pop(0)

0x226: Push((int) 14056)
0x227: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x229: PushEmpty(string)
0x22a: Stack[-1] = "Neutral"
0x22b: Call 0xcf

0x22c: Pop(1)
0x22d: Push((int) 12855)
0x22e: @@ SetMessage(Stack[-1])
0x22f: Pop(1)
0x230: @@ ClearReplies()
0x231: Pop(0)
0x232: Push((int) 12856)
0x233: Push((int) 14058)
0x234: Push((int) 14057)
0x235: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: Return(); Pop(0)

0x238: Push((int) 14058)
0x239: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x23b: PushEmpty(string)
0x23c: Stack[-1] = "Neutral"
0x23d: Call 0xcf

0x23e: Pop(1)
0x23f: Push((int) 12857)
0x240: @@ SetMessage(Stack[-1])
0x241: Pop(1)
0x242: @@ ClearReplies()
0x243: Pop(0)
0x244: Push((int) 12858)
0x245: Push((int) 14061)
0x246: Push((int) 14059)
0x247: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x248: Pop(3)
0x249: Push((int) 12859)
0x24a: Push((int) 14064)
0x24b: Push((int) 14060)
0x24c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24d: Pop(3)
0x24e: Push((int) 12868)
0x24f: Push((int) 14070)
0x250: Push((int) 14069)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: Return(); Pop(0)

0x254: Push((int) 14064)
0x255: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x257: PushEmpty(string)
0x258: Stack[-1] = "Neutral"
0x259: Call 0xcf

0x25a: Pop(1)
0x25b: Push((int) 12863)
0x25c: @@ SetMessage(Stack[-1])
0x25d: Pop(1)
0x25e: @@ ClearReplies()
0x25f: Pop(0)
0x260: Push((int) 12864)
0x261: Push((int) -1)
0x262: Push((int) 14065)
0x263: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x264: Pop(3)
0x265: Return(); Pop(0)

0x266: Push((int) 14061)
0x267: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x268: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x269: PushEmpty(string)
0x26a: Stack[-1] = "Neutral"
0x26b: Call 0xcf

0x26c: Pop(1)
0x26d: Push((int) 12860)
0x26e: @@ SetMessage(Stack[-1])
0x26f: Pop(1)
0x270: @@ ClearReplies()
0x271: Pop(0)
0x272: Push((int) 12861)
0x273: Push((int) 14063)
0x274: Push((int) 14062)
0x275: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x276: Pop(3)
0x277: Return(); Pop(0)

0x278: Push((int) 14063)
0x279: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27a: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x27b: PushEmpty(string)
0x27c: Stack[-1] = "Neutral"
0x27d: Call 0xcf

0x27e: Pop(1)
0x27f: Push((int) 12862)
0x280: @@ SetMessage(Stack[-1])
0x281: Pop(1)
0x282: @@ ClearReplies()
0x283: Pop(0)
0x284: Push((int) 12865)
0x285: Push((int) 14067)
0x286: Push((int) 14066)
0x287: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x288: Pop(3)
0x289: Return(); Pop(0)

0x28a: Push((int) 14067)
0x28b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x28d: PushEmpty(string)
0x28e: Stack[-1] = "Neutral"
0x28f: Call 0xcf

0x290: Pop(1)
0x291: Push((int) 12866)
0x292: @@ SetMessage(Stack[-1])
0x293: Pop(1)
0x294: @@ ClearReplies()
0x295: Pop(0)
0x296: Push((int) 12867)
0x297: Push((int) 14070)
0x298: Push((int) 14068)
0x299: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29a: Pop(3)
0x29b: Return(); Pop(0)

0x29c: Push((int) 14070)
0x29d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x29f: PushEmpty(string)
0x2a0: Stack[-1] = "Neutral"
0x2a1: Call 0xcf

0x2a2: Pop(1)
0x2a3: Push((int) 12869)
0x2a4: @@ SetMessage(Stack[-1])
0x2a5: Pop(1)
0x2a6: @@ ClearReplies()
0x2a7: Pop(0)
0x2a8: Push((int) 12870)
0x2a9: Push((int) -1)
0x2aa: Push((int) 14072)
0x2ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ac: Pop(3)
0x2ad: Return(); Pop(0)

0x2ae: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2af: PushEmpty(bool)
0x2b0: Call 0x46e

0x2b1: Pop(0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b3: @ lshStopAnimation()
0x2b4: Pop(0)
0x2b5: GOTO 0x2b8

0x2b6: @ StopAnimation()
0x2b7: Pop(0)
0x2b8: Return(); Pop(0)

0x2b9: GOTO 0xe0

0x2ba: Return(); Pop(0)

0x2bb: PushEmpty()
0x2bc: PushEmpty(int, object)
0x2bd: Stack[-1] = Stack[-3]
0x2be: Push(-2, 1); TaskCall(0)
0x2bf: Call 0x0

0x2c0: Pop(-2, 1); TaskReturn
0x2c1: Pop(2)
0x2c2: Return(); Pop(0)

0x2c3: @ Hold()
0x2c4: Pop(0)
0x2c5: GOTO 0x2c3

0x2c6: Return(); Pop(0)

0x2c7: PushEmpty(bool, bool)
0x2c8: Push("cleanup")
0x2c9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2cb: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2cc: @ IsLoaded(Stack[-1])
0x2cd: Pop(0)
0x2ce: PushEmpty(bool)
0x2cf: Stack[-1] = (bool) 0
0x2d0: Pop(0); Push((bool) Stack[-2] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d2: PushEmpty(bool)
0x2d3: Call 0x2f3

0x2d4: Pop(0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: Stack[-1] = (bool) 1
0x2d7: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d8: PushEmpty(object)
0x2d9: Call 0x34a

0x2da: Pop(0)
0x2db: @ RemoveActor(Stack[-1])
0x2dc: Pop(1)
0x2dd: GOTO 0x2e2

0x2de: Push("restore")
0x2df: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2e2: Return(); Pop(2)

0x2e3: PushEmpty(bool)
0x2e4: Stack[-1] = (bool) 0
0x2e5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e7: PushEmpty(bool)
0x2e8: Call 0x2f3

0x2e9: Pop(0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: Stack[-1] = (bool) 1
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ed: PushEmpty(object)
0x2ee: Call 0x34a

0x2ef: Pop(0)
0x2f0: @ RemoveActor(Stack[-1])
0x2f1: Pop(1)
0x2f2: Return(); Pop(0)

0x2f3: Stack[-1] = (bool) 1
0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x2f6: @@ GetPosition(Stack[-7])
0x2f7: Pop(0)
0x2f8: @@ GetEyesHeight(Stack[-8])
0x2f9: Pop(0)
0x2fa: Push(CvectorIndex(Stack[-7], 1))
0x2fb: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x2fc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2fd: @ GetPosition(Stack[-6])
0x2fe: Pop(0)
0x2ff: @ GetEyesHeight(Stack[-8])
0x300: Pop(0)
0x301: Push(CvectorIndex(Stack[-6], 1))
0x302: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x303: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x304: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x305: Push(CvectorIndex(Stack[-5], 1))
0x306: Stack[-1] = (int) 0
0x307: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x308: Pop(0); Push(Stack[-5] | Stack[-5]);
0x309: Pop(1); Push(Sqrt(Stack[-1]))
0x30a: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x30b: Stack[-4] = -Stack[-5]; Pop(0);
0x30c: Push((int) 70)
0x30d: Pop(1); Push(Stack[-6] * Stack[-1]);
0x30e: PushEmpty(cvector, cvector)
0x30f: Push(CVector(0.0, 1.0, 0.0))
0x310: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x311: Call 0x350

0x312: Pop(1)
0x313: Push((int) 25)
0x314: Pop(2); Push(Stack[-2] * Stack[-1]);
0x315: Pop(2); Push(Stack[-2] + Stack[-1]);
0x316: Push(CVector(0.0, 10.0, 0.0))
0x317: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x318: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x319: @ IsOverrideActive(Stack[-1])
0x31a: Pop(0)
0x31b: Push(Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31d: Stack[-18] = (bool) 0
0x31e: Return(); Pop(16)

0x31f: @ StopWorld()
0x320: Pop(0)
0x321: @ CameraTransit(Stack[-2], Stack[-4])
0x322: Pop(0)
0x323: Push(CvectorIndex(Stack[-3], 0))
0x324: Push(CvectorIndex(Stack[-4], 2))
0x325: @ Rotate(Stack[-2], Stack[-1])
0x326: Pop(2)
0x327: @ CameraWaitForPlayFinish()
0x328: Pop(0)
0x329: @ ResumeWorld()
0x32a: Pop(0)
0x32b: Stack[-18] = (bool) 1
0x32c: Return(); Pop(16)

0x32d: PushEmpty()
0x32e: @ CameraSwitchToNormal()
0x32f: Pop(0)
0x330: Return(); Pop(0)

0x331: PushEmpty(float, float, float, float)
0x332: Push("playing ")
0x333: Pop(1); Push(Stack[-1] + Stack[-6]);
0x334: @ Trace(Stack[-1])
0x335: Pop(1)
0x336: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x337: Pop(0)
0x338: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x339: Pop(0)
0x33a: Push("start: ")
0x33b: Pop(1); Push(Stack[-1] + Stack[-3]);
0x33c: @ Trace(Stack[-1])
0x33d: Pop(1)
0x33e: Push("end: ")
0x33f: Pop(1); Push(Stack[-1] + Stack[-2]);
0x340: @ Trace(Stack[-1])
0x341: Pop(1)
0x342: Return(); Pop(4)

0x343: PushEmpty(bool)
0x344: Call 0x46e

0x345: Pop(0)
0x346: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x347: @ lshStopSpeech()
0x348: Pop(0)
0x349: Return(); Pop(0)

0x34a: PushEmpty(object, object)
0x34b: @ self(Stack[-1])
0x34c: Pop(0)
0x34d: Stack[-3] = Stack[-1]
0x34e: Return(); Pop(2)

0x34f: Stack[-1] = 0
0x350: PushEmpty(float, float)
0x351: Pop(0); Push(Stack[-3] | Stack[-3]);
0x352: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x353: Push((float)0.0)
0x354: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x355: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x356: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x357: Return(); Pop(2)

0x358: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x359: Return(); Pop(2)

0x35a: PushEmpty(int, int)
0x35b: @ GetVariable(Stack[-3], Stack[-1])
0x35c: Pop(0)
0x35d: Stack[-4] = Stack[-1]
0x35e: Return(); Pop(2)

0x35f: PushEmpty(int, int, bool, int, int, bool)
0x360: @@ GetItemID(Stack[-3])
0x361: Pop(0)
0x362: Push("Category")
0x363: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x364: Pop(1)
0x365: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x366: Pop(0)
0x367: Pop(0); Push((bool) Stack[-1] == 0)
0x368: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x369: @@ DropItems(Stack[-8], Stack[-7])
0x36a: Pop(0)
0x36b: Return(); Pop(6)

0x36c: PushEmpty(object, object)
0x36d: @ CreateInvItem(Stack[-1])
0x36e: Pop(0)
0x36f: @@ SetItemName(Stack[-4])
0x370: Pop(0)
0x371: PushEmpty(object, object, int)
0x372: Stack[-3] = Stack[-8]
0x373: Stack[-2] = Stack[-4]
0x374: Stack[-1] = Stack[-6]
0x375: Call 0x35f

0x376: Pop(3)
0x377: Return(); Pop(2)

0x378: Stack[-1] = 0
0x379: PushEmpty()
0x37a: Push("ood10Petr1")
0x37b: Push((int) 1)
0x37c: @ SetVariable(Stack[-2], Stack[-1])
0x37d: Pop(2)
0x37e: Return(); Pop(0)

0x37f: PushEmpty()
0x380: Push("d10q01")
0x381: Push((int) 2)
0x382: @ SetVariable(Stack[-2], Stack[-1])
0x383: Pop(2)
0x384: PushEmpty()
0x385: Call 0x44a

0x386: Pop(0)
0x387: Return(); Pop(0)

0x388: PushEmpty()
0x389: Push("ood10Petr2")
0x38a: Push((int) 1)
0x38b: @ SetVariable(Stack[-2], Stack[-1])
0x38c: Pop(2)
0x38d: Return(); Pop(0)

0x38e: PushEmpty()
0x38f: Push("d10q01")
0x390: Push((int) 3)
0x391: @ SetVariable(Stack[-2], Stack[-1])
0x392: Pop(2)
0x393: PushEmpty()
0x394: Call 0x45a

0x395: Pop(0)
0x396: Push("blueprint is given")
0x397: @ Trace(Stack[-1])
0x398: Pop(1)
0x399: PushEmpty(object, string, int)
0x39a: Stack[-3] = Stack[-5]
0x39b: Stack[-2] = "d10q01_blueprint"
0x39c: Stack[-1] = (int) 1
0x39d: Call 0x36c

0x39e: Pop(3)
0x39f: Return(); Pop(0)

0x3a0: PushEmpty()
0x3a1: Push("ood10Petr3")
0x3a2: Push((int) 1)
0x3a3: @ SetVariable(Stack[-2], Stack[-1])
0x3a4: Pop(2)
0x3a5: Return(); Pop(0)

0x3a6: PushEmpty()
0x3a7: PushEmpty(int, string)
0x3a8: Stack[-1] = "ood10Petr1"
0x3a9: Call 0x35a

0x3aa: Pop(1)
0x3ab: Push((int) 0)
0x3ac: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ae: Stack[-2] = (bool) 1
0x3af: Return(); Pop(0)

0x3b0: Stack[-2] = (bool) 0
0x3b1: Return(); Pop(0)

0x3b2: PushEmpty()
0x3b3: PushEmpty(int, string)
0x3b4: Stack[-1] = "d10q01MariaSavePetr"
0x3b5: Call 0x35a

0x3b6: Pop(1)
0x3b7: Push((int) 1)
0x3b8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-2] = (bool) 1
0x3bb: Return(); Pop(0)

0x3bc: Stack[-2] = (bool) 0
0x3bd: Return(); Pop(0)

0x3be: PushEmpty()
0x3bf: PushEmpty(int, string)
0x3c0: Stack[-1] = "d10q01"
0x3c1: Call 0x35a

0x3c2: Pop(1)
0x3c3: Push((int) 1)
0x3c4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: Stack[-2] = (bool) 1
0x3c7: Return(); Pop(0)

0x3c8: Stack[-2] = (bool) 0
0x3c9: Return(); Pop(0)

0x3ca: PushEmpty()
0x3cb: PushEmpty(int, string)
0x3cc: Stack[-1] = "ood10Petr2"
0x3cd: Call 0x35a

0x3ce: Pop(1)
0x3cf: Push((int) 0)
0x3d0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d2: Stack[-2] = (bool) 1
0x3d3: Return(); Pop(0)

0x3d4: Stack[-2] = (bool) 0
0x3d5: Return(); Pop(0)

0x3d6: PushEmpty()
0x3d7: PushEmpty(int, string)
0x3d8: Stack[-1] = "d10q01"
0x3d9: Call 0x35a

0x3da: Pop(1)
0x3db: Push((int) 2)
0x3dc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3de: Stack[-2] = (bool) 1
0x3df: Return(); Pop(0)

0x3e0: Stack[-2] = (bool) 0
0x3e1: Return(); Pop(0)

0x3e2: PushEmpty()
0x3e3: PushEmpty(bool, object)
0x3e4: Stack[-1] = Stack[-3]
0x3e5: Call 0x404

0x3e6: Pop(1)
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e8: Stack[-2] = (bool) 1
0x3e9: Return(); Pop(0)

0x3ea: Stack[-2] = (bool) 0
0x3eb: Return(); Pop(0)

0x3ec: PushEmpty()
0x3ed: PushEmpty(int, string)
0x3ee: Stack[-1] = "d10q01"
0x3ef: Call 0x35a

0x3f0: Pop(1)
0x3f1: Push((int) 3)
0x3f2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f4: Stack[-2] = (bool) 1
0x3f5: Return(); Pop(0)

0x3f6: Stack[-2] = (bool) 0
0x3f7: Return(); Pop(0)

0x3f8: PushEmpty()
0x3f9: PushEmpty(int, string)
0x3fa: Stack[-1] = "ood10Petr3"
0x3fb: Call 0x35a

0x3fc: Pop(1)
0x3fd: Push((int) 0)
0x3fe: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: Stack[-2] = (bool) 1
0x401: Return(); Pop(0)

0x402: Stack[-2] = (bool) 0
0x403: Return(); Pop(0)

0x404: PushEmpty(int, int)
0x405: Push("tvirin")
0x406: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x407: Pop(1)
0x408: Push((int) 5)
0x409: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: Stack[-4] = (bool) 1
0x40c: Return(); Pop(2)

0x40d: Stack[-4] = (bool) 0
0x40e: Return(); Pop(2)

0x40f: PushEmpty(object, object)
0x410: @ GetDiaryRoot(Stack[-1])
0x411: Pop(0)
0x412: Pop(0); Push((bool) Stack[-1] == 0)
0x413: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x414: Push("Can't retrieve diary root")
0x415: @ Trace(Stack[-1])
0x416: Pop(1)
0x417: Stack[-3] = (bool) 0
0x418: Return(); Pop(2)

0x419: Stack[-3] = Stack[-1]
0x41a: Return(); Pop(2)

0x41b: Stack[-1] = 0
0x41c: PushEmpty(object, object, int, object, object, int)
0x41d: PushEmpty(object)
0x41e: Call 0x40f

0x41f: Stack[-4] = Stack[-1]
0x420: Pop(1)
0x421: @@ Find(Stack[-7], Stack[-2])
0x422: Pop(0)
0x423: Pop(0); Push((bool) Stack[-2] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x425: Push("Can't find diary parent with id: ")
0x426: Pop(1); Push(Stack[-1] + Stack[-8]);
0x427: @ Trace(Stack[-1])
0x428: Pop(1)
0x429: Stack[-9] = (bool) 0
0x42a: Return(); Pop(6)

0x42b: @@ AddChild(Stack[-8])
0x42c: Pop(0)
0x42d: Push("player_diary")
0x42e: Push((int) 1)
0x42f: @ SetVariable(Stack[-2], Stack[-1])
0x430: Pop(2)
0x431: @@ GetCategory(Stack[-1])
0x432: Pop(0)
0x433: @ SetDiarySection(Stack[-1])
0x434: Pop(0)
0x435: Stack[-9] = (bool) 0
0x436: Return(); Pop(6)

0x437: Stack[-2] = 0
0x438: Stack[-3] = 0
0x439: PushEmpty(int, int)
0x43a: Push("player")
0x43b: @ GetVariable(Stack[-1], Stack[-2])
0x43c: Pop(1)
0x43d: Push((int) 0)
0x43e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x440: Stack[-3] = (int) 200001
0x441: Return(); Pop(2)

0x442: GOTO 0x448

0x443: Push((int) 1)
0x444: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x446: Stack[-3] = (int) 200002
0x447: Return(); Pop(2)

0x448: Stack[-3] = (int) 200003
0x449: Return(); Pop(2)

0x44a: PushEmpty(object, object)
0x44b: Push("Adding diary entry")
0x44c: @ Trace(Stack[-1])
0x44d: Pop(1)
0x44e: Push((int) 189)
0x44f: Push((int) 1)
0x450: Push((int) 15474)
0x451: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x452: Pop(3)
0x453: PushEmpty(bool, object, int)
0x454: Stack[-2] = Stack[-4]
0x455: Stack[-1] = (int) 186
0x456: Call 0x41c

0x457: Pop(3)
0x458: Return(); Pop(2)

0x459: Stack[-1] = 0
0x45a: PushEmpty(object, object)
0x45b: Push("Adding diary entry")
0x45c: @ Trace(Stack[-1])
0x45d: Pop(1)
0x45e: Push((int) 190)
0x45f: Push((int) 1)
0x460: Push((int) 15475)
0x461: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x462: Pop(3)
0x463: PushEmpty(bool, object, int)
0x464: Stack[-2] = Stack[-4]
0x465: Stack[-1] = (int) 186
0x466: Call 0x41c

0x467: Pop(3)
0x468: Return(); Pop(2)

0x469: Stack[-1] = 0
0x46a: Stack[-1] = (int) 4029
0x46b: Return(); Pop(0)

0x46c: Stack[-1] = "ui/NPC_Black.png"
0x46d: Return(); Pop(0)

0x46e: Stack[-1] = (bool) 0
0x46f: Return(); Pop(0)

