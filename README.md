# Fall Protection Vest - Electrical Team

Biomedical Design Club, Fall 2026

## Project goal

Build and test the sensing, electronics, fall-detection, power, and trigger-control parts of an inflatable fall protection vest.

## What the project slides support

The EE team uses an **IMU to track tri-axial acceleration and angular velocity**. A **microcontroller like an ARM Cortex-M33 used by industry competitors** processes the sensor data and detects a fall using **Signal Vector Magnitude (SVM)**.

The slides describe the system approach. They do **not** require a specific IMU model, development board, or exact STM32 chip.

```text
IMU -> Cortex-M33 microcontroller -> SVM fall detection -> Safe test output -> Inflation interface later
```

## Team-selected engineering direction

These are the EE team's current working choices, not requirements stated by the slides:

- **MCU platform:** STM32 Cortex-M33. The exact board and chip are still to be selected and recorded in [`docs/decisions/`](docs/decisions/).
- **Firmware:** STM32CubeIDE
- **Algorithm and data analysis:** Python and Jupyter
- **Schematic and PCB design:** KiCad
- **Circuit simulation:** LTspice
- **Engineering files and version history:** GitHub
- **Documentation and project management:** Notion

The team should compare candidate boards and IMUs before adding an exact part number to the architecture or BOM.

## Team roles

- **EE Lead / Integration:** coordinates the EE team, tracks interfaces, and makes sure the subsystems work together
- **Firmware / MCU:** sets up STM32CubeIDE, reads the IMU, handles timing and communication, and keeps the safe test output inactive by default
- **Algorithm / Data:** collects movement data, analyzes it in Python/Jupyter, develops the SVM logic, and checks false positives
- **Power / Circuits:** plans the battery, voltage rails, protection, power budget, and safe output-driver circuit
- **PCB / Hardware:** creates KiCad schematics, breadboard layouts, wiring records, connectors, and PCB files
- **Biotech / Testing:** researches realistic fall and normal-movement scenarios, helps define safe tests, and documents results

Roles are starting assignments. The team can adjust them as members learn new skills and the design becomes clearer.

## Repository map

- [BOM](bom/) - electrical parts list and purchasing information
- [Firmware](firmware/) - STM32 firmware work and setup notes
- [Algorithm and notebooks](python/) - Python analysis, data collection, and Jupyter notebooks
- [Movement data](data/) - de-identified activity datasets
- [Power and circuit simulation](simulation/ltspice/) - LTspice files and simulation notes
- [PCB and hardware](hardware/) - KiCad, breadboard, wiring, connector, and PCB files
- [Testing and biotech](testing/) - test plans, results, failures, and movement scenarios
- [System integration](docs/system-integration/) - subsystem interfaces, block diagrams, and integration checks
- [Weekly progress](docs/weekly-progress/) - short updates and blockers for each role
- [Meeting notes](docs/meeting-notes/) - meeting records and action items
- [Engineering decisions](docs/decisions/) - selected parts and the reason for each decision
- [Research](docs/research/) - technical research and open questions

## Fall 2026 electrical milestones

These dates and deliverables come from the uploaded **BDC Fall 2026 Schedule**.

| Due date | Electrical milestone | Main deliverables |
| --- | --- | --- |
| Sept. 8 | Team and software setup | Software list, installation instructions, training plan, and electrical equipment/component inventory |
| Sept. 22 | Training and technical research | Electrical research brief, component comparison, and an introductory schematic, simulation, or programming exercise |
| Sept. 29 | Scope and early design | Electrical block diagram, preliminary schematic or breadboard layout, initial components, and identified questions |
| Oct. 13 | Requirements and prototype planning | Electrical requirements, preliminary schematic, breadboard plan, component list, and electrical test plan |
| Oct. 27 | Architecture and early fabrication | Electrical block diagram, input/output list, breadboard work in progress, schematic, wiring documentation, and initial code |
| Nov. 10 | Prototype Demonstration I | Working breadboard demonstration, schematic, code, wiring documentation, and preliminary observations |
| Nov. 17 | Prototype Demonstration II | Revised breadboard and schematic, updated code, test procedure, results, failures, and documented changes |
| Nov. 24 | Build Readiness Review | Electrical BOM, validated schematic, component list, pin assignments, power budget, connector plan, and PCB-readiness recommendation |
| Dec. 1 | Preliminary Design Review | Schematic progression, working breadboard, code, test results, failures, improvements, and PCB-readiness plan |

**Dec. 2-6:** Fall closeout. Revise schematics, code, and EE documentation, then organize the validated circuit information needed for spring PCB development.

## Current next steps

1. Confirm the exact STM32 Cortex-M33 development board and document the decision.
2. Compare IMU candidates against the project requirements before selecting one.
3. Create the STM32CubeIDE firmware project and confirm basic serial output.
4. Read tri-axial acceleration and angular velocity from the selected IMU.
5. Collect safe movement data and evaluate SVM thresholds in Python/Jupyter.
6. Build and test each circuit with an LED, buzzer, or other safe dummy load.

## Safety first

This is a student prototype. Do not connect or fire an inflation device during normal firmware, circuit, or algorithm testing. Begin with an LED, buzzer, or other safe dummy load. Any test involving a person, compressed gas, pyrotechnics, or an inflation mechanism needs approval, a written test plan, and proper supervision.

Do not commit names or other personal information with human-movement data. Store large recordings in approved shared storage and link them from the repository.

## Simple GitHub workflow

1. Start from the newest `main` branch.
2. Create a short branch name such as `firmware/imu-reading`, `algorithm/svm-threshold`, `hardware/power-circuit`, or `docs/week-2-notes`.
3. Complete one clear task and test it.
4. Commit with a simple message that describes the change.
5. Open a pull request and explain what changed, what you tested, and what still needs help.
6. Ask at least one teammate to review it before merging.

See [CONTRIBUTING.md](CONTRIBUTING.md) for more details.

## Firmware status

The selected direction is STM32 Cortex-M33 with STM32CubeIDE. The exact board/chip decision and the STM32CubeIDE project are not complete yet. Any older ESP32-S3 or PlatformIO starter files in the repository are legacy placeholders and should not be treated as the final architecture.
