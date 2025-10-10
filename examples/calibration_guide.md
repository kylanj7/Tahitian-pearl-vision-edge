# Calibration Guide

## Overview

Proper calibration is essential for accurate size measurements. The system needs to know how many pixels equal one millimeter.

## What You Need

- 10mm reference object (ball bearing, coin, or calibration marker)
- White background
- Consistent lighting

## Calibration Process

1. Place reference object on white background
2. Ensure good lighting (no shadows)
3. Capture image with Arduino
4. Transfer image to computer
5. Run calibration in grader.py
6. System detects reference and calculates scaling

## Tips

- Use the same lighting setup for calibration and grading
- Recalibrate if you change camera position or lighting
- Keep reference object in frame during all captures for validation
- Test calibration with known-size objects before grading pearls

## Troubleshooting

**Problem:** Calibration fails to detect reference
- Ensure high contrast with background
- Check focus and image quality
- Try different lighting angle

**Problem:** Measurements seem inaccurate
- Recalibrate with clean reference image
- Verify reference object size is correct
- Check for lens distortion at image edges
