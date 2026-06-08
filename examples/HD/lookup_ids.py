#!/usr/bin/env python3
"""Mechanical CSV lookup: read the HD file, find SetMessage(N)/AddReply(N,...)
IDs, look them up in pathologic_ru.csv, write a small id→text JSON for later use.
This is pure lookup, no heuristic naming.
"""
import csv, json, re
from pathlib import Path

HD = Path(__file__).resolve().parent / "Scripts_c/NPC_Burah_Aglaja.c"
CSV = Path("C:/Users/user/Desktop/Pathologic/pathologicdialogue.github.io-main/code/pathologic_ru.csv")
OUT = Path(__file__).resolve().parent / "_dialog_ids.json"

text = HD.read_text(encoding="utf-8", errors="replace")
ids: set[str] = set()
for m in re.finditer(r"\b(?:SetMessage|AddReply)\((\d+)", text):
    ids.add(m.group(1))
# Also pick up CreateDiaryEntry, AddMark, AddBlankActor — those use string IDs too
for m in re.finditer(r"\b(?:CreateDiaryEntry|AddMark)\([^,]+,[^,]+,[^,]+,\s*(\d+)", text):
    ids.add(m.group(1))

print(f"unique IDs: {len(ids)}")

mapping: dict[str, str] = {}
with CSV.open(encoding="utf-8") as f:
    reader = csv.reader(f)
    next(reader, None)
    for row in reader:
        if len(row) >= 2 and row[0] in ids:
            mapping[row[0]] = row[1]

print(f"resolved: {len(mapping)}")
OUT.write_text(json.dumps(mapping, ensure_ascii=False, indent=1), encoding="utf-8")
