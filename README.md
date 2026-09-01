# Fall Protection Vest - Electrical Team

Biomedical Design Club

## Project goal

Build and test the sensing, electronics, fall-detection, power, and trigger-control parts of an inflatable fall protection vest.

## Safety first

This is a student prototype. Do not connect or fire an inflation device during normal firmware or algorithm testing. Start with an LED or other safe test load. Any test involving a person, compressed gas, pyrotechnics, or an inflation mechanism needs approval, a written test plan, and proper supervision.

## Simple system plan

```text
BMI270 IMU -> ESP32-S3 -> Fall detection -> Safe trigger output -> Inflation system
```

## Team areas

- EE Lead: keeps the system organized and helps the parts work together
- Firmware: connects the ESP32-S3 and sensors
- Algorithm/Data: collects data and builds the fall-detection logic
- Power/Circuits: plans safe power and output circuits
- PCB/Hardware: makes schematics, wiring, breadboards, and PCB files
- Biotech/Testing: helps plan safe, realistic tests and documents results

## Repository map

- `docs/`: meeting notes, progress updates, research, and decisions
- `firmware/`: PlatformIO starter project for the ESP32-S3
- `python/`: data collection, analysis, and notebooks
- `data/`: activity datasets; do not commit personal or sensitive data
- `hardware/`: schematics, PCB, breadboard, and wiring files
- `simulation/`: LTspice work
- `testing/`: test plans, results, and failures
- `bom/`: electrical bill of materials

## First setup

1. Install Git and make a GitHub account.
2. Clone this repository.
3. Create a branch for your task.
4. Add your work and update your weekly progress file.
5. Open a pull request so one teammate can check it before merging.

## Branch names

Use short names that show the type of work and your task:

```text
firmware/imu-reading
algorithm/fall-threshold
hardware/power-board
docs/week-2-notes
test/walking-data
fix/serial-connection
```

Use lowercase words with hyphens. Do not work directly on `main` unless the team agrees it is a very small emergency fix.

## Simple pull-request workflow

1. Make a new branch from the newest `main`.
2. Do one clear task on that branch.
3. Test what you changed.
4. Commit with a simple message, such as `Add BMI270 reading test`.
5. Push the branch and open a pull request.
6. In the pull request, explain what changed, how you tested it, and any help you need.
7. Ask at least one teammate to review it.
8. Fix comments, then merge when the check is done.

See [CONTRIBUTING.md](CONTRIBUTING.md) for more details.

## Weekly progress

Each person has a role template in `docs/weekly-progress/`. Copy or rename your role file for each week. Keep updates short and honest. Blockers are useful because they tell the team where help is needed.

## Firmware quick start

Open `firmware/` in VS Code with PlatformIO, connect an ESP32-S3 development board, and use the PlatformIO Build and Upload buttons. The starter program only prints a message and keeps the example trigger output inactive.

## Data reminder

Small example data can be stored in this repository. Large recordings should use shared storage and be linked in a README. Remove names and personal details before sharing any human-subject data.

