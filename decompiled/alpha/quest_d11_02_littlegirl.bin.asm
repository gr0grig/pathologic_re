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
	playsound
	giveitem
	powder is given
	powder
	ood11ULittleGirl1
	d11q02
	quest_d11_02
	init_graveyard
	completed
	ood11ULittleGirl2
	SetReturnValue
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	player
	Adding diary entry
	ui/NPC_None.png

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
	FindActor (2 args)
	Trigger (2 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x1c5
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd0 Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x1ca Vars = (object)
		EVENT_26 Op = 0x1dc Vars = (string)
		EVENT_6 Op = 0x1f8 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x20a

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x391

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x393

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x350

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
0x36: Call 0x242

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
0x44: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x2ea

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x4a: PushEmpty(string)
0x4b: Stack[-1] = "Neutral"
0x4c: Call 0xc0

0x4d: Pop(1)
0x4e: Push((int) 14156)
0x4f: @@ SetMessage(Stack[-1])
0x50: Pop(1)
0x51: @@ ClearReplies()
0x52: Pop(0)
0x53: Push((int) 14169)
0x54: Push((int) 15384)
0x55: Push((int) 15383)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: GOTO 0xa2

0x59: PushEmpty(string)
0x5a: Stack[-1] = "Neutral"
0x5b: Call 0xc0

0x5c: Pop(1)
0x5d: Push((int) 14161)
0x5e: @@ SetMessage(Stack[-1])
0x5f: Pop(1)
0x60: @@ ClearReplies()
0x61: Pop(0)
0x62: PushEmpty(bool)
0x63: Stack[-1] = (bool) 1
0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call 0x2f6

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Call 0x30e

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: Stack[-1] = (bool) 1
0x71: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x72: PushEmpty(bool)
0x73: Stack[-1] = (bool) 0
0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call 0x31a

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call 0x30e

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7e: Stack[-1] = (bool) 1
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Stack[-1] = (bool) 0
0x81: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x82: Push((int) 14162)
0x83: Push((int) 15377)
0x84: Push((int) 15376)
0x85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86: Pop(3)
0x87: PushEmpty(bool)
0x88: Stack[-1] = (bool) 0
0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call 0x302

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90: Call 0x2de

0x91: Pop(1)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Stack[-1] = (bool) 1
0x94: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x95: Push((int) 14165)
0x96: Push((int) 15380)
0x97: Push((int) 15379)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: Push((int) 14168)
0x9b: Push((int) -1)
0x9c: Push((int) 15382)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: GOTO 0xa2

0xa0: Return(); Pop(0)

0xa1: GOTO 0x43

0xa2: PushEmpty(bool)
0xa3: Call 0x395

0xa4: Pop(0)
0xa5: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa6: @ lshWaitForAnimEnd()
0xa7: Pop(0)
0xa8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: GOTO 0xb0

0xab: PushEmpty(string)
0xac: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xad: Call 0x246

0xae: Pop(1)
0xaf: GOTO 0xa6

0xb0: GOTO 0xbf

0xb1: Push("all")
0xb2: Push("idle")
0xb3: @ PlayAnimation(Stack[-2], Stack[-1])
0xb4: Pop(2)
0xb5: @ WaitForAnimEnd()
0xb6: Pop(0)
0xb7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: GOTO 0xbf

0xba: Push("all")
0xbb: Push("idle")
0xbc: @ PlayAnimation(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: GOTO 0xb5

0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: PushEmpty(bool)
0xc2: Call 0x395

0xc3: Pop(0)
0xc4: Pop(1); Push((bool) Stack[-1] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Return(); Pop(0)

0xc7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: Return(); Pop(0)

0xca: PushEmpty(string)
0xcb: Stack[-1] = Stack[-2]
0xcc: Call 0x246

0xcd: Pop(1)
0xce: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcf: Return(); Pop(0)

0xd0: PushEmpty()
0xd1: Push((int) 1)
0xd2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0xd3: PushEmpty()
0xd4: Call 0x258

0xd5: Pop(0)
0xd6: Push((int) 15373)
0xd7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd9: PushEmpty(object, object)
0xda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc: Call 0x2b1

0xdd: Pop(2)
0xde: Push((int) 15376)
0xdf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call 0x2d3

0xe5: Pop(2)
0xe6: Push((int) 15378)
0xe7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call 0x2c2

0xed: Pop(2)
0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call 0x2a0

0xf2: Pop(2)
0xf3: PushEmpty(object, object)
0xf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6: Call 0x29a

0xf7: Pop(2)
0xf8: PushEmpty(object, object)
0xf9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb: Call 0x2d9

0xfc: Pop(2)
0xfd: Push((int) 15379)
0xfe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call 0x2ab

0x104: Pop(2)
0x105: Push((int) 15381)
0x106: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call 0x2d9

0x10c: Pop(2)
0x10d: Push((int) 15370)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x110: PushEmpty(bool, object)
0x111: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x112: Call 0x2ea

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Neutral"
0x117: Call 0xc0

0x118: Pop(1)
0x119: Push((int) 14156)
0x11a: @@ SetMessage(Stack[-1])
0x11b: Pop(1)
0x11c: @@ ClearReplies()
0x11d: Pop(0)
0x11e: Push((int) 14169)
0x11f: Push((int) 15384)
0x120: Push((int) 15383)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral"
0x126: Call 0xc0

0x127: Pop(1)
0x128: Push((int) 14161)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: PushEmpty(bool)
0x12e: Stack[-1] = (bool) 1
0x12f: PushEmpty(bool)
0x130: Stack[-1] = (bool) 0
0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133: Call 0x2f6

0x134: Pop(1)
0x135: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x136: PushEmpty(bool, object)
0x137: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x138: Call 0x30e

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13b: Stack[-1] = (bool) 1
0x13c: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x13d: PushEmpty(bool)
0x13e: Stack[-1] = (bool) 0
0x13f: PushEmpty(bool, object)
0x140: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x141: Call 0x31a

0x142: Pop(1)
0x143: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x146: Call 0x30e

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x149: Stack[-1] = (bool) 1
0x14a: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x14b: Stack[-1] = (bool) 0
0x14c: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x14d: Push((int) 14162)
0x14e: Push((int) 15377)
0x14f: Push((int) 15376)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: PushEmpty(bool)
0x153: Stack[-1] = (bool) 0
0x154: PushEmpty(bool, object)
0x155: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x156: Call 0x302

0x157: Pop(1)
0x158: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x159: PushEmpty(bool, object)
0x15a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Call 0x2de

0x15c: Pop(1)
0x15d: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15e: Stack[-1] = (bool) 1
0x15f: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x160: Push((int) 14165)
0x161: Push((int) 15380)
0x162: Push((int) 15379)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Push((int) 14168)
0x166: Push((int) -1)
0x167: Push((int) 15382)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Return(); Pop(0)

0x16b: Push((int) 15380)
0x16c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Neutral"
0x170: Call 0xc0

0x171: Pop(1)
0x172: Push((int) 14166)
0x173: @@ SetMessage(Stack[-1])
0x174: Pop(1)
0x175: @@ ClearReplies()
0x176: Pop(0)
0x177: Push((int) 14167)
0x178: Push((int) -1)
0x179: Push((int) 15381)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Return(); Pop(0)

0x17d: Push((int) 15377)
0x17e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral"
0x182: Call 0xc0

0x183: Pop(1)
0x184: Push((int) 14163)
0x185: @@ SetMessage(Stack[-1])
0x186: Pop(1)
0x187: @@ ClearReplies()
0x188: Pop(0)
0x189: Push((int) 14164)
0x18a: Push((int) -1)
0x18b: Push((int) 15378)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Return(); Pop(0)

0x18f: Push((int) 15384)
0x190: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x192: PushEmpty(string)
0x193: Stack[-1] = "Neutral"
0x194: Call 0xc0

0x195: Pop(1)
0x196: Push((int) 14170)
0x197: @@ SetMessage(Stack[-1])
0x198: Pop(1)
0x199: @@ ClearReplies()
0x19a: Pop(0)
0x19b: Push((int) 14157)
0x19c: Push((int) 15372)
0x19d: Push((int) 15371)
0x19e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19f: Pop(3)
0x1a0: Return(); Pop(0)

0x1a1: Push((int) 15372)
0x1a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1a4: PushEmpty(string)
0x1a5: Stack[-1] = "Neutral"
0x1a6: Call 0xc0

0x1a7: Pop(1)
0x1a8: Push((int) 14158)
0x1a9: @@ SetMessage(Stack[-1])
0x1aa: Pop(1)
0x1ab: @@ ClearReplies()
0x1ac: Pop(0)
0x1ad: Push((int) 14159)
0x1ae: Push((int) -1)
0x1af: Push((int) 15373)
0x1b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1: Pop(3)
0x1b2: Push((int) 14160)
0x1b3: Push((int) -1)
0x1b4: Push((int) 15374)
0x1b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b6: Pop(3)
0x1b7: Return(); Pop(0)

0x1b8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1b9: PushEmpty(bool)
0x1ba: Call 0x395

0x1bb: Pop(0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bd: @ lshStopAnimation()
0x1be: Pop(0)
0x1bf: GOTO 0x1c2

0x1c0: @ StopAnimation()
0x1c1: Pop(0)
0x1c2: Return(); Pop(0)

0x1c3: GOTO 0xd1

0x1c4: Return(); Pop(0)

0x1c5: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1c6: PushEmpty()
0x1c7: Call 0x1d8

0x1c8: Pop(0)
0x1c9: Return(); Pop(0)

0x1ca: PushEmpty()
0x1cb: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1cd: PushEmpty(int, object)
0x1ce: Stack[-1] = Stack[-3]
0x1cf: Push(-2, 1); TaskCall(0)
0x1d0: Call 0x0

0x1d1: Pop(-2, 1); TaskReturn
0x1d2: Pop(1)
0x1d3: Push((int) 1000)
0x1d4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d6: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1d7: Return(); Pop(0)

0x1d8: @ Hold()
0x1d9: Pop(0)
0x1da: GOTO 0x1d8

0x1db: Return(); Pop(0)

0x1dc: PushEmpty(bool, bool)
0x1dd: Push("cleanup")
0x1de: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1e1: @ IsLoaded(Stack[-1])
0x1e2: Pop(0)
0x1e3: PushEmpty(bool)
0x1e4: Stack[-1] = (bool) 0
0x1e5: Pop(0); Push((bool) Stack[-2] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e7: PushEmpty(bool)
0x1e8: Call 0x208

0x1e9: Pop(0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: Stack[-1] = (bool) 1
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ed: PushEmpty(object)
0x1ee: Call 0x25f

0x1ef: Pop(0)
0x1f0: @ RemoveActor(Stack[-1])
0x1f1: Pop(1)
0x1f2: GOTO 0x1f7

0x1f3: Push("restore")
0x1f4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1f7: Return(); Pop(2)

0x1f8: PushEmpty(bool)
0x1f9: Stack[-1] = (bool) 0
0x1fa: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1fb: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fc: PushEmpty(bool)
0x1fd: Call 0x208

0x1fe: Pop(0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Stack[-1] = (bool) 1
0x201: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x202: PushEmpty(object)
0x203: Call 0x25f

0x204: Pop(0)
0x205: @ RemoveActor(Stack[-1])
0x206: Pop(1)
0x207: Return(); Pop(0)

0x208: Stack[-1] = (bool) 1
0x209: Return(); Pop(0)

0x20a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x20b: @@ GetPosition(Stack[-7])
0x20c: Pop(0)
0x20d: @@ GetEyesHeight(Stack[-8])
0x20e: Pop(0)
0x20f: Push(CvectorIndex(Stack[-7], 1))
0x210: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x211: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x212: @ GetPosition(Stack[-6])
0x213: Pop(0)
0x214: @ GetEyesHeight(Stack[-8])
0x215: Pop(0)
0x216: Push(CvectorIndex(Stack[-6], 1))
0x217: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x218: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x219: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x21a: Push(CvectorIndex(Stack[-5], 1))
0x21b: Stack[-1] = (int) 0
0x21c: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x21d: Pop(0); Push(Stack[-5] | Stack[-5]);
0x21e: Pop(1); Push(Sqrt(Stack[-1]))
0x21f: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x220: Stack[-4] = -Stack[-5]; Pop(0);
0x221: Push((int) 70)
0x222: Pop(1); Push(Stack[-6] * Stack[-1]);
0x223: PushEmpty(cvector, cvector)
0x224: Push(CVector(0.0, 1.0, 0.0))
0x225: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x226: Call 0x265

0x227: Pop(1)
0x228: Push((int) 25)
0x229: Pop(2); Push(Stack[-2] * Stack[-1]);
0x22a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22b: Push(CVector(0.0, 10.0, 0.0))
0x22c: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x22d: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x22e: @ IsOverrideActive(Stack[-1])
0x22f: Pop(0)
0x230: Push(Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x232: Stack[-18] = (bool) 0
0x233: Return(); Pop(16)

0x234: @ StopWorld()
0x235: Pop(0)
0x236: @ CameraTransit(Stack[-2], Stack[-4])
0x237: Pop(0)
0x238: Push(CvectorIndex(Stack[-3], 0))
0x239: Push(CvectorIndex(Stack[-4], 2))
0x23a: @ Rotate(Stack[-2], Stack[-1])
0x23b: Pop(2)
0x23c: @ CameraWaitForPlayFinish()
0x23d: Pop(0)
0x23e: @ ResumeWorld()
0x23f: Pop(0)
0x240: Stack[-18] = (bool) 1
0x241: Return(); Pop(16)

0x242: PushEmpty()
0x243: @ CameraSwitchToNormal()
0x244: Pop(0)
0x245: Return(); Pop(0)

0x246: PushEmpty(float, float, float, float)
0x247: Push("playing ")
0x248: Pop(1); Push(Stack[-1] + Stack[-6]);
0x249: @ Trace(Stack[-1])
0x24a: Pop(1)
0x24b: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x24c: Pop(0)
0x24d: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x24e: Pop(0)
0x24f: Push("start: ")
0x250: Pop(1); Push(Stack[-1] + Stack[-3]);
0x251: @ Trace(Stack[-1])
0x252: Pop(1)
0x253: Push("end: ")
0x254: Pop(1); Push(Stack[-1] + Stack[-2]);
0x255: @ Trace(Stack[-1])
0x256: Pop(1)
0x257: Return(); Pop(4)

0x258: PushEmpty(bool)
0x259: Call 0x395

0x25a: Pop(0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25c: @ lshStopSpeech()
0x25d: Pop(0)
0x25e: Return(); Pop(0)

0x25f: PushEmpty(object, object)
0x260: @ self(Stack[-1])
0x261: Pop(0)
0x262: Stack[-3] = Stack[-1]
0x263: Return(); Pop(2)

0x264: Stack[-1] = 0
0x265: PushEmpty(float, float)
0x266: Pop(0); Push(Stack[-3] | Stack[-3]);
0x267: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x268: Push((float)0.0)
0x269: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x26a: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x26c: Return(); Pop(2)

0x26d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x26e: Return(); Pop(2)

0x26f: PushEmpty(int, int)
0x270: @ GetVariable(Stack[-3], Stack[-1])
0x271: Pop(0)
0x272: Stack[-4] = Stack[-1]
0x273: Return(); Pop(2)

0x274: PushEmpty(int, int, bool, int, int, bool)
0x275: @@ GetItemID(Stack[-3])
0x276: Pop(0)
0x277: Push("Category")
0x278: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x279: Pop(1)
0x27a: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x27b: Pop(0)
0x27c: Pop(0); Push((bool) Stack[-1] == 0)
0x27d: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27e: @@ DropItems(Stack[-8], Stack[-7])
0x27f: Pop(0)
0x280: Return(); Pop(6)

0x281: PushEmpty(object, object)
0x282: @ CreateInvItem(Stack[-1])
0x283: Pop(0)
0x284: @@ SetItemName(Stack[-4])
0x285: Pop(0)
0x286: PushEmpty(object, object, int)
0x287: Stack[-3] = Stack[-8]
0x288: Stack[-2] = Stack[-4]
0x289: Stack[-1] = Stack[-6]
0x28a: Call 0x274

0x28b: Pop(3)
0x28c: Return(); Pop(2)

0x28d: Stack[-1] = 0
0x28e: PushEmpty(object, object)
0x28f: @ FindActor(Stack[-1], Stack[-4])
0x290: Pop(0)
0x291: Pop(0); Push((bool) Stack[-1] == 0)
0x292: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x293: Stack[-5] = (bool) 0
0x294: Return(); Pop(2)

0x295: @ Trigger(Stack[-1], Stack[-3])
0x296: Pop(0)
0x297: Stack[-5] = (bool) 1
0x298: Return(); Pop(2)

0x299: Stack[-1] = 0
0x29a: PushEmpty()
0x29b: Push("playsound")
0x29c: Push("giveitem")
0x29d: @ TriggerWorld(Stack[-2], Stack[-1])
0x29e: Pop(2)
0x29f: Return(); Pop(0)

0x2a0: PushEmpty()
0x2a1: Push("powder is given")
0x2a2: @ Trace(Stack[-1])
0x2a3: Pop(1)
0x2a4: PushEmpty(object, string, int)
0x2a5: Stack[-3] = Stack[-5]
0x2a6: Stack[-2] = "powder"
0x2a7: Stack[-1] = (int) 1
0x2a8: Call 0x281

0x2a9: Pop(3)
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty()
0x2ac: Push("ood11ULittleGirl1")
0x2ad: Push((int) 1)
0x2ae: @ SetVariable(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty()
0x2b2: Push("d11q02")
0x2b3: Push((int) 1)
0x2b4: @ SetVariable(Stack[-2], Stack[-1])
0x2b5: Pop(2)
0x2b6: PushEmpty()
0x2b7: Call 0x361

0x2b8: Pop(0)
0x2b9: PushEmpty()
0x2ba: Call 0x381

0x2bb: Pop(0)
0x2bc: PushEmpty(bool, string, string)
0x2bd: Stack[-2] = "quest_d11_02"
0x2be: Stack[-1] = "init_graveyard"
0x2bf: Call 0x28e

0x2c0: Pop(3)
0x2c1: Return(); Pop(0)

0x2c2: PushEmpty()
0x2c3: PushEmpty(int, string)
0x2c4: Stack[-1] = "d11q02"
0x2c5: Call 0x26f

0x2c6: Pop(1)
0x2c7: Push((int) 1000)
0x2c8: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2ca: PushEmpty()
0x2cb: Call 0x371

0x2cc: Pop(0)
0x2cd: PushEmpty(bool, string, string)
0x2ce: Stack[-2] = "quest_d11_02"
0x2cf: Stack[-1] = "completed"
0x2d0: Call 0x28e

0x2d1: Pop(3)
0x2d2: Return(); Pop(0)

0x2d3: PushEmpty()
0x2d4: Push("ood11ULittleGirl2")
0x2d5: Push((int) 1)
0x2d6: @ SetVariable(Stack[-2], Stack[-1])
0x2d7: Pop(2)
0x2d8: Return(); Pop(0)

0x2d9: PushEmpty()
0x2da: Push((int) 1000)
0x2db: @@ SetReturnValue(Stack[-1])
0x2dc: Pop(1)
0x2dd: Return(); Pop(0)

0x2de: PushEmpty()
0x2df: PushEmpty(int, string)
0x2e0: Stack[-1] = "ood11ULittleGirl1"
0x2e1: Call 0x26f

0x2e2: Pop(1)
0x2e3: Push((int) 0)
0x2e4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e6: Stack[-2] = (bool) 1
0x2e7: Return(); Pop(0)

0x2e8: Stack[-2] = (bool) 0
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty()
0x2eb: PushEmpty(int, string)
0x2ec: Stack[-1] = "d11q02"
0x2ed: Call 0x26f

0x2ee: Pop(1)
0x2ef: Push((int) 0)
0x2f0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f2: Stack[-2] = (bool) 1
0x2f3: Return(); Pop(0)

0x2f4: Stack[-2] = (bool) 0
0x2f5: Return(); Pop(0)

0x2f6: PushEmpty()
0x2f7: PushEmpty(int, string)
0x2f8: Stack[-1] = "d11q02"
0x2f9: Call 0x26f

0x2fa: Pop(1)
0x2fb: Push((int) 2)
0x2fc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fe: Stack[-2] = (bool) 1
0x2ff: Return(); Pop(0)

0x300: Stack[-2] = (bool) 0
0x301: Return(); Pop(0)

0x302: PushEmpty()
0x303: PushEmpty(int, string)
0x304: Stack[-1] = "d11q02"
0x305: Call 0x26f

0x306: Pop(1)
0x307: Push((int) -1)
0x308: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30a: Stack[-2] = (bool) 1
0x30b: Return(); Pop(0)

0x30c: Stack[-2] = (bool) 0
0x30d: Return(); Pop(0)

0x30e: PushEmpty()
0x30f: PushEmpty(int, string)
0x310: Stack[-1] = "ood11ULittleGirl2"
0x311: Call 0x26f

0x312: Pop(1)
0x313: Push((int) 0)
0x314: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x315: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x316: Stack[-2] = (bool) 1
0x317: Return(); Pop(0)

0x318: Stack[-2] = (bool) 0
0x319: Return(); Pop(0)

0x31a: PushEmpty()
0x31b: PushEmpty(int, string)
0x31c: Stack[-1] = "d11q02"
0x31d: Call 0x26f

0x31e: Pop(1)
0x31f: Push((int) 1000)
0x320: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x322: Stack[-2] = (bool) 1
0x323: Return(); Pop(0)

0x324: Stack[-2] = (bool) 0
0x325: Return(); Pop(0)

0x326: PushEmpty(object, object)
0x327: @ GetDiaryRoot(Stack[-1])
0x328: Pop(0)
0x329: Pop(0); Push((bool) Stack[-1] == 0)
0x32a: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32b: Push("Can't retrieve diary root")
0x32c: @ Trace(Stack[-1])
0x32d: Pop(1)
0x32e: Stack[-3] = (bool) 0
0x32f: Return(); Pop(2)

0x330: Stack[-3] = Stack[-1]
0x331: Return(); Pop(2)

0x332: Stack[-1] = 0
0x333: PushEmpty(object, object, int, object, object, int)
0x334: PushEmpty(object)
0x335: Call 0x326

0x336: Stack[-4] = Stack[-1]
0x337: Pop(1)
0x338: @@ Find(Stack[-7], Stack[-2])
0x339: Pop(0)
0x33a: Pop(0); Push((bool) Stack[-2] == 0)
0x33b: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33c: Push("Can't find diary parent with id: ")
0x33d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x33e: @ Trace(Stack[-1])
0x33f: Pop(1)
0x340: Stack[-9] = (bool) 0
0x341: Return(); Pop(6)

0x342: @@ AddChild(Stack[-8])
0x343: Pop(0)
0x344: Push("player_diary")
0x345: Push((int) 1)
0x346: @ SetVariable(Stack[-2], Stack[-1])
0x347: Pop(2)
0x348: @@ GetCategory(Stack[-1])
0x349: Pop(0)
0x34a: @ SetDiarySection(Stack[-1])
0x34b: Pop(0)
0x34c: Stack[-9] = (bool) 0
0x34d: Return(); Pop(6)

0x34e: Stack[-2] = 0
0x34f: Stack[-3] = 0
0x350: PushEmpty(int, int)
0x351: Push("player")
0x352: @ GetVariable(Stack[-1], Stack[-2])
0x353: Pop(1)
0x354: Push((int) 0)
0x355: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x357: Stack[-3] = (int) 200001
0x358: Return(); Pop(2)

0x359: GOTO 0x35f

0x35a: Push((int) 1)
0x35b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35d: Stack[-3] = (int) 200002
0x35e: Return(); Pop(2)

0x35f: Stack[-3] = (int) 200003
0x360: Return(); Pop(2)

0x361: PushEmpty(object, object)
0x362: Push("Adding diary entry")
0x363: @ Trace(Stack[-1])
0x364: Pop(1)
0x365: Push((int) 197)
0x366: Push((int) 2)
0x367: Push((int) 15485)
0x368: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x369: Pop(3)
0x36a: PushEmpty(bool, object, int)
0x36b: Stack[-2] = Stack[-4]
0x36c: Stack[-1] = (int) -1
0x36d: Call 0x333

0x36e: Pop(3)
0x36f: Return(); Pop(2)

0x370: Stack[-1] = 0
0x371: PushEmpty(object, object)
0x372: Push("Adding diary entry")
0x373: @ Trace(Stack[-1])
0x374: Pop(1)
0x375: Push((int) 198)
0x376: Push((int) 2)
0x377: Push((int) 15486)
0x378: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x379: Pop(3)
0x37a: PushEmpty(bool, object, int)
0x37b: Stack[-2] = Stack[-4]
0x37c: Stack[-1] = (int) 197
0x37d: Call 0x333

0x37e: Pop(3)
0x37f: Return(); Pop(2)

0x380: Stack[-1] = 0
0x381: PushEmpty(object, object)
0x382: Push("Adding diary entry")
0x383: @ Trace(Stack[-1])
0x384: Pop(1)
0x385: Push((int) 199)
0x386: Push((int) 2)
0x387: Push((int) 15487)
0x388: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x389: Pop(3)
0x38a: PushEmpty(bool, object, int)
0x38b: Stack[-2] = Stack[-4]
0x38c: Stack[-1] = (int) 197
0x38d: Call 0x333

0x38e: Pop(3)
0x38f: Return(); Pop(2)

0x390: Stack[-1] = 0
0x391: Stack[-1] = (int) 3346
0x392: Return(); Pop(0)

0x393: Stack[-1] = "ui/NPC_None.png"
0x394: Return(); Pop(0)

0x395: Stack[-1] = (bool) 0
0x396: Return(); Pop(0)

