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
	restore
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	d8q03
	burah gives blood
	d8q03_blood
	burah gives serum
	burah_serum
	ood8Burah1
	microscope_d8q03_blood
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Burah.png
	ui/NPC_Burah_b.png

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
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	irand (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetGameTime (1 args)
	TriggerWorld (2 args)
	Trace (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x28c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc3 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x284 Vars = (object)
		EVENT_26 Op = 0x290 Vars = (string)
		EVENT_6 Op = 0x2ac Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x3c0

0x5: Stack[-2] = Stack[-1]
0x6: Pop(1)
0x7: Call2 0x313

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-2] = Stack[-12]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x2be

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x4da

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1])
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x4d8

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1])
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x4dc

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1])
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x4de

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1])
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x4c7

0x2a: Pop(0)
0x2b: @@ SetPlayerName(Stack[-1])
0x2c: Pop(1)
0x2d: Stack[-2] = (int) -1
0x2e: @ IsOverrideActive(Stack[-3])
0x2f: Pop(0)
0x30: Push(Stack[-3])
0x31: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x32: Stack[-10] = (int) -2
0x33: Return(); Pop(8)

0x34: @ DoDialog(Stack[-4])
0x35: Pop(0)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x302

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0xad

0x5a: Pop(1)
0x5b: Push((int) 513423)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x447

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 513424)
0x66: Push((int) 14661)
0x67: Push((int) 14660)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: PushEmpty(bool)
0x6b: Stack[-1] = (bool) 0
0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call2 0x453

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x71: PushEmpty(bool, object)
0x72: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73: Call2 0x45f

0x74: Pop(1)
0x75: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x76: Stack[-1] = (bool) 1
0x77: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x78: Push((int) 513447)
0x79: Push((int) 14684)
0x7a: Push((int) 14683)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: PushEmpty(bool, object)
0x7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f: Call2 0x46b

0x80: Pop(1)
0x81: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x82: Push((int) 513433)
0x83: Push((int) 14670)
0x84: Push((int) 14669)
0x85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86: Pop(3)
0x87: Push((int) 513460)
0x88: Push((int) -1)
0x89: Push((int) 14697)
0x8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b: Pop(3)
0x8c: GOTO 0x8f

0x8d: Return(); Pop(0)

0x8e: GOTO 0x55

0x8f: PushEmpty(bool)
0x90: Call2 0x4e0

0x91: Pop(0)
0x92: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x93: @ lshWaitForAnimEnd()
0x94: Pop(0)
0x95: Push( Stack[3 + Tasks[-1].StackPointer] )
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: GOTO 0x9d

0x98: PushEmpty(string)
0x99: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9a: Call2 0x39d

0x9b: Pop(1)
0x9c: GOTO 0x93

0x9d: GOTO 0xac

0x9e: Push("all")
0x9f: Push("idle")
0xa0: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: @ WaitForAnimEnd()
0xa3: Pop(0)
0xa4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: GOTO 0xac

0xa7: Push("all")
0xa8: Push("idle")
0xa9: @ PlayAnimation(Stack[-2], Stack[-1])
0xaa: Pop(2)
0xab: GOTO 0xa2

0xac: Return(); Pop(0)

0xad: PushEmpty()
0xae: PushEmpty(bool)
0xaf: Call2 0x4e0

0xb0: Pop(0)
0xb1: Pop(1); Push((bool) Stack[-1] == 0)
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Return(); Pop(0)

0xb4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Return(); Pop(0)

0xb7: PushEmpty(string, bool)
0xb8: Stack[-2] = Stack[-3]
0xb9: Push("")
0xba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbc: Stack[-1] = (bool) 0
0xbd: GOTO 0xbf

0xbe: Stack[-1] = (bool) 1
0xbf: Call2 0x3a4

0xc0: Pop(2)
0xc1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc2: Return(); Pop(0)

0xc3: PushEmpty()
0xc4: Push((int) 1)
0xc5: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0xc6: PushEmpty()
0xc7: Call2 0x3b9

0xc8: Pop(0)
0xc9: Push((int) 14668)
0xca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call2 0x410

0xd0: Pop(2)
0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x422

0xd5: Pop(2)
0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x40a

0xda: Pop(2)
0xdb: Push((int) 14696)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0x436

0xe2: Pop(2)
0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call2 0x40a

0xe7: Pop(2)
0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call2 0x419

0xec: Pop(2)
0xed: Push((int) 14692)
0xee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf0: PushEmpty(object, object)
0xf1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf3: Call2 0x42d

0xf4: Pop(2)
0xf5: Push((int) 14669)
0xf6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: PushEmpty(object, object)
0xf9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb: Call2 0x441

0xfc: Pop(2)
0xfd: Push((int) 14659)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral"
0x102: Call2 0xad

0x103: Pop(1)
0x104: Push((int) 513423)
0x105: @@ SetMessage(Stack[-1])
0x106: Pop(1)
0x107: @@ ClearReplies()
0x108: Pop(0)
0x109: PushEmpty(bool, object)
0x10a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Call2 0x447

0x10c: Pop(1)
0x10d: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10e: Push((int) 513424)
0x10f: Push((int) 14661)
0x110: Push((int) 14660)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: PushEmpty(bool)
0x114: Stack[-1] = (bool) 0
0x115: PushEmpty(bool, object)
0x116: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x117: Call2 0x453

0x118: Pop(1)
0x119: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11a: PushEmpty(bool, object)
0x11b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Call2 0x45f

0x11d: Pop(1)
0x11e: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11f: Stack[-1] = (bool) 1
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: Push((int) 513447)
0x122: Push((int) 14684)
0x123: Push((int) 14683)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: PushEmpty(bool, object)
0x127: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x128: Call2 0x46b

0x129: Pop(1)
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: Push((int) 513433)
0x12c: Push((int) 14670)
0x12d: Push((int) 14669)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Push((int) 513460)
0x131: Push((int) -1)
0x132: Push((int) 14697)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 14670)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0xad

0x13c: Pop(1)
0x13d: Push((int) 513434)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 513435)
0x143: Push((int) 14672)
0x144: Push((int) 14671)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 14672)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral"
0x14d: Call2 0xad

0x14e: Pop(1)
0x14f: Push((int) 513436)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 513437)
0x155: Push((int) 14674)
0x156: Push((int) 14673)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: Push((int) 14674)
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Neutral"
0x15f: Call2 0xad

0x160: Pop(1)
0x161: Push((int) 513438)
0x162: @@ SetMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ ClearReplies()
0x165: Pop(0)
0x166: Push((int) 513494)
0x167: Push((int) 14736)
0x168: Push((int) 14735)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Push((int) 513491)
0x16c: Push((int) 14732)
0x16d: Push((int) 14731)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Return(); Pop(0)

0x171: Push((int) 14732)
0x172: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x174: PushEmpty(string)
0x175: Stack[-1] = "Neutral"
0x176: Call2 0xad

0x177: Pop(1)
0x178: Push((int) 513492)
0x179: @@ SetMessage(Stack[-1])
0x17a: Pop(1)
0x17b: @@ ClearReplies()
0x17c: Pop(0)
0x17d: Push((int) 513493)
0x17e: Push((int) 14678)
0x17f: Push((int) 14733)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Return(); Pop(0)

0x183: Push((int) 14736)
0x184: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x186: PushEmpty(string)
0x187: Stack[-1] = "Neutral"
0x188: Call2 0xad

0x189: Pop(1)
0x18a: Push((int) 513495)
0x18b: @@ SetMessage(Stack[-1])
0x18c: Pop(1)
0x18d: @@ ClearReplies()
0x18e: Pop(0)
0x18f: Push((int) 513439)
0x190: Push((int) 14676)
0x191: Push((int) 14675)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: Return(); Pop(0)

0x195: Push((int) 14676)
0x196: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x198: PushEmpty(string)
0x199: Stack[-1] = "Neutral"
0x19a: Call2 0xad

0x19b: Pop(1)
0x19c: Push((int) 513440)
0x19d: @@ SetMessage(Stack[-1])
0x19e: Pop(1)
0x19f: @@ ClearReplies()
0x1a0: Pop(0)
0x1a1: Push((int) 513441)
0x1a2: Push((int) 14678)
0x1a3: Push((int) 14677)
0x1a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5: Pop(3)
0x1a6: Return(); Pop(0)

0x1a7: Push((int) 14678)
0x1a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1aa: PushEmpty(string)
0x1ab: Stack[-1] = "Neutral"
0x1ac: Call2 0xad

0x1ad: Pop(1)
0x1ae: Push((int) 513442)
0x1af: @@ SetMessage(Stack[-1])
0x1b0: Pop(1)
0x1b1: @@ ClearReplies()
0x1b2: Pop(0)
0x1b3: Push((int) 513444)
0x1b4: Push((int) 14681)
0x1b5: Push((int) 14680)
0x1b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b7: Pop(3)
0x1b8: Return(); Pop(0)

0x1b9: Push((int) 14681)
0x1ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1bc: PushEmpty(string)
0x1bd: Stack[-1] = "Neutral"
0x1be: Call2 0xad

0x1bf: Pop(1)
0x1c0: Push((int) 513445)
0x1c1: @@ SetMessage(Stack[-1])
0x1c2: Pop(1)
0x1c3: @@ ClearReplies()
0x1c4: Pop(0)
0x1c5: Push((int) 513446)
0x1c6: Push((int) -1)
0x1c7: Push((int) 14682)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Return(); Pop(0)

0x1cb: Push((int) 14684)
0x1cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1ce: PushEmpty(string)
0x1cf: Stack[-1] = "Neutral"
0x1d0: Call2 0xad

0x1d1: Pop(1)
0x1d2: Push((int) 513448)
0x1d3: @@ SetMessage(Stack[-1])
0x1d4: Pop(1)
0x1d5: @@ ClearReplies()
0x1d6: Pop(0)
0x1d7: Push((int) 513449)
0x1d8: Push((int) 14686)
0x1d9: Push((int) 14685)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Push((int) 513451)
0x1dd: Push((int) 14688)
0x1de: Push((int) 14687)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: Return(); Pop(0)

0x1e2: Push((int) 14688)
0x1e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e5: PushEmpty(string)
0x1e6: Stack[-1] = "Neutral"
0x1e7: Call2 0xad

0x1e8: Pop(1)
0x1e9: Push((int) 513452)
0x1ea: @@ SetMessage(Stack[-1])
0x1eb: Pop(1)
0x1ec: @@ ClearReplies()
0x1ed: Pop(0)
0x1ee: Push((int) 513453)
0x1ef: Push((int) 14690)
0x1f0: Push((int) 14689)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 14690)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = "Neutral"
0x1f9: Call2 0xad

0x1fa: Pop(1)
0x1fb: Push((int) 513454)
0x1fc: @@ SetMessage(Stack[-1])
0x1fd: Pop(1)
0x1fe: @@ ClearReplies()
0x1ff: Pop(0)
0x200: Push((int) 513455)
0x201: Push((int) 14694)
0x202: Push((int) 14691)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: Push((int) 513456)
0x206: Push((int) -1)
0x207: Push((int) 14692)
0x208: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x209: Pop(3)
0x20a: Return(); Pop(0)

0x20b: Push((int) 14686)
0x20c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x20e: PushEmpty(string)
0x20f: Stack[-1] = "Neutral"
0x210: Call2 0xad

0x211: Pop(1)
0x212: Push((int) 513450)
0x213: @@ SetMessage(Stack[-1])
0x214: Pop(1)
0x215: @@ ClearReplies()
0x216: Pop(0)
0x217: Push((int) 513457)
0x218: Push((int) 14694)
0x219: Push((int) 14693)
0x21a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(3)
0x21c: Return(); Pop(0)

0x21d: Push((int) 14694)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x220: PushEmpty(string)
0x221: Stack[-1] = "Neutral"
0x222: Call2 0xad

0x223: Pop(1)
0x224: Push((int) 513458)
0x225: @@ SetMessage(Stack[-1])
0x226: Pop(1)
0x227: @@ ClearReplies()
0x228: Pop(0)
0x229: Push((int) 513459)
0x22a: Push((int) -1)
0x22b: Push((int) 14696)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Return(); Pop(0)

0x22f: Push((int) 14661)
0x230: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x232: PushEmpty(string)
0x233: Stack[-1] = "Neutral"
0x234: Call2 0xad

0x235: Pop(1)
0x236: Push((int) 513425)
0x237: @@ SetMessage(Stack[-1])
0x238: Pop(1)
0x239: @@ ClearReplies()
0x23a: Pop(0)
0x23b: Push((int) 513426)
0x23c: Push((int) 14663)
0x23d: Push((int) 14662)
0x23e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23f: Pop(3)
0x240: Return(); Pop(0)

0x241: Push((int) 14663)
0x242: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x244: PushEmpty(string)
0x245: Stack[-1] = "Neutral"
0x246: Call2 0xad

0x247: Pop(1)
0x248: Push((int) 513427)
0x249: @@ SetMessage(Stack[-1])
0x24a: Pop(1)
0x24b: @@ ClearReplies()
0x24c: Pop(0)
0x24d: Push((int) 513428)
0x24e: Push((int) 14665)
0x24f: Push((int) 14664)
0x250: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x251: Pop(3)
0x252: Return(); Pop(0)

0x253: Push((int) 14665)
0x254: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x256: PushEmpty(string)
0x257: Stack[-1] = "Neutral"
0x258: Call2 0xad

0x259: Pop(1)
0x25a: Push((int) 513429)
0x25b: @@ SetMessage(Stack[-1])
0x25c: Pop(1)
0x25d: @@ ClearReplies()
0x25e: Pop(0)
0x25f: Push((int) 513430)
0x260: Push((int) 14667)
0x261: Push((int) 14666)
0x262: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x263: Pop(3)
0x264: Return(); Pop(0)

0x265: Push((int) 14667)
0x266: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x268: PushEmpty(string)
0x269: Stack[-1] = "Neutral"
0x26a: Call2 0xad

0x26b: Pop(1)
0x26c: Push((int) 513431)
0x26d: @@ SetMessage(Stack[-1])
0x26e: Pop(1)
0x26f: @@ ClearReplies()
0x270: Pop(0)
0x271: Push((int) 513432)
0x272: Push((int) -1)
0x273: Push((int) 14668)
0x274: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x275: Pop(3)
0x276: Return(); Pop(0)

0x277: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x278: PushEmpty(bool)
0x279: Call2 0x4e0

0x27a: Pop(0)
0x27b: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27c: @ lshStopAnimation()
0x27d: Pop(0)
0x27e: GOTO 0x281

0x27f: @ StopAnimation()
0x280: Pop(0)
0x281: Return(); Pop(0)

0x282: GOTO 0xc4

0x283: Return(); Pop(0)

0x284: PushEmpty()
0x285: PushEmpty(int, object)
0x286: Stack[-1] = Stack[-3]
0x287: Push(-2, 1); TaskCall(0)
0x288: Call2 0x0

0x289: Pop(-2, 1); TaskReturn
0x28a: Pop(2)
0x28b: Return(); Pop(0)

0x28c: @ Hold()
0x28d: Pop(0)
0x28e: GOTO 0x28c

0x28f: Return(); Pop(0)

0x290: PushEmpty(bool, bool)
0x291: Push("cleanup")
0x292: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x294: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x295: @ IsLoaded(Stack[-1])
0x296: Pop(0)
0x297: PushEmpty(bool)
0x298: Stack[-1] = (bool) 0
0x299: Pop(0); Push((bool) Stack[-2] == 0)
0x29a: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29b: PushEmpty(bool)
0x29c: Call2 0x2bc

0x29d: Pop(0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: Stack[-1] = (bool) 1
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a1: PushEmpty(object)
0x2a2: Call2 0x3c0

0x2a3: Pop(0)
0x2a4: @ RemoveActor(Stack[-1])
0x2a5: Pop(1)
0x2a6: GOTO 0x2ab

0x2a7: Push("restore")
0x2a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2ab: Return(); Pop(2)

0x2ac: PushEmpty(bool)
0x2ad: Stack[-1] = (bool) 0
0x2ae: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2af: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b0: PushEmpty(bool)
0x2b1: Call2 0x2bc

0x2b2: Pop(0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b4: Stack[-1] = (bool) 1
0x2b5: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b6: PushEmpty(object)
0x2b7: Call2 0x3c0

0x2b8: Pop(0)
0x2b9: @ RemoveActor(Stack[-1])
0x2ba: Pop(1)
0x2bb: Return(); Pop(0)

0x2bc: Stack[-1] = (bool) 1
0x2bd: Return(); Pop(0)

0x2be: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2bf: @@ GetPosition(Stack[-8])
0x2c0: Pop(0)
0x2c1: @@ GetEyesHeight(Stack[-9])
0x2c2: Pop(0)
0x2c3: Push(CvectorIndex(Stack[-8], 1))
0x2c4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2c6: @ GetPosition(Stack[-7])
0x2c7: Pop(0)
0x2c8: @ GetEyesHeight(Stack[-9])
0x2c9: Pop(0)
0x2ca: Push(CvectorIndex(Stack[-7], 1))
0x2cb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2cc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2cd: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2ce: Push(CvectorIndex(Stack[-6], 1))
0x2cf: Stack[-1] = (int) 0
0x2d0: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2d1: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2d2: Pop(1); Push(Sqrt(Stack[-1]))
0x2d3: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2d4: Stack[-5] = -Stack[-6]; Pop(0);
0x2d5: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2d6: PushEmpty(cvector, cvector)
0x2d7: Push(CVector(0.0, 1.0, 0.0))
0x2d8: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2d9: Call2 0x3c6

0x2da: Pop(1)
0x2db: Push((int) 25)
0x2dc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2dd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2de: Push(CVector(0.0, 10.0, 0.0))
0x2df: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2e0: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2e1: @ IsOverrideActive(Stack[-2])
0x2e2: Pop(0)
0x2e3: Push(Stack[-2])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e5: Stack[-21] = (bool) 0
0x2e6: Return(); Pop(18)

0x2e7: @ StopWorld()
0x2e8: Pop(0)
0x2e9: @ CameraTransit(Stack[-3], Stack[-5])
0x2ea: Pop(0)
0x2eb: Push(CvectorIndex(Stack[-4], 0))
0x2ec: Push(CvectorIndex(Stack[-5], 2))
0x2ed: @ Rotate(Stack[-2], Stack[-1])
0x2ee: Pop(2)
0x2ef: PushEmpty(bool)
0x2f0: Call2 0x4e0

0x2f1: Pop(0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: GOTO 0x2fc

0x2f4: Push("head")
0x2f5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f6: Pop(1)
0x2f7: Push(Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f9: Push("head")
0x2fa: @ LookAsyncCamera(Stack[-1])
0x2fb: Pop(1)
0x2fc: @ CameraWaitForPlayFinish()
0x2fd: Pop(0)
0x2fe: @ ResumeWorld()
0x2ff: Pop(0)
0x300: Stack[-21] = (bool) 1
0x301: Return(); Pop(18)

0x302: PushEmpty(bool, bool)
0x303: @ CameraSwitchToNormal()
0x304: Pop(0)
0x305: PushEmpty(bool)
0x306: Call2 0x4e0

0x307: Pop(0)
0x308: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x309: GOTO 0x312

0x30a: Push("head")
0x30b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x30c: Pop(1)
0x30d: Push(Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30f: Push("head")
0x310: @ UnlookAsync(Stack[-1])
0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int, int, int)
0x314: Push("voice_common")
0x315: @ GetVariable(Stack[-1], Stack[-3])
0x316: Pop(1)
0x317: Push(Stack[-2])
0x318: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x319: PushEmpty(bool, object)
0x31a: Stack[-1] = Stack[-7]
0x31b: Call2 0x34d

0x31c: Pop(1)
0x31d: Pop(1); Push((bool) Stack[-1] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x31f: PushEmpty(bool, object)
0x320: Stack[-1] = Stack[-7]
0x321: Call2 0x372

0x322: Pop(1)
0x323: Pop(1); Push((bool) Stack[-1] == 0)
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-6] = (bool) 0
0x326: Return(); Pop(4)

0x327: Push((int) 2)
0x328: @ irand(Stack[-2], Stack[-1])
0x329: Pop(1)
0x32a: Push(Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32c: Push("voice_common")
0x32d: Push((int) 1)
0x32e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x32f: Push((int) 3)
0x330: Pop(2); Push(Stack[-2] % Stack[-1]);
0x331: @ SetVariable(Stack[-2], Stack[-1])
0x332: Pop(2)
0x333: GOTO 0x338

0x334: Push("voice_common")
0x335: Push((int) 0)
0x336: @ SetVariable(Stack[-2], Stack[-1])
0x337: Pop(2)
0x338: GOTO 0x34b

0x339: PushEmpty(bool, object)
0x33a: Stack[-1] = Stack[-7]
0x33b: Call2 0x372

0x33c: Pop(1)
0x33d: Pop(1); Push((bool) Stack[-1] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x33f: PushEmpty(bool, object)
0x340: Stack[-1] = Stack[-7]
0x341: Call2 0x34d

0x342: Pop(1)
0x343: Pop(1); Push((bool) Stack[-1] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: Stack[-6] = (bool) 0
0x346: Return(); Pop(4)

0x347: Push("voice_common")
0x348: Push((int) 1)
0x349: @ SetVariable(Stack[-2], Stack[-1])
0x34a: Pop(2)
0x34b: Stack[-6] = (bool) 1
0x34c: Return(); Pop(4)

0x34d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x34e: Stack[-5] = "c"
0x34f: Stack[-4] = (int) 0
0x350: Push((int) 1)
0x351: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x352: Push((int) 1)
0x353: Pop(1); Push(Stack[-5] + Stack[-1]);
0x354: Pop(1); Push(Stack[-6] + Stack[-1]);
0x355: @@ HasProperty(Stack[-1], Stack[-4])
0x356: Pop(1)
0x357: Pop(0); Push((bool) Stack[-3] == 0)
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: GOTO 0x35d

0x35a: Push((int) 1)
0x35b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x35c: GOTO 0x350

0x35d: Pop(0); Push((bool) Stack[-4] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35f: Stack[-12] = (bool) 0
0x360: Return(); Pop(10)

0x361: Stack[-2] = (int) 0
0x362: Push((int) 1)
0x363: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x365: @ irand(Stack[-2], Stack[-4])
0x366: Pop(0)
0x367: Push((int) 1)
0x368: Pop(1); Push(Stack[-3] + Stack[-1]);
0x369: Pop(1); Push(Stack[-6] + Stack[-1]);
0x36a: @@ GetProperty(Stack[-1], Stack[-2])
0x36b: Pop(1)
0x36c: PushEmpty(bool, string)
0x36d: Stack[-1] = Stack[-3]
0x36e: Call2 0x3aa

0x36f: Stack[-14] = Stack[-2]
0x370: Pop(2)
0x371: Return(); Pop(10)

0x372: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x373: Push("d")
0x374: PushEmpty(int)
0x375: Call2 0x401

0x376: Pop(0)
0x377: Pop(2); Push(Stack[-2] + Stack[-1]);
0x378: Push("m")
0x379: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x37a: Stack[-4] = (int) 0
0x37b: Push((int) 1)
0x37c: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x37d: Push((int) 1)
0x37e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x37f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x380: @@ HasProperty(Stack[-1], Stack[-4])
0x381: Pop(1)
0x382: Pop(0); Push((bool) Stack[-3] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x384: GOTO 0x388

0x385: Push((int) 1)
0x386: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x387: GOTO 0x37b

0x388: Pop(0); Push((bool) Stack[-4] == 0)
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: Stack[-12] = (bool) 0
0x38b: Return(); Pop(10)

0x38c: Stack[-2] = (int) 0
0x38d: Push((int) 1)
0x38e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x390: @ irand(Stack[-2], Stack[-4])
0x391: Pop(0)
0x392: Push((int) 1)
0x393: Pop(1); Push(Stack[-3] + Stack[-1]);
0x394: Pop(1); Push(Stack[-6] + Stack[-1]);
0x395: @@ GetProperty(Stack[-1], Stack[-2])
0x396: Pop(1)
0x397: PushEmpty(bool, string)
0x398: Stack[-1] = Stack[-3]
0x399: Call2 0x3aa

0x39a: Stack[-14] = Stack[-2]
0x39b: Pop(2)
0x39c: Return(); Pop(10)

0x39d: PushEmpty(float, float, float, float)
0x39e: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x39f: Pop(0)
0x3a0: Push((bool) 0)
0x3a1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3a2: Pop(1)
0x3a3: Return(); Pop(4)

0x3a4: PushEmpty(float, float, float, float)
0x3a5: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3a6: Pop(0)
0x3a7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3a8: Pop(0)
0x3a9: Return(); Pop(4)

0x3aa: PushEmpty(bool, bool)
0x3ab: PushEmpty(bool)
0x3ac: Call2 0x4e0

0x3ad: Pop(0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3af: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3b0: Pop(0)
0x3b1: Push(Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b3: @ lshPlaySpeech(Stack[-3])
0x3b4: Pop(0)
0x3b5: Stack[-4] = (bool) 1
0x3b6: Return(); Pop(2)

0x3b7: Stack[-4] = (bool) 0
0x3b8: Return(); Pop(2)

0x3b9: PushEmpty(bool)
0x3ba: Call2 0x4e0

0x3bb: Pop(0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bd: @ lshStopSpeech()
0x3be: Pop(0)
0x3bf: Return(); Pop(0)

0x3c0: PushEmpty(object, object)
0x3c1: @ self(Stack[-1])
0x3c2: Pop(0)
0x3c3: Stack[-3] = Stack[-1]
0x3c4: Return(); Pop(2)

0x3c5: Stack[-1] = 0
0x3c6: PushEmpty(float, float)
0x3c7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3c8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3c9: Push((float)0.0)
0x3ca: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cc: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3cd: Return(); Pop(2)

0x3ce: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3cf: Return(); Pop(2)

0x3d0: PushEmpty(int, int)
0x3d1: @ GetVariable(Stack[-3], Stack[-1])
0x3d2: Pop(0)
0x3d3: Stack[-4] = Stack[-1]
0x3d4: Return(); Pop(2)

0x3d5: PushEmpty(object, object)
0x3d6: @ CreateIntVector(Stack[-1])
0x3d7: Pop(0)
0x3d8: @@ add(Stack[-4])
0x3d9: Pop(0)
0x3da: @@ add(Stack[-3])
0x3db: Pop(0)
0x3dc: Push((int) 3)
0x3dd: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x3de: Pop(1)
0x3df: Return(); Pop(2)

0x3e0: Stack[-1] = 0
0x3e1: PushEmpty(int, int, bool, int, int, bool)
0x3e2: @@ GetItemID(Stack[-3])
0x3e3: Pop(0)
0x3e4: Push("Category")
0x3e5: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x3e6: Pop(1)
0x3e7: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x3e8: Pop(0)
0x3e9: Pop(0); Push((bool) Stack[-1] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3eb: @@ DropItems(Stack[-8], Stack[-7])
0x3ec: Pop(0)
0x3ed: GOTO 0x3f3

0x3ee: PushEmpty(int, int)
0x3ef: Stack[-2] = Stack[-5]
0x3f0: Stack[-1] = Stack[-9]
0x3f1: Call2 0x3d5

0x3f2: Pop(2)
0x3f3: Return(); Pop(6)

0x3f4: PushEmpty(object, object)
0x3f5: @ CreateInvItem(Stack[-1])
0x3f6: Pop(0)
0x3f7: @@ SetItemName(Stack[-4])
0x3f8: Pop(0)
0x3f9: PushEmpty(object, object, int)
0x3fa: Stack[-3] = Stack[-8]
0x3fb: Stack[-2] = Stack[-4]
0x3fc: Stack[-1] = Stack[-6]
0x3fd: Call2 0x3e1

0x3fe: Pop(3)
0x3ff: Return(); Pop(2)

0x400: Stack[-1] = 0
0x401: PushEmpty(float, float)
0x402: @ GetGameTime(Stack[-1])
0x403: Pop(0)
0x404: Push((int) 1)
0x405: PushEmpty(int)
0x406: Push((int) 24)
0x407: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x408: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x409: Return(); Pop(2)

0x40a: PushEmpty()
0x40b: Push("playsound")
0x40c: Push("giveitem")
0x40d: @ TriggerWorld(Stack[-2], Stack[-1])
0x40e: Pop(2)
0x40f: Return(); Pop(0)

0x410: PushEmpty()
0x411: Push("d8q03")
0x412: Push((int) 1)
0x413: @ SetVariable(Stack[-2], Stack[-1])
0x414: Pop(2)
0x415: PushEmpty()
0x416: Call2 0x477

0x417: Pop(0)
0x418: Return(); Pop(0)

0x419: PushEmpty()
0x41a: Push("d8q03")
0x41b: Push((int) 1000)
0x41c: @ SetVariable(Stack[-2], Stack[-1])
0x41d: Pop(2)
0x41e: PushEmpty()
0x41f: Call2 0x484

0x420: Pop(0)
0x421: Return(); Pop(0)

0x422: PushEmpty()
0x423: Push("burah gives blood")
0x424: @ Trace(Stack[-1])
0x425: Pop(1)
0x426: PushEmpty(object, string, int)
0x427: Stack[-3] = Stack[-5]
0x428: Stack[-2] = "d8q03_blood"
0x429: Stack[-1] = (int) 1
0x42a: Call2 0x3f4

0x42b: Pop(3)
0x42c: Return(); Pop(0)

0x42d: PushEmpty()
0x42e: Push("d8q03")
0x42f: Push((int) -1)
0x430: @ SetVariable(Stack[-2], Stack[-1])
0x431: Pop(2)
0x432: PushEmpty()
0x433: Call2 0x491

0x434: Pop(0)
0x435: Return(); Pop(0)

0x436: PushEmpty()
0x437: Push("burah gives serum")
0x438: @ Trace(Stack[-1])
0x439: Pop(1)
0x43a: PushEmpty(object, string, int)
0x43b: Stack[-3] = Stack[-5]
0x43c: Stack[-2] = "burah_serum"
0x43d: Stack[-1] = (int) 1
0x43e: Call2 0x3f4

0x43f: Pop(3)
0x440: Return(); Pop(0)

0x441: PushEmpty()
0x442: Push("ood8Burah1")
0x443: Push((int) 1)
0x444: @ SetVariable(Stack[-2], Stack[-1])
0x445: Pop(2)
0x446: Return(); Pop(0)

0x447: PushEmpty()
0x448: PushEmpty(int, string)
0x449: Stack[-1] = "d8q03"
0x44a: Call2 0x3d0

0x44b: Pop(1)
0x44c: Push((int) 0)
0x44d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44f: Stack[-2] = (bool) 1
0x450: Return(); Pop(0)

0x451: Stack[-2] = (bool) 0
0x452: Return(); Pop(0)

0x453: PushEmpty()
0x454: PushEmpty(int, string)
0x455: Stack[-1] = "microscope_d8q03_blood"
0x456: Call2 0x3d0

0x457: Pop(1)
0x458: Push((int) 1)
0x459: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45b: Stack[-2] = (bool) 1
0x45c: Return(); Pop(0)

0x45d: Stack[-2] = (bool) 0
0x45e: Return(); Pop(0)

0x45f: PushEmpty()
0x460: PushEmpty(int, string)
0x461: Stack[-1] = "d8q03"
0x462: Call2 0x3d0

0x463: Pop(1)
0x464: Push((int) 1)
0x465: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-2] = (bool) 1
0x468: Return(); Pop(0)

0x469: Stack[-2] = (bool) 0
0x46a: Return(); Pop(0)

0x46b: PushEmpty()
0x46c: PushEmpty(int, string)
0x46d: Stack[-1] = "ood8Burah1"
0x46e: Call2 0x3d0

0x46f: Pop(1)
0x470: Push((int) 0)
0x471: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x473: Stack[-2] = (bool) 1
0x474: Return(); Pop(0)

0x475: Stack[-2] = (bool) 0
0x476: Return(); Pop(0)

0x477: PushEmpty(object, object)
0x478: Push((int) 124)
0x479: Push((int) 2)
0x47a: Push((int) 513763)
0x47b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x47c: Pop(3)
0x47d: PushEmpty(bool, object, int)
0x47e: Stack[-2] = Stack[-4]
0x47f: Stack[-1] = (int) -1
0x480: Call2 0x4ab

0x481: Pop(3)
0x482: Return(); Pop(2)

0x483: Stack[-1] = 0
0x484: PushEmpty(object, object)
0x485: Push((int) 125)
0x486: Push((int) 2)
0x487: Push((int) 513764)
0x488: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x489: Pop(3)
0x48a: PushEmpty(bool, object, int)
0x48b: Stack[-2] = Stack[-4]
0x48c: Stack[-1] = (int) 124
0x48d: Call2 0x4ab

0x48e: Pop(3)
0x48f: Return(); Pop(2)

0x490: Stack[-1] = 0
0x491: PushEmpty(object, object)
0x492: Push((int) 126)
0x493: Push((int) 2)
0x494: Push((int) 513765)
0x495: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x496: Pop(3)
0x497: PushEmpty(bool, object, int)
0x498: Stack[-2] = Stack[-4]
0x499: Stack[-1] = (int) 124
0x49a: Call2 0x4ab

0x49b: Pop(3)
0x49c: Return(); Pop(2)

0x49d: Stack[-1] = 0
0x49e: PushEmpty(object, object)
0x49f: @ GetDiaryRoot(Stack[-1])
0x4a0: Pop(0)
0x4a1: Pop(0); Push((bool) Stack[-1] == 0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a3: Push("Can't retrieve diary root")
0x4a4: @ Trace(Stack[-1])
0x4a5: Pop(1)
0x4a6: Stack[-3] = (bool) 0
0x4a7: Return(); Pop(2)

0x4a8: Stack[-3] = Stack[-1]
0x4a9: Return(); Pop(2)

0x4aa: Stack[-1] = 0
0x4ab: PushEmpty(object, object, int, object, object, int)
0x4ac: PushEmpty(object)
0x4ad: Call2 0x49e

0x4ae: Stack[-4] = Stack[-1]
0x4af: Pop(1)
0x4b0: @@ Find(Stack[-7], Stack[-2])
0x4b1: Pop(0)
0x4b2: Pop(0); Push((bool) Stack[-2] == 0)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b4: Push("Can't find diary parent with id: ")
0x4b5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4b6: @ Trace(Stack[-1])
0x4b7: Pop(1)
0x4b8: Stack[-9] = (bool) 0
0x4b9: Return(); Pop(6)

0x4ba: @@ AddChild(Stack[-8])
0x4bb: Pop(0)
0x4bc: Push((int) 7)
0x4bd: @ SendWorldWndMessage(Stack[-1])
0x4be: Pop(1)
0x4bf: @@ GetCategory(Stack[-1])
0x4c0: Pop(0)
0x4c1: @ SetDiarySection(Stack[-1])
0x4c2: Pop(0)
0x4c3: Stack[-9] = (bool) 0
0x4c4: Return(); Pop(6)

0x4c5: Stack[-2] = 0
0x4c6: Stack[-3] = 0
0x4c7: PushEmpty(int, int)
0x4c8: Push("branch")
0x4c9: @ GetVariable(Stack[-1], Stack[-2])
0x4ca: Pop(1)
0x4cb: Push((int) 0)
0x4cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4ce: Stack[-3] = (int) 1
0x4cf: Return(); Pop(2)

0x4d0: GOTO 0x4d6

0x4d1: Push((int) 1)
0x4d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d4: Stack[-3] = (int) 2
0x4d5: Return(); Pop(2)

0x4d6: Stack[-3] = (int) 3
0x4d7: Return(); Pop(2)

0x4d8: Stack[-1] = (int) 515592
0x4d9: Return(); Pop(0)

0x4da: Stack[-1] = (int) 511961
0x4db: Return(); Pop(0)

0x4dc: Stack[-1] = "ui/NPC_Burah.png"
0x4dd: Return(); Pop(0)

0x4de: Stack[-1] = "ui/NPC_Burah_b.png"
0x4df: Return(); Pop(0)

0x4e0: Stack[-1] = (bool) 1
0x4e1: Return(); Pop(0)

