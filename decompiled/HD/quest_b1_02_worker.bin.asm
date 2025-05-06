GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
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
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	playsound
	giveitem
	oob1Worker2
	oob1Worker3
	Knife is given
	Knife
	SetItemName
	durability
	SetProperty
	oob1Worker1
	branch

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
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	CreateInvItem (1 args)

RunOp = 0x1c3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc2 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1d6 Vars = (object)
		EVENT_9 Op = 0x1e1 Vars = (int, float)
		EVENT_26 Op = 0x210 Vars = (string)
		EVENT_5 Op = 0x218 Vars = ()
		EVENT_6 Op = 0x21d Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x28a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x355

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x353

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x357

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x359

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3ae

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x2cf

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x3a2

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x384

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xac

0x5d: Pop(1)
0x5e: Push((int) 517930)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 519691)
0x64: Push((int) 20850)
0x65: Push((int) 20849)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x8e

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0xac

0x6c: Pop(1)
0x6d: Push((int) 517932)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: PushEmpty(bool, object)
0x73: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74: Call2 0x38a

0x75: Pop(1)
0x76: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x77: Push((int) 517933)
0x78: Push((int) 20861)
0x79: Push((int) 19071)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: PushEmpty(bool, object)
0x7d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e: Call2 0x396

0x7f: Pop(1)
0x80: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x81: Push((int) 519710)
0x82: Push((int) 20870)
0x83: Push((int) 20869)
0x84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: Push((int) 519709)
0x87: Push((int) -1)
0x88: Push((int) 20868)
0x89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a: Pop(3)
0x8b: GOTO 0x8e

0x8c: Return(); Pop(0)

0x8d: GOTO 0x4e

0x8e: PushEmpty(bool)
0x8f: Call2 0x35b

0x90: Pop(0)
0x91: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x92: @ lshWaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: PushEmpty(string)
0x98: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x99: Call2 0x2e1

0x9a: Pop(1)
0x9b: GOTO 0x92

0x9c: GOTO 0xab

0x9d: Push("all")
0x9e: Push("idle")
0x9f: @ PlayAnimation(Stack[-2], Stack[-1])
0xa0: Pop(2)
0xa1: @ WaitForAnimEnd()
0xa2: Pop(0)
0xa3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: GOTO 0xab

0xa6: Push("all")
0xa7: Push("idle")
0xa8: @ PlayAnimation(Stack[-2], Stack[-1])
0xa9: Pop(2)
0xaa: GOTO 0xa1

0xab: Return(); Pop(0)

0xac: PushEmpty()
0xad: PushEmpty(bool)
0xae: Call2 0x35b

0xaf: Pop(0)
0xb0: Pop(1); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: PushEmpty(string, bool)
0xb7: Stack[-2] = Stack[-3]
0xb8: Push("")
0xb9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbb: Stack[-1] = (bool) 0
0xbc: GOTO 0xbe

0xbd: Stack[-1] = (bool) 1
0xbe: Call2 0x2f1

0xbf: Pop(2)
0xc0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: Push((int) 1)
0xc4: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0xc5: PushEmpty()
0xc6: Call2 0x300

0xc7: Pop(0)
0xc8: Push((int) 19069)
0xc9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xcb: PushEmpty(object, object)
0xcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call2 0x35d

0xcf: Pop(2)
0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x36f

0xd4: Pop(2)
0xd5: Push((int) 19071)
0xd6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd8: PushEmpty(object, object)
0xd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb: Call2 0x363

0xdc: Pop(2)
0xdd: Push((int) 20869)
0xde: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe0: PushEmpty(object, object)
0xe1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe3: Call2 0x369

0xe4: Pop(2)
0xe5: Push((int) 19068)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0xe8: PushEmpty(bool, object)
0xe9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xea: Call2 0x3a2

0xeb: Pop(1)
0xec: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x384

0xf1: Pop(2)
0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral"
0xf4: Call2 0xac

0xf5: Pop(1)
0xf6: Push((int) 517930)
0xf7: @@ SetMessage(Stack[-1])
0xf8: Pop(1)
0xf9: @@ ClearReplies()
0xfa: Pop(0)
0xfb: Push((int) 519691)
0xfc: Push((int) 20850)
0xfd: Push((int) 20849)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: PushEmpty(string)
0x102: Stack[-1] = "Neutral"
0x103: Call2 0xac

0x104: Pop(1)
0x105: Push((int) 517932)
0x106: @@ SetMessage(Stack[-1])
0x107: Pop(1)
0x108: @@ ClearReplies()
0x109: Pop(0)
0x10a: PushEmpty(bool, object)
0x10b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Call2 0x38a

0x10d: Pop(1)
0x10e: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10f: Push((int) 517933)
0x110: Push((int) 20861)
0x111: Push((int) 19071)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: PushEmpty(bool, object)
0x115: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x116: Call2 0x396

0x117: Pop(1)
0x118: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x119: Push((int) 519710)
0x11a: Push((int) 20870)
0x11b: Push((int) 20869)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Push((int) 519709)
0x11f: Push((int) -1)
0x120: Push((int) 20868)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 20870)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral"
0x129: Call2 0xac

0x12a: Pop(1)
0x12b: Push((int) 519711)
0x12c: @@ SetMessage(Stack[-1])
0x12d: Pop(1)
0x12e: @@ ClearReplies()
0x12f: Pop(0)
0x130: Push((int) 519712)
0x131: Push((int) -1)
0x132: Push((int) 20871)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 20861)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0xac

0x13c: Pop(1)
0x13d: Push((int) 519703)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 519704)
0x143: Push((int) 20865)
0x144: Push((int) 20862)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Push((int) 519705)
0x148: Push((int) 20865)
0x149: Push((int) 20863)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 20865)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral"
0x152: Call2 0xac

0x153: Pop(1)
0x154: Push((int) 519707)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: Push((int) 519708)
0x15a: Push((int) -1)
0x15b: Push((int) 20866)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 20850)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral"
0x164: Call2 0xac

0x165: Pop(1)
0x166: Push((int) 519692)
0x167: @@ SetMessage(Stack[-1])
0x168: Pop(1)
0x169: @@ ClearReplies()
0x16a: Pop(0)
0x16b: Push((int) 519693)
0x16c: Push((int) 20852)
0x16d: Push((int) 20851)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Push((int) 517931)
0x171: Push((int) -1)
0x172: Push((int) 19069)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 20852)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral"
0x17b: Call2 0xac

0x17c: Pop(1)
0x17d: Push((int) 519694)
0x17e: @@ SetMessage(Stack[-1])
0x17f: Pop(1)
0x180: @@ ClearReplies()
0x181: Pop(0)
0x182: Push((int) 519695)
0x183: Push((int) 20854)
0x184: Push((int) 20853)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Push((int) 519697)
0x188: Push((int) 20856)
0x189: Push((int) 20855)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 20856)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral"
0x192: Call2 0xac

0x193: Pop(1)
0x194: Push((int) 519698)
0x195: @@ SetMessage(Stack[-1])
0x196: Pop(1)
0x197: @@ ClearReplies()
0x198: Pop(0)
0x199: Push((int) 519702)
0x19a: Push((int) -1)
0x19b: Push((int) 20860)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Return(); Pop(0)

0x19f: Push((int) 20854)
0x1a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Neutral"
0x1a4: Call2 0xac

0x1a5: Pop(1)
0x1a6: Push((int) 519696)
0x1a7: @@ SetMessage(Stack[-1])
0x1a8: Pop(1)
0x1a9: @@ ClearReplies()
0x1aa: Pop(0)
0x1ab: Push((int) 519700)
0x1ac: Push((int) -1)
0x1ad: Push((int) 20858)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: Push((int) 519701)
0x1b1: Push((int) -1)
0x1b2: Push((int) 20859)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1b7: PushEmpty(bool)
0x1b8: Call2 0x35b

0x1b9: Pop(0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bb: @ lshStopAnimation()
0x1bc: Pop(0)
0x1bd: GOTO 0x1c0

0x1be: @ StopAnimation()
0x1bf: Pop(0)
0x1c0: Return(); Pop(0)

0x1c1: GOTO 0xc3

0x1c2: Return(); Pop(0)

0x1c3: PushEmpty(float, float)
0x1c4: @ GetGameTime(Stack[-1])
0x1c5: Pop(0)
0x1c6: Push((int) 24)
0x1c7: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: PushEmpty(string)
0x1ca: Stack[-1] = "cleanup"
0x1cb: Call2 0x210

0x1cc: Pop(1)
0x1cd: GOTO 0x1d2

0x1ce: Push((int) 0)
0x1cf: Push((int) 24)
0x1d0: @ SetTimeEvent(Stack[-2], Stack[-1])
0x1d1: Pop(2)
0x1d2: PushEmpty()
0x1d3: Call2 0x1e7

0x1d4: Pop(0)
0x1d5: Return(); Pop(2)

0x1d6: PushEmpty()
0x1d7: PushEmpty()
0x1d8: Call2 0x280

0x1d9: Pop(0)
0x1da: PushEmpty(int, object)
0x1db: Stack[-1] = Stack[-3]
0x1dc: Push(-2, 1); TaskCall(0)
0x1dd: Call2 0x0

0x1de: Pop(-2, 1); TaskReturn
0x1df: Pop(2)
0x1e0: Return(); Pop(0)

0x1e1: PushEmpty()
0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = "cleanup"
0x1e4: Call2 0x210

0x1e5: Pop(1)
0x1e6: Return(); Pop(0)

0x1e7: PushEmpty(float, float)
0x1e8: PushEmpty(bool)
0x1e9: Call2 0x285

0x1ea: Pop(0)
0x1eb: Pop(1); Push((bool) Stack[-1] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ed: @ Hold()
0x1ee: Pop(0)
0x1ef: GOTO 0x1e8

0x1f0: Push((int) 3)
0x1f1: @ rand(Stack[-2], Stack[-1])
0x1f2: Pop(1)
0x1f3: Push((int) 3)
0x1f4: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1f5: @ Sleep(Stack[-1])
0x1f6: Pop(1)
0x1f7: PushEmpty()
0x1f8: Call2 0x22f

0x1f9: Pop(0)
0x1fa: GOTO 0x1e8

0x1fb: Return(); Pop(2)

0x1fc: PushEmpty(bool, bool)
0x1fd: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1fe: @ IsLoaded(Stack[-1])
0x1ff: Pop(0)
0x200: PushEmpty(bool)
0x201: Stack[-1] = (bool) 0
0x202: Pop(0); Push((bool) Stack[-2] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x204: PushEmpty(bool)
0x205: Call2 0x22d

0x206: Pop(0)
0x207: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x208: Stack[-1] = (bool) 1
0x209: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20a: PushEmpty(object)
0x20b: Call2 0x307

0x20c: Pop(0)
0x20d: @ RemoveActor(Stack[-1])
0x20e: Pop(1)
0x20f: Return(); Pop(2)

0x210: PushEmpty()
0x211: Push("cleanup")
0x212: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x214: PushEmpty()
0x215: Call2 0x1fc

0x216: Pop(0)
0x217: Return(); Pop(0)

0x218: @ StopGroup0()
0x219: Pop(0)
0x21a: @ sync()
0x21b: Pop(0)
0x21c: Return(); Pop(0)

0x21d: PushEmpty(bool)
0x21e: Stack[-1] = (bool) 0
0x21f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x220: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x221: PushEmpty(bool)
0x222: Call2 0x22d

0x223: Pop(0)
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: Stack[-1] = (bool) 1
0x226: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x227: PushEmpty(object)
0x228: Call2 0x307

0x229: Pop(0)
0x22a: @ RemoveActor(Stack[-1])
0x22b: Pop(1)
0x22c: Return(); Pop(0)

0x22d: Stack[-1] = (bool) 1
0x22e: Return(); Pop(0)

0x22f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x230: @ WaitForAnimEnd()
0x231: Pop(0)
0x232: PushEmpty(bool)
0x233: Call2 0x285

0x234: Pop(0)
0x235: Pop(1); Push((bool) Stack[-1] == 0)
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: Return(); Pop(14)

0x238: PushEmpty(int)
0x239: Call2 0x342

0x23a: Stack[-8] = Stack[-1]
0x23b: Pop(1)
0x23c: Stack[-6] = (int) 0
0x23d: PushEmpty(bool)
0x23e: Stack[-1] = (bool) 0
0x23f: Push((int) 5)
0x240: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x242: PushEmpty(bool)
0x243: Call2 0x285

0x244: Pop(0)
0x245: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x246: Stack[-1] = (bool) 1
0x247: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x248: Push((int) 3)
0x249: @ irand(Stack[-6], Stack[-1])
0x24a: Pop(1)
0x24b: Push((int) 0)
0x24c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x24e: Push(Stack[-7])
0x24f: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x250: @ irand(Stack[-4], Stack[-7])
0x251: Pop(0)
0x252: Push("all")
0x253: PushEmpty(string, int)
0x254: Stack[-1] = Stack[-7]
0x255: Call2 0x33b

0x256: Pop(1)
0x257: @ PlayAnimation(Stack[-2], Stack[-1])
0x258: Pop(2)
0x259: @ WaitForAnimEnd(Stack[-3])
0x25a: Pop(0)
0x25b: Pop(0); Push((bool) Stack[-3] == 0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: GOTO 0x27b

0x25e: GOTO 0x270

0x25f: Push((int) 1)
0x260: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x262: Push((int) 4)
0x263: @ rand(Stack[-3], Stack[-1])
0x264: Pop(1)
0x265: Push((int) 1)
0x266: Pop(1); Push(Stack[-3] + Stack[-1]);
0x267: @ Sleep(Stack[-1], Stack[-2])
0x268: Pop(1)
0x269: Pop(0); Push((bool) Stack[-1] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: GOTO 0x27b

0x26c: GOTO 0x270

0x26d: Push(Stack[-6])
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: GOTO 0x27b

0x270: PushEmpty(bool)
0x271: Call2 0x27e

0x272: Pop(0)
0x273: Pop(1); Push((bool) Stack[-1] == 0)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: GOTO 0x27b

0x276: @ ResetAAS()
0x277: Pop(0)
0x278: Push((int) 1)
0x279: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x27a: GOTO 0x23d

0x27b: @ ResetAAS()
0x27c: Pop(0)
0x27d: Return(); Pop(14)

0x27e: Stack[-1] = (bool) 1
0x27f: Return(); Pop(0)

0x280: @ StopAnimation()
0x281: Pop(0)
0x282: @ StopGroup0()
0x283: Pop(0)
0x284: Return(); Pop(0)

0x285: PushEmpty(bool, bool)
0x286: @ IsLoaded(Stack[-1])
0x287: Pop(0)
0x288: Stack[-3] = Stack[-1]
0x289: Return(); Pop(2)

0x28a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x28b: @@ GetPosition(Stack[-8])
0x28c: Pop(0)
0x28d: @@ GetEyesHeight(Stack[-9])
0x28e: Pop(0)
0x28f: Push(CvectorIndex(Stack[-8], 1))
0x290: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x291: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x292: @ GetPosition(Stack[-7])
0x293: Pop(0)
0x294: @ GetEyesHeight(Stack[-9])
0x295: Pop(0)
0x296: Push(CvectorIndex(Stack[-7], 1))
0x297: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x298: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x299: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x29a: Push(CvectorIndex(Stack[-6], 1))
0x29b: Stack[-1] = (int) 0
0x29c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x29d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x29e: Pop(1); Push(Sqrt(Stack[-1]))
0x29f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2a0: Stack[-5] = -Stack[-6]; Pop(0);
0x2a1: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2a2: PushEmpty(cvector, cvector)
0x2a3: Push(CVector(0.0, 1.0, 0.0))
0x2a4: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2a5: Call2 0x30d

0x2a6: Pop(1)
0x2a7: Push((int) 25)
0x2a8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2a9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2aa: Push(CVector(0.0, 10.0, 0.0))
0x2ab: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2ac: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2ad: @ IsOverrideActive(Stack[-2])
0x2ae: Pop(0)
0x2af: Push(Stack[-2])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b1: Stack[-21] = (bool) 0
0x2b2: Return(); Pop(18)

0x2b3: @ StopWorld()
0x2b4: Pop(0)
0x2b5: Push((bool) 1)
0x2b6: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2b7: Pop(1)
0x2b8: Push(CvectorIndex(Stack[-4], 0))
0x2b9: Push(CvectorIndex(Stack[-5], 2))
0x2ba: @ Rotate(Stack[-2], Stack[-1])
0x2bb: Pop(2)
0x2bc: PushEmpty(bool)
0x2bd: Call2 0x35b

0x2be: Pop(0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2c0: GOTO 0x2c9

0x2c1: Push("head")
0x2c2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c3: Pop(1)
0x2c4: Push(Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c6: Push("head")
0x2c7: @ LookAsyncCamera(Stack[-1])
0x2c8: Pop(1)
0x2c9: @ CameraWaitForPlayFinish()
0x2ca: Pop(0)
0x2cb: @ ResumeWorld()
0x2cc: Pop(0)
0x2cd: Stack[-21] = (bool) 1
0x2ce: Return(); Pop(18)

0x2cf: PushEmpty(bool, bool)
0x2d0: Push((bool) 1)
0x2d1: @ CameraSwitchToNormal(Stack[-1])
0x2d2: Pop(1)
0x2d3: PushEmpty(bool)
0x2d4: Call2 0x35b

0x2d5: Pop(0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2e0

0x2d8: Push("head")
0x2d9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2da: Pop(1)
0x2db: Push(Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2dd: Push("head")
0x2de: @ UnlookAsync(Stack[-1])
0x2df: Pop(1)
0x2e0: Return(); Pop(2)

0x2e1: PushEmpty(bool, float, float, bool, float, float)
0x2e2: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2e3: Pop(0)
0x2e4: Push(Stack[-3])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e6: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2e7: Pop(0)
0x2e8: Push((bool) 0)
0x2e9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ea: Pop(1)
0x2eb: GOTO 0x2f0

0x2ec: Push("Can't find lsh animation : ")
0x2ed: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2ee: @ Trace(Stack[-1])
0x2ef: Pop(1)
0x2f0: Return(); Pop(6)

0x2f1: PushEmpty(bool, float, float, bool, float, float)
0x2f2: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2f3: Pop(0)
0x2f4: Push(Stack[-3])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f6: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2f7: Pop(0)
0x2f8: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2f9: Pop(0)
0x2fa: GOTO 0x2ff

0x2fb: Push("Can't find lsh animation : ")
0x2fc: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2fd: @ Trace(Stack[-1])
0x2fe: Pop(1)
0x2ff: Return(); Pop(6)

0x300: PushEmpty(bool)
0x301: Call2 0x35b

0x302: Pop(0)
0x303: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x304: @ lshStopSpeech()
0x305: Pop(0)
0x306: Return(); Pop(0)

0x307: PushEmpty(object, object)
0x308: @ self(Stack[-1])
0x309: Pop(0)
0x30a: Stack[-3] = Stack[-1]
0x30b: Return(); Pop(2)

0x30c: Stack[-1] = 0
0x30d: PushEmpty(float, float)
0x30e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x30f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x310: Push((float)0.0)
0x311: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x313: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x314: Return(); Pop(2)

0x315: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x316: Return(); Pop(2)

0x317: PushEmpty(int, int)
0x318: @ GetVariable(Stack[-3], Stack[-1])
0x319: Pop(0)
0x31a: Stack[-4] = Stack[-1]
0x31b: Return(); Pop(2)

0x31c: PushEmpty(object, object)
0x31d: @ CreateIntVector(Stack[-1])
0x31e: Pop(0)
0x31f: @@ add(Stack[-4])
0x320: Pop(0)
0x321: @@ add(Stack[-3])
0x322: Pop(0)
0x323: Push((int) 3)
0x324: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x325: Pop(1)
0x326: Return(); Pop(2)

0x327: Stack[-1] = 0
0x328: PushEmpty(int, int, bool, int, int, bool)
0x329: @@ GetItemID(Stack[-3])
0x32a: Pop(0)
0x32b: Push("Category")
0x32c: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x32d: Pop(1)
0x32e: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x32f: Pop(0)
0x330: Pop(0); Push((bool) Stack[-1] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x332: @@ DropItems(Stack[-8], Stack[-7])
0x333: Pop(0)
0x334: GOTO 0x33a

0x335: PushEmpty(int, int)
0x336: Stack[-2] = Stack[-5]
0x337: Stack[-1] = Stack[-9]
0x338: Call2 0x31c

0x339: Pop(2)
0x33a: Return(); Pop(6)

0x33b: PushEmpty(string, string)
0x33c: Stack[-1] = "idle"
0x33d: Push(Stack[-3])
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x340: Stack[-4] = Stack[-1]
0x341: Return(); Pop(2)

0x342: PushEmpty(int, bool, int, bool)
0x343: Stack[-2] = (int) 0
0x344: Push("all")
0x345: PushEmpty(string, int)
0x346: Stack[-1] = Stack[-5]
0x347: Call2 0x33b

0x348: Pop(1)
0x349: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x34a: Pop(2)
0x34b: Pop(0); Push((bool) Stack[-1] == 0)
0x34c: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34d: GOTO 0x351

0x34e: Push((int) 1)
0x34f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x350: GOTO 0x344

0x351: Stack[-5] = Stack[-2]
0x352: Return(); Pop(4)

0x353: Stack[-1] = (int) 515568
0x354: Return(); Pop(0)

0x355: Stack[-1] = (int) 503353
0x356: Return(); Pop(0)

0x357: Stack[-1] = "ui/NPC_Citizen1.png"
0x358: Return(); Pop(0)

0x359: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x35a: Return(); Pop(0)

0x35b: Stack[-1] = (bool) 0
0x35c: Return(); Pop(0)

0x35d: PushEmpty()
0x35e: Push("playsound")
0x35f: Push("giveitem")
0x360: @ TriggerWorld(Stack[-2], Stack[-1])
0x361: Pop(2)
0x362: Return(); Pop(0)

0x363: PushEmpty()
0x364: Push("oob1Worker2")
0x365: Push((int) 1)
0x366: @ SetVariable(Stack[-2], Stack[-1])
0x367: Pop(2)
0x368: Return(); Pop(0)

0x369: PushEmpty()
0x36a: Push("oob1Worker3")
0x36b: Push((int) 1)
0x36c: @ SetVariable(Stack[-2], Stack[-1])
0x36d: Pop(2)
0x36e: Return(); Pop(0)

0x36f: PushEmpty(object, object)
0x370: Push("Knife is given")
0x371: @ Trace(Stack[-1])
0x372: Pop(1)
0x373: @ CreateInvItem(Stack[-1])
0x374: Pop(0)
0x375: Push("Knife")
0x376: @@ SetItemName(Stack[-1])
0x377: Pop(1)
0x378: Push("durability")
0x379: Push((int) 70)
0x37a: @@ SetProperty(Stack[-2], Stack[-1])
0x37b: Pop(2)
0x37c: PushEmpty(object, object, int)
0x37d: Stack[-3] = Stack[-7]
0x37e: Stack[-2] = Stack[-4]
0x37f: Stack[-1] = (int) 1
0x380: Call2 0x328

0x381: Pop(3)
0x382: Return(); Pop(2)

0x383: Stack[-1] = 0
0x384: PushEmpty()
0x385: Push("oob1Worker1")
0x386: Push((int) 1)
0x387: @ SetVariable(Stack[-2], Stack[-1])
0x388: Pop(2)
0x389: Return(); Pop(0)

0x38a: PushEmpty()
0x38b: PushEmpty(int, string)
0x38c: Stack[-1] = "oob1Worker2"
0x38d: Call2 0x317

0x38e: Pop(1)
0x38f: Push((int) 0)
0x390: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x391: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x392: Stack[-2] = (bool) 1
0x393: Return(); Pop(0)

0x394: Stack[-2] = (bool) 0
0x395: Return(); Pop(0)

0x396: PushEmpty()
0x397: PushEmpty(int, string)
0x398: Stack[-1] = "oob1Worker3"
0x399: Call2 0x317

0x39a: Pop(1)
0x39b: Push((int) 0)
0x39c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x39d: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39e: Stack[-2] = (bool) 1
0x39f: Return(); Pop(0)

0x3a0: Stack[-2] = (bool) 0
0x3a1: Return(); Pop(0)

0x3a2: PushEmpty()
0x3a3: PushEmpty(int, string)
0x3a4: Stack[-1] = "oob1Worker1"
0x3a5: Call2 0x317

0x3a6: Pop(1)
0x3a7: Push((int) 0)
0x3a8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-2] = (bool) 1
0x3ab: Return(); Pop(0)

0x3ac: Stack[-2] = (bool) 0
0x3ad: Return(); Pop(0)

0x3ae: PushEmpty(int, int)
0x3af: Push("branch")
0x3b0: @ GetVariable(Stack[-1], Stack[-2])
0x3b1: Pop(1)
0x3b2: Push((int) 0)
0x3b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b5: Stack[-3] = (int) 1
0x3b6: Return(); Pop(2)

0x3b7: GOTO 0x3bd

0x3b8: Push((int) 1)
0x3b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bb: Stack[-3] = (int) 2
0x3bc: Return(); Pop(2)

0x3bd: Stack[-3] = (int) 3
0x3be: Return(); Pop(2)

